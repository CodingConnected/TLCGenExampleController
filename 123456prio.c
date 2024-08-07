/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   07-08-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable) ISG
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
    #define PRIO_CHECK_WAGENNMR /* check op wagendienstnummer          */
    #include "extra_func_prio.h"

boolv vertraag_kar_uitm[prioFCMAX];

#define MAX_AANTAL_INMELDINGEN           10
#define DEFAULT_MAX_WACHTTIJD           120
#define NO_REALISEREN_TOEGESTAAN

extern mulv DB_old[];

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
    iFC_PRIOix[prioFC02bus] = fc02;
    iFC_PRIOix[prioFC03bus] = fc03;
    iFC_PRIOix[prioFC05bus] = fc05;
    iFC_PRIOix[prioFC08bus] = fc08;
    iFC_PRIOix[prioFC09bus] = fc09;
    iFC_PRIOix[prioFC11bus] = fc11;
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
    iInstPercMaxGroenTijdTerugKomen[fc24] = PRM[prmpmgt24];
    iInstPercMaxGroenTijdTerugKomen[fc26] = PRM[prmpmgt26];
    iInstPercMaxGroenTijdTerugKomen[fc28] = PRM[prmpmgt28];
    iInstPercMaxGroenTijdTerugKomen[fc31] = PRM[prmpmgt31];
    iInstPercMaxGroenTijdTerugKomen[fc33] = PRM[prmpmgt33];
    iInstPercMaxGroenTijdTerugKomen[fc34] = PRM[prmpmgt34];
    iInstPercMaxGroenTijdTerugKomen[fc38] = PRM[prmpmgt38];
    iInstPercMaxGroenTijdTerugKomen[fc61] = PRM[prmpmgt61];
    iInstPercMaxGroenTijdTerugKomen[fc62] = PRM[prmpmgt62];
    iInstPercMaxGroenTijdTerugKomen[fc67] = PRM[prmpmgt67];
    iInstPercMaxGroenTijdTerugKomen[fc68] = PRM[prmpmgt68];
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
    iInstMinTerugKomGroenTijd[fc24] = PRM[prmognt24];
    iInstMinTerugKomGroenTijd[fc26] = PRM[prmognt26];
    iInstMinTerugKomGroenTijd[fc28] = PRM[prmognt28];
    iInstMinTerugKomGroenTijd[fc31] = PRM[prmognt31];
    iInstMinTerugKomGroenTijd[fc33] = PRM[prmognt33];
    iInstMinTerugKomGroenTijd[fc34] = PRM[prmognt34];
    iInstMinTerugKomGroenTijd[fc38] = PRM[prmognt38];
    iInstMinTerugKomGroenTijd[fc61] = PRM[prmognt61];
    iInstMinTerugKomGroenTijd[fc62] = PRM[prmognt62];
    iInstMinTerugKomGroenTijd[fc67] = PRM[prmognt67];
    iInstMinTerugKomGroenTijd[fc68] = PRM[prmognt68];
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
    iInstAantalMalenNietAfkappen[fc24] = PRM[prmnofm24];
    iInstAantalMalenNietAfkappen[fc26] = PRM[prmnofm26];
    iInstAantalMalenNietAfkappen[fc28] = PRM[prmnofm28];
    iInstAantalMalenNietAfkappen[fc61] = PRM[prmnofm61];
    iInstAantalMalenNietAfkappen[fc62] = PRM[prmnofm62];
    iInstAantalMalenNietAfkappen[fc67] = PRM[prmnofm67];
    iInstAantalMalenNietAfkappen[fc68] = PRM[prmnofm68];
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
    iAfkapGroenTijd[fc24] = PRM[prmmgcov24];
    iAfkapGroenTijd[fc26] = PRM[prmmgcov26];
    iAfkapGroenTijd[fc28] = PRM[prmmgcov28];
    iAfkapGroenTijd[fc31] = 0;
    iAfkapGroenTijd[fc33] = 0;
    iAfkapGroenTijd[fc34] = 0;
    iAfkapGroenTijd[fc38] = 0;
    iAfkapGroenTijd[fc61] = PRM[prmmgcov61];
    iAfkapGroenTijd[fc62] = PRM[prmmgcov62];
    iAfkapGroenTijd[fc67] = PRM[prmmgcov67];
    iAfkapGroenTijd[fc68] = PRM[prmmgcov68];
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
    iPercGroenTijd[fc24] = PRM[prmpmgcov24];
    iPercGroenTijd[fc26] = PRM[prmpmgcov26];
    iPercGroenTijd[fc28] = PRM[prmpmgcov28];
    iPercGroenTijd[fc31] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc33] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc34] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc38] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc61] = PRM[prmpmgcov61];
    iPercGroenTijd[fc62] = PRM[prmpmgcov62];
    iPercGroenTijd[fc67] = PRM[prmpmgcov67];
    iPercGroenTijd[fc68] = PRM[prmpmgcov68];
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
    iInstOphoogPercentageMG[fc24] = PRM[prmohpmg24];
    iInstOphoogPercentageMG[fc26] = PRM[prmohpmg26];
    iInstOphoogPercentageMG[fc28] = PRM[prmohpmg28];
    iInstOphoogPercentageMG[fc31] = 0;
    iInstOphoogPercentageMG[fc33] = 0;
    iInstOphoogPercentageMG[fc34] = 0;
    iInstOphoogPercentageMG[fc38] = 0;
    iInstOphoogPercentageMG[fc61] = PRM[prmohpmg61];
    iInstOphoogPercentageMG[fc62] = PRM[prmohpmg62];
    iInstOphoogPercentageMG[fc67] = PRM[prmohpmg67];
    iInstOphoogPercentageMG[fc68] = PRM[prmohpmg68];
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
    iPRM_ALTP[fc24] = PRM[prmaltp2484];
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
    iPRM_ALTP[fc84] = PRM[prmaltp2484];

    /* Richting mag alternatief realiseren tijdens een OV ingreep */
    iSCH_ALTG[fc02] = SCH[schaltg02];
    iSCH_ALTG[fc03] = SCH[schaltg03];
    iSCH_ALTG[fc05] = SCH[schaltg05];
    iSCH_ALTG[fc08] = SCH[schaltg08];
    iSCH_ALTG[fc09] = SCH[schaltg09];
    iSCH_ALTG[fc11] = SCH[schaltg11];
    iSCH_ALTG[fc21] = SCH[schaltg21];
    iSCH_ALTG[fc22] = SCH[schaltg22];
    iSCH_ALTG[fc24] = SCH[schaltg2484];
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
    iSCH_ALTG[fc84] = SCH[schaltg2484];

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

    PrioRijTijdScenario(prioFC11bus, d11_1, d11_2, tbtovg11bus);
    PrioRijTijdScenario(prioFC11bus, NG, d11_3, NG);

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
    /* Pririteit-inmeldingen */
    PrioInmelden(prioFC02bus, SH[hprioin02bus], iInstPrioriteitsNiveau[prioFC02bus], iInstPrioriteitsOpties[prioFC02bus], 0, 0);
    PrioInmelden(prioFC03bus, SH[hprioin03bus], iInstPrioriteitsNiveau[prioFC03bus], iInstPrioriteitsOpties[prioFC03bus], 0, 0);
    PrioInmelden(prioFC05bus, SH[hprioin05bus], iInstPrioriteitsNiveau[prioFC05bus], iInstPrioriteitsOpties[prioFC05bus], 0, 0);
    PrioInmelden(prioFC08bus, SH[hprioin08bus], iInstPrioriteitsNiveau[prioFC08bus], iInstPrioriteitsOpties[prioFC08bus], 0, 0);
    PrioInmelden(prioFC09bus, SH[hprioin09bus], iInstPrioriteitsNiveau[prioFC09bus], iInstPrioriteitsOpties[prioFC09bus], 0, 0);
    PrioInmelden(prioFC11bus, SH[hprioin11bus], iInstPrioriteitsNiveau[prioFC11bus], iInstPrioriteitsOpties[prioFC11bus], 0, 0);

    /* Pririteit-uitmeldingen */
    PrioUitmelden(prioFC02bus, SH[hpriouit02bus]);
    PrioUitmelden(prioFC03bus, SH[hpriouit03bus]);
    PrioUitmelden(prioFC05bus, SH[hpriouit05bus]);
    PrioUitmelden(prioFC08bus, SH[hpriouit08bus]);
    PrioUitmelden(prioFC09bus, SH[hpriouit09bus]);
    PrioUitmelden(prioFC11bus, SH[hpriouit11bus]);

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
        IH[hprioin02buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat02bus], TRUE, 2,TRUE, CIF_DSIN, WDNST_check_in(fc02));
    }
    IH[hprioin02bus] = IH[hprioin02buskar];

    /* Uitmelding fc02 type Bus */
    IH[hpriouit02bus] = IH[hpriouit02buskar] = FALSE;
    if (SCH[schpriouit02buskar])
    {
        IH[hpriouit02buskar] = DSIMeldingPRIO_V2(fc02, prioFC02bus, 0, PRM[prmvtgcat02bus], TRUE, 2,TRUE, CIF_DSUIT, WDNST_check_uit(fc02));
    }
    IH[hpriouit02bus] = IH[hpriouit02buskar];

    /* Inmelding fc03 type Bus */
    IH[hprioin03bus] = IH[hprioin03buskar] = FALSE;
    if (SCH[schprioin03buskar])
    {
        IH[hprioin03buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat03bus], TRUE, 3,TRUE, CIF_DSIN, WDNST_check_in(fc03));
    }
    IH[hprioin03bus] = IH[hprioin03buskar];

    /* Uitmelding fc03 type Bus */
    IH[hpriouit03bus] = IH[hpriouit03buskar] = FALSE;
    if (SCH[schpriouit03buskar])
    {
        IH[hpriouit03buskar] = DSIMeldingPRIO_V2(fc03, prioFC03bus, 0, PRM[prmvtgcat03bus], TRUE, 3,TRUE, CIF_DSUIT, WDNST_check_uit(fc03));
    }
    IH[hpriouit03bus] = IH[hpriouit03buskar];

    /* Inmelding fc05 type Bus */
    IH[hprioin05bus] = IH[hprioin05buskar] = FALSE;
    if (SCH[schprioin05buskar])
    {
        IH[hprioin05buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat05bus], TRUE, 5,TRUE, CIF_DSIN, WDNST_check_in(fc05));
    }
    IH[hprioin05bus] = IH[hprioin05buskar];

    /* Uitmelding fc05 type Bus */
    IH[hpriouit05bus] = IH[hpriouit05buskar] = FALSE;
    if (SCH[schpriouit05buskar])
    {
        IH[hpriouit05buskar] = DSIMeldingPRIO_V2(fc05, prioFC05bus, 0, PRM[prmvtgcat05bus], TRUE, 5,TRUE, CIF_DSUIT, WDNST_check_uit(fc05));
    }
    IH[hpriouit05bus] = IH[hpriouit05buskar];

    /* Inmelding fc08 type Bus */
    IH[hprioin08bus] = IH[hprioin08buskar] = FALSE;
    if (SCH[schprioin08buskar])
    {
        IH[hprioin08buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat08bus], TRUE, 8,TRUE, CIF_DSIN, WDNST_check_in(fc08));
    }
    IH[hprioin08bus] = IH[hprioin08buskar];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08bus] = IH[hpriouit08buskar] = FALSE;
    if (SCH[schpriouit08buskar])
    {
        IH[hpriouit08buskar] = DSIMeldingPRIO_V2(fc08, prioFC08bus, 0, PRM[prmvtgcat08bus], TRUE, 8,TRUE, CIF_DSUIT, WDNST_check_uit(fc08));
    }
    IH[hpriouit08bus] = IH[hpriouit08buskar];

    /* Inmelding fc09 type Bus */
    IH[hprioin09bus] = IH[hprioin09buskar] = FALSE;
    if (SCH[schprioin09buskar])
    {
        IH[hprioin09buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat09bus], TRUE, 9,TRUE, CIF_DSIN, WDNST_check_in(fc09));
    }
    IH[hprioin09bus] = IH[hprioin09buskar];

    /* Uitmelding fc09 type Bus */
    IH[hpriouit09bus] = IH[hpriouit09buskar] = FALSE;
    if (SCH[schpriouit09buskar])
    {
        IH[hpriouit09buskar] = DSIMeldingPRIO_V2(fc09, prioFC09bus, 0, PRM[prmvtgcat09bus], TRUE, 9,TRUE, CIF_DSUIT, WDNST_check_uit(fc09));
    }
    IH[hpriouit09bus] = IH[hpriouit09buskar];

    /* Inmelding fc11 type Bus */
    IH[hprioin11bus] = IH[hprioin11buskar] = FALSE;
    if (SCH[schprioin11buskar])
    {
        IH[hprioin11buskar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat11bus], TRUE, 11,TRUE, CIF_DSIN, WDNST_check_in(fc11));
    }
    IH[hprioin11bus] = IH[hprioin11buskar];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11bus] = IH[hpriouit11buskar] = FALSE;
    if (SCH[schpriouit11buskar])
    {
        IH[hpriouit11buskar] = DSIMeldingPRIO_V2(fc11, prioFC11bus, 0, PRM[prmvtgcat11bus], TRUE, 11,TRUE, CIF_DSUIT, WDNST_check_uit(fc11));
    }
    IH[hpriouit11bus] = IH[hpriouit11buskar];

    /* Inmelding HD fc02 */
    IH[hhdin02kar] = RT[thdin02kar] = !T[thdin02kar] && SCH[schhdin02kar] && (DSIMelding_HD_V1(2, CIF_DSIN, SCH[schchecksirene02]));
