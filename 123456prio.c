/* PRIORITEIT FUNCTIES APPLICATIE */
/* ------------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456prio.c
      CCOL:   8.0
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.8   16-08-2024   TLCGen      Release versie TLCGen
 * 12.5.0     28-08-2024   Wiersma     CCOL8 versie 
 *
 ************************************************************************************/

#define NALOPEN
#define PRIO_ADDFILE

/*include files */
/*------------- */
#ifndef PRACTICE_TEST
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
        extern bool display;
    #endif
    #include "ccolfunc.h"
    #include "ccol_mon.h"
    #include "extra_func.h"
    #include "extra_func_prio.h"
#endif /* PRACTICE_TEST */

bool vertraag_kar_uitm[prioFCMAX];

#define MAX_AANTAL_INMELDINGEN           10
#define DEFAULT_MAX_WACHTTIJD           120
#define NO_REALISEREN_TOEGESTAAN

extern mulv DB_old[];
extern mulv TDH_old[];

#ifndef PRACTICE_TEST
#include "prio.c"
#else
#include "prio.h"
const code *iFC_PRIO_code[prioFCMAX];
#endif

/* Variabele tbv start KAR ondergedrag timer bij starten regeling */
static char startkarog = FALSE;

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
    iFC_PRIOix[prioFC02] = fc02;
    iFC_PRIOix[prioFC08] = fc08;
    iFC_PRIOix[prioFC11] = fc11;
    iFC_PRIOix[prioFC22] = fc22;
    iFC_PRIOix[prioFC24] = fc24;
    iFC_PRIOix[prioFC61] = fc61;
    iFC_PRIOix[prioFC84] = fc84;
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

    /* Code voor richtingen met PRIO */
    #ifdef PRACTICE_TEST
        iFC_PRIO_code[prioFC02] = "prio02";
        iFC_PRIO_code[prioFC08] = "prio08";
        iFC_PRIO_code[prioFC11] = "prio11";
        iFC_PRIO_code[prioFC22] = "prio22";
        iFC_PRIO_code[prioFC24] = "prio24";
        iFC_PRIO_code[prioFC61] = "prio61";
        iFC_PRIO_code[prioFC84] = "prio84";
        iFC_PRIO_code[hdFC02] = "hd02";
        iFC_PRIO_code[hdFC03] = "hd03";
        iFC_PRIO_code[hdFC05] = "hd05";
        iFC_PRIO_code[hdFC08] = "hd08";
        iFC_PRIO_code[hdFC09] = "hd09";
        iFC_PRIO_code[hdFC11] = "hd11";
        iFC_PRIO_code[hdFC61] = "hd61";
        iFC_PRIO_code[hdFC62] = "hd62";
        iFC_PRIO_code[hdFC67] = "hd67";
        iFC_PRIO_code[hdFC68] = "hd68";
    #endif /* PRACTICE_TEST */

    /* Index van de groenbewakingstimer */
    iT_GBix[prioFC02] = tgb02;
    iT_GBix[prioFC08] = tgb08;
    iT_GBix[prioFC11] = tgb11;
    iT_GBix[prioFC22] = tgb22;
    iT_GBix[prioFC24] = tgb24;
    iT_GBix[prioFC61] = tgb61;
    iT_GBix[prioFC84] = tgb84;
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
    iH_PRIOix[prioFC02] = hprio02;
    iH_PRIOix[prioFC08] = hprio08;
    iH_PRIOix[prioFC11] = hprio11;
    iH_PRIOix[prioFC22] = hprio22;
    iH_PRIOix[prioFC24] = hprio24;
    iH_PRIOix[prioFC61] = hprio61;
    iH_PRIOix[prioFC84] = hprio84;
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
    iInstPrioriteitsNiveau[prioFC02] = PRM[prmprio02]/1000L;
    iInstPrioriteitsNiveau[prioFC08] = PRM[prmprio08]/1000L;
    iInstPrioriteitsNiveau[prioFC11] = PRM[prmprio11]/1000L;
    iInstPrioriteitsNiveau[prioFC22] = PRM[prmprio22]/1000L;
    iInstPrioriteitsNiveau[prioFC24] = PRM[prmprio24]/1000L;
    iInstPrioriteitsNiveau[prioFC61] = PRM[prmprio61]/1000L;
    iInstPrioriteitsNiveau[prioFC84] = PRM[prmprio84]/1000L;
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
    iInstPrioriteitsOpties[prioFC02] = BepaalPrioriteitsOpties(prmprio02);
    iInstPrioriteitsOpties[prioFC08] = BepaalPrioriteitsOpties(prmprio08);
    iInstPrioriteitsOpties[prioFC11] = BepaalPrioriteitsOpties(prmprio11);
    iInstPrioriteitsOpties[prioFC22] = BepaalPrioriteitsOpties(prmprio22);
    iInstPrioriteitsOpties[prioFC24] = BepaalPrioriteitsOpties(prmprio24);
    iInstPrioriteitsOpties[prioFC61] = BepaalPrioriteitsOpties(prmprio61);
    iInstPrioriteitsOpties[prioFC84] = BepaalPrioriteitsOpties(prmprio84);
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
    iGroenBewakingsTijd[prioFC02] = T_max[tgb02];
    iGroenBewakingsTijd[prioFC08] = T_max[tgb08];
    iGroenBewakingsTijd[prioFC11] = T_max[tgb11];
    iGroenBewakingsTijd[prioFC22] = T_max[tgb22];
    iGroenBewakingsTijd[prioFC24] = T_max[tgb24];
    iGroenBewakingsTijd[prioFC61] = T_max[tgb61];
    iGroenBewakingsTijd[prioFC84] = T_max[tgb84];
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
    iRTSOngehinderd[prioFC02] = PRM[prmrto02];
    iRTSOngehinderd[prioFC08] = PRM[prmrto08];
    iRTSOngehinderd[prioFC11] = PRM[prmrto11];
    iRTSOngehinderd[prioFC22] = PRM[prmrto22];
    iRTSOngehinderd[prioFC24] = PRM[prmrto24];
    iRTSOngehinderd[prioFC61] = PRM[prmrto61];
    iRTSOngehinderd[prioFC84] = PRM[prmrto84];
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
    iRTSBeperktGehinderd[prioFC02] = PRM[prmrtbg02];
    iRTSBeperktGehinderd[prioFC08] = PRM[prmrtbg08];
    iRTSBeperktGehinderd[prioFC11] = PRM[prmrtbg11];
    iRTSBeperktGehinderd[prioFC22] = PRM[prmrtbg22];
    iRTSBeperktGehinderd[prioFC24] = PRM[prmrtbg24];
    iRTSBeperktGehinderd[prioFC61] = PRM[prmrtbg61];
    iRTSBeperktGehinderd[prioFC84] = PRM[prmrtbg84];
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
    iRTSGehinderd[prioFC02] = PRM[prmrtg02];
    iRTSGehinderd[prioFC08] = PRM[prmrtg08];
    iRTSGehinderd[prioFC11] = PRM[prmrtg11];
    iRTSGehinderd[prioFC22] = PRM[prmrtg22];
    iRTSGehinderd[prioFC24] = PRM[prmrtg24];
    iRTSGehinderd[prioFC61] = PRM[prmrtg61];
    iRTSGehinderd[prioFC84] = PRM[prmrtg84];
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
    iOnderMaximum[prioFC02] = PRM[prmomx02];
    iOnderMaximum[prioFC08] = PRM[prmomx08];
    iOnderMaximum[prioFC11] = PRM[prmomx11];
    iOnderMaximum[prioFC22] = PRM[prmomx22];
    iOnderMaximum[prioFC24] = PRM[prmomx24];
    iOnderMaximum[prioFC61] = PRM[prmomx61];
    iOnderMaximum[prioFC84] = PRM[prmomx84];
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
    iBlokkeringsTijd[prioFC02] = T_max[tblk02];
    iBlokkeringsTijd[prioFC08] = T_max[tblk08];
    iBlokkeringsTijd[prioFC11] = T_max[tblk11];
    iBlokkeringsTijd[prioFC22] = T_max[tblk22];
    iBlokkeringsTijd[prioFC24] = T_max[tblk24];
    iBlokkeringsTijd[prioFC61] = T_max[tblk61];
    iBlokkeringsTijd[prioFC84] = T_max[tblk84];
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
    iSelDetFoutNaGB[prioFC02] = SCH[schupinagb02];
    iSelDetFoutNaGB[prioFC08] = SCH[schupinagb08];
    iSelDetFoutNaGB[prioFC11] = SCH[schupinagb11];
    iSelDetFoutNaGB[prioFC22] = SCH[schupinagb22];
    iSelDetFoutNaGB[prioFC24] = SCH[schupinagb24];
    iSelDetFoutNaGB[prioFC61] = SCH[schupinagb61];
    iSelDetFoutNaGB[prioFC84] = SCH[schupinagb84];
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
    iInstPercMaxGroenTijdTerugKomen[fc03] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc05] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc08] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc09] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc11] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc21] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc26] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc28] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc31] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc38] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc62] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc67] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc68] = 0;
    iInstPercMaxGroenTijdTerugKomen[fc82] = 0;

    /* De minimale groentijd die een richting krijgt als
       deze mag terugkomen. */
    iInstMinTerugKomGroenTijd[fc03] = 60;
    iInstMinTerugKomGroenTijd[fc05] = 60;
    iInstMinTerugKomGroenTijd[fc08] = 60;
    iInstMinTerugKomGroenTijd[fc09] = 60;
    iInstMinTerugKomGroenTijd[fc11] = 60;
    iInstMinTerugKomGroenTijd[fc21] = 60;
    iInstMinTerugKomGroenTijd[fc26] = 60;
    iInstMinTerugKomGroenTijd[fc28] = 60;
    iInstMinTerugKomGroenTijd[fc31] = 60;
    iInstMinTerugKomGroenTijd[fc38] = 60;
    iInstMinTerugKomGroenTijd[fc62] = 60;
    iInstMinTerugKomGroenTijd[fc67] = 60;
    iInstMinTerugKomGroenTijd[fc68] = 60;
    iInstMinTerugKomGroenTijd[fc82] = 60;

    /* Aantal malen niet afkappen */
    iInstAantalMalenNietAfkappen[fc03] = 0;
    iInstAantalMalenNietAfkappen[fc05] = 0;
    iInstAantalMalenNietAfkappen[fc08] = 0;
    iInstAantalMalenNietAfkappen[fc09] = 0;
    iInstAantalMalenNietAfkappen[fc11] = 0;
    iInstAantalMalenNietAfkappen[fc21] = 0;
    iInstAantalMalenNietAfkappen[fc26] = 0;
    iInstAantalMalenNietAfkappen[fc28] = 0;
    iInstAantalMalenNietAfkappen[fc62] = 0;
    iInstAantalMalenNietAfkappen[fc67] = 0;
    iInstAantalMalenNietAfkappen[fc68] = 0;
    iInstAantalMalenNietAfkappen[fc82] = 0;

    /* Onder deze groentijd mag een richting niet worden
       afgekapt, tenzij zich een nooddienst heeft ingemeld. */
    iAfkapGroenTijd[fc03] = 70;
    iAfkapGroenTijd[fc05] = 70;
    iAfkapGroenTijd[fc08] = 70;
    iAfkapGroenTijd[fc09] = 70;
    iAfkapGroenTijd[fc11] = 70;
    iAfkapGroenTijd[fc21] = 60;
    iAfkapGroenTijd[fc26] = 60;
    iAfkapGroenTijd[fc28] = 60;
    iAfkapGroenTijd[fc31] = 0;
    iAfkapGroenTijd[fc38] = 0;
    iAfkapGroenTijd[fc62] = 70;
    iAfkapGroenTijd[fc67] = 70;
    iAfkapGroenTijd[fc68] = 70;
    iAfkapGroenTijd[fc82] = 60;

    /* Als een richting minder groen heeft gehad dan
       dit percentage van de maximum groentijd, dan
       mag de richting niet worden afgekapt, tenzij
       zich een nooddienst heeft ingemeld. */
    iPercGroenTijd[fc03] = 0;
    iPercGroenTijd[fc05] = 0;
    iPercGroenTijd[fc08] = 0;
    iPercGroenTijd[fc09] = 0;
    iPercGroenTijd[fc11] = 0;
    iPercGroenTijd[fc21] = 0;
    iPercGroenTijd[fc26] = 0;
    iPercGroenTijd[fc28] = 0;
    iPercGroenTijd[fc31] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc38] = 100; /* Voetgangers mogen niet worden afgekapt. */
    iPercGroenTijd[fc62] = 0;
    iPercGroenTijd[fc67] = 0;
    iPercGroenTijd[fc68] = 0;
    iPercGroenTijd[fc82] = 0;

    /* Na te zijn afgekapt, wordt het percentage
       van de maximumgroentijd verhoogd met dit ophoogpercentage. */
    iInstOphoogPercentageMG[fc03] = 0;
    iInstOphoogPercentageMG[fc05] = 0;
    iInstOphoogPercentageMG[fc08] = 0;
    iInstOphoogPercentageMG[fc09] = 0;
    iInstOphoogPercentageMG[fc11] = 0;
    iInstOphoogPercentageMG[fc21] = 0;
    iInstOphoogPercentageMG[fc26] = 0;
    iInstOphoogPercentageMG[fc28] = 0;
    iInstOphoogPercentageMG[fc31] = 0;
    iInstOphoogPercentageMG[fc38] = 0;
    iInstOphoogPercentageMG[fc62] = 0;
    iInstOphoogPercentageMG[fc67] = 0;
    iInstOphoogPercentageMG[fc68] = 0;
    iInstOphoogPercentageMG[fc82] = 0;

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
    iPrioMeeRealisatie[fc02][1] = fc61;
    iPrioMeeRealisatie[fc03][0] = fc02;
    iPrioMeeRealisatie[fc05][0] = fc61;
    iPrioMeeRealisatie[fc05][1] = fc62;
    iPrioMeeRealisatie[fc08][0] = fc09;
    iPrioMeeRealisatie[fc08][1] = fc67;
    iPrioMeeRealisatie[fc09][0] = fc08;
    iPrioMeeRealisatie[fc11][0] = fc67;
    iPrioMeeRealisatie[fc11][1] = fc68;
    iPrioMeeRealisatie[fc62][0] = fc61;
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
    PrioRijTijdScenario(prioFC02, d0201, d0203, tbtovg02);
    PrioRijTijdScenario(prioFC02, d0202, d0204, tbtovg02);
    PrioRijTijdScenario(prioFC02, NG, d0205, NG);
    PrioRijTijdScenario(prioFC02, NG, d0206, NG);

    PrioRijTijdScenario(prioFC08, d0801, d0803, tbtovg08);
    PrioRijTijdScenario(prioFC08, d0802, d0804, tbtovg08);
    PrioRijTijdScenario(prioFC08, NG, d0805, NG);
    PrioRijTijdScenario(prioFC08, NG, d0806, NG);

    PrioRijTijdScenario(prioFC11, d1101, d1102, tbtovg11);
    PrioRijTijdScenario(prioFC11, NG, d1103, NG);

    PrioRijTijdScenario(prioFC22, d2201, NG, NG);

    PrioRijTijdScenario(prioFC24, d2401, NG, NG);

    PrioRijTijdScenario(prioFC61, d6101, d6102, tbtovg61);

    PrioRijTijdScenario(prioFC84, d8401, NG, NG);

    PrioRijTijdScenario(hdFC02, d0201, d0203, tbtovg02hd);
    PrioRijTijdScenario(hdFC02, d0202, d0204, tbtovg02hd);
    PrioRijTijdScenario(hdFC02, NG, d0205, NG);
    PrioRijTijdScenario(hdFC02, NG, d0206, NG);
    PrioRijTijdScenario(hdFC03, d0301, d0302, tbtovg03hd);
    PrioRijTijdScenario(hdFC05, d0501, d0502, tbtovg05hd);
    PrioRijTijdScenario(hdFC08, d0801, d0803, tbtovg08hd);
    PrioRijTijdScenario(hdFC08, d0802, d0804, tbtovg08hd);
    PrioRijTijdScenario(hdFC08, NG, d0805, NG);
    PrioRijTijdScenario(hdFC08, NG, d0806, NG);
    PrioRijTijdScenario(hdFC09, d0901, d0902, tbtovg09hd);
    PrioRijTijdScenario(hdFC11, d1101, d1102, tbtovg11hd);
    PrioRijTijdScenario(hdFC11, NG, d1103, NG);
    PrioRijTijdScenario(hdFC61, d6101, d6102, tbtovg61hd);
    PrioRijTijdScenario(hdFC62, d6201, d6203, tbtovg62hd);
    PrioRijTijdScenario(hdFC62, d6202, d6204, tbtovg62hd);
    PrioRijTijdScenario(hdFC67, d6701, d6702, tbtovg67hd);
    PrioRijTijdScenario(hdFC68, d6801, d6803, tbtovg68hd);
    PrioRijTijdScenario(hdFC68, d6802, d6804, tbtovg68hd);



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
#if defined PRACTICE_TEST && defined CCOL_IS_SPECIAL
    is_special_signals();
