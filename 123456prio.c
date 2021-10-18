/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   11.0
    TLCGEN:   0.10.2.0
   CCOLGEN:   0.10.2.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    06-07-2021   Cyril       basisversie
 * 1.1.0    27-07-2021   Peter       TISG-matrix toegevoegd
 * 1.4.0    19-08-2021   Cyril       TLCGen0.9.10.0; fc21+fc67 toegeveogd
 * 1.5.0    14-09-2021   Peter       Kleine aanpassingen m.b.t. TISG-matrix
 * 1.6.0    20-09-2021   Cyril       Nieuwe versie TLCGen (20092021 beta); handmatig Real_los + F11
 * 1.9.0    18-10-2021   Cyril       Filelussen en fc82 fc81 toegeovoegd
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
    #include "cif.inc"    /* interface                         */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
        #include "xyprintf.h" /* Printen debuginfo                 */
        extern boolv display;
    #endif
    #include "ccolfunc.h"
    #include "ccol_mon.h"
    #include "extra_func.h"
    #define PRIO_CHECK_WAGENNMR /* check op wagendienstnummer          */
    #include "extra_func_prio.h"

#define MAX_AANTAL_INMELDINGEN           10
#define DEFAULT_MAX_WACHTTIJD           120
#define NO_REALISEREN_TOEGESTAAN

extern mulv DB_old[];
extern mulv TDH_old[];

#include "prio.c"

/* Variabele tbv start KAR ondergedrag timer bij starten regeling */
static char startkarog = FALSE;

/* Variabelen tbv registreren stiptheid bij inmelding via KAR: tbv bepalen prioriteit in OV.ADD */
int iKARInSTP02bus[MAX_AANTAL_INMELDINGEN] = { 0 }; int iAantInm02bus = 0;
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

}

