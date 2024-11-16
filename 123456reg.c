/* REGELPROGRAMMA */
/* -------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456reg.c
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   16-11-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable) ISG
 *
 ************************************************************************************/

#define REG (CIF_WPS[CIF_PROG_STATUS] == CIF_STAT_REG)
#define PRIO_ADDFILE

/* include files */
/* ------------- */
    #include "123456sys.h"
    #include "stdfunc.h"  /* standaard functies                */
    #include "fcvar.c"    /* fasecycli                         */
    #include "kfvar.c"    /* conflicten                        */
    #include "usvar.c"    /* uitgangs elementen                */
    #include "dpvar.c"    /* detectie elementen                */
    #include "tig_min.c"   /* garantie-ontruimingstijden        */
    #include "trg_min.c"  /* garantie-roodtijden               */
    #include "tgg_min.c"  /* garantie-groentijden              */
    #include "tgl_min.c"  /* garantie-geeltijden               */
    #include "isvar.c"    /* ingangs elementen                 */
    #include "dsivar.c"   /* selectieve detectie               */
    #include "hevar.c"    /* hulp elementen                    */
    #include "mevar.c"    /* geheugen elementen                */
    #include "tmvar.c"    /* tijd elementen                    */
    #include "ctvar.c"    /* teller elementen                  */
    #include "schvar.c"   /* software schakelaars              */
    #include "prmvar.c"   /* parameters                        */
    #include "lwmlvar.c"  /* langstwachtende modulen structuur */
    #ifndef NO_VLOG
        #include "vlogvar.c"  /* variabelen t.b.v. vlogfuncties                */
        #include "logvar.c"   /* variabelen t.b.v. logging                     */
        #include "monvar.c"   /* variabelen t.b.v. realtime monitoring         */
        #include "fbericht.h"
    #endif
#ifndef NO_PRIO
    #include "prio.h"       /* prio-afhandeling                  */
#endif /* NO_PRIO */
    #include "prsvar.c"   /* parameters parser                 */
    #include "control.c"  /* controller interface              */
    #include "rtappl.h"   /* applicatie routines               */
    #define PRIO_CHECK_WAGENNMR /* check op wagendienstnummer          */
#ifndef NO_PRIO
    #include "extra_func_prio.c" /* extra standaard functies OV     */
#endif /* NO_PRIO */
    #include "extra_func.c" /* extra standaard functies        */

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
/*    #include "ccdump.inc" */
    #include "keysdef.c"     /* Definitie toetsenbord t.b.v. stuffkey  */
    #if !defined (_DEBUG)
        #include "xyprintf.h" /* Printen debuginfo                      */
    #endif
#endif

    #include "detectie.c"
    #include "ccolfunc.c"
    #include "fixatie.c"
/* Include files wachttijdvoorspeller*/
#include "wtvfunc.c" /* berekening van de wachttijden voorspelling */
#include "wtlleds.c" /* aansturing van de wachttijdlantaarn met leds */
#ifdef MIRMON
    #include "MirakelMonitor.h"
#endif /* MIRMON */
    #include "dynamischhiaat.c"
#include "isgfunc.c" /* Interstartgroen functies */

mulv DB_old[DPMAX];
mulv DVG[DPMAX]; /* T.b.v. veiligheidsgroen */

    /* Robuuste Groenverdeler */
    #include "123456rgv.c"
    boolv rgvinit = TRUE;

/* kruispuntnaam in VISSIM */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    code SCJ_code[] = "123456";
#endif
/* tijden t.b.v. wachttijdvoorspellers */
/* ----------------------------------- */
mulv t_wacht[FCMAX] = { 0 }; /* berekende wachttijd */
mulv t_wacht_old[FCMAX] = { 0 }; /* vorige berekende wachttijd */
mulv t_wacht_halt[FCMAX] = { 0 }; /* gehalteerde berekende wachttijd */
mulv rr_twacht[FCMAX]; /* halteren wachttijd */
mulv C_counter_old[CTMAX];
boolv init_tvg;
boolv PAR_los[FCMAX] = { 0 };

#if !defined AUTOMAAT && !defined AUTOMAAT_TEST
    extern boolv display;
#endif

#include "123456reg.add"
#include "123456prio.c"
#include "isgfunc_prio.c" /* Interstartgroen prio functies */
#include "123456tab.c"

void PreApplication(void)
{
    /* Instellen TFB_max */
    TFB_max = PRM[prmfb];

    /* Opschonen wagennummer buffers */
    WDNST_cleanup();

    /* Robuuste Groenverdeler */
    IH[hrgvact] = SCH[schrgv];

    /* Instellen basis waarde hulpelementen 'geen dynamisch hiaat gebruiken'.
       Dit hulpelement kan in gebruikers code worden gebruikt voor eigen aansturing. */
    IH[hgeendynhiaat08] = !SCH[schdynhiaat08];
    IH[hgeendynhiaat09] = !SCH[schdynhiaat09];
    IH[hgeendynhiaat11] = !SCH[schdynhiaat11];

    /* Instellen basis waarde hulpelementen opdrempelen t.b.v. dynamische hiaattijden.
       Dit hulpelement kan in gebruikers code worden gebruikt voor eigen aansturing. */
    IH[hopdrempelen08] = SCH[schopdrempelen08];
    IH[hopdrempelen09] = SCH[schopdrempelen09];
    IH[hopdrempelen11] = SCH[schopdrempelen11];

    ResetIsgVars(); /* zet alle interstartgroentijden op -1 @@ niet isgfunc_prio.c maar isgfunc.c @@ @@ aanroepen net voor bepalen isg tijden en niet hier @@ */

    /* Aanroepen tbv prioriteitsingrepen */
    RijTijdScenario();
    RijTijdScenario_Add();
    InUitMelden();
    InUitMelden_Add();
    PrioInstellingen();
    PrioInstellingen_Add();
    PrioTimers();
    WachtTijdBewaking();
    WachtTijdBewaking_Add();
    OnderMaximum();
    OnderMaximumExtra();
    OnderMaximum_Add();
    BlokkeringsTijd();
    BlokkeringsTijd_Add();

    /* Aanroepen tbv prioriteitsingrepen ISG */
    PrioriteitsToekenning_ISG(); /* prioGKFC_MAX *gewijzigd naar prioFKFC_MAX tov functie in prio.c */
    PrioriteitsToekenning_ISG_Add(); /*@@ deze functie aanroep laten staan maar de functie zelf moet in moet in de 123456prio_add file @@ */

    PreApplication_Add();

    /* Genereren knippersignalen */
    UpdateKnipperSignalen();
}

void DetectieStoring_Aanvraag(void)
{
    /* vaste/vertraagde aanvraag bij detectiestoring */
    RT[tdstvert02] = !T[tdstvert02] && R[fc02] && !A[fc02] && (
                     SCH[schdvakd02_1a] && (CIF_IS[d02_1a] >= CIF_DET_STORING) ||
                     SCH[schdvakd02_1b] && (CIF_IS[d02_1b] >= CIF_DET_STORING) ||
                     (CIF_IS[d02_1a] >= CIF_DET_STORING || PRM[prmda02_1a] == 0) &&
                     (CIF_IS[d02_2a] >= CIF_DET_STORING || PRM[prmda02_2a] == 0) &&
                     (CIF_IS[d02_3a] >= CIF_DET_STORING || PRM[prmda02_3a] == 0) &&
                     (CIF_IS[d02_4a] >= CIF_DET_STORING || PRM[prmda02_4a] == 0) &&
                     !(PRM[prmda02_1a] == 0 && PRM[prmda02_2a] == 0 && PRM[prmda02_3a] == 0 && PRM[prmda02_4a] == 0) ||
                     (CIF_IS[d02_1b] >= CIF_DET_STORING || PRM[prmda02_1b] == 0) &&
                     (CIF_IS[d02_2b] >= CIF_DET_STORING || PRM[prmda02_2b] == 0) &&
                     (CIF_IS[d02_3b] >= CIF_DET_STORING || PRM[prmda02_3b] == 0) &&
                     (CIF_IS[d02_4b] >= CIF_DET_STORING || PRM[prmda02_4b] == 0) &&
                     !(PRM[prmda02_1b] == 0 && PRM[prmda02_2b] == 0 && PRM[prmda02_3b] == 0 && PRM[prmda02_4b] == 0));
    RT[tdstvert03] = !T[tdstvert03] && R[fc03] && !A[fc03] && (
                     SCH[schdvakd03_1] && (CIF_IS[d03_1] >= CIF_DET_STORING) ||
                     (CIF_IS[d03_1] >= CIF_DET_STORING || PRM[prmda03_1] == 0) &&
                     (CIF_IS[d03_2] >= CIF_DET_STORING || PRM[prmda03_2] == 0) &&
                     !(PRM[prmda03_1] == 0 && PRM[prmda03_2] == 0));
    RT[tdstvert05] = !T[tdstvert05] && R[fc05] && !A[fc05] && (
                     (CIF_IS[d05_1] >= CIF_DET_STORING || PRM[prmda05_1] == 0) &&
                     (CIF_IS[d05_2] >= CIF_DET_STORING || PRM[prmda05_2] == 0) &&
                     !(PRM[prmda05_1] == 0 && PRM[prmda05_2] == 0));
    RT[tdstvert08] = !T[tdstvert08] && R[fc08] && !A[fc08] && (
                     (CIF_IS[d08_1a] >= CIF_DET_STORING || PRM[prmda08_1a] == 0) &&
                     (CIF_IS[d08_1b] >= CIF_DET_STORING || PRM[prmda08_1b] == 0) &&
                     (CIF_IS[d08_2a] >= CIF_DET_STORING || PRM[prmda08_2a] == 0) &&
                     (CIF_IS[d08_3a] >= CIF_DET_STORING || PRM[prmda08_3a] == 0) &&
                     !(PRM[prmda08_1a] == 0 && PRM[prmda08_1b] == 0 && PRM[prmda08_2a] == 0 && PRM[prmda08_3a] == 0) ||
                     (CIF_IS[d08_2b] >= CIF_DET_STORING || PRM[prmda08_2b] == 0) &&
                     (CIF_IS[d08_3b] >= CIF_DET_STORING || PRM[prmda08_3b] == 0) &&
                     (CIF_IS[d08_4b] >= CIF_DET_STORING || PRM[prmda08_4b] == 0) &&
                     !(PRM[prmda08_2b] == 0 && PRM[prmda08_3b] == 0 && PRM[prmda08_4b] == 0));
    RT[tdstvert09] = !T[tdstvert09] && R[fc09] && !A[fc09] && (
                     (CIF_IS[d09_1] >= CIF_DET_STORING || PRM[prmda09_1] == 0) &&
                     (CIF_IS[d09_2] >= CIF_DET_STORING || PRM[prmda09_2] == 0) &&
                     !(PRM[prmda09_1] == 0 && PRM[prmda09_2] == 0));
    RT[tdstvert11] = !T[tdstvert11] && R[fc11] && !A[fc11] && (
                     (CIF_IS[d11_1] >= CIF_DET_STORING || PRM[prmda11_1] == 0) &&
                     (CIF_IS[d11_2] >= CIF_DET_STORING || PRM[prmda11_2] == 0) &&
                     (CIF_IS[d11_3] >= CIF_DET_STORING || PRM[prmda11_3] == 0) &&
                     !(PRM[prmda11_1] == 0 && PRM[prmda11_2] == 0 && PRM[prmda11_3] == 0));
    RT[tdstvert21] = !T[tdstvert21] && R[fc21] && !A[fc21] && (
                     (CIF_IS[d211] >= CIF_DET_STORING || PRM[prmda211] == 0) &&
                     (CIF_IS[dk21] >= CIF_DET_STORING || PRM[prmdak21] == 0) &&
                     !(PRM[prmda211] == 0 && PRM[prmdak21] == 0));
    RT[tdstvert22] = !T[tdstvert22] && R[fc22] && !A[fc22] && (
                     (CIF_IS[d22_1] >= CIF_DET_STORING || PRM[prmda22_1] == 0) &&
                     (CIF_IS[dk22] >= CIF_DET_STORING || PRM[prmdak22] == 0) &&
                     !(PRM[prmda22_1] == 0 && PRM[prmdak22] == 0));
    RT[tdstvert24] = !T[tdstvert24] && R[fc24] && !A[fc24] && (
                     (CIF_IS[d24_1] >= CIF_DET_STORING || PRM[prmda24_1] == 0) &&
                     (CIF_IS[dk24] >= CIF_DET_STORING || PRM[prmdak24] == 0) &&
                     !(PRM[prmda24_1] == 0 && PRM[prmdak24] == 0));
    RT[tdstvert26] = !T[tdstvert26] && R[fc26] && !A[fc26] && (
                     (CIF_IS[d261] >= CIF_DET_STORING || PRM[prmda261] == 0) &&
                     (CIF_IS[dk26] >= CIF_DET_STORING || PRM[prmdak26] == 0) &&
                     !(PRM[prmda261] == 0 && PRM[prmdak26] == 0));
    RT[tdstvert28] = !T[tdstvert28] && R[fc28] && !A[fc28] && (
                     (CIF_IS[d28_1] >= CIF_DET_STORING || PRM[prmda28_1] == 0) &&
                     (CIF_IS[dk28] >= CIF_DET_STORING || PRM[prmdak28] == 0) &&
                     !(PRM[prmda28_1] == 0 && PRM[prmdak28] == 0));
    RT[tdstvert31] = !T[tdstvert31] && R[fc31] && !A[fc31] && (
                     SCH[schdvakdk31a] && (CIF_IS[dk31a] >= CIF_DET_STORING) ||
                     SCH[schdvakdk31b] && (CIF_IS[dk31b] >= CIF_DET_STORING) ||
                     (CIF_IS[dk31a] >= CIF_DET_STORING || PRM[prmdak31a] == 0) &&
                     (CIF_IS[dk31b] >= CIF_DET_STORING || PRM[prmdak31b] == 0) &&
                     !(PRM[prmdak31a] == 0 && PRM[prmdak31b] == 0));
    RT[tdstvert32] = !T[tdstvert32] && R[fc32] && !A[fc32] && (
                     (CIF_IS[dk32a] >= CIF_DET_STORING || PRM[prmdak32a] == 0) &&
                     (CIF_IS[dk32b] >= CIF_DET_STORING || PRM[prmdak32b] == 0) &&
                     !(PRM[prmdak32a] == 0 && PRM[prmdak32b] == 0));
    RT[tdstvert33] = !T[tdstvert33] && R[fc33] && !A[fc33] && (
                     (CIF_IS[dk33a] >= CIF_DET_STORING || PRM[prmdak33a] == 0) &&
                     (CIF_IS[dk33b] >= CIF_DET_STORING || PRM[prmdak33b] == 0) &&
                     !(PRM[prmdak33a] == 0 && PRM[prmdak33b] == 0));
    RT[tdstvert34] = !T[tdstvert34] && R[fc34] && !A[fc34] && (
                     (CIF_IS[dk34a] >= CIF_DET_STORING || PRM[prmdak34a] == 0) &&
                     (CIF_IS[dk34b] >= CIF_DET_STORING || PRM[prmdak34b] == 0) &&
                     !(PRM[prmdak34a] == 0 && PRM[prmdak34b] == 0));
    RT[tdstvert38] = !T[tdstvert38] && R[fc38] && !A[fc38] && (
                     (CIF_IS[dk38a] >= CIF_DET_STORING || PRM[prmdak38a] == 0) &&
                     (CIF_IS[dk38b] >= CIF_DET_STORING || PRM[prmdak38b] == 0) &&
                     !(PRM[prmdak38a] == 0 && PRM[prmdak38b] == 0));
    RT[tdstvert61] = !T[tdstvert61] && R[fc61] && !A[fc61] && (
                     (CIF_IS[d61_1] >= CIF_DET_STORING || PRM[prmda61_1] == 0) &&
                     (CIF_IS[d61_2] >= CIF_DET_STORING || PRM[prmda61_2] == 0) &&
                     !(PRM[prmda61_1] == 0 && PRM[prmda61_2] == 0));
    RT[tdstvert62] = !T[tdstvert62] && R[fc62] && !A[fc62] && (
                     (CIF_IS[d62_1a] >= CIF_DET_STORING || PRM[prmda62_1a] == 0) &&
                     (CIF_IS[d62_1b] >= CIF_DET_STORING || PRM[prmda62_1b] == 0) &&
                     (CIF_IS[d62_2a] >= CIF_DET_STORING || PRM[prmda62_2a] == 0) &&
                     !(PRM[prmda62_1a] == 0 && PRM[prmda62_1b] == 0 && PRM[prmda62_2a] == 0) ||
                     (CIF_IS[d62_2b] >= CIF_DET_STORING || PRM[prmda62_2b] == 0) &&
                     !(PRM[prmda62_2b] == 0));
    RT[tdstvert67] = !T[tdstvert67] && R[fc67] && !A[fc67] && (
                     (CIF_IS[d67_1] >= CIF_DET_STORING || PRM[prmda67_1] == 0) &&
                     (CIF_IS[d67_2] >= CIF_DET_STORING || PRM[prmda67_2] == 0) &&
                     !(PRM[prmda67_1] == 0 && PRM[prmda67_2] == 0));
    RT[tdstvert68] = !T[tdstvert68] && R[fc68] && !A[fc68] && (
                     (CIF_IS[d68_1a] >= CIF_DET_STORING || PRM[prmda68_1a] == 0) &&
                     (CIF_IS[d68_1b] >= CIF_DET_STORING || PRM[prmda68_1b] == 0) &&
                     (CIF_IS[d68_2a] >= CIF_DET_STORING || PRM[prmda68_2a] == 0) &&
                     !(PRM[prmda68_1a] == 0 && PRM[prmda68_1b] == 0 && PRM[prmda68_2a] == 0) ||
                     (CIF_IS[d68_2b] >= CIF_DET_STORING || PRM[prmda68_2b] == 0) &&
                     (CIF_IS[d68_9b] >= CIF_DET_STORING || PRM[prmda68_9b] == 0) &&
                     !(PRM[prmda68_2b] == 0 && PRM[prmda68_9b] == 0));
    RT[tdstvert81] = !T[tdstvert81] && R[fc81] && !A[fc81] && (
                     (CIF_IS[d81_1] >= CIF_DET_STORING || PRM[prmda81_1] == 0) &&
                     (CIF_IS[dk81] >= CIF_DET_STORING || PRM[prmdak81] == 0) &&
                     !(PRM[prmda81_1] == 0 && PRM[prmdak81] == 0));
    RT[tdstvert82] = !T[tdstvert82] && R[fc82] && !A[fc82] && (
                     (CIF_IS[d82_1] >= CIF_DET_STORING || PRM[prmda82_1] == 0) &&
                     (CIF_IS[dk82] >= CIF_DET_STORING || PRM[prmdak82] == 0) &&
                     !(PRM[prmda82_1] == 0 && PRM[prmdak82] == 0));
    RT[tdstvert84] = !T[tdstvert84] && R[fc84] && !A[fc84] && (
                     (CIF_IS[d84_1] >= CIF_DET_STORING || PRM[prmda84_1] == 0) &&
                     (CIF_IS[dk84] >= CIF_DET_STORING || PRM[prmdak84] == 0) &&
                     !(PRM[prmda84_1] == 0 && PRM[prmdak84] == 0));
    A[fc02] |= (ET[tdstvert02] ? BIT11 : 0);
    A[fc03] |= (ET[tdstvert03] ? BIT11 : 0);
    A[fc05] |= (ET[tdstvert05] ? BIT11 : 0);
    A[fc08] |= (ET[tdstvert08] ? BIT11 : 0);
    A[fc09] |= (ET[tdstvert09] ? BIT11 : 0);
    A[fc11] |= (ET[tdstvert11] ? BIT11 : 0);
    A[fc21] |= (ET[tdstvert21] ? BIT11 : 0);
    A[fc22] |= (ET[tdstvert22] ? BIT11 : 0);
    A[fc24] |= (ET[tdstvert24] ? BIT11 : 0);
    A[fc26] |= (ET[tdstvert26] ? BIT11 : 0);
    A[fc28] |= (ET[tdstvert28] ? BIT11 : 0);
    A[fc31] |= (ET[tdstvert31] ? BIT11 : 0);
    A[fc32] |= (ET[tdstvert32] ? BIT11 : 0);
    A[fc33] |= (ET[tdstvert33] ? BIT11 : 0);
    A[fc34] |= (ET[tdstvert34] ? BIT11 : 0);
    A[fc38] |= (ET[tdstvert38] ? BIT11 : 0);
    A[fc61] |= (ET[tdstvert61] ? BIT11 : 0);
    A[fc62] |= (ET[tdstvert62] ? BIT11 : 0);
    A[fc67] |= (ET[tdstvert67] ? BIT11 : 0);
    A[fc68] |= (ET[tdstvert68] ? BIT11 : 0);
    A[fc81] |= (ET[tdstvert81] ? BIT11 : 0);
    A[fc82] |= (ET[tdstvert82] ? BIT11 : 0);
    A[fc84] |= (ET[tdstvert84] ? BIT11 : 0);


    DetectieStoring_Aanvraag_Add();
}

