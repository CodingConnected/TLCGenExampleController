/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   12.1
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.8   16-08-2024   TLCGen      Release versie TLCGen
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
    #define PRIO_CHECK_WAGENNMR /* check op wagendienstnummer          */
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
int iKARInSTP03bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm03bus = 0;
int iKARInSTP05bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm05bus = 0;
int iKARInSTP08bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm08bus = 0;
int iKARInSTP09bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm09bus = 0;
int iKARInSTP11bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm11bus = 0;
int iKARInSTP61bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm61bus = 0;
int iKARInSTP62bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm62bus = 0;
int iKARInSTP67bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm67bus = 0;
int iKARInSTP68bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm68bus = 0;

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
    iFC_PRIOix[prioFC03bus] = fc03;
    iFC_PRIOix[prioFC03risov] = fc03;
    iFC_PRIOix[prioFC03risvrw] = fc03;
    iFC_PRIOix[prioFC05bus] = fc05;
    iFC_PRIOix[prioFC05risov] = fc05;
    iFC_PRIOix[prioFC05risvrw] = fc05;
    iFC_PRIOix[prioFC08bus] = fc08;
    iFC_PRIOix[prioFC08risov] = fc08;
    iFC_PRIOix[prioFC08risvrw] = fc08;
    iFC_PRIOix[prioFC09bus] = fc09;
    iFC_PRIOix[prioFC09risov] = fc09;
    iFC_PRIOix[prioFC09risvrw] = fc09;
    iFC_PRIOix[prioFC11bus] = fc11;
    iFC_PRIOix[prioFC11risov] = fc11;
    iFC_PRIOix[prioFC11risvrw] = fc11;
    iFC_PRIOix[prioFC22fiets] = fc22;
    iFC_PRIOix[prioFC28fiets] = fc28;
    iFC_PRIOix[prioFC61bus] = fc61;
    iFC_PRIOix[prioFC61risov] = fc61;
    iFC_PRIOix[prioFC61risvrw] = fc61;
    iFC_PRIOix[prioFC62bus] = fc62;
    iFC_PRIOix[prioFC62risov] = fc62;
    iFC_PRIOix[prioFC62risvrw] = fc62;
    iFC_PRIOix[prioFC67bus] = fc67;
    iFC_PRIOix[prioFC67risov] = fc67;
    iFC_PRIOix[prioFC67risvrw] = fc67;
    iFC_PRIOix[prioFC68bus] = fc68;
    iFC_PRIOix[prioFC68risov] = fc68;
    iFC_PRIOix[prioFC68risvrw] = fc68;
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
    iT_GBix[prioFC03bus] = tgb03bus;
    iT_GBix[prioFC03risov] = tgb03risov;
    iT_GBix[prioFC03risvrw] = tgb03risvrw;
    iT_GBix[prioFC05bus] = tgb05bus;
    iT_GBix[prioFC05risov] = tgb05risov;
    iT_GBix[prioFC05risvrw] = tgb05risvrw;
    iT_GBix[prioFC08bus] = tgb08bus;
    iT_GBix[prioFC08risov] = tgb08risov;
    iT_GBix[prioFC08risvrw] = tgb08risvrw;
    iT_GBix[prioFC09bus] = tgb09bus;
    iT_GBix[prioFC09risov] = tgb09risov;
    iT_GBix[prioFC09risvrw] = tgb09risvrw;
    iT_GBix[prioFC11bus] = tgb11bus;
    iT_GBix[prioFC11risov] = tgb11risov;
    iT_GBix[prioFC11risvrw] = tgb11risvrw;
    iT_GBix[prioFC22fiets] = tgb22fiets;
    iT_GBix[prioFC28fiets] = tgb28fiets;
    iT_GBix[prioFC61bus] = tgb61bus;
    iT_GBix[prioFC61risov] = tgb61risov;
    iT_GBix[prioFC61risvrw] = tgb61risvrw;
    iT_GBix[prioFC62bus] = tgb62bus;
    iT_GBix[prioFC62risov] = tgb62risov;
    iT_GBix[prioFC62risvrw] = tgb62risvrw;
    iT_GBix[prioFC67bus] = tgb67bus;
    iT_GBix[prioFC67risov] = tgb67risov;
    iT_GBix[prioFC67risvrw] = tgb67risvrw;
    iT_GBix[prioFC68bus] = tgb68bus;
    iT_GBix[prioFC68risov] = tgb68risov;
    iT_GBix[prioFC68risvrw] = tgb68risvrw;
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
    iH_PRIOix[prioFC03bus] = hprio03bus;
    iH_PRIOix[prioFC03risov] = hprio03risov;
    iH_PRIOix[prioFC03risvrw] = hprio03risvrw;
    iH_PRIOix[prioFC05bus] = hprio05bus;
    iH_PRIOix[prioFC05risov] = hprio05risov;
    iH_PRIOix[prioFC05risvrw] = hprio05risvrw;
    iH_PRIOix[prioFC08bus] = hprio08bus;
    iH_PRIOix[prioFC08risov] = hprio08risov;
    iH_PRIOix[prioFC08risvrw] = hprio08risvrw;
    iH_PRIOix[prioFC09bus] = hprio09bus;
    iH_PRIOix[prioFC09risov] = hprio09risov;
    iH_PRIOix[prioFC09risvrw] = hprio09risvrw;
    iH_PRIOix[prioFC11bus] = hprio11bus;
    iH_PRIOix[prioFC11risov] = hprio11risov;
    iH_PRIOix[prioFC11risvrw] = hprio11risvrw;
    iH_PRIOix[prioFC22fiets] = hprio22fiets;
    iH_PRIOix[prioFC28fiets] = hprio28fiets;
    iH_PRIOix[prioFC61bus] = hprio61bus;
    iH_PRIOix[prioFC61risov] = hprio61risov;
    iH_PRIOix[prioFC61risvrw] = hprio61risvrw;
    iH_PRIOix[prioFC62bus] = hprio62bus;
    iH_PRIOix[prioFC62risov] = hprio62risov;
    iH_PRIOix[prioFC62risvrw] = hprio62risvrw;
    iH_PRIOix[prioFC67bus] = hprio67bus;
    iH_PRIOix[prioFC67risov] = hprio67risov;
    iH_PRIOix[prioFC67risvrw] = hprio67risvrw;
    iH_PRIOix[prioFC68bus] = hprio68bus;
    iH_PRIOix[prioFC68risov] = hprio68risov;
    iH_PRIOix[prioFC68risvrw] = hprio68risvrw;
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
    iInstPrioriteitsNiveau[prioFC03bus] = PRM[prmprio03bus]/1000L;
    iInstPrioriteitsNiveau[prioFC03risov] = PRM[prmprio03risov]/1000L;
    iInstPrioriteitsNiveau[prioFC03risvrw] = PRM[prmprio03risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC05bus] = PRM[prmprio05bus]/1000L;
    iInstPrioriteitsNiveau[prioFC05risov] = PRM[prmprio05risov]/1000L;
    iInstPrioriteitsNiveau[prioFC05risvrw] = PRM[prmprio05risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC08bus] = PRM[prmprio08bus]/1000L;
    iInstPrioriteitsNiveau[prioFC08risov] = PRM[prmprio08risov]/1000L;
    iInstPrioriteitsNiveau[prioFC08risvrw] = PRM[prmprio08risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC09bus] = PRM[prmprio09bus]/1000L;
    iInstPrioriteitsNiveau[prioFC09risov] = PRM[prmprio09risov]/1000L;
    iInstPrioriteitsNiveau[prioFC09risvrw] = PRM[prmprio09risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC11bus] = PRM[prmprio11bus]/1000L;
    iInstPrioriteitsNiveau[prioFC11risov] = PRM[prmprio11risov]/1000L;
    iInstPrioriteitsNiveau[prioFC11risvrw] = PRM[prmprio11risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC22fiets] = PRM[prmprio22fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC28fiets] = PRM[prmprio28fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC61bus] = PRM[prmprio61bus]/1000L;
    iInstPrioriteitsNiveau[prioFC61risov] = PRM[prmprio61risov]/1000L;
    iInstPrioriteitsNiveau[prioFC61risvrw] = PRM[prmprio61risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC62bus] = PRM[prmprio62bus]/1000L;
    iInstPrioriteitsNiveau[prioFC62risov] = PRM[prmprio62risov]/1000L;
    iInstPrioriteitsNiveau[prioFC62risvrw] = PRM[prmprio62risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC67bus] = PRM[prmprio67bus]/1000L;
    iInstPrioriteitsNiveau[prioFC67risov] = PRM[prmprio67risov]/1000L;
    iInstPrioriteitsNiveau[prioFC67risvrw] = PRM[prmprio67risvrw]/1000L;
    iInstPrioriteitsNiveau[prioFC68bus] = PRM[prmprio68bus]/1000L;
    iInstPrioriteitsNiveau[prioFC68risov] = PRM[prmprio68risov]/1000L;
    iInstPrioriteitsNiveau[prioFC68risvrw] = PRM[prmprio68risvrw]/1000L;
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
    iInstPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmprio03bus);
    iInstPrioriteitsOpties[prioFC03risov] = BepaalPrioriteitsOpties(prmprio03risov);
    iInstPrioriteitsOpties[prioFC03risvrw] = BepaalPrioriteitsOpties(prmprio03risvrw);
    iInstPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmprio05bus);
    iInstPrioriteitsOpties[prioFC05risov] = BepaalPrioriteitsOpties(prmprio05risov);
    iInstPrioriteitsOpties[prioFC05risvrw] = BepaalPrioriteitsOpties(prmprio05risvrw);
    iInstPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmprio08bus);
    iInstPrioriteitsOpties[prioFC08risov] = BepaalPrioriteitsOpties(prmprio08risov);
    iInstPrioriteitsOpties[prioFC08risvrw] = BepaalPrioriteitsOpties(prmprio08risvrw);
    iInstPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmprio09bus);
    iInstPrioriteitsOpties[prioFC09risov] = BepaalPrioriteitsOpties(prmprio09risov);
    iInstPrioriteitsOpties[prioFC09risvrw] = BepaalPrioriteitsOpties(prmprio09risvrw);
    iInstPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmprio11bus);
    iInstPrioriteitsOpties[prioFC11risov] = BepaalPrioriteitsOpties(prmprio11risov);
    iInstPrioriteitsOpties[prioFC11risvrw] = BepaalPrioriteitsOpties(prmprio11risvrw);
    iInstPrioriteitsOpties[prioFC22fiets] = BepaalPrioriteitsOpties(prmprio22fiets);
    iInstPrioriteitsOpties[prioFC28fiets] = BepaalPrioriteitsOpties(prmprio28fiets);
    iInstPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmprio61bus);
    iInstPrioriteitsOpties[prioFC61risov] = BepaalPrioriteitsOpties(prmprio61risov);
    iInstPrioriteitsOpties[prioFC61risvrw] = BepaalPrioriteitsOpties(prmprio61risvrw);
    iInstPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmprio62bus);
    iInstPrioriteitsOpties[prioFC62risov] = BepaalPrioriteitsOpties(prmprio62risov);
    iInstPrioriteitsOpties[prioFC62risvrw] = BepaalPrioriteitsOpties(prmprio62risvrw);
    iInstPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmprio67bus);
    iInstPrioriteitsOpties[prioFC67risov] = BepaalPrioriteitsOpties(prmprio67risov);
    iInstPrioriteitsOpties[prioFC67risvrw] = BepaalPrioriteitsOpties(prmprio67risvrw);
    iInstPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmprio68bus);
    iInstPrioriteitsOpties[prioFC68risov] = BepaalPrioriteitsOpties(prmprio68risov);
    iInstPrioriteitsOpties[prioFC68risvrw] = BepaalPrioriteitsOpties(prmprio68risvrw);
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
    iGroenBewakingsTijd[prioFC03bus] = T_max[tgb03bus];
    iGroenBewakingsTijd[prioFC03risov] = T_max[tgb03risov];
    iGroenBewakingsTijd[prioFC03risvrw] = T_max[tgb03risvrw];
    iGroenBewakingsTijd[prioFC05bus] = T_max[tgb05bus];
    iGroenBewakingsTijd[prioFC05risov] = T_max[tgb05risov];
    iGroenBewakingsTijd[prioFC05risvrw] = T_max[tgb05risvrw];
    iGroenBewakingsTijd[prioFC08bus] = T_max[tgb08bus];
    iGroenBewakingsTijd[prioFC08risov] = T_max[tgb08risov];
    iGroenBewakingsTijd[prioFC08risvrw] = T_max[tgb08risvrw];
    iGroenBewakingsTijd[prioFC09bus] = T_max[tgb09bus];
    iGroenBewakingsTijd[prioFC09risov] = T_max[tgb09risov];
    iGroenBewakingsTijd[prioFC09risvrw] = T_max[tgb09risvrw];
    iGroenBewakingsTijd[prioFC11bus] = T_max[tgb11bus];
    iGroenBewakingsTijd[prioFC11risov] = T_max[tgb11risov];
    iGroenBewakingsTijd[prioFC11risvrw] = T_max[tgb11risvrw];
    iGroenBewakingsTijd[prioFC22fiets] = T_max[tgb22fiets];
    iGroenBewakingsTijd[prioFC28fiets] = T_max[tgb28fiets];
    iGroenBewakingsTijd[prioFC61bus] = T_max[tgb61bus];
    iGroenBewakingsTijd[prioFC61risov] = T_max[tgb61risov];
    iGroenBewakingsTijd[prioFC61risvrw] = T_max[tgb61risvrw];
    iGroenBewakingsTijd[prioFC62bus] = T_max[tgb62bus];
    iGroenBewakingsTijd[prioFC62risov] = T_max[tgb62risov];
    iGroenBewakingsTijd[prioFC62risvrw] = T_max[tgb62risvrw];
    iGroenBewakingsTijd[prioFC67bus] = T_max[tgb67bus];
    iGroenBewakingsTijd[prioFC67risov] = T_max[tgb67risov];
    iGroenBewakingsTijd[prioFC67risvrw] = T_max[tgb67risvrw];
    iGroenBewakingsTijd[prioFC68bus] = T_max[tgb68bus];
    iGroenBewakingsTijd[prioFC68risov] = T_max[tgb68risov];
    iGroenBewakingsTijd[prioFC68risvrw] = T_max[tgb68risvrw];
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
    iRTSOngehinderd[prioFC03bus] = PRM[prmrto03bus];
    iRTSOngehinderd[prioFC03risov] = PRM[prmrto03risov];
    iRTSOngehinderd[prioFC03risvrw] = PRM[prmrto03risvrw];
    iRTSOngehinderd[prioFC05bus] = PRM[prmrto05bus];
    iRTSOngehinderd[prioFC05risov] = PRM[prmrto05risov];
    iRTSOngehinderd[prioFC05risvrw] = PRM[prmrto05risvrw];
    iRTSOngehinderd[prioFC08bus] = PRM[prmrto08bus];
    iRTSOngehinderd[prioFC08risov] = PRM[prmrto08risov];
    iRTSOngehinderd[prioFC08risvrw] = PRM[prmrto08risvrw];
    iRTSOngehinderd[prioFC09bus] = PRM[prmrto09bus];
    iRTSOngehinderd[prioFC09risov] = PRM[prmrto09risov];
    iRTSOngehinderd[prioFC09risvrw] = PRM[prmrto09risvrw];
    iRTSOngehinderd[prioFC11bus] = PRM[prmrto11bus];
    iRTSOngehinderd[prioFC11risov] = PRM[prmrto11risov];
    iRTSOngehinderd[prioFC11risvrw] = PRM[prmrto11risvrw];
    iRTSOngehinderd[prioFC22fiets] = PRM[prmrto22fiets];
    iRTSOngehinderd[prioFC28fiets] = PRM[prmrto28fiets];
    iRTSOngehinderd[prioFC61bus] = PRM[prmrto61bus];
    iRTSOngehinderd[prioFC61risov] = PRM[prmrto61risov];
    iRTSOngehinderd[prioFC61risvrw] = PRM[prmrto61risvrw];
    iRTSOngehinderd[prioFC62bus] = PRM[prmrto62bus];
    iRTSOngehinderd[prioFC62risov] = PRM[prmrto62risov];
    iRTSOngehinderd[prioFC62risvrw] = PRM[prmrto62risvrw];
    iRTSOngehinderd[prioFC67bus] = PRM[prmrto67bus];
    iRTSOngehinderd[prioFC67risov] = PRM[prmrto67risov];
    iRTSOngehinderd[prioFC67risvrw] = PRM[prmrto67risvrw];
    iRTSOngehinderd[prioFC68bus] = PRM[prmrto68bus];
    iRTSOngehinderd[prioFC68risov] = PRM[prmrto68risov];
    iRTSOngehinderd[prioFC68risvrw] = PRM[prmrto68risvrw];
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
    iRTSBeperktGehinderd[prioFC03bus] = PRM[prmrtbg03bus];
    iRTSBeperktGehinderd[prioFC03risov] = PRM[prmrtbg03risov];
    iRTSBeperktGehinderd[prioFC03risvrw] = PRM[prmrtbg03risvrw];
    iRTSBeperktGehinderd[prioFC05bus] = PRM[prmrtbg05bus];
    iRTSBeperktGehinderd[prioFC05risov] = PRM[prmrtbg05risov];
    iRTSBeperktGehinderd[prioFC05risvrw] = PRM[prmrtbg05risvrw];
    iRTSBeperktGehinderd[prioFC08bus] = PRM[prmrtbg08bus];
    iRTSBeperktGehinderd[prioFC08risov] = PRM[prmrtbg08risov];
    iRTSBeperktGehinderd[prioFC08risvrw] = PRM[prmrtbg08risvrw];
    iRTSBeperktGehinderd[prioFC09bus] = PRM[prmrtbg09bus];
    iRTSBeperktGehinderd[prioFC09risov] = PRM[prmrtbg09risov];
    iRTSBeperktGehinderd[prioFC09risvrw] = PRM[prmrtbg09risvrw];
    iRTSBeperktGehinderd[prioFC11bus] = PRM[prmrtbg11bus];
    iRTSBeperktGehinderd[prioFC11risov] = PRM[prmrtbg11risov];
    iRTSBeperktGehinderd[prioFC11risvrw] = PRM[prmrtbg11risvrw];
    iRTSBeperktGehinderd[prioFC22fiets] = PRM[prmrtbg22fiets];
    iRTSBeperktGehinderd[prioFC28fiets] = PRM[prmrtbg28fiets];
    iRTSBeperktGehinderd[prioFC61bus] = PRM[prmrtbg61bus];
    iRTSBeperktGehinderd[prioFC61risov] = PRM[prmrtbg61risov];
    iRTSBeperktGehinderd[prioFC61risvrw] = PRM[prmrtbg61risvrw];
    iRTSBeperktGehinderd[prioFC62bus] = PRM[prmrtbg62bus];
    iRTSBeperktGehinderd[prioFC62risov] = PRM[prmrtbg62risov];
    iRTSBeperktGehinderd[prioFC62risvrw] = PRM[prmrtbg62risvrw];
    iRTSBeperktGehinderd[prioFC67bus] = PRM[prmrtbg67bus];
    iRTSBeperktGehinderd[prioFC67risov] = PRM[prmrtbg67risov];
    iRTSBeperktGehinderd[prioFC67risvrw] = PRM[prmrtbg67risvrw];
    iRTSBeperktGehinderd[prioFC68bus] = PRM[prmrtbg68bus];
    iRTSBeperktGehinderd[prioFC68risov] = PRM[prmrtbg68risov];
    iRTSBeperktGehinderd[prioFC68risvrw] = PRM[prmrtbg68risvrw];
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
    iRTSGehinderd[prioFC03bus] = PRM[prmrtg03bus];
    iRTSGehinderd[prioFC03risov] = PRM[prmrtg03risov];
    iRTSGehinderd[prioFC03risvrw] = PRM[prmrtg03risvrw];
    iRTSGehinderd[prioFC05bus] = PRM[prmrtg05bus];
    iRTSGehinderd[prioFC05risov] = PRM[prmrtg05risov];
    iRTSGehinderd[prioFC05risvrw] = PRM[prmrtg05risvrw];
    iRTSGehinderd[prioFC08bus] = PRM[prmrtg08bus];
    iRTSGehinderd[prioFC08risov] = PRM[prmrtg08risov];
    iRTSGehinderd[prioFC08risvrw] = PRM[prmrtg08risvrw];
    iRTSGehinderd[prioFC09bus] = PRM[prmrtg09bus];
    iRTSGehinderd[prioFC09risov] = PRM[prmrtg09risov];
    iRTSGehinderd[prioFC09risvrw] = PRM[prmrtg09risvrw];
    iRTSGehinderd[prioFC11bus] = PRM[prmrtg11bus];
    iRTSGehinderd[prioFC11risov] = PRM[prmrtg11risov];
    iRTSGehinderd[prioFC11risvrw] = PRM[prmrtg11risvrw];
    iRTSGehinderd[prioFC22fiets] = PRM[prmrtg22fiets];
    iRTSGehinderd[prioFC28fiets] = PRM[prmrtg28fiets];
    iRTSGehinderd[prioFC61bus] = PRM[prmrtg61bus];
    iRTSGehinderd[prioFC61risov] = PRM[prmrtg61risov];
    iRTSGehinderd[prioFC61risvrw] = PRM[prmrtg61risvrw];
    iRTSGehinderd[prioFC62bus] = PRM[prmrtg62bus];
    iRTSGehinderd[prioFC62risov] = PRM[prmrtg62risov];
    iRTSGehinderd[prioFC62risvrw] = PRM[prmrtg62risvrw];
    iRTSGehinderd[prioFC67bus] = PRM[prmrtg67bus];
    iRTSGehinderd[prioFC67risov] = PRM[prmrtg67risov];
    iRTSGehinderd[prioFC67risvrw] = PRM[prmrtg67risvrw];
    iRTSGehinderd[prioFC68bus] = PRM[prmrtg68bus];
    iRTSGehinderd[prioFC68risov] = PRM[prmrtg68risov];
    iRTSGehinderd[prioFC68risvrw] = PRM[prmrtg68risvrw];
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
    iOnderMaximum[prioFC03bus] = PRM[prmomx03bus];
    iOnderMaximum[prioFC03risov] = PRM[prmomx03risov];
    iOnderMaximum[prioFC03risvrw] = PRM[prmomx03risvrw];
    iOnderMaximum[prioFC05bus] = PRM[prmomx05bus];
    iOnderMaximum[prioFC05risov] = PRM[prmomx05risov];
    iOnderMaximum[prioFC05risvrw] = PRM[prmomx05risvrw];
    iOnderMaximum[prioFC08bus] = PRM[prmomx08bus];
    iOnderMaximum[prioFC08risov] = PRM[prmomx08risov];
    iOnderMaximum[prioFC08risvrw] = PRM[prmomx08risvrw];
    iOnderMaximum[prioFC09bus] = PRM[prmomx09bus];
    iOnderMaximum[prioFC09risov] = PRM[prmomx09risov];
    iOnderMaximum[prioFC09risvrw] = PRM[prmomx09risvrw];
    iOnderMaximum[prioFC11bus] = PRM[prmomx11bus];
    iOnderMaximum[prioFC11risov] = PRM[prmomx11risov];
    iOnderMaximum[prioFC11risvrw] = PRM[prmomx11risvrw];
    iOnderMaximum[prioFC22fiets] = PRM[prmomx22fiets];
    iOnderMaximum[prioFC28fiets] = PRM[prmomx28fiets];
    iOnderMaximum[prioFC61bus] = PRM[prmomx61bus];
    iOnderMaximum[prioFC61risov] = PRM[prmomx61risov];
    iOnderMaximum[prioFC61risvrw] = PRM[prmomx61risvrw];
    iOnderMaximum[prioFC62bus] = PRM[prmomx62bus];
    iOnderMaximum[prioFC62risov] = PRM[prmomx62risov];
    iOnderMaximum[prioFC62risvrw] = PRM[prmomx62risvrw];
    iOnderMaximum[prioFC67bus] = PRM[prmomx67bus];
    iOnderMaximum[prioFC67risov] = PRM[prmomx67risov];
    iOnderMaximum[prioFC67risvrw] = PRM[prmomx67risvrw];
    iOnderMaximum[prioFC68bus] = PRM[prmomx68bus];
    iOnderMaximum[prioFC68risov] = PRM[prmomx68risov];
    iOnderMaximum[prioFC68risvrw] = PRM[prmomx68risvrw];
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
    iBlokkeringsTijd[prioFC03bus] = T_max[tblk03bus];
    iBlokkeringsTijd[prioFC03risov] = T_max[tblk03risov];
    iBlokkeringsTijd[prioFC03risvrw] = T_max[tblk03risvrw];
    iBlokkeringsTijd[prioFC05bus] = T_max[tblk05bus];
    iBlokkeringsTijd[prioFC05risov] = T_max[tblk05risov];
    iBlokkeringsTijd[prioFC05risvrw] = T_max[tblk05risvrw];
    iBlokkeringsTijd[prioFC08bus] = T_max[tblk08bus];
    iBlokkeringsTijd[prioFC08risov] = T_max[tblk08risov];
    iBlokkeringsTijd[prioFC08risvrw] = T_max[tblk08risvrw];
    iBlokkeringsTijd[prioFC09bus] = T_max[tblk09bus];
    iBlokkeringsTijd[prioFC09risov] = T_max[tblk09risov];
    iBlokkeringsTijd[prioFC09risvrw] = T_max[tblk09risvrw];
    iBlokkeringsTijd[prioFC11bus] = T_max[tblk11bus];
    iBlokkeringsTijd[prioFC11risov] = T_max[tblk11risov];
    iBlokkeringsTijd[prioFC11risvrw] = T_max[tblk11risvrw];
    iBlokkeringsTijd[prioFC22fiets] = T_max[tblk22fiets];
    iBlokkeringsTijd[prioFC28fiets] = T_max[tblk28fiets];
    iBlokkeringsTijd[prioFC61bus] = T_max[tblk61bus];
    iBlokkeringsTijd[prioFC61risov] = T_max[tblk61risov];
    iBlokkeringsTijd[prioFC61risvrw] = T_max[tblk61risvrw];
    iBlokkeringsTijd[prioFC62bus] = T_max[tblk62bus];
    iBlokkeringsTijd[prioFC62risov] = T_max[tblk62risov];
    iBlokkeringsTijd[prioFC62risvrw] = T_max[tblk62risvrw];
    iBlokkeringsTijd[prioFC67bus] = T_max[tblk67bus];
    iBlokkeringsTijd[prioFC67risov] = T_max[tblk67risov];
    iBlokkeringsTijd[prioFC67risvrw] = T_max[tblk67risvrw];
    iBlokkeringsTijd[prioFC68bus] = T_max[tblk68bus];
    iBlokkeringsTijd[prioFC68risov] = T_max[tblk68risov];
    iBlokkeringsTijd[prioFC68risvrw] = T_max[tblk68risvrw];
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
    iSelDetFoutNaGB[prioFC02karbus] = SCH[schupinagb02karbus];
    iSelDetFoutNaGB[prioFC02risov] = SCH[schupinagb02risov];
    iSelDetFoutNaGB[prioFC02risvrw] = SCH[schupinagb02risvrw];
    iSelDetFoutNaGB[prioFC03bus] = SCH[schupinagb03bus];
    iSelDetFoutNaGB[prioFC03risov] = SCH[schupinagb03risov];
    iSelDetFoutNaGB[prioFC03risvrw] = SCH[schupinagb03risvrw];
    iSelDetFoutNaGB[prioFC05bus] = SCH[schupinagb05bus];
    iSelDetFoutNaGB[prioFC05risov] = SCH[schupinagb05risov];
    iSelDetFoutNaGB[prioFC05risvrw] = SCH[schupinagb05risvrw];
    iSelDetFoutNaGB[prioFC08bus] = SCH[schupinagb08bus];
    iSelDetFoutNaGB[prioFC08risov] = SCH[schupinagb08risov];
    iSelDetFoutNaGB[prioFC08risvrw] = SCH[schupinagb08risvrw];
    iSelDetFoutNaGB[prioFC09bus] = SCH[schupinagb09bus];
    iSelDetFoutNaGB[prioFC09risov] = SCH[schupinagb09risov];
    iSelDetFoutNaGB[prioFC09risvrw] = SCH[schupinagb09risvrw];
    iSelDetFoutNaGB[prioFC11bus] = SCH[schupinagb11bus];
    iSelDetFoutNaGB[prioFC11risov] = SCH[schupinagb11risov];
    iSelDetFoutNaGB[prioFC11risvrw] = SCH[schupinagb11risvrw];
    iSelDetFoutNaGB[prioFC22fiets] = SCH[schupinagb22fiets];
    iSelDetFoutNaGB[prioFC28fiets] = SCH[schupinagb28fiets];
    iSelDetFoutNaGB[prioFC61bus] = SCH[schupinagb61bus];
    iSelDetFoutNaGB[prioFC61risov] = SCH[schupinagb61risov];
    iSelDetFoutNaGB[prioFC61risvrw] = SCH[schupinagb61risvrw];
    iSelDetFoutNaGB[prioFC62bus] = SCH[schupinagb62bus];
    iSelDetFoutNaGB[prioFC62risov] = SCH[schupinagb62risov];
    iSelDetFoutNaGB[prioFC62risvrw] = SCH[schupinagb62risvrw];
    iSelDetFoutNaGB[prioFC67bus] = SCH[schupinagb67bus];
    iSelDetFoutNaGB[prioFC67risov] = SCH[schupinagb67risov];
    iSelDetFoutNaGB[prioFC67risvrw] = SCH[schupinagb67risvrw];
    iSelDetFoutNaGB[prioFC68bus] = SCH[schupinagb68bus];
    iSelDetFoutNaGB[prioFC68risov] = SCH[schupinagb68risov];
    iSelDetFoutNaGB[prioFC68risvrw] = SCH[schupinagb68risvrw];
    iSelDetFoutNaGB[hdFC02] = SCH[schupinagbhd02];
    iSelDetFoutNaGB[hdFC03] = SCH[schupinagbhd03];
    iSelDetFoutNaGB[hdFC05] = SCH[schupinagbhd05];
    iSelDetFoutNaGB[hdFC08] = SCH[schupinagbhd08];
    iSelDetFoutNaGB[hdFC09] = SCH[schupinagbhd09];
    iSelDetFoutNaGB[hdFC11] = SCH[schupinagbhd11];
    iSelDetFoutNaGB[hdFC61] = SCH[schupinagbhd61];
    iSelDetFoutNaGB[hdFC62] = SCH[schupinagbhd62];
    iSelDetFoutNaGB[hdFC67] = SCH[schupinagbhd67];
    iSelDetFoutNaGB[hdFC68] = SCH[schupinagbhd68];

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

    PrioRijTijdScenario(prioFC03bus, d03_1, d03_2, tbtovg03bus);

    PrioRijTijdScenario(prioFC03risov, d03_1, d03_2, tbtovg03risov);

    PrioRijTijdScenario(prioFC03risvrw, d03_1, d03_2, tbtovg03risvrw);

    PrioRijTijdScenario(prioFC05bus, d05_1, d05_2, tbtovg05bus);

    PrioRijTijdScenario(prioFC05risov, d05_1, d05_2, tbtovg05risov);

    PrioRijTijdScenario(prioFC05risvrw, d05_1, d05_2, tbtovg05risvrw);

    PrioRijTijdScenario(prioFC08bus, d08_1a, d08_2a, tbtovg08bus);
    PrioRijTijdScenario(prioFC08bus, d08_1b, d08_2b, tbtovg08bus);
    PrioRijTijdScenario(prioFC08bus, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08bus, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC08risov, d08_1a, d08_2a, tbtovg08risov);
    PrioRijTijdScenario(prioFC08risov, d08_1b, d08_2b, tbtovg08risov);
    PrioRijTijdScenario(prioFC08risov, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08risov, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC08risvrw, d08_1a, d08_2a, tbtovg08risvrw);
    PrioRijTijdScenario(prioFC08risvrw, d08_1b, d08_2b, tbtovg08risvrw);
    PrioRijTijdScenario(prioFC08risvrw, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08risvrw, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC09bus, d09_1, d09_2, tbtovg09bus);

    PrioRijTijdScenario(prioFC09risov, d09_1, d09_2, tbtovg09risov);

    PrioRijTijdScenario(prioFC09risvrw, d09_1, d09_2, tbtovg09risvrw);

    PrioRijTijdScenario(prioFC11bus, d11_1, d11_2, tbtovg11bus);
    PrioRijTijdScenario(prioFC11bus, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11risov, d11_1, d11_2, tbtovg11risov);
    PrioRijTijdScenario(prioFC11risov, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC11risvrw, d11_1, d11_2, tbtovg11risvrw);
    PrioRijTijdScenario(prioFC11risvrw, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC22fiets, d22_1, NG, NG);

    PrioRijTijdScenario(prioFC28fiets, d28_1, NG, NG);

    PrioRijTijdScenario(prioFC61bus, d61_1, d61_2, tbtovg61bus);

    PrioRijTijdScenario(prioFC61risov, d61_1, d61_2, tbtovg61risov);

    PrioRijTijdScenario(prioFC61risvrw, d61_1, d61_2, tbtovg61risvrw);

    PrioRijTijdScenario(prioFC62bus, d62_1a, d62_2a, tbtovg62bus);
    PrioRijTijdScenario(prioFC62bus, d62_1b, d62_2b, tbtovg62bus);

    PrioRijTijdScenario(prioFC62risov, d62_1a, d62_2a, tbtovg62risov);
    PrioRijTijdScenario(prioFC62risov, d62_1b, d62_2b, tbtovg62risov);

    PrioRijTijdScenario(prioFC62risvrw, d62_1a, d62_2a, tbtovg62risvrw);
    PrioRijTijdScenario(prioFC62risvrw, d62_1b, d62_2b, tbtovg62risvrw);

    PrioRijTijdScenario(prioFC67bus, d67_1, d67_2, tbtovg67bus);

    PrioRijTijdScenario(prioFC67risov, d67_1, d67_2, tbtovg67risov);

    PrioRijTijdScenario(prioFC67risvrw, d67_1, d67_2, tbtovg67risvrw);

    PrioRijTijdScenario(prioFC68bus, d68_1a, d68_2a, tbtovg68bus);
    PrioRijTijdScenario(prioFC68bus, d68_1b, d68_2b, tbtovg68bus);

    PrioRijTijdScenario(prioFC68risov, d68_1a, d68_2a, tbtovg68risov);
    PrioRijTijdScenario(prioFC68risov, d68_1b, d68_2b, tbtovg68risov);

    PrioRijTijdScenario(prioFC68risvrw, d68_1a, d68_2a, tbtovg68risvrw);
    PrioRijTijdScenario(prioFC68risvrw, d68_1b, d68_2b, tbtovg68risvrw);

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
    if ((P[fc03] & BIT11) && C[cvc03bus] && (iRijTimer[prioFC03bus] < iRijTijd[prioFC03bus])) iRijTijd[prioFC03bus] = 0;
    if ((P[fc03] & BIT11) && C[cvc03risov] && (iRijTimer[prioFC03risov] < iRijTijd[prioFC03risov])) iRijTijd[prioFC03risov] = 0;
    if ((P[fc03] & BIT11) && C[cvc03risvrw] && (iRijTimer[prioFC03risvrw] < iRijTijd[prioFC03risvrw])) iRijTijd[prioFC03risvrw] = 0;
    if ((P[fc05] & BIT11) && C[cvc05bus] && (iRijTimer[prioFC05bus] < iRijTijd[prioFC05bus])) iRijTijd[prioFC05bus] = 0;
    if ((P[fc05] & BIT11) && C[cvc05risov] && (iRijTimer[prioFC05risov] < iRijTijd[prioFC05risov])) iRijTijd[prioFC05risov] = 0;
    if ((P[fc05] & BIT11) && C[cvc05risvrw] && (iRijTimer[prioFC05risvrw] < iRijTijd[prioFC05risvrw])) iRijTijd[prioFC05risvrw] = 0;
    if ((P[fc08] & BIT11) && C[cvc08bus] && (iRijTimer[prioFC08bus] < iRijTijd[prioFC08bus])) iRijTijd[prioFC08bus] = 0;
    if ((P[fc08] & BIT11) && C[cvc08risov] && (iRijTimer[prioFC08risov] < iRijTijd[prioFC08risov])) iRijTijd[prioFC08risov] = 0;
    if ((P[fc08] & BIT11) && C[cvc08risvrw] && (iRijTimer[prioFC08risvrw] < iRijTijd[prioFC08risvrw])) iRijTijd[prioFC08risvrw] = 0;
    if ((P[fc09] & BIT11) && C[cvc09bus] && (iRijTimer[prioFC09bus] < iRijTijd[prioFC09bus])) iRijTijd[prioFC09bus] = 0;
    if ((P[fc09] & BIT11) && C[cvc09risov] && (iRijTimer[prioFC09risov] < iRijTijd[prioFC09risov])) iRijTijd[prioFC09risov] = 0;
    if ((P[fc09] & BIT11) && C[cvc09risvrw] && (iRijTimer[prioFC09risvrw] < iRijTijd[prioFC09risvrw])) iRijTijd[prioFC09risvrw] = 0;
    if ((P[fc11] & BIT11) && C[cvc11bus] && (iRijTimer[prioFC11bus] < iRijTijd[prioFC11bus])) iRijTijd[prioFC11bus] = 0;
    if ((P[fc11] & BIT11) && C[cvc11risov] && (iRijTimer[prioFC11risov] < iRijTijd[prioFC11risov])) iRijTijd[prioFC11risov] = 0;
    if ((P[fc11] & BIT11) && C[cvc11risvrw] && (iRijTimer[prioFC11risvrw] < iRijTijd[prioFC11risvrw])) iRijTijd[prioFC11risvrw] = 0;
    if ((P[fc22] & BIT11) && C[cvc22fiets] && (iRijTimer[prioFC22fiets] < iRijTijd[prioFC22fiets])) iRijTijd[prioFC22fiets] = 0;
    if ((P[fc28] & BIT11) && C[cvc28fiets] && (iRijTimer[prioFC28fiets] < iRijTijd[prioFC28fiets])) iRijTijd[prioFC28fiets] = 0;
    if ((P[fc61] & BIT11) && C[cvc61bus] && (iRijTimer[prioFC61bus] < iRijTijd[prioFC61bus])) iRijTijd[prioFC61bus] = 0;
    if ((P[fc61] & BIT11) && C[cvc61risov] && (iRijTimer[prioFC61risov] < iRijTijd[prioFC61risov])) iRijTijd[prioFC61risov] = 0;
    if ((P[fc61] & BIT11) && C[cvc61risvrw] && (iRijTimer[prioFC61risvrw] < iRijTijd[prioFC61risvrw])) iRijTijd[prioFC61risvrw] = 0;
    if ((P[fc62] & BIT11) && C[cvc62bus] && (iRijTimer[prioFC62bus] < iRijTijd[prioFC62bus])) iRijTijd[prioFC62bus] = 0;
    if ((P[fc62] & BIT11) && C[cvc62risov] && (iRijTimer[prioFC62risov] < iRijTijd[prioFC62risov])) iRijTijd[prioFC62risov] = 0;
    if ((P[fc62] & BIT11) && C[cvc62risvrw] && (iRijTimer[prioFC62risvrw] < iRijTijd[prioFC62risvrw])) iRijTijd[prioFC62risvrw] = 0;
    if ((P[fc67] & BIT11) && C[cvc67bus] && (iRijTimer[prioFC67bus] < iRijTijd[prioFC67bus])) iRijTijd[prioFC67bus] = 0;
    if ((P[fc67] & BIT11) && C[cvc67risov] && (iRijTimer[prioFC67risov] < iRijTijd[prioFC67risov])) iRijTijd[prioFC67risov] = 0;
    if ((P[fc67] & BIT11) && C[cvc67risvrw] && (iRijTimer[prioFC67risvrw] < iRijTijd[prioFC67risvrw])) iRijTijd[prioFC67risvrw] = 0;
    if ((P[fc68] & BIT11) && C[cvc68bus] && (iRijTimer[prioFC68bus] < iRijTijd[prioFC68bus])) iRijTijd[prioFC68bus] = 0;
    if ((P[fc68] & BIT11) && C[cvc68risov] && (iRijTimer[prioFC68risov] < iRijTijd[prioFC68risov])) iRijTijd[prioFC68risov] = 0;
    if ((P[fc68] & BIT11) && C[cvc68risvrw] && (iRijTimer[prioFC68risvrw] < iRijTijd[prioFC68risvrw])) iRijTijd[prioFC68risvrw] = 0;
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

    /* Pririteit-inmeldingen */
    PrioInmelden(prioFC02karbus, SH[hprioin02karbus], iInstPrioriteitsNiveau[prioFC02karbus], iInstPrioriteitsOpties[prioFC02karbus], 0, 0);
    PrioInmelden(prioFC02risov, SH[hprioin02risov], iInstPrioriteitsNiveau[prioFC02risov], iInstPrioriteitsOpties[prioFC02risov], 0, 0);
    PrioInmelden(prioFC02risvrw, SH[hprioin02risvrw], iInstPrioriteitsNiveau[prioFC02risvrw], iInstPrioriteitsOpties[prioFC02risvrw], 0, 0);
    PrioInmelden(prioFC03bus, SH[hprioin03bus], iInstPrioriteitsNiveau[prioFC03bus], iInstPrioriteitsOpties[prioFC03bus], 0, 0);
    PrioInmelden(prioFC03risov, SH[hprioin03risov], iInstPrioriteitsNiveau[prioFC03risov], iInstPrioriteitsOpties[prioFC03risov], 0, 0);
    PrioInmelden(prioFC03risvrw, SH[hprioin03risvrw], iInstPrioriteitsNiveau[prioFC03risvrw], iInstPrioriteitsOpties[prioFC03risvrw], 0, 0);
    PrioInmelden(prioFC05bus, SH[hprioin05bus], iInstPrioriteitsNiveau[prioFC05bus], iInstPrioriteitsOpties[prioFC05bus], 0, 0);
    PrioInmelden(prioFC05risov, SH[hprioin05risov], iInstPrioriteitsNiveau[prioFC05risov], iInstPrioriteitsOpties[prioFC05risov], 0, 0);
    PrioInmelden(prioFC05risvrw, SH[hprioin05risvrw], iInstPrioriteitsNiveau[prioFC05risvrw], iInstPrioriteitsOpties[prioFC05risvrw], 0, 0);
    PrioInmelden(prioFC08bus, SH[hprioin08bus], iInstPrioriteitsNiveau[prioFC08bus], iInstPrioriteitsOpties[prioFC08bus], 0, 0);
    PrioInmelden(prioFC08risov, SH[hprioin08risov], iInstPrioriteitsNiveau[prioFC08risov], iInstPrioriteitsOpties[prioFC08risov], 0, 0);
    PrioInmelden(prioFC08risvrw, SH[hprioin08risvrw], iInstPrioriteitsNiveau[prioFC08risvrw], iInstPrioriteitsOpties[prioFC08risvrw], 0, 0);
    PrioInmelden(prioFC09bus, SH[hprioin09bus], iInstPrioriteitsNiveau[prioFC09bus], iInstPrioriteitsOpties[prioFC09bus], 0, 0);
    PrioInmelden(prioFC09risov, SH[hprioin09risov], iInstPrioriteitsNiveau[prioFC09risov], iInstPrioriteitsOpties[prioFC09risov], 0, 0);
    PrioInmelden(prioFC09risvrw, SH[hprioin09risvrw], iInstPrioriteitsNiveau[prioFC09risvrw], iInstPrioriteitsOpties[prioFC09risvrw], 0, 0);
    PrioInmelden(prioFC11bus, SH[hprioin11bus], iInstPrioriteitsNiveau[prioFC11bus], iInstPrioriteitsOpties[prioFC11bus], 0, 0);
    PrioInmelden(prioFC11risov, SH[hprioin11risov], iInstPrioriteitsNiveau[prioFC11risov], iInstPrioriteitsOpties[prioFC11risov], 0, 0);
    PrioInmelden(prioFC11risvrw, SH[hprioin11risvrw], iInstPrioriteitsNiveau[prioFC11risvrw], iInstPrioriteitsOpties[prioFC11risvrw], 0, 0);
    PrioInmelden(prioFC22fiets, SH[hprioin22fiets], iInstPrioriteitsNiveau[prioFC22fiets], iInstPrioriteitsOpties[prioFC22fiets], 0, 0);
    PrioInmelden(prioFC28fiets, SH[hprioin28fiets], iInstPrioriteitsNiveau[prioFC28fiets], iInstPrioriteitsOpties[prioFC28fiets], 0, 0);
    PrioInmelden(prioFC61bus, SH[hprioin61bus], iInstPrioriteitsNiveau[prioFC61bus], iInstPrioriteitsOpties[prioFC61bus], 0, 0);
    PrioInmelden(prioFC61risov, SH[hprioin61risov], iInstPrioriteitsNiveau[prioFC61risov], iInstPrioriteitsOpties[prioFC61risov], 0, 0);
    PrioInmelden(prioFC61risvrw, SH[hprioin61risvrw], iInstPrioriteitsNiveau[prioFC61risvrw], iInstPrioriteitsOpties[prioFC61risvrw], 0, 0);
    PrioInmelden(prioFC62bus, SH[hprioin62bus], iInstPrioriteitsNiveau[prioFC62bus], iInstPrioriteitsOpties[prioFC62bus], 0, 0);
    PrioInmelden(prioFC62risov, SH[hprioin62risov], iInstPrioriteitsNiveau[prioFC62risov], iInstPrioriteitsOpties[prioFC62risov], 0, 0);
    PrioInmelden(prioFC62risvrw, SH[hprioin62risvrw], iInstPrioriteitsNiveau[prioFC62risvrw], iInstPrioriteitsOpties[prioFC62risvrw], 0, 0);
    PrioInmelden(prioFC67bus, SH[hprioin67bus], iInstPrioriteitsNiveau[prioFC67bus], iInstPrioriteitsOpties[prioFC67bus], 0, 0);
    PrioInmelden(prioFC67risov, SH[hprioin67risov], iInstPrioriteitsNiveau[prioFC67risov], iInstPrioriteitsOpties[prioFC67risov], 0, 0);
    PrioInmelden(prioFC67risvrw, SH[hprioin67risvrw], iInstPrioriteitsNiveau[prioFC67risvrw], iInstPrioriteitsOpties[prioFC67risvrw], 0, 0);
    PrioInmelden(prioFC68bus, SH[hprioin68bus], iInstPrioriteitsNiveau[prioFC68bus], iInstPrioriteitsOpties[prioFC68bus], 0, 0);
    PrioInmelden(prioFC68risov, SH[hprioin68risov], iInstPrioriteitsNiveau[prioFC68risov], iInstPrioriteitsOpties[prioFC68risov], 0, 0);
    PrioInmelden(prioFC68risvrw, SH[hprioin68risvrw], iInstPrioriteitsNiveau[prioFC68risvrw], iInstPrioriteitsOpties[prioFC68risvrw], 0, 0);

    /* Pririteit-uitmeldingen */
    PrioUitmelden(prioFC02karbus, SH[hpriouit02karbus]);
    PrioUitmelden(prioFC02risov, SH[hpriouit02risov]);
    PrioUitmelden(prioFC02risvrw, SH[hpriouit02risvrw]);
    PrioUitmelden(prioFC03bus, SH[hpriouit03bus]);
    PrioUitmelden(prioFC03risov, SH[hpriouit03risov]);
    PrioUitmelden(prioFC03risvrw, SH[hpriouit03risvrw]);
    PrioUitmelden(prioFC05bus, SH[hpriouit05bus]);
    PrioUitmelden(prioFC05risov, SH[hpriouit05risov]);
    PrioUitmelden(prioFC05risvrw, SH[hpriouit05risvrw]);
    PrioUitmelden(prioFC08bus, SH[hpriouit08bus]);
    PrioUitmelden(prioFC08risov, SH[hpriouit08risov]);
    PrioUitmelden(prioFC08risvrw, SH[hpriouit08risvrw]);
    PrioUitmelden(prioFC09bus, SH[hpriouit09bus]);
    PrioUitmelden(prioFC09risov, SH[hpriouit09risov]);
    PrioUitmelden(prioFC09risvrw, SH[hpriouit09risvrw]);
    PrioUitmelden(prioFC11bus, SH[hpriouit11bus]);
    PrioUitmelden(prioFC11risov, SH[hpriouit11risov]);
    PrioUitmelden(prioFC11risvrw, SH[hpriouit11risvrw]);
    PrioUitmelden(prioFC22fiets, SH[hpriouit22fiets]);
    PrioUitmelden(prioFC28fiets, SH[hpriouit28fiets]);
    PrioUitmelden(prioFC61bus, SH[hpriouit61bus]);
    PrioUitmelden(prioFC61risov, SH[hpriouit61risov]);
    PrioUitmelden(prioFC61risvrw, SH[hpriouit61risvrw]);
    PrioUitmelden(prioFC62bus, SH[hpriouit62bus]);
    PrioUitmelden(prioFC62risov, SH[hpriouit62risov]);
    PrioUitmelden(prioFC62risvrw, SH[hpriouit62risvrw]);
    PrioUitmelden(prioFC67bus, SH[hpriouit67bus]);
    PrioUitmelden(prioFC67risov, SH[hpriouit67risov]);
    PrioUitmelden(prioFC67risvrw, SH[hpriouit67risvrw]);
    PrioUitmelden(prioFC68bus, SH[hpriouit68bus]);
    PrioUitmelden(prioFC68risov, SH[hpriouit68risov]);
    PrioUitmelden(prioFC68risvrw, SH[hpriouit68risvrw]);

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

    /* Inmelding fc03 type Bus */
    IH[hprioin03bus] = IH[hprioin03buskar] = FALSE;
    if (SCH[schprioin03buskar])
    {
        IH[hprioin03buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat03bus], TRUE, PRM[prmkarsg03],TRUE, CIF_DSIN, WDNST_check_in(fc03));
    }
    IH[hprioin03bus] = IH[hprioin03buskar];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03bus] = IH[hpriouit03buskar] = FALSE;
    if (SCH[schpriouit03buskar])
    {
        IH[hpriouit03buskar] = DSIMeldingPRIO_V2(fc03, prioFC03bus, 0, PRM[prmvtgcat03bus], TRUE, PRM[prmkarsg03],TRUE, CIF_DSUIT, WDNST_check_uit(fc03));
    }
    IH[hpriouit03bus] = IH[hpriouit03buskar];

    /* Inmelding fc03 type Bus */
    IH[hprioin03risov] = IH[hprioin03risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin03risovris])
    {
        IH[hprioin03risovris] = RT[tprioin03risovris] = 
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03risov], SYSTEM_ITF1, PRM[prmrislaneid03risov_1], PRM[prmrisstationtype03risov], PRM[prmrisstart03risov], PRM[prmrisend03risov], PRM[prmrisrole03risov], PRM[prmrissubrole03risov], PRM[prmrisimportance03risov], PRM[prmriseta03risov], prioFC03risov);
        if (IH[hprioin03risovris]) iPrioriteitNooitAfkappen[prioFC03risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin03risov] = IH[hprioin03risovris];

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
        IH[hprioin03risvrwris] = RT[tprioin03risvrwris] = 
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03risvrw], SYSTEM_ITF1, PRM[prmrislaneid03risvrw_1], PRM[prmrisstationtype03risvrw], PRM[prmrisstart03risvrw], PRM[prmrisend03risvrw], PRM[prmrisrole03risvrw], PRM[prmrissubrole03risvrw], PRM[prmrisimportance03risvrw], PRM[prmriseta03risvrw], prioFC03risvrw);
        if (IH[hprioin03risvrwris]) iPrioriteitNooitAfkappen[prioFC03risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin03risvrw] = IH[hprioin03risvrwris];

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

    /* Inmelding fc05 type Bus */
    IH[hprioin05bus] = IH[hprioin05buskar] = FALSE;
    if (SCH[schprioin05buskar])
    {
        IH[hprioin05buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat05bus], TRUE, PRM[prmkarsg05],TRUE, CIF_DSIN, WDNST_check_in(fc05));
    }
    IH[hprioin05bus] = IH[hprioin05buskar];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05bus] = IH[hpriouit05buskar] = FALSE;
    if (SCH[schpriouit05buskar])
    {
        IH[hpriouit05buskar] = DSIMeldingPRIO_V2(fc05, prioFC05bus, 0, PRM[prmvtgcat05bus], TRUE, PRM[prmkarsg05],TRUE, CIF_DSUIT, WDNST_check_uit(fc05));
    }
    IH[hpriouit05bus] = IH[hpriouit05buskar];

    /* Inmelding fc05 type Bus */
    IH[hprioin05risov] = IH[hprioin05risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin05risovris])
    {
        IH[hprioin05risovris] = RT[tprioin05risovris] = 
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05risov], SYSTEM_ITF1, PRM[prmrislaneid05risov_1], PRM[prmrisstationtype05risov], PRM[prmrisstart05risov], PRM[prmrisend05risov], PRM[prmrisrole05risov], PRM[prmrissubrole05risov], PRM[prmrisimportance05risov], PRM[prmriseta05risov], prioFC05risov);
        if (IH[hprioin05risovris]) iPrioriteitNooitAfkappen[prioFC05risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin05risov] = IH[hprioin05risovris];

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
        IH[hprioin05risvrwris] = RT[tprioin05risvrwris] = 
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05risvrw], SYSTEM_ITF1, PRM[prmrislaneid05risvrw_1], PRM[prmrisstationtype05risvrw], PRM[prmrisstart05risvrw], PRM[prmrisend05risvrw], PRM[prmrisrole05risvrw], PRM[prmrissubrole05risvrw], PRM[prmrisimportance05risvrw], PRM[prmriseta05risvrw], prioFC05risvrw);
        if (IH[hprioin05risvrwris]) iPrioriteitNooitAfkappen[prioFC05risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin05risvrw] = IH[hprioin05risvrwris];

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

    /* Inmelding fc08 type Bus */
    IH[hprioin08bus] = IH[hprioin08buskar] = FALSE;
    if (SCH[schprioin08buskar])
    {
        IH[hprioin08buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat08bus], TRUE, PRM[prmkarsg08],TRUE, CIF_DSIN, WDNST_check_in(fc08));
    }
    IH[hprioin08bus] = IH[hprioin08buskar];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08bus] = IH[hpriouit08buskar] = FALSE;
    if (SCH[schpriouit08buskar])
    {
        IH[hpriouit08buskar] = DSIMeldingPRIO_V2(fc08, prioFC08bus, 0, PRM[prmvtgcat08bus], TRUE, PRM[prmkarsg08],TRUE, CIF_DSUIT, WDNST_check_uit(fc08));
    }
    IH[hpriouit08bus] = IH[hpriouit08buskar];

    /* Inmelding fc08 type Bus */
    IH[hprioin08risov] = IH[hprioin08risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin08risovris])
    {
        IH[hprioin08risovris] = RT[tprioin08risovris] = 
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risov], SYSTEM_ITF1, PRM[prmrislaneid08risov_1], PRM[prmrisstationtype08risov], PRM[prmrisstart08risov], PRM[prmrisend08risov], PRM[prmrisrole08risov], PRM[prmrissubrole08risov], PRM[prmrisimportance08risov], PRM[prmriseta08risov], prioFC08risov) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risov], SYSTEM_ITF1, PRM[prmrislaneid08risov_2], PRM[prmrisstationtype08risov], PRM[prmrisstart08risov], PRM[prmrisend08risov], PRM[prmrisrole08risov], PRM[prmrissubrole08risov], PRM[prmrisimportance08risov], PRM[prmriseta08risov], prioFC08risov);
        if (IH[hprioin08risovris]) iPrioriteitNooitAfkappen[prioFC08risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin08risov] = IH[hprioin08risovris];

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
        IH[hprioin08risvrwris] = RT[tprioin08risvrwris] = 
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risvrw], SYSTEM_ITF1, PRM[prmrislaneid08risvrw_1], PRM[prmrisstationtype08risvrw], PRM[prmrisstart08risvrw], PRM[prmrisend08risvrw], PRM[prmrisrole08risvrw], PRM[prmrissubrole08risvrw], PRM[prmrisimportance08risvrw], PRM[prmriseta08risvrw], prioFC08risvrw) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08risvrw], SYSTEM_ITF1, PRM[prmrislaneid08risvrw_2], PRM[prmrisstationtype08risvrw], PRM[prmrisstart08risvrw], PRM[prmrisend08risvrw], PRM[prmrisrole08risvrw], PRM[prmrissubrole08risvrw], PRM[prmrisimportance08risvrw], PRM[prmriseta08risvrw], prioFC08risvrw);
        if (IH[hprioin08risvrwris]) iPrioriteitNooitAfkappen[prioFC08risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin08risvrw] = IH[hprioin08risvrwris];

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

    /* Inmelding fc09 type Bus */
    IH[hprioin09bus] = IH[hprioin09buskar] = FALSE;
    if (SCH[schprioin09buskar])
    {
        IH[hprioin09buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat09bus], TRUE, PRM[prmkarsg09],TRUE, CIF_DSIN, WDNST_check_in(fc09));
    }
    IH[hprioin09bus] = IH[hprioin09buskar];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09bus] = IH[hpriouit09buskar] = FALSE;
    if (SCH[schpriouit09buskar])
    {
        IH[hpriouit09buskar] = DSIMeldingPRIO_V2(fc09, prioFC09bus, 0, PRM[prmvtgcat09bus], TRUE, PRM[prmkarsg09],TRUE, CIF_DSUIT, WDNST_check_uit(fc09));
    }
    IH[hpriouit09bus] = IH[hpriouit09buskar];

    /* Inmelding fc09 type Bus */
    IH[hprioin09risov] = IH[hprioin09risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin09risovris])
    {
        IH[hprioin09risovris] = RT[tprioin09risovris] = 
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09risov], SYSTEM_ITF1, PRM[prmrislaneid09risov_1], PRM[prmrisstationtype09risov], PRM[prmrisstart09risov], PRM[prmrisend09risov], PRM[prmrisrole09risov], PRM[prmrissubrole09risov], PRM[prmrisimportance09risov], PRM[prmriseta09risov], prioFC09risov);
        if (IH[hprioin09risovris]) iPrioriteitNooitAfkappen[prioFC09risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin09risov] = IH[hprioin09risovris];

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
        IH[hprioin09risvrwris] = RT[tprioin09risvrwris] = 
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09risvrw], SYSTEM_ITF1, PRM[prmrislaneid09risvrw_1], PRM[prmrisstationtype09risvrw], PRM[prmrisstart09risvrw], PRM[prmrisend09risvrw], PRM[prmrisrole09risvrw], PRM[prmrissubrole09risvrw], PRM[prmrisimportance09risvrw], PRM[prmriseta09risvrw], prioFC09risvrw);
        if (IH[hprioin09risvrwris]) iPrioriteitNooitAfkappen[prioFC09risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin09risvrw] = IH[hprioin09risvrwris];

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

    /* Inmelding fc11 type Bus */
    IH[hprioin11bus] = IH[hprioin11buskar] = FALSE;
    if (SCH[schprioin11buskar])
    {
        IH[hprioin11buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat11bus], TRUE, PRM[prmkarsg11],TRUE, CIF_DSIN, WDNST_check_in(fc11));
    }
    IH[hprioin11bus] = IH[hprioin11buskar];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11bus] = IH[hpriouit11buskar] = FALSE;
    if (SCH[schpriouit11buskar])
    {
        IH[hpriouit11buskar] = DSIMeldingPRIO_V2(fc11, prioFC11bus, 0, PRM[prmvtgcat11bus], TRUE, PRM[prmkarsg11],TRUE, CIF_DSUIT, WDNST_check_uit(fc11));
    }
    IH[hpriouit11bus] = IH[hpriouit11buskar];

    /* Inmelding fc11 type Bus */
    IH[hprioin11risov] = IH[hprioin11risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin11risovris])
    {
        IH[hprioin11risovris] = RT[tprioin11risovris] = 
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11risov], SYSTEM_ITF1, PRM[prmrislaneid11risov_1], PRM[prmrisstationtype11risov], PRM[prmrisstart11risov], PRM[prmrisend11risov], PRM[prmrisrole11risov], PRM[prmrissubrole11risov], PRM[prmrisimportance11risov], PRM[prmriseta11risov], prioFC11risov);
        if (IH[hprioin11risovris]) iPrioriteitNooitAfkappen[prioFC11risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin11risov] = IH[hprioin11risovris];

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
        IH[hprioin11risvrwris] = RT[tprioin11risvrwris] = 
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11risvrw], SYSTEM_ITF1, PRM[prmrislaneid11risvrw_1], PRM[prmrisstationtype11risvrw], PRM[prmrisstart11risvrw], PRM[prmrisend11risvrw], PRM[prmrisrole11risvrw], PRM[prmrissubrole11risvrw], PRM[prmrisimportance11risvrw], PRM[prmriseta11risvrw], prioFC11risvrw);
        if (IH[hprioin11risvrwris]) iPrioriteitNooitAfkappen[prioFC11risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin11risvrw] = IH[hprioin11risvrwris];

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

    /* Inmelding fc22 type Fiets */
    fietsprio_update(fc22, d22_1, cftsvtg22fietsfiets, cftscyc22fietsfiets,SH[hprioin22fietsfiets22_1], ML);
    IH[hprioin22fiets] = IH[hprioin22fietsfiets22_1] = FALSE;
    if (SCH[schprioin22fietsfiets22_1])
    {
        MM[mftstelris22fietsfiets] = 0;
#ifndef NO_RIS
        MM[mftstelris22fietsfiets] += ris_itsstations_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22fiets_1], RIS_CYCLIST, PRM[prmrispstart22fts1], PRM[prmrispend22fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_1], PRM[prmrislaneheadingmarge22_1]);
        MM[mftstelris22fietsfiets] += ris_itsstations_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22fiets_2], RIS_CYCLIST, PRM[prmrispstart22fts2], PRM[prmrispend22fts2], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_2], PRM[prmrislaneheadingmarge22_2]);
