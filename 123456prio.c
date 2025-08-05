/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   12.0
    TLCGEN:   12.4.0.17
   CCOLGEN:   12.4.0.17
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
 *
 ************************************************************************************/

#define NALOPEN
#define PRIO_ADDFILE

/*include files */
/*------------- */
    #include "123456sys.h"
    #include "stdfunc.h"  /* standaard functies                */
    #include "prio.h"     /* prio header                       */
    #include "fcvar.h"    /* fasecycli                         */
    #include "kfvar.h"    /* conflicten                        */
    #include "usvar.h"    /* uitgangs elementen                */
    #include "dpvar.h"    /* detectie elementen                */
    #include "isvar.h"    /* ingangs elementen                 */
    #include "hevar.h"    /* hulp elementen                    */
    #include "mevar.h"    /* geheugen elementen                */
    #include "tmvar.h"    /* tijd elementen                    */
    #include "ctvar.h"    /* teller elementen                  */
    #include "schvar.h"   /* software schakelaars              */
    #include "prmvar.h"   /* parameters                        */
    #include "lwmlvar.h"  /* langstwachtende modulen structuur */
    #include "control.h"  /* controller interface              */
    #include "rtappl.h"   /* applicatie routines               */
    #ifndef NO_RIS
        #include "risappl.h"   /* RIS routines                     */
        #if (CCOL_V > 100)
        #include "extra_func_ris.h"   /* RIS routines              */
        #endif
    #endif /* NO_RIS */
    #include "cif.inc"    /* interface                         */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
        #include "xyprintf.h" /* Printen debuginfo                 */
    #include "rissimvar.h"   /* RIS routines                   */
        extern boolv display;
    #endif
    #include "ccolfunc.h"
    #include "ccol_mon.h"
    #include "extra_func.h"
    #include "extra_func_prio.h"

boolv vertraag_kar_uitm[prioFCMAX];

#define MAX_AANTAL_INMELDINGEN           10
#define DEFAULT_MAX_WACHTTIJD           120
#define NO_REALISEREN_TOEGESTAAN

/* Declareren OV settings functie halfstar */

extern mulv DB_old[];

#include "prio.c"
#include "halfstar_prio.h"

/* Variabele tbv start KAR ondergedrag timer bij starten regeling */
static char startkarog = FALSE;

/* Variabelen tbv registreren stiptheid bij inmelding via KAR: tbv bepalen prioriteit in OV.ADD */
int iKARInSTP02karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm02karbus = 0;
int iKARInSTP03karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm03karbus = 0;
int iKARInSTP05karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm05karbus = 0;
int iKARInSTP08karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm08karbus = 0;
int iKARInSTP09karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm09karbus = 0;
int iKARInSTP11karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm11karbus = 0;
int iKARInSTP61karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm61karbus = 0;
int iKARInSTP62karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm62karbus = 0;
int iKARInSTP67karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm67karbus = 0;
int iKARInSTP68karbus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm68karbus = 0;

/* VLOG mon5 buffer: monitoring/logging OV */
#ifndef NO_VLOG
    #ifndef NO_VLOG_200
        /* VLOG_mon5_buffer afhandeling */
        /* ---------------------------- */
        void VLOG_mon5_buffer(void)
        {
            int ifc;
            for (ifc = 0; ifc < FCMAX; ++ifc)
            {
                mon5_buffer(SAPPLPROG, ifc,
                    VLOG_mon5[ifc].voorinov,
                    VLOG_mon5[ifc].inmov,
                    VLOG_mon5[ifc].uitmov,
                    VLOG_mon5[ifc].uitmbewov,
                    VLOG_mon5[ifc].foutuitmov,
                    VLOG_mon5[ifc].uituitmov,
                    VLOG_mon5[ifc].voorinhd,
                    VLOG_mon5[ifc].inmhd,
                    VLOG_mon5[ifc].uitmhd,
                    VLOG_mon5[ifc].uitmbewhd);
                VLOG_mon5[ifc].voorinov = FALSE;
                VLOG_mon5[ifc].inmov = FALSE;
                VLOG_mon5[ifc].uitmov = FALSE;
                VLOG_mon5[ifc].uitmbewov = FALSE;
                VLOG_mon5[ifc].foutuitmov = FALSE;
                VLOG_mon5[ifc].uituitmov = FALSE;
                VLOG_mon5[ifc].voorinhd = FALSE;
                VLOG_mon5[ifc].inmhd = FALSE;
                VLOG_mon5[ifc].uitmhd = FALSE;
                VLOG_mon5[ifc].uitmbewhd = FALSE;
            }
        }
    #endif
#endif
/*-------------------------------------------------------------------------------------------
   OVInstellingen voorziet alle OV-instellingen van een juiste waarde.
   Het gaat om de volgende instellingen:
   - iFC_PRIOix[prio]                    : (de index van) de fasecyclus van de PRIO-richting prio.
   - iT_GBix[prio]                       : (de index van) de timer voor de groenbewaking
                                           van PRIO-richting prio.
   - iH_PRIOix[prio]                     : (de index van) het hulpelement voor de
                                           prioriteitstoekenning van PRIO-richting prio.
   - iInstPrioriteitsNiveau[prio]        : het prioriteitsniveau van de inmeldingen van de
                                           PRIO-richting prio.
   - iInstPrioriteitsOpties[prio]        : de prioriteisopties van de inmeldingen van de
                                           PRIO-richting prio.
   - iGroenBewakingsTijd[prio]           : De groenbewakingstijd van de PRIO-richting prio.
   - iRTSOngehinderd[prio]               : De ongehinderde rijtijd van PRIO-richting prio.
   - iRTSBeperktGehinderd[prio]          : De beperkt gehinderde rijtijd van PRIO-richting prio.
   - iRTSGehinderd[prio]                 : De gehinderde rijtijd van PRIO-richting prio.
   - iOnderMaximum[prio]                 : Het ondermaximum van PRIO-richting prio.
   - iSelDetFoutNaGB[prio]               : De in- en uitmelddetectie van PRIO-richting prio
                                           wordt als defect beschouwd bij het aanspreken
                                           van de groenbewaking. De defectmelding wordt
                                           opgeheven bij de eerstvolgende uitmelding.
   - iMaximumWachtTijd[fc]               : de maximum wachttijd voor richting fc waarbprioen
                                           geen prioriteit meer wordt toegekend voor
                                           niet-nooddienst-inmeldingen op de PRIO-richtingen.
   - iInstPercMaxGroenTijdTerugKomen[fc] : percentage van de maximumgroentijd van richting fc
                                           waaronder na afkappen de richting terugkomt.
   - iInstMinTerugKomGroenTijd[fc]       : minimale maximumgroentijd van richting fc bij
                                           terugkomen.
   - iInstAantalMalenNietAfkappen[fc]    : aantal malen niet afkappen van richting fc na te
                                           zijn afgekapt, tenzij inmelding nooddienst.
   - iAfkapGroenTijd[fc]                 : groentijd waaronder richting fc niet mag worden
                                           afgekapt, tenzij inmelding nooddienst.
   - iPercGroenTijd[fc]                  : percentage van de maximumgroentijd dat richting fc
                                           moet hebben gemaakt, voordat deze mag worden
                                           afgekapt.
   - iInstOphoogPercentageMG[fc]         : het percentage van de maximumgroentijd dat een
                                           richting minimaal mag maken alvorens te worden
                                           afgekapt, tenzij er sprake is van een nooddienst,
                                           wordt telkens bij afkappen verhoogd met dit
                                           ophoogpercentage maximumgroentijd totdat 100% is
                                           gehaald (daarna reset).
   - iPRM_ALTP[fc]                       : ruimte die minimaal aanwezig moet zijn voor
                                           richting fc, om alternatief te realiseren tijdens
                                           niet-konflikterende PRIO-ingre(e)p(en).
   - iSCH_ALTG[fc]                       : richting fc mag alternatief realiseren tijdens
                                           niet-konflikterende PRIO-ingre(e)p(en).
   - iInstAfkapGroenAlt[fc]              : groentijd die richting fc minimaal mag maken
                                           bij een alternatieve realisatie, voordat deze
                                           mag worden afgekapt.
   - iLangstWachtendeAlternatief         : de regeling maakt gebruik van
                                           langstwachtende alternatief
   ------------------------------------------------------------------------------------------- */

void PrioInitExtra(void) 
{

    int i;

    PrioHalfstarInit();

    /* initialisatie variabelen vertraag_kar_uitm */
    /* ------------------------------------------ */
    for (i = 0; i < prioFCMAX; ++i)
    {
        vertraag_kar_uitm[i] = 0;
    }

    #ifndef NO_RIS
    /* initialisatie variabelen granted_verstrekt */
    /* ------------------------------------------ */
    for (i = 0; i < FCMAX; ++i)
    {
        granted_verstrekt[i] = 0;
    }
    #endif /* NO_RIS */

}

