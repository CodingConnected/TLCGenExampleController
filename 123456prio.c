/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   12.0
    TLCGEN:   12.4.0.18
   CCOLGEN:   12.4.0.18
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
 *
 ************************************************************************************/

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
    #include "cif.inc"    /* interface                         */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
        #include "xyprintf.h" /* Printen debuginfo                 */
        extern boolv display;
    #endif
    #include "ccolfunc.h"
    #include "ccol_mon.h"
    #include "extra_func.h"
    #include "extra_func_prio.h"

boolv vertraag_kar_uitm[prioFCMAX];

#include "isgfunc_prio.h" /* voor prioriteitsingrepen */


extern mulv DB_old[];

#include "prio.c"

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

    /* initialisatie variabelen vertraag_kar_uitm */
    /* ------------------------------------------ */
    for (i = 0; i < prioFCMAX; ++i)
    {
        vertraag_kar_uitm[i] = 0;
    }

}

void PrioInstellingen(void) 
{
    /* ======================= */
    /* Instellingen PRIORITEIT */
    /* ======================= */


    /* Fasecyclus voor richtingen met PRIO */
    iFC_PRIOix[prioFC02karbus] = fc02;
    iFC_PRIOix[prioFC03karbus] = fc03;
    iFC_PRIOix[prioFC05karbus] = fc05;
    iFC_PRIOix[prioFC08karbus] = fc08;
    iFC_PRIOix[prioFC09karbus] = fc09;
    iFC_PRIOix[prioFC11karbus] = fc11;
    iFC_PRIOix[prioFC22fiets] = fc22;
    iFC_PRIOix[prioFC28fiets] = fc28;
    iFC_PRIOix[prioFC61karbus] = fc61;
    iFC_PRIOix[prioFC62karbus] = fc62;
    iFC_PRIOix[prioFC67karbus] = fc67;
    iFC_PRIOix[prioFC68karbus] = fc68;
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
    iT_GBix[prioFC03karbus] = tgb03karbus;
    iT_GBix[prioFC05karbus] = tgb05karbus;
    iT_GBix[prioFC08karbus] = tgb08karbus;
    iT_GBix[prioFC09karbus] = tgb09karbus;
    iT_GBix[prioFC11karbus] = tgb11karbus;
    iT_GBix[prioFC22fiets] = tgb22fiets;
    iT_GBix[prioFC28fiets] = tgb28fiets;
    iT_GBix[prioFC61karbus] = tgb61karbus;
    iT_GBix[prioFC62karbus] = tgb62karbus;
    iT_GBix[prioFC67karbus] = tgb67karbus;
    iT_GBix[prioFC68karbus] = tgb68karbus;
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
    iH_PRIOix[prioFC03karbus] = hprio03karbus;
    iH_PRIOix[prioFC05karbus] = hprio05karbus;
    iH_PRIOix[prioFC08karbus] = hprio08karbus;
    iH_PRIOix[prioFC09karbus] = hprio09karbus;
    iH_PRIOix[prioFC11karbus] = hprio11karbus;
    iH_PRIOix[prioFC22fiets] = hprio22fiets;
    iH_PRIOix[prioFC28fiets] = hprio28fiets;
    iH_PRIOix[prioFC61karbus] = hprio61karbus;
    iH_PRIOix[prioFC62karbus] = hprio62karbus;
    iH_PRIOix[prioFC67karbus] = hprio67karbus;
    iH_PRIOix[prioFC68karbus] = hprio68karbus;
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
    iInstPrioriteitsNiveau[prioFC03karbus] = PRM[prmprio03karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC05karbus] = PRM[prmprio05karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC08karbus] = PRM[prmprio08karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC09karbus] = PRM[prmprio09karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC11karbus] = PRM[prmprio11karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC22fiets] = PRM[prmprio22fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC28fiets] = PRM[prmprio28fiets]/1000L;
    iInstPrioriteitsNiveau[prioFC61karbus] = PRM[prmprio61karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC62karbus] = PRM[prmprio62karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC67karbus] = PRM[prmprio67karbus]/1000L;
    iInstPrioriteitsNiveau[prioFC68karbus] = PRM[prmprio68karbus]/1000L;
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
    iInstPrioriteitsOpties[prioFC03karbus] = BepaalPrioriteitsOpties(prmprio03karbus);
    iInstPrioriteitsOpties[prioFC05karbus] = BepaalPrioriteitsOpties(prmprio05karbus);
    iInstPrioriteitsOpties[prioFC08karbus] = BepaalPrioriteitsOpties(prmprio08karbus);
    iInstPrioriteitsOpties[prioFC09karbus] = BepaalPrioriteitsOpties(prmprio09karbus);
    iInstPrioriteitsOpties[prioFC11karbus] = BepaalPrioriteitsOpties(prmprio11karbus);
    iInstPrioriteitsOpties[prioFC22fiets] = BepaalPrioriteitsOpties(prmprio22fiets);
    iInstPrioriteitsOpties[prioFC28fiets] = BepaalPrioriteitsOpties(prmprio28fiets);
    iInstPrioriteitsOpties[prioFC61karbus] = BepaalPrioriteitsOpties(prmprio61karbus);
    iInstPrioriteitsOpties[prioFC62karbus] = BepaalPrioriteitsOpties(prmprio62karbus);
    iInstPrioriteitsOpties[prioFC67karbus] = BepaalPrioriteitsOpties(prmprio67karbus);
    iInstPrioriteitsOpties[prioFC68karbus] = BepaalPrioriteitsOpties(prmprio68karbus);
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
    iGroenBewakingsTijd[prioFC03karbus] = T_max[tgb03karbus];
    iGroenBewakingsTijd[prioFC05karbus] = T_max[tgb05karbus];
    iGroenBewakingsTijd[prioFC08karbus] = T_max[tgb08karbus];
    iGroenBewakingsTijd[prioFC09karbus] = T_max[tgb09karbus];
    iGroenBewakingsTijd[prioFC11karbus] = T_max[tgb11karbus];
    iGroenBewakingsTijd[prioFC22fiets] = T_max[tgb22fiets];
    iGroenBewakingsTijd[prioFC28fiets] = T_max[tgb28fiets];
    iGroenBewakingsTijd[prioFC61karbus] = T_max[tgb61karbus];
    iGroenBewakingsTijd[prioFC62karbus] = T_max[tgb62karbus];
    iGroenBewakingsTijd[prioFC67karbus] = T_max[tgb67karbus];
    iGroenBewakingsTijd[prioFC68karbus] = T_max[tgb68karbus];
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
    iRTSOngehinderd[prioFC03karbus] = PRM[prmrto03karbus];
    iRTSOngehinderd[prioFC05karbus] = PRM[prmrto05karbus];
    iRTSOngehinderd[prioFC08karbus] = PRM[prmrto08karbus];
    iRTSOngehinderd[prioFC09karbus] = PRM[prmrto09karbus];
    iRTSOngehinderd[prioFC11karbus] = PRM[prmrto11karbus];
    iRTSOngehinderd[prioFC22fiets] = PRM[prmrto22fiets];
    iRTSOngehinderd[prioFC28fiets] = PRM[prmrto28fiets];
    iRTSOngehinderd[prioFC61karbus] = PRM[prmrto61karbus];
    iRTSOngehinderd[prioFC62karbus] = PRM[prmrto62karbus];
    iRTSOngehinderd[prioFC67karbus] = PRM[prmrto67karbus];
    iRTSOngehinderd[prioFC68karbus] = PRM[prmrto68karbus];
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
    iRTSBeperktGehinderd[prioFC03karbus] = PRM[prmrtbg03karbus];
    iRTSBeperktGehinderd[prioFC05karbus] = PRM[prmrtbg05karbus];
    iRTSBeperktGehinderd[prioFC08karbus] = PRM[prmrtbg08karbus];
    iRTSBeperktGehinderd[prioFC09karbus] = PRM[prmrtbg09karbus];
    iRTSBeperktGehinderd[prioFC11karbus] = PRM[prmrtbg11karbus];
    iRTSBeperktGehinderd[prioFC22fiets] = PRM[prmrtbg22fiets];
    iRTSBeperktGehinderd[prioFC28fiets] = PRM[prmrtbg28fiets];
    iRTSBeperktGehinderd[prioFC61karbus] = PRM[prmrtbg61karbus];
    iRTSBeperktGehinderd[prioFC62karbus] = PRM[prmrtbg62karbus];
    iRTSBeperktGehinderd[prioFC67karbus] = PRM[prmrtbg67karbus];
    iRTSBeperktGehinderd[prioFC68karbus] = PRM[prmrtbg68karbus];
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
    iRTSGehinderd[prioFC03karbus] = PRM[prmrtg03karbus];
    iRTSGehinderd[prioFC05karbus] = PRM[prmrtg05karbus];
    iRTSGehinderd[prioFC08karbus] = PRM[prmrtg08karbus];
    iRTSGehinderd[prioFC09karbus] = PRM[prmrtg09karbus];
    iRTSGehinderd[prioFC11karbus] = PRM[prmrtg11karbus];
    iRTSGehinderd[prioFC22fiets] = PRM[prmrtg22fiets];
    iRTSGehinderd[prioFC28fiets] = PRM[prmrtg28fiets];
    iRTSGehinderd[prioFC61karbus] = PRM[prmrtg61karbus];
    iRTSGehinderd[prioFC62karbus] = PRM[prmrtg62karbus];
    iRTSGehinderd[prioFC67karbus] = PRM[prmrtg67karbus];
    iRTSGehinderd[prioFC68karbus] = PRM[prmrtg68karbus];
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
    iOnderMaximum[prioFC03karbus] = PRM[prmomx03karbus];
    iOnderMaximum[prioFC05karbus] = PRM[prmomx05karbus];
    iOnderMaximum[prioFC08karbus] = PRM[prmomx08karbus];
    iOnderMaximum[prioFC09karbus] = PRM[prmomx09karbus];
    iOnderMaximum[prioFC11karbus] = PRM[prmomx11karbus];
    iOnderMaximum[prioFC22fiets] = PRM[prmomx22fiets];
    iOnderMaximum[prioFC28fiets] = PRM[prmomx28fiets];
    iOnderMaximum[prioFC61karbus] = PRM[prmomx61karbus];
    iOnderMaximum[prioFC62karbus] = PRM[prmomx62karbus];
    iOnderMaximum[prioFC67karbus] = PRM[prmomx67karbus];
    iOnderMaximum[prioFC68karbus] = PRM[prmomx68karbus];
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
    iBlokkeringsTijd[prioFC03karbus] = T_max[tblk03karbus];
    iBlokkeringsTijd[prioFC05karbus] = T_max[tblk05karbus];
    iBlokkeringsTijd[prioFC08karbus] = T_max[tblk08karbus];
    iBlokkeringsTijd[prioFC09karbus] = T_max[tblk09karbus];
    iBlokkeringsTijd[prioFC11karbus] = T_max[tblk11karbus];
    iBlokkeringsTijd[prioFC22fiets] = T_max[tblk22fiets];
    iBlokkeringsTijd[prioFC28fiets] = T_max[tblk28fiets];
    iBlokkeringsTijd[prioFC61karbus] = T_max[tblk61karbus];
    iBlokkeringsTijd[prioFC62karbus] = T_max[tblk62karbus];
    iBlokkeringsTijd[prioFC67karbus] = T_max[tblk67karbus];
    iBlokkeringsTijd[prioFC68karbus] = T_max[tblk68karbus];
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
    iSelDetFoutNaGB[prioFC03karbus] = PRM[prmupinagb03karbus];
    iSelDetFoutNaGB[prioFC05karbus] = PRM[prmupinagb05karbus];
    iSelDetFoutNaGB[prioFC08karbus] = PRM[prmupinagb08karbus];
    iSelDetFoutNaGB[prioFC09karbus] = PRM[prmupinagb09karbus];
    iSelDetFoutNaGB[prioFC11karbus] = PRM[prmupinagb11karbus];
    iSelDetFoutNaGB[prioFC22fiets] = PRM[prmupinagb22fiets];
    iSelDetFoutNaGB[prioFC28fiets] = PRM[prmupinagb28fiets];
    iSelDetFoutNaGB[prioFC61karbus] = PRM[prmupinagb61karbus];
    iSelDetFoutNaGB[prioFC62karbus] = PRM[prmupinagb62karbus];
    iSelDetFoutNaGB[prioFC67karbus] = PRM[prmupinagb67karbus];
    iSelDetFoutNaGB[prioFC68karbus] = PRM[prmupinagb68karbus];
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
    iPRM_ALTP[fc22] = PRM[prmaltp22];
    iPRM_ALTP[fc24] = PRM[prmaltp24];
    iPRM_ALTP[fc26] = PRM[prmaltp26];
    iPRM_ALTP[fc28] = PRM[prmaltp28];
    iPRM_ALTP[fc31] = PRM[prmaltp31];
    iPRM_ALTP[fc32] = PRM[prmaltp32];
    iPRM_ALTP[fc33] = PRM[prmaltp33];
    iPRM_ALTP[fc34] = PRM[prmaltp34];
    iPRM_ALTP[fc38] = PRM[prmaltp38];
    iPRM_ALTP[fc61] = PRM[prmaltp61];
    iPRM_ALTP[fc62] = PRM[prmaltp62];
    iPRM_ALTP[fc67] = PRM[prmaltp67];
    iPRM_ALTP[fc68] = PRM[prmaltp68];
    iPRM_ALTP[fc81] = PRM[prmaltp81];
    iPRM_ALTP[fc82] = PRM[prmaltp82];
    iPRM_ALTP[fc84] = PRM[prmaltp84];

    /* Richting mag alternatief realiseren tijdens een OV ingreep */
    iSCH_ALTG[fc02] = SCH[schaltg02];
    iSCH_ALTG[fc03] = SCH[schaltg03];
    iSCH_ALTG[fc05] = SCH[schaltg05];
    iSCH_ALTG[fc08] = SCH[schaltg08];
    iSCH_ALTG[fc09] = SCH[schaltg09];
    iSCH_ALTG[fc11] = SCH[schaltg11];
    iSCH_ALTG[fc21] = SCH[schaltg21];
    iSCH_ALTG[fc22] = SCH[schaltg22];
    iSCH_ALTG[fc24] = SCH[schaltg24];
    iSCH_ALTG[fc26] = SCH[schaltg26];
    iSCH_ALTG[fc28] = SCH[schaltg28];
    iSCH_ALTG[fc31] = SCH[schaltg31];
    iSCH_ALTG[fc32] = SCH[schaltg32];
    iSCH_ALTG[fc33] = SCH[schaltg33];
    iSCH_ALTG[fc34] = SCH[schaltg34];
    iSCH_ALTG[fc38] = SCH[schaltg38];
    iSCH_ALTG[fc61] = SCH[schaltg61];
    iSCH_ALTG[fc62] = SCH[schaltg62];
    iSCH_ALTG[fc67] = SCH[schaltg67];
    iSCH_ALTG[fc68] = SCH[schaltg68];
    iSCH_ALTG[fc81] = SCH[schaltg81];
    iSCH_ALTG[fc82] = SCH[schaltg82];
    iSCH_ALTG[fc84] = SCH[schaltg84];

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

    PrioRijTijdScenario(prioFC03karbus, d03_1, d03_2, tbtovg03karbus);

    PrioRijTijdScenario(prioFC05karbus, d05_1, d05_2, tbtovg05karbus);

    PrioRijTijdScenario(prioFC08karbus, d08_1a, d08_2a, tbtovg08karbus);
    PrioRijTijdScenario(prioFC08karbus, d08_1b, d08_2b, tbtovg08karbus);
    PrioRijTijdScenario(prioFC08karbus, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08karbus, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC09karbus, d09_1, d09_2, tbtovg09karbus);

    PrioRijTijdScenario(prioFC11karbus, d11_1, d11_2, tbtovg11karbus);
    PrioRijTijdScenario(prioFC11karbus, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC22fiets, d22_1, NG, NG);

    PrioRijTijdScenario(prioFC28fiets, d28_1, NG, NG);

    PrioRijTijdScenario(prioFC61karbus, d61_1, d61_2, tbtovg61karbus);

    PrioRijTijdScenario(prioFC62karbus, d62_1a, d62_2a, tbtovg62karbus);
    PrioRijTijdScenario(prioFC62karbus, d62_1b, d62_2b, tbtovg62karbus);

    PrioRijTijdScenario(prioFC67karbus, d67_1, d67_2, tbtovg67karbus);

    PrioRijTijdScenario(prioFC68karbus, d68_1a, d68_2a, tbtovg68karbus);
    PrioRijTijdScenario(prioFC68karbus, d68_1b, d68_2b, tbtovg68karbus);

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
    /* Prioriteit-inmeldingen */
    PrioInmelden(prioFC02karbus, SH[hprioin02karbus], iInstPrioriteitsNiveau[prioFC02karbus], iInstPrioriteitsOpties[prioFC02karbus], 0, 0);
    PrioInmelden(prioFC03karbus, SH[hprioin03karbus], iInstPrioriteitsNiveau[prioFC03karbus], iInstPrioriteitsOpties[prioFC03karbus], 0, 0);
    PrioInmelden(prioFC05karbus, SH[hprioin05karbus], iInstPrioriteitsNiveau[prioFC05karbus], iInstPrioriteitsOpties[prioFC05karbus], 0, 0);
    PrioInmelden(prioFC08karbus, SH[hprioin08karbus], iInstPrioriteitsNiveau[prioFC08karbus], iInstPrioriteitsOpties[prioFC08karbus], 0, 0);
    PrioInmelden(prioFC09karbus, SH[hprioin09karbus], iInstPrioriteitsNiveau[prioFC09karbus], iInstPrioriteitsOpties[prioFC09karbus], 0, 0);
    PrioInmelden(prioFC11karbus, SH[hprioin11karbus], iInstPrioriteitsNiveau[prioFC11karbus], iInstPrioriteitsOpties[prioFC11karbus], 0, 0);
    PrioInmelden(prioFC22fiets, SH[hprioin22fiets], iInstPrioriteitsNiveau[prioFC22fiets], iInstPrioriteitsOpties[prioFC22fiets], 0, 0);
    PrioInmelden(prioFC28fiets, SH[hprioin28fiets], iInstPrioriteitsNiveau[prioFC28fiets], iInstPrioriteitsOpties[prioFC28fiets], 0, 0);
    PrioInmelden(prioFC61karbus, SH[hprioin61karbus], iInstPrioriteitsNiveau[prioFC61karbus], iInstPrioriteitsOpties[prioFC61karbus], 0, 0);
    PrioInmelden(prioFC62karbus, SH[hprioin62karbus], iInstPrioriteitsNiveau[prioFC62karbus], iInstPrioriteitsOpties[prioFC62karbus], 0, 0);
    PrioInmelden(prioFC67karbus, SH[hprioin67karbus], iInstPrioriteitsNiveau[prioFC67karbus], iInstPrioriteitsOpties[prioFC67karbus], 0, 0);
    PrioInmelden(prioFC68karbus, SH[hprioin68karbus], iInstPrioriteitsNiveau[prioFC68karbus], iInstPrioriteitsOpties[prioFC68karbus], 0, 0);

    /* Prioriteit-uitmeldingen */
    PrioUitmelden(prioFC02karbus, SH[hpriouit02karbus]);
    PrioUitmelden(prioFC03karbus, SH[hpriouit03karbus]);
    PrioUitmelden(prioFC05karbus, SH[hpriouit05karbus]);
    PrioUitmelden(prioFC08karbus, SH[hpriouit08karbus]);
    PrioUitmelden(prioFC09karbus, SH[hpriouit09karbus]);
    PrioUitmelden(prioFC11karbus, SH[hpriouit11karbus]);
    PrioUitmelden(prioFC22fiets, SH[hpriouit22fiets]);
    PrioUitmelden(prioFC28fiets, SH[hpriouit28fiets]);
    PrioUitmelden(prioFC61karbus, SH[hpriouit61karbus]);
    PrioUitmelden(prioFC62karbus, SH[hpriouit62karbus]);
    PrioUitmelden(prioFC67karbus, SH[hpriouit67karbus]);
    PrioUitmelden(prioFC68karbus, SH[hpriouit68karbus]);

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

    /* Inmelding HD fc02 */
    IH[hhdin02kar] = RT[thdin02kar] = !T[thdin02kar] && SCH[schhdin02kar] && (DSIMelding_HD_V1(PRM[prmkarsghd02], CIF_DSIN, SCH[schchecksirene02]));
    IH[hhdin02] = IH[hhdin02kar];

    /* Inmelding HD fc03 */
    IH[hhdin03kar] = RT[thdin03kar] = !T[thdin03kar] && SCH[schhdin03kar] && (DSIMelding_HD_V1(PRM[prmkarsghd03], CIF_DSIN, SCH[schchecksirene03]));
    IH[hhdin03] = IH[hhdin03kar];

    /* Inmelding HD fc05 */
    IH[hhdin05kar] = RT[thdin05kar] = !T[thdin05kar] && SCH[schhdin05kar] && (DSIMelding_HD_V1(PRM[prmkarsghd05], CIF_DSIN, SCH[schchecksirene05]));
    IH[hhdin05] = IH[hhdin05kar];

    /* Inmelding HD fc08 */
    IH[hhdin08kar] = RT[thdin08kar] = !T[thdin08kar] && SCH[schhdin08kar] && (DSIMelding_HD_V1(PRM[prmkarsghd08], CIF_DSIN, SCH[schchecksirene08]));
    IH[hhdin08] = IH[hhdin08kar];

    /* Inmelding HD fc09 */
    IH[hhdin09kar] = RT[thdin09kar] = !T[thdin09kar] && SCH[schhdin09kar] && (DSIMelding_HD_V1(PRM[prmkarsghd09], CIF_DSIN, SCH[schchecksirene09]));
    IH[hhdin09] = IH[hhdin09kar];

    /* Inmelding HD fc11 */
    IH[hhdin11kar] = RT[thdin11kar] = !T[thdin11kar] && SCH[schhdin11kar] && (DSIMelding_HD_V1(PRM[prmkarsghd11], CIF_DSIN, SCH[schchecksirene11]));
    IH[hhdin11] = IH[hhdin11kar];

    /* Inmelding HD fc61 */
    IH[hhdin61kar] = RT[thdin61kar] = !T[thdin61kar] && SCH[schhdin61kar] && (DSIMelding_HD_V1(PRM[prmkarsghd61], CIF_DSIN, SCH[schchecksirene61]));
    IH[hhdin61] = IH[hhdin61kar];

    /* Inmelding HD fc62 */
    IH[hhdin62kar] = RT[thdin62kar] = !T[thdin62kar] && SCH[schhdin62kar] && (DSIMelding_HD_V1(PRM[prmkarsghd62], CIF_DSIN, SCH[schchecksirene62]));
    IH[hhdin62] = IH[hhdin62kar];

    /* Inmelding HD fc67 */
    IH[hhdin67kar] = RT[thdin67kar] = !T[thdin67kar] && SCH[schhdin67kar] && (DSIMelding_HD_V1(PRM[prmkarsghd67], CIF_DSIN, SCH[schchecksirene67]));
    IH[hhdin67] = IH[hhdin67kar];

    /* Inmelding HD fc68 */
    IH[hhdin68kar] = RT[thdin68kar] = !T[thdin68kar] && SCH[schhdin68kar] && (DSIMelding_HD_V1(PRM[prmkarsghd68], CIF_DSIN, SCH[schchecksirene68]));
    IH[hhdin68] = IH[hhdin68kar];

    /* Uitmelding HD fc02 */
    IH[hhduit02kar] = RT[thduit02kar] = !T[thduit02kar] && SCH[schhduit02kar] && (DSIMelding_HD_V1(PRM[prmkarsghd02], CIF_DSUIT, FALSE));
    IH[hhduit02] = IH[hhduit02kar];

    /* Uitmelding HD fc03 */
    IH[hhduit03kar] = RT[thduit03kar] = !T[thduit03kar] && SCH[schhduit03kar] && (DSIMelding_HD_V1(PRM[prmkarsghd03], CIF_DSUIT, FALSE));
    IH[hhduit03] = IH[hhduit03kar];

    /* Uitmelding HD fc05 */
    IH[hhduit05kar] = RT[thduit05kar] = !T[thduit05kar] && SCH[schhduit05kar] && (DSIMelding_HD_V1(PRM[prmkarsghd05], CIF_DSUIT, FALSE));
    IH[hhduit05] = IH[hhduit05kar];

    /* Uitmelding HD fc08 */
    IH[hhduit08kar] = RT[thduit08kar] = !T[thduit08kar] && SCH[schhduit08kar] && (DSIMelding_HD_V1(PRM[prmkarsghd08], CIF_DSUIT, FALSE));
    IH[hhduit08] = IH[hhduit08kar];

    /* Uitmelding HD fc09 */
    IH[hhduit09kar] = RT[thduit09kar] = !T[thduit09kar] && SCH[schhduit09kar] && (DSIMelding_HD_V1(PRM[prmkarsghd09], CIF_DSUIT, FALSE));
    IH[hhduit09] = IH[hhduit09kar];

    /* Uitmelding HD fc11 */
    IH[hhduit11kar] = RT[thduit11kar] = !T[thduit11kar] && SCH[schhduit11kar] && (DSIMelding_HD_V1(PRM[prmkarsghd11], CIF_DSUIT, FALSE));
    IH[hhduit11] = IH[hhduit11kar];

    /* Uitmelding HD fc61 */
    IH[hhduit61kar] = RT[thduit61kar] = !T[thduit61kar] && SCH[schhduit61kar] && (DSIMelding_HD_V1(PRM[prmkarsghd61], CIF_DSUIT, FALSE));
    IH[hhduit61] = IH[hhduit61kar];

    /* Uitmelding HD fc62 */
    IH[hhduit62kar] = RT[thduit62kar] = !T[thduit62kar] && SCH[schhduit62kar] && (DSIMelding_HD_V1(PRM[prmkarsghd62], CIF_DSUIT, FALSE));
    IH[hhduit62] = IH[hhduit62kar];

    /* Uitmelding HD fc67 */
    IH[hhduit67kar] = RT[thduit67kar] = !T[thduit67kar] && SCH[schhduit67kar] && (DSIMelding_HD_V1(PRM[prmkarsghd67], CIF_DSUIT, FALSE));
    IH[hhduit67] = IH[hhduit67kar];

    /* Uitmelding HD fc68 */
    IH[hhduit68kar] = RT[thduit68kar] = !T[thduit68kar] && SCH[schhduit68kar] && (DSIMelding_HD_V1(PRM[prmkarsghd68], CIF_DSUIT, FALSE));
    IH[hhduit68] = IH[hhduit68kar];

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
#if defined CCOL_IS_SPECIAL && defined PRACTICE_TEST && !defined NO_PRIO
    is_special_signals();
#endif
}