void DetectieStoring_Meetkriterium(void)
{
    int fc;

    /* reset MK-bits vooraf, ivm onderlinge verwijzing. */
    for (fc = 0; fc < FCMAX; ++fc)
        MK[fc] &= ~BIT5;

    /* hiaattijd op koplus bij defect lange lus */
    /* ---------------------------------------- */
    VervangendHiaatKoplus(fc02, d02_1a, d02_2a, thdvd02_1a);
    VervangendHiaatKoplus(fc02, d02_1b, d02_2b, thdvd02_1b);
    VervangendHiaatKoplus(fc03, d03_1, d03_2, thdvd03_1);
    VervangendHiaatKoplus(fc05, d05_1, d05_2, thdvd05_1);
    VervangendHiaatKoplus(fc08, d08_1a, d08_2a, thdvd08_1a);
    VervangendHiaatKoplus(fc09, d09_1, d09_2, thdvd09_1);
    VervangendHiaatKoplus(fc11, d11_1, d11_2, thdvd11_1);
    VervangendHiaatKoplus(fc61, d61_1, d61_2, thdvd61_1);
    VervangendHiaatKoplus(fc62, d62_1a, d62_2a, thdvd62_1a);
    VervangendHiaatKoplus(fc67, d67_1, d67_2, thdvd67_1);
    VervangendHiaatKoplus(fc68, d68_1a, d68_2a, thdvd68_1a);

    /* instellen MK bij defect alle kop/lange lussen */
    /* ---------------------------------------------- */
    if ((CIF_IS[d03_1] >= CIF_DET_STORING) && (CIF_IS[d03_2] >= CIF_DET_STORING))
    {
        MK[fc03] |= BIT5;
    }
    if ((CIF_IS[d05_1] >= CIF_DET_STORING) && (CIF_IS[d05_2] >= CIF_DET_STORING))
    {
        MK[fc05] |= BIT5;
    }
    if ((CIF_IS[d08_1a] >= CIF_DET_STORING) && (CIF_IS[d08_1b] >= CIF_DET_STORING) && (CIF_IS[d08_2a] >= CIF_DET_STORING) && (CIF_IS[d08_3a] >= CIF_DET_STORING) ||
        (CIF_IS[d08_2b] >= CIF_DET_STORING) && (CIF_IS[d08_3b] >= CIF_DET_STORING))
    {
        MK[fc08] |= BIT5;
    }
    if ((CIF_IS[d09_1] >= CIF_DET_STORING) && (CIF_IS[d09_2] >= CIF_DET_STORING))
    {
        MK[fc09] |= BIT5;
    }
    if ((CIF_IS[d11_1] >= CIF_DET_STORING) && (CIF_IS[d11_2] >= CIF_DET_STORING) && (CIF_IS[d11_3] >= CIF_DET_STORING))
    {
        MK[fc11] |= BIT5;
    }
    if ((CIF_IS[d61_1] >= CIF_DET_STORING) && (CIF_IS[d61_2] >= CIF_DET_STORING))
    {
        MK[fc61] |= BIT5;
    }
    if ((CIF_IS[d62_1a] >= CIF_DET_STORING) && (CIF_IS[d62_1b] >= CIF_DET_STORING) && (CIF_IS[d62_2a] >= CIF_DET_STORING) ||
        (CIF_IS[d62_2b] >= CIF_DET_STORING))
    {
        MK[fc62] |= BIT5;
    }
    if ((CIF_IS[d67_1] >= CIF_DET_STORING) && (CIF_IS[d67_2] >= CIF_DET_STORING))
    {
        MK[fc67] |= BIT5;
    }
    if ((CIF_IS[d68_1a] >= CIF_DET_STORING) && (CIF_IS[d68_1b] >= CIF_DET_STORING) && (CIF_IS[d68_2a] >= CIF_DET_STORING) ||
        (CIF_IS[d68_2b] >= CIF_DET_STORING))
    {
        MK[fc68] |= BIT5;
    }


    DetectieStoring_Meetkriterium_Add();
}