void PrioInstellingen(void) 
{
    /* ======================= */
    /* Instellingen PRIORITEIT */
    /* ======================= */


    /* Fasecyclus voor richtingen met PRIO */
    iFC_PRIOix[prioFC02karbus] = fc02;
    iFC_PRIOix[prioFC02risov] = fc02;
    iFC_PRIOix[prioFC02risvrw] = fc02;
    iFC_PRIOix[prioFC02risalg] = fc02;
    iFC_PRIOix[prioFC03karbus] = fc03;
    iFC_PRIOix[prioFC03risov] = fc03;
    iFC_PRIOix[prioFC03risvrw] = fc03;
    iFC_PRIOix[prioFC03risalg] = fc03;
    iFC_PRIOix[prioFC05karbus] = fc05;
    iFC_PRIOix[prioFC05risov] = fc05;
    iFC_PRIOix[prioFC05risvrw] = fc05;
    iFC_PRIOix[prioFC05risalg] = fc05;
    iFC_PRIOix[prioFC08karbus] = fc08;
    iFC_PRIOix[prioFC08risov] = fc08;
    iFC_PRIOix[prioFC08risvrw] = fc08;
    iFC_PRIOix[prioFC08risalg] = fc08;
    iFC_PRIOix[prioFC09karbus] = fc09;
    iFC_PRIOix[prioFC09risov] = fc09;
    iFC_PRIOix[prioFC09risvrw] = fc09;
    iFC_PRIOix[prioFC09risalg] = fc09;
    iFC_PRIOix[prioFC11karbus] = fc11;
    iFC_PRIOix[prioFC11risov] = fc11;
    iFC_PRIOix[prioFC11risvrw] = fc11;
    iFC_PRIOix[prioFC11risalg] = fc11;
    iFC_PRIOix[prioFC11bus] = fc11;
    iFC_PRIOix[prioFC22fiets] = fc22;
    iFC_PRIOix[prioFC28fiets] = fc28;
    iFC_PRIOix[prioFC61karbus] = fc61;
    iFC_PRIOix[prioFC61risov] = fc61;
    iFC_PRIOix[prioFC61risvrw] = fc61;
    iFC_PRIOix[prioFC61risalg] = fc61;
    iFC_PRIOix[prioFC62karbus] = fc62;
    iFC_PRIOix[prioFC62risov] = fc62;
    iFC_PRIOix[prioFC62risvrw] = fc62;
    iFC_PRIOix[prioFC62risalg] = fc62;
    iFC_PRIOix[prioFC67karbus] = fc67;
    iFC_PRIOix[prioFC67risov] = fc67;
    iFC_PRIOix[prioFC67risvrw] = fc67;
    iFC_PRIOix[prioFC67risalg] = fc67;
    iFC_PRIOix[prioFC68karbus] = fc68;
    iFC_PRIOix[prioFC68risov] = fc68;
    iFC_PRIOix[prioFC68risvrw] = fc68;
    iFC_PRIOix[prioFC68risalg] = fc68;
    iFC_PRIOix[hdFC02] = fc02;
    iFC_PRIOix[hdFC03] = fc03;
    iFC_PRIOix[hdFC05] = fc05;
    iFC_PRIOix[hdFC08] = fc08;
    iFC_PRIOix[hdFC09] = fc09;
    iFC_PRIOix[hdFC11] = fc11;
    iFC_PRIOix[hdFC61] = fc61;
    iFC_PRIOix[hdFC62] = fc62;
    iFC_PRIOix[hdFC67] = fc67;
    iFC_PRIOix[hdFC68] = fc68;

    /* Index van de groenbewakingstimer */
    iT_GBix[prioFC02karbus] = tgb02karbus;
    iT_GBix[prioFC02risov] = tgb02risov;
    iT_GBix[prioFC02risvrw] = tgb02risvrw;
    iT_GBix[prioFC02risalg] = tgb02risalg;
    iT_GBix[prioFC03karbus] = tgb03karbus;
    iT_GBix[prioFC03risov] = tgb03risov;
    iT_GBix[prioFC03risvrw] = tgb03risvrw;
    iT_GBix[prioFC03risalg] = tgb03risalg;
    iT_GBix[prioFC05karbus] = tgb05karbus;
    iT_GBix[prioFC05risov] = tgb05risov;
    iT_GBix[prioFC05risvrw] = tgb05risvrw;
    iT_GBix[prioFC05risalg] = tgb05risalg;
    iT_GBix[prioFC08karbus] = tgb08karbus;
    iT_GBix[prioFC08risov] = tgb08risov;
    iT_GBix[prioFC08risvrw] = tgb08risvrw;
    iT_GBix[prioFC08risalg] = tgb08risalg;
    iT_GBix[prioFC09karbus] = tgb09karbus;
    iT_GBix[prioFC09risov] = tgb09risov;
    iT_GBix[prioFC09risvrw] = tgb09risvrw;
    iT_GBix[prioFC09risalg] = tgb09risalg;
    iT_GBix[prioFC11karbus] = tgb11karbus;
    iT_GBix[prioFC11risov] = tgb11risov;
    iT_GBix[prioFC11risvrw] = tgb11risvrw;
    iT_GBix[prioFC11risalg] = tgb11risalg;
    iT_GBix[prioFC11bus] = tgb11bus;
    iT_GBix[prioFC22fiets] = tgb22fiets;
    iT_GBix[prioFC28fiets] = tgb28fiets;
    iT_GBix[prioFC61karbus] = tgb61karbus;
    iT_GBix[prioFC61risov] = tgb61risov;
    iT_GBix[prioFC61risvrw] = tgb61risvrw;
    iT_GBix[prioFC61risalg] = tgb61risalg;
    iT_GBix[prioFC62karbus] = tgb62karbus;
    iT_GBix[prioFC62risov] = tgb62risov;
    iT_GBix[prioFC62risvrw] = tgb62risvrw;
    iT_GBix[prioFC62risalg] = tgb62risalg;
    iT_GBix[prioFC67karbus] = tgb67karbus;
    iT_GBix[prioFC67risov] = tgb67risov;
    iT_GBix[prioFC67risvrw] = tgb67risvrw;
    iT_GBix[prioFC67risalg] = tgb67risalg;
    iT_GBix[prioFC68karbus] = tgb68karbus;
    iT_GBix[prioFC68risov] = tgb68risov;
    iT_GBix[prioFC68risvrw] = tgb68risvrw;
    iT_GBix[prioFC68risalg] = tgb68risalg;
    iT_GBix[hdFC02] = tgbhd02;
    iT_GBix[hdFC03] = tgbhd03;
    iT_GBix[hdFC05] = tgbhd05;
    iT_GBix[hdFC08] = tgbhd08;
    iT_GBix[hdFC09] = tgbhd09;
    iT_GBix[hdFC11] = tgbhd11;
    iT_GBix[hdFC61] = tgbhd61;
    iT_GBix[hdFC62] = tgbhd62;
    iT_GBix[hdFC67] = tgbhd67;
    iT_GBix[hdFC68] = tgbhd68;

    /* Index van het hulpelement voor de ingreep */
    iH_PRIOix[prioFC02karbus] = hprio02karbus;
    iH_PRIOix[prioFC02risov] = hprio02risov;
    iH_PRIOix[prioFC02risvrw] = hprio02risvrw;
    iH_PRIOix[prioFC02risalg] = hprio02risalg;
    iH_PRIOix[prioFC03karbus] = hprio03karbus;
    iH_PRIOix[prioFC03risov] = hprio03risov;
    iH_PRIOix[prioFC03risvrw] = hprio03risvrw;
    iH_PRIOix[prioFC03risalg] = hprio03risalg;
    iH_PRIOix[prioFC05karbus] = hprio05karbus;
    iH_PRIOix[prioFC05risov] = hprio05risov;
    iH_PRIOix[prioFC05risvrw] = hprio05risvrw;
    iH_PRIOix[prioFC05risalg] = hprio05risalg;
    iH_PRIOix[prioFC08karbus] = hprio08karbus;
    iH_PRIOix[prioFC08risov] = hprio08risov;
    iH_PRIOix[prioFC08risvrw] = hprio08risvrw;
    iH_PRIOix[prioFC08risalg] = hprio08risalg;
    iH_PRIOix[prioFC09karbus] = hprio09karbus;
    iH_PRIOix[prioFC09risov] = hprio09risov;
    iH_PRIOix[prioFC09risvrw] = hprio09risvrw;
    iH_PRIOix[prioFC09risalg] = hprio09risalg;
    iH_PRIOix[prioFC11karbus] = hprio11karbus;
    iH_PRIOix[prioFC11risov] = hprio11risov;
    iH_PRIOix[prioFC11risvrw] = hprio11risvrw;
    iH_PRIOix[prioFC11risalg] = hprio11risalg;
    iH_PRIOix[prioFC11bus] = hprio11bus;
    iH_PRIOix[prioFC22fiets] = hprio22fiets;
    iH_PRIOix[prioFC28fiets] = hprio28fiets;
    iH_PRIOix[prioFC61karbus] = hprio61karbus;
    iH_PRIOix[prioFC61risov] = hprio61risov;
    iH_PRIOix[prioFC61risvrw] = hprio61risvrw;
    iH_PRIOix[prioFC61risalg] = hprio61risalg;
    iH_PRIOix[prioFC62karbus] = hprio62karbus;
    iH_PRIOix[prioFC62risov] = hprio62risov;
    iH_PRIOix[prioFC62risvrw] = hprio62risvrw;
    iH_PRIOix[prioFC62risalg] = hprio62risalg;
    iH_PRIOix[prioFC67karbus] = hprio67karbus;
    iH_PRIOix[prioFC67risov] = hprio67risov;
    iH_PRIOix[prioFC67risvrw] = hprio67risvrw;
    iH_PRIOix[prioFC67risalg] = hprio67risalg;
    iH_PRIOix[prioFC68karbus] = hprio68karbus;
    iH_PRIOix[prioFC68risov] = hprio68risov;
    iH_PRIOix[prioFC68risvrw] = hprio68risvrw;
    iH_PRIOix[prioFC68risalg] = hprio68risalg;
    iH_PRIOix[hdFC02] = hhd02;
    iH_PRIOix[hdFC03] = hhd03;
    iH_PRIOix[hdFC05] = hhd05;
    iH_PRIOix[hdFC08] = hhd08;
    iH_PRIOix[hdFC09] = hhd09;
    iH_PRIOix[hdFC11] = hhd11;
    iH_PRIOix[hdFC61] = hhd61;
    iH_PRIOix[hdFC62] = hhd62;
    iH_PRIOix[hdFC67] = hhd67;
    iH_PRIOix[hdFC68] = hhd68;

    /* Prioriteitsniveau */
    iInstPrioriteitsNiveau[prioFC02karbus] = PRM[prmprio02karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC02risov] = PRM[prmprio02risov]/1000L;
    iInstPrioriteitsNiveau[prioFC02risvrw] = PRM[prmprio02risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC02risalg] = PRM[prmprio02risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC03karbus] = PRM[prmprio03karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC03risov] = PRM[prmprio03risov]/1000L;
    iInstPrioriteitsNiveau[prioFC03risvrw] = PRM[prmprio03risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC03risalg] = PRM[prmprio03risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC05karbus] = PRM[prmprio05karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC05risov] = PRM[prmprio05risov]/1000L;
    iInstPrioriteitsNiveau[prioFC05risvrw] = PRM[prmprio05risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC05risalg] = PRM[prmprio05risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC08karbus] = PRM[prmprio08karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC08risov] = PRM[prmprio08risov]/1000L;
    iInstPrioriteitsNiveau[prioFC08risvrw] = PRM[prmprio08risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC08risalg] = PRM[prmprio08risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC09karbus] = PRM[prmprio09karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC09risov] = PRM[prmprio09risov]/1000L;
    iInstPrioriteitsNiveau[prioFC09risvrw] = PRM[prmprio09risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC09risalg] = PRM[prmprio09risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC11karbus] = PRM[prmprio11karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC11risov] = PRM[prmprio11risov]/1000L;
    iInstPrioriteitsNiveau[prioFC11risvrw] = PRM[prmprio11risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC11risalg] = PRM[prmprio11risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC11bus] = PRM[prmprio11bus]/1000L;
    iInstPrioriteitsNiveau[prioFC22fiets] = PRM[prmprio22fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC28fiets] = PRM[prmprio28fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC61karbus] = PRM[prmprio61karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC61risov] = PRM[prmprio61risov]/1000L;
    iInstPrioriteitsNiveau[prioFC61risvrw] = PRM[prmprio61risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC61risalg] = PRM[prmprio61risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC62karbus] = PRM[prmprio62karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC62risov] = PRM[prmprio62risov]/1000L;
    iInstPrioriteitsNiveau[prioFC62risvrw] = PRM[prmprio62risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC62risalg] = PRM[prmprio62risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC67karbus] = PRM[prmprio67karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC67risov] = PRM[prmprio67risov]/1000L;
    iInstPrioriteitsNiveau[prioFC67risvrw] = PRM[prmprio67risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC67risalg] = PRM[prmprio67risalg]/1000L;
    iInstPrioriteitsNiveau[prioFC68karbus] = PRM[prmprio68karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC68risov] = PRM[prmprio68risov]/1000L;
    iInstPrioriteitsNiveau[prioFC68risvrw] = PRM[prmprio68risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC68risalg] = PRM[prmprio68risalg]/1000L;
    iInstPrioriteitsNiveau[hdFC02] = PRM[prmpriohd02]/1000L;
    iInstPrioriteitsNiveau[hdFC03] = PRM[prmpriohd03]/1000L;
    iInstPrioriteitsNiveau[hdFC05] = PRM[prmpriohd05]/1000L;
    iInstPrioriteitsNiveau[hdFC08] = PRM[prmpriohd08]/1000L;
    iInstPrioriteitsNiveau[hdFC09] = PRM[prmpriohd09]/1000L;
    iInstPrioriteitsNiveau[hdFC11] = PRM[prmpriohd11]/1000L;
    iInstPrioriteitsNiveau[hdFC61] = PRM[prmpriohd61]/1000L;
    iInstPrioriteitsNiveau[hdFC62] = PRM[prmpriohd62]/1000L;
    iInstPrioriteitsNiveau[hdFC67] = PRM[prmpriohd67]/1000L;
    iInstPrioriteitsNiveau[hdFC68] = PRM[prmpriohd68]/1000L;

    /* Prioriteitsopties */
    iInstPrioriteitsOpties[prioFC02karbus] = BepaalPrioriteitsOpties(prmprio02karbus);
    iInstPrioriteitsOpties[prioFC02risov] = BepaalPrioriteitsOpties(prmprio02risov);
    iInstPrioriteitsOpties[prioFC02risvrw] = BepaalPrioriteitsOpties(prmprio02risvrw);
    iInstPrioriteitsOpties[prioFC02risalg] = BepaalPrioriteitsOpties(prmprio02risalg);
    iInstPrioriteitsOpties[prioFC03karbus] = BepaalPrioriteitsOpties(prmprio03karbus);
    iInstPrioriteitsOpties[prioFC03risov] = BepaalPrioriteitsOpties(prmprio03risov);
    iInstPrioriteitsOpties[prioFC03risvrw] = BepaalPrioriteitsOpties(prmprio03risvrw);
    iInstPrioriteitsOpties[prioFC03risalg] = BepaalPrioriteitsOpties(prmprio03risalg);
    iInstPrioriteitsOpties[prioFC05karbus] = BepaalPrioriteitsOpties(prmprio05karbus);
    iInstPrioriteitsOpties[prioFC05risov] = BepaalPrioriteitsOpties(prmprio05risov);
    iInstPrioriteitsOpties[prioFC05risvrw] = BepaalPrioriteitsOpties(prmprio05risvrw);
    iInstPrioriteitsOpties[prioFC05risalg] = BepaalPrioriteitsOpties(prmprio05risalg);
    iInstPrioriteitsOpties[prioFC08karbus] = BepaalPrioriteitsOpties(prmprio08karbus);
    iInstPrioriteitsOpties[prioFC08risov] = BepaalPrioriteitsOpties(prmprio08risov);
    iInstPrioriteitsOpties[prioFC08risvrw] = BepaalPrioriteitsOpties(prmprio08risvrw);
    iInstPrioriteitsOpties[prioFC08risalg] = BepaalPrioriteitsOpties(prmprio08risalg);
    iInstPrioriteitsOpties[prioFC09karbus] = BepaalPrioriteitsOpties(prmprio09karbus);
    iInstPrioriteitsOpties[prioFC09risov] = BepaalPrioriteitsOpties(prmprio09risov);
    iInstPrioriteitsOpties[prioFC09risvrw] = BepaalPrioriteitsOpties(prmprio09risvrw);
    iInstPrioriteitsOpties[prioFC09risalg] = BepaalPrioriteitsOpties(prmprio09risalg);
    iInstPrioriteitsOpties[prioFC11karbus] = BepaalPrioriteitsOpties(prmprio11karbus);
    iInstPrioriteitsOpties[prioFC11risov] = BepaalPrioriteitsOpties(prmprio11risov);
    iInstPrioriteitsOpties[prioFC11risvrw] = BepaalPrioriteitsOpties(prmprio11risvrw);
    iInstPrioriteitsOpties[prioFC11risalg] = BepaalPrioriteitsOpties(prmprio11risalg);
    iInstPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmprio11bus);
    iInstPrioriteitsOpties[prioFC22fiets] = BepaalPrioriteitsOpties(prmprio22fiets);
    iInstPrioriteitsOpties[prioFC28fiets] = BepaalPrioriteitsOpties(prmprio28fiets);
    iInstPrioriteitsOpties[prioFC61karbus] = BepaalPrioriteitsOpties(prmprio61karbus);
    iInstPrioriteitsOpties[prioFC61risov] = BepaalPrioriteitsOpties(prmprio61risov);
    iInstPrioriteitsOpties[prioFC61risvrw] = BepaalPrioriteitsOpties(prmprio61risvrw);
    iInstPrioriteitsOpties[prioFC61risalg] = BepaalPrioriteitsOpties(prmprio61risalg);
    iInstPrioriteitsOpties[prioFC62karbus] = BepaalPrioriteitsOpties(prmprio62karbus);
    iInstPrioriteitsOpties[prioFC62risov] = BepaalPrioriteitsOpties(prmprio62risov);
    iInstPrioriteitsOpties[prioFC62risvrw] = BepaalPrioriteitsOpties(prmprio62risvrw);
    iInstPrioriteitsOpties[prioFC62risalg] = BepaalPrioriteitsOpties(prmprio62risalg);
    iInstPrioriteitsOpties[prioFC67karbus] = BepaalPrioriteitsOpties(prmprio67karbus);
    iInstPrioriteitsOpties[prioFC67risov] = BepaalPrioriteitsOpties(prmprio67risov);
    iInstPrioriteitsOpties[prioFC67risvrw] = BepaalPrioriteitsOpties(prmprio67risvrw);
    iInstPrioriteitsOpties[prioFC67risalg] = BepaalPrioriteitsOpties(prmprio67risalg);
    iInstPrioriteitsOpties[prioFC68karbus] = BepaalPrioriteitsOpties(prmprio68karbus);
    iInstPrioriteitsOpties[prioFC68risov] = BepaalPrioriteitsOpties(prmprio68risov);
    iInstPrioriteitsOpties[prioFC68risvrw] = BepaalPrioriteitsOpties(prmprio68risvrw);
    iInstPrioriteitsOpties[prioFC68risalg] = BepaalPrioriteitsOpties(prmprio68risalg);
    iInstPrioriteitsOpties[hdFC02] = BepaalPrioriteitsOpties(prmpriohd02);
    iInstPrioriteitsOpties[hdFC03] = BepaalPrioriteitsOpties(prmpriohd03);
    iInstPrioriteitsOpties[hdFC05] = BepaalPrioriteitsOpties(prmpriohd05);
    iInstPrioriteitsOpties[hdFC08] = BepaalPrioriteitsOpties(prmpriohd08);
    iInstPrioriteitsOpties[hdFC09] = BepaalPrioriteitsOpties(prmpriohd09);
    iInstPrioriteitsOpties[hdFC11] = BepaalPrioriteitsOpties(prmpriohd11);
    iInstPrioriteitsOpties[hdFC61] = BepaalPrioriteitsOpties(prmpriohd61);
    iInstPrioriteitsOpties[hdFC62] = BepaalPrioriteitsOpties(prmpriohd62);
    iInstPrioriteitsOpties[hdFC67] = BepaalPrioriteitsOpties(prmpriohd67);
    iInstPrioriteitsOpties[hdFC68] = BepaalPrioriteitsOpties(prmpriohd68);

    /* Groenbewakingstijd */
    iGroenBewakingsTijd[prioFC02karbus] = T_max[tgb02karbus];
    iGroenBewakingsTijd[prioFC02risov] = T_max[tgb02risov];
    iGroenBewakingsTijd[prioFC02risvrw] = T_max[tgb02risvrw];
    iGroenBewakingsTijd[prioFC02risalg] = T_max[tgb02risalg];
    iGroenBewakingsTijd[prioFC03karbus] = T_max[tgb03karbus];
    iGroenBewakingsTijd[prioFC03risov] = T_max[tgb03risov];
    iGroenBewakingsTijd[prioFC03risvrw] = T_max[tgb03risvrw];
    iGroenBewakingsTijd[prioFC03risalg] = T_max[tgb03risalg];
    iGroenBewakingsTijd[prioFC05karbus] = T_max[tgb05karbus];
    iGroenBewakingsTijd[prioFC05risov] = T_max[tgb05risov];
    iGroenBewakingsTijd[prioFC05risvrw] = T_max[tgb05risvrw];
    iGroenBewakingsTijd[prioFC05risalg] = T_max[tgb05risalg];
    iGroenBewakingsTijd[prioFC08karbus] = T_max[tgb08karbus];
    iGroenBewakingsTijd[prioFC08risov] = T_max[tgb08risov];
    iGroenBewakingsTijd[prioFC08risvrw] = T_max[tgb08risvrw];
    iGroenBewakingsTijd[prioFC08risalg] = T_max[tgb08risalg];
    iGroenBewakingsTijd[prioFC09karbus] = T_max[tgb09karbus];
    iGroenBewakingsTijd[prioFC09risov] = T_max[tgb09risov];
    iGroenBewakingsTijd[prioFC09risvrw] = T_max[tgb09risvrw];
    iGroenBewakingsTijd[prioFC09risalg] = T_max[tgb09risalg];
    iGroenBewakingsTijd[prioFC11karbus] = T_max[tgb11karbus];
    iGroenBewakingsTijd[prioFC11risov] = T_max[tgb11risov];
    iGroenBewakingsTijd[prioFC11risvrw] = T_max[tgb11risvrw];
    iGroenBewakingsTijd[prioFC11risalg] = T_max[tgb11risalg];
    iGroenBewakingsTijd[prioFC11bus] = T_max[tgb11bus];
    iGroenBewakingsTijd[prioFC22fiets] = T_max[tgb22fiets];
    iGroenBewakingsTijd[prioFC28fiets] = T_max[tgb28fiets];
    iGroenBewakingsTijd[prioFC61karbus] = T_max[tgb61karbus];
    iGroenBewakingsTijd[prioFC61risov] = T_max[tgb61risov];
    iGroenBewakingsTijd[prioFC61risvrw] = T_max[tgb61risvrw];
    iGroenBewakingsTijd[prioFC61risalg] = T_max[tgb61risalg];
    iGroenBewakingsTijd[prioFC62karbus] = T_max[tgb62karbus];
    iGroenBewakingsTijd[prioFC62risov] = T_max[tgb62risov];
    iGroenBewakingsTijd[prioFC62risvrw] = T_max[tgb62risvrw];
    iGroenBewakingsTijd[prioFC62risalg] = T_max[tgb62risalg];
    iGroenBewakingsTijd[prioFC67karbus] = T_max[tgb67karbus];
    iGroenBewakingsTijd[prioFC67risov] = T_max[tgb67risov];
    iGroenBewakingsTijd[prioFC67risvrw] = T_max[tgb67risvrw];
    iGroenBewakingsTijd[prioFC67risalg] = T_max[tgb67risalg];
    iGroenBewakingsTijd[prioFC68karbus] = T_max[tgb68karbus];
    iGroenBewakingsTijd[prioFC68risov] = T_max[tgb68risov];
    iGroenBewakingsTijd[prioFC68risvrw] = T_max[tgb68risvrw];
    iGroenBewakingsTijd[prioFC68risalg] = T_max[tgb68risalg];
    iGroenBewakingsTijd[hdFC02] = T_max[tgbhd02];
    iGroenBewakingsTijd[hdFC03] = T_max[tgbhd03];
    iGroenBewakingsTijd[hdFC05] = T_max[tgbhd05];
    iGroenBewakingsTijd[hdFC08] = T_max[tgbhd08];
    iGroenBewakingsTijd[hdFC09] = T_max[tgbhd09];
    iGroenBewakingsTijd[hdFC11] = T_max[tgbhd11];
    iGroenBewakingsTijd[hdFC61] = T_max[tgbhd61];
    iGroenBewakingsTijd[hdFC62] = T_max[tgbhd62];
    iGroenBewakingsTijd[hdFC67] = T_max[tgbhd67];
    iGroenBewakingsTijd[hdFC68] = T_max[tgbhd68];

    /* Ongehinderde rijtijd */
    iRTSOngehinderd[prioFC02karbus] = PRM[prmrto02karbus];
    iRTSOngehinderd[prioFC02risov] = PRM[prmrto02risov];
    iRTSOngehinderd[prioFC02risvrw] = PRM[prmrto02risvrw];
    iRTSOngehinderd[prioFC02risalg] = PRM[prmrto02risalg];
    iRTSOngehinderd[prioFC03karbus] = PRM[prmrto03karbus];
    iRTSOngehinderd[prioFC03risov] = PRM[prmrto03risov];
    iRTSOngehinderd[prioFC03risvrw] = PRM[prmrto03risvrw];
    iRTSOngehinderd[prioFC03risalg] = PRM[prmrto03risalg];
    iRTSOngehinderd[prioFC05karbus] = PRM[prmrto05karbus];
    iRTSOngehinderd[prioFC05risov] = PRM[prmrto05risov];
    iRTSOngehinderd[prioFC05risvrw] = PRM[prmrto05risvrw];
    iRTSOngehinderd[prioFC05risalg] = PRM[prmrto05risalg];
    iRTSOngehinderd[prioFC08karbus] = PRM[prmrto08karbus];
    iRTSOngehinderd[prioFC08risov] = PRM[prmrto08risov];
    iRTSOngehinderd[prioFC08risvrw] = PRM[prmrto08risvrw];
    iRTSOngehinderd[prioFC08risalg] = PRM[prmrto08risalg];
    iRTSOngehinderd[prioFC09karbus] = PRM[prmrto09karbus];
    iRTSOngehinderd[prioFC09risov] = PRM[prmrto09risov];
    iRTSOngehinderd[prioFC09risvrw] = PRM[prmrto09risvrw];
    iRTSOngehinderd[prioFC09risalg] = PRM[prmrto09risalg];
    iRTSOngehinderd[prioFC11karbus] = PRM[prmrto11karbus];
    iRTSOngehinderd[prioFC11risov] = PRM[prmrto11risov];
    iRTSOngehinderd[prioFC11risvrw] = PRM[prmrto11risvrw];
    iRTSOngehinderd[prioFC11risalg] = PRM[prmrto11risalg];
    iRTSOngehinderd[prioFC11bus] = PRM[prmrto11bus];
    iRTSOngehinderd[prioFC22fiets] = PRM[prmrto22fiets];
    iRTSOngehinderd[prioFC28fiets] = PRM[prmrto28fiets];
    iRTSOngehinderd[prioFC61karbus] = PRM[prmrto61karbus];
    iRTSOngehinderd[prioFC61risov] = PRM[prmrto61risov];
    iRTSOngehinderd[prioFC61risvrw] = PRM[prmrto61risvrw];
    iRTSOngehinderd[prioFC61risalg] = PRM[prmrto61risalg];
    iRTSOngehinderd[prioFC62karbus] = PRM[prmrto62karbus];
    iRTSOngehinderd[prioFC62risov] = PRM[prmrto62risov];
    iRTSOngehinderd[prioFC62risvrw] = PRM[prmrto62risvrw];
    iRTSOngehinderd[prioFC62risalg] = PRM[prmrto62risalg];
    iRTSOngehinderd[prioFC67karbus] = PRM[prmrto67karbus];
    iRTSOngehinderd[prioFC67risov] = PRM[prmrto67risov];
    iRTSOngehinderd[prioFC67risvrw] = PRM[prmrto67risvrw];
    iRTSOngehinderd[prioFC67risalg] = PRM[prmrto67risalg];
    iRTSOngehinderd[prioFC68karbus] = PRM[prmrto68karbus];
    iRTSOngehinderd[prioFC68risov] = PRM[prmrto68risov];
    iRTSOngehinderd[prioFC68risvrw] = PRM[prmrto68risvrw];
    iRTSOngehinderd[prioFC68risalg] = PRM[prmrto68risalg];
    iRTSOngehinderd[hdFC02] = PRM[prmrtohd02];
    iRTSOngehinderd[hdFC03] = PRM[prmrtohd03];
    iRTSOngehinderd[hdFC05] = PRM[prmrtohd05];
    iRTSOngehinderd[hdFC08] = PRM[prmrtohd08];
    iRTSOngehinderd[hdFC09] = PRM[prmrtohd09];
    iRTSOngehinderd[hdFC11] = PRM[prmrtohd11];
    iRTSOngehinderd[hdFC61] = PRM[prmrtohd61];
    iRTSOngehinderd[hdFC62] = PRM[prmrtohd62];
    iRTSOngehinderd[hdFC67] = PRM[prmrtohd67];
    iRTSOngehinderd[hdFC68] = PRM[prmrtohd68];

    /* Beperkt gehinderde rijtijd */
    iRTSBeperktGehinderd[prioFC02karbus] = PRM[prmrtbg02karbus];
    iRTSBeperktGehinderd[prioFC02risov] = PRM[prmrtbg02risov];
    iRTSBeperktGehinderd[prioFC02risvrw] = PRM[prmrtbg02risvrw];
    iRTSBeperktGehinderd[prioFC02risalg] = PRM[prmrtbg02risalg];
    iRTSBeperktGehinderd[prioFC03karbus] = PRM[prmrtbg03karbus];
    iRTSBeperktGehinderd[prioFC03risov] = PRM[prmrtbg03risov];
    iRTSBeperktGehinderd[prioFC03risvrw] = PRM[prmrtbg03risvrw];
    iRTSBeperktGehinderd[prioFC03risalg] = PRM[prmrtbg03risalg];
    iRTSBeperktGehinderd[prioFC05karbus] = PRM[prmrtbg05karbus];
    iRTSBeperktGehinderd[prioFC05risov] = PRM[prmrtbg05risov];
    iRTSBeperktGehinderd[prioFC05risvrw] = PRM[prmrtbg05risvrw];
    iRTSBeperktGehinderd[prioFC05risalg] = PRM[prmrtbg05risalg];
    iRTSBeperktGehinderd[prioFC08karbus] = PRM[prmrtbg08karbus];
    iRTSBeperktGehinderd[prioFC08risov] = PRM[prmrtbg08risov];
    iRTSBeperktGehinderd[prioFC08risvrw] = PRM[prmrtbg08risvrw];
    iRTSBeperktGehinderd[prioFC08risalg] = PRM[prmrtbg08risalg];
    iRTSBeperktGehinderd[prioFC09karbus] = PRM[prmrtbg09karbus];
    iRTSBeperktGehinderd[prioFC09risov] = PRM[prmrtbg09risov];
    iRTSBeperktGehinderd[prioFC09risvrw] = PRM[prmrtbg09risvrw];
    iRTSBeperktGehinderd[prioFC09risalg] = PRM[prmrtbg09risalg];
    iRTSBeperktGehinderd[prioFC11karbus] = PRM[prmrtbg11karbus];
    iRTSBeperktGehinderd[prioFC11risov] = PRM[prmrtbg11risov];
    iRTSBeperktGehinderd[prioFC11risvrw] = PRM[prmrtbg11risvrw];
    iRTSBeperktGehinderd[prioFC11risalg] = PRM[prmrtbg11risalg];
    iRTSBeperktGehinderd[prioFC11bus] = PRM[prmrtbg11bus];
    iRTSBeperktGehinderd[prioFC22fiets] = PRM[prmrtbg22fiets];
    iRTSBeperktGehinderd[prioFC28fiets] = PRM[prmrtbg28fiets];
    iRTSBeperktGehinderd[prioFC61karbus] = PRM[prmrtbg61karbus];
    iRTSBeperktGehinderd[prioFC61risov] = PRM[prmrtbg61risov];
    iRTSBeperktGehinderd[prioFC61risvrw] = PRM[prmrtbg61risvrw];
    iRTSBeperktGehinderd[prioFC61risalg] = PRM[prmrtbg61risalg];
    iRTSBeperktGehinderd[prioFC62karbus] = PRM[prmrtbg62karbus];
    iRTSBeperktGehinderd[prioFC62risov] = PRM[prmrtbg62risov];
    iRTSBeperktGehinderd[prioFC62risvrw] = PRM[prmrtbg62risvrw];
    iRTSBeperktGehinderd[prioFC62risalg] = PRM[prmrtbg62risalg];
    iRTSBeperktGehinderd[prioFC67karbus] = PRM[prmrtbg67karbus];
    iRTSBeperktGehinderd[prioFC67risov] = PRM[prmrtbg67risov];
    iRTSBeperktGehinderd[prioFC67risvrw] = PRM[prmrtbg67risvrw];
    iRTSBeperktGehinderd[prioFC67risalg] = PRM[prmrtbg67risalg];
    iRTSBeperktGehinderd[prioFC68karbus] = PRM[prmrtbg68karbus];
    iRTSBeperktGehinderd[prioFC68risov] = PRM[prmrtbg68risov];
    iRTSBeperktGehinderd[prioFC68risvrw] = PRM[prmrtbg68risvrw];
    iRTSBeperktGehinderd[prioFC68risalg] = PRM[prmrtbg68risalg];
    iRTSBeperktGehinderd[hdFC02] = PRM[prmrtbghd02];
    iRTSBeperktGehinderd[hdFC03] = PRM[prmrtbghd03];
    iRTSBeperktGehinderd[hdFC05] = PRM[prmrtbghd05];
    iRTSBeperktGehinderd[hdFC08] = PRM[prmrtbghd08];
    iRTSBeperktGehinderd[hdFC09] = PRM[prmrtbghd09];
    iRTSBeperktGehinderd[hdFC11] = PRM[prmrtbghd11];
    iRTSBeperktGehinderd[hdFC61] = PRM[prmrtbghd61];
    iRTSBeperktGehinderd[hdFC62] = PRM[prmrtbghd62];
    iRTSBeperktGehinderd[hdFC67] = PRM[prmrtbghd67];
    iRTSBeperktGehinderd[hdFC68] = PRM[prmrtbghd68];

    /* Gehinderde rijtijd */
    iRTSGehinderd[prioFC02karbus] = PRM[prmrtg02karbus];
    iRTSGehinderd[prioFC02risov] = PRM[prmrtg02risov];
    iRTSGehinderd[prioFC02risvrw] = PRM[prmrtg02risvrw];
    iRTSGehinderd[prioFC02risalg] = PRM[prmrtg02risalg];
    iRTSGehinderd[prioFC03karbus] = PRM[prmrtg03karbus];
    iRTSGehinderd[prioFC03risov] = PRM[prmrtg03risov];
    iRTSGehinderd[prioFC03risvrw] = PRM[prmrtg03risvrw];
    iRTSGehinderd[prioFC03risalg] = PRM[prmrtg03risalg];
    iRTSGehinderd[prioFC05karbus] = PRM[prmrtg05karbus];
    iRTSGehinderd[prioFC05risov] = PRM[prmrtg05risov];
    iRTSGehinderd[prioFC05risvrw] = PRM[prmrtg05risvrw];
    iRTSGehinderd[prioFC05risalg] = PRM[prmrtg05risalg];
    iRTSGehinderd[prioFC08karbus] = PRM[prmrtg08karbus];
    iRTSGehinderd[prioFC08risov] = PRM[prmrtg08risov];
    iRTSGehinderd[prioFC08risvrw] = PRM[prmrtg08risvrw];
    iRTSGehinderd[prioFC08risalg] = PRM[prmrtg08risalg];
    iRTSGehinderd[prioFC09karbus] = PRM[prmrtg09karbus];
    iRTSGehinderd[prioFC09risov] = PRM[prmrtg09risov];
    iRTSGehinderd[prioFC09risvrw] = PRM[prmrtg09risvrw];
    iRTSGehinderd[prioFC09risalg] = PRM[prmrtg09risalg];
    iRTSGehinderd[prioFC11karbus] = PRM[prmrtg11karbus];
    iRTSGehinderd[prioFC11risov] = PRM[prmrtg11risov];
    iRTSGehinderd[prioFC11risvrw] = PRM[prmrtg11risvrw];
    iRTSGehinderd[prioFC11risalg] = PRM[prmrtg11risalg];
    iRTSGehinderd[prioFC11bus] = PRM[prmrtg11bus];
    iRTSGehinderd[prioFC22fiets] = PRM[prmrtg22fiets];
    iRTSGehinderd[prioFC28fiets] = PRM[prmrtg28fiets];
    iRTSGehinderd[prioFC61karbus] = PRM[prmrtg61karbus];
    iRTSGehinderd[prioFC61risov] = PRM[prmrtg61risov];
    iRTSGehinderd[prioFC61risvrw] = PRM[prmrtg61risvrw];
    iRTSGehinderd[prioFC61risalg] = PRM[prmrtg61risalg];
    iRTSGehinderd[prioFC62karbus] = PRM[prmrtg62karbus];
    iRTSGehinderd[prioFC62risov] = PRM[prmrtg62risov];
    iRTSGehinderd[prioFC62risvrw] = PRM[prmrtg62risvrw];
    iRTSGehinderd[prioFC62risalg] = PRM[prmrtg62risalg];
    iRTSGehinderd[prioFC67karbus] = PRM[prmrtg67karbus];
    iRTSGehinderd[prioFC67risov] = PRM[prmrtg67risov];
    iRTSGehinderd[prioFC67risvrw] = PRM[prmrtg67risvrw];
    iRTSGehinderd[prioFC67risalg] = PRM[prmrtg67risalg];
    iRTSGehinderd[prioFC68karbus] = PRM[prmrtg68karbus];
    iRTSGehinderd[prioFC68risov] = PRM[prmrtg68risov];
    iRTSGehinderd[prioFC68risvrw] = PRM[prmrtg68risvrw];
    iRTSGehinderd[prioFC68risalg] = PRM[prmrtg68risalg];
    iRTSGehinderd[hdFC02] = PRM[prmrtghd02];
    iRTSGehinderd[hdFC03] = PRM[prmrtghd03];
    iRTSGehinderd[hdFC05] = PRM[prmrtghd05];
    iRTSGehinderd[hdFC08] = PRM[prmrtghd08];
    iRTSGehinderd[hdFC09] = PRM[prmrtghd09];
    iRTSGehinderd[hdFC11] = PRM[prmrtghd11];
    iRTSGehinderd[hdFC61] = PRM[prmrtghd61];
    iRTSGehinderd[hdFC62] = PRM[prmrtghd62];
    iRTSGehinderd[hdFC67] = PRM[prmrtghd67];
    iRTSGehinderd[hdFC68] = PRM[prmrtghd68];

    /* Ondermaximum */
    iOnderMaximum[prioFC02karbus] = PRM[prmomx02karbus];
    iOnderMaximum[prioFC02risov] = PRM[prmomx02risov];
    iOnderMaximum[prioFC02risvrw] = PRM[prmomx02risvrw];
    iOnderMaximum[prioFC02risalg] = PRM[prmomx02risalg];
    iOnderMaximum[prioFC03karbus] = PRM[prmomx03karbus];
    iOnderMaximum[prioFC03risov] = PRM[prmomx03risov];
    iOnderMaximum[prioFC03risvrw] = PRM[prmomx03risvrw];
    iOnderMaximum[prioFC03risalg] = PRM[prmomx03risalg];
    iOnderMaximum[prioFC05karbus] = PRM[prmomx05karbus];
    iOnderMaximum[prioFC05risov] = PRM[prmomx05risov];
    iOnderMaximum[prioFC05risvrw] = PRM[prmomx05risvrw];
    iOnderMaximum[prioFC05risalg] = PRM[prmomx05risalg];
    iOnderMaximum[prioFC08karbus] = PRM[prmomx08karbus];
    iOnderMaximum[prioFC08risov] = PRM[prmomx08risov];
    iOnderMaximum[prioFC08risvrw] = PRM[prmomx08risvrw];
    iOnderMaximum[prioFC08risalg] = PRM[prmomx08risalg];
    iOnderMaximum[prioFC09karbus] = PRM[prmomx09karbus];
    iOnderMaximum[prioFC09risov] = PRM[prmomx09risov];
    iOnderMaximum[prioFC09risvrw] = PRM[prmomx09risvrw];
    iOnderMaximum[prioFC09risalg] = PRM[prmomx09risalg];
    iOnderMaximum[prioFC11karbus] = PRM[prmomx11karbus];
    iOnderMaximum[prioFC11risov] = PRM[prmomx11risov];
    iOnderMaximum[prioFC11risvrw] = PRM[prmomx11risvrw];
    iOnderMaximum[prioFC11risalg] = PRM[prmomx11risalg];
    iOnderMaximum[prioFC11bus] = PRM[prmomx11bus];
    iOnderMaximum[prioFC22fiets] = PRM[prmomx22fiets];
    iOnderMaximum[prioFC28fiets] = PRM[prmomx28fiets];
    iOnderMaximum[prioFC61karbus] = PRM[prmomx61karbus];
    iOnderMaximum[prioFC61risov] = PRM[prmomx61risov];
    iOnderMaximum[prioFC61risvrw] = PRM[prmomx61risvrw];
    iOnderMaximum[prioFC61risalg] = PRM[prmomx61risalg];
    iOnderMaximum[prioFC62karbus] = PRM[prmomx62karbus];
    iOnderMaximum[prioFC62risov] = PRM[prmomx62risov];
    iOnderMaximum[prioFC62risvrw] = PRM[prmomx62risvrw];
    iOnderMaximum[prioFC62risalg] = PRM[prmomx62risalg];
    iOnderMaximum[prioFC67karbus] = PRM[prmomx67karbus];
    iOnderMaximum[prioFC67risov] = PRM[prmomx67risov];
    iOnderMaximum[prioFC67risvrw] = PRM[prmomx67risvrw];
    iOnderMaximum[prioFC67risalg] = PRM[prmomx67risalg];
    iOnderMaximum[prioFC68karbus] = PRM[prmomx68karbus];
    iOnderMaximum[prioFC68risov] = PRM[prmomx68risov];
    iOnderMaximum[prioFC68risvrw] = PRM[prmomx68risvrw];
    iOnderMaximum[prioFC68risalg] = PRM[prmomx68risalg];
    iOnderMaximum[hdFC02] = 0;
    iOnderMaximum[hdFC03] = 0;
    iOnderMaximum[hdFC05] = 0;
    iOnderMaximum[hdFC08] = 0;
    iOnderMaximum[hdFC09] = 0;
    iOnderMaximum[hdFC11] = 0;
    iOnderMaximum[hdFC61] = 0;
    iOnderMaximum[hdFC62] = 0;
    iOnderMaximum[hdFC67] = 0;
    iOnderMaximum[hdFC68] = 0;

    /* Blokkeringstijd */
    iBlokkeringsTijd[prioFC02karbus] = T_max[tblk02karbus];
    iBlokkeringsTijd[prioFC02risov] = T_max[tblk02risov];
    iBlokkeringsTijd[prioFC02risvrw] = T_max[tblk02risvrw];
    iBlokkeringsTijd[prioFC02risalg] = T_max[tblk02risalg];
    iBlokkeringsTijd[prioFC03karbus] = T_max[tblk03karbus];
    iBlokkeringsTijd[prioFC03risov] = T_max[tblk03risov];
    iBlokkeringsTijd[prioFC03risvrw] = T_max[tblk03risvrw];
    iBlokkeringsTijd[prioFC03risalg] = T_max[tblk03risalg];
    iBlokkeringsTijd[prioFC05karbus] = T_max[tblk05karbus];
    iBlokkeringsTijd[prioFC05risov] = T_max[tblk05risov];
    iBlokkeringsTijd[prioFC05risvrw] = T_max[tblk05risvrw];
    iBlokkeringsTijd[prioFC05risalg] = T_max[tblk05risalg];
    iBlokkeringsTijd[prioFC08karbus] = T_max[tblk08karbus];
    iBlokkeringsTijd[prioFC08risov] = T_max[tblk08risov];
    iBlokkeringsTijd[prioFC08risvrw] = T_max[tblk08risvrw];
    iBlokkeringsTijd[prioFC08risalg] = T_max[tblk08risalg];
    iBlokkeringsTijd[prioFC09karbus] = T_max[tblk09karbus];
    iBlokkeringsTijd[prioFC09risov] = T_max[tblk09risov];
    iBlokkeringsTijd[prioFC09risvrw] = T_max[tblk09risvrw];
    iBlokkeringsTijd[prioFC09risalg] = T_max[tblk09risalg];
    iBlokkeringsTijd[prioFC11karbus] = T_max[tblk11karbus];
    iBlokkeringsTijd[prioFC11risov] = T_max[tblk11risov];
    iBlokkeringsTijd[prioFC11risvrw] = T_max[tblk11risvrw];
    iBlokkeringsTijd[prioFC11risalg] = T_max[tblk11risalg];
    iBlokkeringsTijd[prioFC11bus] = T_max[tblk11bus];
    iBlokkeringsTijd[prioFC22fiets] = T_max[tblk22fiets];
    iBlokkeringsTijd[prioFC28fiets] = T_max[tblk28fiets];
    iBlokkeringsTijd[prioFC61karbus] = T_max[tblk61karbus];
    iBlokkeringsTijd[prioFC61risov] = T_max[tblk61risov];
    iBlokkeringsTijd[prioFC61risvrw] = T_max[tblk61risvrw];
    iBlokkeringsTijd[prioFC61risalg] = T_max[tblk61risalg];
    iBlokkeringsTijd[prioFC62karbus] = T_max[tblk62karbus];
    iBlokkeringsTijd[prioFC62risov] = T_max[tblk62risov];
    iBlokkeringsTijd[prioFC62risvrw] = T_max[tblk62risvrw];
    iBlokkeringsTijd[prioFC62risalg] = T_max[tblk62risalg];
    iBlokkeringsTijd[prioFC67karbus] = T_max[tblk67karbus];
    iBlokkeringsTijd[prioFC67risov] = T_max[tblk67risov];
    iBlokkeringsTijd[prioFC67risvrw] = T_max[tblk67risvrw];
    iBlokkeringsTijd[prioFC67risalg] = T_max[tblk67risalg];
    iBlokkeringsTijd[prioFC68karbus] = T_max[tblk68karbus];
    iBlokkeringsTijd[prioFC68risov] = T_max[tblk68risov];
    iBlokkeringsTijd[prioFC68risvrw] = T_max[tblk68risvrw];
    iBlokkeringsTijd[prioFC68risalg] = T_max[tblk68risalg];
    iBlokkeringsTijd[hdFC02] = 0;
    iBlokkeringsTijd[hdFC03] = 0;
    iBlokkeringsTijd[hdFC05] = 0;
    iBlokkeringsTijd[hdFC08] = 0;
    iBlokkeringsTijd[hdFC09] = 0;
    iBlokkeringsTijd[hdFC11] = 0;
    iBlokkeringsTijd[hdFC61] = 0;
    iBlokkeringsTijd[hdFC62] = 0;
    iBlokkeringsTijd[hdFC67] = 0;
    iBlokkeringsTijd[hdFC68] = 0;

    /* Na aanspreken groenbewaking wordt de selectieve 
	   detectie niet langer betrouwbaar gevonden */
    iSelDetFoutNaGB[prioFC02karbus] = PRM[prmupinagb02karbus];
    iSelDetFoutNaGB[prioFC02risov] = PRM[prmupinagb02risov];
    iSelDetFoutNaGB[prioFC02risvrw] = PRM[prmupinagb02risvrw];
    iSelDetFoutNaGB[prioFC02risalg] = PRM[prmupinagb02risalg];
    iSelDetFoutNaGB[prioFC03karbus] = PRM[prmupinagb03karbus];
    iSelDetFoutNaGB[prioFC03risov] = PRM[prmupinagb03risov];
    iSelDetFoutNaGB[prioFC03risvrw] = PRM[prmupinagb03risvrw];
    iSelDetFoutNaGB[prioFC03risalg] = PRM[prmupinagb03risalg];
    iSelDetFoutNaGB[prioFC05karbus] = PRM[prmupinagb05karbus];
    iSelDetFoutNaGB[prioFC05risov] = PRM[prmupinagb05risov];
    iSelDetFoutNaGB[prioFC05risvrw] = PRM[prmupinagb05risvrw];
    iSelDetFoutNaGB[prioFC05risalg] = PRM[prmupinagb05risalg];
    iSelDetFoutNaGB[prioFC08karbus] = PRM[prmupinagb08karbus];
    iSelDetFoutNaGB[prioFC08risov] = PRM[prmupinagb08risov];
    iSelDetFoutNaGB[prioFC08risvrw] = PRM[prmupinagb08risvrw];
    iSelDetFoutNaGB[prioFC08risalg] = PRM[prmupinagb08risalg];
    iSelDetFoutNaGB[prioFC09karbus] = PRM[prmupinagb09karbus];
    iSelDetFoutNaGB[prioFC09risov] = PRM[prmupinagb09risov];
    iSelDetFoutNaGB[prioFC09risvrw] = PRM[prmupinagb09risvrw];
    iSelDetFoutNaGB[prioFC09risalg] = PRM[prmupinagb09risalg];
    iSelDetFoutNaGB[prioFC11karbus] = PRM[prmupinagb11karbus];
    iSelDetFoutNaGB[prioFC11risov] = PRM[prmupinagb11risov];
    iSelDetFoutNaGB[prioFC11risvrw] = PRM[prmupinagb11risvrw];
    iSelDetFoutNaGB[prioFC11risalg] = PRM[prmupinagb11risalg];
    iSelDetFoutNaGB[prioFC11bus] = PRM[prmupinagb11bus];
    iSelDetFoutNaGB[prioFC22fiets] = PRM[prmupinagb22fiets];
    iSelDetFoutNaGB[prioFC28fiets] = PRM[prmupinagb28fiets];
    iSelDetFoutNaGB[prioFC61karbus] = PRM[prmupinagb61karbus];
    iSelDetFoutNaGB[prioFC61risov] = PRM[prmupinagb61risov];
    iSelDetFoutNaGB[prioFC61risvrw] = PRM[prmupinagb61risvrw];
    iSelDetFoutNaGB[prioFC61risalg] = PRM[prmupinagb61risalg];
    iSelDetFoutNaGB[prioFC62karbus] = PRM[prmupinagb62karbus];
    iSelDetFoutNaGB[prioFC62risov] = PRM[prmupinagb62risov];
    iSelDetFoutNaGB[prioFC62risvrw] = PRM[prmupinagb62risvrw];
    iSelDetFoutNaGB[prioFC62risalg] = PRM[prmupinagb62risalg];
    iSelDetFoutNaGB[prioFC67karbus] = PRM[prmupinagb67karbus];
    iSelDetFoutNaGB[prioFC67risov] = PRM[prmupinagb67risov];
    iSelDetFoutNaGB[prioFC67risvrw] = PRM[prmupinagb67risvrw];
    iSelDetFoutNaGB[prioFC67risalg] = PRM[prmupinagb67risalg];
    iSelDetFoutNaGB[prioFC68karbus] = PRM[prmupinagb68karbus];
    iSelDetFoutNaGB[prioFC68risov] = PRM[prmupinagb68risov];
    iSelDetFoutNaGB[prioFC68risvrw] = PRM[prmupinagb68risvrw];
    iSelDetFoutNaGB[prioFC68risalg] = PRM[prmupinagb68risalg];
    iSelDetFoutNaGB[hdFC02] = PRM[prmupinagbhd02];
    iSelDetFoutNaGB[hdFC03] = PRM[prmupinagbhd03];
    iSelDetFoutNaGB[hdFC05] = PRM[prmupinagbhd05];
    iSelDetFoutNaGB[hdFC08] = PRM[prmupinagbhd08];
    iSelDetFoutNaGB[hdFC09] = PRM[prmupinagbhd09];
    iSelDetFoutNaGB[hdFC11] = PRM[prmupinagbhd11];
    iSelDetFoutNaGB[hdFC61] = PRM[prmupinagbhd61];
    iSelDetFoutNaGB[hdFC62] = PRM[prmupinagbhd62];
    iSelDetFoutNaGB[hdFC67] = PRM[prmupinagbhd67];
    iSelDetFoutNaGB[hdFC68] = PRM[prmupinagbhd68];

    /* =============================== */
    /* Instellingen overige richtingen */
    /* =============================== */
   
    /* Maximale wachttijd */
    iMaximumWachtTijd[fc02] = PRM[prmmwta];
    iMaximumWachtTijd[fc03] = PRM[prmmwta];
    iMaximumWachtTijd[fc05] = PRM[prmmwta];
    iMaximumWachtTijd[fc08] = PRM[prmmwta];
    iMaximumWachtTijd[fc09] = PRM[prmmwta];
    iMaximumWachtTijd[fc11] = PRM[prmmwta];
    iMaximumWachtTijd[fc21] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc22] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc24] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc26] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc28] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc31] = PRM[prmmwtvtg];
    iMaximumWachtTijd[fc32] = PRM[prmmwtvtg];
    iMaximumWachtTijd[fc33] = PRM[prmmwtvtg];
    iMaximumWachtTijd[fc34] = PRM[prmmwtvtg];
    iMaximumWachtTijd[fc38] = PRM[prmmwtvtg];
    iMaximumWachtTijd[fc61] = PRM[prmmwta];
    iMaximumWachtTijd[fc62] = PRM[prmmwta];
    iMaximumWachtTijd[fc67] = PRM[prmmwta];
    iMaximumWachtTijd[fc68] = PRM[prmmwta];
    iMaximumWachtTijd[fc81] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc82] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc84] = PRM[prmmwtfts];

    /* Als een richting minder groen heeft gehad door afkappen
       dan deze instelling, dan mag de richting nog een keer
       primair realiseren (terugkomen). */
    iInstPercMaxGroenTijdTerugKomen[fc02] = PRM[prmpmgt02];
    iInstPercMaxGroenTijdTerugKomen[fc03] = PRM[prmpmgt03];
    iInstPercMaxGroenTijdTerugKomen[fc05] = PRM[prmpmgt05];
    iInstPercMaxGroenTijdTerugKomen[fc08] = PRM[prmpmgt08];
    iInstPercMaxGroenTijdTerugKomen[fc09] = PRM[prmpmgt09];
    iInstPercMaxGroenTijdTerugKomen[fc11] = PRM[prmpmgt11];
    iInstPercMaxGroenTijdTerugKomen[fc21] = PRM[prmpmgt21];
    iInstPercMaxGroenTijdTerugKomen[fc22] = PRM[prmpmgt22];
    iInstPercMaxGroenTijdTerugKomen[fc24] = PRM[prmpmgt24];
    iInstPercMaxGroenTijdTerugKomen[fc26] = PRM[prmpmgt26];
    iInstPercMaxGroenTijdTerugKomen[fc28] = PRM[prmpmgt28];
    iInstPercMaxGroenTijdTerugKomen[fc31] = PRM[prmpmgt31];
    iInstPercMaxGroenTijdTerugKomen[fc32] = PRM[prmpmgt32];
    iInstPercMaxGroenTijdTerugKomen[fc33] = PRM[prmpmgt33];
    iInstPercMaxGroenTijdTerugKomen[fc34] = PRM[prmpmgt34];
    iInstPercMaxGroenTijdTerugKomen[fc38] = PRM[prmpmgt38];
    iInstPercMaxGroenTijdTerugKomen[fc61] = PRM[prmpmgt61];
    iInstPercMaxGroenTijdTerugKomen[fc62] = PRM[prmpmgt62];
    iInstPercMaxGroenTijdTerugKomen[fc67] = PRM[prmpmgt67];
    iInstPercMaxGroenTijdTerugKomen[fc68] = PRM[prmpmgt68];
    iInstPercMaxGroenTijdTerugKomen[fc81] = PRM[prmpmgt81];
    iInstPercMaxGroenTijdTerugKomen[fc82] = PRM[prmpmgt82];
    iInstPercMaxGroenTijdTerugKomen[fc84] = PRM[prmpmgt84];

    /* De minimale groentijd die een richting krijgt als
       deze mag terugkomen. */
    iInstMinTerugKomGroenTijd[fc02] = PRM[prmognt02];
    iInstMinTerugKomGroenTijd[fc03] = PRM[prmognt03];
    iInstMinTerugKomGroenTijd[fc05] = PRM[prmognt05];
    iInstMinTerugKomGroenTijd[fc08] = PRM[prmognt08];
    iInstMinTerugKomGroenTijd[fc09] = PRM[prmognt09];
    iInstMinTerugKomGroenTijd[fc11] = PRM[prmognt11];
    iInstMinTerugKomGroenTijd[fc21] = PRM[prmognt21];
    iInstMinTerugKomGroenTijd[fc22] = PRM[prmognt22];
    iInstMinTerugKomGroenTijd[fc24] = PRM[prmognt24];
    iInstMinTerugKomGroenTijd[fc26] = PRM[prmognt26];
    iInstMinTerugKomGroenTijd[fc28] = PRM[prmognt28];
    iInstMinTerugKomGroenTijd[fc31] = PRM[prmognt31];
    iInstMinTerugKomGroenTijd[fc32] = PRM[prmognt32];
    iInstMinTerugKomGroenTijd[fc33] = PRM[prmognt33];
    iInstMinTerugKomGroenTijd[fc34] = PRM[prmognt34];
    iInstMinTerugKomGroenTijd[fc38] = PRM[prmognt38];
    iInstMinTerugKomGroenTijd[fc61] = PRM[prmognt61];
    iInstMinTerugKomGroenTijd[fc62] = PRM[prmognt62];
    iInstMinTerugKomGroenTijd[fc67] = PRM[prmognt67];
    iInstMinTerugKomGroenTijd[fc68] = PRM[prmognt68];
    iInstMinTerugKomGroenTijd[fc81] = PRM[prmognt81];
    iInstMinTerugKomGroenTijd[fc82] = PRM[prmognt82];
    iInstMinTerugKomGroenTijd[fc84] = PRM[prmognt84];

    /* Aantal malen niet afkappen */
    iInstAantalMalenNietAfkappen[fc02] = PRM[prmnofm02];
    iInstAantalMalenNietAfkappen[fc03] = PRM[prmnofm03];
    iInstAantalMalenNietAfkappen[fc05] = PRM[prmnofm05];
    iInstAantalMalenNietAfkappen[fc08] = PRM[prmnofm08];
    iInstAantalMalenNietAfkappen[fc09] = PRM[prmnofm09];
    iInstAantalMalenNietAfkappen[fc11] = PRM[prmnofm11];
    iInstAantalMalenNietAfkappen[fc21] = PRM[prmnofm21];
    iInstAantalMalenNietAfkappen[fc22] = PRM[prmnofm22];
    iInstAantalMalenNietAfkappen[fc24] = PRM[prmnofm24];
    iInstAantalMalenNietAfkappen[fc26] = PRM[prmnofm26];
    iInstAantalMalenNietAfkappen[fc28] = PRM[prmnofm28];
    iInstAantalMalenNietAfkappen[fc61] = PRM[prmnofm61];
    iInstAantalMalenNietAfkappen[fc62] = PRM[prmnofm62];
    iInstAantalMalenNietAfkappen[fc67] = PRM[prmnofm67];
    iInstAantalMalenNietAfkappen[fc68] = PRM[prmnofm68];
    iInstAantalMalenNietAfkappen[fc81] = PRM[prmnofm81];
    iInstAantalMalenNietAfkappen[fc82] = PRM[prmnofm82];
    iInstAantalMalenNietAfkappen[fc84] = PRM[prmnofm84];

    /* Onder deze groentijd mag een richting niet worden
       afgekapt, tenzij zich een nooddienst heeft ingemeld. */
    iAfkapGroenTijd[fc02] = PRM[prmmgcov02];
    iAfkapGroenTijd[fc03] = PRM[prmmgcov03];
    iAfkapGroenTijd[fc05] = PRM[prmmgcov05];
    iAfkapGroenTijd[fc08] = PRM[prmmgcov08];
    iAfkapGroenTijd[fc09] = PRM[prmmgcov09];
    iAfkapGroenTijd[fc11] = PRM[prmmgcov11];
    iAfkapGroenTijd[fc21] = PRM[prmmgcov21];
    iAfkapGroenTijd[fc22] = PRM[prmmgcov22];
    iAfkapGroenTijd[fc24] = PRM[prmmgcov24];
    iAfkapGroenTijd[fc26] = PRM[prmmgcov26];
    iAfkapGroenTijd[fc28] = PRM[prmmgcov28];
    iAfkapGroenTijd[fc31] = 0;
    iAfkapGroenTijd[fc32] = 0;
    iAfkapGroenTijd[fc33] = 0;
    iAfkapGroenTijd[fc34] = 0;
    iAfkapGroenTijd[fc38] = 0;
    iAfkapGroenTijd[fc61] = PRM[prmmgcov61];
    iAfkapGroenTijd[fc62] = PRM[prmmgcov62];
    iAfkapGroenTijd[fc67] = PRM[prmmgcov67];
    iAfkapGroenTijd[fc68] = PRM[prmmgcov68];
    iAfkapGroenTijd[fc81] = PRM[prmmgcov81];
    iAfkapGroenTijd[fc82] = PRM[prmmgcov82];
    iAfkapGroenTijd[fc84] = PRM[prmmgcov84];

    /* Als een richting minder groen heeft gehad dan
       dit percentage van de maximum groentijd, dan
       mag de richting niet worden afgekapt, tenzij
       zich een nooddienst heeft ingemeld. */
    iPercGroenTijd[fc02] = PRM[prmpmgcov02];
    iPercGroenTijd[fc03] = PRM[prmpmgcov03];
    iPercGroenTijd[fc05] = PRM[prmpmgcov05];
    iPercGroenTijd[fc08] = PRM[prmpmgcov08];
    iPercGroenTijd[fc09] = PRM[prmpmgcov09];
    iPercGroenTijd[fc11] = PRM[prmpmgcov11];
    iPercGroenTijd[fc21] = PRM[prmpmgcov21];
    iPercGroenTijd[fc22] = PRM[prmpmgcov22];
    iPercGroenTijd[fc24] = PRM[prmpmgcov24];
    iPercGroenTijd[fc26] = PRM[prmpmgcov26];
    iPercGroenTijd[fc28] = PRM[prmpmgcov28];
    iPercGroenTijd[fc31] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc32] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc33] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc34] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc38] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc61] = PRM[prmpmgcov61];
    iPercGroenTijd[fc62] = PRM[prmpmgcov62];
    iPercGroenTijd[fc67] = PRM[prmpmgcov67];
    iPercGroenTijd[fc68] = PRM[prmpmgcov68];
    iPercGroenTijd[fc81] = PRM[prmpmgcov81];
    iPercGroenTijd[fc82] = PRM[prmpmgcov82];
    iPercGroenTijd[fc84] = PRM[prmpmgcov84];

    /* Na te zijn afgekapt, wordt het percentage
       van de maximumgroentijd verhoogd met dit ophoogpercentage. */
    iInstOphoogPercentageMG[fc02] = PRM[prmohpmg02];
    iInstOphoogPercentageMG[fc03] = PRM[prmohpmg03];
    iInstOphoogPercentageMG[fc05] = PRM[prmohpmg05];
    iInstOphoogPercentageMG[fc08] = PRM[prmohpmg08];
    iInstOphoogPercentageMG[fc09] = PRM[prmohpmg09];
    iInstOphoogPercentageMG[fc11] = PRM[prmohpmg11];
    iInstOphoogPercentageMG[fc21] = PRM[prmohpmg21];
    iInstOphoogPercentageMG[fc22] = PRM[prmohpmg22];
    iInstOphoogPercentageMG[fc24] = PRM[prmohpmg24];
    iInstOphoogPercentageMG[fc26] = PRM[prmohpmg26];
    iInstOphoogPercentageMG[fc28] = PRM[prmohpmg28];
    iInstOphoogPercentageMG[fc31] = 0;
    iInstOphoogPercentageMG[fc32] = 0;
    iInstOphoogPercentageMG[fc33] = 0;
    iInstOphoogPercentageMG[fc34] = 0;
    iInstOphoogPercentageMG[fc38] = 0;
    iInstOphoogPercentageMG[fc61] = PRM[prmohpmg61];
    iInstOphoogPercentageMG[fc62] = PRM[prmohpmg62];
    iInstOphoogPercentageMG[fc67] = PRM[prmohpmg67];
    iInstOphoogPercentageMG[fc68] = PRM[prmohpmg68];
    iInstOphoogPercentageMG[fc81] = PRM[prmohpmg81];
    iInstOphoogPercentageMG[fc82] = PRM[prmohpmg82];
    iInstOphoogPercentageMG[fc84] = PRM[prmohpmg84];

    /* Benodigde ruimte voor alternatieve realisatie tijdens een OV ingreep */
    iPRM_ALTP[fc02] = PRM[prmaltp02];
    iPRM_ALTP[fc03] = PRM[prmaltp03];
    iPRM_ALTP[fc05] = PRM[prmaltp05];
    iPRM_ALTP[fc08] = PRM[prmaltp08];
    iPRM_ALTP[fc09] = PRM[prmaltp09];
    iPRM_ALTP[fc11] = PRM[prmaltp11];
    iPRM_ALTP[fc21] = PRM[prmaltp21];
    iPRM_ALTP[fc22] = PRM[prmaltp2232];
    iPRM_ALTP[fc24] = PRM[prmaltp243484];
    iPRM_ALTP[fc26] = PRM[prmaltp26];
    iPRM_ALTP[fc28] = PRM[prmaltp2838];
    iPRM_ALTP[fc31] = PRM[prmaltp31];
    iPRM_ALTP[fc32] = PRM[prmaltp2232];
    iPRM_ALTP[fc33] = PRM[prmaltp3384];
    iPRM_ALTP[fc34] = PRM[prmaltp2434];
    iPRM_ALTP[fc38] = PRM[prmaltp2838];
    iPRM_ALTP[fc61] = PRM[prmaltp61];
    iPRM_ALTP[fc62] = PRM[prmaltp62];
    iPRM_ALTP[fc67] = PRM[prmaltp67];
    iPRM_ALTP[fc68] = PRM[prmaltp68];
    iPRM_ALTP[fc81] = PRM[prmaltp81];
    iPRM_ALTP[fc82] = PRM[prmaltp82];
    iPRM_ALTP[fc84] = PRM[prmaltp243384];

    /* Richting mag alternatief realiseren tijdens een OV ingreep */
    if (IH[hmlact])
    {
    iSCH_ALTG[fc02] = SCH[schaltg02];
    iSCH_ALTG[fc03] = SCH[schaltg03];
    iSCH_ALTG[fc05] = SCH[schaltg05];
    iSCH_ALTG[fc08] = SCH[schaltg08];
    iSCH_ALTG[fc09] = SCH[schaltg09];
    iSCH_ALTG[fc11] = SCH[schaltg11];
    iSCH_ALTG[fc21] = SCH[schaltg21];
        iSCH_ALTG[fc22] = SCH[schaltg2232];
        iSCH_ALTG[fc24] = SCH[schaltg243484];
    iSCH_ALTG[fc26] = SCH[schaltg26];
        iSCH_ALTG[fc28] = SCH[schaltg2838];
    iSCH_ALTG[fc31] = SCH[schaltg31];
        iSCH_ALTG[fc32] = SCH[schaltg2232];
        iSCH_ALTG[fc33] = SCH[schaltg3384];
        iSCH_ALTG[fc34] = SCH[schaltg2434];
        iSCH_ALTG[fc38] = SCH[schaltg2838];
    iSCH_ALTG[fc61] = SCH[schaltg61];
    iSCH_ALTG[fc62] = SCH[schaltg62];
    iSCH_ALTG[fc67] = SCH[schaltg67];
    iSCH_ALTG[fc68] = SCH[schaltg68];
    iSCH_ALTG[fc81] = SCH[schaltg81];
    iSCH_ALTG[fc82] = SCH[schaltg82];
        iSCH_ALTG[fc84] = SCH[schaltg243384];
    }
    else
    {
        iSCH_ALTG[fc02] = SCH[schaltghst02];
        iSCH_ALTG[fc03] = SCH[schaltghst03];
        iSCH_ALTG[fc05] = SCH[schaltghst05];
        iSCH_ALTG[fc08] = SCH[schaltghst08];
        iSCH_ALTG[fc09] = SCH[schaltghst09];
        iSCH_ALTG[fc11] = SCH[schaltghst11];
        iSCH_ALTG[fc21] = SCH[schaltghst21];
        iSCH_ALTG[fc22] = SCH[schaltghst2232];
        iSCH_ALTG[fc24] = SCH[schaltghst243484];
        iSCH_ALTG[fc26] = SCH[schaltghst26];
        iSCH_ALTG[fc28] = SCH[schaltghst2838];
        iSCH_ALTG[fc31] = SCH[schaltghst31];
        iSCH_ALTG[fc32] = SCH[schaltghst2232];
        iSCH_ALTG[fc33] = SCH[schaltghst3384];
        iSCH_ALTG[fc34] = SCH[schaltghst2434];
        iSCH_ALTG[fc38] = SCH[schaltghst2838];
        iSCH_ALTG[fc61] = SCH[schaltghst61];
        iSCH_ALTG[fc62] = SCH[schaltghst62];
        iSCH_ALTG[fc67] = SCH[schaltghst67];
        iSCH_ALTG[fc68] = SCH[schaltghst68];
        iSCH_ALTG[fc81] = SCH[schaltghst81];
        iSCH_ALTG[fc82] = SCH[schaltghst82];
        iSCH_ALTG[fc84] = SCH[schaltghst243384];
    }

    /* Alternatieve realisatie mag worden
       afgekapt tijdens een OV ingreep als
       deze groentijd is gemaakt */
    iInstAfkapGroenAlt[fc02] = PRM[prmaltg02];
    iInstAfkapGroenAlt[fc03] = PRM[prmaltg03];
    iInstAfkapGroenAlt[fc05] = PRM[prmaltg05];
    iInstAfkapGroenAlt[fc08] = PRM[prmaltg08];
    iInstAfkapGroenAlt[fc09] = PRM[prmaltg09];
    iInstAfkapGroenAlt[fc11] = PRM[prmaltg11];
    iInstAfkapGroenAlt[fc21] = PRM[prmaltg21];
    iInstAfkapGroenAlt[fc22] = PRM[prmaltg22];
    iInstAfkapGroenAlt[fc24] = PRM[prmaltg24];
    iInstAfkapGroenAlt[fc26] = PRM[prmaltg26];
    iInstAfkapGroenAlt[fc28] = PRM[prmaltg28];
    iInstAfkapGroenAlt[fc31] = PRM[prmaltg31];
    iInstAfkapGroenAlt[fc32] = PRM[prmaltg32];
    iInstAfkapGroenAlt[fc33] = PRM[prmaltg33];
    iInstAfkapGroenAlt[fc34] = PRM[prmaltg34];
    iInstAfkapGroenAlt[fc38] = PRM[prmaltg38];
    iInstAfkapGroenAlt[fc61] = PRM[prmaltg61];
    iInstAfkapGroenAlt[fc62] = PRM[prmaltg62];
    iInstAfkapGroenAlt[fc67] = PRM[prmaltg67];
    iInstAfkapGroenAlt[fc68] = PRM[prmaltg68];
    iInstAfkapGroenAlt[fc81] = PRM[prmaltg81];
    iInstAfkapGroenAlt[fc82] = PRM[prmaltg82];
    iInstAfkapGroenAlt[fc84] = PRM[prmaltg84];

    /* definitie van de meerealisaties voor de hulpdiensten */
    iPrioMeeRealisatie[fc02][0] = fc03;
    iPrioMeeRealisatie[fc03][0] = fc02;
    iPrioMeeRealisatie[fc08][0] = fc09;
    iPrioMeeRealisatie[fc09][0] = fc08;

    /* De regeling maakt gebruik van langstwachtende alternatief */
    iLangstWachtendeAlternatief = 1;

    PrioHalfstarSettings();
}