void OnderMaximumExtra(void)
{
}
void AfkapGroenExtra(void)
{
}
void StartGroenMomentenExtra(void)
{
}
void PrioAfkappenExtra(void)
{
    int fc;

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
}
void PrioGroenVasthoudenExtra(void)
{
}
void PrioMeetKriteriumExtra(void)
{
}
/* ------------------------------------
   Prioriteitsopties voor PRIO ingrepen
   ------------------------------------ */
void PrioriteitsOpties(void)
{
    /* Geconditioneerde prioriteit instellen */
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

    /* Geen prioriteit bij file stroom afwaarts */
    if (IH[hfileFile68af])
    {
        iPrioriteitsOpties[prioFC08karbus] = poAanvraag;
        iPrioriteitsOpties[prioFC11karbus] = poAanvraag;
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
        iPrioriteit[prioFC11karbus] = 0;
    }
}
/* ------------------------------------
   Extra code tegenhouden conflicten OV
   ------------------------------------ */
void TegenhoudenConflictenExtra(void)
{
    if (MM[mwtvm24] && MM[mwtvm24] <= PRM[prmwtvnhaltmin])
    {
        RR[fc24] &= ~PRIO_RR_BIT;
    }
}

/* ---------------------------
   Post afhandeling prioriteit
   --------------------------- */