void DetectieStoring_VerlengGroen(void)
{
    /* percentage VG bij defect alle kop/lange lussen */
    /* ---------------------------------------------- */
    if ((CIF_IS[d03_1] >= CIF_DET_STORING) && (CIF_IS[d03_2] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc03, mperiod, PRM[prmperc03], 
                                     8, TVGA_max[fc03], PRM[prmvg1_03], PRM[prmvg2_03], PRM[prmvg3_03], PRM[prmvg4_03], PRM[prmvg5_03], PRM[prmvg6_03], PRM[prmvg7_03]);
    }
    if ((CIF_IS[d05_1] >= CIF_DET_STORING) && (CIF_IS[d05_2] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc05, mperiod, PRM[prmperc05], 
                                     8, TVGA_max[fc05], PRM[prmvg1_05], PRM[prmvg2_05], PRM[prmvg3_05], PRM[prmvg4_05], PRM[prmvg5_05], PRM[prmvg6_05], PRM[prmvg7_05]);
    }
    if ((CIF_IS[d08_1a] >= CIF_DET_STORING) && (CIF_IS[d08_1b] >= CIF_DET_STORING) && (CIF_IS[d08_2a] >= CIF_DET_STORING) && (CIF_IS[d08_3a] >= CIF_DET_STORING) ||
        (CIF_IS[d08_2b] >= CIF_DET_STORING) && (CIF_IS[d08_3b] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmperc08], 
                                     8, TVGA_max[fc08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
    }
    if ((CIF_IS[d09_1] >= CIF_DET_STORING) && (CIF_IS[d09_2] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc09, mperiod, PRM[prmperc09], 
                                     8, TVGA_max[fc09], PRM[prmvg1_09], PRM[prmvg2_09], PRM[prmvg3_09], PRM[prmvg4_09], PRM[prmvg5_09], PRM[prmvg6_09], PRM[prmvg7_09]);
    }
    if ((CIF_IS[d11_1] >= CIF_DET_STORING) && (CIF_IS[d11_2] >= CIF_DET_STORING) && (CIF_IS[d11_3] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmperc11], 
                                     8, TVGA_max[fc11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
    }
    if ((CIF_IS[d61_1] >= CIF_DET_STORING) && (CIF_IS[d61_2] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc61, mperiod, PRM[prmperc61], 
                                     8, TVGA_max[fc61], PRM[prmvg1_61], PRM[prmvg2_61], PRM[prmvg3_61], PRM[prmvg4_61], PRM[prmvg5_61], PRM[prmvg6_61], PRM[prmvg7_61]);
    }
    if ((CIF_IS[d62_1a] >= CIF_DET_STORING) && (CIF_IS[d62_1b] >= CIF_DET_STORING) && (CIF_IS[d62_2a] >= CIF_DET_STORING) ||
        (CIF_IS[d62_2b] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc62, mperiod, PRM[prmperc62], 
                                     8, TVGA_max[fc62], PRM[prmvg1_62], PRM[prmvg2_62], PRM[prmvg3_62], PRM[prmvg4_62], PRM[prmvg5_62], PRM[prmvg6_62], PRM[prmvg7_62]);
    }
    if ((CIF_IS[d67_1] >= CIF_DET_STORING) && (CIF_IS[d67_2] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc67, mperiod, PRM[prmperc67], 
                                     8, TVGA_max[fc67], PRM[prmvg1_67], PRM[prmvg2_67], PRM[prmvg3_67], PRM[prmvg4_67], PRM[prmvg5_67], PRM[prmvg6_67], PRM[prmvg7_67]);
    }
    if ((CIF_IS[d68_1a] >= CIF_DET_STORING) && (CIF_IS[d68_1b] >= CIF_DET_STORING) && (CIF_IS[d68_2a] >= CIF_DET_STORING) ||
        (CIF_IS[d68_2b] >= CIF_DET_STORING))
    {
        PercentageVerlengGroenTijden(fc68, mperiod, PRM[prmperc68], 
                                     8, TVGA_max[fc68], PRM[prmvg1_68], PRM[prmvg2_68], PRM[prmvg3_68], PRM[prmvg4_68], PRM[prmvg5_68], PRM[prmvg6_68], PRM[prmvg7_68]);
    }


    DetectieStoring_VerlengGroen_Add();
}
void KlokPerioden(void)
{
    /* default klokperiode voor max.groen */
    /* ---------------------------------- */
    MM[mperiod] = 0;

    /* klokperiode: Reserve */
    /* -------------------- */
    if (klokperiode(PRM[prmstkp1], PRM[prmetkp1]) &&
        dagsoort(PRM[prmdckp1]))
        MM[mperiod] = 1;

    /* klokperiode: Dag periode */
    /* ------------------------ */
    if (klokperiode(PRM[prmstkp2], PRM[prmetkp2]) &&
        dagsoort(PRM[prmdckp2]))
        MM[mperiod] = 2;

    /* klokperiode: Ochtendspits */
    /* ------------------------- */
    if (klokperiode(PRM[prmstkp3], PRM[prmetkp3]) &&
        dagsoort(PRM[prmdckp3]))
        MM[mperiod] = 3;

    /* klokperiode: Avondspits */
    /* ----------------------- */
    if (klokperiode(PRM[prmstkp4], PRM[prmetkp4]) &&
        dagsoort(PRM[prmdckp4]))
        MM[mperiod] = 4;

    /* klokperiode: Koopavond */
    /* ---------------------- */
    if (klokperiode(PRM[prmstkp5], PRM[prmetkp5]) &&
        dagsoort(PRM[prmdckp5]))
        MM[mperiod] = 5;

    /* klokperiode: Weekend */
    /* -------------------- */
    if (klokperiode(PRM[prmstkp6], PRM[prmetkp6]) &&
        dagsoort(PRM[prmdckp6]))
        MM[mperiod] = 6;

    /* klokperiode: Reserve */
    /* -------------------- */
    if (klokperiode(PRM[prmstkp7], PRM[prmetkp7]) &&
        dagsoort(PRM[prmdckp7]))
        MM[mperiod] = 7;

    /* vrije klokperiode:  */
    /* ------------------- */
    IH[hperiodFietsprio1] = (klokperiode(PRM[prmstkpoFietsprio1], PRM[prmetkpoFietsprio1]) && dagsoort(PRM[prmdckpoFietsprio1]));

    /* vrije klokperiode:  */
    /* ------------------- */
    IH[hperiodFietsprio2] = (klokperiode(PRM[prmstkpoFietsprio2], PRM[prmetkpoFietsprio2]) && dagsoort(PRM[prmdckpoFietsprio2]));

    /* vrije klokperiode:  */
    /* ------------------- */
    IH[hperiodFietsprio3] = (klokperiode(PRM[prmstkpoFietsprio3], PRM[prmetkpoFietsprio3]) && dagsoort(PRM[prmdckpoFietsprio3]));

    KlokPerioden_Add();
}

void Aanvragen(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
        RR[fc] &= ~BIT8;  /* reset BIT-sturing t.b.v. reset A */

    /* Detectie aanvragen */
    /* ------------------ */
    aanvraag_detectie_prm_va_arg((count) fc02, 
        (va_count) d02_1a, (va_mulv) PRM[prmda02_1a], 
        (va_count) d02_1b, (va_mulv) PRM[prmda02_1b], 
        (va_count) d02_2a, (va_mulv) PRM[prmda02_2a], 
        (va_count) d02_2b, (va_mulv) PRM[prmda02_2b], 
        (va_count) d02_3a, (va_mulv) PRM[prmda02_3a], 
        (va_count) d02_3b, (va_mulv) PRM[prmda02_3b], 
        (va_count) d02_4a, (va_mulv) PRM[prmda02_4a], 
        (va_count) d02_4b, (va_mulv) PRM[prmda02_4b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc03, 
        (va_count) d03_1, (va_mulv) PRM[prmda03_1], 
        (va_count) d03_2, (va_mulv) PRM[prmda03_2], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc05, 
        (va_count) d05_1, (va_mulv) PRM[prmda05_1], 
        (va_count) d05_2, (va_mulv) PRM[prmda05_2], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc08, 
        (va_count) d08_1a, (va_mulv) PRM[prmda08_1a], 
        (va_count) d08_1b, (va_mulv) PRM[prmda08_1b], 
        (va_count) d08_2a, (va_mulv) PRM[prmda08_2a], 
        (va_count) d08_2b, (va_mulv) PRM[prmda08_2b], 
        (va_count) d08_3a, (va_mulv) PRM[prmda08_3a], 
        (va_count) d08_3b, (va_mulv) PRM[prmda08_3b], 
        (va_count) d08_4a, (va_mulv) PRM[prmda08_4a], 
        (va_count) d08_4b, (va_mulv) PRM[prmda08_4b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc09, 
        (va_count) d09_1, (va_mulv) PRM[prmda09_1], 
        (va_count) d09_2, (va_mulv) PRM[prmda09_2], 
        (va_count) d09_3, (va_mulv) PRM[prmda09_3], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc11, 
        (va_count) d11_1, (va_mulv) PRM[prmda11_1], 
        (va_count) d11_2, (va_mulv) PRM[prmda11_2], 
        (va_count) d11_3, (va_mulv) PRM[prmda11_3], 
        (va_count) d11_4, (va_mulv) PRM[prmda11_4], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc21, 
        (va_count) d211, (va_mulv) PRM[prmda211], 
        (va_count) dk21, (va_mulv) PRM[prmdak21], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc22, 
        (va_count) d22_1, (va_mulv) PRM[prmda22_1], 
        (va_count) dk22, (va_mulv) PRM[prmdak22], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc24, 
        (va_count) d24_1, (va_mulv) PRM[prmda24_1], 
        (va_count) d24_2, (va_mulv) PRM[prmda24_2], 
        (va_count) d24_3, (va_mulv) PRM[prmda24_3], 
        (va_count) dk24, (va_mulv) PRM[prmdak24], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc26, 
        (va_count) d261, (va_mulv) PRM[prmda261], 
        (va_count) dk26, (va_mulv) PRM[prmdak26], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc28, 
        (va_count) d28_1, (va_mulv) PRM[prmda28_1], 
        (va_count) dk28, (va_mulv) PRM[prmdak28], 
        (va_count) END);
    aanvraag_detectie_reset_prm_va_arg((count) fc28, 
        (va_count) d28_2, tav28_2, (va_mulv) PRM[prmda28_2], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc31, 
        (va_count) dk31a, (va_mulv) PRM[prmdak31a], 
        (va_count) dk31b, (va_mulv) PRM[prmdak31b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc32, 
        (va_count) dk32a, (va_mulv) PRM[prmdak32a], 
        (va_count) dk32b, (va_mulv) PRM[prmdak32b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc33, 
        (va_count) dk33a, (va_mulv) PRM[prmdak33a], 
        (va_count) dk33b, (va_mulv) PRM[prmdak33b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc34, 
        (va_count) dk34a, (va_mulv) PRM[prmdak34a], 
        (va_count) dk34b, (va_mulv) PRM[prmdak34b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc38, 
        (va_count) dk38a, (va_mulv) PRM[prmdak38a], 
        (va_count) dk38b, (va_mulv) PRM[prmdak38b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc61, 
        (va_count) d61_1, (va_mulv) PRM[prmda61_1], 
        (va_count) d61_2, (va_mulv) PRM[prmda61_2], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc62, 
        (va_count) d62_1a, (va_mulv) PRM[prmda62_1a], 
        (va_count) d62_1b, (va_mulv) PRM[prmda62_1b], 
        (va_count) d62_2a, (va_mulv) PRM[prmda62_2a], 
        (va_count) d62_2b, (va_mulv) PRM[prmda62_2b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc67, 
        (va_count) d67_1, (va_mulv) PRM[prmda67_1], 
        (va_count) d67_2, (va_mulv) PRM[prmda67_2], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc68, 
        (va_count) d68_1a, (va_mulv) PRM[prmda68_1a], 
        (va_count) d68_1b, (va_mulv) PRM[prmda68_1b], 
        (va_count) d68_2a, (va_mulv) PRM[prmda68_2a], 
        (va_count) d68_2b, (va_mulv) PRM[prmda68_2b], 
        (va_count) d68_9a, (va_mulv) PRM[prmda68_9a], 
        (va_count) d68_9b, (va_mulv) PRM[prmda68_9b], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc81, 
        (va_count) d81_1, (va_mulv) PRM[prmda81_1], 
        (va_count) dk81, (va_mulv) PRM[prmdak81], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc82, 
        (va_count) d82_1, (va_mulv) PRM[prmda82_1], 
        (va_count) dk82, (va_mulv) PRM[prmdak82], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc84, 
        (va_count) d84_1, (va_mulv) PRM[prmda84_1], 
        (va_count) dk84, (va_mulv) PRM[prmdak84], 
        (va_count) END);


    /* Direct groen in geval van !K voor een richting */
    if (PRM[prmda02_1a] != 0 && SCH[schsneld02_1a]) AanvraagSnelV2(fc02, d02_1a);
    if (PRM[prmda02_1b] != 0 && SCH[schsneld02_1b]) AanvraagSnelV2(fc02, d02_1b);
    if (PRM[prmda03_1] != 0 && SCH[schsneld03_1]) AanvraagSnelV2(fc03, d03_1);
    if (PRM[prmda05_1] != 0 && SCH[schsneld05_1]) AanvraagSnelV2(fc05, d05_1);
    if (PRM[prmda08_1a] != 0 && SCH[schsneld08_1a]) AanvraagSnelV2(fc08, d08_1a);
    if (PRM[prmda08_1b] != 0 && SCH[schsneld08_1b]) AanvraagSnelV2(fc08, d08_1b);
    if (PRM[prmda09_1] != 0 && SCH[schsneld09_1]) AanvraagSnelV2(fc09, d09_1);
    if (PRM[prmda11_1] != 0 && SCH[schsneld11_1]) AanvraagSnelV2(fc11, d11_1);
    if (PRM[prmda211] != 0 && SCH[schsneld211]) AanvraagSnelV2(fc21, d211);
    if (PRM[prmda22_1] != 0 && SCH[schsneld22_1]) AanvraagSnelV2(fc22, d22_1);
    if (PRM[prmda24_1] != 0 && SCH[schsneld24_1]) AanvraagSnelV2(fc24, d24_1);
    if (PRM[prmda261] != 0 && SCH[schsneld261]) AanvraagSnelV2(fc26, d261);
    if (PRM[prmda28_1] != 0 && SCH[schsneld28_1]) AanvraagSnelV2(fc28, d28_1);
    if (PRM[prmda61_1] != 0 && SCH[schsneld61_1]) AanvraagSnelV2(fc61, d61_1);
    if (PRM[prmda62_1a] != 0 && SCH[schsneld62_1a]) AanvraagSnelV2(fc62, d62_1a);
    if (PRM[prmda62_1b] != 0 && SCH[schsneld62_1b]) AanvraagSnelV2(fc62, d62_1b);
    if (PRM[prmda67_1] != 0 && SCH[schsneld67_1]) AanvraagSnelV2(fc67, d67_1);
    if (PRM[prmda68_1a] != 0 && SCH[schsneld68_1a]) AanvraagSnelV2(fc68, d68_1a);
    if (PRM[prmda68_1b] != 0 && SCH[schsneld68_1b]) AanvraagSnelV2(fc68, d68_1b);
    if (PRM[prmda81_1] != 0 && SCH[schsneld81_1]) AanvraagSnelV2(fc81, d81_1);
    if (PRM[prmda82_1] != 0 && SCH[schsneld82_1]) AanvraagSnelV2(fc82, d82_1);
    if (PRM[prmda84_1] != 0 && SCH[schsneld84_1]) AanvraagSnelV2(fc84, d84_1);

    /* Meeaanvragen */
    /* ------------ */

    if (SCH[schma0262])
    {
        mee_aanvraag(fc62, (boolv) (SG[fc02]));
    }
    if (SCH[schma0521])
    {
        mee_aanvraag(fc21, (boolv) (SG[fc05]));
    }
    if (SCH[schma0522])
    {
        mee_aanvraag(fc22, (boolv) (RA[fc05]));
    }
    if (SCH[schma0532])
    {
        mee_aanvraag(fc32, (boolv) (RA[fc05]));
    }
    if (SCH[schma0868])
    {
        mee_aanvraag(fc68, (boolv) (SG[fc08]));
    }
    if (SCH[schma1126])
    {
        mee_aanvraag(fc26, (boolv) (RA[fc11]));
    }
    if (SCH[schma1168])
    {
        mee_aanvraag(fc68, (boolv) (SG[fc11]));
    }
    if (SCH[schma2221])
    {
        mee_aanvraag(fc21, (boolv) (SG[fc22]));
    }
    mee_aanvraag(fc84, (boolv) (RA[fc24]));
    if (SCH[schma3122])
    {
        mee_aanvraag(fc22, (boolv) ((H[hmadk31a]) && SG[fc31]));
    }
    if (SCH[schma3132])
    {
        mee_aanvraag(fc32, (boolv) ((H[hmadk31a]) && SG[fc31]));
    }
    if (SCH[schma3222])
    {
        mee_aanvraag(fc22, (boolv) ((H[hmadk32a]) && SG[fc32]));
    }
    if (SCH[schma3231])
    {
        mee_aanvraag(fc31, (boolv) ((H[hmadk32a]) && SG[fc32]));
    }
    if (SCH[schma3324])
    {
        mee_aanvraag(fc24, (boolv) ((H[hmadk33a]) && SG[fc33]));
    }
    if (SCH[schma3334])
    {
        mee_aanvraag(fc34, (boolv) ((H[hmadk33a]) && SG[fc33]));
    }
    if (SCH[schma3384])
    {
        mee_aanvraag(fc84, (boolv) ((H[hmadk33a]) && SG[fc33]));
    }
    if (SCH[schma3424])
    {
        mee_aanvraag(fc24, (boolv) ((H[hmadk34a]) && SG[fc34]));
    }
    if (SCH[schma3433])
    {
        mee_aanvraag(fc33, (boolv) ((H[hmadk34a]) && SG[fc34]));
    }
    if (SCH[schma3484])
    {
        mee_aanvraag(fc84, (boolv) ((H[hmadk34a]) && SG[fc34]));
    }
    mee_aanvraag(fc28, (boolv) (SG[fc38]));
    if (SCH[schma8281])
    {
        mee_aanvraag(fc81, (boolv) (SG[fc82]));
    }
    mee_aanvraag(fc24, (boolv) (RA[fc84]));

    /* Richtinggevoelige aanvragen */
    /* --------------------------- */

    for (fc = 0; fc < FCMAX; ++fc) RR[fc] &= ~BIT9;  /* reset BIT-sturing t.b.v. reset A */

    aanvraag_richtinggevoelig_reset(fc24, d24_2, d24_3, trgad24_3, trgavd24_3, SCH[schrgadd24_3]);

    /* Vaste aanvragen */
    /* --------------- */
    if (SCH[schca02])
    {
        RT[tuitgestca02] = !T[tuitgestca02] && !ET[tuitgestca02] && R[fc02] && !A[fc02];
        if (ET[tuitgestca02]) vaste_aanvraag(fc02);
    }
    if (SCH[schca03])
    {
        RT[tuitgestca03] = !T[tuitgestca03] && !ET[tuitgestca03] && R[fc03] && !A[fc03];
        if (ET[tuitgestca03]) vaste_aanvraag(fc03);
    }
    if (SCH[schca05])
    {
        RT[tuitgestca05] = !T[tuitgestca05] && !ET[tuitgestca05] && R[fc05] && !A[fc05];
        if (ET[tuitgestca05]) vaste_aanvraag(fc05);
    }
    if (SCH[schca08])
    {
        RT[tuitgestca08] = !T[tuitgestca08] && !ET[tuitgestca08] && R[fc08] && !A[fc08];
        if (ET[tuitgestca08]) vaste_aanvraag(fc08);
    }
    if (SCH[schca09])
    {
        RT[tuitgestca09] = !T[tuitgestca09] && !ET[tuitgestca09] && R[fc09] && !A[fc09];
        if (ET[tuitgestca09]) vaste_aanvraag(fc09);
    }
    if (SCH[schca11])
    {
        RT[tuitgestca11] = !T[tuitgestca11] && !ET[tuitgestca11] && R[fc11] && !A[fc11];
        if (ET[tuitgestca11]) vaste_aanvraag(fc11);
    }
    if (SCH[schca21])
    {
        RT[tuitgestca21] = !T[tuitgestca21] && !ET[tuitgestca21] && R[fc21] && !A[fc21];
        if (ET[tuitgestca21]) vaste_aanvraag(fc21);
    }
    if (SCH[schca22])
    {
        RT[tuitgestca22] = !T[tuitgestca22] && !ET[tuitgestca22] && R[fc22] && !A[fc22];
        if (ET[tuitgestca22]) vaste_aanvraag(fc22);
    }
    if (SCH[schca24])
    {
        RT[tuitgestca24] = !T[tuitgestca24] && !ET[tuitgestca24] && R[fc24] && !A[fc24];
        if (ET[tuitgestca24]) vaste_aanvraag(fc24);
    }
    if (SCH[schca26])
    {
        RT[tuitgestca26] = !T[tuitgestca26] && !ET[tuitgestca26] && R[fc26] && !A[fc26];
        if (ET[tuitgestca26]) vaste_aanvraag(fc26);
    }
    if (SCH[schca28])
    {
        RT[tuitgestca28] = !T[tuitgestca28] && !ET[tuitgestca28] && R[fc28] && !A[fc28];
        if (ET[tuitgestca28]) vaste_aanvraag(fc28);
    }
    if (SCH[schca31])
    {
        RT[tuitgestca31] = !T[tuitgestca31] && !ET[tuitgestca31] && R[fc31] && !A[fc31];
        if (ET[tuitgestca31]) vaste_aanvraag(fc31);
    }
    if (SCH[schca32])
    {
        RT[tuitgestca32] = !T[tuitgestca32] && !ET[tuitgestca32] && R[fc32] && !A[fc32];
        if (ET[tuitgestca32]) vaste_aanvraag(fc32);
    }
    if (SCH[schca33])
    {
        RT[tuitgestca33] = !T[tuitgestca33] && !ET[tuitgestca33] && R[fc33] && !A[fc33];
        if (ET[tuitgestca33]) vaste_aanvraag(fc33);
    }
    if (SCH[schca34])
    {
        RT[tuitgestca34] = !T[tuitgestca34] && !ET[tuitgestca34] && R[fc34] && !A[fc34];
        if (ET[tuitgestca34]) vaste_aanvraag(fc34);
    }
    if (SCH[schca38])
    {
        RT[tuitgestca38] = !T[tuitgestca38] && !ET[tuitgestca38] && R[fc38] && !A[fc38];
        if (ET[tuitgestca38]) vaste_aanvraag(fc38);
    }
    if (SCH[schca61])
    {
        RT[tuitgestca61] = !T[tuitgestca61] && !ET[tuitgestca61] && R[fc61] && !A[fc61];
        if (ET[tuitgestca61]) vaste_aanvraag(fc61);
    }
    if (SCH[schca62])
    {
        RT[tuitgestca62] = !T[tuitgestca62] && !ET[tuitgestca62] && R[fc62] && !A[fc62];
        if (ET[tuitgestca62]) vaste_aanvraag(fc62);
    }
    if (SCH[schca67])
    {
        RT[tuitgestca67] = !T[tuitgestca67] && !ET[tuitgestca67] && R[fc67] && !A[fc67];
        if (ET[tuitgestca67]) vaste_aanvraag(fc67);
    }
    if (SCH[schca68])
    {
        RT[tuitgestca68] = !T[tuitgestca68] && !ET[tuitgestca68] && R[fc68] && !A[fc68];
        if (ET[tuitgestca68]) vaste_aanvraag(fc68);
    }
    if (SCH[schca81])
    {
        RT[tuitgestca81] = !T[tuitgestca81] && !ET[tuitgestca81] && R[fc81] && !A[fc81];
        if (ET[tuitgestca81]) vaste_aanvraag(fc81);
    }
    if (SCH[schca82])
    {
        RT[tuitgestca82] = !T[tuitgestca82] && !ET[tuitgestca82] && R[fc82] && !A[fc82];
        if (ET[tuitgestca82]) vaste_aanvraag(fc82);
    }
    if (SCH[schca84])
    {
        RT[tuitgestca84] = !T[tuitgestca84] && !ET[tuitgestca84] && R[fc84] && !A[fc84];
        if (ET[tuitgestca84]) vaste_aanvraag(fc84);
    }

    /* Wachtstand groen aanvragen */
    /* -------------------------- */
    aanvraag_wachtstand_exp(fc02, (boolv) (SCH[schwg02]));
    aanvraag_wachtstand_exp(fc03, (boolv) (SCH[schwg03]));
    aanvraag_wachtstand_exp(fc05, (boolv) (SCH[schwg05]));
    aanvraag_wachtstand_exp(fc08, (boolv) (SCH[schwg08]));
    aanvraag_wachtstand_exp(fc09, (boolv) (SCH[schwg09]));
    aanvraag_wachtstand_exp(fc11, (boolv) (SCH[schwg11]));
    aanvraag_wachtstand_exp(fc21, (boolv) (SCH[schwg21]));
    aanvraag_wachtstand_exp(fc22, (boolv) (SCH[schwg22]));
    aanvraag_wachtstand_exp(fc24, (boolv) (SCH[schwg24]));
    aanvraag_wachtstand_exp(fc26, (boolv) (SCH[schwg26]));
    aanvraag_wachtstand_exp(fc28, (boolv) (SCH[schwg28]));
    aanvraag_wachtstand_exp(fc31, (boolv) (SCH[schwg31]));
    aanvraag_wachtstand_exp(fc32, (boolv) (SCH[schwg32]));
    aanvraag_wachtstand_exp(fc33, (boolv) (SCH[schwg33]));
    aanvraag_wachtstand_exp(fc34, (boolv) (SCH[schwg34]));
    aanvraag_wachtstand_exp(fc38, (boolv) (SCH[schwg38]));
    aanvraag_wachtstand_exp(fc61, (boolv) (SCH[schwg61]));
    aanvraag_wachtstand_exp(fc62, (boolv) (SCH[schwg62]));
    aanvraag_wachtstand_exp(fc67, (boolv) (SCH[schwg67]));
    aanvraag_wachtstand_exp(fc68, (boolv) (SCH[schwg68]));
    aanvraag_wachtstand_exp(fc81, (boolv) (SCH[schwg81]));
    aanvraag_wachtstand_exp(fc82, (boolv) (SCH[schwg82]));
    aanvraag_wachtstand_exp(fc84, (boolv) (SCH[schwg84]));

    /* Geen wachtstand aanvraag bij file stroomafwaarts */
    if (IH[hfileFile68af] && !G[fc08]) A[fc08] &= ~BIT2;
    if (IH[hfileFile68af] && !G[fc11]) A[fc11] &= ~BIT2;
    /* Geen mee aanvraag bij file stroomafwaarts */
    if (IH[hfileFile68af] && !G[fc08]) A[fc08] &= ~BIT4;
    if (IH[hfileFile68af] && !G[fc11]) A[fc11] &= ~BIT4;

    /* Bewaar meldingen van detectie (bv. voor het zetten van een meeaanvraag) */
    IH[hmadk31a] = G[fc31] && !SG[fc31] ? FALSE : IH[hmadk31a] || D[dk31a] && A[fc31];
    IH[hmadk31b] = G[fc31] && !SG[fc31] ? FALSE : IH[hmadk31b] || D[dk31b] && A[fc31];
    IH[hmadk32a] = G[fc32] && !SG[fc32] ? FALSE : IH[hmadk32a] || D[dk32a] && A[fc32];
    IH[hmadk32b] = G[fc32] && !SG[fc32] ? FALSE : IH[hmadk32b] || D[dk32b] && A[fc32];
    IH[hmadk33a] = G[fc33] && !SG[fc33] ? FALSE : IH[hmadk33a] || D[dk33a] && A[fc33];
    IH[hmadk33b] = G[fc33] && !SG[fc33] ? FALSE : IH[hmadk33b] || D[dk33b] && A[fc33];
    IH[hmadk34a] = G[fc34] && !SG[fc34] ? FALSE : IH[hmadk34a] || D[dk34a] && A[fc34];
    IH[hmadk34b] = G[fc34] && !SG[fc34] ? FALSE : IH[hmadk34b] || D[dk34b] && A[fc34];

    /* openbaar vervoer aanvragen */
    PrioAanvragen();

    /* ISG deelconflict aanvragen; tevens wordt de AA en BR opgezet @@ tijdelijk tot we code hebben dat de deelconflicten niet hard mee moeten komen @@ @@ aanvraag hoort hier wel maar de AA en BR op een andere plek plaatsen @@*/
    PrioMeerealisatieDeelconflictVoorstart(fc22, fc05, tvs2205);
    PrioMeerealisatieDeelconflictVoorstart(fc32, fc05, tvs3205);
    PrioMeerealisatieDeelconflictLateRelease(fc26, fc11, tlr2611);

    DetectieStoring_Aanvraag();
    Aanvragen_Add();
}

void BepaalRealisatieTijden(void)
{
    count i;
    count j;
    boolv wijziging = TRUE;

    /* TIGR */
    /* Correctie tijdens omdat bv fc22 hard meeverlengt met fc05 en dus bij naloop fc22-->fc21 deze maatgevend kan worden. */
    BepaalIntergroenTijden(); /* initialisatie TIGR[][] */

    /* Neem EG-naloopconflicten ook mee in TIGR[][] */
    corrigeerTIGRvoorNalopen(fc02, fc62, tnleg0262, tnlegd0262, tvgnaloop0262);
    corrigeerTIGRvoorNalopen(fc08, fc68, tnleg0868, tnlegd0868, tvgnaloop0868);
    corrigeerTIGRvoorNalopen(fc11, fc68, tnleg1168, tnlegd1168, tvgnaloop1168);
    corrigeerTIGRvoorNalopen(fc22, fc21, tnlcv2221, tnlcvd2221, tvgnaloop2221);
    corrigeerTIGRvoorNalopen(fc82, fc81, tnleg8281, tnlegd8281, tvgnaloop8281);

    /* Realisatietijden */
    InitRealisatieTijden(); /* initialisatie REALISATIETIJD[][] */
    RealisatieTijden_VulHardeConflictenIn();
    RealisatieTijden_VulGroenGroenConflictenIn(); /* @@ in principe zijn er geen groen groen conflicten @@*/
    CorrigeerRealisatieTijdenObvGarantieTijden(); /* een richting mag na groen niet direct weer realiseren (eerst GL en TRG) */

    /* Pas realisatietijden aan a.g.v. nalopen */
    Realisatietijd_NLEG(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262);
    Realisatietijd_NLEG(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868);
    Realisatietijd_NLEG(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168);
    Realisatietijd_NLEG(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281);
    Realisatietijd_NLEVG(fc22, fc21, tnlfg2221, tnlfgd2221, tnlcv2221, tnlcvd2221, tvgnaloop2221);
    Realisatietijd_NLSG(fc31, fc32, NG, tnlsgd3132);
    Realisatietijd_NLSG(fc32, fc31, NG, tnlsgd3231);
    Realisatietijd_NLSG(fc33, fc34, NG, tnlsgd3334);
    Realisatietijd_NLSG(fc34, fc33, NG, tnlsgd3433);
    Realisatietijd_HardMeeverlengenDeelconflict(fc05, fc22);
    Realisatietijd_HardMeeverlengenDeelconflict(fc11, fc26);
    Realisatietijd_HardMeeverlengenDeelconflict(fc05, fc32);

    /* Pas realisatietijden aan a.g.v ontruimende deelconflicten */
    Realisatietijd_Ontruiming_Voorstart(fc05, fc22, tfo0522);
    Realisatietijd_Ontruiming_Voorstart(fc05, fc32, tfo0532);
    Realisatietijd_Ontruiming_LateRelease(fc11, fc26, tlr2611, tfo2611);

    /* Pas realisatietijden aan a.g.v. deelconflicten/voorstarts die nog groen moeten worden */
    do
    {
        wijziging = FALSE;

        /* Gelijkstart / voorstart / late release */
    if (SCH[schgs2484]) wijziging |= Realisatietijd_Gelijkstart_Correctie(fc84, fc24);
    wijziging |= Realisatietijd_Voorstart_Correctie(fc22, fc05, tvs2205);
    wijziging |= Realisatietijd_Voorstart_Correctie(fc32, fc05, tvs3205);
    wijziging |= Realisatietijd_LateRelease_Correctie(fc26, fc11, tlr2611);

    /* Inlopen / inrijden nalopen */
    wijziging |= Realisatietijd_LateRelease_Correctie(fc62, fc02, txnl0262);
    wijziging |= Realisatietijd_LateRelease_Correctie(fc68, fc08, txnl0868);
    wijziging |= Realisatietijd_LateRelease_Correctie(fc68, fc11, txnl1168);
    wijziging |= Realisatietijd_LateRelease_Correctie(fc21, fc22, txnl2221);
    IH[hlos31] = RA[fc31] && (!H[hmadk31a] || SCH[schlos31_1] && H[hmadk31b]) || H[hlos31] && !SG[fc31];
    wijziging |= (!IH[hlos31])? Realisatietijd_LateRelease_Correctie(fc32, fc31, txnl3132) : 0;
    IH[hlos32] = RA[fc32] && (!H[hmadk32a] || SCH[schlos32_1] && H[hmadk32b]) || H[hlos32] && !SG[fc32];
    wijziging |= (!IH[hlos32])? Realisatietijd_LateRelease_Correctie(fc31, fc32, txnl3231) : 0;
    IH[hlos33] = RA[fc33] && (!H[hmadk33a] || SCH[schlos33_1] && H[hmadk33b]) || H[hlos33] && !SG[fc33];
    wijziging |= (!IH[hlos33])? Realisatietijd_LateRelease_Correctie(fc34, fc33, txnl3334) : 0;
    IH[hlos34] = RA[fc34] && (!H[hmadk34a] || SCH[schlos34_1] && H[hmadk34b]) || H[hlos34] && !SG[fc34];
    wijziging |= (!IH[hlos34])? Realisatietijd_LateRelease_Correctie(fc33, fc34, txnl3433) : 0;
    wijziging |= Realisatietijd_LateRelease_Correctie(fc81, fc82, txnl8281);

        wijziging |= CorrectieRealisatieTijd_Add();
    } while (wijziging);

    Bepaal_Realisatietijd_per_richting(); /* bepaal de maximale realisatietijd voor een richting */

    BepaalRealisatieTijden_Add();
}

void BepaalInterStartGroenTijden(void)
{
    boolv wijziging = TRUE;

    InitInterStartGroenTijden();
    InterStartGroenTijden_VulHardeConflictenIn();
    InterStartGroenTijden_VulGroenGroenConflictenIn();

    /* Pas interstartgroentijden aan a.g.v. nalopen */
    InterStartGroenTijd_NLEG(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262);
    InterStartGroenTijd_NLEG(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868);
    InterStartGroenTijd_NLEG(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168);
    InterStartGroenTijd_NLEVG(fc22, fc21, tnlfg2221, tnlfgd2221, tnlcv2221, tnlcvd2221, tvgnaloop2221);
    InterStartGroenTijd_NLSG(fc31, fc32, NG, tnlsgd3132);
    InterStartGroenTijd_NLSG(fc32, fc31, NG, tnlsgd3231);
    InterStartGroenTijd_NLSG(fc33, fc34, NG, tnlsgd3334);
    InterStartGroenTijd_NLSG(fc34, fc33, NG, tnlsgd3433);
    InterStartGroenTijd_NLEG(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281);
    InterStartGroentijd_HardMeeverlengenDeelconflict(fc05, fc22);
    InterStartGroentijd_HardMeeverlengenDeelconflict(fc11, fc26);
    InterStartGroentijd_HardMeeverlengenDeelconflict(fc05, fc32);

    do
    {
        wijziging = FALSE;

        /* Gelijkstart / voorstart / late release */
    if (SCH[schgs2484])         wijziging |= InterStartGroenTijd_Gelijkstart_Correctie(fc84, fc24);
        wijziging |= InterStartGroenTijd_Voorstart_Correctie(fc22, fc05, tvs2205);
        wijziging |= InterStartGroenTijd_Voorstart_Correctie(fc32, fc05, tvs3205);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc26, fc11, tlr2611);

        /* Inlopen / inrijden */
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc62, fc02, txnl0262);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc68, fc08, txnl0868);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc68, fc11, txnl1168);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc21, fc22, txnl2221);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc32, fc31, txnl3132);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc31, fc32, txnl3231);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc34, fc33, txnl3334);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc33, fc34, txnl3433);
        wijziging |= InterStartGroenTijd_LateRelease_Correctie(fc81, fc82, txnl8281);

        wijziging |= Correctie_TISG_add();
    } while (wijziging);

    BepaalInterStartGroenTijden_Add();
}

void BepaalInterStartGroenTijden_PRIO(void)
{
    boolv wijziging = TRUE;

    VulHardEnGroenConflictenInPrioVars();

    /* Pas interstartgroentijden aan a.g.v. nalopen */
    InterStartGroenTijd_NLEG_PRIO(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262);
    InterStartGroenTijd_NLEG_PRIO(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868);
    InterStartGroenTijd_NLEG_PRIO(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168);
    InterStartGroenTijd_NLEVG_PRIO(fc22, fc21, tnlfg2221, tnlfgd2221, tnlcv2221, tnlcvd2221, tvgnaloop2221);
    InterStartGroenTijd_NLSG_PRIO(fc31, fc32, NG, tnlsgd3132);
    InterStartGroenTijd_NLSG_PRIO(fc32, fc31, NG, tnlsgd3231);
    InterStartGroenTijd_NLSG_PRIO(fc33, fc34, NG, tnlsgd3334);
    InterStartGroenTijd_NLSG_PRIO(fc34, fc33, NG, tnlsgd3433);
    InterStartGroenTijd_NLEG_PRIO(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281);
    InterStartGroentijd_MeeverlengenDeelconflict_PRIO(fc05, fc22);
    InterStartGroentijd_MeeverlengenDeelconflict_PRIO(fc05, fc32);
    InterStartGroentijd_MeeverlengenDeelconflict_PRIO(fc11, fc26);

    do
    {
        wijziging = FALSE;
        /* Pas realisatietijden aan a.g.v. nalopen */
        if (SCH[schgs2484]) wijziging |= TISG_Gelijkstart_PRIO_Correctie(fc24, fc84);
        wijziging |= TISG_Voorstart_PRIO_Correctie(fc22, fc05, tvs2205);
        wijziging |= TISG_Voorstart_PRIO_Correctie(fc32, fc05, tvs3205);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc26, fc11, tlr2611);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc62, fc02, txnl0262);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc68, fc08, txnl0868);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc68, fc11, txnl1168);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc81, fc82, txnl8281);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc32, fc31, tinl3132);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc31, fc32, tinl3231);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc34, fc33, tinl3334);
        wijziging |= TISG_LateRelease_PRIO_Correctie(fc33, fc34, tinl3433);

        wijziging |= Correctie_InterStartGroentijdTijd_PRIO_Add();
    } while (wijziging);

    BepaalInterStartGroenTijden_Add();
}