/* -----------------------------------------------------------
   RijTijdScenario bepaalt het actieve rijtijdscenario
   van alle OV-richtingen. Het resultaat wordt geplaatst
   in de variabele iRijTijdScenario, en kan als waarde
   rtsOngehinderd, rtsBeperktGehinderd of rtsGehinderd hebben.
   Het rijtijdscenario is bepalend voor de gehanteerde
   rijtijd.
   ----------------------------------------------------------- */
void RijTijdScenario(void)
{
    /* Vaststellen rijtijdscenarios */
    PrioRijTijdScenario(prioFC02karbus, d02_1a, d02_2a, tbtovg02karbus);
    PrioRijTijdScenario(prioFC02karbus, d02_1b, d02_2b, tbtovg02karbus);
    PrioRijTijdScenario(prioFC02karbus, NG, d02_3a, NG);
    PrioRijTijdScenario(prioFC02karbus, NG, d02_3b, NG);

    PrioRijTijdScenario(prioFC02risov, d02_1a, d02_2a, tbtovg02risov);
    PrioRijTijdScenario(prioFC02risov, d02_1b, d02_2b, tbtovg02risov);
    PrioRijTijdScenario(prioFC02risov, NG, d02_3a, NG);
    PrioRijTijdScenario(prioFC02risov, NG, d02_3b, NG);

    PrioRijTijdScenario(prioFC02risvrw, d02_1a, d02_2a, tbtovg02risvrw);
    PrioRijTijdScenario(prioFC02risvrw, d02_1b, d02_2b, tbtovg02risvrw);
    PrioRijTijdScenario(prioFC02risvrw, NG, d02_3a, NG);
    PrioRijTijdScenario(prioFC02risvrw, NG, d02_3b, NG);

    PrioRijTijdScenario(prioFC02risalg, d02_1a, d02_2a, tbtovg02risalg);
    PrioRijTijdScenario(prioFC02risalg, d02_1b, d02_2b, tbtovg02risalg);
    PrioRijTijdScenario(prioFC02risalg, NG, d02_3a, NG);
    PrioRijTijdScenario(prioFC02risalg, NG, d02_3b, NG);

    PrioRijTijdScenario(prioFC03karbus, d03_1, d03_2, tbtovg03karbus);

    PrioRijTijdScenario(prioFC03risov, d03_1, d03_2, tbtovg03risov);

    PrioRijTijdScenario(prioFC03risvrw, d03_1, d03_2, tbtovg03risvrw);

    PrioRijTijdScenario(prioFC03risalg, d03_1, d03_2, tbtovg03risalg);

    PrioRijTijdScenario(prioFC05karbus, d05_1, d05_2, tbtovg05karbus);

    PrioRijTijdScenario(prioFC05risov, d05_1, d05_2, tbtovg05risov);

    PrioRijTijdScenario(prioFC05risvrw, d05_1, d05_2, tbtovg05risvrw);

    PrioRijTijdScenario(prioFC05risalg, d05_1, d05_2, tbtovg05risalg);

    PrioRijTijdScenario(prioFC08karbus, d08_1a, d08_2a, tbtovg08karbus);
    PrioRijTijdScenario(prioFC08karbus, d08_1b, d08_2b, tbtovg08karbus);
    PrioRijTijdScenario(prioFC08karbus, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08karbus, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC08risov, d08_1a, d08_2a, tbtovg08risov);
    PrioRijTijdScenario(prioFC08risov, d08_1b, d08_2b, tbtovg08risov);
    PrioRijTijdScenario(prioFC08risov, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08risov, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC08risvrw, d08_1a, d08_2a, tbtovg08risvrw);
    PrioRijTijdScenario(prioFC08risvrw, d08_1b, d08_2b, tbtovg08risvrw);
    PrioRijTijdScenario(prioFC08risvrw, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08risvrw, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC08risalg, d08_1a, d08_2a, tbtovg08risalg);
    PrioRijTijdScenario(prioFC08risalg, d08_1b, d08_2b, tbtovg08risalg);
    PrioRijTijdScenario(prioFC08risalg, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08risalg, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC09karbus, d09_1, d09_2, tbtovg09karbus);

    PrioRijTijdScenario(prioFC09risov, d09_1, d09_2, tbtovg09risov);

    PrioRijTijdScenario(prioFC09risvrw, d09_1, d09_2, tbtovg09risvrw);

    PrioRijTijdScenario(prioFC09risalg, d09_1, d09_2, tbtovg09risalg);

    PrioRijTijdScenario(prioFC11karbus, d11_1, d11_2, tbtovg11karbus);
    PrioRijTijdScenario(prioFC11karbus, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11risov, d11_1, d11_2, tbtovg11risov);
    PrioRijTijdScenario(prioFC11risov, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11risvrw, d11_1, d11_2, tbtovg11risvrw);
    PrioRijTijdScenario(prioFC11risvrw, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11risalg, d11_1, d11_2, tbtovg11risalg);
    PrioRijTijdScenario(prioFC11risalg, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11bus, d11_1, d11_2, tbtovg11bus);
    PrioRijTijdScenario(prioFC11bus, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC22fiets, d22_1, NG, NG);

    PrioRijTijdScenario(prioFC28fiets, d28_1, NG, NG);

    PrioRijTijdScenario(prioFC61karbus, d61_1, d61_2, tbtovg61karbus);

    PrioRijTijdScenario(prioFC61risov, d61_1, d61_2, tbtovg61risov);

    PrioRijTijdScenario(prioFC61risvrw, d61_1, d61_2, tbtovg61risvrw);

    PrioRijTijdScenario(prioFC61risalg, d61_1, d61_2, tbtovg61risalg);

    PrioRijTijdScenario(prioFC62karbus, d62_1a, d62_2a, tbtovg62karbus);
    PrioRijTijdScenario(prioFC62karbus, d62_1b, d62_2b, tbtovg62karbus);

    PrioRijTijdScenario(prioFC62risov, d62_1a, d62_2a, tbtovg62risov);
    PrioRijTijdScenario(prioFC62risov, d62_1b, d62_2b, tbtovg62risov);

    PrioRijTijdScenario(prioFC62risvrw, d62_1a, d62_2a, tbtovg62risvrw);
    PrioRijTijdScenario(prioFC62risvrw, d62_1b, d62_2b, tbtovg62risvrw);

    PrioRijTijdScenario(prioFC62risalg, d62_1a, d62_2a, tbtovg62risalg);
    PrioRijTijdScenario(prioFC62risalg, d62_1b, d62_2b, tbtovg62risalg);

    PrioRijTijdScenario(prioFC67karbus, d67_1, d67_2, tbtovg67karbus);

    PrioRijTijdScenario(prioFC67risov, d67_1, d67_2, tbtovg67risov);

    PrioRijTijdScenario(prioFC67risvrw, d67_1, d67_2, tbtovg67risvrw);

    PrioRijTijdScenario(prioFC67risalg, d67_1, d67_2, tbtovg67risalg);

    PrioRijTijdScenario(prioFC68karbus, d68_1a, d68_2a, tbtovg68karbus);
    PrioRijTijdScenario(prioFC68karbus, d68_1b, d68_2b, tbtovg68karbus);

    PrioRijTijdScenario(prioFC68risov, d68_1a, d68_2a, tbtovg68risov);
    PrioRijTijdScenario(prioFC68risov, d68_1b, d68_2b, tbtovg68risov);

    PrioRijTijdScenario(prioFC68risvrw, d68_1a, d68_2a, tbtovg68risvrw);
    PrioRijTijdScenario(prioFC68risvrw, d68_1b, d68_2b, tbtovg68risvrw);

    PrioRijTijdScenario(prioFC68risalg, d68_1a, d68_2a, tbtovg68risalg);
    PrioRijTijdScenario(prioFC68risalg, d68_1b, d68_2b, tbtovg68risalg);

    PrioRijTijdScenario(hdFC02, d02_1a, d02_2a, tbtovg02hd);
    PrioRijTijdScenario(hdFC02, d02_1b, d02_2b, tbtovg02hd);
    PrioRijTijdScenario(hdFC02, NG, d02_3a, NG);
    PrioRijTijdScenario(hdFC02, NG, d02_3b, NG);
    PrioRijTijdScenario(hdFC03, d03_1, d03_2, tbtovg03hd);
    PrioRijTijdScenario(hdFC05, d05_1, d05_2, tbtovg05hd);
    PrioRijTijdScenario(hdFC08, d08_1a, d08_2a, tbtovg08hd);
    PrioRijTijdScenario(hdFC08, d08_1b, d08_2b, tbtovg08hd);
    PrioRijTijdScenario(hdFC08, NG, d08_3a, NG);
    PrioRijTijdScenario(hdFC08, NG, d08_3b, NG);
    PrioRijTijdScenario(hdFC09, d09_1, d09_2, tbtovg09hd);
    PrioRijTijdScenario(hdFC11, d11_1, d11_2, tbtovg11hd);
    PrioRijTijdScenario(hdFC11, NG, d11_3, NG);
    PrioRijTijdScenario(hdFC61, d61_1, d61_2, tbtovg61hd);
    PrioRijTijdScenario(hdFC62, d62_1a, d62_2a, tbtovg62hd);
    PrioRijTijdScenario(hdFC62, d62_1b, d62_2b, tbtovg62hd);
    PrioRijTijdScenario(hdFC67, d67_1, d67_2, tbtovg67hd);
    PrioRijTijdScenario(hdFC68, d68_1a, d68_2a, tbtovg68hd);
    PrioRijTijdScenario(hdFC68, d68_1b, d68_2b, tbtovg68hd);


#ifndef NO_TIMETOX
    if ((P[fc02] & BIT11) && C[cvc02karbus] && (iRijTimer[prioFC02karbus] < iRijTijd[prioFC02karbus])) iRijTijd[prioFC02karbus] = 0;
    if ((P[fc02] & BIT11) && C[cvc02risov] && (iRijTimer[prioFC02risov] < iRijTijd[prioFC02risov])) iRijTijd[prioFC02risov] = 0;
    if ((P[fc02] & BIT11) && C[cvc02risvrw] && (iRijTimer[prioFC02risvrw] < iRijTijd[prioFC02risvrw])) iRijTijd[prioFC02risvrw] = 0;
    if ((P[fc02] & BIT11) && C[cvc02risalg] && (iRijTimer[prioFC02risalg] < iRijTijd[prioFC02risalg])) iRijTijd[prioFC02risalg] = 0;
    if ((P[fc03] & BIT11) && C[cvc03karbus] && (iRijTimer[prioFC03karbus] < iRijTijd[prioFC03karbus])) iRijTijd[prioFC03karbus] = 0;
    if ((P[fc03] & BIT11) && C[cvc03risov] && (iRijTimer[prioFC03risov] < iRijTijd[prioFC03risov])) iRijTijd[prioFC03risov] = 0;
    if ((P[fc03] & BIT11) && C[cvc03risvrw] && (iRijTimer[prioFC03risvrw] < iRijTijd[prioFC03risvrw])) iRijTijd[prioFC03risvrw] = 0;
    if ((P[fc03] & BIT11) && C[cvc03risalg] && (iRijTimer[prioFC03risalg] < iRijTijd[prioFC03risalg])) iRijTijd[prioFC03risalg] = 0;
    if ((P[fc05] & BIT11) && C[cvc05karbus] && (iRijTimer[prioFC05karbus] < iRijTijd[prioFC05karbus])) iRijTijd[prioFC05karbus] = 0;
    if ((P[fc05] & BIT11) && C[cvc05risov] && (iRijTimer[prioFC05risov] < iRijTijd[prioFC05risov])) iRijTijd[prioFC05risov] = 0;
    if ((P[fc05] & BIT11) && C[cvc05risvrw] && (iRijTimer[prioFC05risvrw] < iRijTijd[prioFC05risvrw])) iRijTijd[prioFC05risvrw] = 0;
    if ((P[fc05] & BIT11) && C[cvc05risalg] && (iRijTimer[prioFC05risalg] < iRijTijd[prioFC05risalg])) iRijTijd[prioFC05risalg] = 0;
    if ((P[fc08] & BIT11) && C[cvc08karbus] && (iRijTimer[prioFC08karbus] < iRijTijd[prioFC08karbus])) iRijTijd[prioFC08karbus] = 0;
    if ((P[fc08] & BIT11) && C[cvc08risov] && (iRijTimer[prioFC08risov] < iRijTijd[prioFC08risov])) iRijTijd[prioFC08risov] = 0;
    if ((P[fc08] & BIT11) && C[cvc08risvrw] && (iRijTimer[prioFC08risvrw] < iRijTijd[prioFC08risvrw])) iRijTijd[prioFC08risvrw] = 0;
    if ((P[fc08] & BIT11) && C[cvc08risalg] && (iRijTimer[prioFC08risalg] < iRijTijd[prioFC08risalg])) iRijTijd[prioFC08risalg] = 0;
    if ((P[fc09] & BIT11) && C[cvc09karbus] && (iRijTimer[prioFC09karbus] < iRijTijd[prioFC09karbus])) iRijTijd[prioFC09karbus] = 0;
    if ((P[fc09] & BIT11) && C[cvc09risov] && (iRijTimer[prioFC09risov] < iRijTijd[prioFC09risov])) iRijTijd[prioFC09risov] = 0;
    if ((P[fc09] & BIT11) && C[cvc09risvrw] && (iRijTimer[prioFC09risvrw] < iRijTijd[prioFC09risvrw])) iRijTijd[prioFC09risvrw] = 0;
    if ((P[fc09] & BIT11) && C[cvc09risalg] && (iRijTimer[prioFC09risalg] < iRijTijd[prioFC09risalg])) iRijTijd[prioFC09risalg] = 0;
    if ((P[fc11] & BIT11) && C[cvc11karbus] && (iRijTimer[prioFC11karbus] < iRijTijd[prioFC11karbus])) iRijTijd[prioFC11karbus] = 0;
    if ((P[fc11] & BIT11) && C[cvc11risov] && (iRijTimer[prioFC11risov] < iRijTijd[prioFC11risov])) iRijTijd[prioFC11risov] = 0;
    if ((P[fc11] & BIT11) && C[cvc11risvrw] && (iRijTimer[prioFC11risvrw] < iRijTijd[prioFC11risvrw])) iRijTijd[prioFC11risvrw] = 0;
    if ((P[fc11] & BIT11) && C[cvc11risalg] && (iRijTimer[prioFC11risalg] < iRijTijd[prioFC11risalg])) iRijTijd[prioFC11risalg] = 0;
    if ((P[fc11] & BIT11) && C[cvc11bus] && (iRijTimer[prioFC11bus] < iRijTijd[prioFC11bus])) iRijTijd[prioFC11bus] = 0;
    if ((P[fc22] & BIT11) && C[cvc22fiets] && (iRijTimer[prioFC22fiets] < iRijTijd[prioFC22fiets])) iRijTijd[prioFC22fiets] = 0;
    if ((P[fc28] & BIT11) && C[cvc28fiets] && (iRijTimer[prioFC28fiets] < iRijTijd[prioFC28fiets])) iRijTijd[prioFC28fiets] = 0;
    if ((P[fc61] & BIT11) && C[cvc61karbus] && (iRijTimer[prioFC61karbus] < iRijTijd[prioFC61karbus])) iRijTijd[prioFC61karbus] = 0;
    if ((P[fc61] & BIT11) && C[cvc61risov] && (iRijTimer[prioFC61risov] < iRijTijd[prioFC61risov])) iRijTijd[prioFC61risov] = 0;
    if ((P[fc61] & BIT11) && C[cvc61risvrw] && (iRijTimer[prioFC61risvrw] < iRijTijd[prioFC61risvrw])) iRijTijd[prioFC61risvrw] = 0;
    if ((P[fc61] & BIT11) && C[cvc61risalg] && (iRijTimer[prioFC61risalg] < iRijTijd[prioFC61risalg])) iRijTijd[prioFC61risalg] = 0;
    if ((P[fc62] & BIT11) && C[cvc62karbus] && (iRijTimer[prioFC62karbus] < iRijTijd[prioFC62karbus])) iRijTijd[prioFC62karbus] = 0;
    if ((P[fc62] & BIT11) && C[cvc62risov] && (iRijTimer[prioFC62risov] < iRijTijd[prioFC62risov])) iRijTijd[prioFC62risov] = 0;
    if ((P[fc62] & BIT11) && C[cvc62risvrw] && (iRijTimer[prioFC62risvrw] < iRijTijd[prioFC62risvrw])) iRijTijd[prioFC62risvrw] = 0;
    if ((P[fc62] & BIT11) && C[cvc62risalg] && (iRijTimer[prioFC62risalg] < iRijTijd[prioFC62risalg])) iRijTijd[prioFC62risalg] = 0;
    if ((P[fc67] & BIT11) && C[cvc67karbus] && (iRijTimer[prioFC67karbus] < iRijTijd[prioFC67karbus])) iRijTijd[prioFC67karbus] = 0;
    if ((P[fc67] & BIT11) && C[cvc67risov] && (iRijTimer[prioFC67risov] < iRijTijd[prioFC67risov])) iRijTijd[prioFC67risov] = 0;
    if ((P[fc67] & BIT11) && C[cvc67risvrw] && (iRijTimer[prioFC67risvrw] < iRijTijd[prioFC67risvrw])) iRijTijd[prioFC67risvrw] = 0;
    if ((P[fc67] & BIT11) && C[cvc67risalg] && (iRijTimer[prioFC67risalg] < iRijTijd[prioFC67risalg])) iRijTijd[prioFC67risalg] = 0;
    if ((P[fc68] & BIT11) && C[cvc68karbus] && (iRijTimer[prioFC68karbus] < iRijTijd[prioFC68karbus])) iRijTijd[prioFC68karbus] = 0;
    if ((P[fc68] & BIT11) && C[cvc68risov] && (iRijTimer[prioFC68risov] < iRijTijd[prioFC68risov])) iRijTijd[prioFC68risov] = 0;
    if ((P[fc68] & BIT11) && C[cvc68risvrw] && (iRijTimer[prioFC68risvrw] < iRijTijd[prioFC68risvrw])) iRijTijd[prioFC68risvrw] = 0;
    if ((P[fc68] & BIT11) && C[cvc68risalg] && (iRijTimer[prioFC68risalg] < iRijTijd[prioFC68risalg])) iRijTijd[prioFC68risalg] = 0;
    if ((P[fc02] & BIT11) && C[cvchd02] && (iRijTimer[hdFC02] < iRijTijd[hdFC02])) iRijTijd[hdFC02] = 0;
    if ((P[fc03] & BIT11) && C[cvchd03] && (iRijTimer[hdFC03] < iRijTijd[hdFC03])) iRijTijd[hdFC03] = 0;
    if ((P[fc05] & BIT11) && C[cvchd05] && (iRijTimer[hdFC05] < iRijTijd[hdFC05])) iRijTijd[hdFC05] = 0;
    if ((P[fc08] & BIT11) && C[cvchd08] && (iRijTimer[hdFC08] < iRijTijd[hdFC08])) iRijTijd[hdFC08] = 0;
    if ((P[fc09] & BIT11) && C[cvchd09] && (iRijTimer[hdFC09] < iRijTijd[hdFC09])) iRijTijd[hdFC09] = 0;
    if ((P[fc11] & BIT11) && C[cvchd11] && (iRijTimer[hdFC11] < iRijTijd[hdFC11])) iRijTijd[hdFC11] = 0;
    if ((P[fc61] & BIT11) && C[cvchd61] && (iRijTimer[hdFC61] < iRijTijd[hdFC61])) iRijTijd[hdFC61] = 0;
    if ((P[fc62] & BIT11) && C[cvchd62] && (iRijTimer[hdFC62] < iRijTijd[hdFC62])) iRijTijd[hdFC62] = 0;
    if ((P[fc67] & BIT11) && C[cvchd67] && (iRijTimer[hdFC67] < iRijTijd[hdFC67])) iRijTijd[hdFC67] = 0;
    if ((P[fc68] & BIT11) && C[cvchd68] && (iRijTimer[hdFC68] < iRijTijd[hdFC68])) iRijTijd[hdFC68] = 0;
#endif

}