void PrioInstellingen(void) 
{
    /* ======================= */
    /* Instellingen PRIORITEIT */
    /* ======================= */


    /* Fasecyclus voor richtingen met PRIO */
    iFC_PRIOix[prioFC02bus] = fc02;
    iFC_PRIOix[prioFC03bus] = fc03;
    iFC_PRIOix[prioFC05bus] = fc05;
    iFC_PRIOix[prioFC08bus] = fc08;
    iFC_PRIOix[prioFC09bus] = fc09;
    iFC_PRIOix[prioFC11bus] = fc11;
    iFC_PRIOix[prioFC61bus] = fc61;
    iFC_PRIOix[prioFC62bus] = fc62;
    iFC_PRIOix[prioFC67bus] = fc67;
    iFC_PRIOix[prioFC68bus] = fc68;
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
    iT_GBix[prioFC02bus] = tgb02bus;
    iT_GBix[prioFC03bus] = tgb03bus;
    iT_GBix[prioFC05bus] = tgb05bus;
    iT_GBix[prioFC08bus] = tgb08bus;
    iT_GBix[prioFC09bus] = tgb09bus;
    iT_GBix[prioFC11bus] = tgb11bus;
    iT_GBix[prioFC61bus] = tgb61bus;
    iT_GBix[prioFC62bus] = tgb62bus;
    iT_GBix[prioFC67bus] = tgb67bus;
    iT_GBix[prioFC68bus] = tgb68bus;
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
    iH_PRIOix[prioFC02bus] = hprio02bus;
    iH_PRIOix[prioFC03bus] = hprio03bus;
    iH_PRIOix[prioFC05bus] = hprio05bus;
    iH_PRIOix[prioFC08bus] = hprio08bus;
    iH_PRIOix[prioFC09bus] = hprio09bus;
    iH_PRIOix[prioFC11bus] = hprio11bus;
    iH_PRIOix[prioFC61bus] = hprio61bus;
    iH_PRIOix[prioFC62bus] = hprio62bus;
    iH_PRIOix[prioFC67bus] = hprio67bus;
    iH_PRIOix[prioFC68bus] = hprio68bus;
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
    iInstPrioriteitsNiveau[prioFC02bus] = PRM[prmprio02bus]/1000L;
    iInstPrioriteitsNiveau[prioFC03bus] = PRM[prmprio03bus]/1000L;
    iInstPrioriteitsNiveau[prioFC05bus] = PRM[prmprio05bus]/1000L;
    iInstPrioriteitsNiveau[prioFC08bus] = PRM[prmprio08bus]/1000L;
    iInstPrioriteitsNiveau[prioFC09bus] = PRM[prmprio09bus]/1000L;
    iInstPrioriteitsNiveau[prioFC11bus] = PRM[prmprio11bus]/1000L;
    iInstPrioriteitsNiveau[prioFC61bus] = PRM[prmprio61bus]/1000L;
    iInstPrioriteitsNiveau[prioFC62bus] = PRM[prmprio62bus]/1000L;
    iInstPrioriteitsNiveau[prioFC67bus] = PRM[prmprio67bus]/1000L;
    iInstPrioriteitsNiveau[prioFC68bus] = PRM[prmprio68bus]/1000L;
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
    iInstPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmprio02bus);
    iInstPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmprio03bus);
    iInstPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmprio05bus);
    iInstPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmprio08bus);
    iInstPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmprio09bus);
    iInstPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmprio11bus);
    iInstPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmprio61bus);
    iInstPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmprio62bus);
    iInstPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmprio67bus);
    iInstPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmprio68bus);
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
    iGroenBewakingsTijd[prioFC02bus] = T_max[tgb02bus];
    iGroenBewakingsTijd[prioFC03bus] = T_max[tgb03bus];
    iGroenBewakingsTijd[prioFC05bus] = T_max[tgb05bus];
    iGroenBewakingsTijd[prioFC08bus] = T_max[tgb08bus];
    iGroenBewakingsTijd[prioFC09bus] = T_max[tgb09bus];
    iGroenBewakingsTijd[prioFC11bus] = T_max[tgb11bus];
    iGroenBewakingsTijd[prioFC61bus] = T_max[tgb61bus];
    iGroenBewakingsTijd[prioFC62bus] = T_max[tgb62bus];
    iGroenBewakingsTijd[prioFC67bus] = T_max[tgb67bus];
    iGroenBewakingsTijd[prioFC68bus] = T_max[tgb68bus];
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
    iRTSOngehinderd[prioFC02bus] = PRM[prmrto02bus];
    iRTSOngehinderd[prioFC03bus] = PRM[prmrto03bus];
    iRTSOngehinderd[prioFC05bus] = PRM[prmrto05bus];
    iRTSOngehinderd[prioFC08bus] = PRM[prmrto08bus];
    iRTSOngehinderd[prioFC09bus] = PRM[prmrto09bus];
    iRTSOngehinderd[prioFC11bus] = PRM[prmrto11bus];
    iRTSOngehinderd[prioFC61bus] = PRM[prmrto61bus];
    iRTSOngehinderd[prioFC62bus] = PRM[prmrto62bus];
    iRTSOngehinderd[prioFC67bus] = PRM[prmrto67bus];
    iRTSOngehinderd[prioFC68bus] = PRM[prmrto68bus];
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
    iRTSBeperktGehinderd[prioFC02bus] = PRM[prmrtbg02bus];
    iRTSBeperktGehinderd[prioFC03bus] = PRM[prmrtbg03bus];
    iRTSBeperktGehinderd[prioFC05bus] = PRM[prmrtbg05bus];
    iRTSBeperktGehinderd[prioFC08bus] = PRM[prmrtbg08bus];
    iRTSBeperktGehinderd[prioFC09bus] = PRM[prmrtbg09bus];
    iRTSBeperktGehinderd[prioFC11bus] = PRM[prmrtbg11bus];
    iRTSBeperktGehinderd[prioFC61bus] = PRM[prmrtbg61bus];
    iRTSBeperktGehinderd[prioFC62bus] = PRM[prmrtbg62bus];
    iRTSBeperktGehinderd[prioFC67bus] = PRM[prmrtbg67bus];
    iRTSBeperktGehinderd[prioFC68bus] = PRM[prmrtbg68bus];
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
    iRTSGehinderd[prioFC02bus] = PRM[prmrtg02bus];
    iRTSGehinderd[prioFC03bus] = PRM[prmrtg03bus];
    iRTSGehinderd[prioFC05bus] = PRM[prmrtg05bus];
    iRTSGehinderd[prioFC08bus] = PRM[prmrtg08bus];
    iRTSGehinderd[prioFC09bus] = PRM[prmrtg09bus];
    iRTSGehinderd[prioFC11bus] = PRM[prmrtg11bus];
    iRTSGehinderd[prioFC61bus] = PRM[prmrtg61bus];
    iRTSGehinderd[prioFC62bus] = PRM[prmrtg62bus];
    iRTSGehinderd[prioFC67bus] = PRM[prmrtg67bus];
    iRTSGehinderd[prioFC68bus] = PRM[prmrtg68bus];
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
    iOnderMaximum[prioFC02bus] = PRM[prmomx02bus];
    iOnderMaximum[prioFC03bus] = PRM[prmomx03bus];
    iOnderMaximum[prioFC05bus] = PRM[prmomx05bus];
    iOnderMaximum[prioFC08bus] = PRM[prmomx08bus];
    iOnderMaximum[prioFC09bus] = PRM[prmomx09bus];
    iOnderMaximum[prioFC11bus] = PRM[prmomx11bus];
    iOnderMaximum[prioFC61bus] = PRM[prmomx61bus];
    iOnderMaximum[prioFC62bus] = PRM[prmomx62bus];
    iOnderMaximum[prioFC67bus] = PRM[prmomx67bus];
    iOnderMaximum[prioFC68bus] = PRM[prmomx68bus];
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
    iBlokkeringsTijd[prioFC02bus] = T_max[tblk02bus];
    iBlokkeringsTijd[prioFC03bus] = T_max[tblk03bus];
    iBlokkeringsTijd[prioFC05bus] = T_max[tblk05bus];
    iBlokkeringsTijd[prioFC08bus] = T_max[tblk08bus];
    iBlokkeringsTijd[prioFC09bus] = T_max[tblk09bus];
    iBlokkeringsTijd[prioFC11bus] = T_max[tblk11bus];
    iBlokkeringsTijd[prioFC61bus] = T_max[tblk61bus];
    iBlokkeringsTijd[prioFC62bus] = T_max[tblk62bus];
    iBlokkeringsTijd[prioFC67bus] = T_max[tblk67bus];
    iBlokkeringsTijd[prioFC68bus] = T_max[tblk68bus];
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
    iSelDetFoutNaGB[prioFC02bus] = SCH[schupinagb02bus];
    iSelDetFoutNaGB[prioFC03bus] = SCH[schupinagb03bus];
    iSelDetFoutNaGB[prioFC05bus] = SCH[schupinagb05bus];
    iSelDetFoutNaGB[prioFC08bus] = SCH[schupinagb08bus];
    iSelDetFoutNaGB[prioFC09bus] = SCH[schupinagb09bus];
    iSelDetFoutNaGB[prioFC11bus] = SCH[schupinagb11bus];
    iSelDetFoutNaGB[prioFC61bus] = SCH[schupinagb61bus];
    iSelDetFoutNaGB[prioFC62bus] = SCH[schupinagb62bus];
    iSelDetFoutNaGB[prioFC67bus] = SCH[schupinagb67bus];
    iSelDetFoutNaGB[prioFC68bus] = SCH[schupinagb68bus];
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
    iMaximumWachtTijd[fc84] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc82] = PRM[prmmwtfts];
    iMaximumWachtTijd[fc81] = PRM[prmmwtfts];

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
    iInstPercMaxGroenTijdTerugKomen[fc82] = PRM[prmpmgt82];
    iInstPercMaxGroenTijdTerugKomen[fc84] = PRM[prmpmgt84];
    iInstPercMaxGroenTijdTerugKomen[fc81] = PRM[prmpmgt81];

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
    iInstMinTerugKomGroenTijd[fc82] = PRM[prmognt82];
    iInstMinTerugKomGroenTijd[fc84] = PRM[prmognt84];
    iInstMinTerugKomGroenTijd[fc81] = PRM[prmognt81];

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
    iInstAantalMalenNietAfkappen[fc82] = PRM[prmnofm82];
    iInstAantalMalenNietAfkappen[fc84] = PRM[prmnofm84];
    iInstAantalMalenNietAfkappen[fc81] = PRM[prmnofm81];

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
    iAfkapGroenTijd[fc82] = PRM[prmmgcov82];
    iAfkapGroenTijd[fc84] = PRM[prmmgcov84];
    iAfkapGroenTijd[fc81] = PRM[prmmgcov81];

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
    iPercGroenTijd[fc82] = PRM[prmpmgcov82];
    iPercGroenTijd[fc84] = PRM[prmpmgcov84];
    iPercGroenTijd[fc81] = PRM[prmpmgcov81];

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
    iInstOphoogPercentageMG[fc82] = PRM[prmohpmg82];
    iInstOphoogPercentageMG[fc84] = PRM[prmohpmg84];
    iInstOphoogPercentageMG[fc81] = PRM[prmohpmg81];

    /* Benodigde ruimte voor alternatieve realisatie tijdens een OV ingreep */
    iPRM_ALTP[fc02] = PRM[prmaltp02];
    iPRM_ALTP[fc03] = PRM[prmaltp03];
    iPRM_ALTP[fc05] = PRM[prmaltp05];
    iPRM_ALTP[fc08] = PRM[prmaltp08];
    iPRM_ALTP[fc09] = PRM[prmaltp09];
    iPRM_ALTP[fc11] = PRM[prmaltp11];
    iPRM_ALTP[fc21] = PRM[prmaltp21];
    iPRM_ALTP[fc22] = PRM[prmaltp2232];
    iPRM_ALTP[fc24] = PRM[prmaltp2434];
    iPRM_ALTP[fc26] = PRM[prmaltp26];
    iPRM_ALTP[fc28] = PRM[prmaltp28];
    iPRM_ALTP[fc31] = PRM[prmaltp31];
    iPRM_ALTP[fc32] = PRM[prmaltp2232];
    iPRM_ALTP[fc33] = PRM[prmaltp3384];
    iPRM_ALTP[fc34] = PRM[prmaltp2434];
    iPRM_ALTP[fc38] = PRM[prmaltp38];
    iPRM_ALTP[fc61] = PRM[prmaltp61];
    iPRM_ALTP[fc62] = PRM[prmaltp62];
    iPRM_ALTP[fc67] = PRM[prmaltp67];
    iPRM_ALTP[fc68] = PRM[prmaltp68];
    iPRM_ALTP[fc82] = PRM[prmaltp82];
    iPRM_ALTP[fc84] = PRM[prmaltp3384];
    iPRM_ALTP[fc81] = PRM[prmaltp81];

    /* Richting mag alternatief realiseren tijdens een OV ingreep */
    iSCH_ALTG[fc02] = SCH[schaltg02];
    iSCH_ALTG[fc03] = SCH[schaltg03];
    iSCH_ALTG[fc05] = SCH[schaltg05];
    iSCH_ALTG[fc08] = SCH[schaltg08];
    iSCH_ALTG[fc09] = SCH[schaltg09];
    iSCH_ALTG[fc11] = SCH[schaltg11];
    iSCH_ALTG[fc21] = SCH[schaltg21];
    iSCH_ALTG[fc22] = SCH[schaltg2232];
    iSCH_ALTG[fc24] = SCH[schaltg2434];
    iSCH_ALTG[fc26] = SCH[schaltg26];
    iSCH_ALTG[fc28] = SCH[schaltg28];
    iSCH_ALTG[fc31] = SCH[schaltg31];
    iSCH_ALTG[fc32] = SCH[schaltg2232];
    iSCH_ALTG[fc33] = SCH[schaltg3384];
    iSCH_ALTG[fc34] = SCH[schaltg2434];
    iSCH_ALTG[fc38] = SCH[schaltg38];
    iSCH_ALTG[fc61] = SCH[schaltg61];
    iSCH_ALTG[fc62] = SCH[schaltg62];
    iSCH_ALTG[fc67] = SCH[schaltg67];
    iSCH_ALTG[fc68] = SCH[schaltg68];
    iSCH_ALTG[fc82] = SCH[schaltg82];
    iSCH_ALTG[fc84] = SCH[schaltg3384];
    iSCH_ALTG[fc81] = SCH[schaltg81];

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
    iInstAfkapGroenAlt[fc84] = PRM[prmaltg84];
    iInstAfkapGroenAlt[fc82] = PRM[prmaltg82];
    iInstAfkapGroenAlt[fc81] = PRM[prmaltg81];

    /* definitie van de meerealisaties voor de hulpdiensten */
    iPrioMeeRealisatie[fc02][0] = fc03;
    iPrioMeeRealisatie[fc02][1] = fc61;
    iPrioMeeRealisatie[fc02][2] = fc62;
    iPrioMeeRealisatie[fc03][0] = fc02;
    iPrioMeeRealisatie[fc03][1] = fc61;
    iPrioMeeRealisatie[fc03][2] = fc62;
    iPrioMeeRealisatie[fc05][0] = fc61;
    iPrioMeeRealisatie[fc05][1] = fc62;
    iPrioMeeRealisatie[fc08][0] = fc09;
    iPrioMeeRealisatie[fc08][1] = fc67;
    iPrioMeeRealisatie[fc08][2] = fc68;
    iPrioMeeRealisatie[fc09][0] = fc08;
    iPrioMeeRealisatie[fc09][1] = fc67;
    iPrioMeeRealisatie[fc09][2] = fc68;
    iPrioMeeRealisatie[fc11][0] = fc67;
    iPrioMeeRealisatie[fc11][1] = fc68;
    iPrioMeeRealisatie[fc61][0] = fc62;
    iPrioMeeRealisatie[fc62][0] = fc61;
    iPrioMeeRealisatie[fc67][0] = fc68;
    iPrioMeeRealisatie[fc68][0] = fc67;

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
    PrioRijTijdScenario(prioFC02bus, d02_1a, d02_2a, tbtovg02bus);
    PrioRijTijdScenario(prioFC02bus, d02_1b, d02_2b, tbtovg02bus);
    PrioRijTijdScenario(prioFC02bus, NG, d02_3a, NG);
    PrioRijTijdScenario(prioFC02bus, NG, d02_3b, NG);

    PrioRijTijdScenario(prioFC03bus, d03_1, d03_2, tbtovg03bus);

    PrioRijTijdScenario(prioFC05bus, d05_1, d05_2, tbtovg05bus);

    PrioRijTijdScenario(prioFC08bus, d08_1a, d08_2a, tbtovg08bus);
    PrioRijTijdScenario(prioFC08bus, d08_1b, d08_2b, tbtovg08bus);
    PrioRijTijdScenario(prioFC08bus, NG, d08_3a, NG);
    PrioRijTijdScenario(prioFC08bus, NG, d08_3b, NG);

    PrioRijTijdScenario(prioFC09bus, d09_1, d09_2, tbtovg09bus);
    PrioRijTijdScenario(prioFC09bus, NG, d09_3, NG);

    PrioRijTijdScenario(prioFC11bus, d11_1, d11_2, tbtovg11bus);
    PrioRijTijdScenario(prioFC11bus, NG, d11_3, NG);

    PrioRijTijdScenario(prioFC61bus, d61_1, d61_2, tbtovg61bus);

    PrioRijTijdScenario(prioFC62bus, d62_1a, d62_2a, tbtovg62bus);
    PrioRijTijdScenario(prioFC62bus, d62_1b, d62_2b, tbtovg62bus);

    PrioRijTijdScenario(prioFC67bus, d67_1, d67_2, tbtovg67bus);

    PrioRijTijdScenario(prioFC68bus, d68_1a, d68_2a, tbtovg68bus);
    PrioRijTijdScenario(prioFC68bus, d68_1b, d68_2b, tbtovg68bus);

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
    PrioRijTijdScenario(hdFC09, NG, d09_3, NG);
    PrioRijTijdScenario(hdFC11, d11_1, d11_2, tbtovg11hd);
    PrioRijTijdScenario(hdFC11, NG, d11_3, NG);
    PrioRijTijdScenario(hdFC61, d61_1, d61_2, tbtovg61hd);
    PrioRijTijdScenario(hdFC62, d62_1a, d62_2a, tbtovg62hd);
    PrioRijTijdScenario(hdFC62, d62_1b, d62_2b, tbtovg62hd);
    PrioRijTijdScenario(hdFC67, d67_1, d67_2, tbtovg67hd);
    PrioRijTijdScenario(hdFC68, d68_1a, d68_2a, tbtovg68hd);
    PrioRijTijdScenario(hdFC68, d68_1b, d68_2b, tbtovg68hd);