void Verlenggroen(void)
{
    int fc;

    /* Nalopen */
    /* ------- */

    for (fc = 0; fc < FCMAX; ++fc)
    {
        RW[fc] &= ~BIT2;
        YV[fc] &= ~BIT2;
        YM[fc] &= ~BIT2;
    }



    verlenggroentijden_va_arg((count) fc02,
                              (va_mulv) PRM[prmvg1_02], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_02], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_02], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_02], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_02], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_02], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_02], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc02], (va_count) END);
    verlenggroentijden_va_arg((count) fc03,
                              (va_mulv) PRM[prmvg1_03], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_03], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_03], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_03], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_03], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_03], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_03], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc03], (va_count) END);
    verlenggroentijden_va_arg((count) fc05,
                              (va_mulv) PRM[prmvg1_05], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_05], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_05], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_05], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_05], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_05], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_05], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc05], (va_count) END);
    verlenggroentijden_va_arg((count) fc08,
                              (va_mulv) PRM[prmvg1_08], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_08], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_08], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_08], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_08], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_08], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_08], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc08], (va_count) END);
    verlenggroentijden_va_arg((count) fc09,
                              (va_mulv) PRM[prmvg1_09], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_09], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_09], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_09], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_09], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_09], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_09], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc09], (va_count) END);
    verlenggroentijden_va_arg((count) fc11,
                              (va_mulv) PRM[prmvg1_11], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_11], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_11], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_11], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_11], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_11], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_11], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc11], (va_count) END);
    verlenggroentijden_va_arg((count) fc21,
                              (va_mulv) PRM[prmvg1_21], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_21], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_21], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_21], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_21], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_21], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_21], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc21], (va_count) END);
    verlenggroentijden_va_arg((count) fc22,
                              (va_mulv) PRM[prmvg1_22], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_22], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_22], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_22], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_22], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_22], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_22], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc22], (va_count) END);
    verlenggroentijden_va_arg((count) fc24,
                              (va_mulv) PRM[prmvg1_24], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_24], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_24], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_24], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_24], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_24], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_24], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc24], (va_count) END);
    verlenggroentijden_va_arg((count) fc26,
                              (va_mulv) PRM[prmvg1_26], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_26], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_26], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_26], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_26], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_26], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_26], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc26], (va_count) END);
    verlenggroentijden_va_arg((count) fc28,
                              (va_mulv) PRM[prmvg1_28], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_28], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_28], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_28], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_28], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_28], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_28], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc28], (va_count) END);
    TVG_max[fc31] = 0;
    TVG_max[fc32] = 0;
    TVG_max[fc33] = 0;
    TVG_max[fc34] = 0;
    TVG_max[fc38] = 0;
    verlenggroentijden_va_arg((count) fc61,
                              (va_mulv) PRM[prmvg1_61], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_61], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_61], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_61], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_61], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_61], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_61], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc61], (va_count) END);
    verlenggroentijden_va_arg((count) fc62,
                              (va_mulv) PRM[prmvg1_62], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_62], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_62], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_62], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_62], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_62], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_62], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc62], (va_count) END);
    verlenggroentijden_va_arg((count) fc67,
                              (va_mulv) PRM[prmvg1_67], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_67], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_67], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_67], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_67], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_67], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_67], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc67], (va_count) END);
    verlenggroentijden_va_arg((count) fc68,
                              (va_mulv) PRM[prmvg1_68], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_68], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_68], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_68], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_68], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_68], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_68], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc68], (va_count) END);
    verlenggroentijden_va_arg((count) fc81,
                              (va_mulv) PRM[prmvg1_81], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_81], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_81], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_81], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_81], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_81], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_81], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc81], (va_count) END);
    verlenggroentijden_va_arg((count) fc82,
                              (va_mulv) PRM[prmvg1_82], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_82], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_82], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_82], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_82], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_82], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_82], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc82], (va_count) END);
    verlenggroentijden_va_arg((count) fc84,
                              (va_mulv) PRM[prmvg1_84], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_84], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_84], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_84], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_84], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_84], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_84], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) TVGA_max[fc84], (va_count) END);

    /* Bepaal de minimale maximale verlengroentijd bij alternatieve realisaties */
    TVG_AR[fc02] = ((PRM[prmaltg02] - TFG_max[fc02]) >= 0) ? PRM[prmaltg02] - TFG_max[fc02] : NG;
    TVG_AR[fc03] = ((PRM[prmaltg03] - TFG_max[fc03]) >= 0) ? PRM[prmaltg03] - TFG_max[fc03] : NG;
    TVG_AR[fc05] = ((PRM[prmaltg05] - TFG_max[fc05]) >= 0) ? PRM[prmaltg05] - TFG_max[fc05] : NG;
    TVG_AR[fc08] = ((PRM[prmaltg08] - TFG_max[fc08]) >= 0) ? PRM[prmaltg08] - TFG_max[fc08] : NG;
    TVG_AR[fc09] = ((PRM[prmaltg09] - TFG_max[fc09]) >= 0) ? PRM[prmaltg09] - TFG_max[fc09] : NG;
    TVG_AR[fc11] = ((PRM[prmaltg11] - TFG_max[fc11]) >= 0) ? PRM[prmaltg11] - TFG_max[fc11] : NG;
    TVG_AR[fc21] = ((PRM[prmaltg21] - TFG_max[fc21]) >= 0) ? PRM[prmaltg21] - TFG_max[fc21] : NG;
    TVG_AR[fc22] = ((PRM[prmaltg22] - TFG_max[fc22]) >= 0) ? PRM[prmaltg22] - TFG_max[fc22] : NG;
    TVG_AR[fc24] = ((PRM[prmaltg24] - TFG_max[fc24]) >= 0) ? PRM[prmaltg24] - TFG_max[fc24] : NG;
    TVG_AR[fc26] = ((PRM[prmaltg26] - TFG_max[fc26]) >= 0) ? PRM[prmaltg26] - TFG_max[fc26] : NG;
    TVG_AR[fc28] = ((PRM[prmaltg28] - TFG_max[fc28]) >= 0) ? PRM[prmaltg28] - TFG_max[fc28] : NG;
    TVG_AR[fc31] = ((PRM[prmaltg31] - TFG_max[fc31]) >= 0) ? PRM[prmaltg31] - TFG_max[fc31] : NG;
    TVG_AR[fc32] = ((PRM[prmaltg32] - TFG_max[fc32]) >= 0) ? PRM[prmaltg32] - TFG_max[fc32] : NG;
    TVG_AR[fc33] = ((PRM[prmaltg33] - TFG_max[fc33]) >= 0) ? PRM[prmaltg33] - TFG_max[fc33] : NG;
    TVG_AR[fc34] = ((PRM[prmaltg34] - TFG_max[fc34]) >= 0) ? PRM[prmaltg34] - TFG_max[fc34] : NG;
    TVG_AR[fc38] = ((PRM[prmaltg38] - TFG_max[fc38]) >= 0) ? PRM[prmaltg38] - TFG_max[fc38] : NG;
    TVG_AR[fc61] = ((PRM[prmaltg61] - TFG_max[fc61]) >= 0) ? PRM[prmaltg61] - TFG_max[fc61] : NG;
    TVG_AR[fc62] = ((PRM[prmaltg62] - TFG_max[fc62]) >= 0) ? PRM[prmaltg62] - TFG_max[fc62] : NG;
    TVG_AR[fc67] = ((PRM[prmaltg67] - TFG_max[fc67]) >= 0) ? PRM[prmaltg67] - TFG_max[fc67] : NG;
    TVG_AR[fc68] = ((PRM[prmaltg68] - TFG_max[fc68]) >= 0) ? PRM[prmaltg68] - TFG_max[fc68] : NG;
    TVG_AR[fc81] = ((PRM[prmaltg81] - TFG_max[fc81]) >= 0) ? PRM[prmaltg81] - TFG_max[fc81] : NG;
    TVG_AR[fc82] = ((PRM[prmaltg82] - TFG_max[fc82]) >= 0) ? PRM[prmaltg82] - TFG_max[fc82] : NG;
    TVG_AR[fc84] = ((PRM[prmaltg84] - TFG_max[fc84]) >= 0) ? PRM[prmaltg84] - TFG_max[fc84] : NG;

    DetectieStoring_VerlengGroen();

    /* AANROEP EN RAPPOTEREN ROBUGROVER */
    if (IH[hrgvact] != 0)
    {
        int teller = 0;
        int i;
        if (rgvinit)
        {
            for (i = 0; i < FCMAX; ++i) TVG_rgv[i] = TVG_max[i];
            rgvinit = 0;
        }

        /* kopieer de basis waarden van TVG_max */
        /* ------------------------------------ */
        for (i = 0; i < FCMAX; ++i) TVG_basis[i] = TVG_max[i] > 0 ? TVG_max[i] : 1;
        BepaalInterStartGroenTijden_rgv();

        TC[teller++] = berekencyclustijd_ISG_va_arg(fc02, fc09, fc05, fc11, END);
        TC[teller++] = berekencyclustijd_ISG_va_arg(fc08, fc11, fc03, fc05, END);

        TC_max = TC[0];

        for (teller = 1; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller)
        {
            if (TC_max < TC[teller])
            {
                TC_max = TC[teller];
            }
        }
    /* RoBuGrover verklikking in F11 scherm
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
        for (teller = 0; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller)
        {
            xyprintf(52, teller + 6, "%4d", TC[teller]);
        }
    #endif
    */

        /* AANROEP ROBUUSTE GROENTIJD VERDELER */
        /* ================================== */
        rgv_add();

        CIF_GUS[usrgv] = TRUE;
    }
    else
    {
        TVG_rgv[fc02] = TVG_basis[fc02];
        TVG_rgv[fc03] = TVG_basis[fc03];
        TVG_rgv[fc05] = TVG_basis[fc05];
        TVG_rgv[fc08] = TVG_basis[fc08];
        TVG_rgv[fc09] = TVG_basis[fc09];
        TVG_rgv[fc11] = TVG_basis[fc11];
        TVG_rgv[fc61] = TVG_basis[fc61];
        TVG_rgv[fc62] = TVG_basis[fc62];
        TVG_rgv[fc67] = TVG_basis[fc67];
        TVG_rgv[fc68] = TVG_basis[fc68];

        CIF_GUS[usrgv] = FALSE;
    }

    /* percentage MG bij filemelding < 100% */
    if (G[fc08] && !MG[fc08] && IH[hfileFile68af] && (PRM[prmfpercFile68af08] < 100)) MM[mfilemem08] = TRUE;
    if (G[fc11] && !MG[fc11] && IH[hfileFile68af] && (PRM[prmfpercFile68af11] < 100)) MM[mfilemem11] = TRUE;

    /* percentage MG bij filemelding */
    if (IH[hfileFile68af] && SCH[schfileFile68af] && SCH[schfiledoserenFile68af])
    {
        if (MM[mfilemem08] && G[fc08] && !MG[fc08])
        {
                PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmfpercFile68af08],
                                         8, TVGA_max[fc08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
        }
        if (MM[mfilemem11] && G[fc11] && !MG[fc11])
        {
                PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmfpercFile68af11],
                                         8, TVGA_max[fc11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
        }
    }

    /* Afkappen tijdens file ingreep File68af */
    /* Eenmalig afkappen fase 08 op start file ingreep */
    RT[tafkmingroen08fileFile68af] = ER[fc08] && T_max[tafkmingroen08fileFile68af];
    if (SH[hfileFile68af] && G[fc08]) IH[hafk08fileFile68af] = TRUE;
    if (EG[fc08]) IH[hafk08fileFile68af] = FALSE;
    /* Afkappen fase 08 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen08fileFile68af] = SG[fc08] && T_max[tmaxgroen08fileFile68af];
    if (MM[mfilemem08])
    {
        if (IH[hafk08fileFile68af] && T_max[tafkmingroen08fileFile68af] &&
            !RT[tafkmingroen08fileFile68af] && !T[tafkmingroen08fileFile68af] && !(MK[fc08]
#ifndef NO_PRIO
             & PRIO_MK_BIT
#endif /* NO_PRIO */
            ) || 
            !RT[tmaxgroen08fileFile68af] && !T[tmaxgroen08fileFile68af])
        {
            TVG_max[fc08] = 0;
        }
    }
    /* Eenmalig afkappen fase 11 op start file ingreep */
    RT[tafkmingroen11fileFile68af] = ER[fc11] && T_max[tafkmingroen11fileFile68af];
    if (SH[hfileFile68af] && G[fc11]) IH[hafk11fileFile68af] = TRUE;
    if (EG[fc11]) IH[hafk11fileFile68af] = FALSE;
    /* Afkappen fase 11 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen11fileFile68af] = SG[fc11] && T_max[tmaxgroen11fileFile68af];
    if (MM[mfilemem11])
    {
        if (IH[hafk11fileFile68af] && T_max[tafkmingroen11fileFile68af] &&
            !RT[tafkmingroen11fileFile68af] && !T[tafkmingroen11fileFile68af] && !(MK[fc11]
#ifndef NO_PRIO
             & PRIO_MK_BIT
#endif /* NO_PRIO */
            ) || 
            !RT[tmaxgroen11fileFile68af] && !T[tmaxgroen11fileFile68af])
        {
            TVG_max[fc11] = 0;
        }
    }

    if (EVG[fc08]) MM[mfilemem08] = FALSE;
    if (EVG[fc11]) MM[mfilemem11] = FALSE;

    /* TVG_max alleen aanpassen op EVG van de primaire richting of tijdens initialisatie */
    IsgCorrectieTvgPrTvgMax();
    init_tvg = FALSE;

    ResetNietGroentijdOphogen(); /* @@ verplaatsen naar isgfunc.c @@ */

    /* groentijd conflict volgrichting  mag niet opgehoogd worden tijdens inlopen @@ verplaatsen naar isgfunc.c @@*/
    VerhoogGroentijdNietTijdensInrijden(fc02, fc62, txnl0262);
    VerhoogGroentijdNietTijdensInrijden(fc08, fc68, txnl0868);
    VerhoogGroentijdNietTijdensInrijden(fc11, fc68, txnl1168);
    VerhoogGroentijdNietTijdensInrijden(fc22, fc21, txnl2221);
    VerhoogGroentijdNietTijdensInrijden(fc31, fc32, txnl3132);
    VerhoogGroentijdNietTijdensInrijden(fc32, fc31, txnl3231);
    VerhoogGroentijdNietTijdensInrijden(fc33, fc34, txnl3334);
    VerhoogGroentijdNietTijdensInrijden(fc34, fc33, txnl3433);
    VerhoogGroentijdNietTijdensInrijden(fc82, fc81, txnl8281);

    AfkapGroen();
    AfkapGroenExtra();
#ifdef PRIO_ADDFILE
    AfkapGroen_Add();
#endif /* PRIO_ADDFILE */

    for (fc = 0; fc < FCMAX; ++fc)
    {
        TVG_afkap[fc] = ((iAfkapGroenTijd[fc] - TFG_max[fc]) > 0) ? iAfkapGroenTijd[fc] - TFG_max[fc] : 0; /* Vullen groentijd die gemaakt mag worden als er een prioriteitsingreep is */
    }
    BepaalTVG_BR(); /* Maximale verlenggroentijd bijzondere realisatie als deze nog niet groen is */
    VerhoogTVG_maxDoorPrio(); /* Voldoende verlenggroentijd om prioriteitsrealisatie te faciliteren */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        TVG_max_voor_afkap[fc] = TVG_max[fc];
        TVG_AR_voor_afkap[fc] = TVG_AR[fc];
    }
    VerlaagTVG_maxDoorConfPrio(); /* Geef richtingen minder groen door conflicterende prioriteitsrealisatie */
    /* Niet verhogen TVG_max tijdens groen. Bijvoorbeeld als prioriteitsingreep of file ingreep wegvalt @@ Peter past commentaar nog aan @@ */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (SG[fc])
        {
            TVG_old[fc] = TVG_max[fc];
            TVG_AR_old[fc] = TVG_AR[fc];
        }
        if (G[fc] && !MG[fc])
        {
            if ((TVG_max[fc] > TVG_old[fc]) && !TVG_max_opgehoogd[fc]) TVG_max[fc] = TVG_old[fc];
            if ((TVG_AR[fc] > TVG_AR_old[fc]) && !TVG_AR_opgehoogd[fc]) TVG_AR[fc] = TVG_AR_old[fc];
            TVG_AR_old[fc] = TVG_AR[fc];
            TVG_old[fc] = TVG_max[fc];
        }
    }

    BepaalRealisatieTijden();

    BepaalStartGroenMomentenPrioIngrepen(); /* bepaal wanneer prioriteitsrealisatie mag komen */
    PasTVG_maxAanStartGroenMomentenPrioIngrepen(); /* pas de verlenggroentijden hier weer op aan*/