/*----------------------------------------------------------------
   InUitMelden verzorgt het afhandelen van in- en uitmeldingen.
   Voor het in- en uitmelden zijn hulpelementen gedefinieerd.
   Bij het opkomen van het hulpelement voor de inmelding wordt
   een inmelding gedaan voor OV-richting ov met prioriteitsniveau
   iInstPrioriteitsNiveau[ov] en prioriteitsopties
   iInstPrioriteitsOpties[ov]. Bij het opkomen van het hulpelement
   voor de uitmelding wordt de eerste (oudste) inmelding uitgemeld.
   De hulpelementen voor in- en uitmeldingen worden opgezet als
   de bijbehorende in- resp. uitmeldlussen opstaan.
   ---------------------------------------------------------------- */
void InUitMelden(void)
{
    int i = 0;

    /* Prioriteit-inmeldingen */
    PrioInmelden(prioFC02karbus, SH[hprioin02karbus], iInstPrioriteitsNiveau[prioFC02karbus], iInstPrioriteitsOpties[prioFC02karbus], 0, 0);
    PrioInmelden(prioFC02risov, SH[hprioin02risov], iInstPrioriteitsNiveau[prioFC02risov], iInstPrioriteitsOpties[prioFC02risov], 0, 0);
    PrioInmelden(prioFC02risvrw, SH[hprioin02risvrw], iInstPrioriteitsNiveau[prioFC02risvrw], iInstPrioriteitsOpties[prioFC02risvrw], 0, 0);
    PrioInmelden(prioFC02risalg, SH[hprioin02risalg], iInstPrioriteitsNiveau[prioFC02risalg], iInstPrioriteitsOpties[prioFC02risalg], 0, 0);
    PrioInmelden(prioFC03karbus, SH[hprioin03karbus], iInstPrioriteitsNiveau[prioFC03karbus], iInstPrioriteitsOpties[prioFC03karbus], 0, 0);
    PrioInmelden(prioFC03risov, SH[hprioin03risov], iInstPrioriteitsNiveau[prioFC03risov], iInstPrioriteitsOpties[prioFC03risov], 0, 0);
    PrioInmelden(prioFC03risvrw, SH[hprioin03risvrw], iInstPrioriteitsNiveau[prioFC03risvrw], iInstPrioriteitsOpties[prioFC03risvrw], 0, 0);
    PrioInmelden(prioFC03risalg, SH[hprioin03risalg], iInstPrioriteitsNiveau[prioFC03risalg], iInstPrioriteitsOpties[prioFC03risalg], 0, 0);
    PrioInmelden(prioFC05karbus, SH[hprioin05karbus], iInstPrioriteitsNiveau[prioFC05karbus], iInstPrioriteitsOpties[prioFC05karbus], 0, 0);
    PrioInmelden(prioFC05risov, SH[hprioin05risov], iInstPrioriteitsNiveau[prioFC05risov], iInstPrioriteitsOpties[prioFC05risov], 0, 0);
    PrioInmelden(prioFC05risvrw, SH[hprioin05risvrw], iInstPrioriteitsNiveau[prioFC05risvrw], iInstPrioriteitsOpties[prioFC05risvrw], 0, 0);
    PrioInmelden(prioFC05risalg, SH[hprioin05risalg], iInstPrioriteitsNiveau[prioFC05risalg], iInstPrioriteitsOpties[prioFC05risalg], 0, 0);
    PrioInmelden(prioFC08karbus, SH[hprioin08karbus], iInstPrioriteitsNiveau[prioFC08karbus], iInstPrioriteitsOpties[prioFC08karbus], 0, 0);
    PrioInmelden(prioFC08risov, SH[hprioin08risov], iInstPrioriteitsNiveau[prioFC08risov], iInstPrioriteitsOpties[prioFC08risov], 0, 0);
    PrioInmelden(prioFC08risvrw, SH[hprioin08risvrw], iInstPrioriteitsNiveau[prioFC08risvrw], iInstPrioriteitsOpties[prioFC08risvrw], 0, 0);
    PrioInmelden(prioFC08risalg, SH[hprioin08risalg], iInstPrioriteitsNiveau[prioFC08risalg], iInstPrioriteitsOpties[prioFC08risalg], 0, 0);
    PrioInmelden(prioFC09karbus, SH[hprioin09karbus], iInstPrioriteitsNiveau[prioFC09karbus], iInstPrioriteitsOpties[prioFC09karbus], 0, 0);
    PrioInmelden(prioFC09risov, SH[hprioin09risov], iInstPrioriteitsNiveau[prioFC09risov], iInstPrioriteitsOpties[prioFC09risov], 0, 0);
    PrioInmelden(prioFC09risvrw, SH[hprioin09risvrw], iInstPrioriteitsNiveau[prioFC09risvrw], iInstPrioriteitsOpties[prioFC09risvrw], 0, 0);
    PrioInmelden(prioFC09risalg, SH[hprioin09risalg], iInstPrioriteitsNiveau[prioFC09risalg], iInstPrioriteitsOpties[prioFC09risalg], 0, 0);
    PrioInmelden(prioFC11karbus, SH[hprioin11karbus], iInstPrioriteitsNiveau[prioFC11karbus], iInstPrioriteitsOpties[prioFC11karbus], 0, 0);
    PrioInmelden(prioFC11risov, SH[hprioin11risov], iInstPrioriteitsNiveau[prioFC11risov], iInstPrioriteitsOpties[prioFC11risov], 0, 0);
    PrioInmelden(prioFC11risvrw, SH[hprioin11risvrw], iInstPrioriteitsNiveau[prioFC11risvrw], iInstPrioriteitsOpties[prioFC11risvrw], 0, 0);
    PrioInmelden(prioFC11risalg, SH[hprioin11risalg], iInstPrioriteitsNiveau[prioFC11risalg], iInstPrioriteitsOpties[prioFC11risalg], 0, 0);
    PrioInmelden(prioFC11bus, SH[hprioin11bus], iInstPrioriteitsNiveau[prioFC11bus], iInstPrioriteitsOpties[prioFC11bus], 0, 0);
    PrioInmelden(prioFC22fiets, SH[hprioin22fiets], iInstPrioriteitsNiveau[prioFC22fiets], iInstPrioriteitsOpties[prioFC22fiets], 0, 0);
    PrioInmelden(prioFC28fiets, SH[hprioin28fiets], iInstPrioriteitsNiveau[prioFC28fiets], iInstPrioriteitsOpties[prioFC28fiets], 0, 0);
    PrioInmelden(prioFC61karbus, SH[hprioin61karbus], iInstPrioriteitsNiveau[prioFC61karbus], iInstPrioriteitsOpties[prioFC61karbus], 0, 0);
    PrioInmelden(prioFC61risov, SH[hprioin61risov], iInstPrioriteitsNiveau[prioFC61risov], iInstPrioriteitsOpties[prioFC61risov], 0, 0);
    PrioInmelden(prioFC61risvrw, SH[hprioin61risvrw], iInstPrioriteitsNiveau[prioFC61risvrw], iInstPrioriteitsOpties[prioFC61risvrw], 0, 0);
    PrioInmelden(prioFC61risalg, SH[hprioin61risalg], iInstPrioriteitsNiveau[prioFC61risalg], iInstPrioriteitsOpties[prioFC61risalg], 0, 0);
    PrioInmelden(prioFC62karbus, SH[hprioin62karbus], iInstPrioriteitsNiveau[prioFC62karbus], iInstPrioriteitsOpties[prioFC62karbus], 0, 0);
    PrioInmelden(prioFC62risov, SH[hprioin62risov], iInstPrioriteitsNiveau[prioFC62risov], iInstPrioriteitsOpties[prioFC62risov], 0, 0);
    PrioInmelden(prioFC62risvrw, SH[hprioin62risvrw], iInstPrioriteitsNiveau[prioFC62risvrw], iInstPrioriteitsOpties[prioFC62risvrw], 0, 0);
    PrioInmelden(prioFC62risalg, SH[hprioin62risalg], iInstPrioriteitsNiveau[prioFC62risalg], iInstPrioriteitsOpties[prioFC62risalg], 0, 0);
    PrioInmelden(prioFC67karbus, SH[hprioin67karbus], iInstPrioriteitsNiveau[prioFC67karbus], iInstPrioriteitsOpties[prioFC67karbus], 0, 0);
    PrioInmelden(prioFC67risov, SH[hprioin67risov], iInstPrioriteitsNiveau[prioFC67risov], iInstPrioriteitsOpties[prioFC67risov], 0, 0);
    PrioInmelden(prioFC67risvrw, SH[hprioin67risvrw], iInstPrioriteitsNiveau[prioFC67risvrw], iInstPrioriteitsOpties[prioFC67risvrw], 0, 0);
    PrioInmelden(prioFC67risalg, SH[hprioin67risalg], iInstPrioriteitsNiveau[prioFC67risalg], iInstPrioriteitsOpties[prioFC67risalg], 0, 0);
    PrioInmelden(prioFC68karbus, SH[hprioin68karbus], iInstPrioriteitsNiveau[prioFC68karbus], iInstPrioriteitsOpties[prioFC68karbus], 0, 0);
    PrioInmelden(prioFC68risov, SH[hprioin68risov], iInstPrioriteitsNiveau[prioFC68risov], iInstPrioriteitsOpties[prioFC68risov], 0, 0);
    PrioInmelden(prioFC68risvrw, SH[hprioin68risvrw], iInstPrioriteitsNiveau[prioFC68risvrw], iInstPrioriteitsOpties[prioFC68risvrw], 0, 0);
    PrioInmelden(prioFC68risalg, SH[hprioin68risalg], iInstPrioriteitsNiveau[prioFC68risalg], iInstPrioriteitsOpties[prioFC68risalg], 0, 0);

    /* Prioriteit-uitmeldingen */
    PrioUitmelden(prioFC02karbus, SH[hpriouit02karbus]);
    PrioUitmelden(prioFC02risov, SH[hpriouit02risov]);
    PrioUitmelden(prioFC02risvrw, SH[hpriouit02risvrw]);
    PrioUitmelden(prioFC02risalg, SH[hpriouit02risalg]);
    PrioUitmelden(prioFC03karbus, SH[hpriouit03karbus]);
    PrioUitmelden(prioFC03risov, SH[hpriouit03risov]);
    PrioUitmelden(prioFC03risvrw, SH[hpriouit03risvrw]);
    PrioUitmelden(prioFC03risalg, SH[hpriouit03risalg]);
    PrioUitmelden(prioFC05karbus, SH[hpriouit05karbus]);
    PrioUitmelden(prioFC05risov, SH[hpriouit05risov]);
    PrioUitmelden(prioFC05risvrw, SH[hpriouit05risvrw]);
    PrioUitmelden(prioFC05risalg, SH[hpriouit05risalg]);
    PrioUitmelden(prioFC08karbus, SH[hpriouit08karbus]);
    PrioUitmelden(prioFC08risov, SH[hpriouit08risov]);
    PrioUitmelden(prioFC08risvrw, SH[hpriouit08risvrw]);
    PrioUitmelden(prioFC08risalg, SH[hpriouit08risalg]);
    PrioUitmelden(prioFC09karbus, SH[hpriouit09karbus]);
    PrioUitmelden(prioFC09risov, SH[hpriouit09risov]);
    PrioUitmelden(prioFC09risvrw, SH[hpriouit09risvrw]);
    PrioUitmelden(prioFC09risalg, SH[hpriouit09risalg]);
    PrioUitmelden(prioFC11karbus, SH[hpriouit11karbus]);
    PrioUitmelden(prioFC11risov, SH[hpriouit11risov]);
    PrioUitmelden(prioFC11risvrw, SH[hpriouit11risvrw]);
    PrioUitmelden(prioFC11risalg, SH[hpriouit11risalg]);
    PrioUitmelden(prioFC11bus, SH[hpriouit11bus]);
    PrioUitmelden(prioFC22fiets, SH[hpriouit22fiets]);
    PrioUitmelden(prioFC28fiets, SH[hpriouit28fiets]);
    PrioUitmelden(prioFC61karbus, SH[hpriouit61karbus]);
    PrioUitmelden(prioFC61risov, SH[hpriouit61risov]);
    PrioUitmelden(prioFC61risvrw, SH[hpriouit61risvrw]);
    PrioUitmelden(prioFC61risalg, SH[hpriouit61risalg]);
    PrioUitmelden(prioFC62karbus, SH[hpriouit62karbus]);
    PrioUitmelden(prioFC62risov, SH[hpriouit62risov]);
    PrioUitmelden(prioFC62risvrw, SH[hpriouit62risvrw]);
    PrioUitmelden(prioFC62risalg, SH[hpriouit62risalg]);
    PrioUitmelden(prioFC67karbus, SH[hpriouit67karbus]);
    PrioUitmelden(prioFC67risov, SH[hpriouit67risov]);
    PrioUitmelden(prioFC67risvrw, SH[hpriouit67risvrw]);
    PrioUitmelden(prioFC67risalg, SH[hpriouit67risalg]);
    PrioUitmelden(prioFC68karbus, SH[hpriouit68karbus]);
    PrioUitmelden(prioFC68risov, SH[hpriouit68risov]);
    PrioUitmelden(prioFC68risvrw, SH[hpriouit68risvrw]);
    PrioUitmelden(prioFC68risalg, SH[hpriouit68risalg]);

    /* HD-inmeldingen */
    PrioInmelden(hdFC02, SH[hhdin02], iInstPrioriteitsNiveau[hdFC02], iInstPrioriteitsOpties[hdFC02], 0, 0);
    PrioInmelden(hdFC03, SH[hhdin03], iInstPrioriteitsNiveau[hdFC03], iInstPrioriteitsOpties[hdFC03], 0, 0);
    PrioInmelden(hdFC05, SH[hhdin05], iInstPrioriteitsNiveau[hdFC05], iInstPrioriteitsOpties[hdFC05], 0, 0);
    PrioInmelden(hdFC08, SH[hhdin08], iInstPrioriteitsNiveau[hdFC08], iInstPrioriteitsOpties[hdFC08], 0, 0);
    PrioInmelden(hdFC09, SH[hhdin09], iInstPrioriteitsNiveau[hdFC09], iInstPrioriteitsOpties[hdFC09], 0, 0);
    PrioInmelden(hdFC11, SH[hhdin11], iInstPrioriteitsNiveau[hdFC11], iInstPrioriteitsOpties[hdFC11], 0, 0);
    PrioInmelden(hdFC61, SH[hhdin61], iInstPrioriteitsNiveau[hdFC61], iInstPrioriteitsOpties[hdFC61], 0, 0);
    PrioInmelden(hdFC62, SH[hhdin62], iInstPrioriteitsNiveau[hdFC62], iInstPrioriteitsOpties[hdFC62], 0, 0);
    PrioInmelden(hdFC67, SH[hhdin67], iInstPrioriteitsNiveau[hdFC67], iInstPrioriteitsOpties[hdFC67], 0, 0);
    PrioInmelden(hdFC68, SH[hhdin68], iInstPrioriteitsNiveau[hdFC68], iInstPrioriteitsOpties[hdFC68], 0, 0);

    /* HD-uitmeldingen */
    PrioUitmelden(hdFC02, SH[hhduit02]);
    PrioUitmelden(hdFC03, SH[hhduit03]);
    PrioUitmelden(hdFC05, SH[hhduit05]);
    PrioUitmelden(hdFC08, SH[hhduit08]);
    PrioUitmelden(hdFC09, SH[hhduit09]);
    PrioUitmelden(hdFC11, SH[hhduit11]);
    PrioUitmelden(hdFC61, SH[hhduit61]);
    PrioUitmelden(hdFC62, SH[hhduit62]);
    PrioUitmelden(hdFC67, SH[hhduit67]);
    PrioUitmelden(hdFC68, SH[hhduit68]);

    IH[hhdin02] = IH[hhduit02] = FALSE;
    IH[hhdin03] = IH[hhduit03] = FALSE;
    IH[hhdin05] = IH[hhduit05] = FALSE;
    IH[hhdin08] = IH[hhduit08] = FALSE;
    IH[hhdin09] = IH[hhduit09] = FALSE;
    IH[hhdin11] = IH[hhduit11] = FALSE;
    IH[hhdin61] = IH[hhduit61] = FALSE;
    IH[hhdin62] = IH[hhduit62] = FALSE;
    IH[hhdin67] = IH[hhduit67] = FALSE;
    IH[hhdin68] = IH[hhduit68] = FALSE;


    /* Inmelding fc02 type Bus */
    IH[hprioin02karbus] = IH[hprioin02karbuskar] = FALSE;
    if (SCH[schprioin02karbuskar])
    {
        IH[hprioin02karbuskar] = RT[tprioin02karbuskar] = !T[tprioin02karbus] && !T[tprioin02karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat02karbus], TRUE, PRM[prmkarsg02],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin02karbus] = RT[tprioin02karbus] = IH[hprioin02karbuskar];

    /* Uitmelding fc02 type Bus */
    IH[hpriouit02karbus] = IH[hpriouit02karbuskar] = FALSE;
    if (SCH[schpriouit02karbuskar])
    {
        IH[hpriouit02karbuskar] = RT[tpriouit02karbuskar] = !T[tpriouit02karbus] && !T[tpriouit02karbuskar] && DSIMeldingPRIO_V2(fc02, prioFC02karbus, 0, PRM[prmvtgcat02karbus], TRUE, PRM[prmkarsg02],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit02karbus] = RT[tpriouit02karbus] = IH[hpriouit02karbuskar];

    /* Inmelding fc02 type Bus */
    IH[hprioin02risov] = IH[hprioin02risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin02risovris])
    {
        IH[hprioin02risovris] = 
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risov], SYSTEM_ITF1, PRM[prmrislaneid02risov_1], PRM[prmrisstationtype02risov], PRM[prmrisstart02risov], PRM[prmrisend02risov], PRM[prmrisrole02risov], PRM[prmrissubrole02risov], PRM[prmrisimportance02risov], PRM[prmriseta02risov], prioFC02risov) ||
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risov], SYSTEM_ITF1, PRM[prmrislaneid02risov_2], PRM[prmrisstationtype02risov], PRM[prmrisstart02risov], PRM[prmrisend02risov], PRM[prmrisrole02risov], PRM[prmrissubrole02risov], PRM[prmrisimportance02risov], PRM[prmriseta02risov], prioFC02risov);
        if (IH[hprioin02risovris]) iPrioriteitNooitAfkappen[prioFC02risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin02risov] = RT[tprioin02risov] = IH[hprioin02risovris];

    /* Uitmelding fc02 type Bus */
    IH[hpriouit02risov] = IH[hpriouit02risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit02risovris])
    {
        IH[hpriouit02risovris] = (boolv)ris_uitmelding_selectief(prioFC02risov);
        if (IH[hpriouit02risovris] && iAantalInmeldingen[prioFC02risov] == 0) iPrioriteitNooitAfkappen[prioFC02risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit02risov] = RT[tpriouit02risov] = IH[hpriouit02risovris];

    /* Inmelding fc02 type Vrachtwagen */
    IH[hprioin02risvrw] = IH[hprioin02risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin02risvrwris])
    {
        IH[hprioin02risvrwris] = 
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risvrw], SYSTEM_ITF1, PRM[prmrislaneid02risvrw_1], PRM[prmrisstationtype02risvrw], PRM[prmrisstart02risvrw], PRM[prmrisend02risvrw], PRM[prmrisrole02risvrw], PRM[prmrissubrole02risvrw], PRM[prmrisimportance02risvrw], PRM[prmriseta02risvrw], prioFC02risvrw) ||
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risvrw], SYSTEM_ITF1, PRM[prmrislaneid02risvrw_2], PRM[prmrisstationtype02risvrw], PRM[prmrisstart02risvrw], PRM[prmrisend02risvrw], PRM[prmrisrole02risvrw], PRM[prmrissubrole02risvrw], PRM[prmrisimportance02risvrw], PRM[prmriseta02risvrw], prioFC02risvrw);
        if (IH[hprioin02risvrwris]) iPrioriteitNooitAfkappen[prioFC02risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin02risvrw] = RT[tprioin02risvrw] = IH[hprioin02risvrwris];

    /* Uitmelding fc02 type Vrachtwagen */
    IH[hpriouit02risvrw] = IH[hpriouit02risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit02risvrwris])
    {
        IH[hpriouit02risvrwris] = (boolv)ris_uitmelding_selectief(prioFC02risvrw);
        if (IH[hpriouit02risvrwris] && iAantalInmeldingen[prioFC02risvrw] == 0) iPrioriteitNooitAfkappen[prioFC02risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit02risvrw] = RT[tpriouit02risvrw] = IH[hpriouit02risvrwris];

    /* Inmelding fc02 type NG */
    IH[hprioin02risalg] = IH[hprioin02risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin02risalgris])
    {
        IH[hprioin02risalgris] = 
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risalg], SYSTEM_ITF1, PRM[prmrislaneid02risalg_1], PRM[prmrisstationtype02risalg], PRM[prmrisstart02risalg], PRM[prmrisend02risalg], PRM[prmrisrole02risalg], PRM[prmrissubrole02risalg], PRM[prmrisimportance02risalg], PRM[prmriseta02risalg], prioFC02risalg) ||
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02risalg], SYSTEM_ITF1, PRM[prmrislaneid02risalg_2], PRM[prmrisstationtype02risalg], PRM[prmrisstart02risalg], PRM[prmrisend02risalg], PRM[prmrisrole02risalg], PRM[prmrissubrole02risalg], PRM[prmrisimportance02risalg], PRM[prmriseta02risalg], prioFC02risalg);
        if (IH[hprioin02risalgris]) iPrioriteitNooitAfkappen[prioFC02risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin02risalg] = RT[tprioin02risalg] = IH[hprioin02risalgris];

    /* Uitmelding fc02 type NG */
    IH[hpriouit02risalg] = IH[hpriouit02risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit02risalgris])
    {
        IH[hpriouit02risalgris] = (boolv)ris_uitmelding_selectief(prioFC02risalg);
        if (IH[hpriouit02risalgris] && iAantalInmeldingen[prioFC02risalg] == 0) iPrioriteitNooitAfkappen[prioFC02risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit02risalg] = RT[tpriouit02risalg] = IH[hpriouit02risalgris];

    /* Inmelding fc03 type Bus */
    IH[hprioin03karbus] = IH[hprioin03karbuskar] = FALSE;
    if (SCH[schprioin03karbuskar])
    {
        IH[hprioin03karbuskar] = RT[tprioin03karbuskar] = !T[tprioin03karbus] && !T[tprioin03karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat03karbus], TRUE, PRM[prmkarsg03],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin03karbus] = RT[tprioin03karbus] = IH[hprioin03karbuskar];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03karbus] = IH[hpriouit03karbuskar] = FALSE;
    if (SCH[schpriouit03karbuskar])
    {
        IH[hpriouit03karbuskar] = RT[tpriouit03karbuskar] = !T[tpriouit03karbus] && !T[tpriouit03karbuskar] && DSIMeldingPRIO_V2(fc03, prioFC03karbus, 0, PRM[prmvtgcat03karbus], TRUE, PRM[prmkarsg03],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit03karbus] = RT[tpriouit03karbus] = IH[hpriouit03karbuskar];

    /* Inmelding fc03 type Bus */
    IH[hprioin03risov] = IH[hprioin03risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin03risovris])
    {
        IH[hprioin03risovris] = 
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03risov], SYSTEM_ITF1, PRM[prmrislaneid03risov_1], PRM[prmrisstationtype03risov], PRM[prmrisstart03risov], PRM[prmrisend03risov], PRM[prmrisrole03risov], PRM[prmrissubrole03risov], PRM[prmrisimportance03risov], PRM[prmriseta03risov], prioFC03risov);
        if (IH[hprioin03risovris]) iPrioriteitNooitAfkappen[prioFC03risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin03risov] = RT[tprioin03risov] = IH[hprioin03risovris];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03risov] = IH[hpriouit03risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit03risovris])
    {
        IH[hpriouit03risovris] = (boolv)ris_uitmelding_selectief(prioFC03risov);
        if (IH[hpriouit03risovris] && iAantalInmeldingen[prioFC03risov] == 0) iPrioriteitNooitAfkappen[prioFC03risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit03risov] = RT[tpriouit03risov] = IH[hpriouit03risovris];

    /* Inmelding fc03 type Vrachtwagen */
    IH[hprioin03risvrw] = IH[hprioin03risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin03risvrwris])
    {
        IH[hprioin03risvrwris] = 
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03risvrw], SYSTEM_ITF1, PRM[prmrislaneid03risvrw_1], PRM[prmrisstationtype03risvrw], PRM[prmrisstart03risvrw], PRM[prmrisend03risvrw], PRM[prmrisrole03risvrw], PRM[prmrissubrole03risvrw], PRM[prmrisimportance03risvrw], PRM[prmriseta03risvrw], prioFC03risvrw);
        if (IH[hprioin03risvrwris]) iPrioriteitNooitAfkappen[prioFC03risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin03risvrw] = RT[tprioin03risvrw] = IH[hprioin03risvrwris];

    /* Uitmelding fc03 type Vrachtwagen */
    IH[hpriouit03risvrw] = IH[hpriouit03risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit03risvrwris])
    {
        IH[hpriouit03risvrwris] = (boolv)ris_uitmelding_selectief(prioFC03risvrw);
        if (IH[hpriouit03risvrwris] && iAantalInmeldingen[prioFC03risvrw] == 0) iPrioriteitNooitAfkappen[prioFC03risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit03risvrw] = RT[tpriouit03risvrw] = IH[hpriouit03risvrwris];

    /* Inmelding fc03 type Bus */
    IH[hprioin03risalg] = IH[hprioin03risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin03risalgris])
    {
        IH[hprioin03risalgris] = 
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03risalg], SYSTEM_ITF1, PRM[prmrislaneid03risalg_1], PRM[prmrisstationtype03risalg], PRM[prmrisstart03risalg], PRM[prmrisend03risalg], PRM[prmrisrole03risalg], PRM[prmrissubrole03risalg], PRM[prmrisimportance03risalg], PRM[prmriseta03risalg], prioFC03risalg);
        if (IH[hprioin03risalgris]) iPrioriteitNooitAfkappen[prioFC03risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin03risalg] = IH[hprioin03risalgris];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03risalg] = IH[hpriouit03risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit03risalgris])
    {
        IH[hpriouit03risalgris] = (boolv)ris_uitmelding_selectief(prioFC03risalg);
        if (IH[hpriouit03risalgris] && iAantalInmeldingen[prioFC03risalg] == 0) iPrioriteitNooitAfkappen[prioFC03risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit03risalg] = IH[hpriouit03risalgris];

    /* Inmelding fc05 type Bus */
    IH[hprioin05karbus] = IH[hprioin05karbuskar] = FALSE;
    if (SCH[schprioin05karbuskar])
    {
        IH[hprioin05karbuskar] = RT[tprioin05karbuskar] = !T[tprioin05karbus] && !T[tprioin05karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat05karbus], TRUE, PRM[prmkarsg05],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin05karbus] = RT[tprioin05karbus] = IH[hprioin05karbuskar];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05karbus] = IH[hpriouit05karbuskar] = FALSE;
    if (SCH[schpriouit05karbuskar])
    {
        IH[hpriouit05karbuskar] = RT[tpriouit05karbuskar] = !T[tpriouit05karbus] && !T[tpriouit05karbuskar] && DSIMeldingPRIO_V2(fc05, prioFC05karbus, 0, PRM[prmvtgcat05karbus], TRUE, PRM[prmkarsg05],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit05karbus] = RT[tpriouit05karbus] = IH[hpriouit05karbuskar];

    /* Inmelding fc05 type Bus */
    IH[hprioin05risov] = IH[hprioin05risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin05risovris])
    {
        IH[hprioin05risovris] = 
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05risov], SYSTEM_ITF1, PRM[prmrislaneid05risov_1], PRM[prmrisstationtype05risov], PRM[prmrisstart05risov], PRM[prmrisend05risov], PRM[prmrisrole05risov], PRM[prmrissubrole05risov], PRM[prmrisimportance05risov], PRM[prmriseta05risov], prioFC05risov);
        if (IH[hprioin05risovris]) iPrioriteitNooitAfkappen[prioFC05risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin05risov] = RT[tprioin05risov] = IH[hprioin05risovris];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05risov] = IH[hpriouit05risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit05risovris])
    {
        IH[hpriouit05risovris] = (boolv)ris_uitmelding_selectief(prioFC05risov);
        if (IH[hpriouit05risovris] && iAantalInmeldingen[prioFC05risov] == 0) iPrioriteitNooitAfkappen[prioFC05risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit05risov] = RT[tpriouit05risov] = IH[hpriouit05risovris];

    /* Inmelding fc05 type Vrachtwagen */
    IH[hprioin05risvrw] = IH[hprioin05risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin05risvrwris])
    {
        IH[hprioin05risvrwris] = 
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05risvrw], SYSTEM_ITF1, PRM[prmrislaneid05risvrw_1], PRM[prmrisstationtype05risvrw], PRM[prmrisstart05risvrw], PRM[prmrisend05risvrw], PRM[prmrisrole05risvrw], PRM[prmrissubrole05risvrw], PRM[prmrisimportance05risvrw], PRM[prmriseta05risvrw], prioFC05risvrw);
        if (IH[hprioin05risvrwris]) iPrioriteitNooitAfkappen[prioFC05risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin05risvrw] = RT[tprioin05risvrw] = IH[hprioin05risvrwris];

    /* Uitmelding fc05 type Vrachtwagen */
    IH[hpriouit05risvrw] = IH[hpriouit05risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit05risvrwris])
    {
        IH[hpriouit05risvrwris] = (boolv)ris_uitmelding_selectief(prioFC05risvrw);
        if (IH[hpriouit05risvrwris] && iAantalInmeldingen[prioFC05risvrw] == 0) iPrioriteitNooitAfkappen[prioFC05risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit05risvrw] = RT[tpriouit05risvrw] = IH[hpriouit05risvrwris];

    /* Inmelding fc05 type Bus */
    IH[hprioin05risalg] = IH[hprioin05risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin05risalgris])
    {
        IH[hprioin05risalgris] = 
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05risalg], SYSTEM_ITF1, PRM[prmrislaneid05risalg_1], PRM[prmrisstationtype05risalg], PRM[prmrisstart05risalg], PRM[prmrisend05risalg], PRM[prmrisrole05risalg], PRM[prmrissubrole05risalg], PRM[prmrisimportance05risalg], PRM[prmriseta05risalg], prioFC05risalg);
        if (IH[hprioin05risalgris]) iPrioriteitNooitAfkappen[prioFC05risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin05risalg] = IH[hprioin05risalgris];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05risalg] = IH[hpriouit05risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit05risalgris])
    {
        IH[hpriouit05risalgris] = (boolv)ris_uitmelding_selectief(prioFC05risalg);
        if (IH[hpriouit05risalgris] && iAantalInmeldingen[prioFC05risalg] == 0) iPrioriteitNooitAfkappen[prioFC05risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit05risalg] = IH[hpriouit05risalgris];

    /* Inmelding fc08 type Bus */
    IH[hprioin08karbus] = IH[hprioin08karbuskar] = FALSE;
    if (SCH[schprioin08karbuskar])
    {
        IH[hprioin08karbuskar] = RT[tprioin08karbuskar] = !T[tprioin08karbus] && !T[tprioin08karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat08karbus], TRUE, PRM[prmkarsg08],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin08karbus] = RT[tprioin08karbus] = IH[hprioin08karbuskar];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08karbus] = IH[hpriouit08karbuskar] = FALSE;
    if (SCH[schpriouit08karbuskar])
    {
        IH[hpriouit08karbuskar] = RT[tpriouit08karbuskar] = !T[tpriouit08karbus] && !T[tpriouit08karbuskar] && DSIMeldingPRIO_V2(fc08, prioFC08karbus, 0, PRM[prmvtgcat08karbus], TRUE, PRM[prmkarsg08],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit08karbus] = RT[tpriouit08karbus] = IH[hpriouit08karbuskar];

    /* Inmelding fc08 type Bus */
    IH[hprioin08risov] = IH[hprioin08risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin08risovris])
    {
        IH[hprioin08risovris] = 
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risov], SYSTEM_ITF1, PRM[prmrislaneid08risov_1], PRM[prmrisstationtype08risov], PRM[prmrisstart08risov], PRM[prmrisend08risov], PRM[prmrisrole08risov], PRM[prmrissubrole08risov], PRM[prmrisimportance08risov], PRM[prmriseta08risov], prioFC08risov) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risov], SYSTEM_ITF1, PRM[prmrislaneid08risov_2], PRM[prmrisstationtype08risov], PRM[prmrisstart08risov], PRM[prmrisend08risov], PRM[prmrisrole08risov], PRM[prmrissubrole08risov], PRM[prmrisimportance08risov], PRM[prmriseta08risov], prioFC08risov);
        if (IH[hprioin08risovris]) iPrioriteitNooitAfkappen[prioFC08risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin08risov] = RT[tprioin08risov] = IH[hprioin08risovris];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08risov] = IH[hpriouit08risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit08risovris])
    {
        IH[hpriouit08risovris] = (boolv)ris_uitmelding_selectief(prioFC08risov);
        if (IH[hpriouit08risovris] && iAantalInmeldingen[prioFC08risov] == 0) iPrioriteitNooitAfkappen[prioFC08risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit08risov] = RT[tpriouit08risov] = IH[hpriouit08risovris];

    /* Inmelding fc08 type Vrachtwagen */
    IH[hprioin08risvrw] = IH[hprioin08risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin08risvrwris])
    {
        IH[hprioin08risvrwris] = 
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risvrw], SYSTEM_ITF1, PRM[prmrislaneid08risvrw_1], PRM[prmrisstationtype08risvrw], PRM[prmrisstart08risvrw], PRM[prmrisend08risvrw], PRM[prmrisrole08risvrw], PRM[prmrissubrole08risvrw], PRM[prmrisimportance08risvrw], PRM[prmriseta08risvrw], prioFC08risvrw) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risvrw], SYSTEM_ITF1, PRM[prmrislaneid08risvrw_2], PRM[prmrisstationtype08risvrw], PRM[prmrisstart08risvrw], PRM[prmrisend08risvrw], PRM[prmrisrole08risvrw], PRM[prmrissubrole08risvrw], PRM[prmrisimportance08risvrw], PRM[prmriseta08risvrw], prioFC08risvrw);
        if (IH[hprioin08risvrwris]) iPrioriteitNooitAfkappen[prioFC08risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin08risvrw] = RT[tprioin08risvrw] = IH[hprioin08risvrwris];

    /* Uitmelding fc08 type Vrachtwagen */
    IH[hpriouit08risvrw] = IH[hpriouit08risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit08risvrwris])
    {
        IH[hpriouit08risvrwris] = (boolv)ris_uitmelding_selectief(prioFC08risvrw);
        if (IH[hpriouit08risvrwris] && iAantalInmeldingen[prioFC08risvrw] == 0) iPrioriteitNooitAfkappen[prioFC08risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit08risvrw] = RT[tpriouit08risvrw] = IH[hpriouit08risvrwris];

    /* Inmelding fc08 type Bus */
    IH[hprioin08risalg] = IH[hprioin08risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin08risalgris])
    {
        IH[hprioin08risalgris] = 
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risalg], SYSTEM_ITF1, PRM[prmrislaneid08risalg_1], PRM[prmrisstationtype08risalg], PRM[prmrisstart08risalg], PRM[prmrisend08risalg], PRM[prmrisrole08risalg], PRM[prmrissubrole08risalg], PRM[prmrisimportance08risalg], PRM[prmriseta08risalg], prioFC08risalg) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risalg], SYSTEM_ITF1, PRM[prmrislaneid08risalg_2], PRM[prmrisstationtype08risalg], PRM[prmrisstart08risalg], PRM[prmrisend08risalg], PRM[prmrisrole08risalg], PRM[prmrissubrole08risalg], PRM[prmrisimportance08risalg], PRM[prmriseta08risalg], prioFC08risalg);
        if (IH[hprioin08risalgris]) iPrioriteitNooitAfkappen[prioFC08risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin08risalg] = IH[hprioin08risalgris];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08risalg] = IH[hpriouit08risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit08risalgris])
    {
        IH[hpriouit08risalgris] = (boolv)ris_uitmelding_selectief(prioFC08risalg);
        if (IH[hpriouit08risalgris] && iAantalInmeldingen[prioFC08risalg] == 0) iPrioriteitNooitAfkappen[prioFC08risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit08risalg] = IH[hpriouit08risalgris];

    /* Inmelding fc09 type Bus */
    IH[hprioin09karbus] = IH[hprioin09karbuskar] = FALSE;
    if (SCH[schprioin09karbuskar])
    {
        IH[hprioin09karbuskar] = RT[tprioin09karbuskar] = !T[tprioin09karbus] && !T[tprioin09karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat09karbus], TRUE, PRM[prmkarsg09],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin09karbus] = RT[tprioin09karbus] = IH[hprioin09karbuskar];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09karbus] = IH[hpriouit09karbuskar] = FALSE;
    if (SCH[schpriouit09karbuskar])
    {
        IH[hpriouit09karbuskar] = RT[tpriouit09karbuskar] = !T[tpriouit09karbus] && !T[tpriouit09karbuskar] && DSIMeldingPRIO_V2(fc09, prioFC09karbus, 0, PRM[prmvtgcat09karbus], TRUE, PRM[prmkarsg09],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit09karbus] = RT[tpriouit09karbus] = IH[hpriouit09karbuskar];

    /* Inmelding fc09 type Bus */
    IH[hprioin09risov] = IH[hprioin09risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin09risovris])
    {
        IH[hprioin09risovris] = 
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09risov], SYSTEM_ITF1, PRM[prmrislaneid09risov_1], PRM[prmrisstationtype09risov], PRM[prmrisstart09risov], PRM[prmrisend09risov], PRM[prmrisrole09risov], PRM[prmrissubrole09risov], PRM[prmrisimportance09risov], PRM[prmriseta09risov], prioFC09risov);
        if (IH[hprioin09risovris]) iPrioriteitNooitAfkappen[prioFC09risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin09risov] = RT[tprioin09risov] = IH[hprioin09risovris];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09risov] = IH[hpriouit09risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit09risovris])
    {
        IH[hpriouit09risovris] = (boolv)ris_uitmelding_selectief(prioFC09risov);
        if (IH[hpriouit09risovris] && iAantalInmeldingen[prioFC09risov] == 0) iPrioriteitNooitAfkappen[prioFC09risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit09risov] = RT[tpriouit09risov] = IH[hpriouit09risovris];

    /* Inmelding fc09 type Vrachtwagen */
    IH[hprioin09risvrw] = IH[hprioin09risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin09risvrwris])
    {
        IH[hprioin09risvrwris] = 
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09risvrw], SYSTEM_ITF1, PRM[prmrislaneid09risvrw_1], PRM[prmrisstationtype09risvrw], PRM[prmrisstart09risvrw], PRM[prmrisend09risvrw], PRM[prmrisrole09risvrw], PRM[prmrissubrole09risvrw], PRM[prmrisimportance09risvrw], PRM[prmriseta09risvrw], prioFC09risvrw);
        if (IH[hprioin09risvrwris]) iPrioriteitNooitAfkappen[prioFC09risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin09risvrw] = RT[tprioin09risvrw] = IH[hprioin09risvrwris];

    /* Uitmelding fc09 type Vrachtwagen */
    IH[hpriouit09risvrw] = IH[hpriouit09risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit09risvrwris])
    {
        IH[hpriouit09risvrwris] = (boolv)ris_uitmelding_selectief(prioFC09risvrw);
        if (IH[hpriouit09risvrwris] && iAantalInmeldingen[prioFC09risvrw] == 0) iPrioriteitNooitAfkappen[prioFC09risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit09risvrw] = RT[tpriouit09risvrw] = IH[hpriouit09risvrwris];

    /* Inmelding fc09 type Bus */
    IH[hprioin09risalg] = IH[hprioin09risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin09risalgris])
    {
        IH[hprioin09risalgris] = 
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09risalg], SYSTEM_ITF1, PRM[prmrislaneid09risalg_1], PRM[prmrisstationtype09risalg], PRM[prmrisstart09risalg], PRM[prmrisend09risalg], PRM[prmrisrole09risalg], PRM[prmrissubrole09risalg], PRM[prmrisimportance09risalg], PRM[prmriseta09risalg], prioFC09risalg);
        if (IH[hprioin09risalgris]) iPrioriteitNooitAfkappen[prioFC09risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin09risalg] = IH[hprioin09risalgris];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09risalg] = IH[hpriouit09risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit09risalgris])
    {
        IH[hpriouit09risalgris] = (boolv)ris_uitmelding_selectief(prioFC09risalg);
        if (IH[hpriouit09risalgris] && iAantalInmeldingen[prioFC09risalg] == 0) iPrioriteitNooitAfkappen[prioFC09risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit09risalg] = IH[hpriouit09risalgris];

    /* Inmelding fc11 type Bus */
    IH[hprioin11karbus] = IH[hprioin11karbuskar] = FALSE;
    if (SCH[schprioin11karbuskar])
    {
        IH[hprioin11karbuskar] = RT[tprioin11karbuskar] = !T[tprioin11karbus] && !T[tprioin11karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat11karbus], TRUE, PRM[prmkarsg11],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin11karbus] = RT[tprioin11karbus] = IH[hprioin11karbuskar];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11karbus] = IH[hpriouit11karbuskar] = FALSE;
    if (SCH[schpriouit11karbuskar])
    {
        IH[hpriouit11karbuskar] = RT[tpriouit11karbuskar] = !T[tpriouit11karbus] && !T[tpriouit11karbuskar] && DSIMeldingPRIO_V2(fc11, prioFC11karbus, 0, PRM[prmvtgcat11karbus], TRUE, PRM[prmkarsg11],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit11karbus] = RT[tpriouit11karbus] = IH[hpriouit11karbuskar];

    /* Inmelding fc11 type Bus */
    IH[hprioin11risov] = IH[hprioin11risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin11risovris])
    {
        IH[hprioin11risovris] = 
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11risov], SYSTEM_ITF1, PRM[prmrislaneid11risov_1], PRM[prmrisstationtype11risov], PRM[prmrisstart11risov], PRM[prmrisend11risov], PRM[prmrisrole11risov], PRM[prmrissubrole11risov], PRM[prmrisimportance11risov], PRM[prmriseta11risov], prioFC11risov);
        if (IH[hprioin11risovris]) iPrioriteitNooitAfkappen[prioFC11risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin11risov] = RT[tprioin11risov] = IH[hprioin11risovris];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11risov] = IH[hpriouit11risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit11risovris])
    {
        IH[hpriouit11risovris] = (boolv)ris_uitmelding_selectief(prioFC11risov);
        if (IH[hpriouit11risovris] && iAantalInmeldingen[prioFC11risov] == 0) iPrioriteitNooitAfkappen[prioFC11risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit11risov] = RT[tpriouit11risov] = IH[hpriouit11risovris];

    /* Inmelding fc11 type Vrachtwagen */
    IH[hprioin11risvrw] = IH[hprioin11risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin11risvrwris])
    {
        IH[hprioin11risvrwris] = 
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11risvrw], SYSTEM_ITF1, PRM[prmrislaneid11risvrw_1], PRM[prmrisstationtype11risvrw], PRM[prmrisstart11risvrw], PRM[prmrisend11risvrw], PRM[prmrisrole11risvrw], PRM[prmrissubrole11risvrw], PRM[prmrisimportance11risvrw], PRM[prmriseta11risvrw], prioFC11risvrw);
        if (IH[hprioin11risvrwris]) iPrioriteitNooitAfkappen[prioFC11risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin11risvrw] = RT[tprioin11risvrw] = IH[hprioin11risvrwris];

    /* Uitmelding fc11 type Vrachtwagen */
    IH[hpriouit11risvrw] = IH[hpriouit11risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit11risvrwris])
    {
        IH[hpriouit11risvrwris] = (boolv)ris_uitmelding_selectief(prioFC11risvrw);
        if (IH[hpriouit11risvrwris] && iAantalInmeldingen[prioFC11risvrw] == 0) iPrioriteitNooitAfkappen[prioFC11risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit11risvrw] = RT[tpriouit11risvrw] = IH[hpriouit11risvrwris];

    /* Inmelding fc11 type Bus */
    IH[hprioin11risalg] = IH[hprioin11risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin11risalgris])
    {
        IH[hprioin11risalgris] = 
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11risalg], SYSTEM_ITF1, PRM[prmrislaneid11risalg_1], PRM[prmrisstationtype11risalg], PRM[prmrisstart11risalg], PRM[prmrisend11risalg], PRM[prmrisrole11risalg], PRM[prmrissubrole11risalg], PRM[prmrisimportance11risalg], PRM[prmriseta11risalg], prioFC11risalg);
        if (IH[hprioin11risalgris]) iPrioriteitNooitAfkappen[prioFC11risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin11risalg] = IH[hprioin11risalgris];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11risalg] = IH[hpriouit11risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit11risalgris])
    {
        IH[hpriouit11risalgris] = (boolv)ris_uitmelding_selectief(prioFC11risalg);
        if (IH[hpriouit11risalgris] && iAantalInmeldingen[prioFC11risalg] == 0) iPrioriteitNooitAfkappen[prioFC11risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit11risalg] = IH[hpriouit11risalgris];

    /* Inmelding fc11 type Bus */
    IH[hprioin11bus] = IH[hprioin11busvecio] = FALSE;
    if (SCH[schprioin11busvecioSD])
    {
        IH[hprioin11busvecio] = RT[tprioin11busvecio] = !T[tprioin11busvecio] &&  SD[d];
    }
    IH[hprioin11bus] = IH[hprioin11busvecio];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11bus] = IH[hpriouit11buskar] = FALSE;
    if (SCH[schpriouit11buskar])
    {
        IH[hpriouit11buskar] = !T[tpriouit11bus] && DSIMeldingPRIO_V2(fc11, prioFC11bus, 0, PRM[prmvtgcat11bus], TRUE, PRM[prmkarsg11],TRUE, CIF_DSUIT, DSIMeldingPRIO_LijnNummer_V1(prmallelijnen11bus, 10));
    }
    IH[hpriouit11bus] = RT[tpriouit11bus] = IH[hpriouit11buskar];

    /* Inmelding fc22 type Fiets */
    fietsprio_update(fc22, NG, NG, cftscyc22fietsfiets,SH[hprioin22fietsfiets], ML);
    IH[hprioin22fiets] = IH[hprioin22fietsfiets] = FALSE;
    if (SCH[schprioin22fietsfiets])
    {
        IH[hprioin22fietsfiets] = !C[cvc22fiets] && fietsprio_inmelding(fc22, NG, NG, cftscyc22fietsfiets, prmftsblok22fietsfiets, prmftsmaxpercyc22fietsfiets, NG, prmftsminwt22fietsfiets, ML, NG, NG);
    }
    IH[hprioin22fiets] = IH[hprioin22fietsfiets];

    /* Uitmelding fc22 type Fiets */
    IH[hpriouit22fiets] = IH[hpriouit22fietsfiets] = FALSE;
    if (SCH[schpriouit22fietsfiets])
    {
        IH[hpriouit22fietsfiets] = C[cvc22fiets] && G[fc22] && (T[tgb22fiets] && (T_timer[tgb22fiets] > 1));
    }
    IH[hpriouit22fiets] = IH[hpriouit22fietsfiets];

    /* Inmelding fc28 type Fiets */
    fietsprio_update(fc28, NG, NG, cftscyc28fietsfiets,SH[hprioin28fietsfiets], ML);
    IH[hprioin28fiets] = IH[hprioin28fietsfiets] = FALSE;
    if (SCH[schprioin28fietsfiets])
    {
        IH[hprioin28fietsfiets] = !C[cvc28fiets] && fietsprio_inmelding(fc28, NG, NG, cftscyc28fietsfiets, prmftsblok28fietsfiets, prmftsmaxpercyc28fietsfiets, NG, prmftsminwt28fietsfiets, ML, NG, NG);
    }
    IH[hprioin28fiets] = IH[hprioin28fietsfiets];

    /* Uitmelding fc28 type Fiets */
    IH[hpriouit28fiets] = IH[hpriouit28fietsfiets] = FALSE;
    if (SCH[schpriouit28fietsfiets])
    {
        IH[hpriouit28fietsfiets] = C[cvc28fiets] && G[fc28] && (T[tgb28fiets] && (T_timer[tgb28fiets] > 1));
    }
    IH[hpriouit28fiets] = IH[hpriouit28fietsfiets];

    /* Inmelding fc61 type Bus */
    IH[hprioin61karbus] = IH[hprioin61karbuskar] = FALSE;
    if (SCH[schprioin61karbuskar])
    {
        IH[hprioin61karbuskar] = RT[tprioin61karbuskar] = !T[tprioin61karbus] && !T[tprioin61karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat61karbus], TRUE, PRM[prmkarsg61],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin61karbus] = RT[tprioin61karbus] = IH[hprioin61karbuskar];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61karbus] = IH[hpriouit61karbuskar] = FALSE;
    if (SCH[schpriouit61karbuskar])
    {
        IH[hpriouit61karbuskar] = RT[tpriouit61karbuskar] = !T[tpriouit61karbus] && !T[tpriouit61karbuskar] && DSIMeldingPRIO_V2(fc61, prioFC61karbus, 0, PRM[prmvtgcat61karbus], TRUE, PRM[prmkarsg61],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit61karbus] = RT[tpriouit61karbus] = IH[hpriouit61karbuskar];

    /* Inmelding fc61 type Bus */
    IH[hprioin61risov] = IH[hprioin61risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin61risovris])
    {
        IH[hprioin61risovris] = 
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61risov], SYSTEM_ITF1, PRM[prmrislaneid61risov_1], PRM[prmrisstationtype61risov], PRM[prmrisstart61risov], PRM[prmrisend61risov], PRM[prmrisrole61risov], PRM[prmrissubrole61risov], PRM[prmrisimportance61risov], PRM[prmriseta61risov], prioFC61risov);
        if (IH[hprioin61risovris]) iPrioriteitNooitAfkappen[prioFC61risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin61risov] = RT[tprioin61risov] = IH[hprioin61risovris];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61risov] = IH[hpriouit61risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit61risovris])
    {
        IH[hpriouit61risovris] = (boolv)ris_uitmelding_selectief(prioFC61risov);
        if (IH[hpriouit61risovris] && iAantalInmeldingen[prioFC61risov] == 0) iPrioriteitNooitAfkappen[prioFC61risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit61risov] = RT[tpriouit61risov] = IH[hpriouit61risovris];

    /* Inmelding fc61 type Vrachtwagen */
    IH[hprioin61risvrw] = IH[hprioin61risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin61risvrwris])
    {
        IH[hprioin61risvrwris] = 
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61risvrw], SYSTEM_ITF1, PRM[prmrislaneid61risvrw_1], PRM[prmrisstationtype61risvrw], PRM[prmrisstart61risvrw], PRM[prmrisend61risvrw], PRM[prmrisrole61risvrw], PRM[prmrissubrole61risvrw], PRM[prmrisimportance61risvrw], PRM[prmriseta61risvrw], prioFC61risvrw);
        if (IH[hprioin61risvrwris]) iPrioriteitNooitAfkappen[prioFC61risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin61risvrw] = RT[tprioin61risvrw] = IH[hprioin61risvrwris];

    /* Uitmelding fc61 type Vrachtwagen */
    IH[hpriouit61risvrw] = IH[hpriouit61risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit61risvrwris])
    {
        IH[hpriouit61risvrwris] = (boolv)ris_uitmelding_selectief(prioFC61risvrw);
        if (IH[hpriouit61risvrwris] && iAantalInmeldingen[prioFC61risvrw] == 0) iPrioriteitNooitAfkappen[prioFC61risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit61risvrw] = RT[tpriouit61risvrw] = IH[hpriouit61risvrwris];

    /* Inmelding fc61 type Bus */
    IH[hprioin61risalg] = IH[hprioin61risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin61risalgris])
    {
        IH[hprioin61risalgris] = 
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61risalg], SYSTEM_ITF1, PRM[prmrislaneid61risalg_1], PRM[prmrisstationtype61risalg], PRM[prmrisstart61risalg], PRM[prmrisend61risalg], PRM[prmrisrole61risalg], PRM[prmrissubrole61risalg], PRM[prmrisimportance61risalg], PRM[prmriseta61risalg], prioFC61risalg);
        if (IH[hprioin61risalgris]) iPrioriteitNooitAfkappen[prioFC61risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin61risalg] = IH[hprioin61risalgris];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61risalg] = IH[hpriouit61risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit61risalgris])
    {
        IH[hpriouit61risalgris] = (boolv)ris_uitmelding_selectief(prioFC61risalg);
        if (IH[hpriouit61risalgris] && iAantalInmeldingen[prioFC61risalg] == 0) iPrioriteitNooitAfkappen[prioFC61risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit61risalg] = IH[hpriouit61risalgris];

    /* Inmelding fc62 type Bus */
    IH[hprioin62karbus] = IH[hprioin62karbuskar] = FALSE;
    if (SCH[schprioin62karbuskar])
    {
        IH[hprioin62karbuskar] = RT[tprioin62karbuskar] = !T[tprioin62karbus] && !T[tprioin62karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat62karbus], TRUE, PRM[prmkarsg62],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin62karbus] = RT[tprioin62karbus] = IH[hprioin62karbuskar];

    /* Uitmelding fc62 type Bus */
    IH[hpriouit62karbus] = IH[hpriouit62karbuskar] = FALSE;
    if (SCH[schpriouit62karbuskar])
    {
        IH[hpriouit62karbuskar] = RT[tpriouit62karbuskar] = !T[tpriouit62karbus] && !T[tpriouit62karbuskar] && DSIMeldingPRIO_V2(fc62, prioFC62karbus, 0, PRM[prmvtgcat62karbus], TRUE, PRM[prmkarsg62],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit62karbus] = RT[tpriouit62karbus] = IH[hpriouit62karbuskar];

    /* Inmelding fc62 type Bus */
    IH[hprioin62risov] = IH[hprioin62risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin62risovris])
    {
        IH[hprioin62risovris] = 
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risov], SYSTEM_ITF1, PRM[prmrislaneid62risov_1], PRM[prmrisstationtype62risov], PRM[prmrisstart62risov], PRM[prmrisend62risov], PRM[prmrisrole62risov], PRM[prmrissubrole62risov], PRM[prmrisimportance62risov], PRM[prmriseta62risov], prioFC62risov) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risov], SYSTEM_ITF1, PRM[prmrislaneid62risov_2], PRM[prmrisstationtype62risov], PRM[prmrisstart62risov], PRM[prmrisend62risov], PRM[prmrisrole62risov], PRM[prmrissubrole62risov], PRM[prmrisimportance62risov], PRM[prmriseta62risov], prioFC62risov);
        if (IH[hprioin62risovris]) iPrioriteitNooitAfkappen[prioFC62risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin62risov] = RT[tprioin62risov] = IH[hprioin62risovris];

    /* Uitmelding fc62 type Bus */
    IH[hpriouit62risov] = IH[hpriouit62risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit62risovris])
    {
        IH[hpriouit62risovris] = (boolv)ris_uitmelding_selectief(prioFC62risov);
        if (IH[hpriouit62risovris] && iAantalInmeldingen[prioFC62risov] == 0) iPrioriteitNooitAfkappen[prioFC62risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit62risov] = RT[tpriouit62risov] = IH[hpriouit62risovris];

    /* Inmelding fc62 type Vrachtwagen */
    IH[hprioin62risvrw] = IH[hprioin62risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin62risvrwris])
    {
        IH[hprioin62risvrwris] = 
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risvrw], SYSTEM_ITF1, PRM[prmrislaneid62risvrw_1], PRM[prmrisstationtype62risvrw], PRM[prmrisstart62risvrw], PRM[prmrisend62risvrw], PRM[prmrisrole62risvrw], PRM[prmrissubrole62risvrw], PRM[prmrisimportance62risvrw], PRM[prmriseta62risvrw], prioFC62risvrw) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risvrw], SYSTEM_ITF1, PRM[prmrislaneid62risvrw_2], PRM[prmrisstationtype62risvrw], PRM[prmrisstart62risvrw], PRM[prmrisend62risvrw], PRM[prmrisrole62risvrw], PRM[prmrissubrole62risvrw], PRM[prmrisimportance62risvrw], PRM[prmriseta62risvrw], prioFC62risvrw);
        if (IH[hprioin62risvrwris]) iPrioriteitNooitAfkappen[prioFC62risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin62risvrw] = RT[tprioin62risvrw] = IH[hprioin62risvrwris];

    /* Uitmelding fc62 type Vrachtwagen */
    IH[hpriouit62risvrw] = IH[hpriouit62risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit62risvrwris])
    {
        IH[hpriouit62risvrwris] = (boolv)ris_uitmelding_selectief(prioFC62risvrw);
        if (IH[hpriouit62risvrwris] && iAantalInmeldingen[prioFC62risvrw] == 0) iPrioriteitNooitAfkappen[prioFC62risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit62risvrw] = RT[tpriouit62risvrw] = IH[hpriouit62risvrwris];

    /* Inmelding fc62 type Bus */
    IH[hprioin62risalg] = IH[hprioin62risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin62risalgris])
    {
        IH[hprioin62risalgris] = 
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risalg], SYSTEM_ITF1, PRM[prmrislaneid62risalg_1], PRM[prmrisstationtype62risalg], PRM[prmrisstart62risalg], PRM[prmrisend62risalg], PRM[prmrisrole62risalg], PRM[prmrissubrole62risalg], PRM[prmrisimportance62risalg], PRM[prmriseta62risalg], prioFC62risalg) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risalg], SYSTEM_ITF1, PRM[prmrislaneid62risalg_2], PRM[prmrisstationtype62risalg], PRM[prmrisstart62risalg], PRM[prmrisend62risalg], PRM[prmrisrole62risalg], PRM[prmrissubrole62risalg], PRM[prmrisimportance62risalg], PRM[prmriseta62risalg], prioFC62risalg);
        if (IH[hprioin62risalgris]) iPrioriteitNooitAfkappen[prioFC62risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin62risalg] = IH[hprioin62risalgris];

    /* Uitmelding fc62 type Bus */
    IH[hpriouit62risalg] = IH[hpriouit62risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit62risalgris])
    {
        IH[hpriouit62risalgris] = (boolv)ris_uitmelding_selectief(prioFC62risalg);
        if (IH[hpriouit62risalgris] && iAantalInmeldingen[prioFC62risalg] == 0) iPrioriteitNooitAfkappen[prioFC62risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit62risalg] = IH[hpriouit62risalgris];

    /* Inmelding fc67 type Bus */
    IH[hprioin67karbus] = IH[hprioin67karbuskar] = FALSE;
    if (SCH[schprioin67karbuskar])
    {
        IH[hprioin67karbuskar] = RT[tprioin67karbuskar] = !T[tprioin67karbus] && !T[tprioin67karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat67karbus], TRUE, PRM[prmkarsg67],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin67karbus] = RT[tprioin67karbus] = IH[hprioin67karbuskar];

    /* Uitmelding fc67 type Bus */
    IH[hpriouit67karbus] = IH[hpriouit67karbuskar] = FALSE;
    if (SCH[schpriouit67karbuskar])
    {
        IH[hpriouit67karbuskar] = RT[tpriouit67karbuskar] = !T[tpriouit67karbus] && !T[tpriouit67karbuskar] && DSIMeldingPRIO_V2(fc67, prioFC67karbus, 0, PRM[prmvtgcat67karbus], TRUE, PRM[prmkarsg67],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit67karbus] = RT[tpriouit67karbus] = IH[hpriouit67karbuskar];

    /* Inmelding fc67 type Bus */
    IH[hprioin67risov] = IH[hprioin67risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin67risovris])
    {
        IH[hprioin67risovris] = 
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67risov], SYSTEM_ITF1, PRM[prmrislaneid67risov_1], PRM[prmrisstationtype67risov], PRM[prmrisstart67risov], PRM[prmrisend67risov], PRM[prmrisrole67risov], PRM[prmrissubrole67risov], PRM[prmrisimportance67risov], PRM[prmriseta67risov], prioFC67risov);
        if (IH[hprioin67risovris]) iPrioriteitNooitAfkappen[prioFC67risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin67risov] = RT[tprioin67risov] = IH[hprioin67risovris];

    /* Uitmelding fc67 type Bus */
    IH[hpriouit67risov] = IH[hpriouit67risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit67risovris])
    {
        IH[hpriouit67risovris] = (boolv)ris_uitmelding_selectief(prioFC67risov);
        if (IH[hpriouit67risovris] && iAantalInmeldingen[prioFC67risov] == 0) iPrioriteitNooitAfkappen[prioFC67risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit67risov] = RT[tpriouit67risov] = IH[hpriouit67risovris];

    /* Inmelding fc67 type Vrachtwagen */
    IH[hprioin67risvrw] = IH[hprioin67risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin67risvrwris])
    {
        IH[hprioin67risvrwris] = 
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67risvrw], SYSTEM_ITF1, PRM[prmrislaneid67risvrw_1], PRM[prmrisstationtype67risvrw], PRM[prmrisstart67risvrw], PRM[prmrisend67risvrw], PRM[prmrisrole67risvrw], PRM[prmrissubrole67risvrw], PRM[prmrisimportance67risvrw], PRM[prmriseta67risvrw], prioFC67risvrw);
        if (IH[hprioin67risvrwris]) iPrioriteitNooitAfkappen[prioFC67risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin67risvrw] = RT[tprioin67risvrw] = IH[hprioin67risvrwris];

    /* Uitmelding fc67 type Vrachtwagen */
    IH[hpriouit67risvrw] = IH[hpriouit67risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit67risvrwris])
    {
        IH[hpriouit67risvrwris] = (boolv)ris_uitmelding_selectief(prioFC67risvrw);
        if (IH[hpriouit67risvrwris] && iAantalInmeldingen[prioFC67risvrw] == 0) iPrioriteitNooitAfkappen[prioFC67risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit67risvrw] = RT[tpriouit67risvrw] = IH[hpriouit67risvrwris];

    /* Inmelding fc67 type Bus */
    IH[hprioin67risalg] = IH[hprioin67risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin67risalgris])
    {
        IH[hprioin67risalgris] = 
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67risalg], SYSTEM_ITF1, PRM[prmrislaneid67risalg_1], PRM[prmrisstationtype67risalg], PRM[prmrisstart67risalg], PRM[prmrisend67risalg], PRM[prmrisrole67risalg], PRM[prmrissubrole67risalg], PRM[prmrisimportance67risalg], PRM[prmriseta67risalg], prioFC67risalg);
        if (IH[hprioin67risalgris]) iPrioriteitNooitAfkappen[prioFC67risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin67risalg] = IH[hprioin67risalgris];

    /* Uitmelding fc67 type Bus */
    IH[hpriouit67risalg] = IH[hpriouit67risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit67risalgris])
    {
        IH[hpriouit67risalgris] = (boolv)ris_uitmelding_selectief(prioFC67risalg);
        if (IH[hpriouit67risalgris] && iAantalInmeldingen[prioFC67risalg] == 0) iPrioriteitNooitAfkappen[prioFC67risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit67risalg] = IH[hpriouit67risalgris];

    /* Inmelding fc68 type Bus */
    IH[hprioin68karbus] = IH[hprioin68karbuskar] = FALSE;
    if (SCH[schprioin68karbuskar])
    {
        IH[hprioin68karbuskar] = RT[tprioin68karbuskar] = !T[tprioin68karbus] && !T[tprioin68karbuskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat68karbus], TRUE, PRM[prmkarsg68],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin68karbus] = RT[tprioin68karbus] = IH[hprioin68karbuskar];

    /* Uitmelding fc68 type Bus */
    IH[hpriouit68karbus] = IH[hpriouit68karbuskar] = FALSE;
    if (SCH[schpriouit68karbuskar])
    {
        IH[hpriouit68karbuskar] = RT[tpriouit68karbuskar] = !T[tpriouit68karbus] && !T[tpriouit68karbuskar] && DSIMeldingPRIO_V2(fc68, prioFC68karbus, 0, PRM[prmvtgcat68karbus], TRUE, PRM[prmkarsg68],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit68karbus] = RT[tpriouit68karbus] = IH[hpriouit68karbuskar];

    /* Inmelding fc68 type Bus */
    IH[hprioin68risov] = IH[hprioin68risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin68risovris])
    {
        IH[hprioin68risovris] = 
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risov], SYSTEM_ITF1, PRM[prmrislaneid68risov_1], PRM[prmrisstationtype68risov], PRM[prmrisstart68risov], PRM[prmrisend68risov], PRM[prmrisrole68risov], PRM[prmrissubrole68risov], PRM[prmrisimportance68risov], PRM[prmriseta68risov], prioFC68risov) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risov], SYSTEM_ITF1, PRM[prmrislaneid68risov_2], PRM[prmrisstationtype68risov], PRM[prmrisstart68risov], PRM[prmrisend68risov], PRM[prmrisrole68risov], PRM[prmrissubrole68risov], PRM[prmrisimportance68risov], PRM[prmriseta68risov], prioFC68risov);
        if (IH[hprioin68risovris]) iPrioriteitNooitAfkappen[prioFC68risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin68risov] = RT[tprioin68risov] = IH[hprioin68risovris];

    /* Uitmelding fc68 type Bus */
    IH[hpriouit68risov] = IH[hpriouit68risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit68risovris])
    {
        IH[hpriouit68risovris] = (boolv)ris_uitmelding_selectief(prioFC68risov);
        if (IH[hpriouit68risovris] && iAantalInmeldingen[prioFC68risov] == 0) iPrioriteitNooitAfkappen[prioFC68risov] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit68risov] = RT[tpriouit68risov] = IH[hpriouit68risovris];

    /* Inmelding fc68 type Vrachtwagen */
    IH[hprioin68risvrw] = IH[hprioin68risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin68risvrwris])
    {
        IH[hprioin68risvrwris] = 
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risvrw], SYSTEM_ITF1, PRM[prmrislaneid68risvrw_1], PRM[prmrisstationtype68risvrw], PRM[prmrisstart68risvrw], PRM[prmrisend68risvrw], PRM[prmrisrole68risvrw], PRM[prmrissubrole68risvrw], PRM[prmrisimportance68risvrw], PRM[prmriseta68risvrw], prioFC68risvrw) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risvrw], SYSTEM_ITF1, PRM[prmrislaneid68risvrw_2], PRM[prmrisstationtype68risvrw], PRM[prmrisstart68risvrw], PRM[prmrisend68risvrw], PRM[prmrisrole68risvrw], PRM[prmrissubrole68risvrw], PRM[prmrisimportance68risvrw], PRM[prmriseta68risvrw], prioFC68risvrw);
        if (IH[hprioin68risvrwris]) iPrioriteitNooitAfkappen[prioFC68risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin68risvrw] = RT[tprioin68risvrw] = IH[hprioin68risvrwris];

    /* Uitmelding fc68 type Vrachtwagen */
    IH[hpriouit68risvrw] = IH[hpriouit68risvrwris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit68risvrwris])
    {
        IH[hpriouit68risvrwris] = (boolv)ris_uitmelding_selectief(prioFC68risvrw);
        if (IH[hpriouit68risvrwris] && iAantalInmeldingen[prioFC68risvrw] == 0) iPrioriteitNooitAfkappen[prioFC68risvrw] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit68risvrw] = RT[tpriouit68risvrw] = IH[hpriouit68risvrwris];

    /* Inmelding fc68 type Bus */
    IH[hprioin68risalg] = IH[hprioin68risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin68risalgris])
    {
        IH[hprioin68risalgris] = 
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risalg], SYSTEM_ITF1, PRM[prmrislaneid68risalg_1], PRM[prmrisstationtype68risalg], PRM[prmrisstart68risalg], PRM[prmrisend68risalg], PRM[prmrisrole68risalg], PRM[prmrissubrole68risalg], PRM[prmrisimportance68risalg], PRM[prmriseta68risalg], prioFC68risalg) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risalg], SYSTEM_ITF1, PRM[prmrislaneid68risalg_2], PRM[prmrisstationtype68risalg], PRM[prmrisstart68risalg], PRM[prmrisend68risalg], PRM[prmrisrole68risalg], PRM[prmrissubrole68risalg], PRM[prmrisimportance68risalg], PRM[prmriseta68risalg], prioFC68risalg);
        if (IH[hprioin68risalgris]) iPrioriteitNooitAfkappen[prioFC68risalg] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin68risalg] = IH[hprioin68risalgris];

    /* Uitmelding fc68 type Bus */
    IH[hpriouit68risalg] = IH[hpriouit68risalgris] = FALSE;