#endif
    /* Pririteit-inmeldingen */
    PrioInmelden(prioFC02, SH[hprioin02], iInstPrioriteitsNiveau[prioFC02], iInstPrioriteitsOpties[prioFC02], 0, 0);
    PrioInmelden(prioFC08, SH[hprioin08], iInstPrioriteitsNiveau[prioFC08], iInstPrioriteitsOpties[prioFC08], 0, 0);
    PrioInmelden(prioFC11, SH[hprioin11], iInstPrioriteitsNiveau[prioFC11], iInstPrioriteitsOpties[prioFC11], 0, 0);
    PrioInmelden(prioFC22, SH[hprioin22], iInstPrioriteitsNiveau[prioFC22], iInstPrioriteitsOpties[prioFC22], 0, 0);
    PrioInmelden(prioFC24, SH[hprioin24], iInstPrioriteitsNiveau[prioFC24], iInstPrioriteitsOpties[prioFC24], 0, 0);
    PrioInmelden(prioFC61, SH[hprioin61], iInstPrioriteitsNiveau[prioFC61], iInstPrioriteitsOpties[prioFC61], 0, 0);
    PrioInmelden(prioFC84, SH[hprioin84], iInstPrioriteitsNiveau[prioFC84], iInstPrioriteitsOpties[prioFC84], 0, 0);

    /* Pririteit-uitmeldingen */
    PrioUitmelden(prioFC02, SH[hpriouit02]);
    PrioUitmelden(prioFC08, SH[hpriouit08]);
    PrioUitmelden(prioFC11, SH[hpriouit11]);
    PrioUitmelden(prioFC22, SH[hpriouit22]);
    PrioUitmelden(prioFC24, SH[hpriouit24]);
    PrioUitmelden(prioFC61, SH[hpriouit61]);
    PrioUitmelden(prioFC84, SH[hpriouit84]);

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
    IH[hprioin02] = IH[hprioin02kar] = IH[hprioin02sd0242] = FALSE;
    if (SCH[schprioin02kar])
    {
        IH[hprioin02kar] = RT[tprioin02kar] = !T[tprioin02] && !T[tprioin02kar] && DSIMeldingPRIO_V1(0, PRM[prmvtgcat02], TRUE, PRM[prmkarsg02],TRUE, CIF_DSIN, TRUE);
    }
    if (SCH[schprioin02sd0242SD])
    {
        IH[hprioin02sd0242] = RT[tprioin02sd0242] = !T[tprioin02] && !T[tprioin02sd0242] && DSIMeldingPRIO_V1(D0242, PRM[prmvtgcat02], FALSE, NG, SCH[schcheckdstype], CIF_DSIN, TRUE);
    }
    IH[hprioin02] = RT[tprioin02] = IH[hprioin02kar] || IH[hprioin02sd0242];

    /* Uitmelding fc02 type Bus */
    IH[hpriouit02] = IH[hpriouit02kar] = IH[hpriouit02sd0241] = FALSE;
    if (SCH[schpriouit02kar])
    {
        IH[hpriouit02kar] = RT[tpriouit02kar] = !T[tpriouit02] && !T[tpriouit02kar] && DSIMeldingPRIO_V2(fc02, prioFC02, 0, PRM[prmvtgcat02], TRUE, PRM[prmkarsg02],TRUE, CIF_DSUIT, TRUE);
    }
    if (SCH[schpriouit02sd0241SD])
    {
        IH[hpriouit02sd0241] = RT[tpriouit02sd0241] = !T[tpriouit02] && !T[tpriouit02sd0241] && DSIMeldingPRIO_V1(D0241, PRM[prmvtgcat02], FALSE, NG, SCH[schcheckdstype], CIF_DSUIT, TRUE);
    }
    IH[hpriouit02] = RT[tpriouit02] = IH[hpriouit02kar] || IH[hpriouit02sd0241];

    /* Inmelding fc08 type Bus */
    IH[hprioin08] = IH[hprioin08kar] = IH[hprioin08sd0842] = FALSE;
    if (SCH[schprioin08kar])
    {
        IH[hprioin08kar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat08], TRUE, PRM[prmkarsg08],TRUE, CIF_DSIN, TRUE);
    }
    if (SCH[schprioin08sd0842SD])
    {
        IH[hprioin08sd0842] = RT[tprioin08sd0842] = !T[tprioin08sd0842] && DSIMeldingPRIO_V1(D0842, PRM[prmvtgcat08], FALSE, NG, SCH[schcheckdstype], CIF_DSIN, TRUE);
    }
    IH[hprioin08] = IH[hprioin08kar] || IH[hprioin08sd0842];

    /* Uitmelding fc08 type Bus */
    IH[hpriouit08] = IH[hpriouit08kar] = IH[hpriouit08sd0841] = FALSE;
    if (SCH[schpriouit08kar])
    {
        IH[hpriouit08kar] = RT[tpriouit08kar] = !T[tpriouit08kar] && DSIMeldingPRIO_V2(fc08, prioFC08, 0, PRM[prmvtgcat08], TRUE, PRM[prmkarsg08],TRUE, CIF_DSUIT, TRUE);
    }
    if (SCH[schpriouit08sd0841SD])
    {
        IH[hpriouit08sd0841] = RT[tpriouit08sd0841] = !T[tpriouit08sd0841] && DSIMeldingPRIO_V1(D0841, PRM[prmvtgcat08], FALSE, NG, SCH[schcheckdstype], CIF_DSUIT, TRUE);
    }
    IH[hpriouit08] = IH[hpriouit08kar] || IH[hpriouit08sd0841];

    /* Inmelding fc11 type Bus */
    IH[hprioin11] = IH[hprioin11kar] = IH[hprioin11sd1142] = FALSE;
    if (SCH[schprioin11kar])
    {
        IH[hprioin11kar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat11], TRUE, PRM[prmkarsg11],TRUE, CIF_DSIN, TRUE);
    }
    if (SCH[schprioin11sd1142SD])
    {
        IH[hprioin11sd1142] = RT[tprioin11sd1142] = !T[tprioin11sd1142] && DSIMeldingPRIO_V1(D1142, PRM[prmvtgcat11], FALSE, NG, SCH[schcheckdstype], CIF_DSIN, TRUE);
    }
    IH[hprioin11] = IH[hprioin11kar] || IH[hprioin11sd1142];

    /* Uitmelding fc11 type Bus */
    IH[hpriouit11] = IH[hpriouit11kar] = IH[hpriouit11sd1141] = FALSE;
    if (SCH[schpriouit11kar])
    {
        IH[hpriouit11kar] = RT[tpriouit11kar] = !T[tpriouit11kar] && DSIMeldingPRIO_V2(fc11, prioFC11, 0, PRM[prmvtgcat11], TRUE, PRM[prmkarsg11],TRUE, CIF_DSUIT, TRUE);
    }
    if (SCH[schpriouit11sd1141SD])
    {
        IH[hpriouit11sd1141] = RT[tpriouit11sd1141] = !T[tpriouit11sd1141] && DSIMeldingPRIO_V1(D1141, PRM[prmvtgcat11], FALSE, NG, SCH[schcheckdstype], CIF_DSUIT, TRUE);
    }
    IH[hpriouit11] = IH[hpriouit11kar] || IH[hpriouit11sd1141];

    /* Inmelding fc22 type Fiets */
    fietsprio_update(fc22, NG, NG, cftscyc22fiets,SH[hprioin22fiets], ML);
    IH[hprioin22] = IH[hprioin22fiets] = FALSE;
    if (SCH[schprioin22fiets])
    {
        IH[hprioin22fiets] = RT[tprioin22fiets] = !T[tprioin22] && !T[tprioin22fiets] && !C[cvc22] && fietsprio_inmelding(fc22, NG, NG, cftscyc22fiets, prmftsblok22fiets, prmftsmaxpercyc22fiets, NG, prmftsminwt22fiets, SH[hprioin22fiets], ML, NG, NG);
    }
    IH[hprioin22] = RT[tprioin22] = IH[hprioin22fiets];

    /* Uitmelding fc22 type Fiets */
    IH[hpriouit22] = IH[hpriouit22fiets] = FALSE;
    if (SCH[schpriouit22fiets])
    {
        IH[hpriouit22fiets] = !T[tpriouit22] && C[cvc22] && G[fc22] && (T[tgb22] && (T_timer[tgb22] > 1));
    }
    IH[hpriouit22] = RT[tpriouit22] = IH[hpriouit22fiets];

    /* Inmelding fc24 type Fiets */
    fietsprio_update(fc24, d2403, cftsvtg24fiets, cftscyc24fiets,SH[hprioin24fiets2403], ML);
    IH[hprioin24] = IH[hprioin24fiets2403] = FALSE;
    if (SCH[schprioin24fiets2403])
    {
        IH[hprioin24fiets2403] = RT[tprioin24fiets2403] = !T[tprioin24] && !T[tprioin24fiets2403] && !C[cvc24] && fietsprio_inmelding(fc24, d2403, cftsvtg24fiets, cftscyc24fiets, prmftsblok24fiets, prmftsmaxpercyc24fiets, prmftsminvtg24fiets, prmftsminwt24fiets, SH[hprioin24fiets2403], ML, NG, NG);
    }
    IH[hprioin24] = RT[tprioin24] = IH[hprioin24fiets2403];

    /* Uitmelding fc24 type Fiets */
    IH[hpriouit24] = IH[hpriouit24fiets] = FALSE;
    if (SCH[schpriouit24fiets])
    {
        IH[hpriouit24fiets] = !T[tpriouit24] && C[cvc24] && G[fc24] && (T[tgb24] && (T_timer[tgb24] > 1));
    }
    IH[hpriouit24] = RT[tpriouit24] = IH[hpriouit24fiets];

    /* Inmelding fc61 type Bus */
    IH[hprioin61] = IH[hprioin61kar] = IH[hprioin61sd0241] = FALSE;
    if (SCH[schprioin61kar])
    {
        IH[hprioin61kar] = DSIMeldingPRIO_V1(0, PRM[prmvtgcat61], TRUE, PRM[prmkarsg61],TRUE, CIF_DSIN, DSIMeldingPRIO_LijnNummer_V1(prmallelijnen61, 5));
    }
    if (SCH[schprioin61sd0241SD])
    {
        IH[hprioin61sd0241] = DSIMeldingPRIO_V1(D0241, PRM[prmvtgcat61], FALSE, NG, SCH[schcheckdstype], CIF_DSIN, DSIMeldingPRIO_LijnNummer_V1(prmallelijnen61, 5));
    }
    IH[hprioin61] = IH[hprioin61kar] || IH[hprioin61sd0241];

    /* Uitmelding fc61 type Bus */
    IH[hpriouit61] = IH[hpriouit61kar] = IH[hpriouit61sd6141] = FALSE;
    if (SCH[schpriouit61kar])
    {
        IH[hpriouit61kar] = DSIMeldingPRIO_V2(fc61, prioFC61, 0, PRM[prmvtgcat61], TRUE, PRM[prmkarsg61],TRUE, CIF_DSUIT, DSIMeldingPRIO_LijnNummer_V1(prmallelijnen61, 5));
    }
    if (SCH[schpriouit61sd6141SD])
    {
        IH[hpriouit61sd6141] = DSIMeldingPRIO_V1(D6141, PRM[prmvtgcat61], FALSE, NG, SCH[schcheckdstype], CIF_DSUIT, DSIMeldingPRIO_LijnNummer_V1(prmallelijnen61, 5));
    }
    IH[hpriouit61] = IH[hpriouit61kar] || IH[hpriouit61sd6141];

    /* Inmelding fc84 type Fiets */
    fietsprio_update(fc84, NG, NG, cftscyc84fiets,SH[hprioin84fiets], ML);
    IH[hprioin84] = IH[hprioin84fiets] = FALSE;
    if (SCH[schprioin84fiets])
    {
        IH[hprioin84fiets] = RT[tprioin84fiets] = !T[tprioin84] && !T[tprioin84fiets] && !C[cvc84] && fietsprio_inmelding(fc84, NG, NG, cftscyc84fiets, prmftsblok84fiets, prmftsmaxpercyc84fiets, NG, prmftsminwt84fiets, SH[hprioin84fiets], ML, NG, NG);
    }
    IH[hprioin84] = RT[tprioin84] = IH[hprioin84fiets];

    /* Uitmelding fc84 type Fiets */
    IH[hpriouit84] = IH[hpriouit84fiets] = FALSE;
    if (SCH[schpriouit84fiets])
    {
        IH[hpriouit84fiets] = !T[tpriouit84] && C[cvc84] && G[fc84] && (T[tgb84] && (T_timer[tgb84] > 1));
    }
    IH[hpriouit84] = RT[tpriouit84] = IH[hpriouit84fiets];

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


    /* Bijhouden melding en ondergedrag KAR */
    RT[tkarmelding] = CIF_DSIWIJZ != 0 && CIF_DSI[CIF_DSI_LUS] == 0;
    RT[tkarog] = T[tkarmelding] || !startkarog;
    if (!startkarog) startkarog = TRUE;
    /* Doorzetten HD inmeldingen */
    IH[hhdin03] |= IH[hhdin02]; IH[hhduit03] |= IH[hhduit02];
    IH[hhdin61] |= IH[hhdin02]; IH[hhduit61] |= IH[hhduit02];
    IH[hhdin02] |= IH[hhdin03]; IH[hhduit02] |= IH[hhduit03];
    IH[hhdin61] |= IH[hhdin05]; IH[hhduit61] |= IH[hhduit05];
    IH[hhdin62] |= IH[hhdin05]; IH[hhduit62] |= IH[hhduit05];
    IH[hhdin09] |= IH[hhdin08]; IH[hhduit09] |= IH[hhduit08];
    IH[hhdin67] |= IH[hhdin08]; IH[hhduit67] |= IH[hhduit08];
    IH[hhdin08] |= IH[hhdin09]; IH[hhduit08] |= IH[hhduit09];
    IH[hhdin67] |= IH[hhdin11]; IH[hhduit67] |= IH[hhduit11];
    IH[hhdin68] |= IH[hhdin11]; IH[hhduit68] |= IH[hhduit11];
    IH[hhdin61] |= IH[hhdin62]; IH[hhduit61] |= IH[hhduit62];
    IH[hhdin67] |= IH[hhdin68]; IH[hhduit67] |= IH[hhduit68];