/* TVG_max nalooprichting ophogen als naloop niet past */
    NaloopEG_TVG_Correctie(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262);
    NaloopEG_TVG_Correctie(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868);
    NaloopEG_TVG_Correctie(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168);
    NaloopEG_TVG_Correctie(fc22, fc21, tnlfg2221, tnlfgd2221, tnlcv2221, tnlcvd2221, tvgnaloop2221);
    NaloopVtg_TVG_Correctie(fc31, fc32, hnlsg3132, NG, tnlsgd3132);
    NaloopVtg_TVG_Correctie(fc32, fc31, hnlsg3231, NG, tnlsgd3231);
    NaloopVtg_TVG_Correctie(fc33, fc34, hnlsg3334, NG, tnlsgd3334);
    NaloopVtg_TVG_Correctie(fc34, fc33, hnlsg3433, NG, tnlsgd3433);
    NaloopEG_TVG_Correctie(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281);
    BepaalRealisatieTijden();
    BepaalInterStartGroenTijden();
    BepaalInterStartGroenTijden_PRIO();
    PrioTegenhoudenISG(); /* Houdt richtingen die conflicterend zijn met priorealisatie als er niet meer genoeg ruimte voor realisatie is  */
    PasRealisatieTijdenAanVanwegeRRPrio(); /* Pas realisatietijden aan voor richtingen conflicterend met prioriteitsrealisatie*/
    Bepaal_Realisatietijd_per_richting();
    PasRealisatieTijdenAanVanwegeBRLateRelease(fc26);
    Bepaal_Realisatietijd_per_richting();


    Maxgroen_Add();
}


void Wachtgroen(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
        RW[fc] &= ~BIT4;  /* reset BIT-sturing */

    RW[fc02] |= (SCH[schwg02] && yws_groen(fc02)) && !fka(fc02) ? BIT4 : 0;
    RW[fc03] |= (SCH[schwg03] && yws_groen(fc03)) && !fka(fc03) ? BIT4 : 0;
    RW[fc05] |= (SCH[schwg05] && yws_groen(fc05)) && !fka(fc05) ? BIT4 : 0;
    RW[fc08] |= (SCH[schwg08] && yws_groen(fc08)) && !fka(fc08) ? BIT4 : 0;
    RW[fc09] |= (SCH[schwg09] && yws_groen(fc09)) && !fka(fc09) ? BIT4 : 0;
    RW[fc11] |= (SCH[schwg11] && yws_groen(fc11)) && !fka(fc11) ? BIT4 : 0;
    RW[fc21] |= (SCH[schwg21] && yws_groen(fc21)) && !fka(fc21) ? BIT4 : 0;
    RW[fc22] |= (SCH[schwg22] && yws_groen(fc22)) && !fka(fc22) ? BIT4 : 0;
    RW[fc24] |= (SCH[schwg24] && yws_groen(fc24)) && !fka(fc24) ? BIT4 : 0;
    RW[fc26] |= (SCH[schwg26] && yws_groen(fc26)) && !fka(fc26) ? BIT4 : 0;
    RW[fc28] |= (SCH[schwg28] && yws_groen(fc28)) && !fka(fc28) ? BIT4 : 0;
    RW[fc31] |= (SCH[schwg31] && yws_groen(fc31)) && !fka(fc31) ? BIT4 : 0;
    RW[fc32] |= (SCH[schwg32] && yws_groen(fc32)) && !fka(fc32) ? BIT4 : 0;
    RW[fc33] |= (SCH[schwg33] && yws_groen(fc33)) && !fka(fc33) ? BIT4 : 0;
    RW[fc34] |= (SCH[schwg34] && yws_groen(fc34)) && !fka(fc34) ? BIT4 : 0;
    RW[fc38] |= (SCH[schwg38] && yws_groen(fc38)) && !fka(fc38) ? BIT4 : 0;
    RW[fc61] |= (SCH[schwg61] && yws_groen(fc61)) && !fka(fc61) ? BIT4 : 0;
    RW[fc62] |= (SCH[schwg62] && yws_groen(fc62)) && !fka(fc62) ? BIT4 : 0;
    RW[fc67] |= (SCH[schwg67] && yws_groen(fc67)) && !fka(fc67) ? BIT4 : 0;
    RW[fc68] |= (SCH[schwg68] && yws_groen(fc68)) && !fka(fc68) ? BIT4 : 0;
    RW[fc81] |= (SCH[schwg81] && yws_groen(fc81)) && !fka(fc81) ? BIT4 : 0;
    RW[fc82] |= (SCH[schwg82] && yws_groen(fc82)) && !fka(fc82) ? BIT4 : 0;
    RW[fc84] |= (SCH[schwg84] && yws_groen(fc84)) && !fka(fc84) ? BIT4 : 0;

    for (fc = 0; fc < FCMAX; ++fc)
    {
        WS[fc] &= ~BIT4;  /* reset BIT-sturing */
        WS[fc] |= (RW[fc] & BIT4) ? BIT4 : 0;
    }

    for (fc = 0; fc < FCMAX; ++fc)
        WS[fc] &= ~BIT1;  /* reset BIT-sturing */

    WS[fc02] |= (WG[fc02] && SCH[schwg02] && yws_groen(fc02)) ? BIT1 : 0;
    WS[fc03] |= (WG[fc03] && SCH[schwg03] && yws_groen(fc03)) ? BIT1 : 0;
    WS[fc05] |= (WG[fc05] && SCH[schwg05] && yws_groen(fc05)) ? BIT1 : 0;
    WS[fc08] |= (WG[fc08] && SCH[schwg08] && yws_groen(fc08)) ? BIT1 : 0;
    WS[fc09] |= (WG[fc09] && SCH[schwg09] && yws_groen(fc09)) ? BIT1 : 0;
    WS[fc11] |= (WG[fc11] && SCH[schwg11] && yws_groen(fc11)) ? BIT1 : 0;
    WS[fc21] |= (WG[fc21] && SCH[schwg21] && yws_groen(fc21)) ? BIT1 : 0;
    WS[fc22] |= (WG[fc22] && SCH[schwg22] && yws_groen(fc22)) ? BIT1 : 0;
    WS[fc24] |= (WG[fc24] && SCH[schwg24] && yws_groen(fc24)) ? BIT1 : 0;
    WS[fc26] |= (WG[fc26] && SCH[schwg26] && yws_groen(fc26)) ? BIT1 : 0;
    WS[fc28] |= (WG[fc28] && SCH[schwg28] && yws_groen(fc28)) ? BIT1 : 0;
    WS[fc31] |= (WG[fc31] && SCH[schwg31] && yws_groen(fc31)) ? BIT1 : 0;
    WS[fc32] |= (WG[fc32] && SCH[schwg32] && yws_groen(fc32)) ? BIT1 : 0;
    WS[fc33] |= (WG[fc33] && SCH[schwg33] && yws_groen(fc33)) ? BIT1 : 0;
    WS[fc34] |= (WG[fc34] && SCH[schwg34] && yws_groen(fc34)) ? BIT1 : 0;
    WS[fc38] |= (WG[fc38] && SCH[schwg38] && yws_groen(fc38)) ? BIT1 : 0;
    WS[fc61] |= (WG[fc61] && SCH[schwg61] && yws_groen(fc61)) ? BIT1 : 0;
    WS[fc62] |= (WG[fc62] && SCH[schwg62] && yws_groen(fc62)) ? BIT1 : 0;
    WS[fc67] |= (WG[fc67] && SCH[schwg67] && yws_groen(fc67)) ? BIT1 : 0;
    WS[fc68] |= (WG[fc68] && SCH[schwg68] && yws_groen(fc68)) ? BIT1 : 0;
    WS[fc81] |= (WG[fc81] && SCH[schwg81] && yws_groen(fc81)) ? BIT1 : 0;
    WS[fc82] |= (WG[fc82] && SCH[schwg82] && yws_groen(fc82)) ? BIT1 : 0;
    WS[fc84] |= (WG[fc84] && SCH[schwg84] && yws_groen(fc84)) ? BIT1 : 0;

    /* Niet in wachtgroen vasthouden tijdens file */
    if (IH[hfileFile68af]) RW[fc08] &= ~BIT4;
    if (IH[hfileFile68af]) RW[fc11] &= ~BIT4;

    /* Geen wachtstand bij file stroomafwaarts */
    if (IH[hfileFile68af]) WS[fc08] &= ~BIT4;
    if (IH[hfileFile68af]) WS[fc11] &= ~BIT4;

    /* Op tijd beeindingen wachtgroen (bv voor TWL's of andere wachtstand richtingen  */
#ifndef NO_PRIO
    PrioAanwezig();
    BeeindigenWachtgroenPrioConflicten();
#endif /* NO_PRIO */

    Wachtgroen_Add();
}
void Meetkriterium(void)
{
#if (defined TDHAMAX)
    int d;
#endif

    meetkriterium_prm_va_arg((count)fc02, (count)tkm02, 
                             (va_count)d02_1a, (va_mulv)PRM[prmmk02_1a],
                             (va_count)d02_1b, (va_mulv)PRM[prmmk02_1b],
                             (va_count)d02_2a, (va_mulv)PRM[prmmk02_2a],
                             (va_count)d02_2b, (va_mulv)PRM[prmmk02_2b],
                             (va_count)d02_3a, (va_mulv)PRM[prmmk02_3a],
                             (va_count)d02_3b, (va_mulv)PRM[prmmk02_3b],
                             (va_count)d02_4a, (va_mulv)PRM[prmmk02_4a],
                             (va_count)d02_4b, (va_mulv)PRM[prmmk02_4b],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc03, (count)tkm03, (count)mmk03, 
                             (va_boolv)TDH[d03_1], (va_mulv)PRM[prmmk03_1],
                             (va_boolv)TDH[d03_2], (va_mulv)PRM[prmmk03_2],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc05, (count)tkm05, (count)mmk05, 
                             (va_boolv)TDH[d05_1], (va_mulv)PRM[prmmk05_1],
                             (va_boolv)TDH[d05_2], (va_mulv)PRM[prmmk05_2],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc08, (count)tkm08, (count)mmk08, 
                             (va_boolv)TDH[d08_1a], (va_mulv)PRM[prmmk08_1a],
                             (va_boolv)TDH[d08_1b], (va_mulv)PRM[prmmk08_1b],
                             (va_boolv)TDH[d08_2a], (va_mulv)PRM[prmmk08_2a],
                             (va_boolv)TDH[d08_2b], (va_mulv)PRM[prmmk08_2b],
                             (va_boolv)TDH[d08_3a], (va_mulv)PRM[prmmk08_3a],
                             (va_boolv)TDH[d08_3b], (va_mulv)PRM[prmmk08_3b],
                             (va_boolv)TDH[d08_4a], (va_mulv)PRM[prmmk08_4a],
                             (va_boolv)TDH[d08_4b], (va_mulv)PRM[prmmk08_4b],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc09, (count)tkm09, (count)mmk09, 
                             (va_boolv)TDH[d09_1], (va_mulv)PRM[prmmk09_1],
                             (va_boolv)TDH[d09_2], (va_mulv)PRM[prmmk09_2],
                             (va_boolv)TDH[d09_3], (va_mulv)PRM[prmmk09_3],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc11, (count)tkm11, (count)mmk11, 
                             (va_boolv)TDH[d11_1], (va_mulv)PRM[prmmk11_1],
                             (va_boolv)TDH[d11_2], (va_mulv)PRM[prmmk11_2],
                             (va_boolv)TDH[d11_3], (va_mulv)PRM[prmmk11_3],
                             (va_boolv)TDH[d11_4], (va_mulv)PRM[prmmk11_4],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc21, (count)tkm21, 
                             (va_count)d211, (va_mulv)PRM[prmmk211],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc22, (count)tkm22, 
                             (va_count)d22_1, (va_mulv)PRM[prmmk22_1],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc24, (count)tkm24, 
                             (va_count)d24_1, (va_mulv)PRM[prmmk24_1],
                             (va_count)d24_2, (va_mulv)PRM[prmmk24_2],
                             (va_count)d24_3, (va_mulv)PRM[prmmk24_3],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc26, (count)tkm26, 
                             (va_count)d261, (va_mulv)PRM[prmmk261],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc28, (count)tkm28, 
                             (va_count)d28_1, (va_mulv)PRM[prmmk28_1],
                             (va_count)d28_2, (va_mulv)PRM[prmmk28_2],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc31, NG, 
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc32, NG, 
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc33, NG, 
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc34, NG, 
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc38, NG, 
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc61, (count)tkm61, (count)mmk61, 
                             (va_boolv)TDH[d61_1], (va_mulv)PRM[prmmk61_1],
                             (va_boolv)TDH[d61_2], (va_mulv)PRM[prmmk61_2],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc62, (count)tkm62, (count)mmk62, 
                             (va_boolv)TDH[d62_1a], (va_mulv)PRM[prmmk62_1a],
                             (va_boolv)TDH[d62_1b], (va_mulv)PRM[prmmk62_1b],
                             (va_boolv)TDH[d62_2a], (va_mulv)PRM[prmmk62_2a],
                             (va_boolv)TDH[d62_2b], (va_mulv)PRM[prmmk62_2b],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc67, (count)tkm67, (count)mmk67, 
                             (va_boolv)TDH[d67_1], (va_mulv)PRM[prmmk67_1],
                             (va_boolv)TDH[d67_2], (va_mulv)PRM[prmmk67_2],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc68, (count)tkm68, (count)mmk68, 
                             (va_boolv)TDH[d68_1a], (va_mulv)PRM[prmmk68_1a],
                             (va_boolv)TDH[d68_1b], (va_mulv)PRM[prmmk68_1b],
                             (va_boolv)TDH[d68_2a], (va_mulv)PRM[prmmk68_2a],
                             (va_boolv)TDH[d68_2b], (va_mulv)PRM[prmmk68_2b],
                             (va_boolv)TDH[d68_9a], (va_mulv)PRM[prmmk68_9a],
                             (va_boolv)TDH[d68_9b], (va_mulv)PRM[prmmk68_9b],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc81, (count)tkm81, 
                             (va_count)d81_1, (va_mulv)PRM[prmmk81_1],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc82, (count)tkm82, 
                             (va_count)d82_1, (va_mulv)PRM[prmmk82_1],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc84, (count)tkm84, 
                             (va_count)d84_1, (va_mulv)PRM[prmmk84_1],
                             (va_count)END);


    /* Richtinggevoelig verlengen */
    /* -------------------------- */
    MeetKriteriumRGprm((count) fc24, (count) tkm24,
        (boolv) RichtingVerlengen(fc24, d24_3, d24_2,
                                 trgrd24_3_d24_2, trgvd24_3_d24_2,
                                 hrgvd24_3_d24_2), (mulv)PRM[prmmkrgd24_3],
                                 (count)END);

    hiaattijden_verlenging(IH[hgeendynhiaat08], SCH[schedkop_08], FALSE, mmk08, IH[hopdrempelen08], fc08, 
        1, d08_1a, t08_1a_1, t08_1a_2, ttdh_08_1a_1, ttdh_08_1a_2, tmax_08_1a, prmspringverleng_08_1a, hverleng_08_1a, 
        1, d08_1b, t08_1b_1, t08_1b_2, ttdh_08_1b_1, ttdh_08_1b_2, tmax_08_1b, prmspringverleng_08_1b, hverleng_08_1b, 
        1, d08_2a, t08_2a_1, t08_2a_2, ttdh_08_2a_1, ttdh_08_2a_2, tmax_08_2a, prmspringverleng_08_2a, hverleng_08_2a, 
        1, d08_3a, t08_3a_1, t08_3a_2, ttdh_08_3a_1, ttdh_08_3a_2, tmax_08_3a, prmspringverleng_08_3a, hverleng_08_3a, 
        1, d08_4a, t08_4a_1, t08_4a_2, ttdh_08_4a_1, ttdh_08_4a_2, tmax_08_4a, prmspringverleng_08_4a, hverleng_08_4a, 
        2, d08_2b, t08_2b_1, t08_2b_2, ttdh_08_2b_1, ttdh_08_2b_2, tmax_08_2b, prmspringverleng_08_2b, hverleng_08_2b, 
        2, d08_3b, t08_3b_1, t08_3b_2, ttdh_08_3b_1, ttdh_08_3b_2, tmax_08_3b, prmspringverleng_08_3b, hverleng_08_3b, 
        2, d08_4b, t08_4b_1, t08_4b_2, ttdh_08_4b_1, ttdh_08_4b_2, tmax_08_4b, prmspringverleng_08_4b, hverleng_08_4b, 
        END);
    hiaattijden_verlenging(IH[hgeendynhiaat09], SCH[schedkop_09], FALSE, mmk09, IH[hopdrempelen09], fc09, 
        1, d09_1, t09_1_1, t09_1_2, ttdh_09_1_1, ttdh_09_1_2, tmax_09_1, prmspringverleng_09_1, hverleng_09_1, 
        1, d09_2, t09_2_1, t09_2_2, ttdh_09_2_1, ttdh_09_2_2, tmax_09_2, prmspringverleng_09_2, hverleng_09_2, 
        1, d09_3, t09_3_1, t09_3_2, ttdh_09_3_1, ttdh_09_3_2, tmax_09_3, prmspringverleng_09_3, hverleng_09_3, 
        END);
    hiaattijden_verlenging(IH[hgeendynhiaat11], SCH[schedkop_11], FALSE, mmk11, IH[hopdrempelen11], fc11, 
        1, d11_1, t11_1_1, t11_1_2, ttdh_11_1_1, ttdh_11_1_2, tmax_11_1, prmspringverleng_11_1, hverleng_11_1, 
        1, d11_2, t11_2_1, t11_2_2, ttdh_11_2_1, ttdh_11_2_2, tmax_11_2, prmspringverleng_11_2, hverleng_11_2, 
        1, d11_3, t11_3_1, t11_3_2, ttdh_11_3_1, ttdh_11_3_2, tmax_11_3, prmspringverleng_11_3, hverleng_11_3, 
        1, d11_4, t11_4_1, t11_4_2, ttdh_11_4_1, ttdh_11_4_2, tmax_11_4, prmspringverleng_11_4, hverleng_11_4, 
        END);

    BepaalVolgrichtingen();
    PrioMeetKriteriumISG();

    DetectieStoring_Meetkriterium();
    /* Volgrichting wordt vastgehouden m.b.v. het meetkriterium tijdens verlenggroen */
    NaloopEG(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262, d02_1a, d02_1b, END);
    NaloopEG(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868, d08_1a, d08_1b, END);
    NaloopEG(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168, d11_1, END);
    NaloopEVG(fc22, fc21, tnlfg2221, tnlfgd2221, tnlcv2221, tnlcvd2221, tvgnaloop2221, d22_1, END);
    NaloopVtg(fc31, fc32, dk31a, hmadk31a, hnlsg3132, NG, tnlsgd3132);
    NaloopVtg(fc32, fc31, dk32a, hmadk32a, hnlsg3231, NG, tnlsgd3231);
    NaloopVtg(fc33, fc34, dk33a, hmadk33a, hnlsg3334, NG, tnlsgd3334);
    NaloopVtg(fc34, fc33, dk34a, hmadk34a, hnlsg3433, NG, tnlsgd3433);
    NaloopEG(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281, d82_1, END);

    IH[hnlak31a] = IH[hmadk31a];
    IH[hnlak32a] = IH[hmadk32a];
    IH[hnlak33a] = IH[hmadk33a];
    IH[hnlak34a] = IH[hmadk34a];

    Meetkriterium_Add();
}