#ifndef NO_RIS
    if (SCH[schpriouit68risalgris])
    {
        IH[hpriouit68risalgris] = (boolv)ris_uitmelding_selectief(prioFC68risalg);
        if (IH[hpriouit68risalgris] && iAantalInmeldingen[prioFC68risalg] == 0) iPrioriteitNooitAfkappen[prioFC68risalg] = FALSE;
    }
#endif /* NO_RIS */
    IH[hpriouit68risalg] = IH[hpriouit68risalgris];

    #if !defined AUTOMAAT && !defined AUTOMAAT_TEST && !defined NO_RIS && !defined VISSIM && !defined SUMO
    if (display) {
        /* RIS_PRIOREQUEST_AP */
        for (i = 0; i < 5; ++i) {
            xyprintf(32, i+2, "                                                ");
        }
        xyprintf(32, 0, "RIS_PRIOREQUEST_AP                              ");
        xyprintf(32, 1, "sg  id--------------- seq.Nr-req.Type--routeName");
        for (i = 0; i < (RIS_PRIOREQUEST_AP_NUMBER <= 5 ? RIS_PRIOREQUEST_AP_NUMBER : 5); ++i) {
            xyprintf(32, i+2, "%s", RIS_PRIOREQUEST_AP[i].signalGroup);
            xyprintf(36, i+2, "%s", RIS_PRIOREQUEST_AP[i].id);
            xyprintf(55, i+2, "%d", RIS_PRIOREQUEST_AP[i].sequenceNumber);
            xyprintf(62, i+2, "%d", RIS_PRIOREQUEST_AP[i].requestType);
            xyprintf(72, i+2, "%s", RIS_PRIOREQUEST_AP[i].routeName);
        }

        /* RIS_PRIOREQUEST_EX_AP */
        for (i = 0; i < 5; i++) {
            xyprintf(32, i+10, "                                                ");
        }
        xyprintf(32, 8, "RIS_PRIOREQUEST_EX_AP                           ");
        xyprintf(32, 9, "    id--------------- seq.Nr-prioState-prCtrlState");
        for (i = 0; i < (RIS_PRIOREQUEST_EX_AP_NUMBER <= 5 ? RIS_PRIOREQUEST_EX_AP_NUMBER : 5); ++i) {
            xyprintf(36, i+10, "%s", RIS_PRIOREQUEST_EX_AP[i].id);
            xyprintf(55, i+10, "%d", RIS_PRIOREQUEST_EX_AP[i].sequenceNumber);
            xyprintf(62, i+10, "%d", RIS_PRIOREQUEST_EX_AP[i].prioState);
            xyprintf(72, i+10, "%d", RIS_PRIOREQUEST_EX_AP[i].prioControlState);
        }
    }

    #endif /* #ifndef AUTOMAAT */


    /* Inmelding HD fc02 */
    IH[hhdin02kar] = RT[thdin02kar] = !T[thdin02kar] && SCH[schhdin02kar] && (DSIMelding_HD_V1(PRM[prmkarsghd02], CIF_DSIN, SCH[schchecksirene02]));