#ifndef NO_TIMETOX
    if ((P[fc02] & BIT11) && C[cvc02bus] && (iRijTimer[prioFC02bus] < iRijTijd[prioFC02bus])) iRijTijd[prioFC02bus] = 0;
    if ((P[fc03] & BIT11) && C[cvc03bus] && (iRijTimer[prioFC03bus] < iRijTijd[prioFC03bus])) iRijTijd[prioFC03bus] = 0;
    if ((P[fc05] & BIT11) && C[cvc05bus] && (iRijTimer[prioFC05bus] < iRijTijd[prioFC05bus])) iRijTijd[prioFC05bus] = 0;
    if ((P[fc08] & BIT11) && C[cvc08bus] && (iRijTimer[prioFC08bus] < iRijTijd[prioFC08bus])) iRijTijd[prioFC08bus] = 0;
    if ((P[fc09] & BIT11) && C[cvc09bus] && (iRijTimer[prioFC09bus] < iRijTijd[prioFC09bus])) iRijTijd[prioFC09bus] = 0;
    if ((P[fc11] & BIT11) && C[cvc11bus] && (iRijTimer[prioFC11bus] < iRijTijd[prioFC11bus])) iRijTijd[prioFC11bus] = 0;
    if ((P[fc61] & BIT11) && C[cvc61bus] && (iRijTimer[prioFC61bus] < iRijTijd[prioFC61bus])) iRijTijd[prioFC61bus] = 0;
    if ((P[fc62] & BIT11) && C[cvc62bus] && (iRijTimer[prioFC62bus] < iRijTijd[prioFC62bus])) iRijTijd[prioFC62bus] = 0;
    if ((P[fc67] & BIT11) && C[cvc67bus] && (iRijTimer[prioFC67bus] < iRijTijd[prioFC67bus])) iRijTijd[prioFC67bus] = 0;
    if ((P[fc68] & BIT11) && C[cvc68bus] && (iRijTimer[prioFC68bus] < iRijTijd[prioFC68bus])) iRijTijd[prioFC68bus] = 0;
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
    /* Pririteit-inmeldingen */
    PrioInmelden(prioFC02bus, SH[hprioin02bus], iInstPrioriteitsNiveau[prioFC02bus], iInstPrioriteitsOpties[prioFC02bus], 0, 0);
    PrioInmelden(prioFC03bus, SH[hprioin03bus], iInstPrioriteitsNiveau[prioFC03bus], iInstPrioriteitsOpties[prioFC03bus], 0, 0);
    PrioInmelden(prioFC05bus, SH[hprioin05bus], iInstPrioriteitsNiveau[prioFC05bus], iInstPrioriteitsOpties[prioFC05bus], 0, 0);
    PrioInmelden(prioFC08bus, SH[hprioin08bus], iInstPrioriteitsNiveau[prioFC08bus], iInstPrioriteitsOpties[prioFC08bus], 0, 0);
    PrioInmelden(prioFC09bus, SH[hprioin09bus], iInstPrioriteitsNiveau[prioFC09bus], iInstPrioriteitsOpties[prioFC09bus], 0, 0);
    PrioInmelden(prioFC11bus, SH[hprioin11bus], iInstPrioriteitsNiveau[prioFC11bus], iInstPrioriteitsOpties[prioFC11bus], 0, 0);
    PrioInmelden(prioFC61bus, SH[hprioin61bus], iInstPrioriteitsNiveau[prioFC61bus], iInstPrioriteitsOpties[prioFC61bus], 0, 0);
    PrioInmelden(prioFC62bus, SH[hprioin62bus], iInstPrioriteitsNiveau[prioFC62bus], iInstPrioriteitsOpties[prioFC62bus], 0, 0);
    PrioInmelden(prioFC67bus, SH[hprioin67bus], iInstPrioriteitsNiveau[prioFC67bus], iInstPrioriteitsOpties[prioFC67bus], 0, 0);
    PrioInmelden(prioFC68bus, SH[hprioin68bus], iInstPrioriteitsNiveau[prioFC68bus], iInstPrioriteitsOpties[prioFC68bus], 0, 0);

    /* Pririteit-uitmeldingen */
    PrioUitmelden(prioFC02bus, SH[hpriouit02bus]);
    PrioUitmelden(prioFC03bus, SH[hpriouit03bus]);
    PrioUitmelden(prioFC05bus, SH[hpriouit05bus]);
    PrioUitmelden(prioFC08bus, SH[hpriouit08bus]);
    PrioUitmelden(prioFC09bus, SH[hpriouit09bus]);
    PrioUitmelden(prioFC11bus, SH[hpriouit11bus]);
    PrioUitmelden(prioFC61bus, SH[hpriouit61bus]);
    PrioUitmelden(prioFC62bus, SH[hpriouit62bus]);
    PrioUitmelden(prioFC67bus, SH[hpriouit67bus]);
    PrioUitmelden(prioFC68bus, SH[hpriouit68bus]);

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
    IH[hprioin02bus] = IH[hprioin02buskar] = FALSE;
    if (SCH[schprioin02buskar])
    {
        IH[hprioin02buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg02],TRUE, CIF_DSIN, WDNST_check_in(fc02));
    }
    IH[hprioin02bus] = IH[hprioin02buskar];

    /* Uitmelding fc02 type Bus */
    IH[hpriouit02bus] = IH[hpriouit02buskar] = FALSE;
    if (SCH[schpriouit02buskar])
    {
        IH[hpriouit02buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg02],TRUE, CIF_DSUIT, WDNST_check_uit(fc02));
    }
    IH[hpriouit02bus] = IH[hpriouit02buskar];

    /* Inmelding fc03 type Bus */
    IH[hprioin03bus] = IH[hprioin03buskar] = FALSE;
    if (SCH[schprioin03buskar])
    {
        IH[hprioin03buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg03],TRUE, CIF_DSIN, WDNST_check_in(fc03));
    }
    IH[hprioin03bus] = IH[hprioin03buskar];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03bus] = IH[hpriouit03buskar] = FALSE;
    if (SCH[schpriouit03buskar])
    {
        IH[hpriouit03buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg03],TRUE, CIF_DSUIT, WDNST_check_uit(fc03));
    }
    IH[hpriouit03bus] = IH[hpriouit03buskar];

    /* Inmelding fc05 type Bus */
    IH[hprioin05bus] = IH[hprioin05buskar] = FALSE;
    if (SCH[schprioin05buskar])
    {
        IH[hprioin05buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg05],TRUE, CIF_DSIN, WDNST_check_in(fc05));
    }
    IH[hprioin05bus] = IH[hprioin05buskar];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05bus] = IH[hpriouit05buskar] = FALSE;
    if (SCH[schpriouit05buskar])
    {
        IH[hpriouit05buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg05],TRUE, CIF_DSUIT, WDNST_check_uit(fc05));
    }
    IH[hpriouit05bus] = IH[hpriouit05buskar];

    /* Inmelding fc08 type Bus */
    IH[hprioin08bus] = IH[hprioin08buskar] = FALSE;
    if (SCH[schprioin08buskar])
    {
        IH[hprioin08buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg08],TRUE, CIF_DSIN, WDNST_check_in(fc08));
    }
    IH[hprioin08bus] = IH[hprioin08buskar];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08bus] = IH[hpriouit08buskar] = FALSE;
    if (SCH[schpriouit08buskar])
    {
        IH[hpriouit08buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg08],TRUE, CIF_DSUIT, WDNST_check_uit(fc08));
    }
    IH[hpriouit08bus] = IH[hpriouit08buskar];

    /* Inmelding fc09 type Bus */
    IH[hprioin09bus] = IH[hprioin09buskar] = FALSE;
    if (SCH[schprioin09buskar])
    {
        IH[hprioin09buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg09],TRUE, CIF_DSIN, WDNST_check_in(fc09));
    }
    IH[hprioin09bus] = IH[hprioin09buskar];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09bus] = IH[hpriouit09buskar] = FALSE;
    if (SCH[schpriouit09buskar])
    {
        IH[hpriouit09buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg09],TRUE, CIF_DSUIT, WDNST_check_uit(fc09));
    }
    IH[hpriouit09bus] = IH[hpriouit09buskar];

    /* Inmelding fc11 type Bus */
    IH[hprioin11bus] = IH[hprioin11buskar] = FALSE;
    if (SCH[schprioin11buskar])
    {
        IH[hprioin11buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg11],TRUE, CIF_DSIN, WDNST_check_in(fc11));
    }
    IH[hprioin11bus] = IH[hprioin11buskar];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11bus] = IH[hpriouit11buskar] = FALSE;
    if (SCH[schpriouit11buskar])
    {
        IH[hpriouit11buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg11],TRUE, CIF_DSUIT, WDNST_check_uit(fc11));
    }
    IH[hpriouit11bus] = IH[hpriouit11buskar];

    /* Inmelding fc61 type Bus */
    IH[hprioin61bus] = IH[hprioin61buskar] = FALSE;
    if (SCH[schprioin61buskar])
    {
        IH[hprioin61buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg61],TRUE, CIF_DSIN, WDNST_check_in(fc61));
    }
    IH[hprioin61bus] = IH[hprioin61buskar];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61bus] = IH[hpriouit61buskar] = FALSE;
    if (SCH[schpriouit61buskar])
    {
        IH[hpriouit61buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg61],TRUE, CIF_DSUIT, WDNST_check_uit(fc61));
    }
    IH[hpriouit61bus] = IH[hpriouit61buskar];

    /* Inmelding fc62 type Bus */
    IH[hprioin62bus] = IH[hprioin62buskar] = FALSE;
    if (SCH[schprioin62buskar])
    {
        IH[hprioin62buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg62],TRUE, CIF_DSIN, WDNST_check_in(fc62));
    }
    IH[hprioin62bus] = IH[hprioin62buskar];

    /* Uitmelding fc62 type Bus */
    IH[hpriouit62bus] = IH[hpriouit62buskar] = FALSE;
    if (SCH[schpriouit62buskar])
    {
        IH[hpriouit62buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg62],TRUE, CIF_DSUIT, WDNST_check_uit(fc62));
    }
    IH[hpriouit62bus] = IH[hpriouit62buskar];

    /* Inmelding fc67 type Bus */
    IH[hprioin67bus] = IH[hprioin67buskar] = FALSE;
    if (SCH[schprioin67buskar])
    {
        IH[hprioin67buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg67],TRUE, CIF_DSIN, WDNST_check_in(fc67));
    }
    IH[hprioin67bus] = IH[hprioin67buskar];

    /* Uitmelding fc67 type Bus */
    IH[hpriouit67bus] = IH[hpriouit67buskar] = FALSE;
    if (SCH[schpriouit67buskar])
    {
        IH[hpriouit67buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg67],TRUE, CIF_DSUIT, WDNST_check_uit(fc67));
    }
    IH[hpriouit67bus] = IH[hpriouit67buskar];

    /* Inmelding fc68 type Bus */
    IH[hprioin68bus] = IH[hprioin68buskar] = FALSE;
    if (SCH[schprioin68buskar])
    {
        IH[hprioin68buskar] = RT[tprioin68buskar] = !T[tprioin68buskar] && DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg68],TRUE, CIF_DSIN, TRUE);
    }
    IH[hprioin68bus] = IH[hprioin68buskar];

    /* Uitmelding fc68 type Bus */
    IH[hpriouit68bus] = IH[hpriouit68buskar] = FALSE;
    if (SCH[schpriouit68buskar])
    {
        IH[hpriouit68buskar] = DSIMeldingPRIO_V1(0, CIF_BUS, TRUE, PRM[prmkarsg68],TRUE, CIF_DSUIT, TRUE);
    }
    IH[hpriouit68bus] = IH[hpriouit68buskar];

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
    IH[hhduit02kar] = RT[thduit02kar] = !T[thduit02kar] && SCH[schhduit02kar] && (DSIMelding_HD_V1(2, CIF_DSUIT, FALSE));
    IH[hhduit02] = IH[hhduit02kar];

    /* Uitmelding HD fc03 */
    IH[hhduit03kar] = RT[thduit03kar] = !T[thduit03kar] && SCH[schhduit03kar] && (DSIMelding_HD_V1(3, CIF_DSUIT, FALSE));
    IH[hhduit03] = IH[hhduit03kar];

    /* Uitmelding HD fc05 */
    IH[hhduit05kar] = RT[thduit05kar] = !T[thduit05kar] && SCH[schhduit05kar] && (DSIMelding_HD_V1(5, CIF_DSUIT, FALSE));
    IH[hhduit05] = IH[hhduit05kar];

    /* Uitmelding HD fc08 */
    IH[hhduit08kar] = RT[thduit08kar] = !T[thduit08kar] && SCH[schhduit08kar] && (DSIMelding_HD_V1(8, CIF_DSUIT, FALSE));
    IH[hhduit08] = IH[hhduit08kar];

    /* Uitmelding HD fc09 */
    IH[hhduit09kar] = RT[thduit09kar] = !T[thduit09kar] && SCH[schhduit09kar] && (DSIMelding_HD_V1(9, CIF_DSUIT, FALSE));
    IH[hhduit09] = IH[hhduit09kar];

    /* Uitmelding HD fc11 */
    IH[hhduit11kar] = RT[thduit11kar] = !T[thduit11kar] && SCH[schhduit11kar] && (DSIMelding_HD_V1(11, CIF_DSUIT, FALSE));
    IH[hhduit11] = IH[hhduit11kar];

    /* Uitmelding HD fc61 */
    IH[hhduit61kar] = RT[thduit61kar] = !T[thduit61kar] && SCH[schhduit61kar] && (DSIMelding_HD_V1(61, CIF_DSUIT, FALSE));
    IH[hhduit61] = IH[hhduit61kar];

    /* Uitmelding HD fc62 */
    IH[hhduit62kar] = RT[thduit62kar] = !T[thduit62kar] && SCH[schhduit62kar] && (DSIMelding_HD_V1(62, CIF_DSUIT, FALSE));
    IH[hhduit62] = IH[hhduit62kar];

    /* Uitmelding HD fc67 */
    IH[hhduit67kar] = RT[thduit67kar] = !T[thduit67kar] && SCH[schhduit67kar] && (DSIMelding_HD_V1(67, CIF_DSUIT, FALSE));
    IH[hhduit67] = IH[hhduit67kar];

    /* Uitmelding HD fc68 */
    IH[hhduit68kar] = RT[thduit68kar] = !T[thduit68kar] && SCH[schhduit68kar] && (DSIMelding_HD_V1(68, CIF_DSUIT, FALSE));
    IH[hhduit68] = IH[hhduit68kar];

    /* Bijhouden stiptheidsklassen ingemelde voertuigen */
    /* Bij inmelding: registeren stiptheidsklasse achterste voertuig */
    TrackStiptObvTSTP(hprioin02bus, hpriouit02bus, &iAantInm02bus, iKARInSTP02bus, hprio02bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin03bus, hpriouit03bus, &iAantInm03bus, iKARInSTP03bus, hprio03bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin05bus, hpriouit05bus, &iAantInm05bus, iKARInSTP05bus, hprio05bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin08bus, hpriouit08bus, &iAantInm08bus, iKARInSTP08bus, hprio08bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin09bus, hpriouit09bus, &iAantInm09bus, iKARInSTP09bus, hprio09bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin11bus, hpriouit11bus, &iAantInm11bus, iKARInSTP11bus, hprio11bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin61bus, hpriouit61bus, &iAantInm61bus, iKARInSTP61bus, hprio61bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin62bus, hpriouit62bus, &iAantInm62bus, iKARInSTP62bus, hprio62bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin67bus, hpriouit67bus, &iAantInm67bus, iKARInSTP67bus, hprio67bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin68bus, hpriouit68bus, &iAantInm68bus, iKARInSTP68bus, hprio68bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    MM[mstp02bus] = iAantInm02bus > 0 ? iKARInSTP02bus[0] : 0;
    MM[mstp03bus] = iAantInm03bus > 0 ? iKARInSTP03bus[0] : 0;
    MM[mstp05bus] = iAantInm05bus > 0 ? iKARInSTP05bus[0] : 0;
    MM[mstp08bus] = iAantInm08bus > 0 ? iKARInSTP08bus[0] : 0;
    MM[mstp09bus] = iAantInm09bus > 0 ? iKARInSTP09bus[0] : 0;
    MM[mstp11bus] = iAantInm11bus > 0 ? iKARInSTP11bus[0] : 0;
    MM[mstp61bus] = iAantInm61bus > 0 ? iKARInSTP61bus[0] : 0;
    MM[mstp62bus] = iAantInm62bus > 0 ? iKARInSTP62bus[0] : 0;
    MM[mstp67bus] = iAantInm67bus > 0 ? iKARInSTP67bus[0] : 0;
    MM[mstp68bus] = iAantInm68bus > 0 ? iKARInSTP68bus[0] : 0;


    /* Bijhouden melding en ondergedrag KAR */
    RT[tkarmelding] = CIF_DSIWIJZ != 0;
    RT[tkarog] = T[tkarmelding] || !startkarog;
    if (!startkarog) startkarog = TRUE;
    /* Doorzetten HD inmeldingen */
    IH[hhdin03] |= IH[hhdin02]; IH[hhduit03] |= IH[hhduit02];
    IH[hhdin61] |= IH[hhdin02]; IH[hhduit61] |= IH[hhduit02];
    IH[hhdin62] |= IH[hhdin02]; IH[hhduit62] |= IH[hhduit02];
    IH[hhdin02] |= IH[hhdin03]; IH[hhduit02] |= IH[hhduit03];
    IH[hhdin61] |= IH[hhdin03]; IH[hhduit61] |= IH[hhduit03];
    IH[hhdin62] |= IH[hhdin03]; IH[hhduit62] |= IH[hhduit03];
    IH[hhdin61] |= IH[hhdin05]; IH[hhduit61] |= IH[hhduit05];
    IH[hhdin62] |= IH[hhdin05]; IH[hhduit62] |= IH[hhduit05];
    IH[hhdin09] |= IH[hhdin08]; IH[hhduit09] |= IH[hhduit08];
    IH[hhdin67] |= IH[hhdin08]; IH[hhduit67] |= IH[hhduit08];
    IH[hhdin68] |= IH[hhdin08]; IH[hhduit68] |= IH[hhduit08];
    IH[hhdin08] |= IH[hhdin09]; IH[hhduit08] |= IH[hhduit09];
    IH[hhdin67] |= IH[hhdin09]; IH[hhduit67] |= IH[hhduit09];
    IH[hhdin68] |= IH[hhdin09]; IH[hhduit68] |= IH[hhduit09];
    IH[hhdin67] |= IH[hhdin11]; IH[hhduit67] |= IH[hhduit11];
    IH[hhdin68] |= IH[hhdin11]; IH[hhduit68] |= IH[hhduit11];
    IH[hhdin62] |= IH[hhdin61]; IH[hhduit62] |= IH[hhduit61];
    IH[hhdin61] |= IH[hhdin62]; IH[hhduit61] |= IH[hhduit62];
    IH[hhdin68] |= IH[hhdin67]; IH[hhduit68] |= IH[hhduit67];
    IH[hhdin67] |= IH[hhdin68]; IH[hhduit67] |= IH[hhduit68];
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

#ifndef NO_TIMETOX
if (SCH[schconfidence15fix])
    {
        if (SCH[schgs2232] && (P[fc22] & BIT11)) { Z[fc32] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2232] && (P[fc32] & BIT11)) { Z[fc22] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2434] && (P[fc24] & BIT11)) { Z[fc34] &= ~PRIO_Z_BIT; }
        if (SCH[schgs2434] && (P[fc34] & BIT11)) { Z[fc24] &= ~PRIO_Z_BIT; }
        if (SCH[schgs3384] && (P[fc33] & BIT11)) { Z[fc84] &= ~PRIO_Z_BIT; }
        if (SCH[schgs3384] && (P[fc84] & BIT11)) { Z[fc33] &= ~PRIO_Z_BIT; }
        if ((P[fc05] & BIT11)) { Z[fc22] &= ~PRIO_Z_BIT; }
        if ((P[fc05] & BIT11)) { Z[fc32] &= ~PRIO_Z_BIT; }
        if ((P[fc11] & BIT11)) { Z[fc26] &= ~PRIO_Z_BIT; }
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
    IH[hstp02bus] = !C[cvchd02] && !C[cvchd03] && !C[cvchd61] && !C[cvchd62] && SCH[schovstipt02bus];
    IH[hstp03bus] = !C[cvchd03] && !C[cvchd02] && !C[cvchd61] && !C[cvchd62] && SCH[schovstipt03bus];
    IH[hstp05bus] = !C[cvchd05] && !C[cvchd61] && !C[cvchd62] && SCH[schovstipt05bus];
    IH[hstp08bus] = !C[cvchd08] && !C[cvchd09] && !C[cvchd67] && !C[cvchd68] && SCH[schovstipt08bus];
    IH[hstp09bus] = !C[cvchd09] && !C[cvchd08] && !C[cvchd67] && !C[cvchd68] && SCH[schovstipt09bus];
    IH[hstp11bus] = !C[cvchd11] && !C[cvchd67] && !C[cvchd68] && SCH[schovstipt11bus];
    IH[hstp61bus] = !C[cvchd61] && !C[cvchd62] && SCH[schovstipt61bus];
    IH[hstp62bus] = !C[cvchd62] && !C[cvchd61] && SCH[schovstipt62bus];
    IH[hstp67bus] = !C[cvchd67] && !C[cvchd68] && SCH[schovstipt67bus];
    IH[hstp68bus] = !C[cvchd68] && !C[cvchd67] && SCH[schovstipt68bus];
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_TE_VROEG || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstipttevroeg02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_VROEG || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttevroeg03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_VROEG || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttevroeg05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_VROEG || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttevroeg08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_VROEG || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttevroeg09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_VROEG || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttevroeg11bus);
    if (IH[hstp61bus] && (MM[mstp61bus] == CIF_TE_VROEG || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstipttevroeg61bus);
    if (IH[hstp62bus] && (MM[mstp62bus] == CIF_TE_VROEG || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstipttevroeg62bus);
    if (IH[hstp67bus] && (MM[mstp67bus] == CIF_TE_VROEG || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstipttevroeg67bus);
    if (IH[hstp68bus] && (MM[mstp68bus] == CIF_TE_VROEG || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstipttevroeg68bus);
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_OP_TIJD || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstiptoptijd02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_OP_TIJD || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstiptoptijd03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_OP_TIJD || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstiptoptijd05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_OP_TIJD || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstiptoptijd08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_OP_TIJD || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstiptoptijd09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_OP_TIJD || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstiptoptijd11bus);
    if (IH[hstp61bus] && (MM[mstp61bus] == CIF_OP_TIJD || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstiptoptijd61bus);
    if (IH[hstp62bus] && (MM[mstp62bus] == CIF_OP_TIJD || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstiptoptijd62bus);
    if (IH[hstp67bus] && (MM[mstp67bus] == CIF_OP_TIJD || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstiptoptijd67bus);
    if (IH[hstp68bus] && (MM[mstp68bus] == CIF_OP_TIJD || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstiptoptijd68bus);
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_TE_LAAT || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstipttelaat02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_LAAT || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttelaat03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_LAAT || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttelaat05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_LAAT || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttelaat08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_LAAT || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttelaat09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_LAAT || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttelaat11bus);
    if (IH[hstp61bus] && (MM[mstp61bus] == CIF_TE_LAAT || !MM[mstp61bus])) iPrioriteitsOpties[prioFC61bus] = BepaalPrioriteitsOpties(prmovstipttelaat61bus);
    if (IH[hstp62bus] && (MM[mstp62bus] == CIF_TE_LAAT || !MM[mstp62bus])) iPrioriteitsOpties[prioFC62bus] = BepaalPrioriteitsOpties(prmovstipttelaat62bus);
    if (IH[hstp67bus] && (MM[mstp67bus] == CIF_TE_LAAT || !MM[mstp67bus])) iPrioriteitsOpties[prioFC67bus] = BepaalPrioriteitsOpties(prmovstipttelaat67bus);
    if (IH[hstp68bus] && (MM[mstp68bus] == CIF_TE_LAAT || !MM[mstp68bus])) iPrioriteitsOpties[prioFC68bus] = BepaalPrioriteitsOpties(prmovstipttelaat68bus);

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
}
/* ------------------------------------
   Extra code tegenhouden conflicten OV
   ------------------------------------ */
void TegenhoudenConflictenExtra(void)
{
#ifndef NO_TIMETOX
    if (SCH[schconfidence15fix] && SCH[schgs2232] && (P[fc22] & BIT11)) { RR[fc32] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2232] && (P[fc32] & BIT11)) { RR[fc22] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2434] && (P[fc24] & BIT11)) { RR[fc34] &= ~PRIO_RR_BIT; }
    if (SCH[schconfidence15fix] && SCH[schgs2434] && (P[fc34] & BIT11)) { RR[fc24] &= ~PRIO_RR_BIT; }
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

    /* Niet afkappen naloop richtingen wanneer een naloop tijd nog loopt */
    if (RT[tnlfg2221] || T[tnlfg2221] || RT[tnlfgd2221] || T[tnlfgd2221] || RT[tnleg2221] || T[tnleg2221] || RT[tnlegd2221] || T[tnlegd2221])
    {
        Z[fc21] &= ~BIT6;
        RR[fc21] &= ~(BIT1|BIT2|BIT6);
        FM[fc21] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3231] || T[tnlsgd3231])
    {
        Z[fc31] &= ~BIT6;
        RR[fc31] &= ~(BIT1|BIT2|BIT6);
        FM[fc31] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3132] || T[tnlsgd3132])
    {
        Z[fc32] &= ~BIT6;
        RR[fc32] &= ~(BIT1|BIT2|BIT6);
        FM[fc32] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3433] || T[tnlsgd3433])
    {
        Z[fc33] &= ~BIT6;
        RR[fc33] &= ~(BIT1|BIT2|BIT6);
        FM[fc33] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlsgd3334] || T[tnlsgd3334])
    {
        Z[fc34] &= ~BIT6;
        RR[fc34] &= ~(BIT1|BIT2|BIT6);
        FM[fc34] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0262] || T[tnlfg0262] || RT[tnleg0262] || T[tnleg0262])
    {
        Z[fc62] &= ~BIT6;
        RR[fc62] &= ~(BIT1|BIT2|BIT6);
        FM[fc62] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg0868] || T[tnlfg0868] || RT[tnleg0868] || T[tnleg0868])
    {
        Z[fc68] &= ~BIT6;
        RR[fc68] &= ~(BIT1|BIT2|BIT6);
        FM[fc68] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfg8281] || T[tnlfg8281] || RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnleg8281] || T[tnleg8281] || RT[tnlegd8281] || T[tnlegd8281])
    {
        Z[fc81] &= ~BIT6;
        RR[fc81] &= ~(BIT1|BIT2|BIT6);
        FM[fc81] &= ~PRIO_FM_BIT;
    }
}
/* ---------------------------------------
   PrioPARCorrecties corrigeert de PAR van
   gesynchroniseerde richtingen.
   --------------------------------------- */