#endif /* NO_RIS */
        IH[hprioin22fietsfiets22_1] = !C[cvc22fiets] && fietsprio_inmelding(fc22, d22_1, cftsvtg22fietsfiets, cftscyc22fietsfiets, prmftsblok22fietsfiets, prmftsmaxpercyc22fietsfiets, prmftsminvtg22fietsfiets, prmftsminwt22fietsfiets, SH[hprioin22fietsfiets22_1], ML, mftstelris22fietsfiets, prmftsminvtgris22fietsfiets);
    }
    IH[hprioin22fiets] = IH[hprioin22fietsfiets22_1];

    /* Uitmelding fc22 type Fiets */
    IH[hpriouit22fiets] = IH[hpriouit22fietsfiets] = FALSE;
    if (SCH[schpriouit22fietsfiets])
    {
        IH[hpriouit22fietsfiets] = !T[tpriouit22fiets] && C[cvc22fiets] && G[fc22] && (T[tgb22fiets] && (T_timer[tgb22fiets] > 1));
    }
    IH[hpriouit22fiets] = RT[tpriouit22fiets] = IH[hpriouit22fietsfiets];

    /* Inmelding fc28 type Fiets */
    fietsprio_update(fc28, d28_2, cftsvtg28fietsfiets, cftscyc28fietsfiets,SH[hprioin28fietsfiets28_2], ML);
    IH[hprioin28fiets] = IH[hprioin28fietsfiets28_2] = FALSE;
    if (SCH[schprioin28fietsfiets28_2])
    {
        MM[mftstelris28fietsfiets] = 0;
#ifndef NO_RIS
        MM[mftstelris28fietsfiets] += ris_itsstations_heading(fc28, SYSTEM_ITF1, PRM[prmrislaneid28fiets_1], RIS_CYCLIST, PRM[prmrispstart28fts1], PRM[prmrispend28fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading28_1], PRM[prmrislaneheadingmarge28_1]);
#endif /* NO_RIS */
        IH[hprioin28fietsfiets28_2] = RT[tprioin28fietsfiets28_2] = !T[tprioin28fietsfiets28_2] && !C[cvc28fiets] && fietsprio_inmelding(fc28, d28_2, cftsvtg28fietsfiets, cftscyc28fietsfiets, prmftsblok28fietsfiets, prmftsmaxpercyc28fietsfiets, prmftsminvtg28fietsfiets, prmftsminwt28fietsfiets, SH[hprioin28fietsfiets28_2], ML, mftstelris28fietsfiets, prmftsminvtgris28fietsfiets);
    }
    IH[hprioin28fiets] = IH[hprioin28fietsfiets28_2];

    /* Uitmelding fc28 type Fiets */
    IH[hpriouit28fiets] = IH[hpriouit28fietsfiets] = FALSE;
    if (SCH[schpriouit28fietsfiets])
    {
        IH[hpriouit28fietsfiets] = !T[tpriouit28fiets] && C[cvc28fiets] && G[fc28] && (T[tgb28fiets] && (T_timer[tgb28fiets] > 1));
    }
    IH[hpriouit28fiets] = RT[tpriouit28fiets] = IH[hpriouit28fietsfiets];

    /* Inmelding fc61 type Bus */
    IH[hprioin61bus] = IH[hprioin61buskar] = FALSE;
    if (SCH[schprioin61buskar])
    {
        IH[hprioin61buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat61bus], TRUE, PRM[prmkarsg61],TRUE, CIF_DSIN, WDNST_check_in(fc61));
    }
    IH[hprioin61bus] = IH[hprioin61buskar];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61bus] = IH[hpriouit61buskar] = FALSE;
    if (SCH[schpriouit61buskar])
    {
        IH[hpriouit61buskar] = DSIMeldingPRIO_V2(fc61, prioFC61bus, 0, PRM[prmvtgcat61bus], TRUE, PRM[prmkarsg61],TRUE, CIF_DSUIT, WDNST_check_uit(fc61));
    }
    IH[hpriouit61bus] = IH[hpriouit61buskar];

    /* Inmelding fc61 type Bus */
    IH[hprioin61risov] = IH[hprioin61risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin61risovris])
    {
        IH[hprioin61risovris] = RT[tprioin61risovris] = 
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61risov], SYSTEM_ITF1, PRM[prmrislaneid61risov_1], PRM[prmrisstationtype61risov], PRM[prmrisstart61risov], PRM[prmrisend61risov], PRM[prmrisrole61risov], PRM[prmrissubrole61risov], PRM[prmrisimportance61risov], PRM[prmriseta61risov], prioFC61risov);
        if (IH[hprioin61risovris]) iPrioriteitNooitAfkappen[prioFC61risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin61risov] = IH[hprioin61risovris];

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
        IH[hprioin61risvrwris] = RT[tprioin61risvrwris] = 
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61risvrw], SYSTEM_ITF1, PRM[prmrislaneid61risvrw_1], PRM[prmrisstationtype61risvrw], PRM[prmrisstart61risvrw], PRM[prmrisend61risvrw], PRM[prmrisrole61risvrw], PRM[prmrissubrole61risvrw], PRM[prmrisimportance61risvrw], PRM[prmriseta61risvrw], prioFC61risvrw);
        if (IH[hprioin61risvrwris]) iPrioriteitNooitAfkappen[prioFC61risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin61risvrw] = IH[hprioin61risvrwris];

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

    /* Inmelding fc62 type Bus */
    IH[hprioin62bus] = IH[hprioin62buskar] = FALSE;
    if (SCH[schprioin62buskar])
    {
        IH[hprioin62buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat62bus], TRUE, PRM[prmkarsg62],TRUE, CIF_DSIN, WDNST_check_in(fc62));
    }
    IH[hprioin62bus] = IH[hprioin62buskar];

    /* Uitmelding fc62 type Bus */
    IH[hpriouit62bus] = IH[hpriouit62buskar] = FALSE;
    if (SCH[schpriouit62buskar])
    {
        IH[hpriouit62buskar] = DSIMeldingPRIO_V2(fc62, prioFC62bus, 0, PRM[prmvtgcat62bus], TRUE, PRM[prmkarsg62],TRUE, CIF_DSUIT, WDNST_check_uit(fc62));
    }
    IH[hpriouit62bus] = IH[hpriouit62buskar];

    /* Inmelding fc62 type Bus */
    IH[hprioin62risov] = IH[hprioin62risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin62risovris])
    {
        IH[hprioin62risovris] = RT[tprioin62risovris] = 
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risov], SYSTEM_ITF1, PRM[prmrislaneid62risov_1], PRM[prmrisstationtype62risov], PRM[prmrisstart62risov], PRM[prmrisend62risov], PRM[prmrisrole62risov], PRM[prmrissubrole62risov], PRM[prmrisimportance62risov], PRM[prmriseta62risov], prioFC62risov) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risov], SYSTEM_ITF1, PRM[prmrislaneid62risov_2], PRM[prmrisstationtype62risov], PRM[prmrisstart62risov], PRM[prmrisend62risov], PRM[prmrisrole62risov], PRM[prmrissubrole62risov], PRM[prmrisimportance62risov], PRM[prmriseta62risov], prioFC62risov);
        if (IH[hprioin62risovris]) iPrioriteitNooitAfkappen[prioFC62risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin62risov] = IH[hprioin62risovris];

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
        IH[hprioin62risvrwris] = RT[tprioin62risvrwris] = 
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risvrw], SYSTEM_ITF1, PRM[prmrislaneid62risvrw_1], PRM[prmrisstationtype62risvrw], PRM[prmrisstart62risvrw], PRM[prmrisend62risvrw], PRM[prmrisrole62risvrw], PRM[prmrissubrole62risvrw], PRM[prmrisimportance62risvrw], PRM[prmriseta62risvrw], prioFC62risvrw) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62risvrw], SYSTEM_ITF1, PRM[prmrislaneid62risvrw_2], PRM[prmrisstationtype62risvrw], PRM[prmrisstart62risvrw], PRM[prmrisend62risvrw], PRM[prmrisrole62risvrw], PRM[prmrissubrole62risvrw], PRM[prmrisimportance62risvrw], PRM[prmriseta62risvrw], prioFC62risvrw);
        if (IH[hprioin62risvrwris]) iPrioriteitNooitAfkappen[prioFC62risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin62risvrw] = IH[hprioin62risvrwris];

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

    /* Inmelding fc67 type Bus */
    IH[hprioin67bus] = IH[hprioin67buskar] = FALSE;
    if (SCH[schprioin67buskar])
    {
        IH[hprioin67buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat67bus], TRUE, PRM[prmkarsg67],TRUE, CIF_DSIN, WDNST_check_in(fc67));
    }
    IH[hprioin67bus] = IH[hprioin67buskar];

    /* Uitmelding fc67 type Bus */
    IH[hpriouit67bus] = IH[hpriouit67buskar] = FALSE;
    if (SCH[schpriouit67buskar])
    {
        IH[hpriouit67buskar] = DSIMeldingPRIO_V2(fc67, prioFC67bus, 0, PRM[prmvtgcat67bus], TRUE, PRM[prmkarsg67],TRUE, CIF_DSUIT, WDNST_check_uit(fc67));
    }
    IH[hpriouit67bus] = IH[hpriouit67buskar];

    /* Inmelding fc67 type Bus */
    IH[hprioin67risov] = IH[hprioin67risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin67risovris])
    {
        IH[hprioin67risovris] = RT[tprioin67risovris] = 
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67risov], SYSTEM_ITF1, PRM[prmrislaneid67risov_1], PRM[prmrisstationtype67risov], PRM[prmrisstart67risov], PRM[prmrisend67risov], PRM[prmrisrole67risov], PRM[prmrissubrole67risov], PRM[prmrisimportance67risov], PRM[prmriseta67risov], prioFC67risov);
        if (IH[hprioin67risovris]) iPrioriteitNooitAfkappen[prioFC67risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin67risov] = IH[hprioin67risovris];

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
        IH[hprioin67risvrwris] = RT[tprioin67risvrwris] = 
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67risvrw], SYSTEM_ITF1, PRM[prmrislaneid67risvrw_1], PRM[prmrisstationtype67risvrw], PRM[prmrisstart67risvrw], PRM[prmrisend67risvrw], PRM[prmrisrole67risvrw], PRM[prmrissubrole67risvrw], PRM[prmrisimportance67risvrw], PRM[prmriseta67risvrw], prioFC67risvrw);
        if (IH[hprioin67risvrwris]) iPrioriteitNooitAfkappen[prioFC67risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin67risvrw] = IH[hprioin67risvrwris];

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

    /* Inmelding fc68 type Bus */
    IH[hprioin68bus] = IH[hprioin68buskar] = FALSE;
    if (SCH[schprioin68buskar])
    {
        IH[hprioin68buskar] = RT[tprioin68buskar] = !T[tprioin68buskar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat68bus], TRUE, PRM[prmkarsg68],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin68bus] = IH[hprioin68buskar];

    /* Uitmelding fc68 type Bus */
    IH[hpriouit68bus] = IH[hpriouit68buskar] = FALSE;
    if (SCH[schpriouit68buskar])
    {
        IH[hpriouit68buskar] = DSIMeldingPRIO_V2(fc68, prioFC68bus, 0, PRM[prmvtgcat68bus], TRUE, PRM[prmkarsg68],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit68bus] = IH[hpriouit68buskar];

    /* Inmelding fc68 type Bus */
    IH[hprioin68risov] = IH[hprioin68risovris] = FALSE;
#ifndef NO_RIS
    if (SCH[schprioin68risovris])
    {
        IH[hprioin68risovris] = RT[tprioin68risovris] = 
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risov], SYSTEM_ITF1, PRM[prmrislaneid68risov_1], PRM[prmrisstationtype68risov], PRM[prmrisstart68risov], PRM[prmrisend68risov], PRM[prmrisrole68risov], PRM[prmrissubrole68risov], PRM[prmrisimportance68risov], PRM[prmriseta68risov], prioFC68risov) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risov], SYSTEM_ITF1, PRM[prmrislaneid68risov_2], PRM[prmrisstationtype68risov], PRM[prmrisstart68risov], PRM[prmrisend68risov], PRM[prmrisrole68risov], PRM[prmrissubrole68risov], PRM[prmrisimportance68risov], PRM[prmriseta68risov], prioFC68risov);
        if (IH[hprioin68risovris]) iPrioriteitNooitAfkappen[prioFC68risov] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin68risov] = IH[hprioin68risovris];

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
        IH[hprioin68risvrwris] = RT[tprioin68risvrwris] = 
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risvrw], SYSTEM_ITF1, PRM[prmrislaneid68risvrw_1], PRM[prmrisstationtype68risvrw], PRM[prmrisstart68risvrw], PRM[prmrisend68risvrw], PRM[prmrisrole68risvrw], PRM[prmrissubrole68risvrw], PRM[prmrisimportance68risvrw], PRM[prmriseta68risvrw], prioFC68risvrw) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68risvrw], SYSTEM_ITF1, PRM[prmrislaneid68risvrw_2], PRM[prmrisstationtype68risvrw], PRM[prmrisstart68risvrw], PRM[prmrisend68risvrw], PRM[prmrisrole68risvrw], PRM[prmrissubrole68risvrw], PRM[prmrisimportance68risvrw], PRM[prmriseta68risvrw], prioFC68risvrw);
        if (IH[hprioin68risvrwris]) iPrioriteitNooitAfkappen[prioFC68risvrw] = TRUE;
    }