#ifndef NO_RIS
    IH[hhdin02ris] = SCH[schhdin02ris] && (
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02hd], SYSTEM_ITF1, PRM[prmrislaneid02hd_1], PRM[prmrisstationtype02hd], PRM[prmrisstart02hd], PRM[prmrisend02hd], PRM[prmrisrole02hd], PRM[prmrissubrole02hd], PRM[prmrisimportance02hd], PRM[prmriseta02hd], hdFC02) ||
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02hd], SYSTEM_ITF1, PRM[prmrislaneid02hd_2], PRM[prmrisstationtype02hd], PRM[prmrisstart02hd], PRM[prmrisend02hd], PRM[prmrisrole02hd], PRM[prmrissubrole02hd], PRM[prmrisimportance02hd], PRM[prmriseta02hd], hdFC02));
#endif /* NO_RIS */
    IH[hhdin02] = IH[hhdin02kar] || IH[hhdin02ris];

    /* Inmelding HD fc03 */
    IH[hhdin03kar] = RT[thdin03kar] = !T[thdin03kar] && SCH[schhdin03kar] && (DSIMelding_HD_V1(PRM[prmkarsghd03], CIF_DSIN, SCH[schchecksirene03]));
#ifndef NO_RIS
    IH[hhdin03ris] = SCH[schhdin03ris] && (
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03hd], SYSTEM_ITF1, PRM[prmrislaneid03hd_1], PRM[prmrisstationtype03hd], PRM[prmrisstart03hd], PRM[prmrisend03hd], PRM[prmrisrole03hd], PRM[prmrissubrole03hd], PRM[prmrisimportance03hd], PRM[prmriseta03hd], hdFC03));
#endif /* NO_RIS */
    IH[hhdin03] = IH[hhdin03kar] || IH[hhdin03ris];

    /* Inmelding HD fc05 */
    IH[hhdin05kar] = RT[thdin05kar] = !T[thdin05kar] && SCH[schhdin05kar] && (DSIMelding_HD_V1(PRM[prmkarsghd05], CIF_DSIN, SCH[schchecksirene05]));
#ifndef NO_RIS
    IH[hhdin05ris] = SCH[schhdin05ris] && (
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05hd], SYSTEM_ITF1, PRM[prmrislaneid05hd_1], PRM[prmrisstationtype05hd], PRM[prmrisstart05hd], PRM[prmrisend05hd], PRM[prmrisrole05hd], PRM[prmrissubrole05hd], PRM[prmrisimportance05hd], PRM[prmriseta05hd], hdFC05));
#endif /* NO_RIS */
    IH[hhdin05] = IH[hhdin05kar] || IH[hhdin05ris];

    /* Inmelding HD fc08 */
    IH[hhdin08kar] = RT[thdin08kar] = !T[thdin08kar] && SCH[schhdin08kar] && (DSIMelding_HD_V1(PRM[prmkarsghd08], CIF_DSIN, SCH[schchecksirene08]));
#ifndef NO_RIS
    IH[hhdin08ris] = SCH[schhdin08ris] && (
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08hd], SYSTEM_ITF1, PRM[prmrislaneid08hd_1], PRM[prmrisstationtype08hd], PRM[prmrisstart08hd], PRM[prmrisend08hd], PRM[prmrisrole08hd], PRM[prmrissubrole08hd], PRM[prmrisimportance08hd], PRM[prmriseta08hd], hdFC08) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08hd], SYSTEM_ITF1, PRM[prmrislaneid08hd_2], PRM[prmrisstationtype08hd], PRM[prmrisstart08hd], PRM[prmrisend08hd], PRM[prmrisrole08hd], PRM[prmrissubrole08hd], PRM[prmrisimportance08hd], PRM[prmriseta08hd], hdFC08));
#endif /* NO_RIS */
    IH[hhdin08] = IH[hhdin08kar] || IH[hhdin08ris];

    /* Inmelding HD fc09 */
    IH[hhdin09kar] = RT[thdin09kar] = !T[thdin09kar] && SCH[schhdin09kar] && (DSIMelding_HD_V1(PRM[prmkarsghd09], CIF_DSIN, SCH[schchecksirene09]));
#ifndef NO_RIS
    IH[hhdin09ris] = SCH[schhdin09ris] && (
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09hd], SYSTEM_ITF1, PRM[prmrislaneid09hd_1], PRM[prmrisstationtype09hd], PRM[prmrisstart09hd], PRM[prmrisend09hd], PRM[prmrisrole09hd], PRM[prmrissubrole09hd], PRM[prmrisimportance09hd], PRM[prmriseta09hd], hdFC09));
#endif /* NO_RIS */
    IH[hhdin09] = IH[hhdin09kar] || IH[hhdin09ris];

    /* Inmelding HD fc11 */
    IH[hhdin11kar] = RT[thdin11kar] = !T[thdin11kar] && SCH[schhdin11kar] && (DSIMelding_HD_V1(PRM[prmkarsghd11], CIF_DSIN, SCH[schchecksirene11]));
#ifndef NO_RIS
    IH[hhdin11ris] = SCH[schhdin11ris] && (
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11hd], SYSTEM_ITF1, PRM[prmrislaneid11hd_1], PRM[prmrisstationtype11hd], PRM[prmrisstart11hd], PRM[prmrisend11hd], PRM[prmrisrole11hd], PRM[prmrissubrole11hd], PRM[prmrisimportance11hd], PRM[prmriseta11hd], hdFC11));
#endif /* NO_RIS */
    IH[hhdin11] = IH[hhdin11kar] || IH[hhdin11ris];

    /* Inmelding HD fc61 */
    IH[hhdin61kar] = RT[thdin61kar] = !T[thdin61kar] && SCH[schhdin61kar] && (DSIMelding_HD_V1(PRM[prmkarsghd61], CIF_DSIN, SCH[schchecksirene61]));