void Meeverlengen(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
    {
        YM[fc] &= ~BIT1;  /* reset BIT-sturing */
        YM[fc] &= ~BIT4;  /* reset BIT-sturing */
    }

    YM[fc02] |= SCH[schmv02] && ym_max_tig_Realisatietijd(fc02, prmmv02) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc03] |= SCH[schmv03] && ym_max_tig_Realisatietijd(fc03, prmmv03) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc05] |= SCH[schmv05] && ym_max_tig_Realisatietijd(fc05, prmmv05) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc08] |= SCH[schmv08] && ym_max_tig_Realisatietijd(fc08, prmmv08) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc09] |= SCH[schmv09] && ym_max_tig_Realisatietijd(fc09, prmmv09) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc11] |= SCH[schmv11] && ym_max_tig_Realisatietijd(fc11, prmmv11) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc21] |= SCH[schmv21] && ym_max_tig_Realisatietijd(fc21, prmmv21) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc22] |= SCH[schmv22] && ym_max_tig_Realisatietijd(fc22, prmmv22) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc24] |= SCH[schmv24] && ym_max_tig_Realisatietijd(fc24, prmmv24) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc26] |= SCH[schmv26] && ym_max_tig_Realisatietijd(fc26, prmmv26) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc28] |= SCH[schmv28] && ym_max_tig_Realisatietijd(fc28, prmmv28) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc31] |= SCH[schmv31] && ym_max_tig_Realisatietijd(fc31, prmmv31) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc32] |= SCH[schmv32] && ym_max_tig_Realisatietijd(fc32, prmmv32) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc33] |= SCH[schmv33] && ym_max_tig_Realisatietijd(fc33, prmmv33) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc34] |= SCH[schmv34] && ym_max_tig_Realisatietijd(fc34, prmmv34) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc38] |= SCH[schmv38] && ym_max_tig_Realisatietijd(fc38, prmmv38) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc61] |= SCH[schmv61] && ym_max_tig_Realisatietijd(fc61, prmmv61) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc62] |= SCH[schmv62] && ym_max_tig_Realisatietijd(fc62, prmmv62) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc67] |= SCH[schmv67] && ym_max_tig_Realisatietijd(fc67, prmmv67) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc68] |= SCH[schmv68] && ym_max_tig_Realisatietijd(fc68, prmmv68) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc81] |= SCH[schmv81] && ym_max_tig_Realisatietijd(fc81, prmmv81) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc82] |= SCH[schmv82] && ym_max_tig_Realisatietijd(fc82, prmmv82) && hf_wsg_nlISG() ? BIT4 : 0;
    YM[fc84] |= SCH[schmv84] && ym_max_tig_Realisatietijd(fc84, prmmv84) && hf_wsg_nlISG() ? BIT4 : 0;

    /* Niet meeverlengen tijdens file (meting na ss) */
    if (IH[hfileFile68af]) YM[fc08] &= ~BIT4;
    if (IH[hfileFile68af]) YM[fc11] &= ~BIT4;

    /* Meeverlengen Deelconflicten */
    if (SCH[schhardmv2205] && G[fc05] || RA[fc05] || R[fc05] && AA[fc05] || A[fc05] && (twacht[fc05] >= 0) && (twacht[fc05] <= (TGL_max[fc22] + TRG_max[fc22] + T_max[tvs2205]))) YM[fc22] |= BIT1;
    if (SCH[schhardmv2611] && G[fc11] || RA[fc11] || R[fc11] && AA[fc05] || A[fc11] && (twacht[fc11] >= 0) && (twacht[fc11] <= (TGL_max[fc26] + TRG_max[fc26] - T_max[tlr2611]))) YM[fc26] |= BIT1;
    if (SCH[schhardmv3205] && G[fc05] || RA[fc05] || R[fc05] && AA[fc05] || A[fc05] && (twacht[fc05] >= 0) && (twacht[fc05] <= (TGL_max[fc32] + TRG_max[fc32] + T_max[tvs3205]))) YM[fc32] |= BIT1;

    MeeverlengenUitDoorPrio();
    MeeverlengenUitDoorVoetgangerLos(fc31, hmadk31b);
    MeeverlengenUitDoorVoetgangerLos(fc32, hmadk32b);
    MeeverlengenUitDoorVoetgangerLos(fc33, hmadk33b);
    MeeverlengenUitDoorVoetgangerLos(fc34, hmadk34b);

    Meeverlengen_Add();
}
void Synchronisaties(void)
{
    TegenhoudenDoorRealisatietijden();

    Synchronisaties_Add();
}

void RealisatieAfhandeling(void)
{
    int fc;

    /* versnelde primaire realisaties */
    /* ------------------------------ */
    /* periode versnelde primaire realisatie - aantal modulen vooruit */
    /* -------------------------------------------------------------- */
    PFPR[fc02] = ml_fpr(fc02, PRM[prmmlfpr02], PRML, ML, MLMAX);
    PFPR[fc03] = ml_fpr(fc03, PRM[prmmlfpr03], PRML, ML, MLMAX);
    PFPR[fc05] = ml_fpr(fc05, PRM[prmmlfpr05], PRML, ML, MLMAX);
    PFPR[fc08] = ml_fpr(fc08, PRM[prmmlfpr08], PRML, ML, MLMAX);
    PFPR[fc09] = ml_fpr(fc09, PRM[prmmlfpr09], PRML, ML, MLMAX);
    PFPR[fc11] = ml_fpr(fc11, PRM[prmmlfpr11], PRML, ML, MLMAX);
    PFPR[fc21] = ml_fpr(fc21, PRM[prmmlfpr21], PRML, ML, MLMAX);
    PFPR[fc22] = ml_fpr(fc22, PRM[prmmlfpr22], PRML, ML, MLMAX);
    PFPR[fc24] = ml_fpr(fc24, PRM[prmmlfpr24], PRML, ML, MLMAX);
    PFPR[fc26] = ml_fpr(fc26, PRM[prmmlfpr26], PRML, ML, MLMAX);
    PFPR[fc28] = ml_fpr(fc28, PRM[prmmlfpr28], PRML, ML, MLMAX);
    PFPR[fc31] = ml_fpr(fc31, PRM[prmmlfpr31], PRML, ML, MLMAX);
    PFPR[fc32] = ml_fpr(fc32, PRM[prmmlfpr32], PRML, ML, MLMAX);
    PFPR[fc33] = ml_fpr(fc33, PRM[prmmlfpr33], PRML, ML, MLMAX);
    PFPR[fc34] = ml_fpr(fc34, PRM[prmmlfpr34], PRML, ML, MLMAX);
    PFPR[fc38] = ml_fpr(fc38, PRM[prmmlfpr38], PRML, ML, MLMAX);
    PFPR[fc61] = ml_fpr(fc61, PRM[prmmlfpr61], PRML, ML, MLMAX);
    PFPR[fc62] = ml_fpr(fc62, PRM[prmmlfpr62], PRML, ML, MLMAX);
    PFPR[fc67] = ml_fpr(fc67, PRM[prmmlfpr67], PRML, ML, MLMAX);
    PFPR[fc68] = ml_fpr(fc68, PRM[prmmlfpr68], PRML, ML, MLMAX);
    PFPR[fc81] = ml_fpr(fc81, PRM[prmmlfpr81], PRML, ML, MLMAX);
    PFPR[fc82] = ml_fpr(fc82, PRM[prmmlfpr82], PRML, ML, MLMAX);
    PFPR[fc84] = ml_fpr(fc84, PRM[prmmlfpr84], PRML, ML, MLMAX);

    VersneldPrimair_Add();

    for (fc = 0; fc < FCMAX; ++fc)
    {
        set_FPRML(fc, PRML, ML, MLMAX, (boolv)PFPR[fc]);
    }

    /* langstwachtende alternatieve realisatie */
    /* --------------------------------------- */

    afsluiten_aanvraaggebied_prISG(PRML, ML);

    if (EG[fc22] && PR[fc22] && !A[fc05] && (PRML[ML][fc05] & PRIMAIR_VERSNELD)) PG[fc05] |= PRIMAIR_OVERSLAG;
    if (EG[fc32] && PR[fc32] && !A[fc05] && (PRML[ML][fc05] & PRIMAIR_VERSNELD)) PG[fc05] |= PRIMAIR_OVERSLAG;
    if (EG[fc26] && PR[fc26] && !A[fc11] && (PRML[ML][fc11] & PRIMAIR_VERSNELD)) PG[fc11] |= PRIMAIR_OVERSLAG;

    for (fc=0; fc<FCMAX; fc++)
    {
        RR[fc] &= ~BIT5;
        FM[fc] &= ~BIT5;
    }

    /* zet richtingen die alternatief gaan realiseren         */
    /* terug naar RV als er geen alternatieve ruimte meer is. */
    RR[fc02] |= R[fc02] && AR[fc02] && (!PAR[fc02] || ERA[fc02]) ? BIT5 : 0;
    RR[fc03] |= R[fc03] && AR[fc03] && (!PAR[fc03] || ERA[fc03]) ? BIT5 : 0;
    RR[fc05] |= R[fc05] && AR[fc05] && (!PAR[fc05] || ERA[fc05]) ? BIT5 : 0;
    RR[fc08] |= R[fc08] && AR[fc08] && (!PAR[fc08] || ERA[fc08]) ? BIT5 : 0;
    RR[fc09] |= R[fc09] && AR[fc09] && (!PAR[fc09] || ERA[fc09]) ? BIT5 : 0;
    RR[fc11] |= R[fc11] && AR[fc11] && (!PAR[fc11] || ERA[fc11]) ? BIT5 : 0;
    RR[fc21] |= R[fc21] && AR[fc21] && (!PAR[fc21] || ERA[fc21]) && MM[mwtvm21] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc22] |= R[fc22] && AR[fc22] && (!PAR[fc22] || ERA[fc22]) && MM[mwtvm22] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc24] |= R[fc24] && AR[fc24] && (!PAR[fc24] || ERA[fc24]) && MM[mwtvm24] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc26] |= R[fc26] && AR[fc26] && (!PAR[fc26] || ERA[fc26]) && MM[mwtvm26] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc28] |= R[fc28] && AR[fc28] && (!PAR[fc28] || ERA[fc28]) && MM[mwtvm28] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc31] |= R[fc31] && AR[fc31] && (!PAR[fc31] || ERA[fc31]) ? BIT5 : 0;
    RR[fc32] |= R[fc32] && AR[fc32] && (!PAR[fc32] || ERA[fc32]) ? BIT5 : 0;
    RR[fc33] |= R[fc33] && AR[fc33] && (!PAR[fc33] || ERA[fc33]) ? BIT5 : 0;
    RR[fc34] |= R[fc34] && AR[fc34] && (!PAR[fc34] || ERA[fc34]) ? BIT5 : 0;
    RR[fc38] |= R[fc38] && AR[fc38] && (!PAR[fc38] || ERA[fc38]) ? BIT5 : 0;
    RR[fc61] |= R[fc61] && AR[fc61] && (!PAR[fc61] || ERA[fc61]) ? BIT5 : 0;
    RR[fc62] |= R[fc62] && AR[fc62] && (!PAR[fc62] || ERA[fc62]) ? BIT5 : 0;
    RR[fc67] |= R[fc67] && AR[fc67] && (!PAR[fc67] || ERA[fc67]) ? BIT5 : 0;
    RR[fc68] |= R[fc68] && AR[fc68] && (!PAR[fc68] || ERA[fc68]) ? BIT5 : 0;
    RR[fc81] |= R[fc81] && AR[fc81] && (!PAR[fc81] || ERA[fc81]) && MM[mwtvm81] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc82] |= R[fc82] && AR[fc82] && (!PAR[fc82] || ERA[fc82]) && MM[mwtvm82] > PRM[prmwtvnhaltmin] ? BIT5 : 0;
    RR[fc84] |= R[fc84] && AR[fc84] && (!PAR[fc84] || ERA[fc84]) && MM[mwtvm84] > PRM[prmwtvnhaltmin] ? BIT5 : 0;

    /* Correctie gelijkstart */
    if (!(RR[fc24] & BIT5)) RR[fc84] &= ~BIT5;
    if (!(RR[fc84] & BIT5)) RR[fc24] &= ~BIT5;

    /* Correctie Late Release */
    if (!((RR[fc11] & BIT5) || G[fc11])) RR[fc26] &= ~BIT5;


    /* Niet intrekken alternatief nalooprichting tijdens inlopen voedende richting */
    if (RT[tvgnaloop2221] || T[tvgnaloop2221])
    {
        RR[fc21] &= ~BIT5;
    }
    if (RT[tnlsgd3231] || T[tnlsgd3231])
    {
        RR[fc31] &= ~BIT5;
    }
    if (RT[tnlsgd3132] || T[tnlsgd3132])
    {
        RR[fc32] &= ~BIT5;
    }
    if (RT[tnlsgd3433] || T[tnlsgd3433])
    {
        RR[fc33] &= ~BIT5;
    }
    if (RT[tnlsgd3334] || T[tnlsgd3334])
    {
        RR[fc34] &= ~BIT5;
    }
    if (RT[tvgnaloop0262] || T[tvgnaloop0262])
    {
        RR[fc62] &= ~BIT5;
    }
    if (RT[tvgnaloop0868] || T[tvgnaloop0868])
    {
        RR[fc68] &= ~BIT5;
    }
    if (RT[tvgnaloop8281] || T[tvgnaloop8281])
    {
        RR[fc81] &= ~BIT5;
    }
    FM[fc02] |= (fm_ar_kpr(fc02, PRM[prmaltg02])) ? BIT5 : 0;
    FM[fc03] |= (fm_ar_kpr(fc03, PRM[prmaltg03])) ? BIT5 : 0;
    FM[fc05] |= (fm_ar_kpr(fc05, PRM[prmaltg05])) ? BIT5 : 0;
    FM[fc08] |= (fm_ar_kpr(fc08, PRM[prmaltg08])) ? BIT5 : 0;
    FM[fc09] |= (fm_ar_kpr(fc09, PRM[prmaltg09])) ? BIT5 : 0;
    FM[fc11] |= (fm_ar_kpr(fc11, PRM[prmaltg11])) ? BIT5 : 0;
    FM[fc21] |= (fm_ar_kpr(fc21, PRM[prmaltg21])) ? BIT5 : 0;
    FM[fc22] |= (fm_ar_kpr(fc22, PRM[prmaltg22])) ? BIT5 : 0;
    FM[fc24] |= (fm_ar_kpr(fc24, PRM[prmaltg24])) ? BIT5 : 0;
    FM[fc26] |= (fm_ar_kpr(fc26, PRM[prmaltg26])) ? BIT5 : 0;
    FM[fc28] |= (fm_ar_kpr(fc28, PRM[prmaltg28])) ? BIT5 : 0;
    FM[fc31] |= (fm_ar_kpr(fc31, PRM[prmaltg31])) ? BIT5 : 0;
    FM[fc32] |= (fm_ar_kpr(fc32, PRM[prmaltg32])) ? BIT5 : 0;
    FM[fc33] |= (fm_ar_kpr(fc33, PRM[prmaltg33])) ? BIT5 : 0;
    FM[fc34] |= (fm_ar_kpr(fc34, PRM[prmaltg34])) ? BIT5 : 0;
    FM[fc38] |= (fm_ar_kpr(fc38, PRM[prmaltg38])) ? BIT5 : 0;
    FM[fc61] |= (fm_ar_kpr(fc61, PRM[prmaltg61])) ? BIT5 : 0;
    FM[fc62] |= (fm_ar_kpr(fc62, PRM[prmaltg62])) ? BIT5 : 0;
    FM[fc67] |= (fm_ar_kpr(fc67, PRM[prmaltg67])) ? BIT5 : 0;
    FM[fc68] |= (fm_ar_kpr(fc68, PRM[prmaltg68])) ? BIT5 : 0;
    FM[fc81] |= (fm_ar_kpr(fc81, PRM[prmaltg81])) ? BIT5 : 0;
    FM[fc82] |= (fm_ar_kpr(fc82, PRM[prmaltg82])) ? BIT5 : 0;
    FM[fc84] |= (fm_ar_kpr(fc84, PRM[prmaltg84])) ? BIT5 : 0;

    /* Niet intrekken alternatief nalooprichting tijdens inlopen voedende richting */
    if (RT[tvgnaloop0262] || T[tvgnaloop0262]) { RR[fc62] &= ~BIT5; FM[fc62] &= ~BIT5; }
    if (RT[tvgnaloop0868] || T[tvgnaloop0868]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (RT[tvgnaloop1168] || T[tvgnaloop1168]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (RT[tvgnaloop2221] || T[tvgnaloop2221]) { RR[fc21] &= ~BIT5; FM[fc21] &= ~BIT5; }
    if (RT[tnlsgd3132] || T[tnlsgd3132]) { RR[fc32] &= ~BIT5; FM[fc32] &= ~BIT5; }
    if (RT[tnlsgd3231] || T[tnlsgd3231]) { RR[fc31] &= ~BIT5; FM[fc31] &= ~BIT5; }
    if (RT[tnlsgd3334] || T[tnlsgd3334]) { RR[fc34] &= ~BIT5; FM[fc34] &= ~BIT5; }
    if (RT[tnlsgd3433] || T[tnlsgd3433]) { RR[fc33] &= ~BIT5; FM[fc33] &= ~BIT5; }
    if (RT[tvgnaloop8281] || T[tvgnaloop8281]) { RR[fc81] &= ~BIT5; FM[fc81] &= ~BIT5; }

    PAR[fc02] = max_par(fc02, PRML, ML) && SCH[schaltg02];
    PAR[fc03] = max_par(fc03, PRML, ML) && SCH[schaltg03];
    PAR[fc05] = max_par(fc05, PRML, ML) && SCH[schaltg05];
    PAR[fc08] = max_par(fc08, PRML, ML) && SCH[schaltg08];
    PAR[fc09] = max_par(fc09, PRML, ML) && SCH[schaltg09];
    PAR[fc11] = max_par(fc11, PRML, ML) && SCH[schaltg11];
    PAR[fc21] = max_par(fc21, PRML, ML) && SCH[schaltg21];
    PAR[fc22] = max_par(fc22, PRML, ML) && SCH[schaltg22];
    PAR[fc24] = max_par(fc24, PRML, ML) && SCH[schaltg2484];
    PAR[fc26] = max_par(fc26, PRML, ML) && SCH[schaltg26];
    PAR[fc28] = max_par(fc28, PRML, ML) && SCH[schaltg28];
    PAR[fc31] = max_par(fc31, PRML, ML) && SCH[schaltg31];
    PAR[fc32] = max_par(fc32, PRML, ML) && SCH[schaltg32];
    PAR[fc33] = max_par(fc33, PRML, ML) && SCH[schaltg33];
    PAR[fc34] = max_par(fc34, PRML, ML) && SCH[schaltg34];
    PAR[fc38] = max_par(fc38, PRML, ML) && SCH[schaltg38];
    PAR[fc61] = max_par(fc61, PRML, ML) && SCH[schaltg61];
    PAR[fc62] = max_par(fc62, PRML, ML) && SCH[schaltg62];
    PAR[fc67] = max_par(fc67, PRML, ML) && SCH[schaltg67];
    PAR[fc68] = max_par(fc68, PRML, ML) && SCH[schaltg68];
    PAR[fc81] = max_par(fc81, PRML, ML) && SCH[schaltg81];
    PAR[fc82] = max_par(fc82, PRML, ML) && SCH[schaltg82];
    PAR[fc84] = max_par(fc84, PRML, ML) && SCH[schaltg2484];

    /* Tegenrichting moet ook kunnen koppelen bij koppelaanvraag */
    PAR[fc32] = PAR[fc32] && PAR[fc31];
    PAR[fc31] = PAR[fc31] && PAR[fc32];
    PAR[fc34] = PAR[fc34] && PAR[fc33];
    PAR[fc33] = PAR[fc33] && PAR[fc34];

    /* Bepaal naloop voetgangers wel/niet toegestaan */
    IH[hnlsg3132] = (PR[fc31] || AR[fc31] && PAR[fc31]);
    IH[hnlsg3231] = (PR[fc32] || AR[fc32] && PAR[fc32]);
    IH[hnlsg3334] = (PR[fc33] || AR[fc33] && PAR[fc33]);
    IH[hnlsg3433] = (PR[fc34] || AR[fc34] && PAR[fc34]);

    /* PAR-ongecoordineerd */
    if (!PAR[fc31] && IH[hmadk31b] && max_par_los(fc31) && (!IH[hmadk31a] || SCH[schlos31_1]) && (!H[hmadk32a] || SCH[schlos31_2]) || PAR_los[fc31] && RA[fc31]) PAR_los[fc31] = TRUE; PAR_los[fc31] = FALSE;
    if (!PAR[fc32] && IH[hmadk32b] && max_par_los(fc32) && (!IH[hmadk32a] || SCH[schlos32_1]) && (!H[hmadk31a] || SCH[schlos32_2]) || PAR_los[fc32] && RA[fc32]) PAR_los[fc32] = TRUE; PAR_los[fc32] = FALSE;
    if (!PAR[fc33] && IH[hmadk33b] && max_par_los(fc33) && (!IH[hmadk33a] || SCH[schlos33_1]) && (!H[hmadk34a] || SCH[schlos33_2]) || PAR_los[fc33] && RA[fc33]) PAR_los[fc33] = TRUE; PAR_los[fc33] = FALSE;
    if (!PAR[fc34] && IH[hmadk34b] && max_par_los(fc34) && (!IH[hmadk34a] || SCH[schlos34_1]) && (!H[hmadk33a] || SCH[schlos34_2]) || PAR_los[fc34] && RA[fc34]) PAR_los[fc34] = TRUE; PAR_los[fc34] = FALSE;

    PAR[fc31] = PAR[fc31] || PAR_los[fc31];
    PAR[fc32] = PAR[fc32] || PAR_los[fc32];
    PAR[fc33] = PAR[fc33] || PAR_los[fc33];
    PAR[fc34] = PAR[fc34] || PAR_los[fc34];

    /* PAR correcties gelijkstart synchronisaties */
    if (SCH[schgs2484]) PAR[fc84] = PAR[fc84] && PAR[fc24];
    if (SCH[schgs2484]) PAR[fc24] = PAR[fc24] && PAR[fc84];
    /* set meerealisatie voor richtingen met nalopen */
    /* --------------------------------------------- */
    set_MRLW_nl(fc62, fc02, (boolv)(G[fc02] && !G[fc62] && A[fc62]));
    set_MRLW_nl(fc68, fc08, (boolv)(G[fc08] && !G[fc68] && A[fc68]));
    set_MRLW_nl(fc68, fc11, (boolv)(G[fc11] && !G[fc68] && A[fc68]));
    set_MRLW_nl(fc21, fc22, (boolv)(G[fc22] && !G[fc21] && A[fc21]));
    set_MRLW(fc32, fc31, (boolv)(SG[fc31] && A[fc32] && IH[hnlak31a] && IH[hnlsg3132]));
    set_MRLW(fc31, fc32, (boolv)(SG[fc32] && A[fc31] && IH[hnlak32a] && IH[hnlsg3231]));
    set_MRLW(fc34, fc33, (boolv)(SG[fc33] && A[fc34] && IH[hnlak33a] && IH[hnlsg3334]));
    set_MRLW(fc33, fc34, (boolv)(SG[fc34] && A[fc33] && IH[hnlak34a] && IH[hnlsg3433]));
    set_MRLW_nl(fc81, fc82, (boolv)(G[fc82] && !G[fc81] && A[fc81]));

    /* set meerealisatie voor gelijk- of voorstartende richtingen */
    /* ---------------------------------------------------------- */
    set_MRLW(fc22, fc05, (boolv) (RA[fc05] && (PR[fc05] || AR[fc05] || BR[fc05] || (AA[fc05] & BIT11)) && A[fc22] && R[fc22] && !TRG[fc22] && !kcv(fc22)));
    set_MRLW(fc32, fc05, (boolv) (RA[fc05] && (PR[fc05] || AR[fc05] || BR[fc05] || (AA[fc05] & BIT11)) && A[fc32] && R[fc32] && !TRG[fc32] && !kcv(fc32)));
    if (SCH[schgs2484]) set_MRLW(fc24, fc84, (boolv) ((RA[fc84] || SG[fc84]) && (PR[fc84] || AR[fc84] || (AA[fc84] & BIT11)) && A[fc24] && R[fc24] && !TRG[fc24] && !kcv(fc24)));
    if (SCH[schgs2484]) set_MRLW(fc84, fc24, (boolv) ((RA[fc24] || SG[fc24]) && (PR[fc24] || AR[fc24] || (AA[fc84] & BIT11)) && A[fc84] && R[fc84] && !TRG[fc84] && !kcv(fc84)));



    /* Niet alternatief komen tijdens file */
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




    Alternatief_Add();

    langstwachtende_alternatief_modulen(PRML, ML, ML_MAX);
    langstwachtende_alternatief();
    PrioBijzonderRealiserenISG();

    YML[ML] = yml_cv_pr_nl_ISG(PRML, ML, ML_MAX);

    YML[ML1] |= yml_wml(PRML, ML_MAX);
    YML[ML2] |= FALSE;
    YML[ML3] |= FALSE;
    YML[ML4] |= FALSE;

    Modules_Add();

    SML = modules(ML_MAX, PRML, YML, &ML);

    for (fc = 0; fc < FCMAX; ++fc)
    {
        YM[fc] &= ~BIT5;
        YM[fc] |= SML && PG[fc] ? BIT5 : FALSE;
    }

    RealisatieAfhandeling_Add();
}

void FileVerwerking(void)
{
    int fc;

    /* File afhandeling */
    /* ---------------- */

    /* reset bitsturing */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        Z[fc] &= ~BIT5;
        BL[fc] &= ~BIT5;
    }

    /* File ingreep File68af */

    FileMeldingV2(d68_9a, tbz68_9a, trij68_9a, tafv68_9a, hfile68_9a);
    FileMeldingV2(d68_9b, tbz68_9b, trij68_9b, tafv68_9b, hfile68_9b);
    RT[tafvFile68af] = D[d68_9a] || D[d68_9b];
    if (!(T[tafvFile68af] || RT[tafvFile68af]))
    {
        IH[hfile68_9a] = FALSE;
        IH[hfile68_9b] = FALSE;
    }
        /* strook parallel: file bij melding op 1 strook */
    if(SCH[schfileFile68afparstrook])
    {
        IH[hfileFile68af] = IH[hfile68_9a] || IH[hfile68_9b];
    }
    /* niet parallel: file bij melding van alle lussen */
    else
    {
        IH[hfileFile68af] = IH[hfile68_9a] && IH[hfile68_9b];
    }

    /* Minimale roodtijden tijdens file ingreep File68af */
    /* Minimale roodtijd fase 08 */
    RT[tminrood08fileFile68af] = EGL[fc08] && T_max[tminrood08fileFile68af];
    if (R[fc08] && T[tminrood08fileFile68af] && IH[hfileFile68af])
    {
        BL[fc08] |= BIT5;
    }
    /* Minimale roodtijd fase 11 */
    RT[tminrood11fileFile68af] = EGL[fc11] && T_max[tminrood11fileFile68af];
    if (R[fc11] && T[tminrood11fileFile68af] && IH[hfileFile68af])
    {
        BL[fc11] |= BIT5;
    }
    /* Als hulpdienst ingreep actief is op kruispunt arm dan nooit uitstel of afbreken als gevolg van file stroomafwaarts */
#ifndef NO_PRIO
    if (IH[hhd08])
    {
        Z[fc08] &= ~BIT5;
        BL[fc08] &= ~BIT5;
    }
    if (IH[hhd11])
    {
        Z[fc11] &= ~BIT5;
        BL[fc11] &= ~BIT5;
    }
#endif /* NO_PRIO */

    FileVerwerking_Add();
}