void PrioPARCorrecties(void)
{

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
    if (!(PRM[prmaltb84] & (1 << ML))) PAR[fc84] = FALSE;
    if (!(PRM[prmaltb82] & (1 << ML))) PAR[fc82] = FALSE;
    if (!(PRM[prmaltb81] & (1 << ML))) PAR[fc81] = FALSE;
    #ifndef NO_TIMETOX
    if (SCH[schgs2232] && (P[fc22] & BIT11) && R[fc32] && !kp(fc32) && A[fc32]) { PAR[fc32] |= BIT11; P[fc32] |= BIT11; }
    if (SCH[schgs2232] && (P[fc32] & BIT11) && R[fc22] && !kp(fc22) && A[fc22]) { PAR[fc22] |= BIT11; P[fc22] |= BIT11; }
    if (SCH[schgs2434] && (P[fc24] & BIT11) && R[fc34] && !kp(fc34) && A[fc34]) { PAR[fc34] |= BIT11; P[fc34] |= BIT11; }
    if (SCH[schgs2434] && (P[fc34] & BIT11) && R[fc24] && !kp(fc24) && A[fc24]) { PAR[fc24] |= BIT11; P[fc24] |= BIT11; }
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
    PrioCcolElementen(prioFC02bus, tgb02bus, trt02bus, hprio02bus, cvc02bus, tblk02bus);
    PrioCcolElementen(prioFC03bus, tgb03bus, trt03bus, hprio03bus, cvc03bus, tblk03bus);
    PrioCcolElementen(prioFC05bus, tgb05bus, trt05bus, hprio05bus, cvc05bus, tblk05bus);
    PrioCcolElementen(prioFC08bus, tgb08bus, trt08bus, hprio08bus, cvc08bus, tblk08bus);
    PrioCcolElementen(prioFC09bus, tgb09bus, trt09bus, hprio09bus, cvc09bus, tblk09bus);
    PrioCcolElementen(prioFC11bus, tgb11bus, trt11bus, hprio11bus, cvc11bus, tblk11bus);
    PrioCcolElementen(prioFC61bus, tgb61bus, trt61bus, hprio61bus, cvc61bus, tblk61bus);
    PrioCcolElementen(prioFC62bus, tgb62bus, trt62bus, hprio62bus, cvc62bus, tblk62bus);
    PrioCcolElementen(prioFC67bus, tgb67bus, trt67bus, hprio67bus, cvc67bus, tblk67bus);
    PrioCcolElementen(prioFC68bus, tgb68bus, trt68bus, hprio68bus, cvc68bus, tblk68bus);
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
    if (SD[ddummykarin02bus]) set_DSI_message(NG, CIF_BUS, 2, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit02bus]) set_DSI_message(NG, CIF_BUS, 2, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin03bus]) set_DSI_message(NG, CIF_BUS, 3, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit03bus]) set_DSI_message(NG, CIF_BUS, 3, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin05bus]) set_DSI_message(NG, CIF_BUS, 5, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit05bus]) set_DSI_message(NG, CIF_BUS, 5, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin08bus]) set_DSI_message(NG, CIF_BUS, 8, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit08bus]) set_DSI_message(NG, CIF_BUS, 8, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin09bus]) set_DSI_message(NG, CIF_BUS, 9, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit09bus]) set_DSI_message(NG, CIF_BUS, 9, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin11bus]) set_DSI_message(NG, CIF_BUS, 11, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit11bus]) set_DSI_message(NG, CIF_BUS, 11, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin61bus]) set_DSI_message(NG, CIF_BUS, 61, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit61bus]) set_DSI_message(NG, CIF_BUS, 61, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin62bus]) set_DSI_message(NG, CIF_BUS, 62, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit62bus]) set_DSI_message(NG, CIF_BUS, 62, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin67bus]) set_DSI_message(NG, CIF_BUS, 67, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit67bus]) set_DSI_message(NG, CIF_BUS, 67, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin68bus]) set_DSI_message(NG, CIF_BUS, 68, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit68bus]) set_DSI_message(NG, CIF_BUS, 68, CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);

    /* HD ingrepen */
    if (SD[ddummyhdkarin02]) set_DSI_message(0, CIF_POL, 2, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit02]) set_DSI_message(0, CIF_POL, 2, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin03]) set_DSI_message(0, CIF_POL, 3, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit03]) set_DSI_message(0, CIF_POL, 3, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin05]) set_DSI_message(0, CIF_POL, 5, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit05]) set_DSI_message(0, CIF_POL, 5, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin08]) set_DSI_message(0, CIF_POL, 8, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit08]) set_DSI_message(0, CIF_POL, 8, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin09]) set_DSI_message(0, CIF_POL, 9, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit09]) set_DSI_message(0, CIF_POL, 9, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin11]) set_DSI_message(0, CIF_POL, 11, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit11]) set_DSI_message(0, CIF_POL, 11, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin61]) set_DSI_message(0, CIF_POL, 61, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit61]) set_DSI_message(0, CIF_POL, 61, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin62]) set_DSI_message(0, CIF_POL, 62, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit62]) set_DSI_message(0, CIF_POL, 62, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin67]) set_DSI_message(0, CIF_POL, 67, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit67]) set_DSI_message(0, CIF_POL, 67, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkarin68]) set_DSI_message(0, CIF_POL, 68, CIF_DSIN, 1, 0, 0, 0, CIF_SIR);
    if (SD[ddummyhdkaruit68]) set_DSI_message(0, CIF_POL, 68, CIF_DSUIT, 1, 0, 0, 0, CIF_SIR);
}
#endif

#ifdef PRIO_ADDFILE
    #include "123456prio.add"
#endif /* PRIO_ADDFILE */