#endif /* NO_RIS */
    IH[hprioin68risvrw] = IH[hprioin68risvrwris];

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
    TrackStiptObvTSTP(hprioin03bus, hpriouit03bus, &iAantInm03bus, iKARInSTP03bus, hprio03bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin05bus, hpriouit05bus, &iAantInm05bus, iKARInSTP05bus, hprio05bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin08bus, hpriouit08bus, &iAantInm08bus, iKARInSTP08bus, hprio08bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin09bus, hpriouit09bus, &iAantInm09bus, iKARInSTP09bus, hprio09bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin11bus, hpriouit11bus, &iAantInm11bus, iKARInSTP11bus, hprio11bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin61bus, hpriouit61bus, &iAantInm61bus, iKARInSTP61bus, hprio61bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin62bus, hpriouit62bus, &iAantInm62bus, iKARInSTP62bus, hprio62bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin67bus, hpriouit67bus, &iAantInm67bus, iKARInSTP67bus, hprio67bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin68bus, hpriouit68bus, &iAantInm68bus, iKARInSTP68bus, hprio68bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    MM[mstp03bus] = (mulv) (iAantInm03bus > 0 ? iKARInSTP03bus[0] : 0);
    MM[mstp05bus] = (mulv) (iAantInm05bus > 0 ? iKARInSTP05bus[0] : 0);
    MM[mstp08bus] = (mulv) (iAantInm08bus > 0 ? iKARInSTP08bus[0] : 0);
    MM[mstp09bus] = (mulv) (iAantInm09bus > 0 ? iKARInSTP09bus[0] : 0);
    MM[mstp11bus] = (mulv) (iAantInm11bus > 0 ? iKARInSTP11bus[0] : 0);
    MM[mstp61bus] = (mulv) (iAantInm61bus > 0 ? iKARInSTP61bus[0] : 0);
    MM[mstp62bus] = (mulv) (iAantInm62bus > 0 ? iKARInSTP62bus[0] : 0);
    MM[mstp67bus] = (mulv) (iAantInm67bus > 0 ? iKARInSTP67bus[0] : 0);
    MM[mstp68bus] = (mulv) (iAantInm68bus > 0 ? iKARInSTP68bus[0] : 0);

#ifndef NO_RIS
    /* Bijhouden granted verstrekt */
    Bepaal_Granted_Verstrekt();

    if (granted_verstrekt[fc03] == 2) granted_verstrekt[fc02] = 2;
#endif /* NO_RIS */


    /* Bijhouden melding en ondergedrag KAR */
    RT[tkarmelding] = CIF_DSIWIJZ != 0 && CIF_DSI[CIF_DSI_LUS] == 0;
    RT[tkarog] = T[tkarmelding] || !startkarog;
    if (!startkarog) startkarog = TRUE;
    /* Doorzetten HD inmeldingen */
    IH[hhdin03] |= IH[hhdin02]; IH[hhduit03] |= IH[hhduit02];
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
        IH[hstp03bus] = !C[cvchd03] && SCH[schovstipt03bus];
        IH[hstp05bus] = !C[cvchd05] && SCH[schovstipt05bus];
        IH[hstp08bus] = !C[cvchd08] && SCH[schovstipt08bus];
        IH[hstp09bus] = !C[cvchd09] && SCH[schovstipt09bus];
        IH[hstp11bus] = !C[cvchd11] && SCH[schovstipt11bus];
        IH[hstp61bus] = !C[cvchd61] && SCH[schovstipt61bus];
        IH[hstp62bus] = !C[cvchd62] && SCH[schovstipt62bus];
        IH[hstp67bus] = !C[cvchd67] && SCH[schovstipt67bus];
        IH[hstp68bus] = !C[cvchd68] && SCH[schovstipt68bus];
        if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_VROEG || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttevroeg03bus);
        if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_VROEG || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttevroeg05bus);
        if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_VROEG || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttevroeg08bus);
        if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_VROEG || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttevroeg09bus);
        if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_VROEG || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttevroeg11bus);
        if (IH[hstp61bus] && (MM[mstp61bus] == CIF_TE_VROEG || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstipttevroeg61bus);
        if (IH[hstp62bus] && (MM[mstp62bus] == CIF_TE_VROEG || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstipttevroeg62bus);
        if (IH[hstp67bus] && (MM[mstp67bus] == CIF_TE_VROEG || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstipttevroeg67bus);
        if (IH[hstp68bus] && (MM[mstp68bus] == CIF_TE_VROEG || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstipttevroeg68bus);
        if (IH[hstp03bus] && (MM[mstp03bus] == CIF_OP_TIJD || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstiptoptijd03bus);
        if (IH[hstp05bus] && (MM[mstp05bus] == CIF_OP_TIJD || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstiptoptijd05bus);
        if (IH[hstp08bus] && (MM[mstp08bus] == CIF_OP_TIJD || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstiptoptijd08bus);
        if (IH[hstp09bus] && (MM[mstp09bus] == CIF_OP_TIJD || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstiptoptijd09bus);
        if (IH[hstp11bus] && (MM[mstp11bus] == CIF_OP_TIJD || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstiptoptijd11bus);
        if (IH[hstp61bus] && (MM[mstp61bus] == CIF_OP_TIJD || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstiptoptijd61bus);
        if (IH[hstp62bus] && (MM[mstp62bus] == CIF_OP_TIJD || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstiptoptijd62bus);
        if (IH[hstp67bus] && (MM[mstp67bus] == CIF_OP_TIJD || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstiptoptijd67bus);
        if (IH[hstp68bus] && (MM[mstp68bus] == CIF_OP_TIJD || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstiptoptijd68bus);
        if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_LAAT || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttelaat03bus);
        if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_LAAT || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttelaat05bus);
        if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_LAAT || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttelaat08bus);
        if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_LAAT || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttelaat09bus);
        if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_LAAT || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttelaat11bus);
        if (IH[hstp61bus] && (MM[mstp61bus] == CIF_TE_LAAT || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstipttelaat61bus);
        if (IH[hstp62bus] && (MM[mstp62bus] == CIF_TE_LAAT || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstipttelaat62bus);
        if (IH[hstp67bus] && (MM[mstp67bus] == CIF_TE_LAAT || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstipttelaat67bus);
        if (IH[hstp68bus] && (MM[mstp68bus] == CIF_TE_LAAT || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstipttelaat68bus);
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
        iPrioriteitsOpties[prioFC03bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03bus);
        iPrioriteitsOpties[prioFC03risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03risov);
        iPrioriteitsOpties[prioFC03risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst03risvrw);
        iPrioriteitsOpties[prioFC05bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05bus);
        iPrioriteitsOpties[prioFC05risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05risov);
        iPrioriteitsOpties[prioFC05risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst05risvrw);
        iPrioriteitsOpties[prioFC08bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08bus);
        iPrioriteitsOpties[prioFC08risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08risov);
        iPrioriteitsOpties[prioFC08risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst08risvrw);
        iPrioriteitsOpties[prioFC09bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09bus);
        iPrioriteitsOpties[prioFC09risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09risov);
        iPrioriteitsOpties[prioFC09risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst09risvrw);
        iPrioriteitsOpties[prioFC11bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11bus);
        iPrioriteitsOpties[prioFC11risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11risov);
        iPrioriteitsOpties[prioFC11risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst11risvrw);
        iPrioriteitsOpties[prioFC22fiets] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst22fiets);
        iPrioriteitsOpties[prioFC28fiets] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst28fiets);
        iPrioriteitsOpties[prioFC61bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61bus);
        iPrioriteitsOpties[prioFC61risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61risov);
        iPrioriteitsOpties[prioFC61risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst61risvrw);
        iPrioriteitsOpties[prioFC62bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62bus);
        iPrioriteitsOpties[prioFC62risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62risov);
        iPrioriteitsOpties[prioFC62risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst62risvrw);
        iPrioriteitsOpties[prioFC67bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67bus);
        iPrioriteitsOpties[prioFC67risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67risov);
        iPrioriteitsOpties[prioFC67risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst67risvrw);
        iPrioriteitsOpties[prioFC68bus] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68bus);
        iPrioriteitsOpties[prioFC68risov] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68risov);
        iPrioriteitsOpties[prioFC68risvrw] |= PrioHalfstarBepaalPrioriteitsOpties(prmpriohst68risvrw);
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
        iPrioriteitsOpties[prioFC08bus] = poAanvraag;
        iPrioriteitsOpties[prioFC08risov] = poAanvraag;
        iPrioriteitsOpties[prioFC08risvrw] = poAanvraag;
        iPrioriteitsOpties[prioFC11bus] = poAanvraag;
        iPrioriteitsOpties[prioFC11risov] = poAanvraag;
        iPrioriteitsOpties[prioFC11risvrw] = poAanvraag;
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
        iPrioriteit[prioFC08bus] = 0;
        iPrioriteit[prioFC08risov] = 0;
        iPrioriteit[prioFC08risvrw] = 0;
        iPrioriteit[prioFC11bus] = 0;
        iPrioriteit[prioFC11risov] = 0;
        iPrioriteit[prioFC11risvrw] = 0;
    }
}
/* ------------------------------------
   Extra code tegenhouden conflicten OV
   ------------------------------------ */
void TegenhoudenConflictenExtra(void)
{
    if (SCH[schovpriople]) PrioHalfstarTegenhouden();
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
    int fc;
    int i;

    /* Bepalen of een HD ingreep actief is */
    isHD = C[cvchd02] && !BL[fc02] || C[cvchd03] && !BL[fc03] || C[cvchd05] && !BL[fc05] || C[cvchd08] && !BL[fc08] || C[cvchd09] && !BL[fc09] || C[cvchd11] && !BL[fc11] || C[cvchd61] && !BL[fc61] || C[cvchd62] && !BL[fc62] || C[cvchd67] && !BL[fc67] || C[cvchd68] && !BL[fc68];

    /* Blokkeren alle langzaam verkeer (tevens niet-conflicten) */
    if (isHD)
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
    if (RT[tnlsg3231] || T[tnlsg3231] || RT[tnlsgd3231] || T[tnlsgd3231])
    {
        Z[fc31] &= ~BIT6;
        RR[fc31] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc31] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsg3132] || T[tnlsg3132] || RT[tnlsgd3132] || T[tnlsgd3132])
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
    PrioCcolElementen(prioFC03bus, tgb03bus, trt03bus, hprio03bus, cvc03bus, tblk03bus);
    PrioCcolElementen(prioFC03risov, tgb03risov, trt03risov, hprio03risov, cvc03risov, tblk03risov);
    PrioCcolElementen(prioFC03risvrw, tgb03risvrw, trt03risvrw, hprio03risvrw, cvc03risvrw, tblk03risvrw);
    PrioCcolElementen(prioFC05bus, tgb05bus, trt05bus, hprio05bus, cvc05bus, tblk05bus);
    PrioCcolElementen(prioFC05risov, tgb05risov, trt05risov, hprio05risov, cvc05risov, tblk05risov);
    PrioCcolElementen(prioFC05risvrw, tgb05risvrw, trt05risvrw, hprio05risvrw, cvc05risvrw, tblk05risvrw);
    PrioCcolElementen(prioFC08bus, tgb08bus, trt08bus, hprio08bus, cvc08bus, tblk08bus);
    PrioCcolElementen(prioFC08risov, tgb08risov, trt08risov, hprio08risov, cvc08risov, tblk08risov);
    PrioCcolElementen(prioFC08risvrw, tgb08risvrw, trt08risvrw, hprio08risvrw, cvc08risvrw, tblk08risvrw);
    PrioCcolElementen(prioFC09bus, tgb09bus, trt09bus, hprio09bus, cvc09bus, tblk09bus);
    PrioCcolElementen(prioFC09risov, tgb09risov, trt09risov, hprio09risov, cvc09risov, tblk09risov);
    PrioCcolElementen(prioFC09risvrw, tgb09risvrw, trt09risvrw, hprio09risvrw, cvc09risvrw, tblk09risvrw);
    PrioCcolElementen(prioFC11bus, tgb11bus, trt11bus, hprio11bus, cvc11bus, tblk11bus);
    PrioCcolElementen(prioFC11risov, tgb11risov, trt11risov, hprio11risov, cvc11risov, tblk11risov);
    PrioCcolElementen(prioFC11risvrw, tgb11risvrw, trt11risvrw, hprio11risvrw, cvc11risvrw, tblk11risvrw);
    PrioCcolElementen(prioFC22fiets, tgb22fiets, trt22fiets, hprio22fiets, cvc22fiets, tblk22fiets);
    PrioCcolElementen(prioFC28fiets, tgb28fiets, trt28fiets, hprio28fiets, cvc28fiets, tblk28fiets);
    PrioCcolElementen(prioFC61bus, tgb61bus, trt61bus, hprio61bus, cvc61bus, tblk61bus);
    PrioCcolElementen(prioFC61risov, tgb61risov, trt61risov, hprio61risov, cvc61risov, tblk61risov);
    PrioCcolElementen(prioFC61risvrw, tgb61risvrw, trt61risvrw, hprio61risvrw, cvc61risvrw, tblk61risvrw);
    PrioCcolElementen(prioFC62bus, tgb62bus, trt62bus, hprio62bus, cvc62bus, tblk62bus);
    PrioCcolElementen(prioFC62risov, tgb62risov, trt62risov, hprio62risov, cvc62risov, tblk62risov);
    PrioCcolElementen(prioFC62risvrw, tgb62risvrw, trt62risvrw, hprio62risvrw, cvc62risvrw, tblk62risvrw);
    PrioCcolElementen(prioFC67bus, tgb67bus, trt67bus, hprio67bus, cvc67bus, tblk67bus);
    PrioCcolElementen(prioFC67risov, tgb67risov, trt67risov, hprio67risov, cvc67risov, tblk67risov);
    PrioCcolElementen(prioFC67risvrw, tgb67risvrw, trt67risvrw, hprio67risvrw, cvc67risvrw, tblk67risvrw);
    PrioCcolElementen(prioFC68bus, tgb68bus, trt68bus, hprio68bus, cvc68bus, tblk68bus);
    PrioCcolElementen(prioFC68risov, tgb68risov, trt68risov, hprio68risov, cvc68risov, tblk68risov);
    PrioCcolElementen(prioFC68risvrw, tgb68risvrw, trt68risvrw, hprio68risvrw, cvc68risvrw, tblk68risvrw);
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
    if (SD[ddummykaruit02karbus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg02], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin03bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg03], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit03bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg03], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin05bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg05], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit05bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg05], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin08bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit08bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin09bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg09], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit09bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg09], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin11bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit11bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin61bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit61bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin62bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg62], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit62bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg62], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin67bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg67], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit67bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg67], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin68bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg68], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit68bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg68], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);

    /* HD ingrepen */
    if (SD[ddummyhdkarin02]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd02], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit02]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd02], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin03]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd03], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit03]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd03], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin05]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd05], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit05]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd05], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin08]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd08], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit08]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd08], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin09]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd09], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit09]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd09], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin11]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd11], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit11]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd11], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin61]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd61], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit61]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd61], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin62]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd62], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit62]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd62], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin67]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd67], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit67]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd67], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin68]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd68], CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit68]) set_DSI_message(0, CIF_POL, PRM[prmkarsghd68], CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
}
#endif

#ifdef PRIO_ADDFILE
    #include "123456prio.add"
#endif /* PRIO_ADDFILE */