void PostAfhandelingPrio(void)
{
    boolv isHD = FALSE;
    boolv isWTV = FALSE;
    int fc;

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
        RR[fc21] &= ~BIT6;
        FM[fc21] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3231] || T[tnlsgd3231])
    {
        Z[fc31] &= ~BIT6;
        RR[fc31] &= ~BIT6;
        FM[fc31] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3132] || T[tnlsgd3132])
    {
        Z[fc32] &= ~BIT6;
        RR[fc32] &= ~BIT6;
        FM[fc32] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3433] || T[tnlsgd3433])
    {
        Z[fc33] &= ~BIT6;
        RR[fc33] &= ~BIT6;
        FM[fc33] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3334] || T[tnlsgd3334])
    {
        Z[fc34] &= ~BIT6;
        RR[fc34] &= ~BIT6;
        FM[fc34] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0262] || T[tnlfg0262] || RT[tnlfgd0262] || T[tnlfgd0262] || RT[tnleg0262] || T[tnleg0262] || RT[tnlegd0262] || T[tnlegd0262])
    {
        Z[fc62] &= ~BIT6;
        RR[fc62] &= ~BIT6;
        FM[fc62] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0868] || T[tnlfg0868] || RT[tnlfgd0868] || T[tnlfgd0868] || RT[tnleg0868] || T[tnleg0868] || RT[tnlegd0868] || T[tnlegd0868] || RT[tnlfg1168] || T[tnlfg1168] || RT[tnlfgd1168] || T[tnlfgd1168] || RT[tnleg1168] || T[tnleg1168] || RT[tnlegd1168] || T[tnlegd1168])
    {
        Z[fc68] &= ~BIT6;
        RR[fc68] &= ~BIT6;
        FM[fc68] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg8281] || T[tnlfg8281] || RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnleg8281] || T[tnleg8281] || RT[tnlegd8281] || T[tnlegd8281])
    {
        Z[fc81] &= ~BIT6;
        RR[fc81] &= ~BIT6;
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


}
/* ---------------------------------------
   PrioPARCorrecties corrigeert de PAR van
   gesynchroniseerde richtingen.
   --------------------------------------- */