#ifndef NO_RIS
    IH[hhdin02ris] = SCH[schhdin02ris] && (
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02hd], SYSTEM_ITF, PRM[prmrislaneid02hd_1], PRM[prmrisstationtype02hd], PRM[prmrisstart02hd], PRM[prmrisend02hd], PRM[prmrisrole02hd], PRM[prmrissubrole02hd], PRM[prmrisimportance02hd], PRM[prmriseta02hd], hdFC02) ||
            ris_inmelding_selectief(fc02, PRM[prmrisapproachid02hd], SYSTEM_ITF, PRM[prmrislaneid02hd_2], PRM[prmrisstationtype02hd], PRM[prmrisstart02hd], PRM[prmrisend02hd], PRM[prmrisrole02hd], PRM[prmrissubrole02hd], PRM[prmrisimportance02hd], PRM[prmriseta02hd], hdFC02));
#endif /* NO_RIS */
    IH[hhdin02] = IH[hhdin02kar] || IH[hhdin02ris];

    /* Inmelding HD fc03 */
    IH[hhdin03kar] = RT[thdin03kar] = !T[thdin03kar] && SCH[schhdin03kar] && (DSIMelding_HD_V1(3, CIF_DSIN, SCH[schchecksirene03]));
#ifndef NO_RIS
    IH[hhdin03ris] = SCH[schhdin03ris] && (
            ris_inmelding_selectief(fc03, PRM[prmrisapproachid03hd], SYSTEM_ITF, PRM[prmrislaneid03hd_1], PRM[prmrisstationtype03hd], PRM[prmrisstart03hd], PRM[prmrisend03hd], PRM[prmrisrole03hd], PRM[prmrissubrole03hd], PRM[prmrisimportance03hd], PRM[prmriseta03hd], hdFC03));