#if defined CCOL_IS_SPECIAL && defined PRACTICE_TEST
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
    /* Geen prioriteit bij file stroom afwaarts */
    if (IH[hfile68af])
    {
        iPrioriteitsOpties[prioFC08] = poAanvraag;
        iPrioriteitsOpties[prioFC11] = poAanvraag;
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
    if (IH[hfile68af])
    {
        iPrioriteit[prioFC08] = 0;
        iPrioriteit[prioFC11] = 0;
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

    /* Niet afkappen naloop richtingen wanneer een naloop tijd nog loopt */
    if (RT[tnlfgd2221] || T[tnlfgd2221] || RT[tnlegd2221] || T[tnlegd2221])
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
    if (RT[tnlfgd0262] || T[tnlfgd0262] || RT[tnlegd0262] || T[tnlegd0262] || RT[tnlfgd0562] || T[tnlfgd0562] || RT[tnlegd0562] || T[tnlegd0562])
    {
        Z[fc62] &= ~BIT6;
        RR[fc62] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc62] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfgd0868] || T[tnlfgd0868] || RT[tnlegd0868] || T[tnlegd0868] || RT[tnlfgd1168] || T[tnlfgd1168] || RT[tnlegd1168] || T[tnlegd1168])
    {
        Z[fc68] &= ~BIT6;
        RR[fc68] &= ~(BIT1 | BIT2 | BIT4 | BIT5 | BIT6);
        FM[fc68] &= ~PRIO_FM_BIT;
    }
    if (RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnlegd8281] || T[tnlegd8281])
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
        PAR[fc05] = PAR[fc05] && PAR[fc62];
        PAR[fc08] = PAR[fc08] && PAR[fc68];
        PAR[fc11] = PAR[fc11] && PAR[fc68];
        PAR[fc22] = PAR[fc22] && PAR[fc21];
        PAR[fc82] = PAR[fc82] && PAR[fc81];
    }

    /* PAR correcties eenzijdige synchronisaties */
    PAR[fc22] = PAR[fc22] || G[fc05];
    PAR[fc32] = PAR[fc32] || G[fc05];
    PAR[fc26] = PAR[fc26] || G[fc11];
    PAR[fc62] = PAR[fc62] || G[fc02];
    PAR[fc62] = PAR[fc62] || G[fc05];
    PAR[fc68] = PAR[fc68] || G[fc08];
    PAR[fc68] = PAR[fc68] || G[fc11];
    PAR[fc21] = PAR[fc21] || G[fc22];
    PAR[fc81] = PAR[fc81] || G[fc82];

    /* Niet alternatief komen tijdens file (meting na ss) */
    if (IH[hfile68af]) PAR[fc08] = FALSE;
    if (IH[hfile68af]) PAR[fc11] = FALSE;
}