void PrioPARCorrecties(void)
{
    int fc;
}

/* -------------------------------------------------------
   PrioCcol zorgt voor het bijwerken van de CCOL-elementen
   voor het richtingen met prioriteit.
   ------------------------------------------------------- */
void PrioCcol(void) {
    PrioCcolElementen(prioFC02karbus, tgb02karbus, trt02karbus, hprio02karbus, cvc02karbus, tblk02karbus);
    PrioCcolElementen(prioFC03karbus, tgb03karbus, trt03karbus, hprio03karbus, cvc03karbus, tblk03karbus);
    PrioCcolElementen(prioFC05karbus, tgb05karbus, trt05karbus, hprio05karbus, cvc05karbus, tblk05karbus);
    PrioCcolElementen(prioFC08karbus, tgb08karbus, trt08karbus, hprio08karbus, cvc08karbus, tblk08karbus);
    PrioCcolElementen(prioFC09karbus, tgb09karbus, trt09karbus, hprio09karbus, cvc09karbus, tblk09karbus);
    PrioCcolElementen(prioFC11karbus, tgb11karbus, trt11karbus, hprio11karbus, cvc11karbus, tblk11karbus);
    PrioCcolElementen(prioFC22fiets, tgb22fiets, trt22fiets, hprio22fiets, cvc22fiets, tblk22fiets);
    PrioCcolElementen(prioFC28fiets, tgb28fiets, trt28fiets, hprio28fiets, cvc28fiets, tblk28fiets);
    PrioCcolElementen(prioFC61karbus, tgb61karbus, trt61karbus, hprio61karbus, cvc61karbus, tblk61karbus);
    PrioCcolElementen(prioFC62karbus, tgb62karbus, trt62karbus, hprio62karbus, cvc62karbus, tblk62karbus);
    PrioCcolElementen(prioFC67karbus, tgb67karbus, trt67karbus, hprio67karbus, cvc67karbus, tblk67karbus);
    PrioCcolElementen(prioFC68karbus, tgb68karbus, trt68karbus, hprio68karbus, cvc68karbus, tblk68karbus);
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
#if defined CCOL_IS_SPECIAL && !defined NO_PRIO
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