void init_application(void)
{
#if (defined AUTOMAAT || defined AUTOMAAT_TEST)
    int i;
#endif
    int fc;

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) && !defined VISSIM
    if (!SAPPLPROG)
        stuffkey(CTRLF4KEY);
#endif

    /* Aansturing hulpelement aansturing wachttijdvoorspellers */
    IH[hwtv21] = SCH[schwtv21];
    IH[hwtv22] = SCH[schwtv22];
    IH[hwtv24] = SCH[schwtv24];
    IH[hwtv26] = SCH[schwtv26];
    IH[hwtv28] = SCH[schwtv28];
    IH[hwtv81] = SCH[schwtv81];
    IH[hwtv82] = SCH[schwtv82];
    IH[hwtv84] = SCH[schwtv84];

    /* TESTOMGEVING */
    /* ============ */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST && !defined VISSIM)
        if (!SAPPLPROG)
        {
        #ifdef DUURTEST
            //stuffkey(F5KEY);
            stuffkey(ALTF9KEY);
            stuffkey(F2KEY);
            stuffkey(ALTCTRLF3KEY);
            stuffkey(F4KEY);
            //stuffkey(F10KEY);
            //stuffkey(F11KEY);
            CFB_max = 0; /* maximum aantal herstarts na fasebewaking */
            MONTYPE[MONTYPE_DATI] = 0;
            LOGTYPE[LOGTYPE_DATI] = 0;
        #endif
        }
    #endif
#if defined AUTOMAAT || defined AUTOMAAT_TEST
    /* verwijderen BG, OG en FL tijden in ITSAPP */
    for (i = 0; i < DPMAX; ++i) {
        TBG_max[i]=NG;
        TOG_max[i]=NG;
        TFL_max[i]=NG;
        CFL_max[i]=NG;
    }
#endif

    /* Toepassen parametreerbare blokindeling:
       - obv schakelaar
       - alleen indien de actuele instellingen door een check heen komen
         waarbij middels een functie de blokkenstructuur wordt gecheckt
         (op toedeling en conflicten) */
    /* Reset blokkering voor niet-toegedeelde fasen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        BL[fc] &= ~BIT10;
    }
    if (SCH[schmlprm])
    {
        ModuleStructuurPRM(prmprml02, 0, FCMAX, ML_MAX, PRML, YML, &ML, &SML);
    }

    #if (CCOL_V >= 110 && !defined TDHAMAX) || (CCOL_V < 110)
        init_tdhdyn();
    #endif

    init_tvg = TRUE;
    PrioInit_ISG(); /* initialisatie prioriteits instellingen @@ functienaam wijzigen / ISG weghalen @@ */
    PrioInitExtra(); /* initialisatie variabelen vertraag_kar_uitm */

    post_init_application();
}

void PostApplication(void)
{
    int fc;

    int i = 0;
    for (i = 0; i < DPMAX; ++i)
    {
        DB_old[i] = DB[i];
    }

    /* Verklikken stiptheid OV */
    CIF_GUS[usovtevroeg02bus] = MM[mstp02bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd02bus] = MM[mstp02bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat02bus] = MM[mstp02bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg03bus] = MM[mstp03bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd03bus] = MM[mstp03bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat03bus] = MM[mstp03bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg05bus] = MM[mstp05bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd05bus] = MM[mstp05bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat05bus] = MM[mstp05bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg08bus] = MM[mstp08bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd08bus] = MM[mstp08bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat08bus] = MM[mstp08bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg09bus] = MM[mstp09bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd09bus] = MM[mstp09bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat09bus] = MM[mstp09bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg11bus] = MM[mstp11bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd11bus] = MM[mstp11bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat11bus] = MM[mstp11bus] == CIF_TE_LAAT;

    /* TESTOMGEVING */
    /* ============ */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST && !defined VISSIM)
        if (TS &&
            (CIF_KLOK[CIF_JAAR] == 2099) &&
            (CIF_KLOK[CIF_MAAND] == 1) &&
            (CIF_KLOK[CIF_DAG] == 1) &&
            (CIF_KLOK[CIF_UUR] == 1) &&
            (CIF_KLOK[CIF_MINUUT] == 1) &&
            (CIF_KLOK[CIF_SECONDE] == 1))
        {
            stuffkey(F3KEY);
            stuffkey(F5KEY);
            stuffkey(F4KEY);
            //stuffkey(F10KEY); 
        }
    #endif

    CyclustijdMeting(tcycl, schcycl, SML && (ML == ML1), schcycl_reset, mlcycl);

    /* Tbv parametreerbare blokindeling: reset A voor niet toegedeeld fasen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (BL[fc] & BIT10) A[fc] = FALSE;
    }

    PrioCcol();
    CIF_GUS[usisgtijd02] = ((twacht[fc02] * (A[fc02] || PRIOFC[fc02]) * R[fc02]) >= 0) ? (twacht[fc02] * (A[fc02] || PRIOFC[fc02]) * R[fc02]) : 0;
    CIF_GUS[usisgtijd03] = ((twacht[fc03] * (A[fc03] || PRIOFC[fc03]) * R[fc03]) >= 0) ? (twacht[fc03] * (A[fc03] || PRIOFC[fc03]) * R[fc03]) : 0;
    CIF_GUS[usisgtijd05] = ((twacht[fc05] * (A[fc05] || PRIOFC[fc05]) * R[fc05]) >= 0) ? (twacht[fc05] * (A[fc05] || PRIOFC[fc05]) * R[fc05]) : 0;
    CIF_GUS[usisgtijd08] = ((twacht[fc08] * (A[fc08] || PRIOFC[fc08]) * R[fc08]) >= 0) ? (twacht[fc08] * (A[fc08] || PRIOFC[fc08]) * R[fc08]) : 0;
    CIF_GUS[usisgtijd09] = ((twacht[fc09] * (A[fc09] || PRIOFC[fc09]) * R[fc09]) >= 0) ? (twacht[fc09] * (A[fc09] || PRIOFC[fc09]) * R[fc09]) : 0;
    CIF_GUS[usisgtijd11] = ((twacht[fc11] * (A[fc11] || PRIOFC[fc11]) * R[fc11]) >= 0) ? (twacht[fc11] * (A[fc11] || PRIOFC[fc11]) * R[fc11]) : 0;
    CIF_GUS[usisgtijd21] = ((twacht[fc21] * (A[fc21] || PRIOFC[fc21]) * R[fc21]) >= 0) ? (twacht[fc21] * (A[fc21] || PRIOFC[fc21]) * R[fc21]) : 0;
    CIF_GUS[usisgtijd22] = ((twacht[fc22] * (A[fc22] || PRIOFC[fc22]) * R[fc22]) >= 0) ? (twacht[fc22] * (A[fc22] || PRIOFC[fc22]) * R[fc22]) : 0;
    CIF_GUS[usisgtijd24] = ((twacht[fc24] * (A[fc24] || PRIOFC[fc24]) * R[fc24]) >= 0) ? (twacht[fc24] * (A[fc24] || PRIOFC[fc24]) * R[fc24]) : 0;
    CIF_GUS[usisgtijd26] = ((twacht[fc26] * (A[fc26] || PRIOFC[fc26]) * R[fc26]) >= 0) ? (twacht[fc26] * (A[fc26] || PRIOFC[fc26]) * R[fc26]) : 0;
    CIF_GUS[usisgtijd28] = ((twacht[fc28] * (A[fc28] || PRIOFC[fc28]) * R[fc28]) >= 0) ? (twacht[fc28] * (A[fc28] || PRIOFC[fc28]) * R[fc28]) : 0;
    CIF_GUS[usisgtijd31] = ((twacht[fc31] * (A[fc31] || PRIOFC[fc31]) * R[fc31]) >= 0) ? (twacht[fc31] * (A[fc31] || PRIOFC[fc31]) * R[fc31]) : 0;
    CIF_GUS[usisgtijd32] = ((twacht[fc32] * (A[fc32] || PRIOFC[fc32]) * R[fc32]) >= 0) ? (twacht[fc32] * (A[fc32] || PRIOFC[fc32]) * R[fc32]) : 0;
    CIF_GUS[usisgtijd33] = ((twacht[fc33] * (A[fc33] || PRIOFC[fc33]) * R[fc33]) >= 0) ? (twacht[fc33] * (A[fc33] || PRIOFC[fc33]) * R[fc33]) : 0;
    CIF_GUS[usisgtijd34] = ((twacht[fc34] * (A[fc34] || PRIOFC[fc34]) * R[fc34]) >= 0) ? (twacht[fc34] * (A[fc34] || PRIOFC[fc34]) * R[fc34]) : 0;
    CIF_GUS[usisgtijd38] = ((twacht[fc38] * (A[fc38] || PRIOFC[fc38]) * R[fc38]) >= 0) ? (twacht[fc38] * (A[fc38] || PRIOFC[fc38]) * R[fc38]) : 0;
    CIF_GUS[usisgtijd61] = ((twacht[fc61] * (A[fc61] || PRIOFC[fc61]) * R[fc61]) >= 0) ? (twacht[fc61] * (A[fc61] || PRIOFC[fc61]) * R[fc61]) : 0;
    CIF_GUS[usisgtijd62] = ((twacht[fc62] * (A[fc62] || PRIOFC[fc62]) * R[fc62]) >= 0) ? (twacht[fc62] * (A[fc62] || PRIOFC[fc62]) * R[fc62]) : 0;
    CIF_GUS[usisgtijd67] = ((twacht[fc67] * (A[fc67] || PRIOFC[fc67]) * R[fc67]) >= 0) ? (twacht[fc67] * (A[fc67] || PRIOFC[fc67]) * R[fc67]) : 0;
    CIF_GUS[usisgtijd68] = ((twacht[fc68] * (A[fc68] || PRIOFC[fc68]) * R[fc68]) >= 0) ? (twacht[fc68] * (A[fc68] || PRIOFC[fc68]) * R[fc68]) : 0;
    CIF_GUS[usisgtijd81] = ((twacht[fc81] * (A[fc81] || PRIOFC[fc81]) * R[fc81]) >= 0) ? (twacht[fc81] * (A[fc81] || PRIOFC[fc81]) * R[fc81]) : 0;
    CIF_GUS[usisgtijd82] = ((twacht[fc82] * (A[fc82] || PRIOFC[fc82]) * R[fc82]) >= 0) ? (twacht[fc82] * (A[fc82] || PRIOFC[fc82]) * R[fc82]) : 0;
    CIF_GUS[usisgtijd84] = ((twacht[fc84] * (A[fc84] || PRIOFC[fc84]) * R[fc84]) >= 0) ? (twacht[fc84] * (A[fc84] || PRIOFC[fc84]) * R[fc84]) : 0;

    PostApplication_Add();
}
void application(void)
{
    PreApplication();
    KlokPerioden();
    Aanvragen();
    Verlenggroen();
    Wachtgroen();
    Meetkriterium();
    Meeverlengen();
    Synchronisaties();
    max_wachttijd_modulen_primair_ISG(PRML, ML, MLMAX, twacht);
    max_wachttijd_modulen_primair_ISG_Add();
    RealisatieAfhandeling();
    FileVerwerking();
#ifndef NO_PRIO
    PrioDebug_Add();
#endif /* NO_PRIO */
    Fixatie(isfix, 0, FCMAX-1, SCH[schbmfix], PRML, ML);
    IsgDebug();

    PostApplication();
}