#ifndef NO_RIS
    IH[hhdin61ris] = SCH[schhdin61ris] && (
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61hd], SYSTEM_ITF1, PRM[prmrislaneid61hd_1], PRM[prmrisstationtype61hd], PRM[prmrisstart61hd], PRM[prmrisend61hd], PRM[prmrisrole61hd], PRM[prmrissubrole61hd], PRM[prmrisimportance61hd], PRM[prmriseta61hd], hdFC61));
#endif /* NO_RIS */
    IH[hhdin61] = IH[hhdin61kar] || IH[hhdin61ris];

    /* Inmelding HD fc62 */
    IH[hhdin62kar] = RT[thdin62kar] = !T[thdin62kar] && SCH[schhdin62kar] && (DSIMelding_HD_V1(PRM[prmkarsghd62], CIF_DSIN, SCH[schchecksirene62]));
#ifndef NO_RIS
    IH[hhdin62ris] = SCH[schhdin62ris] && (
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62hd], SYSTEM_ITF1, PRM[prmrislaneid62hd_1], PRM[prmrisstationtype62hd], PRM[prmrisstart62hd], PRM[prmrisend62hd], PRM[prmrisrole62hd], PRM[prmrissubrole62hd], PRM[prmrisimportance62hd], PRM[prmriseta62hd], hdFC62) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62hd], SYSTEM_ITF1, PRM[prmrislaneid62hd_2], PRM[prmrisstationtype62hd], PRM[prmrisstart62hd], PRM[prmrisend62hd], PRM[prmrisrole62hd], PRM[prmrissubrole62hd], PRM[prmrisimportance62hd], PRM[prmriseta62hd], hdFC62));
#endif /* NO_RIS */
    IH[hhdin62] = IH[hhdin62kar] || IH[hhdin62ris];

    /* Inmelding HD fc67 */
    IH[hhdin67kar] = RT[thdin67kar] = !T[thdin67kar] && SCH[schhdin67kar] && (DSIMelding_HD_V1(PRM[prmkarsghd67], CIF_DSIN, SCH[schchecksirene67]));
#ifndef NO_RIS
    IH[hhdin67ris] = SCH[schhdin67ris] && (
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67hd], SYSTEM_ITF1, PRM[prmrislaneid67hd_1], PRM[prmrisstationtype67hd], PRM[prmrisstart67hd], PRM[prmrisend67hd], PRM[prmrisrole67hd], PRM[prmrissubrole67hd], PRM[prmrisimportance67hd], PRM[prmriseta67hd], hdFC67));
#endif /* NO_RIS */
    IH[hhdin67] = IH[hhdin67kar] || IH[hhdin67ris];

    /* Inmelding HD fc68 */
    IH[hhdin68kar] = RT[thdin68kar] = !T[thdin68kar] && SCH[schhdin68kar] && (DSIMelding_HD_V1(PRM[prmkarsghd68], CIF_DSIN, SCH[schchecksirene68]));
#ifndef NO_RIS
    IH[hhdin68ris] = SCH[schhdin68ris] && (
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68hd], SYSTEM_ITF1, PRM[prmrislaneid68hd_1], PRM[prmrisstationtype68hd], PRM[prmrisstart68hd], PRM[prmrisend68hd], PRM[prmrisrole68hd], PRM[prmrissubrole68hd], PRM[prmrisimportance68hd], PRM[prmriseta68hd], hdFC68) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68hd], SYSTEM_ITF1, PRM[prmrislaneid68hd_2], PRM[prmrisstationtype68hd], PRM[prmrisstart68hd], PRM[prmrisend68hd], PRM[prmrisrole68hd], PRM[prmrissubrole68hd], PRM[prmrisimportance68hd], PRM[prmriseta68hd], hdFC68));
#endif /* NO_RIS */
    IH[hhdin68] = IH[hhdin68kar] || IH[hhdin68ris];

    /* Uitmelding HD fc02 */
    IH[hhduit02kar] = RT[thduit02kar] = !T[thduit02kar] && SCH[schhduit02kar] && (DSIMelding_HD_V1(PRM[prmkarsghd02], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit02ris] = SCH[schhduit02ris] && (ris_uitmelding_selectief(hdFC02));
#endif /* NO_RIS */
    IH[hhduit02] = IH[hhduit02kar] || IH[hhduit02ris];

    /* Uitmelding HD fc03 */
    IH[hhduit03kar] = RT[thduit03kar] = !T[thduit03kar] && SCH[schhduit03kar] && (DSIMelding_HD_V1(PRM[prmkarsghd03], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit03ris] = SCH[schhduit03ris] && (ris_uitmelding_selectief(hdFC03));
#endif /* NO_RIS */
    IH[hhduit03] = IH[hhduit03kar] || IH[hhduit03ris];

    /* Uitmelding HD fc05 */
    IH[hhduit05kar] = RT[thduit05kar] = !T[thduit05kar] && SCH[schhduit05kar] && (DSIMelding_HD_V1(PRM[prmkarsghd05], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit05ris] = SCH[schhduit05ris] && (ris_uitmelding_selectief(hdFC05));
#endif /* NO_RIS */
    IH[hhduit05] = IH[hhduit05kar] || IH[hhduit05ris];

    /* Uitmelding HD fc08 */
    IH[hhduit08kar] = RT[thduit08kar] = !T[thduit08kar] && SCH[schhduit08kar] && (DSIMelding_HD_V1(PRM[prmkarsghd08], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit08ris] = SCH[schhduit08ris] && (ris_uitmelding_selectief(hdFC08));
#endif /* NO_RIS */
    IH[hhduit08] = IH[hhduit08kar] || IH[hhduit08ris];

    /* Uitmelding HD fc09 */
    IH[hhduit09kar] = RT[thduit09kar] = !T[thduit09kar] && SCH[schhduit09kar] && (DSIMelding_HD_V1(PRM[prmkarsghd09], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit09ris] = SCH[schhduit09ris] && (ris_uitmelding_selectief(hdFC09));
#endif /* NO_RIS */
    IH[hhduit09] = IH[hhduit09kar] || IH[hhduit09ris];

    /* Uitmelding HD fc11 */
    IH[hhduit11kar] = RT[thduit11kar] = !T[thduit11kar] && SCH[schhduit11kar] && (DSIMelding_HD_V1(PRM[prmkarsghd11], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit11ris] = SCH[schhduit11ris] && (ris_uitmelding_selectief(hdFC11));
#endif /* NO_RIS */
    IH[hhduit11] = IH[hhduit11kar] || IH[hhduit11ris];

    /* Uitmelding HD fc61 */
    IH[hhduit61kar] = RT[thduit61kar] = !T[thduit61kar] && SCH[schhduit61kar] && (DSIMelding_HD_V1(PRM[prmkarsghd61], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit61ris] = SCH[schhduit61ris] && (ris_uitmelding_selectief(hdFC61));
#endif /* NO_RIS */
    IH[hhduit61] = IH[hhduit61kar] || IH[hhduit61ris];

    /* Uitmelding HD fc62 */
    IH[hhduit62kar] = RT[thduit62kar] = !T[thduit62kar] && SCH[schhduit62kar] && (DSIMelding_HD_V1(PRM[prmkarsghd62], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit62ris] = SCH[schhduit62ris] && (ris_uitmelding_selectief(hdFC62));
#endif /* NO_RIS */
    IH[hhduit62] = IH[hhduit62kar] || IH[hhduit62ris];

    /* Uitmelding HD fc67 */
    IH[hhduit67kar] = RT[thduit67kar] = !T[thduit67kar] && SCH[schhduit67kar] && (DSIMelding_HD_V1(PRM[prmkarsghd67], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit67ris] = SCH[schhduit67ris] && (ris_uitmelding_selectief(hdFC67));
#endif /* NO_RIS */
    IH[hhduit67] = IH[hhduit67kar] || IH[hhduit67ris];

    /* Uitmelding HD fc68 */
    IH[hhduit68kar] = RT[thduit68kar] = !T[thduit68kar] && SCH[schhduit68kar] && (DSIMelding_HD_V1(PRM[prmkarsghd68], CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit68ris] = SCH[schhduit68ris] && (ris_uitmelding_selectief(hdFC68));
#endif /* NO_RIS */
    IH[hhduit68] = IH[hhduit68kar] || IH[hhduit68ris];

    /* Bijhouden stiptheidsklassen ingemelde voertuigen */
    /* Bij inmelding: registeren stiptheidsklasse achterste voertuig */
    TrackStiptObvTSTP(hprioin02karbus, hpriouit02karbus, &iAantInm02karbus, iKARInSTP02karbus, hprio02karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin03karbus, hpriouit03karbus, &iAantInm03karbus, iKARInSTP03karbus, hprio03karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin05karbus, hpriouit05karbus, &iAantInm05karbus, iKARInSTP05karbus, hprio05karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin08karbus, hpriouit08karbus, &iAantInm08karbus, iKARInSTP08karbus, hprio08karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin09karbus, hpriouit09karbus, &iAantInm09karbus, iKARInSTP09karbus, hprio09karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin11karbus, hpriouit11karbus, &iAantInm11karbus, iKARInSTP11karbus, hprio11karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin61karbus, hpriouit61karbus, &iAantInm61karbus, iKARInSTP61karbus, hprio61karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin62karbus, hpriouit62karbus, &iAantInm62karbus, iKARInSTP62karbus, hprio62karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin67karbus, hpriouit67karbus, &iAantInm67karbus, iKARInSTP67karbus, hprio67karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin68karbus, hpriouit68karbus, &iAantInm68karbus, iKARInSTP68karbus, hprio68karbus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    MM[mstp02karbus] = (mulv) (iAantInm02karbus > 0 ? iKARInSTP02karbus[0] : 0);
    MM[mstp03karbus] = (mulv) (iAantInm03karbus > 0 ? iKARInSTP03karbus[0] : 0);
    MM[mstp05karbus] = (mulv) (iAantInm05karbus > 0 ? iKARInSTP05karbus[0] : 0);
    MM[mstp08karbus] = (mulv) (iAantInm08karbus > 0 ? iKARInSTP08karbus[0] : 0);
    MM[mstp09karbus] = (mulv) (iAantInm09karbus > 0 ? iKARInSTP09karbus[0] : 0);
    MM[mstp11karbus] = (mulv) (iAantInm11karbus > 0 ? iKARInSTP11karbus[0] : 0);
    MM[mstp61karbus] = (mulv) (iAantInm61karbus > 0 ? iKARInSTP61karbus[0] : 0);
    MM[mstp62karbus] = (mulv) (iAantInm62karbus > 0 ? iKARInSTP62karbus[0] : 0);
    MM[mstp67karbus] = (mulv) (iAantInm67karbus > 0 ? iKARInSTP67karbus[0] : 0);
    MM[mstp68karbus] = (mulv) (iAantInm68karbus > 0 ? iKARInSTP68karbus[0] : 0);

#ifndef NO_RIS
    /* Bijhouden granted verstrekt */
    Bepaal_Granted_Verstrekt();

    if (granted_verstrekt[fc03] == 2) granted_verstrekt[fc02] = 2;
    if (granted_verstrekt[fc02] == 2) granted_verstrekt[fc03] = 2;
    if (granted_verstrekt[fc09] == 2) granted_verstrekt[fc08] = 2;
    if (granted_verstrekt[fc08] == 2) granted_verstrekt[fc09] = 2;
#endif /* NO_RIS */

    /* herstarten FB_timer bij in- of uitmelding HD of einde ingreep (door groenbewaking) */
    RTFB &= ~PRIO_RTFB_BIT;
    if (IH[hhdin02]|| IH[hhduit02] || EH[hhd02] ||
        IH[hhdin03]|| IH[hhduit03] || EH[hhd03] ||
        IH[hhdin05]|| IH[hhduit05] || EH[hhd05] ||
        IH[hhdin08]|| IH[hhduit08] || EH[hhd08] ||
        IH[hhdin09]|| IH[hhduit09] || EH[hhd09] ||
        IH[hhdin11]|| IH[hhduit11] || EH[hhd11] ||
        IH[hhdin61]|| IH[hhduit61] || EH[hhd61] ||
        IH[hhdin62]|| IH[hhduit62] || EH[hhd62] ||
        IH[hhdin67]|| IH[hhduit67] || EH[hhd67] ||
        IH[hhdin68]|| IH[hhduit68] || EH[hhd68])
    {
        RTFB |= PRIO_RTFB_BIT;
    }

    /* Bijhouden melding en ondergedrag KAR */
    RT[tkarmelding] = CIF_DSIWIJZ != 0 && CIF_DSI[CIF_DSI_LUS] == 0;
    RT[tkarog] = T[tkarmelding] || !startkarog;
    if (!startkarog) startkarog = TRUE;
    /* Doorzetten HD inmeldingen */
    IH[hhdin03] |= IH[hhdin02]; IH[hhduit03] |= IH[hhduit02];
    IH[hhdin02] |= IH[hhdin03]; IH[hhduit02] |= IH[hhduit03];
    IH[hhdin09] |= IH[hhdin08]; IH[hhduit09] |= IH[hhduit08];
    IH[hhdin08] |= IH[hhdin09]; IH[hhduit08] |= IH[hhduit09];
#if defined CCOL_IS_SPECIAL && defined PRACTICE_TEST
    is_special_signals();
#endif
}

void OnderMaximumExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarOnderMaximum();

}
void AfkapGroenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarAfkapGroen();

}
void StartGroenMomentenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarStartGroenMomenten();

}
void PrioAfkappenExtra(void)
{
    int fc;

    if (SCH[schovpriople]) PrioHalfstarAfkappen();

#ifndef NO_TIMETOX
if (SCH[schconfidence15fix])
    {
        if (SCH[schgs2232] && (P[fc22] & BIT11)) { Z[fc32] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2232] && (P[fc32] & BIT11)) { Z[fc22] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2434] && (P[fc24] & BIT11)) { Z[fc34] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2434] && (P[fc34] & BIT11)) { Z[fc24] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2484] && (P[fc24] & BIT11)) { Z[fc84] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2484] && (P[fc84] & BIT11)) { Z[fc24] &= ~PRIO_Z_BIT; }
        if ((P[fc28] & BIT11)) { Z[fc38] &= ~PRIO_Z_BIT; }
        if ((P[fc38] & BIT11)) { Z[fc28] &= ~PRIO_Z_BIT; }
        if (SCH[schgs3384] && (P[fc33] & BIT11)) { Z[fc84] &= ~PRIO_Z_BIT; }
        if (SCH[schgs3384] && (P[fc84] & BIT11)) { Z[fc33] &= ~PRIO_Z_BIT; }
        if ((P[fc05] & BIT11)) { Z[fc22] &= ~PRIO_Z_BIT; }
        if ((P[fc05] & BIT11)) { Z[fc32] &= ~PRIO_Z_BIT; }
        if ((P[fc11] & BIT11)) { Z[fc26] &= ~PRIO_Z_BIT; }
        /* Correctie gelijkstart <> gelijkstart
         * Bij een gelijkstart die een fase deelt met een andere gelijsktart
         * kan de max-end tijd worden verhoogd op start-geel, daarom wordt
         * start geel uitgesteld.
         */
         if (SCH[schgs2232] && G[fc32] && R[fc21] && (P[fc21] & BIT11)) Z[fc32] &= ~PRIO_Z_BIT;
         if (SCH[schgs2232] && G[fc21] && R[fc32] && (P[fc32] & BIT11)) Z[fc21] &= ~PRIO_Z_BIT;
         if (SCH[schgs2232] && G[fc22] && R[fc31] && (P[fc31] & BIT11)) Z[fc22] &= ~PRIO_Z_BIT;
         if (SCH[schgs2232] && G[fc31] && R[fc22] && (P[fc22] & BIT11)) Z[fc31] &= ~PRIO_Z_BIT;
         if (SCH[schgs2232] && G[fc22] && R[fc31] && (P[fc31] & BIT11)) Z[fc22] &= ~PRIO_Z_BIT;
         if (SCH[schgs2232] && G[fc31] && R[fc22] && (P[fc22] & BIT11)) Z[fc31] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && SCH[schgs2484] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) Z[fc34] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && SCH[schgs2484] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) Z[fc84] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) Z[fc24] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) Z[fc24] &= ~PRIO_Z_BIT;
         if (SCH[schgs2434] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
         if (SCH[schgs2484] && SCH[schgs2434] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) Z[fc84] &= ~PRIO_Z_BIT;
         if (SCH[schgs2484] && SCH[schgs2434] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) Z[fc34] &= ~PRIO_Z_BIT;
         if (SCH[schgs2484] && SCH[schgs3384] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) Z[fc24] &= ~PRIO_Z_BIT;
         if (SCH[schgs2484] && SCH[schgs3384] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
         if (SCH[schgs3384] && SCH[schgs2484] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
         if (SCH[schgs3384] && SCH[schgs2484] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) Z[fc24] &= ~PRIO_Z_BIT;
         if (SCH[schgs3384] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) Z[fc84] &= ~PRIO_Z_BIT;
         if (SCH[schgs3384] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) Z[fc34] &= ~PRIO_Z_BIT;
        if (G[fc62] && R[fc02] && (P[fc02] & BIT11)) Z[fc62] &= ~PRIO_Z_BIT;
        if (G[fc68] && R[fc08] && (P[fc08] & BIT11)) Z[fc68] &= ~PRIO_Z_BIT;
        if (G[fc68] && R[fc11] && (P[fc11] & BIT11)) Z[fc68] &= ~PRIO_Z_BIT;
        if (G[fc21] && R[fc22] && (P[fc22] & BIT11)) Z[fc21] &= ~PRIO_Z_BIT;
        if (G[fc31] && R[fc32] && (P[fc32] & BIT11)) Z[fc31] &= ~PRIO_Z_BIT;
        if (G[fc32] && R[fc31] && (P[fc31] & BIT11)) Z[fc32] &= ~PRIO_Z_BIT;
        if (G[fc32] && R[fc31] && (P[fc31] & BIT11)) Z[fc32] &= ~PRIO_Z_BIT;
        if (G[fc31] && R[fc32] && (P[fc32] & BIT11)) Z[fc31] &= ~PRIO_Z_BIT;
        if (G[fc33] && R[fc34] && (P[fc34] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
        if (G[fc34] && R[fc33] && (P[fc33] & BIT11)) Z[fc34] &= ~PRIO_Z_BIT;
        if (G[fc34] && R[fc33] && (P[fc33] & BIT11)) Z[fc34] &= ~PRIO_Z_BIT;
        if (G[fc33] && R[fc34] && (P[fc34] & BIT11)) Z[fc33] &= ~PRIO_Z_BIT;
        if (G[fc81] && R[fc82] && (P[fc82] & BIT11)) Z[fc81] &= ~PRIO_Z_BIT;
    }
#endif

    /* Niet afkappen tijdens fixeren */
    if (IS[isfix])
    {
        for (fc = 0; fc < FCMAX; ++fc)
        {
             Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
        }
    }

    /* Niet afkappen hard meeverlengen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (YM[fc] & BIT1)
        {
            Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
        }
    }

}
void PrioTerugkomGroenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarTerugkomGroen();

}
void PrioGroenVasthoudenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarGroenVasthouden();

}
void PrioMeetKriteriumExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarMeetKriterium();

}
/* ------------------------------------
   Prioriteitsopties voor PRIO ingrepen
   ------------------------------------ */
void PrioriteitsOpties(void)
{
    int fc;

    /* Geconditioneerde prioriteit instellen */
    /* Geconditioneerde prioriteit werkt nog niet in combinatie met prioriteit tijdens PL regelen */
    if (!IH[hplact])
    {
        IH[hstp02karbus] = !C[cvchd02] && !C[cvchd03] && SCH[schovstipt02karbus];
        IH[hstp03karbus] = !C[cvchd03] && !C[cvchd02] && SCH[schovstipt03karbus];
        IH[hstp05karbus] = !C[cvchd05] && SCH[schovstipt05karbus];
        IH[hstp08karbus] = !C[cvchd08] && !C[cvchd09] && SCH[schovstipt08karbus];
        IH[hstp09karbus] = !C[cvchd09] && !C[cvchd08] && SCH[schovstipt09karbus];
        IH[hstp11karbus] = !C[cvchd11] && SCH[schovstipt11karbus];
        IH[hstp61karbus] = !C[cvchd61] && SCH[schovstipt61karbus];
        IH[hstp62karbus] = !C[cvchd62] && SCH[schovstipt62karbus];
        IH[hstp67karbus] = !C[cvchd67] && SCH[schovstipt67karbus];
        IH[hstp68karbus] = !C[cvchd68] && SCH[schovstipt68karbus];
        if (IH[hstp02karbus] && (MM[mstp02karbus] == CIF_TE_VROEG || !MM[mstp02karbus])) iPrioriteitsOpties[prioFC02karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg02karbus);
        if (IH[hstp03karbus] && (MM[mstp03karbus] == CIF_TE_VROEG || !MM[mstp03karbus])) iPrioriteitsOpties[prioFC03karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg03karbus);
        if (IH[hstp05karbus] && (MM[mstp05karbus] == CIF_TE_VROEG || !MM[mstp05karbus])) iPrioriteitsOpties[prioFC05karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg05karbus);
        if (IH[hstp08karbus] && (MM[mstp08karbus] == CIF_TE_VROEG || !MM[mstp08karbus])) iPrioriteitsOpties[prioFC08karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg08karbus);
        if (IH[hstp09karbus] && (MM[mstp09karbus] == CIF_TE_VROEG || !MM[mstp09karbus])) iPrioriteitsOpties[prioFC09karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg09karbus);
        if (IH[hstp11karbus] && (MM[mstp11karbus] == CIF_TE_VROEG || !MM[mstp11karbus])) iPrioriteitsOpties[prioFC11karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg11karbus);
        if (IH[hstp61karbus] && (MM[mstp61karbus] == CIF_TE_VROEG || !MM[mstp61karbus])) iPrioriteitsOpties[prioFC61karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg61karbus);
        if (IH[hstp62karbus] && (MM[mstp62karbus] == CIF_TE_VROEG || !MM[mstp62karbus])) iPrioriteitsOpties[prioFC62karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg62karbus);
        if (IH[hstp67karbus] && (MM[mstp67karbus] == CIF_TE_VROEG || !MM[mstp67karbus])) iPrioriteitsOpties[prioFC67karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg67karbus);
        if (IH[hstp68karbus] && (MM[mstp68karbus] == CIF_TE_VROEG || !MM[mstp68karbus])) iPrioriteitsOpties[prioFC68karbus] = BepaalPrioriteitsOpties(prmovstipttevroeg68karbus);
        if (IH[hstp02karbus] && (MM[mstp02karbus] == CIF_OP_TIJD || !MM[mstp02karbus])) iPrioriteitsOpties[prioFC02karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd02karbus);
        if (IH[hstp03karbus] && (MM[mstp03karbus] == CIF_OP_TIJD || !MM[mstp03karbus])) iPrioriteitsOpties[prioFC03karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd03karbus);
        if (IH[hstp05karbus] && (MM[mstp05karbus] == CIF_OP_TIJD || !MM[mstp05karbus])) iPrioriteitsOpties[prioFC05karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd05karbus);
        if (IH[hstp08karbus] && (MM[mstp08karbus] == CIF_OP_TIJD || !MM[mstp08karbus])) iPrioriteitsOpties[prioFC08karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd08karbus);
        if (IH[hstp09karbus] && (MM[mstp09karbus] == CIF_OP_TIJD || !MM[mstp09karbus])) iPrioriteitsOpties[prioFC09karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd09karbus);
        if (IH[hstp11karbus] && (MM[mstp11karbus] == CIF_OP_TIJD || !MM[mstp11karbus])) iPrioriteitsOpties[prioFC11karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd11karbus);
        if (IH[hstp61karbus] && (MM[mstp61karbus] == CIF_OP_TIJD || !MM[mstp61karbus])) iPrioriteitsOpties[prioFC61karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd61karbus);
        if (IH[hstp62karbus] && (MM[mstp62karbus] == CIF_OP_TIJD || !MM[mstp62karbus])) iPrioriteitsOpties[prioFC62karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd62karbus);
        if (IH[hstp67karbus] && (MM[mstp67karbus] == CIF_OP_TIJD || !MM[mstp67karbus])) iPrioriteitsOpties[prioFC67karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd67karbus);
        if (IH[hstp68karbus] && (MM[mstp68karbus] == CIF_OP_TIJD || !MM[mstp68karbus])) iPrioriteitsOpties[prioFC68karbus] = BepaalPrioriteitsOpties(prmovstiptoptijd68karbus);
        if (IH[hstp02karbus] && (MM[mstp02karbus] == CIF_TE_LAAT || !MM[mstp02karbus])) iPrioriteitsOpties[prioFC02karbus] = BepaalPrioriteitsOpties(prmovstipttelaat02karbus);
        if (IH[hstp03karbus] && (MM[mstp03karbus] == CIF_TE_LAAT || !MM[mstp03karbus])) iPrioriteitsOpties[prioFC03karbus] = BepaalPrioriteitsOpties(prmovstipttelaat03karbus);
        if (IH[hstp05karbus] && (MM[mstp05karbus] == CIF_TE_LAAT || !MM[mstp05karbus])) iPrioriteitsOpties[prioFC05karbus] = BepaalPrioriteitsOpties(prmovstipttelaat05karbus);
        if (IH[hstp08karbus] && (MM[mstp08karbus] == CIF_TE_LAAT || !MM[mstp08karbus])) iPrioriteitsOpties[prioFC08karbus] = BepaalPrioriteitsOpties(prmovstipttelaat08karbus);
        if (IH[hstp09karbus] && (MM[mstp09karbus] == CIF_TE_LAAT || !MM[mstp09karbus])) iPrioriteitsOpties[prioFC09karbus] = BepaalPrioriteitsOpties(prmovstipttelaat09karbus);
        if (IH[hstp11karbus] && (MM[mstp11karbus] == CIF_TE_LAAT || !MM[mstp11karbus])) iPrioriteitsOpties[prioFC11karbus] = BepaalPrioriteitsOpties(prmovstipttelaat11karbus);
        if (IH[hstp61karbus] && (MM[mstp61karbus] == CIF_TE_LAAT || !MM[mstp61karbus])) iPrioriteitsOpties[prioFC61karbus] = BepaalPrioriteitsOpties(prmovstipttelaat61karbus);
        if (IH[hstp62karbus] && (MM[mstp62karbus] == CIF_TE_LAAT || !MM[mstp62karbus])) iPrioriteitsOpties[prioFC62karbus] = BepaalPrioriteitsOpties(prmovstipttelaat62karbus);
        if (IH[hstp67karbus] && (MM[mstp67karbus] == CIF_TE_LAAT || !MM[mstp67karbus])) iPrioriteitsOpties[prioFC67karbus] = BepaalPrioriteitsOpties(prmovstipttelaat67karbus);
        if (IH[hstp68karbus] && (MM[mstp68karbus] == CIF_TE_LAAT || !MM[mstp68karbus])) iPrioriteitsOpties[prioFC68karbus] = BepaalPrioriteitsOpties(prmovstipttelaat68karbus);
    }

    /* bijhouden of een hulpdienstingreep plaatsvindt */
    IH[hplhd] = FALSE;
    for (fc = 0; fc < prioFCMAX; ++fc)
    {
        if (iPrioriteitsOpties[fc] & poNoodDienst)
            IH[hplhd] |= TRUE;
    }

    /* tijdens halfstar bedrijf alleen optie aanvraag voor OV richtingen */
    if (IH[hplact] && SCH[schovpriople])
    {
        iPrioriteitsOpties[prioFC02karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst02karbus);
        iPrioriteitsOpties[prioFC02risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst02risov);
        iPrioriteitsOpties[prioFC02risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst02risvrw);
        iPrioriteitsOpties[prioFC02risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst02risalg);
        iPrioriteitsOpties[prioFC03karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03karbus);
        iPrioriteitsOpties[prioFC03risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03risov);
        iPrioriteitsOpties[prioFC03risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03risvrw);
        iPrioriteitsOpties[prioFC03risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03risalg);
        iPrioriteitsOpties[prioFC05karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05karbus);
        iPrioriteitsOpties[prioFC05risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05risov);
        iPrioriteitsOpties[prioFC05risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05risvrw);
        iPrioriteitsOpties[prioFC05risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05risalg);
        iPrioriteitsOpties[prioFC08karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08karbus);
        iPrioriteitsOpties[prioFC08risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08risov);
        iPrioriteitsOpties[prioFC08risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08risvrw);
        iPrioriteitsOpties[prioFC08risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08risalg);
        iPrioriteitsOpties[prioFC09karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09karbus);
        iPrioriteitsOpties[prioFC09risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09risov);
        iPrioriteitsOpties[prioFC09risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09risvrw);
        iPrioriteitsOpties[prioFC09risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09risalg);
        iPrioriteitsOpties[prioFC11karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11karbus);
        iPrioriteitsOpties[prioFC11risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11risov);
        iPrioriteitsOpties[prioFC11risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11risvrw);
        iPrioriteitsOpties[prioFC11risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11risalg);
        iPrioriteitsOpties[prioFC11bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11bus);
        iPrioriteitsOpties[prioFC22fiets] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst22fiets);
        iPrioriteitsOpties[prioFC28fiets] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst28fiets);
        iPrioriteitsOpties[prioFC61karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61karbus);
        iPrioriteitsOpties[prioFC61risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61risov);
        iPrioriteitsOpties[prioFC61risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61risvrw);
        iPrioriteitsOpties[prioFC61risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61risalg);
        iPrioriteitsOpties[prioFC62karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62karbus);
        iPrioriteitsOpties[prioFC62risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62risov);
        iPrioriteitsOpties[prioFC62risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62risvrw);
        iPrioriteitsOpties[prioFC62risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62risalg);
        iPrioriteitsOpties[prioFC67karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67karbus);
        iPrioriteitsOpties[prioFC67risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67risov);
        iPrioriteitsOpties[prioFC67risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67risvrw);
        iPrioriteitsOpties[prioFC67risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67risalg);
        iPrioriteitsOpties[prioFC68karbus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68karbus);
        iPrioriteitsOpties[prioFC68risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68risov);
        iPrioriteitsOpties[prioFC68risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68risvrw);
        iPrioriteitsOpties[prioFC68risalg] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68risalg);
    }


    /* Geen prioriteit indien voorwaarden tegenhouden omschakelen waar zijn */
    if (IH[homschtegenh] && IH[hplact] && SCH[schovpriople])
    {
        for (fc = 0; fc < prioFCMAX; ++fc)
            iXPrio[fc] |= BIT6;
    }
    else
    {
        for (fc = 0; fc < prioFCMAX; ++fc)
            iXPrio[fc] &= ~BIT6;
    }


    /* Geen prioriteit bij file stroom afwaarts */
    if (IH[hfileFile68af])
    {
        iPrioriteitsOpties[prioFC08karbus] = poAanvraag;
        iPrioriteitsOpties[prioFC08risov] = poAanvraag;
        iPrioriteitsOpties[prioFC08risvrw] = poAanvraag;
        iPrioriteitsOpties[prioFC08risalg] = poAanvraag;
        iPrioriteitsOpties[prioFC11karbus] = poAanvraag;
        iPrioriteitsOpties[prioFC11risov] = poAanvraag;
        iPrioriteitsOpties[prioFC11risvrw] = poAanvraag;
        iPrioriteitsOpties[prioFC11risalg] = poAanvraag;
        iPrioriteitsOpties[prioFC11bus] = poAanvraag;
    }

    #ifdef PRIO_ADDFILE
        PrioriteitsOpties_Add();
    #endif

    #ifdef PRIO_ADDFILE
        PrioriteitsNiveau_Add();
    #endif
}
/* ------------------------------------
   Prioriteitsopties toekenning voor OV
   ------------------------------------ */
void PrioriteitsToekenningExtra(void)
{
    /* Geen prioriteit bij file stroom afwaarts */
    if (IH[hfileFile68af])
    {
        iPrioriteit[prioFC08karbus] = 0;
        iPrioriteit[prioFC08risov] = 0;
        iPrioriteit[prioFC08risvrw] = 0;
        iPrioriteit[prioFC08risalg] = 0;
        iPrioriteit[prioFC11karbus] = 0;
        iPrioriteit[prioFC11risov] = 0;
        iPrioriteit[prioFC11risvrw] = 0;
        iPrioriteit[prioFC11risalg] = 0;
        iPrioriteit[prioFC11bus] = 0;
    }
}
/* ------------------------------------
   Extra code tegenhouden conflicten OV
   ------------------------------------ */
void TegenhoudenConflictenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarTegenhouden();
    if (MM[mwtvm24] && MM[mwtvm24] <= PRM[prmwtvnhaltmin])
    {
        RR[fc24] &= ~BIT6;
        RR[fc34] &= ~BIT6;
        RR[fc84] &= ~BIT6;
    }
#ifndef NO_TIMETOX
    if (SCH[schconfidence15fix] && SCH[schgs2232] && (P[fc22] & BIT11)) { RR[fc32] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2232] && (P[fc32] & BIT11)) { RR[fc22] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2434] && (P[fc24] & BIT11)) { RR[fc34] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2434] && (P[fc34] & BIT11)) { RR[fc24] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2484] && (P[fc24] & BIT11)) { RR[fc84] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2484] && (P[fc84] & BIT11)) { RR[fc24] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && (P[fc28] & BIT11)) { RR[fc38] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && (P[fc38] & BIT11)) { RR[fc28] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs3384] && (P[fc33] & BIT11)) { RR[fc84] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs3384] && (P[fc84] & BIT11)) { RR[fc33] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && (P[fc05] & BIT11)) { RR[fc22] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && (P[fc05] & BIT11)) { RR[fc32] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && (P[fc11] & BIT11)) { RR[fc26] &= ~PRIO_RR_BIT; }