#endif /* NO_RIS */
    IH[hhdin03] = IH[hhdin03kar] || IH[hhdin03ris];

    /* Inmelding HD fc05 */
    IH[hhdin05kar] = RT[thdin05kar] = !T[thdin05kar] && SCH[schhdin05kar] && (DSIMelding_HD_V1(5, CIF_DSIN, SCH[schchecksirene05]));
#ifndef NO_RIS
    IH[hhdin05ris] = SCH[schhdin05ris] && (
            ris_inmelding_selectief(fc05, PRM[prmrisapproachid05hd], SYSTEM_ITF, PRM[prmrislaneid05hd_1], PRM[prmrisstationtype05hd], PRM[prmrisstart05hd], PRM[prmrisend05hd], PRM[prmrisrole05hd], PRM[prmrissubrole05hd], PRM[prmrisimportance05hd], PRM[prmriseta05hd], hdFC05));
#endif /* NO_RIS */
    IH[hhdin05] = IH[hhdin05kar] || IH[hhdin05ris];

    /* Inmelding HD fc08 */
    IH[hhdin08kar] = RT[thdin08kar] = !T[thdin08kar] && SCH[schhdin08kar] && (DSIMelding_HD_V1(8, CIF_DSIN, SCH[schchecksirene08]));
#ifndef NO_RIS
    IH[hhdin08ris] = SCH[schhdin08ris] && (
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08hd], SYSTEM_ITF, PRM[prmrislaneid08hd_1], PRM[prmrisstationtype08hd], PRM[prmrisstart08hd], PRM[prmrisend08hd], PRM[prmrisrole08hd], PRM[prmrissubrole08hd], PRM[prmrisimportance08hd], PRM[prmriseta08hd], hdFC08) ||
            ris_inmelding_selectief(fc08, PRM[prmrisapproachid08hd], SYSTEM_ITF, PRM[prmrislaneid08hd_2], PRM[prmrisstationtype08hd], PRM[prmrisstart08hd], PRM[prmrisend08hd], PRM[prmrisrole08hd], PRM[prmrissubrole08hd], PRM[prmrisimportance08hd], PRM[prmriseta08hd], hdFC08));