/* -------------------------------------------------------
   PrioCcol zorgt voor het bijwerken van de CCOL-elementen
   voor het richtingen met prioriteit.
   ------------------------------------------------------- */
void PrioCcol(void) {
    PrioCcolElementen(prioFC02, tgb02, trt02, hprio02, cvc02, tblk02);
    PrioCcolElementen(prioFC08, tgb08, trt08, hprio08, cvc08, tblk08);
    PrioCcolElementen(prioFC11, tgb11, trt11, hprio11, cvc11, tblk11);
    PrioCcolElementen(prioFC22, tgb22, trt22, hprio22, cvc22, tblk22);
    PrioCcolElementen(prioFC24, tgb24, trt24, hprio24, cvc24, tblk24);
    PrioCcolElementen(prioFC61, tgb61, trt61, hprio61, cvc61, tblk61);
    PrioCcolElementen(prioFC84, tgb84, trt84, hprio84, cvc84, tblk84);
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

    #if !defined AUTOMAAT || defined PRACTICE_TEST
    /* Prioriteit ingrepen */
    if (SD[ddummykarin02bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg02], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit02bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg02], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin08bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit08bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg08], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin11bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit11bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg11], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykarin61bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[ddummykaruit61bus]) set_DSI_message(NG, CIF_BUS, PRM[prmkarsg61], CIF_DSUIT, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], 0);
    if (SD[d0242]) set_DSI_message(D0242, CIF_BUS, 2, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d0241]) set_DSI_message(D0241, CIF_BUS, 2, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d0842]) set_DSI_message(D0842, CIF_BUS, 8, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d0841]) set_DSI_message(D0841, CIF_BUS, 8, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d1142]) set_DSI_message(D1142, CIF_BUS, 11, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d1141]) set_DSI_message(D1141, CIF_BUS, 11, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);
    if (SD[d6141]) set_DSI_message(D6141, CIF_BUS, 61, CIF_DSIN, 1, PRM[prmtestdsivert] - 120, PRM[prmtestdsilyn], PRM[prmtestdsicat], NG);

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
    #endif /* !defined AUTOMAAT || defined PRACTICE_TEST */
}
#endif

#ifdef PRIO_ADDFILE
    #include "123456prio.add"
#endif /* PRIO_ADDFILE */

#ifdef PRACTICE_TEST
#include "prio.c"
#endif