void system_application(void)
{
    int ov = 0;

    pre_system_application();

    /* file verklikking */
    /* ---------------- */
    CIF_GUS[usFile68af] = IH[hfileFile68af];

    /* PRIO verklikking */
    /* ---------------- */
    CIF_GUS[usovinm02bus] = C[cvc02bus];
    CIF_GUS[usovinm03bus] = C[cvc03bus];
    CIF_GUS[usovinm05bus] = C[cvc05bus];
    CIF_GUS[usovinm08bus] = C[cvc08bus];
    CIF_GUS[usovinm09bus] = C[cvc09bus];
    CIF_GUS[usovinm11bus] = C[cvc11bus];
    CIF_GUS[ushdinm02] = C[cvchd02];
    CIF_GUS[ushdinm03] = C[cvchd03];
    CIF_GUS[ushdinm05] = C[cvchd05];
    CIF_GUS[ushdinm08] = C[cvchd08];
    CIF_GUS[ushdinm09] = C[cvchd09];
    CIF_GUS[ushdinm11] = C[cvchd11];
    CIF_GUS[ushdinm61] = C[cvchd61];
    CIF_GUS[ushdinm62] = C[cvchd62];
    CIF_GUS[ushdinm67] = C[cvchd67];
    CIF_GUS[ushdinm68] = C[cvchd68];

    /* Verklikken melding en ondergedrag KAR */
    CIF_GUS[uskarmelding] = T[tkarmelding];
    CIF_GUS[uskarog] = !T[tkarog];

    /* Verklikken overschreiding maximale wachttijd */
    CIF_GUS[usmaxwt] = FALSE;
    for (ov = 0; ov < prioFCMAX; ++ov)
        CIF_GUS[usmaxwt] |= iMaximumWachtTijdOverschreden[ov];

    /* periode verklikking */
    /* ------------------- */
    CIF_GUS[usperdef] = (MM[mperiod] == 0);
    CIF_GUS[usper1] = (MM[mperiod] == 1);
    CIF_GUS[usper2] = (MM[mperiod] == 2);
    CIF_GUS[usper3] = (MM[mperiod] == 3);
    CIF_GUS[usper4] = (MM[mperiod] == 4);
    CIF_GUS[usper5] = (MM[mperiod] == 5);
    CIF_GUS[usper6] = (MM[mperiod] == 6);
    CIF_GUS[usper7] = (MM[mperiod] == 7);
    CIF_GUS[usperoFietsprio1] = (IH[hperiodFietsprio1] == TRUE);
    CIF_GUS[usperoFietsprio2] = (IH[hperiodFietsprio2] == TRUE);
    CIF_GUS[usperoFietsprio3] = (IH[hperiodFietsprio3] == TRUE);

    /* wachtlicht uitsturing */
    /* --------------------- */
    CIF_GUS[uswtk21] = (D[dk21] && !SD[dk21] || ED[dk21]) && A[fc21] && !G[fc21] && REG ? TRUE : CIF_GUS[uswtk21] && !G[fc21] && REG;
    CIF_GUS[uswtk22] = (D[dk22] && !SD[dk22] || ED[dk22]) && A[fc22] && !G[fc22] && REG ? TRUE : CIF_GUS[uswtk22] && !G[fc22] && REG;
    CIF_GUS[uswtk24] = (D[dk24] && !SD[dk24] || ED[dk24]) && A[fc24] && !G[fc24] && REG ? TRUE : CIF_GUS[uswtk24] && !G[fc24] && REG;
    CIF_GUS[uswtk26] = (D[dk26] && !SD[dk26] || ED[dk26]) && A[fc26] && !G[fc26] && REG ? TRUE : CIF_GUS[uswtk26] && !G[fc26] && REG;
    CIF_GUS[uswtk28] = (D[dk28] && !SD[dk28] || ED[dk28]) && A[fc28] && !G[fc28] && REG ? TRUE : CIF_GUS[uswtk28] && !G[fc28] && REG;
    CIF_GUS[uswtk31a] = (D[dk31a] && !SD[dk31a] || ED[dk31a]) && A[fc31] && !G[fc31] && REG ? TRUE : CIF_GUS[uswtk31a] && !G[fc31] && REG;
    CIF_GUS[uswtk31b] = (D[dk31b] && !SD[dk31b] || ED[dk31b]) && A[fc31] && !G[fc31] && REG ? TRUE : CIF_GUS[uswtk31b] && !G[fc31] && REG;
    CIF_GUS[uswtk32a] = (D[dk32a] && !SD[dk32a] || ED[dk32a]) && A[fc32] && !G[fc32] && REG ? TRUE : CIF_GUS[uswtk32a] && !G[fc32] && REG;
    CIF_GUS[uswtk32b] = (D[dk32b] && !SD[dk32b] || ED[dk32b]) && A[fc32] && !G[fc32] && REG ? TRUE : CIF_GUS[uswtk32b] && !G[fc32] && REG;
    CIF_GUS[uswtk33a] = (D[dk33a] && !SD[dk33a] || ED[dk33a]) && A[fc33] && !G[fc33] && REG ? TRUE : CIF_GUS[uswtk33a] && !G[fc33] && REG;
    CIF_GUS[uswtk33b] = (D[dk33b] && !SD[dk33b] || ED[dk33b]) && A[fc33] && !G[fc33] && REG ? TRUE : CIF_GUS[uswtk33b] && !G[fc33] && REG;
    CIF_GUS[uswtk34a] = (D[dk34a] && !SD[dk34a] || ED[dk34a]) && A[fc34] && !G[fc34] && REG ? TRUE : CIF_GUS[uswtk34a] && !G[fc34] && REG;
    CIF_GUS[uswtk34b] = (D[dk34b] && !SD[dk34b] || ED[dk34b]) && A[fc34] && !G[fc34] && REG ? TRUE : CIF_GUS[uswtk34b] && !G[fc34] && REG;
    CIF_GUS[uswtk38a] = (D[dk38a] && !SD[dk38a] || ED[dk38a]) && A[fc38] && !G[fc38] && REG ? TRUE : CIF_GUS[uswtk38a] && !G[fc38] && REG;
    CIF_GUS[uswtk38b] = (D[dk38b] && !SD[dk38b] || ED[dk38b]) && A[fc38] && !G[fc38] && REG ? TRUE : CIF_GUS[uswtk38b] && !G[fc38] && REG;
    CIF_GUS[uswtk81] = (D[dk81] && !SD[dk81] || ED[dk81]) && A[fc81] && !G[fc81] && REG ? TRUE : CIF_GUS[uswtk81] && !G[fc81] && REG;
    CIF_GUS[uswtk82] = (D[dk82] && !SD[dk82] || ED[dk82]) && A[fc82] && !G[fc82] && REG ? TRUE : CIF_GUS[uswtk82] && !G[fc82] && REG;
    CIF_GUS[uswtk84] = (D[dk84] && !SD[dk84] || ED[dk84]) && A[fc84] && !G[fc84] && REG ? TRUE : CIF_GUS[uswtk84] && !G[fc84] && REG;

    /* Wachttijdvoorspellers */

    t_wacht_old[fc21] = t_wacht[fc21];
    t_wacht_old[fc22] = t_wacht[fc22];
    t_wacht_old[fc24] = t_wacht[fc24];
    t_wacht_old[fc26] = t_wacht[fc26];
    t_wacht_old[fc28] = t_wacht[fc28];
    t_wacht_old[fc81] = t_wacht[fc81];
    t_wacht_old[fc82] = t_wacht[fc82];
    t_wacht_old[fc84] = t_wacht[fc84];
    t_wacht[fc21] = (AR[fc21] && (twacht_AR[fc21] < twacht[fc21]) || (twacht[fc21] < 0)) ? twacht_AR[fc21] : twacht[fc21];
    t_wacht[fc22] = (AR[fc22] && (twacht_AR[fc22] < twacht[fc22]) || (twacht[fc22] < 0)) ? twacht_AR[fc22] : twacht[fc22];
    t_wacht[fc24] = (AR[fc24] && (twacht_AR[fc24] < twacht[fc24]) || (twacht[fc24] < 0)) ? twacht_AR[fc24] : twacht[fc24];
    t_wacht[fc26] = (AR[fc26] && (twacht_AR[fc26] < twacht[fc26]) || (twacht[fc26] < 0)) ? twacht_AR[fc26] : twacht[fc26];
    t_wacht[fc28] = (AR[fc28] && (twacht_AR[fc28] < twacht[fc28]) || (twacht[fc28] < 0)) ? twacht_AR[fc28] : twacht[fc28];
    t_wacht[fc81] = (AR[fc81] && (twacht_AR[fc81] < twacht[fc81]) || (twacht[fc81] < 0)) ? twacht_AR[fc81] : twacht[fc81];
    t_wacht[fc82] = (AR[fc82] && (twacht_AR[fc82] < twacht[fc82]) || (twacht[fc82] < 0)) ? twacht_AR[fc82] : twacht[fc82];
    t_wacht[fc84] = (AR[fc84] && (twacht_AR[fc84] < twacht[fc84]) || (twacht[fc84] < 0)) ? twacht_AR[fc84] : twacht[fc84];
    if ((t_wacht_old[fc21] < t_wacht[fc21]) && CIF_GUS[uswtv21] && (t_wacht_old[fc21] > 0))
    {
        t_wacht_halt[fc21] = t_wacht_old[fc21];
        rr_twacht[fc21] = TRUE;
    }
    else
    {
        if (t_wacht[fc21] <= t_wacht_halt[fc21])
        {
            rr_twacht[fc21] = FALSE;
        }
    }
    if ((t_wacht_old[fc22] < t_wacht[fc22]) && CIF_GUS[uswtv22] && (t_wacht_old[fc22] > 0))
    {
        t_wacht_halt[fc22] = t_wacht_old[fc22];
        rr_twacht[fc22] = TRUE;
    }
    else
    {
        if (t_wacht[fc22] <= t_wacht_halt[fc22])
        {
            rr_twacht[fc22] = FALSE;
        }
    }
    if ((t_wacht_old[fc24] < t_wacht[fc24]) && CIF_GUS[uswtv24] && (t_wacht_old[fc24] > 0))
    {
        t_wacht_halt[fc24] = t_wacht_old[fc24];
        rr_twacht[fc24] = TRUE;
    }
    else
    {
        if (t_wacht[fc24] <= t_wacht_halt[fc24])
        {
            rr_twacht[fc24] = FALSE;
        }
    }
    if ((t_wacht_old[fc26] < t_wacht[fc26]) && CIF_GUS[uswtv26] && (t_wacht_old[fc26] > 0))
    {
        t_wacht_halt[fc26] = t_wacht_old[fc26];
        rr_twacht[fc26] = TRUE;
    }
    else
    {
        if (t_wacht[fc26] <= t_wacht_halt[fc26])
        {
            rr_twacht[fc26] = FALSE;
        }
    }
    if ((t_wacht_old[fc28] < t_wacht[fc28]) && CIF_GUS[uswtv28] && (t_wacht_old[fc28] > 0))
    {
        t_wacht_halt[fc28] = t_wacht_old[fc28];
        rr_twacht[fc28] = TRUE;
    }
    else
    {
        if (t_wacht[fc28] <= t_wacht_halt[fc28])
        {
            rr_twacht[fc28] = FALSE;
        }
    }
    if ((t_wacht_old[fc81] < t_wacht[fc81]) && CIF_GUS[uswtv81] && (t_wacht_old[fc81] > 0))
    {
        t_wacht_halt[fc81] = t_wacht_old[fc81];
        rr_twacht[fc81] = TRUE;
    }
    else
    {
        if (t_wacht[fc81] <= t_wacht_halt[fc81])
        {
            rr_twacht[fc81] = FALSE;
        }
    }
    if ((t_wacht_old[fc82] < t_wacht[fc82]) && CIF_GUS[uswtv82] && (t_wacht_old[fc82] > 0))
    {
        t_wacht_halt[fc82] = t_wacht_old[fc82];
        rr_twacht[fc82] = TRUE;
    }
    else
    {
        if (t_wacht[fc82] <= t_wacht_halt[fc82])
        {
            rr_twacht[fc82] = FALSE;
        }
    }
    if ((t_wacht_old[fc84] < t_wacht[fc84]) && CIF_GUS[uswtv84] && (t_wacht_old[fc84] > 0))
    {
        t_wacht_halt[fc84] = t_wacht_old[fc84];
        rr_twacht[fc84] = TRUE;
    }
    else
    {
        if (t_wacht[fc84] <= t_wacht_halt[fc84])
        {
            rr_twacht[fc84] = FALSE;
        }
    }
    if (rr_twacht[fc21])
    {
        wachttijd_leds_mm(fc21, mwtv21, twtv21, t_wacht_halt[fc21], PRM[prmminwtv]);
        RT[twtv21] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc21, mwtv21, twtv21, t_wacht[fc21], PRM[prmminwtv]);
    }
    if (rr_twacht[fc22])
    {
        wachttijd_leds_mm(fc22, mwtv22, twtv22, t_wacht_halt[fc22], PRM[prmminwtv]);
        RT[twtv22] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc22, mwtv22, twtv22, t_wacht[fc22], PRM[prmminwtv]);
    }
    if (rr_twacht[fc24])
    {
        wachttijd_leds_mm(fc24, mwtv24, twtv24, t_wacht_halt[fc24], PRM[prmminwtv]);
        RT[twtv24] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc24, mwtv24, twtv24, t_wacht[fc24], PRM[prmminwtv]);
    }
    if (rr_twacht[fc26])
    {
        wachttijd_leds_mm(fc26, mwtv26, twtv26, t_wacht_halt[fc26], PRM[prmminwtv]);
        RT[twtv26] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc26, mwtv26, twtv26, t_wacht[fc26], PRM[prmminwtv]);
    }
    if (rr_twacht[fc28])
    {
        wachttijd_leds_mm(fc28, mwtv28, twtv28, t_wacht_halt[fc28], PRM[prmminwtv]);
        RT[twtv28] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc28, mwtv28, twtv28, t_wacht[fc28], PRM[prmminwtv]);
    }
    if (rr_twacht[fc81])
    {
        wachttijd_leds_mm(fc81, mwtv81, twtv81, t_wacht_halt[fc81], PRM[prmminwtv]);
        RT[twtv81] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc81, mwtv81, twtv81, t_wacht[fc81], PRM[prmminwtv]);
    }
    if (rr_twacht[fc82])
    {
        wachttijd_leds_mm(fc82, mwtv82, twtv82, t_wacht_halt[fc82], PRM[prmminwtv]);
        RT[twtv82] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc82, mwtv82, twtv82, t_wacht[fc82], PRM[prmminwtv]);
    }
    if (rr_twacht[fc84])
    {
        wachttijd_leds_mm(fc84, mwtv84, twtv84, t_wacht_halt[fc84], PRM[prmminwtv]);
        RT[twtv84] = TRUE;
    }
    else
    {
        wachttijd_leds_mm(fc84, mwtv84, twtv84, t_wacht[fc84], PRM[prmminwtv]);
    }
    /* laatste ledje laten knipperen bij ov/hd-ingreep of fixatie */
    wachttijd_leds_knip(fc21, mwtv21, mwtvm21, rr_twacht[fc21], isfix);
    wachttijd_leds_knip(fc22, mwtv22, mwtvm22, rr_twacht[fc22], isfix);
    wachttijd_leds_knip(fc24, mwtv24, mwtvm24, rr_twacht[fc24], isfix);
    wachttijd_leds_knip(fc26, mwtv26, mwtvm26, rr_twacht[fc26], isfix);
    wachttijd_leds_knip(fc28, mwtv28, mwtvm28, rr_twacht[fc28], isfix);
    wachttijd_leds_knip(fc81, mwtv81, mwtvm81, rr_twacht[fc81], isfix);
    wachttijd_leds_knip(fc82, mwtv82, mwtvm82, rr_twacht[fc82], isfix);
    wachttijd_leds_knip(fc84, mwtv84, mwtvm84, rr_twacht[fc84], isfix);
    /* beveiliging op afzetten tijdens bedrijf */
    if (G[fc21]) IH[hwtv21] = SCH[schwtv21];
    if (G[fc22]) IH[hwtv22] = SCH[schwtv22];
    if (G[fc24]) IH[hwtv24] = SCH[schwtv24];
    if (G[fc26]) IH[hwtv26] = SCH[schwtv26];
    if (G[fc28]) IH[hwtv28] = SCH[schwtv28];
    if (G[fc81]) IH[hwtv81] = SCH[schwtv81];
    if (G[fc82]) IH[hwtv82] = SCH[schwtv82];
    if (G[fc84]) IH[hwtv84] = SCH[schwtv84];
    /* Aansturen wachttijdlantaarn fase fc21 */
    if (IH[hwtv21] && R[fc21])
    {
        CIF_GUS[uswtv21] = MM[mwtvm21];
    }
    else
    {
        CIF_GUS[uswtv21] = 0;
    }
    CIF_GUS[uswtv21] &= ~BIT8;
    if (CIF_GUS[uswtv21] && rr_twacht[fc21] && IH[hwtv21] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv21] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc22 */
    if (IH[hwtv22] && R[fc22])
    {
        CIF_GUS[uswtv22] = MM[mwtvm22];
    }
    else
    {
        CIF_GUS[uswtv22] = 0;
    }
    CIF_GUS[uswtv22] &= ~BIT8;
    if (CIF_GUS[uswtv22] && rr_twacht[fc22] && IH[hwtv22] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv22] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc24 */
    if (IH[hwtv24] && R[fc24])
    {
        CIF_GUS[uswtv24] = MM[mwtvm24];
    }
    else
    {
        CIF_GUS[uswtv24] = 0;
    }
    CIF_GUS[uswtv24] &= ~BIT8;
    if (CIF_GUS[uswtv24] && rr_twacht[fc24] && IH[hwtv24] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv24] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc26 */
    if (IH[hwtv26] && R[fc26])
    {
        CIF_GUS[uswtv26] = MM[mwtvm26];
    }
    else
    {
        CIF_GUS[uswtv26] = 0;
    }
    CIF_GUS[uswtv26] &= ~BIT8;
    if (CIF_GUS[uswtv26] && rr_twacht[fc26] && IH[hwtv26] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv26] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc28 */
    if (IH[hwtv28] && R[fc28])
    {
        CIF_GUS[uswtv28] = MM[mwtvm28];
    }
    else
    {
        CIF_GUS[uswtv28] = 0;
    }
    CIF_GUS[uswtv28] &= ~BIT8;
    if (CIF_GUS[uswtv28] && rr_twacht[fc28] && IH[hwtv28] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv28] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc81 */
    if (IH[hwtv81] && R[fc81])
    {
        CIF_GUS[uswtv81] = MM[mwtvm81];
    }
    else
    {
        CIF_GUS[uswtv81] = 0;
    }
    CIF_GUS[uswtv81] &= ~BIT8;
    if (CIF_GUS[uswtv81] && rr_twacht[fc81] && IH[hwtv81] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv81] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc82 */
    if (IH[hwtv82] && R[fc82])
    {
        CIF_GUS[uswtv82] = MM[mwtvm82];
    }
    else
    {
        CIF_GUS[uswtv82] = 0;
    }
    CIF_GUS[uswtv82] &= ~BIT8;
    if (CIF_GUS[uswtv82] && rr_twacht[fc82] && IH[hwtv82] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv82] |= BIT8;
    }
    /* Aansturen wachttijdlantaarn fase fc84 */
    if (IH[hwtv84] && R[fc84])
    {
        CIF_GUS[uswtv84] = MM[mwtvm84];
    }
    else
    {
        CIF_GUS[uswtv84] = 0;
    }
    CIF_GUS[uswtv84] &= ~BIT8;
    if (CIF_GUS[uswtv84] && rr_twacht[fc84] && IH[hwtv84] && (SCH[schwtvbusbijhd] || !(RTFB & PRIO_RTFB_BIT)))
    {
        CIF_GUS[uswtv84] |= BIT8;
    }

    #ifdef AUTOMAAT
        /* verklikken of applicatie daadwerkelijk de TLC aanstuurt */
        CIF_GUS[usincontrol] = (CIF_WPS[CIF_PROG_CONTROL] == CIF_CONTROL_INCONTROL) ? TRUE : FALSE;

        /* verklikken of applicatie niet in staat is te regelen */
        CIF_GUS[usnocontrol] = (CIF_GPS[CIF_PROG_CONTROL] != CIF_CONTROL_ONGEDEF) ? TRUE : FALSE;

        /* uitschakelen vlog indien applicatie niet in control is */
        LOGPRM[LOGPRM_VLOGMODE] &= ~(BIT5);
        LOGPRM[LOGPRM_VLOGMODE] |= CIF_GUS[usincontrol] ? 0 : BIT5;
    #endif

    /* minimumtijden */
    /* ------------- */
    check_tig_min();
    check_tgg_min();
    check_tgl_min();
    check_trg_min();

    SegmentSturing(ML+1, ussegm1, ussegm2, ussegm3, ussegm4, ussegm5, ussegm6, ussegm7);

    /* Uitsturen actieve module */
    CIF_GUS[usML1] = ML == ML1;
    CIF_GUS[usML2] = ML == ML2;
    CIF_GUS[usML3] = ML == ML3;
    CIF_GUS[usML4] = ML == ML4;

    post_system_application();
}

void system_application2(void)
{
#ifndef NO_VLOG
    mon3_mon4_buffers(SAPPLPROG, PRM[prmmaxtvgvlog], PRM[prmmaxtfbvlog]);
    #if !defined NO_VLOG_200 && !defined NO_PRIO
        VLOG_mon5_buffer();
    #endif 
#if (!defined AUTOMAAT) || (defined VISSIM)
        file_uber_to_file_hour(LOGFILE_NUMBER_MAX, LOGFILE_LENGTH_MAX);
    #endif
#endif


    post_system_application2();
}

#define ENDDUMP 21

void dump_application(void)
{

    post_dump_application();
}

#if defined CCOL_IS_SPECIAL && !defined NO_PRIO
void PrioSpecialSignals();
void is_special_signals(void)
{
    PrioSpecialSignals();
    SpecialSignals_Add();
}
#endif