#endif /* NO_RIS */
    IH[hhdin08] = IH[hhdin08kar] || IH[hhdin08ris];

    /* Inmelding HD fc09 */
    IH[hhdin09kar] = RT[thdin09kar] = !T[thdin09kar] && SCH[schhdin09kar] && (DSIMelding_HD_V1(9, CIF_DSIN, SCH[schchecksirene09]));
#ifndef NO_RIS
    IH[hhdin09ris] = SCH[schhdin09ris] && (
            ris_inmelding_selectief(fc09, PRM[prmrisapproachid09hd], SYSTEM_ITF, PRM[prmrislaneid09hd_1], PRM[prmrisstationtype09hd], PRM[prmrisstart09hd], PRM[prmrisend09hd], PRM[prmrisrole09hd], PRM[prmrissubrole09hd], PRM[prmrisimportance09hd], PRM[prmriseta09hd], hdFC09));
#endif /* NO_RIS */
    IH[hhdin09] = IH[hhdin09kar] || IH[hhdin09ris];

    /* Inmelding HD fc11 */
    IH[hhdin11kar] = RT[thdin11kar] = !T[thdin11kar] && SCH[schhdin11kar] && (DSIMelding_HD_V1(11, CIF_DSIN, SCH[schchecksirene11]));
#ifndef NO_RIS
    IH[hhdin11ris] = SCH[schhdin11ris] && (
            ris_inmelding_selectief(fc11, PRM[prmrisapproachid11hd], SYSTEM_ITF, PRM[prmrislaneid11hd_1], PRM[prmrisstationtype11hd], PRM[prmrisstart11hd], PRM[prmrisend11hd], PRM[prmrisrole11hd], PRM[prmrissubrole11hd], PRM[prmrisimportance11hd], PRM[prmriseta11hd], hdFC11));