#endif
}

/* ---------------------------
   Post afhandeling prioriteit
   --------------------------- */
void PostAfhandelingPrio(void)
{
    boolv isHD = FALSE;
    boolv isWTV = FALSE;
    int fc;
    int i;

    /* Bepalen of een HD ingreep actief is */
    isHD = C[cvchd02] && !BL[fc02] || C[cvchd03] && !BL[fc03] || C[cvchd05] && !BL[fc05] || C[cvchd08] && !BL[fc08] || C[cvchd09] && !BL[fc09] || C[cvchd11] && !BL[fc11] || C[cvchd61] && !BL[fc61] || C[cvchd62] && !BL[fc62] || C[cvchd67] && !BL[fc67] || C[cvchd68] && !BL[fc68];

    /* Blokkeren alle langzaam verkeer (tevens niet-conflicten) */
    /* Blokkeren uitstellen indien een wachttijdvoorspeller onder het minimum is */
    isWTV |= (MM[mwtvm24] && MM[mwtvm24] <= PRM[prmwtvnhaltmin]);
    if (isHD && !isWTV)
    {
        RR[fc21] |= BIT6; Z[fc21] |= BIT6;
        RR[fc22] |= BIT6; Z[fc22] |= BIT6;
        RR[fc24] |= BIT6; Z[fc24] |= BIT6;
        RR[fc26] |= BIT6; Z[fc26] |= BIT6;
        RR[fc28] |= BIT6; Z[fc28] |= BIT6;
        RR[fc31] |= BIT6; Z[fc31] |= BIT6;
        RR[fc32] |= BIT6; Z[fc32] |= BIT6;
        RR[fc33] |= BIT6; Z[fc33] |= BIT6;
        RR[fc34] |= BIT6; Z[fc34] |= BIT6;
        RR[fc38] |= BIT6; Z[fc38] |= BIT6;
        RR[fc81] |= BIT6; Z[fc81] |= BIT6;
        RR[fc82] |= BIT6; Z[fc82] |= BIT6;
        RR[fc84] |= BIT6; Z[fc84] |= BIT6;
    }

    /* Niet afkappen tijdens fixeren */
    if (IS[isfix])
    {
        for (fc = 0; fc < FCMAX; ++fc)
        {
            Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
        }
    }

    /* Niet afkappen hard meeverlengen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (YM[fc] & BIT1)
        {
            Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
        }
    }

    /* Niet afkappen naloop richtingen wanneer een naloop tijd nog loopt */
    if (RT[tnlfg2221] || T[tnlfg2221] || RT[tnlfgd2221] || T[tnlfgd2221] || RT[tnleg2221] || T[tnleg2221] || RT[tnlegd2221] || T[tnlegd2221])
    {
        Z[fc21] &= ~BIT6;
        RR[fc21] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc21] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3231] || T[tnlsgd3231])
    {
        Z[fc31] &= ~BIT6;
        RR[fc31] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc31] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3132] || T[tnlsgd3132])
    {
        Z[fc32] &= ~BIT6;
        RR[fc32] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc32] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3433] || T[tnlsgd3433])
    {
        Z[fc33] &= ~BIT6;
        RR[fc33] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc33] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3334] || T[tnlsgd3334])
    {
        Z[fc34] &= ~BIT6;
        RR[fc34] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc34] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0262] || T[tnlfg0262] || RT[tnlfgd0262] || T[tnlfgd0262] || RT[tnleg0262] || T[tnleg0262] || RT[tnlegd0262] || T[tnlegd0262])
    {
        Z[fc62] &= ~BIT6;
        RR[fc62] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc62] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0868] || T[tnlfg0868] || RT[tnlfgd0868] || T[tnlfgd0868] || RT[tnleg0868] || T[tnleg0868] || RT[tnlegd0868] || T[tnlegd0868] || RT[tnlfg1168] || T[tnlfg1168] || RT[tnlfgd1168] || T[tnlfgd1168] || RT[tnleg1168] || T[tnleg1168] || RT[tnlegd1168] || T[tnlegd1168])
    {
        Z[fc68] &= ~BIT6;
        RR[fc68] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc68] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg8281] || T[tnlfg8281] || RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnleg8281] || T[tnleg8281] || RT[tnlegd8281] || T[tnlegd8281])
    {
        Z[fc81] &= ~BIT6;
        RR[fc81] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc81] &= ~PRIO_FM_BIT;
    }

    /* Niet afkappen late release richtingen wanneer de laterelease tijd nog loopt */
    RT[tlr2611] = ER[fc11];
    if (RT[tlr2611] || T[tlr2611])
    {
        Z[fc26] &= ~BIT6;
        RR[fc26] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc26] &= ~PRIO_FM_BIT;
    }


    #ifndef NO_RIS
    /* nooit einde groen als granted verstrekt */
    /* --------------------------------------- */
    for (i = 0; i < FCMAX; ++i)
    {
        if (granted_verstrekt[i] > 0)     /* als granted is verstrekt dan altijd groen aanhouden */
        {
            if (G[i] && !MG[i]) YV[i] |= PRIO_YV_BIT;
            YM[i] |= PRIO_YM_BIT;
            Z[i] = FALSE;
        }
    }
    #endif /* NO_RIS */

    #ifndef NO_TIMETOX
    /* Niet afkappen naloop richtingen wanneer voedende een P[]&BIT11 heeft */
    if (P[fc02] & BIT11) {
         Z[fc62] &= ~BIT6;
        RR[fc62] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc62] &= ~PRIO_FM_BIT;
    }

    if (P[fc08] & BIT11) {
         Z[fc68] &= ~BIT6;
        RR[fc68] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc68] &= ~PRIO_FM_BIT;
    }

    if (P[fc11] & BIT11) {
         Z[fc68] &= ~BIT6;
        RR[fc68] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc68] &= ~PRIO_FM_BIT;
    }

    if (P[fc22] & BIT11) {
         Z[fc21] &= ~BIT6;
        RR[fc21] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc21] &= ~PRIO_FM_BIT;
    }

    if (P[fc31] & BIT11) {
         Z[fc32] &= ~BIT6;
        RR[fc32] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc32] &= ~PRIO_FM_BIT;
    }

    if (P[fc32] & BIT11) {
         Z[fc31] &= ~BIT6;
        RR[fc31] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc31] &= ~PRIO_FM_BIT;
    }

    if (P[fc33] & BIT11) {
         Z[fc34] &= ~BIT6;
        RR[fc34] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc34] &= ~PRIO_FM_BIT;
    }

    if (P[fc34] & BIT11) {
         Z[fc33] &= ~BIT6;
        RR[fc33] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc33] &= ~PRIO_FM_BIT;
    }

    if (P[fc82] & BIT11) {
         Z[fc81] &= ~BIT6;
        RR[fc81] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc81] &= ~PRIO_FM_BIT;
    }

    #endif // NO_TIMETOX

    #ifndef NO_TIMETOX
    /* Niet afkappen voorstartende richting wanneer voedende een P[]&BIT11 heeft */
    if (P[fc05] & BIT11) {
         Z[fc22] &= ~BIT6;
        RR[fc22] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc22] &= ~PRIO_FM_BIT;
    }

    if (P[fc05] & BIT11) {
         Z[fc32] &= ~BIT6;
        RR[fc32] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc32] &= ~PRIO_FM_BIT;
    }

    #endif // NO_TIMETOX

    #ifndef NO_TIMETOX
    /* Niet afkappen laterelease richting wanneer voedende een P[]&BIT11 heeft */
    if (P[fc11] & BIT11) {
         Z[fc26] &= ~BIT6;
        RR[fc26] &= ~(BIT1 | BIT2 | BIT4 | BIT6);
        FM[fc26] &= ~PRIO_FM_BIT;
    }

    #endif // NO_TIMETOX

}
/* ---------------------------------------
   PrioPARCorrecties corrigeert de PAR van
   gesynchroniseerde richtingen.
   --------------------------------------- */
void PrioPARCorrecties(void)
{
    int fc;
     /* PAR-correcties nalopen voetgangers stap 1: naloop past of los OK */
    PAR[fc31] = PAR[fc31] && (IH[hnlsg3132] || IH[hlos31]);
    PAR[fc32] = PAR[fc32] && (IH[hnlsg3231] || IH[hlos32]);
    PAR[fc33] = PAR[fc33] && (IH[hnlsg3334] || IH[hlos33]);
    PAR[fc34] = PAR[fc34] && (IH[hnlsg3433] || IH[hlos34]);

    /* PAR-correcties 10 keer checken ivm onderlinge afhankelijkheden */
    for (fc = 0; fc < 10; ++fc)
    {
        /* PAR-correcties nalopen voetgangers stap 2: beide PAR of los OK */
        PAR[fc31] = PAR[fc31] && (PAR[fc32] || IH[hlos31]);
        PAR[fc32] = PAR[fc32] && (PAR[fc31] || IH[hlos32]);
        PAR[fc33] = PAR[fc33] && (PAR[fc34] || IH[hlos33]);
        PAR[fc34] = PAR[fc34] && (PAR[fc33] || IH[hlos34]);

        /* PAR = PAR */
        PAR[fc05] = PAR[fc05] && (PAR[fc22] || !A[fc22]);
        PAR[fc05] = PAR[fc05] && (PAR[fc32] || !A[fc32]);
        PAR[fc11] = PAR[fc11] && (PAR[fc26] || !A[fc26]);
        PAR[fc02] = PAR[fc02] && PAR[fc62];
        PAR[fc08] = PAR[fc08] && PAR[fc68];
        PAR[fc11] = PAR[fc11] && PAR[fc68];
        PAR[fc22] = PAR[fc22] && PAR[fc21];
        PAR[fc82] = PAR[fc82] && PAR[fc81];

        /* PAR correcties gelijkstart synchronisaties */
        if (SCH[schgs2232]) PAR[fc22] = PAR[fc22] && (PAR[fc32] || !A[fc32]);
        if (SCH[schgs2232]) PAR[fc32] = PAR[fc32] && (PAR[fc22] || !A[fc22]);
        if (SCH[schgs2434]) PAR[fc24] = PAR[fc24] && (PAR[fc34] || !A[fc34]);
        if (SCH[schgs2434]) PAR[fc34] = PAR[fc34] && (PAR[fc24] || !A[fc24]);
        if (SCH[schgs2484]) PAR[fc24] = PAR[fc24] && (PAR[fc84] || !A[fc84]);
        if (SCH[schgs2484]) PAR[fc84] = PAR[fc84] && (PAR[fc24] || !A[fc24]);
        PAR[fc28] = PAR[fc28] && (PAR[fc38] || !A[fc38]);
        PAR[fc38] = PAR[fc38] && (PAR[fc28] || !A[fc28]);
        if (SCH[schgs3384]) PAR[fc33] = PAR[fc33] && (PAR[fc84] || !A[fc84]);
        if (SCH[schgs3384]) PAR[fc84] = PAR[fc84] && (PAR[fc33] || !A[fc33]);
    }

    /* PAR correcties eenzijdige synchronisaties */
    PAR[fc22] = PAR[fc22] || G[fc05];
    PAR[fc32] = PAR[fc32] || G[fc05];
    PAR[fc26] = PAR[fc26] || G[fc11];
    PAR[fc62] = PAR[fc62] || G[fc02];
    PAR[fc68] = PAR[fc68] || G[fc08];
    PAR[fc68] = PAR[fc68] || G[fc11];
    PAR[fc21] = PAR[fc21] || G[fc22];
    PAR[fc81] = PAR[fc81] || G[fc82];

    /* Niet alternatief komen tijdens file (meting na ss) */
    if (IH[hfileFile68af]) PAR[fc08] = FALSE;
    if (IH[hfileFile68af]) PAR[fc11] = FALSE;
    /* BLOKGEBONDEN ALTERNATIEF */
    /* ======================== */
    /* Voor instellingen de volgende waarden voor het blok waarin het alternatief mag plaatsvinden optellen:
     * 1  alternatief mogelijk in blok 1
     * 2  alternatief mogelijk in blok 2
     * 4  alternatief mogelijk in blok 3
     * ...  etc  ... t/m 256 voor blok 9
     */
    if (!(PRM[prmaltb02] & (1 << ML))) PAR[fc02] = FALSE;
    if (!(PRM[prmaltb03] & (1 << ML))) PAR[fc03] = FALSE;
    if (!(PRM[prmaltb05] & (1 << ML))) PAR[fc05] = FALSE;
    if (!(PRM[prmaltb08] & (1 << ML))) PAR[fc08] = FALSE;
    if (!(PRM[prmaltb09] & (1 << ML))) PAR[fc09] = FALSE;
    if (!(PRM[prmaltb11] & (1 << ML))) PAR[fc11] = FALSE;
    if (!(PRM[prmaltb21] & (1 << ML))) PAR[fc21] = FALSE;
    if (!(PRM[prmaltb22] & (1 << ML))) PAR[fc22] = FALSE;
    if (!(PRM[prmaltb24] & (1 << ML))) PAR[fc24] = FALSE;
    if (!(PRM[prmaltb26] & (1 << ML))) PAR[fc26] = FALSE;
    if (!(PRM[prmaltb28] & (1 << ML))) PAR[fc28] = FALSE;
    if (!(PRM[prmaltb31] & (1 << ML))) PAR[fc31] = FALSE;
    if (!(PRM[prmaltb32] & (1 << ML))) PAR[fc32] = FALSE;
    if (!(PRM[prmaltb33] & (1 << ML))) PAR[fc33] = FALSE;
    if (!(PRM[prmaltb34] & (1 << ML))) PAR[fc34] = FALSE;
    if (!(PRM[prmaltb38] & (1 << ML))) PAR[fc38] = FALSE;
    if (!(PRM[prmaltb61] & (1 << ML))) PAR[fc61] = FALSE;
    if (!(PRM[prmaltb62] & (1 << ML))) PAR[fc62] = FALSE;
    if (!(PRM[prmaltb67] & (1 << ML))) PAR[fc67] = FALSE;
    if (!(PRM[prmaltb68] & (1 << ML))) PAR[fc68] = FALSE;
    if (!(PRM[prmaltb81] & (1 << ML))) PAR[fc81] = FALSE;
    if (!(PRM[prmaltb82] & (1 << ML))) PAR[fc82] = FALSE;
    if (!(PRM[prmaltb84] & (1 << ML))) PAR[fc84] = FALSE;
    #ifndef NO_TIMETOX
    if (SCH[schgs2232] && (P[fc22] & BIT11) && R[fc32] && !kp(fc32) && A[fc32]) { PAR[fc32] |= BIT11; P[fc32] |= BIT11; }
    if (SCH[schgs2232] && (P[fc32] & BIT11) && R[fc22] && !kp(fc22) && A[fc22]) { PAR[fc22] |= BIT11; P[fc22] |= BIT11; }
    if (SCH[schgs2434] && (P[fc24] & BIT11) && R[fc34] && !kp(fc34) && A[fc34]) { PAR[fc34] |= BIT11; P[fc34] |= BIT11; }
    if (SCH[schgs2434] && (P[fc34] & BIT11) && R[fc24] && !kp(fc24) && A[fc24]) { PAR[fc24] |= BIT11; P[fc24] |= BIT11; }
    if (SCH[schgs2484] && (P[fc24] & BIT11) && R[fc84] && !kp(fc84) && A[fc84]) { PAR[fc84] |= BIT11; P[fc84] |= BIT11; }
    if (SCH[schgs2484] && (P[fc84] & BIT11) && R[fc24] && !kp(fc24) && A[fc24]) { PAR[fc24] |= BIT11; P[fc24] |= BIT11; }
    if ((P[fc28] & BIT11) && R[fc38] && !kp(fc38) && A[fc38]) { PAR[fc38] |= BIT11; P[fc38] |= BIT11; }
    if ((P[fc38] & BIT11) && R[fc28] && !kp(fc28) && A[fc28]) { PAR[fc28] |= BIT11; P[fc28] |= BIT11; }
    if (SCH[schgs3384] && (P[fc33] & BIT11) && R[fc84] && !kp(fc84) && A[fc84]) { PAR[fc84] |= BIT11; P[fc84] |= BIT11; }
    if (SCH[schgs3384] && (P[fc84] & BIT11) && R[fc33] && !kp(fc33) && A[fc33]) { PAR[fc33] |= BIT11; P[fc33] |= BIT11; }
    if ((P[fc05] & BIT11) && R[fc22] && !kp(fc22) && A[fc22]) { PAR[fc22] |= BIT11; P[fc22] |= BIT11; }
    if ((P[fc05] & BIT11) && R[fc32] && !kp(fc32) && A[fc32]) { PAR[fc32] |= BIT11; P[fc32] |= BIT11; }
    if ((P[fc11] & BIT11) && R[fc26] && !kp(fc26) && A[fc26]) { PAR[fc26] |= BIT11; P[fc26] |= BIT11; }
    #endif
}

/* -------------------------------------------------------
   PrioCcol zorgt voor het bijwerken van de CCOL-elementen
   voor het richtingen met prioriteit.
   ------------------------------------------------------- */
void PrioCcol(void) {
    PrioCcolElementen(prioFC02karbus, tgb02karbus, trt02karbus, hprio02karbus, cvc02karbus, tblk02karbus);
    PrioCcolElementen(prioFC02risov, tgb02risov, trt02risov, hprio02risov, cvc02risov, tblk02risov);
    PrioCcolElementen(prioFC02risvrw, tgb02risvrw, trt02risvrw, hprio02risvrw, cvc02risvrw, tblk02risvrw);
    PrioCcolElementen(prioFC02risalg, tgb02risalg, trt02risalg, hprio02risalg, cvc02risalg, tblk02risalg);
    PrioCcolElementen(prioFC03karbus, tgb03karbus, trt03karbus, hprio03karbus, cvc03karbus, tblk03karbus);
    PrioCcolElementen(prioFC03risov, tgb03risov, trt03risov, hprio03risov, cvc03risov, tblk03risov);
    PrioCcolElementen(prioFC03risvrw, tgb03risvrw, trt03risvrw, hprio03risvrw, cvc03risvrw, tblk03risvrw);
    PrioCcolElementen(prioFC03risalg, tgb03risalg, trt03risalg, hprio03risalg, cvc03risalg, tblk03risalg);
    PrioCcolElementen(prioFC05karbus, tgb05karbus, trt05karbus, hprio05karbus, cvc05karbus, tblk05karbus);
    PrioCcolElementen(prioFC05risov, tgb05risov, trt05risov, hprio05risov, cvc05risov, tblk05risov);
    PrioCcolElementen(prioFC05risvrw, tgb05risvrw, trt05risvrw, hprio05risvrw, cvc05risvrw, tblk05risvrw);
    PrioCcolElementen(prioFC05risalg, tgb05risalg, trt05risalg, hprio05risalg, cvc05risalg, tblk05risalg);
    PrioCcolElementen(prioFC08karbus, tgb08karbus, trt08karbus, hprio08karbus, cvc08karbus, tblk08karbus);
    PrioCcolElementen(prioFC08risov, tgb08risov, trt08risov, hprio08risov, cvc08risov, tblk08risov);
    PrioCcolElementen(prioFC08risvrw, tgb08risvrw, trt08risvrw, hprio08risvrw, cvc08risvrw, tblk08risvrw);
    PrioCcolElementen(prioFC08risalg, tgb08risalg, trt08risalg, hprio08risalg, cvc08risalg, tblk08risalg);
    PrioCcolElementen(prioFC09karbus, tgb09karbus, trt09karbus, hprio09karbus, cvc09karbus, tblk09karbus);
    PrioCcolElementen(prioFC09risov, tgb09risov, trt09risov, hprio09risov, cvc09risov, tblk09risov);
    PrioCcolElementen(prioFC09risvrw, tgb09risvrw, trt09risvrw, hprio09risvrw, cvc09risvrw, tblk09risvrw);
    PrioCcolElementen(prioFC09risalg, tgb09risalg, trt09risalg, hprio09risalg, cvc09risalg, tblk09risalg);
    PrioCcolElementen(prioFC11karbus, tgb11karbus, trt11karbus, hprio11karbus, cvc11karbus, tblk11karbus);
    PrioCcolElementen(prioFC11risov, tgb11risov, trt11risov, hprio11risov, cvc11risov, tblk11risov);
    PrioCcolElementen(prioFC11risvrw, tgb11risvrw, trt11risvrw, hprio11risvrw, cvc11risvrw, tblk11risvrw);
    PrioCcolElementen(prioFC11risalg, tgb11risalg, trt11risalg, hprio11risalg, cvc11risalg, tblk11risalg);
    PrioCcolElementen(prioFC11bus, tgb11bus, trt11bus, hprio11bus, cvc11bus, tblk11bus);
    PrioCcolElementen(prioFC22fiets, tgb22fiets, trt22fiets, hprio22fiets, cvc22fiets, tblk22fiets);
    PrioCcolElementen(prioFC28fiets, tgb28fiets, trt28fiets, hprio28fiets, cvc28fiets, tblk28fiets);
    PrioCcolElementen(prioFC61karbus, tgb61karbus, trt61karbus, hprio61karbus, cvc61karbus, tblk61karbus);
    PrioCcolElementen(prioFC61risov, tgb61risov, trt61risov, hprio61risov, cvc61risov, tblk61risov);
    PrioCcolElementen(prioFC61risvrw, tgb61risvrw, trt61risvrw, hprio61risvrw, cvc61risvrw, tblk61risvrw);
    PrioCcolElementen(prioFC61risalg, tgb61risalg, trt61risalg, hprio61risalg, cvc61risalg, tblk61risalg);
    PrioCcolElementen(prioFC62karbus, tgb62karbus, trt62karbus, hprio62karbus, cvc62karbus, tblk62karbus);
    PrioCcolElementen(prioFC62risov, tgb62risov, trt62risov, hprio62risov, cvc62risov, tblk62risov);
    PrioCcolElementen(prioFC62risvrw, tgb62risvrw, trt62risvrw, hprio62risvrw, cvc62risvrw, tblk62risvrw);
    PrioCcolElementen(prioFC62risalg, tgb62risalg, trt62risalg, hprio62risalg, cvc62risalg, tblk62risalg);
    PrioCcolElementen(prioFC67karbus, tgb67karbus, trt67karbus, hprio67karbus, cvc67karbus, tblk67karbus);
    PrioCcolElementen(prioFC67risov, tgb67risov, trt67risov, hprio67risov, cvc67risov, tblk67risov);
    PrioCcolElementen(prioFC67risvrw, tgb67risvrw, trt67risvrw, hprio67risvrw, cvc67risvrw, tblk67risvrw);
    PrioCcolElementen(prioFC67risalg, tgb67risalg, trt67risalg, hprio67risalg, cvc67risalg, tblk67risalg);
    PrioCcolElementen(prioFC68karbus, tgb68karbus, trt68karbus, hprio68karbus, cvc68karbus, tblk68karbus);
    PrioCcolElementen(prioFC68risov, tgb68risov, trt68risov, hprio68risov, cvc68risov, tblk68risov);
    PrioCcolElementen(prioFC68risvrw, tgb68risvrw, trt68risvrw, hprio68risvrw, cvc68risvrw, tblk68risvrw);
    PrioCcolElementen(prioFC68risalg, tgb68risalg, trt68risalg, hprio68risalg, cvc68risalg, tblk68risalg);
    PrioCcolElementen(hdFC02, tgbhd02, trthd02, hhd02, cvchd02, -1);
    PrioCcolElementen(hdFC03, tgbhd03, trthd03, hhd03, cvchd03, -1);
    PrioCcolElementen(hdFC05, tgbhd05, trthd05, hhd05, cvchd05, -1);
    PrioCcolElementen(hdFC08, tgbhd08, trthd08, hhd08, cvchd08, -1);
    PrioCcolElementen(hdFC09, tgbhd09, trthd09, hhd09, cvchd09, -1);
    PrioCcolElementen(hdFC11, tgbhd11, trthd11, hhd11, cvchd11, -1);
    PrioCcolElementen(hdFC61, tgbhd61, trthd61, hhd61, cvchd61, -1);
    PrioCcolElementen(hdFC62, tgbhd62, trthd62, hhd62, cvchd62, -1);
    PrioCcolElementen(hdFC67, tgbhd67, trthd67, hhd67, cvchd67, -1);
    PrioCcolElementen(hdFC68, tgbhd68, trthd68, hhd68, cvchd68, -1);
}

/* ----------------------------------------------------------------
   PrioSpecialSignals wordt aangeroepen vanuit de functie 
   is_special_signals. Deze wordt in de testomgeving gebruikt voor 
   het opzetten van bijzondere ingangen.
   ---------------------------------------------------------------- */
#ifdef CCOL_IS_SPECIAL
void PrioSpecialSignals(void)
{
    /* reset oude set_DSI_message */
    #if !defined VISSIM_GLOBAL_DSI
        reset_DSI_message();
    #endif

    /* Prioriteit ingrepen */
    if (SD[ddummykarin02karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg02], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit02karbus] && C[cvc02karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg02], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin03karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg03], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit03karbus] && C[cvc03karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg03], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin05karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg05], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit05karbus] && C[cvc05karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg05], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin08karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit08karbus] && C[cvc08karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin09karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg09], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit09karbus] && C[cvc09karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg09], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin11karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit11karbus] && C[cvc11karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit11bus] && C[cvc11bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin61karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit61karbus] && C[cvc61karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin62karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg62], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit62karbus] && C[cvc62karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg62], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin67karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg67], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit67karbus] && C[cvc67karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg67], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin68karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg68], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit68karbus] && C[cvc68karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg68], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);

    /* HD ingrepen */
    if (SD[ddummyhdkarin02]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd02], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit02] && C[cvchd02]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd02], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin03]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd03], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit03] && C[cvchd03]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd03], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin05]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd05], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit05] && C[cvchd05]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd05], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin08]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd08], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit08] && C[cvchd08]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd08], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin09]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd09], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit09] && C[cvchd09]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd09], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin11]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd11], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit11] && C[cvchd11]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd11], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin61]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd61], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit61] && C[cvchd61]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd61], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin62]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd62], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit62] && C[cvchd62]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd62], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin67]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd67], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit67] && C[cvchd67]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd67], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin68]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd68], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit68] && C[cvchd68]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd68], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
}
#endif

#ifdef PRIO_ADDFILE
    #include "123456prio.add"
#endif /* PRIO_ADDFILE */