#endif /* NO_RIS */
    IH[hhdin11] = IH[hhdin11kar] || IH[hhdin11ris];

    /* Inmelding HD fc61 */
    IH[hhdin61kar] = RT[thdin61kar] = !T[thdin61kar] && SCH[schhdin61kar] && (DSIMelding_HD_V1(61, CIF_DSIN, SCH[schchecksirene61]));
#ifndef NO_RIS
    IH[hhdin61ris] = SCH[schhdin61ris] && (
            ris_inmelding_selectief(fc61, PRM[prmrisapproachid61hd], SYSTEM_ITF, PRM[prmrislaneid61hd_1], PRM[prmrisstationtype61hd], PRM[prmrisstart61hd], PRM[prmrisend61hd], PRM[prmrisrole61hd], PRM[prmrissubrole61hd], PRM[prmrisimportance61hd], PRM[prmriseta61hd], hdFC61));
#endif /* NO_RIS */
    IH[hhdin61] = IH[hhdin61kar] || IH[hhdin61ris];

    /* Inmelding HD fc62 */
    IH[hhdin62kar] = RT[thdin62kar] = !T[thdin62kar] && SCH[schhdin62kar] && (DSIMelding_HD_V1(62, CIF_DSIN, SCH[schchecksirene62]));
#ifndef NO_RIS
    IH[hhdin62ris] = SCH[schhdin62ris] && (
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62hd], SYSTEM_ITF, PRM[prmrislaneid62hd_1], PRM[prmrisstationtype62hd], PRM[prmrisstart62hd], PRM[prmrisend62hd], PRM[prmrisrole62hd], PRM[prmrissubrole62hd], PRM[prmrisimportance62hd], PRM[prmriseta62hd], hdFC62) ||
            ris_inmelding_selectief(fc62, PRM[prmrisapproachid62hd], SYSTEM_ITF, PRM[prmrislaneid62hd_2], PRM[prmrisstationtype62hd], PRM[prmrisstart62hd], PRM[prmrisend62hd], PRM[prmrisrole62hd], PRM[prmrissubrole62hd], PRM[prmrisimportance62hd], PRM[prmriseta62hd], hdFC62));
#endif /* NO_RIS */
    IH[hhdin62] = IH[hhdin62kar] || IH[hhdin62ris];

    /* Inmelding HD fc67 */
    IH[hhdin67kar] = RT[thdin67kar] = !T[thdin67kar] && SCH[schhdin67kar] && (DSIMelding_HD_V1(67, CIF_DSIN, SCH[schchecksirene67]));
#ifndef NO_RIS
    IH[hhdin67ris] = SCH[schhdin67ris] && (
            ris_inmelding_selectief(fc67, PRM[prmrisapproachid67hd], SYSTEM_ITF, PRM[prmrislaneid67hd_1], PRM[prmrisstationtype67hd], PRM[prmrisstart67hd], PRM[prmrisend67hd], PRM[prmrisrole67hd], PRM[prmrissubrole67hd], PRM[prmrisimportance67hd], PRM[prmriseta67hd], hdFC67));
#endif /* NO_RIS */
    IH[hhdin67] = IH[hhdin67kar] || IH[hhdin67ris];

    /* Inmelding HD fc68 */
    IH[hhdin68kar] = RT[thdin68kar] = !T[thdin68kar] && SCH[schhdin68kar] && (DSIMelding_HD_V1(68, CIF_DSIN, SCH[schchecksirene68]));
#ifndef NO_RIS
    IH[hhdin68ris] = SCH[schhdin68ris] && (
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68hd], SYSTEM_ITF, PRM[prmrislaneid68hd_1], PRM[prmrisstationtype68hd], PRM[prmrisstart68hd], PRM[prmrisend68hd], PRM[prmrisrole68hd], PRM[prmrissubrole68hd], PRM[prmrisimportance68hd], PRM[prmriseta68hd], hdFC68) ||
            ris_inmelding_selectief(fc68, PRM[prmrisapproachid68hd], SYSTEM_ITF, PRM[prmrislaneid68hd_2], PRM[prmrisstationtype68hd], PRM[prmrisstart68hd], PRM[prmrisend68hd], PRM[prmrisrole68hd], PRM[prmrissubrole68hd], PRM[prmrisimportance68hd], PRM[prmriseta68hd], hdFC68));
#endif /* NO_RIS */
    IH[hhdin68] = IH[hhdin68kar] || IH[hhdin68ris];

    /* Uitmelding HD fc02 */
    IH[hhduit02kar] = RT[thduit02kar] = !T[thduit02kar] && SCH[schhduit02kar] && (DSIMelding_HD_V1(2, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit02ris] = SCH[schhduit02ris] && (ris_uitmelding_selectief(hdFC02));
#endif /* NO_RIS */
    IH[hhduit02] = IH[hhduit02kar] || IH[hhduit02ris];

    /* Uitmelding HD fc03 */
    IH[hhduit03kar] = RT[thduit03kar] = !T[thduit03kar] && SCH[schhduit03kar] && (DSIMelding_HD_V1(3, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit03ris] = SCH[schhduit03ris] && (ris_uitmelding_selectief(hdFC03));
#endif /* NO_RIS */
    IH[hhduit03] = IH[hhduit03kar] || IH[hhduit03ris];

    /* Uitmelding HD fc05 */
    IH[hhduit05kar] = RT[thduit05kar] = !T[thduit05kar] && SCH[schhduit05kar] && (DSIMelding_HD_V1(5, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit05ris] = SCH[schhduit05ris] && (ris_uitmelding_selectief(hdFC05));
#endif /* NO_RIS */
    IH[hhduit05] = IH[hhduit05kar] || IH[hhduit05ris];

    /* Uitmelding HD fc08 */
    IH[hhduit08kar] = RT[thduit08kar] = !T[thduit08kar] && SCH[schhduit08kar] && (DSIMelding_HD_V1(8, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit08ris] = SCH[schhduit08ris] && (ris_uitmelding_selectief(hdFC08));
#endif /* NO_RIS */
    IH[hhduit08] = IH[hhduit08kar] || IH[hhduit08ris];

    /* Uitmelding HD fc09 */
    IH[hhduit09kar] = RT[thduit09kar] = !T[thduit09kar] && SCH[schhduit09kar] && (DSIMelding_HD_V1(9, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit09ris] = SCH[schhduit09ris] && (ris_uitmelding_selectief(hdFC09));
#endif /* NO_RIS */
    IH[hhduit09] = IH[hhduit09kar] || IH[hhduit09ris];

    /* Uitmelding HD fc11 */
    IH[hhduit11kar] = RT[thduit11kar] = !T[thduit11kar] && SCH[schhduit11kar] && (DSIMelding_HD_V1(11, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit11ris] = SCH[schhduit11ris] && (ris_uitmelding_selectief(hdFC11));
#endif /* NO_RIS */
    IH[hhduit11] = IH[hhduit11kar] || IH[hhduit11ris];

    /* Uitmelding HD fc61 */
    IH[hhduit61kar] = RT[thduit61kar] = !T[thduit61kar] && SCH[schhduit61kar] && (DSIMelding_HD_V1(61, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit61ris] = SCH[schhduit61ris] && (ris_uitmelding_selectief(hdFC61));
#endif /* NO_RIS */
    IH[hhduit61] = IH[hhduit61kar] || IH[hhduit61ris];

    /* Uitmelding HD fc62 */
    IH[hhduit62kar] = RT[thduit62kar] = !T[thduit62kar] && SCH[schhduit62kar] && (DSIMelding_HD_V1(62, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit62ris] = SCH[schhduit62ris] && (ris_uitmelding_selectief(hdFC62));
#endif /* NO_RIS */
    IH[hhduit62] = IH[hhduit62kar] || IH[hhduit62ris];

    /* Uitmelding HD fc67 */
    IH[hhduit67kar] = RT[thduit67kar] = !T[thduit67kar] && SCH[schhduit67kar] && (DSIMelding_HD_V1(67, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit67ris] = SCH[schhduit67ris] && (ris_uitmelding_selectief(hdFC67));
#endif /* NO_RIS */
    IH[hhduit67] = IH[hhduit67kar] || IH[hhduit67ris];

    /* Uitmelding HD fc68 */
    IH[hhduit68kar] = RT[thduit68kar] = !T[thduit68kar] && SCH[schhduit68kar] && (DSIMelding_HD_V1(68, CIF_DSUIT, FALSE));
#ifndef NO_RIS
    IH[hhduit68ris] = SCH[schhduit68ris] && (ris_uitmelding_selectief(hdFC68));
#endif /* NO_RIS */
    IH[hhduit68] = IH[hhduit68kar] || IH[hhduit68ris];

    /* Bijhouden stiptheidsklassen ingemelde voertuigen */
    /* Bij inmelding: registeren stiptheidsklasse achterste voertuig */
    TrackStiptObvTSTP(hprioin02bus, hpriouit02bus, &iAantInm02bus, iKARInSTP02bus, hprio02bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin03bus, hpriouit03bus, &iAantInm03bus, iKARInSTP03bus, hprio03bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin05bus, hpriouit05bus, &iAantInm05bus, iKARInSTP05bus, hprio05bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin08bus, hpriouit08bus, &iAantInm08bus, iKARInSTP08bus, hprio08bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin09bus, hpriouit09bus, &iAantInm09bus, iKARInSTP09bus, hprio09bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    TrackStiptObvTSTP(hprioin11bus, hpriouit11bus, &iAantInm11bus, iKARInSTP11bus, hprio11bus, PRM[prmOVtstpgrensvroeg], PRM[prmOVtstpgrenslaat]);
    MM[mstp02bus] = iAantInm02bus > 0 ? iKARInSTP02bus[0] : 0;
    MM[mstp03bus] = iAantInm03bus > 0 ? iKARInSTP03bus[0] : 0;
    MM[mstp05bus] = iAantInm05bus > 0 ? iKARInSTP05bus[0] : 0;
    MM[mstp08bus] = iAantInm08bus > 0 ? iKARInSTP08bus[0] : 0;
    MM[mstp09bus] = iAantInm09bus > 0 ? iKARInSTP09bus[0] : 0;
    MM[mstp11bus] = iAantInm11bus > 0 ? iKARInSTP11bus[0] : 0;


    /* Bijhouden melding en ondergedrag KAR */
    RT[tkarmelding] = CIF_DSIWIJZ != 0 && CIF_DSI[CIF_DSI_LUS] == 0;
    RT[tkarog] = T[tkarmelding] || !startkarog;
    if (!startkarog) startkarog = TRUE;
    /* Doorzetten HD inmeldingen */
    IH[hhdin03] |= IH[hhdin02]; IH[hhduit03] |= IH[hhduit02];
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
    IH[hstp02bus] = !C[cvchd02] && !C[cvchd03] && SCH[schovstipt02bus];
    IH[hstp03bus] = !C[cvchd03] && SCH[schovstipt03bus];
    IH[hstp05bus] = !C[cvchd05] && SCH[schovstipt05bus];
    IH[hstp08bus] = !C[cvchd08] && SCH[schovstipt08bus];
    IH[hstp09bus] = !C[cvchd09] && SCH[schovstipt09bus];
    IH[hstp11bus] = !C[cvchd11] && SCH[schovstipt11bus];
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_TE_VROEG || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstipttevroeg02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_VROEG || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttevroeg03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_VROEG || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttevroeg05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_VROEG || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttevroeg08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_VROEG || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttevroeg09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_VROEG || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttevroeg11bus);
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_OP_TIJD || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstiptoptijd02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_OP_TIJD || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstiptoptijd03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_OP_TIJD || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstiptoptijd05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_OP_TIJD || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstiptoptijd08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_OP_TIJD || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstiptoptijd09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_OP_TIJD || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstiptoptijd11bus);
    if (IH[hstp02bus] && (MM[mstp02bus] == CIF_TE_LAAT || !MM[mstp02bus])) iPrioriteitsOpties[prioFC02bus] = BepaalPrioriteitsOpties(prmovstipttelaat02bus);
    if (IH[hstp03bus] && (MM[mstp03bus] == CIF_TE_LAAT || !MM[mstp03bus])) iPrioriteitsOpties[prioFC03bus] = BepaalPrioriteitsOpties(prmovstipttelaat03bus);
    if (IH[hstp05bus] && (MM[mstp05bus] == CIF_TE_LAAT || !MM[mstp05bus])) iPrioriteitsOpties[prioFC05bus] = BepaalPrioriteitsOpties(prmovstipttelaat05bus);
    if (IH[hstp08bus] && (MM[mstp08bus] == CIF_TE_LAAT || !MM[mstp08bus])) iPrioriteitsOpties[prioFC08bus] = BepaalPrioriteitsOpties(prmovstipttelaat08bus);
    if (IH[hstp09bus] && (MM[mstp09bus] == CIF_TE_LAAT || !MM[mstp09bus])) iPrioriteitsOpties[prioFC09bus] = BepaalPrioriteitsOpties(prmovstipttelaat09bus);
    if (IH[hstp11bus] && (MM[mstp11bus] == CIF_TE_LAAT || !MM[mstp11bus])) iPrioriteitsOpties[prioFC11bus] = BepaalPrioriteitsOpties(prmovstipttelaat11bus);

    /* Geen prioriteit bij file stroom afwaarts */
    if (IH[hfileFile68af])
    {
        iInstPrioriteitsOpties[prioFC08bus] = poGeenPrioriteit;
        iInstPrioriteitsOpties[prioFC11bus] = poGeenPrioriteit;
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
        iPrioriteit[prioFC11bus] = 0;
    }
}
/* ------------------------------------
   Extra code tegenhouden conflicten OV
   ------------------------------------ */
void TegenhoudenConflictenExtra(void)
{
}

/* ---------------------------
   Post afhandeling prioriteit
   --------------------------- */
void PostAfhandelingPrio(void)
{

    /* Niet afkappen naloop richtingen wanneer een naloop tijd nog loopt */
    if (RT[tnlfg2221] || T[tnlfg2221] || RT[tnleg2221] || T[tnleg2221])
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
    /* Tegenrichting moet ook kunnen koppelen bij koppelaanvraag */
    PAR[fc32] = PAR[fc32] && (!IH[hnlak31a] || PAR[fc31]);
    PAR[fc31] = PAR[fc31] && (!IH[hnlak32a] || PAR[fc32]);
    PAR[fc34] = PAR[fc34] && (!IH[hnlak33a] || PAR[fc33]);
    PAR[fc33] = PAR[fc33] && (!IH[hnlak34a] || PAR[fc34]);

    /* Bepaal naloop voetgangers wel/niet toegestaan */
    IH[hnlsg3132] = (PR[fc31] || AR[fc31] && PAR[fc32]) && IH[hnlak31a];
    IH[hnlsg3231] = (PR[fc32] || AR[fc32] && PAR[fc31]) && IH[hnlak32a];
    IH[hnlsg3334] = (PR[fc33] || AR[fc33] && PAR[fc34]) && IH[hnlak33a];
    IH[hnlsg3433] = (PR[fc34] || AR[fc34] && PAR[fc33]) && IH[hnlak34a];

    /* PAR-ongecoordineerd */
    PAR[fc31] = PAR[fc31] || IH[hmadk31b] && max_par_los(fc31) && (!IH[hmadk31a] || SCH[schlos31_1]) && (!H[hmadk32a] || SCH[schlos31_2]);
    PAR[fc32] = PAR[fc32] || IH[hmadk32b] && max_par_los(fc32) && (!IH[hmadk32a] || SCH[schlos32_1]) && (!H[hmadk31a] || SCH[schlos32_2]);
    PAR[fc33] = PAR[fc33] || IH[hmadk33b] && max_par_los(fc33) && (!IH[hmadk33a] || SCH[schlos33_1]) && (!H[hmadk34a] || SCH[schlos33_2]);
    PAR[fc34] = PAR[fc34] || IH[hmadk34b] && max_par_los(fc34) && (!IH[hmadk34a] || SCH[schlos34_1]) && (!H[hmadk33a] || SCH[schlos34_2]);

    /* PAR correcties gelijkstart synchronisaties */
    if (SCH[schgs2484]) PAR[fc84] = PAR[fc84] && (PAR[fc24] || !A[fc24]);
    if (SCH[schgs2484]) PAR[fc24] = PAR[fc24] && (PAR[fc84] || !A[fc84]);

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
