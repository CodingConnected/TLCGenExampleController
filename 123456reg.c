/* REGELPROGRAMMA */
/* -------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456reg.c
      CCOL:   12.1
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.8   21-09-2024   TLCGen      Release versie TLCGen
 *
 ************************************************************************************/

#define REG (CIF_WPS[CIF_PROG_STATUS] == CIF_STAT_REG)
#define NALOPEN
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
    #include "trigvar.c"   /* uitgebreide signaalplan structuur */
    #include "plevar.c"   /* uitgebreide signaalplan structuur */
    #include "prmvar.c"   /* parameters                        */
    #include "lwmlvar.c"  /* langstwachtende modulen structuur */
    #ifndef NO_VLOG
        #include "vlogvar.c"  /* variabelen t.b.v. vlogfuncties                */
        #include "logvar.c"   /* variabelen t.b.v. logging                     */
        #include "monvar.c"   /* variabelen t.b.v. realtime monitoring         */
        #include "fbericht.h"
        #if defined AMSTERDAM_PC //@Menno: deze teovoeging alleen als Pratice vinkje is aangevinkt (is voor Amsterdam).
            #include "vlogfunc.c" 
        #endif
   #endif
#include "prio.h"       /* prio-afhandeling                  */
    #ifndef NO_RIS
        #include "risvar.c" /* ccol ris controller */
        #include "risappl.c" /* RIS applicatiefuncties */
        #if (CCOL_V > 100)
        #define RIS_SSM  /* Gebruik in/uitmelden via RIS SSM */
        #endif
        #if (CCOL_V > 100)
        #include "extra_func_ris.c" /* RIS extra functies */
        #endif
        #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
            #include "rissimvar.h" /* ccol ris simulatie functie */
        #endif
    #endif
    #include "prsvar.c"   /* parameters parser                 */
    #include "control.c"  /* controller interface              */
    #include "rtappl.h"   /* applicatie routines               */
    #define PRIO_CHECK_WAGENNMR /* check op wagendienstnummer          */
    #include "extra_func_prio.c" /* extra standaard functies OV     */
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
    #include "realfunc.c"
    #include "fixatie.c"
    #include "123456hst.c"
    #include "123456ptp.c" /* PTP seriele koppeling */
#ifdef MIRMON
    #include "MirakelMonitor.h"
#endif /* MIRMON */
    #include "dynamischhiaat.c"
    #ifndef NO_TIMETOX
    #include "timingsvar.c" /* FCTiming functies */
    #include "timingsfunc.c" /* FCTiming functies */
    #include "timings_uc4.c" /* FCTiming functies */
    #include "123456fctimings.c" /* FCTiming functies */
    #endif /* NO_TIMETOX */
#ifdef SUMO
#include "cctracic_public.h"
#endif /* #ifdef SUMO */

mulv DB_old[DPMAX];
mulv DVG[DPMAX]; /* T.b.v. veiligheidsgroen */

s_int16 CCOL_SLAVE = 0;

    /* Robuuste Groenverdeler */
    #include "123456rgv.c"

/* kruispuntnaam in VISSIM */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    code SCJ_code[] = "123456";
#endif
mulv itvgmaxprm[aanttvgmaxprm]; /* fasecycli met max. verlenggroen parameter */
mulv C_counter_old[CTMAX];

#ifndef NO_RIS
    /* Definitie ProductInformatie ITSinfo */
    /* ----------------------------------- */
    const struct Rif_ProductInformation RIF_ITSINFO_AP = {
      "Gemeente Rotterdam",    /* manufacturerName   */
      "TLCGen",                /* certifiedName      */
      "12.4.0",                /* certifiedVersion   */
      "12.4.0"                 /* version            */
    };
#endif /* NO_RIS */
    #ifdef SUMO
    /* SUMO KOPPELING */
    /* ============== */
    static char sumostart = TRUE;
    static int isumo = 0;
    static char csumotmp[64];
    typedef struct sumoDetStruct {
    	char SumoNamen[3][32];
    	char Selectief;
    } SUMODET;
    char SUMOStateString[45];
    extern int SUMOIds[44];
    extern SUMODET SUMODetectors[DPMAX];
    PROCESS_INFORMATION pi;
    void CloseSumo(void)
    {
        TerminateProcess(pi.hProcess, 0);
    }
    #endif /* #ifdef SUMO */

    #if !defined AUTOMAAT && !defined AUTOMAAT_TEST
        extern boolv display;
    #endif

    #include "123456reg.add"

void PreApplication(void)
{
    int fc;

    TFB_max = PRM[prmfb];

    /* Nalopen */
    /* ------- */
    gk_ResetGK();
    gk_ResetNL();

    /* Bepalen of regeling mag omschakelen */
    /* Tegenhouden inschakelen naar PL als een naloop nog actief is of als inrijden/inlopen actief is */
    /* Opzetten IH[homschtegenh] */
    if (!IH[hkpact] && !IH[hpervar] && !SCH[schvar] && !IH[hplhd])
    {
        IH[homschtegenh] = TRUE;
    }

    /* Wenselijk is dat pas wordt omgeschakeld naar PL wanneer nalopen zijn afgemaakt; echter andere (voedende)
     * richtingen moeten in deze tijd niet groen kunnen worden, anders bestaat het risico dat er permanent
     * wordt gewacht op nieuwe nalopen.
     */
    /* reset */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        RR[fc] &= ~RR_INSCH_HALFSTAR;
        Z[fc] &= ~Z_INSCH_HALFSTAR;
    }
    /* set voor alle richtingen waar een richting al inloopt of inrijdt */
    if (IH[homschtegenh]) /* tegenhouden inschakelen naar PL */
    {
        RR[fc02] |= RR_INSCH_HALFSTAR;
        RR[fc08] |= RR_INSCH_HALFSTAR;
        RR[fc11] |= RR_INSCH_HALFSTAR;
        RR[fc22] |= RR_INSCH_HALFSTAR;
        if (!(T[til3132] || RT[til3132])) RR[fc32] |= RR_INSCH_HALFSTAR;
        if (!(T[til3231] || RT[til3231])) RR[fc31] |= RR_INSCH_HALFSTAR;
        if (!(T[til3334] || RT[til3334])) RR[fc34] |= RR_INSCH_HALFSTAR;
        if (!(T[til3433] || RT[til3433])) RR[fc33] |= RR_INSCH_HALFSTAR;
        RR[fc82] |= RR_INSCH_HALFSTAR;
        if (!(VS[fc02] || FG[fc02])) Z[fc02] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc08] || FG[fc08])) Z[fc08] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc11] || FG[fc11])) Z[fc11] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc22] || FG[fc22])) Z[fc22] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc32] || FG[fc32] || T[tnlsgd3132])) Z[fc32] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc31] || FG[fc31] || T[tnlsgd3231])) Z[fc31] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc34] || FG[fc34] || T[tnlsgd3334])) Z[fc34] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc33] || FG[fc33] || T[tnlsgd3433])) Z[fc33] |= Z_INSCH_HALFSTAR;
        if (!(VS[fc82] || FG[fc82])) Z[fc82] |= Z_INSCH_HALFSTAR;
    }

    /* Afzetten IH[homschtegenh] */
    if (!IH[hkpact] && !IH[hpervar] && !SCH[schvar] && !IH[hplhd])
    {
        if (!T[tnlfg0262] && !RT[tnlfg0262] && !T[tnleg0262] && !RT[tnleg0262] && !T[tnlegd0262] && !RT[tnlegd0262] && !T[tnlfgd0262] && !RT[tnlfgd0262] &&
            !T[tnlfg0868] && !RT[tnlfg0868] && !T[tnleg0868] && !RT[tnleg0868] && !T[tnlegd0868] && !RT[tnlegd0868] && !T[tnlfgd0868] && !RT[tnlfgd0868] &&
            !T[tnlfg1168] && !RT[tnlfg1168] && !T[tnleg1168] && !RT[tnleg1168] && !T[tnlegd1168] && !RT[tnlegd1168] && !T[tnlfgd1168] && !RT[tnlfgd1168] &&
            !T[tnlfg2221] && !RT[tnlfg2221] && !T[tnleg2221] && !RT[tnleg2221] && !T[tnlegd2221] && !RT[tnlegd2221] && !T[tnlfgd2221] && !RT[tnlfgd2221] &&
            !T[tnlsg3132] && !RT[tnlsg3132] && !T[tnlsgd3132] && !RT[tnlsgd3132] &&
            !T[tnlsg3231] && !RT[tnlsg3231] && !T[tnlsgd3231] && !RT[tnlsgd3231] &&
            !T[tnlsgd3334] && !RT[tnlsgd3334] &&
            !T[tnlsgd3433] && !RT[tnlsgd3433] &&
            !T[tnlfg8281] && !RT[tnlfg8281] && !T[tnleg8281] && !RT[tnleg8281] && !T[tnlegd8281] && !RT[tnlegd8281] && !T[tnlfgd8281] && !RT[tnlfgd8281] &&
            !T[tlr6202] && !RT[tlr6202] &&
            !T[tlr6808] && !RT[tlr6808] &&
            !T[tlr6811] && !RT[tlr6811] &&
            !T[tlr2122] && !RT[tlr2122] &&
            !T[til3132] && !RT[til3132]  &&
            !T[til3231] && !RT[til3231]  &&
            !T[til3334] && !RT[til3334]  &&
            !T[til3433] && !RT[til3433]  &&
            !T[tlr8182] && !RT[tlr8182]        )
        {
            IH[homschtegenh] = FALSE;
        }
    }

    /* Opschonen wagennummer buffers */
    WDNST_cleanup();

    IH[hpeltegenhKOP02] = FALSE;

    /* Uitgaande peloton koppeling naar KOP68_uit */
    IH[hptp123456uks04] = SCH[schpkuKOP68_uit68] && (SG[fc68] || FG[fc68]);
    if (G[fc68] && ED[d68_1a]) IH[hptp123456uks05] = !IH[hptp123456uks05];
    if (G[fc68] && ED[d68_1b]) IH[hptp123456uks06] = !IH[hptp123456uks06];
    /* Afzetten hulpelementen inkomende peloton koppelingen */
    IH[hpelinKOP02] = FALSE;

    /* Inkomende peloton koppeling van KOP02 */
    IH[hpelinKOP02] |= proc_pel_in_V1(hptp123456iks10, tpelmeetKOP02, tpelmaxhiaatKOP02, prmpelgrensKOP02, mpelvtgKOP02, mpelinKOP02, hptp123456iks08, hptp123456iks09, END);

    /* Robuuste Groenverdeler */
    IH[hrgvact] = SCH[schrgv];

    /* School ingreep */
    RT[tdbsidk33a] = !D[dk33a];
    RT[tdbsidk33b] = !D[dk33b];
    RT[tdbsidk34a] = !D[dk34a];
    RT[tdbsidk34b] = !D[dk34b];
    IH[hschoolingreepdk33a] = D[dk33a] && !(RT[tdbsidk33a] || T[tdbsidk33a]) && !(CIF_IS[dk33a] >= CIF_DET_STORING) && (R[fc33] || G[fc33] || H[hschoolingreepdk33a]) || TDH[dk33a] && !(CIF_IS[dk33a] >= CIF_DET_STORING) && H[hschoolingreepdk33a];
    IH[hschoolingreepdk33b] = D[dk33b] && !(RT[tdbsidk33b] || T[tdbsidk33b]) && !(CIF_IS[dk33b] >= CIF_DET_STORING) && (R[fc33] || G[fc33] || H[hschoolingreepdk33b]) || TDH[dk33b] && !(CIF_IS[dk33b] >= CIF_DET_STORING) && H[hschoolingreepdk33b];
    IH[hschoolingreepdk34a] = D[dk34a] && !(RT[tdbsidk34a] || T[tdbsidk34a]) && !(CIF_IS[dk34a] >= CIF_DET_STORING) && (R[fc34] || G[fc34] || H[hschoolingreepdk34a]) || TDH[dk34a] && !(CIF_IS[dk34a] >= CIF_DET_STORING) && H[hschoolingreepdk34a];
    IH[hschoolingreepdk34b] = D[dk34b] && !(RT[tdbsidk34b] || T[tdbsidk34b]) && !(CIF_IS[dk34b] >= CIF_DET_STORING) && (R[fc34] || G[fc34] || H[hschoolingreepdk34b]) || TDH[dk34b] && !(CIF_IS[dk34b] >= CIF_DET_STORING) && H[hschoolingreepdk34b];

    /* Reset BITs senioren ingreep */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (US_type[fc] & VTG_type) RW[fc] &= ~BIT7;
    }

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

    /* SUMO KOPPELING */
    /* ============== */
    #ifdef SUMO
    if (sumostart)
    {
        sumostart = FALSE;
        STARTUPINFO si;
        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);
        ZeroMemory(&pi, sizeof(pi));

        // Start SUMO!
        if (!CreateProcess(NULL,
        "\"C:\\Program Files (x86)\\Sumo\\bin\\sumo-gui.exe\" \".\\AS.sumocfg\"",
        NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
        {
            sprintf(csumotmp, "CreateProcess failed (%d).\n", GetLastError());
            uber_puts(csumotmp);
        }
        else
        {
            atexit(CloseSumo);
        }
        TraCIConnect("127.0.0.1", "4001");
        CIF_KLOK[CIF_UUR] = 16;
        CIF_KLOK[CIF_MINUUT] = 0;
           TraCISetOrder(0);
    }
    #endif /* #ifdef SUMO */

    PreApplication_Add();
    pre_application_halfstar();

    /* Genereren knippersignalen */
    UpdateKnipperSignalen();
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
    KlokPerioden_halfstar();
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
    if (!RA[fc02] && !G[fc02]) A[fc02] &= ~BIT5;
    if (!RA[fc03] && !G[fc03]) A[fc03] &= ~BIT5;
    if (!RA[fc05] && !G[fc05]) A[fc05] &= ~BIT5;
    if (!RA[fc08] && !G[fc08]) A[fc08] &= ~BIT5;
    if (!RA[fc09] && !G[fc09]) A[fc09] &= ~BIT5;
    if (!RA[fc11] && !G[fc11]) A[fc11] &= ~BIT5;
    if (!RA[fc21] && !G[fc21]) A[fc21] &= ~BIT5;
    if (!RA[fc22] && !G[fc22]) A[fc22] &= ~BIT5;
    if (!RA[fc24] && !G[fc24]) A[fc24] &= ~BIT5;
    if (!RA[fc26] && !G[fc26]) A[fc26] &= ~BIT5;
    if (!RA[fc28] && !G[fc28]) A[fc28] &= ~BIT5;
    if (!RA[fc61] && !G[fc61]) A[fc61] &= ~BIT5;
    if (!RA[fc62] && !G[fc62]) A[fc62] &= ~BIT5;
    if (!RA[fc67] && !G[fc67]) A[fc67] &= ~BIT5;
    if (!RA[fc68] && !G[fc68]) A[fc68] &= ~BIT5;
    if (!RA[fc81] && !G[fc81]) A[fc81] &= ~BIT5;
    if (!RA[fc82] && !G[fc82]) A[fc82] &= ~BIT5;
    if (!RA[fc84] && !G[fc84]) A[fc84] &= ~BIT5;

    if (PRM[prmda02_1a] != 0 && SCH[schsneld02_1a]) AanvraagSnelV3(fc02, d02_1a);
    if (PRM[prmda02_1b] != 0 && SCH[schsneld02_1b]) AanvraagSnelV3(fc02, d02_1b);
    if (PRM[prmda03_1] != 0 && SCH[schsneld03_1]) AanvraagSnelV3(fc03, d03_1);
    if (PRM[prmda05_1] != 0 && SCH[schsneld05_1]) AanvraagSnelV3(fc05, d05_1);
    if (PRM[prmda08_1a] != 0 && SCH[schsneld08_1a]) AanvraagSnelV3(fc08, d08_1a);
    if (PRM[prmda08_1b] != 0 && SCH[schsneld08_1b]) AanvraagSnelV3(fc08, d08_1b);
    if (PRM[prmda09_1] != 0 && SCH[schsneld09_1]) AanvraagSnelV3(fc09, d09_1);
    if (PRM[prmda11_1] != 0 && SCH[schsneld11_1]) AanvraagSnelV3(fc11, d11_1);
    if (PRM[prmda211] != 0 && SCH[schsneld211]) AanvraagSnelV3(fc21, d211);
    if (PRM[prmda22_1] != 0 && SCH[schsneld22_1]) AanvraagSnelV3(fc22, d22_1);
    if (PRM[prmda24_1] != 0 && SCH[schsneld24_1]) AanvraagSnelV3(fc24, d24_1);
    if (PRM[prmda261] != 0 && SCH[schsneld261]) AanvraagSnelV3(fc26, d261);
    if (PRM[prmda28_1] != 0 && SCH[schsneld28_1]) AanvraagSnelV3(fc28, d28_1);
    if (PRM[prmda61_1] != 0 && SCH[schsneld61_1]) AanvraagSnelV3(fc61, d61_1);
    if (PRM[prmda62_1a] != 0 && SCH[schsneld62_1a]) AanvraagSnelV3(fc62, d62_1a);
    if (PRM[prmda62_1b] != 0 && SCH[schsneld62_1b]) AanvraagSnelV3(fc62, d62_1b);
    if (PRM[prmda67_1] != 0 && SCH[schsneld67_1]) AanvraagSnelV3(fc67, d67_1);
    if (PRM[prmda68_1a] != 0 && SCH[schsneld68_1a]) AanvraagSnelV3(fc68, d68_1a);
    if (PRM[prmda68_1b] != 0 && SCH[schsneld68_1b]) AanvraagSnelV3(fc68, d68_1b);
    if (PRM[prmda81_1] != 0 && SCH[schsneld81_1]) AanvraagSnelV3(fc81, d81_1);
    if (PRM[prmda82_1] != 0 && SCH[schsneld82_1]) AanvraagSnelV3(fc82, d82_1);
    if (PRM[prmda84_1] != 0 && SCH[schsneld84_1]) AanvraagSnelV3(fc84, d84_1);

    /* Meeaanvragen */
    /* ------------ */

    if (SCH[schma0261])
    {
        mee_aanvraag_prm(fc61, fc02, prmtypema0261, (boolv)(TRUE));
    }
    if (SCH[schma0262])
    {
        mee_aanvraag_prm(fc62, fc02, prmtypema0262, (boolv)(TRUE));
    }
    if (SCH[schma0521])
    {
        mee_aanvraag_prm(fc21, fc05, prmtypema0521, (boolv)(TRUE));
    }
    if (SCH[schma0522])
    {
        mee_aanvraag_prm(fc22, fc05, prmtypema0522, (boolv)(!C[cvchd05]));
    }
    if (SCH[schma0532])
    {
        mee_aanvraag_prm(fc32, fc05, prmtypema0532, (boolv)(!C[cvchd05]));
    }
    if (SCH[schma0868])
    {
        mee_aanvraag_prm(fc68, fc08, prmtypema0868, (boolv)(TRUE));
    }
    if (SCH[schma1126])
    {
        mee_aanvraag_prm(fc26, fc11, prmtypema1126, (boolv)(!C[cvchd11]));
    }
    if (SCH[schma1168])
    {
        mee_aanvraag_prm(fc68, fc11, prmtypema1168, (boolv)(TRUE));
    }
    if (SCH[schma2221])
    {
        mee_aanvraag_prm(fc21, fc22, prmtypema2221, (boolv)(TRUE));
    }
    if (SCH[schma2611])
    {
        mee_aanvraag_prm(fc11, fc26, prmtypema2611, (boolv)(TRUE));
    }
    if (SCH[schma3122])
    {
        mee_aanvraag_prm(fc22, fc31, prmtypema3122, (boolv)((H[hmadk31a])));
    }
    if (SCH[schma3132])
    {
        mee_aanvraag_prm(fc32, fc31, prmtypema3132, (boolv)((H[hmadk31a])));
    }
    if (SCH[schma3222])
    {
        mee_aanvraag_prm(fc22, fc32, prmtypema3222, (boolv)((H[hmadk32a])));
    }
    if (SCH[schma3231])
    {
        mee_aanvraag_prm(fc31, fc32, prmtypema3231, (boolv)((H[hmadk32a])));
    }
    if (SCH[schma3324])
    {
        mee_aanvraag_prm(fc24, fc33, prmtypema3324, (boolv)((H[hmadk33a])));
    }
    if (SCH[schma3334])
    {
        mee_aanvraag_prm(fc34, fc33, prmtypema3334, (boolv)((H[hmadk33a])));
    }
    if (SCH[schma3384])
    {
        mee_aanvraag_prm(fc84, fc33, prmtypema3384, (boolv)((H[hmadk33a])));
    }
    if (SCH[schma3424])
    {
        mee_aanvraag_prm(fc24, fc34, prmtypema3424, (boolv)((H[hmadk34a])));
    }
    if (SCH[schma3433])
    {
        mee_aanvraag_prm(fc33, fc34, prmtypema3433, (boolv)((H[hmadk34a])));
    }
    if (SCH[schma3484])
    {
        mee_aanvraag_prm(fc84, fc34, prmtypema3484, (boolv)((H[hmadk34a])));
    }
    mee_aanvraag_prm(fc28, fc38, prmtypema3828, (boolv)(TRUE));
    if (SCH[schma8281])
    {
        mee_aanvraag_prm(fc81, fc82, prmtypema8281, (boolv)(TRUE));
    }

    /* Richtinggevoelige aanvragen */
    /* --------------------------- */

    for (fc = 0; fc < FCMAX; ++fc) RR[fc] &= ~BIT9;  /* reset BIT-sturing t.b.v. reset A */

    if (SCH[schrgad24_3]) aanvraag_richtinggevoelig_reset(fc24, d24_2, d24_3, trgad24_3, trgavd24_3, SCH[schrgadd24_3]);

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

    #ifndef NO_RIS
        /* RIS aanvragen */
        for (fc = 0; fc < FCMAX; ++fc)
        {
            CIF_VLOG_FC_CAM[fc] &= ~BIT0;
        }
        if (ris_aanvraag(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_1], RIS_MOTORVEHICLES, PRM[prmrisastart02mveh1], PRM[prmrisaend02mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc02] |= BIT10;
            CIF_VLOG_FC_CAM[fc02] |= BIT0;
        }
        if (ris_aanvraag(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm002mveh1], PRM[prmrisaendsrm002mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc02] |= BIT13;
            CIF_VLOG_FC_CAM[fc02] |= BIT0;
        }
        if (ris_aanvraag(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_2], RIS_MOTORVEHICLES, PRM[prmrisastart02mveh2], PRM[prmrisaend02mveh2], SCH[schrisgeencheckopsg]))
        {
            A[fc02] |= BIT10;
            CIF_VLOG_FC_CAM[fc02] |= BIT0;
        }
        if (ris_aanvraag(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_2], RIS_MOTORVEHICLES, PRM[prmrisastartsrm002mveh2], PRM[prmrisaendsrm002mveh2], !SCH[schrisgeencheckopsg]))
        {
            A[fc02] |= BIT13;
            CIF_VLOG_FC_CAM[fc02] |= BIT0;
        }
        if (ris_aanvraag(fc03, SYSTEM_ITF1, PRM[prmrislaneid03_1], RIS_MOTORVEHICLES, PRM[prmrisastart03mveh1], PRM[prmrisaend03mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc03] |= BIT10;
            CIF_VLOG_FC_CAM[fc03] |= BIT0;
        }
        if (ris_aanvraag(fc03, SYSTEM_ITF1, PRM[prmrislaneid03_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm003mveh1], PRM[prmrisaendsrm003mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc03] |= BIT13;
            CIF_VLOG_FC_CAM[fc03] |= BIT0;
        }
        if (ris_aanvraag(fc05, SYSTEM_ITF1, PRM[prmrislaneid05_1], RIS_MOTORVEHICLES, PRM[prmrisastart05mveh1], PRM[prmrisaend05mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc05] |= BIT10;
            CIF_VLOG_FC_CAM[fc05] |= BIT0;
        }
        if (ris_aanvraag(fc05, SYSTEM_ITF1, PRM[prmrislaneid05_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm005mveh1], PRM[prmrisaendsrm005mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc05] |= BIT13;
            CIF_VLOG_FC_CAM[fc05] |= BIT0;
        }
        if (ris_aanvraag(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_1], RIS_MOTORVEHICLES, PRM[prmrisastart08mveh1], PRM[prmrisaend08mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc08] |= BIT10;
            CIF_VLOG_FC_CAM[fc08] |= BIT0;
        }
        if (ris_aanvraag(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm008mveh1], PRM[prmrisaendsrm008mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc08] |= BIT13;
            CIF_VLOG_FC_CAM[fc08] |= BIT0;
        }
        if (ris_aanvraag(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_2], RIS_MOTORVEHICLES, PRM[prmrisastart08mveh2], PRM[prmrisaend08mveh2], SCH[schrisgeencheckopsg]))
        {
            A[fc08] |= BIT10;
            CIF_VLOG_FC_CAM[fc08] |= BIT0;
        }
        if (ris_aanvraag(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_2], RIS_MOTORVEHICLES, PRM[prmrisastartsrm008mveh2], PRM[prmrisaendsrm008mveh2], !SCH[schrisgeencheckopsg]))
        {
            A[fc08] |= BIT13;
            CIF_VLOG_FC_CAM[fc08] |= BIT0;
        }
        if (ris_aanvraag(fc09, SYSTEM_ITF1, PRM[prmrislaneid09_1], RIS_MOTORVEHICLES, PRM[prmrisastart09mveh1], PRM[prmrisaend09mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc09] |= BIT10;
            CIF_VLOG_FC_CAM[fc09] |= BIT0;
        }
        if (ris_aanvraag(fc09, SYSTEM_ITF1, PRM[prmrislaneid09_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm009mveh1], PRM[prmrisaendsrm009mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc09] |= BIT13;
            CIF_VLOG_FC_CAM[fc09] |= BIT0;
        }
        if (ris_aanvraag(fc11, SYSTEM_ITF1, PRM[prmrislaneid11_1], RIS_MOTORVEHICLES, PRM[prmrisastart11mveh1], PRM[prmrisaend11mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc11] |= BIT10;
            CIF_VLOG_FC_CAM[fc11] |= BIT0;
        }
        if (ris_aanvraag(fc11, SYSTEM_ITF1, PRM[prmrislaneid11_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm011mveh1], PRM[prmrisaendsrm011mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc11] |= BIT13;
            CIF_VLOG_FC_CAM[fc11] |= BIT0;
        }
        if (ris_aanvraag_heading(fc21, SYSTEM_ITF1, PRM[prmrislaneid21_1], RIS_CYCLIST, PRM[prmrisastart21fts1], PRM[prmrisaend21fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading21_1], PRM[prmrislaneheadingmarge21_1]))
        {
            A[fc21] |= BIT10;
            CIF_VLOG_FC_CAM[fc21] |= BIT0;
        }
        if (ris_aanvraag(fc21, SYSTEM_ITF1, PRM[prmrislaneid21_1], RIS_CYCLIST, PRM[prmrisastartsrm021fts1], PRM[prmrisaendsrm021fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc21] |= BIT13;
            CIF_VLOG_FC_CAM[fc21] |= BIT0;
        }
        if (ris_aanvraag_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_1], RIS_CYCLIST, PRM[prmrisastart22fts1], PRM[prmrisaend22fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_1], PRM[prmrislaneheadingmarge22_1]))
        {
            A[fc22] |= BIT10;
            CIF_VLOG_FC_CAM[fc22] |= BIT0;
        }
        if (ris_aanvraag(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_1], RIS_CYCLIST, PRM[prmrisastartsrm022fts1], PRM[prmrisaendsrm022fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc22] |= BIT13;
            CIF_VLOG_FC_CAM[fc22] |= BIT0;
        }
        if (ris_aanvraag_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_2], RIS_CYCLIST, PRM[prmrisastart22fts2], PRM[prmrisaend22fts2], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_2], PRM[prmrislaneheadingmarge22_2]))
        {
            A[fc22] |= BIT10;
            CIF_VLOG_FC_CAM[fc22] |= BIT0;
        }
        if (ris_aanvraag(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_2], RIS_CYCLIST, PRM[prmrisastartsrm022fts2], PRM[prmrisaendsrm022fts2], !SCH[schrisgeencheckopsg]))
        {
            A[fc22] |= BIT13;
            CIF_VLOG_FC_CAM[fc22] |= BIT0;
        }
        if (ris_aanvraag_heading(fc24, SYSTEM_ITF1, PRM[prmrislaneid24_1], RIS_CYCLIST, PRM[prmrisastart24fts1], PRM[prmrisaend24fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading24_1], PRM[prmrislaneheadingmarge24_1]))
        {
            A[fc24] |= BIT10;
            CIF_VLOG_FC_CAM[fc24] |= BIT0;
        }
        if (ris_aanvraag(fc24, SYSTEM_ITF1, PRM[prmrislaneid24_1], RIS_CYCLIST, PRM[prmrisastartsrm024fts1], PRM[prmrisaendsrm024fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc24] |= BIT13;
            CIF_VLOG_FC_CAM[fc24] |= BIT0;
        }
        if (ris_aanvraag_heading(fc26, SYSTEM_ITF1, PRM[prmrislaneid26_1], RIS_CYCLIST, PRM[prmrisastart26fts1], PRM[prmrisaend26fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading26_1], PRM[prmrislaneheadingmarge26_1]))
        {
            A[fc26] |= BIT10;
            CIF_VLOG_FC_CAM[fc26] |= BIT0;
        }
        if (ris_aanvraag(fc26, SYSTEM_ITF1, PRM[prmrislaneid26_1], RIS_CYCLIST, PRM[prmrisastartsrm026fts1], PRM[prmrisaendsrm026fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc26] |= BIT13;
            CIF_VLOG_FC_CAM[fc26] |= BIT0;
        }
        if (ris_aanvraag_heading(fc28, SYSTEM_ITF1, PRM[prmrislaneid28_1], RIS_CYCLIST, PRM[prmrisastart28fts1], PRM[prmrisaend28fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading28_1], PRM[prmrislaneheadingmarge28_1]))
        {
            A[fc28] |= BIT10;
            CIF_VLOG_FC_CAM[fc28] |= BIT0;
        }
        if (ris_aanvraag(fc28, SYSTEM_ITF1, PRM[prmrislaneid28_1], RIS_CYCLIST, PRM[prmrisastartsrm028fts1], PRM[prmrisaendsrm028fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc28] |= BIT13;
            CIF_VLOG_FC_CAM[fc28] |= BIT0;
        }
        if (ris_aanvraag(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_1], RIS_PEDESTRIAN, PRM[prmrisastart31vtg1], PRM[prmrisaend31vtg1], SCH[schrisgeencheckopsg]))
        {
            A[fc31] |= BIT10;
            CIF_VLOG_FC_CAM[fc31] |= BIT0;
        }
        if (ris_aanvraag(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_1], RIS_PEDESTRIAN, PRM[prmrisastartsrm031vtg1], PRM[prmrisaendsrm031vtg1], !SCH[schrisgeencheckopsg]))
        {
            A[fc31] |= BIT13;
            CIF_VLOG_FC_CAM[fc31] |= BIT0;
        }
        if (ris_aanvraag(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_2], RIS_PEDESTRIAN, PRM[prmrisastart31vtg2], PRM[prmrisaend31vtg2], SCH[schrisgeencheckopsg]))
        {
            A[fc31] |= BIT10;
            CIF_VLOG_FC_CAM[fc31] |= BIT0;
        }
        if (ris_aanvraag(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_2], RIS_PEDESTRIAN, PRM[prmrisastartsrm031vtg2], PRM[prmrisaendsrm031vtg2], !SCH[schrisgeencheckopsg]))
        {
            A[fc31] |= BIT13;
            CIF_VLOG_FC_CAM[fc31] |= BIT0;
        }
        if (ris_aanvraag(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_1], RIS_PEDESTRIAN, PRM[prmrisastart32vtg1], PRM[prmrisaend32vtg1], SCH[schrisgeencheckopsg]))
        {
            A[fc32] |= BIT10;
            CIF_VLOG_FC_CAM[fc32] |= BIT0;
        }
        if (ris_aanvraag(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_1], RIS_PEDESTRIAN, PRM[prmrisastartsrm032vtg1], PRM[prmrisaendsrm032vtg1], !SCH[schrisgeencheckopsg]))
        {
            A[fc32] |= BIT13;
            CIF_VLOG_FC_CAM[fc32] |= BIT0;
        }
        if (ris_aanvraag(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_2], RIS_PEDESTRIAN, PRM[prmrisastart32vtg2], PRM[prmrisaend32vtg2], SCH[schrisgeencheckopsg]))
        {
            A[fc32] |= BIT10;
            CIF_VLOG_FC_CAM[fc32] |= BIT0;
        }
        if (ris_aanvraag(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_2], RIS_PEDESTRIAN, PRM[prmrisastartsrm032vtg2], PRM[prmrisaendsrm032vtg2], !SCH[schrisgeencheckopsg]))
        {
            A[fc32] |= BIT13;
            CIF_VLOG_FC_CAM[fc32] |= BIT0;
        }
        if (ris_aanvraag(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_1], RIS_PEDESTRIAN, PRM[prmrisastart33vtg1], PRM[prmrisaend33vtg1], SCH[schrisgeencheckopsg]))
        {
            A[fc33] |= BIT10;
            CIF_VLOG_FC_CAM[fc33] |= BIT0;
        }
        if (ris_aanvraag(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_1], RIS_PEDESTRIAN, PRM[prmrisastartsrm033vtg1], PRM[prmrisaendsrm033vtg1], !SCH[schrisgeencheckopsg]))
        {
            A[fc33] |= BIT13;
            CIF_VLOG_FC_CAM[fc33] |= BIT0;
        }
        if (ris_aanvraag(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_2], RIS_PEDESTRIAN, PRM[prmrisastart33vtg2], PRM[prmrisaend33vtg2], SCH[schrisgeencheckopsg]))
        {
            A[fc33] |= BIT10;
            CIF_VLOG_FC_CAM[fc33] |= BIT0;
        }
        if (ris_aanvraag(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_2], RIS_PEDESTRIAN, PRM[prmrisastartsrm033vtg2], PRM[prmrisaendsrm033vtg2], !SCH[schrisgeencheckopsg]))
        {
            A[fc33] |= BIT13;
            CIF_VLOG_FC_CAM[fc33] |= BIT0;
        }
        if (ris_aanvraag(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_1], RIS_PEDESTRIAN, PRM[prmrisastart34vtg1], PRM[prmrisaend34vtg1], SCH[schrisgeencheckopsg]))
        {
            A[fc34] |= BIT10;
            CIF_VLOG_FC_CAM[fc34] |= BIT0;
        }
        if (ris_aanvraag(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_1], RIS_PEDESTRIAN, PRM[prmrisastartsrm034vtg1], PRM[prmrisaendsrm034vtg1], !SCH[schrisgeencheckopsg]))
        {
            A[fc34] |= BIT13;
            CIF_VLOG_FC_CAM[fc34] |= BIT0;
        }
        if (ris_aanvraag(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_2], RIS_PEDESTRIAN, PRM[prmrisastart34vtg2], PRM[prmrisaend34vtg2], SCH[schrisgeencheckopsg]))
        {
            A[fc34] |= BIT10;
            CIF_VLOG_FC_CAM[fc34] |= BIT0;
        }
        if (ris_aanvraag(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_2], RIS_PEDESTRIAN, PRM[prmrisastartsrm034vtg2], PRM[prmrisaendsrm034vtg2], !SCH[schrisgeencheckopsg]))
        {
            A[fc34] |= BIT13;
            CIF_VLOG_FC_CAM[fc34] |= BIT0;
        }
        if (ris_aanvraag(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_1], RIS_PEDESTRIAN, PRM[prmrisastart38vtg1], PRM[prmrisaend38vtg1], SCH[schrisgeencheckopsg]))
        {
            A[fc38] |= BIT10;
            CIF_VLOG_FC_CAM[fc38] |= BIT0;
        }
        if (ris_aanvraag(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_1], RIS_PEDESTRIAN, PRM[prmrisastartsrm038vtg1], PRM[prmrisaendsrm038vtg1], !SCH[schrisgeencheckopsg]))
        {
            A[fc38] |= BIT13;
            CIF_VLOG_FC_CAM[fc38] |= BIT0;
        }
        if (ris_aanvraag(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_2], RIS_PEDESTRIAN, PRM[prmrisastart38vtg2], PRM[prmrisaend38vtg2], SCH[schrisgeencheckopsg]))
        {
            A[fc38] |= BIT10;
            CIF_VLOG_FC_CAM[fc38] |= BIT0;
        }
        if (ris_aanvraag(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_2], RIS_PEDESTRIAN, PRM[prmrisastartsrm038vtg2], PRM[prmrisaendsrm038vtg2], !SCH[schrisgeencheckopsg]))
        {
            A[fc38] |= BIT13;
            CIF_VLOG_FC_CAM[fc38] |= BIT0;
        }
        if (ris_aanvraag(fc61, SYSTEM_ITF1, PRM[prmrislaneid61_1], RIS_MOTORVEHICLES, PRM[prmrisastart61mveh1], PRM[prmrisaend61mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc61] |= BIT10;
            CIF_VLOG_FC_CAM[fc61] |= BIT0;
        }
        if (ris_aanvraag(fc61, SYSTEM_ITF1, PRM[prmrislaneid61_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm061mveh1], PRM[prmrisaendsrm061mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc61] |= BIT13;
            CIF_VLOG_FC_CAM[fc61] |= BIT0;
        }
        if (ris_aanvraag(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_1], RIS_MOTORVEHICLES, PRM[prmrisastart62mveh1], PRM[prmrisaend62mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc62] |= BIT10;
            CIF_VLOG_FC_CAM[fc62] |= BIT0;
        }
        if (ris_aanvraag(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm062mveh1], PRM[prmrisaendsrm062mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc62] |= BIT13;
            CIF_VLOG_FC_CAM[fc62] |= BIT0;
        }
        if (ris_aanvraag(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_2], RIS_MOTORVEHICLES, PRM[prmrisastart62mveh2], PRM[prmrisaend62mveh2], SCH[schrisgeencheckopsg]))
        {
            A[fc62] |= BIT10;
            CIF_VLOG_FC_CAM[fc62] |= BIT0;
        }
        if (ris_aanvraag(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_2], RIS_MOTORVEHICLES, PRM[prmrisastartsrm062mveh2], PRM[prmrisaendsrm062mveh2], !SCH[schrisgeencheckopsg]))
        {
            A[fc62] |= BIT13;
            CIF_VLOG_FC_CAM[fc62] |= BIT0;
        }
        if (ris_aanvraag(fc84, SYSTEM_ITF1, PRM[prmrislaneid84_1], RIS_CYCLIST, PRM[prmrisastart84fts1], PRM[prmrisaend84fts1], SCH[schrisgeencheckopsg]))
        {
            A[fc84] |= BIT10;
            CIF_VLOG_FC_CAM[fc84] |= BIT0;
        }
        if (ris_aanvraag(fc84, SYSTEM_ITF1, PRM[prmrislaneid84_1], RIS_CYCLIST, PRM[prmrisastartsrm084fts1], PRM[prmrisaendsrm084fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc84] |= BIT13;
            CIF_VLOG_FC_CAM[fc84] |= BIT0;
        }
        if (ris_aanvraag(fc82, SYSTEM_ITF1, PRM[prmrislaneid82_1], RIS_CYCLIST, PRM[prmrisastart82fts1], PRM[prmrisaend82fts1], SCH[schrisgeencheckopsg]))
        {
            A[fc82] |= BIT10;
            CIF_VLOG_FC_CAM[fc82] |= BIT0;
        }
        if (ris_aanvraag(fc82, SYSTEM_ITF1, PRM[prmrislaneid82_1], RIS_CYCLIST, PRM[prmrisastartsrm082fts1], PRM[prmrisaendsrm082fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc82] |= BIT13;
            CIF_VLOG_FC_CAM[fc82] |= BIT0;
        }
        if (ris_aanvraag(fc81, SYSTEM_ITF1, PRM[prmrislaneid81_1], RIS_CYCLIST, PRM[prmrisastart81fts1], PRM[prmrisaend81fts1], SCH[schrisgeencheckopsg]))
        {
            A[fc81] |= BIT10;
            CIF_VLOG_FC_CAM[fc81] |= BIT0;
        }
        if (ris_aanvraag(fc81, SYSTEM_ITF1, PRM[prmrislaneid81_1], RIS_CYCLIST, PRM[prmrisastartsrm081fts1], PRM[prmrisaendsrm081fts1], !SCH[schrisgeencheckopsg]))
        {
            A[fc81] |= BIT13;
            CIF_VLOG_FC_CAM[fc81] |= BIT0;
        }
        if (ris_aanvraag(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_2], RIS_MOTORVEHICLES, PRM[prmrisastart68mveh2], PRM[prmrisaend68mveh2], SCH[schrisgeencheckopsg]))
        {
            A[fc68] |= BIT10;
            CIF_VLOG_FC_CAM[fc68] |= BIT0;
        }
        if (ris_aanvraag(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_2], RIS_MOTORVEHICLES, PRM[prmrisastartsrm068mveh2], PRM[prmrisaendsrm068mveh2], !SCH[schrisgeencheckopsg]))
        {
            A[fc68] |= BIT13;
            CIF_VLOG_FC_CAM[fc68] |= BIT0;
        }
        if (ris_aanvraag(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_1], RIS_MOTORVEHICLES, PRM[prmrisastart68mveh1], PRM[prmrisaend68mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc68] |= BIT10;
            CIF_VLOG_FC_CAM[fc68] |= BIT0;
        }
        if (ris_aanvraag(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm068mveh1], PRM[prmrisaendsrm068mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc68] |= BIT13;
            CIF_VLOG_FC_CAM[fc68] |= BIT0;
        }
        if (ris_aanvraag(fc67, SYSTEM_ITF1, PRM[prmrislaneid67_1], RIS_MOTORVEHICLES, PRM[prmrisastart67mveh1], PRM[prmrisaend67mveh1], SCH[schrisgeencheckopsg]))
        {
            A[fc67] |= BIT10;
            CIF_VLOG_FC_CAM[fc67] |= BIT0;
        }
        if (ris_aanvraag(fc67, SYSTEM_ITF1, PRM[prmrislaneid67_1], RIS_MOTORVEHICLES, PRM[prmrisastartsrm067mveh1], PRM[prmrisaendsrm067mveh1], !SCH[schrisgeencheckopsg]))
        {
            A[fc67] |= BIT13;
            CIF_VLOG_FC_CAM[fc67] |= BIT0;
        }
    /* aanvragen RIS schakelbaar, 1 schakelaar voor het schakelen van alle aanvragen */
    if (!SCH[schrisaanvraag])
    {
        for (fc = 0; fc < FCMAX; ++fc)
        {
            A[fc] &= ~(BIT10|BIT13);
        }
    }

        #if defined RIS_SSM && !defined NO_PRIO
            /* Ris PRIO: verstuur SSM */
            ris_srm_put_signalgroup(fc02, PRM[prmrisapproachid02], PRM[prmrisrole02risov], PRM[prmrissubrole02risov], NG, NG);
            ris_srm_put_signalgroup(fc02, PRM[prmrisapproachid02], PRM[prmrisrole02risvrw], PRM[prmrissubrole02risvrw], NG, NG);
            ris_srm_put_signalgroup(fc03, PRM[prmrisapproachid03], PRM[prmrisrole03risov], PRM[prmrissubrole03risov], NG, NG);
            ris_srm_put_signalgroup(fc03, PRM[prmrisapproachid03], PRM[prmrisrole03risvrw], PRM[prmrissubrole03risvrw], NG, NG);
            ris_srm_put_signalgroup(fc05, PRM[prmrisapproachid05], PRM[prmrisrole05risov], PRM[prmrissubrole05risov], NG, NG);
            ris_srm_put_signalgroup(fc05, PRM[prmrisapproachid05], PRM[prmrisrole05risvrw], PRM[prmrissubrole05risvrw], NG, NG);
            ris_srm_put_signalgroup(fc08, PRM[prmrisapproachid08], PRM[prmrisrole08risov], PRM[prmrissubrole08risov], NG, NG);
            ris_srm_put_signalgroup(fc08, PRM[prmrisapproachid08], PRM[prmrisrole08risvrw], PRM[prmrissubrole08risvrw], NG, NG);
            ris_srm_put_signalgroup(fc09, PRM[prmrisapproachid09], PRM[prmrisrole09risov], PRM[prmrissubrole09risov], NG, NG);
            ris_srm_put_signalgroup(fc09, PRM[prmrisapproachid09], PRM[prmrisrole09risvrw], PRM[prmrissubrole09risvrw], NG, NG);
            ris_srm_put_signalgroup(fc11, PRM[prmrisapproachid11], PRM[prmrisrole11risov], PRM[prmrissubrole11risov], NG, NG);
            ris_srm_put_signalgroup(fc11, PRM[prmrisapproachid11], PRM[prmrisrole11risvrw], PRM[prmrissubrole11risvrw], NG, NG);
            ris_srm_put_signalgroup(fc61, PRM[prmrisapproachid61], PRM[prmrisrole61risov], PRM[prmrissubrole61risov], NG, NG);
            ris_srm_put_signalgroup(fc61, PRM[prmrisapproachid61], PRM[prmrisrole61risvrw], PRM[prmrissubrole61risvrw], NG, NG);
            ris_srm_put_signalgroup(fc62, PRM[prmrisapproachid62], PRM[prmrisrole62risov], PRM[prmrissubrole62risov], NG, NG);
            ris_srm_put_signalgroup(fc62, PRM[prmrisapproachid62], PRM[prmrisrole62risvrw], PRM[prmrissubrole62risvrw], NG, NG);
            ris_srm_put_signalgroup(fc67, PRM[prmrisapproachid67], PRM[prmrisrole67risov], PRM[prmrissubrole67risov], NG, NG);
            ris_srm_put_signalgroup(fc67, PRM[prmrisapproachid67], PRM[prmrisrole67risvrw], PRM[prmrissubrole67risvrw], NG, NG);
            ris_srm_put_signalgroup(fc68, PRM[prmrisapproachid68], PRM[prmrisrole68risov], PRM[prmrissubrole68risov], NG, NG);
            ris_srm_put_signalgroup(fc68, PRM[prmrisapproachid68], PRM[prmrisrole68risvrw], PRM[prmrissubrole68risvrw], NG, NG);
            ris_verstuur_ssm(prioFC02risov, PRM[prmrisgrenspriotype02risov]);
            ris_verstuur_ssm(prioFC02risvrw, PRM[prmrisgrenspriotype02risvrw]);
            ris_verstuur_ssm(prioFC03risov, PRM[prmrisgrenspriotype03risov]);
            ris_verstuur_ssm(prioFC03risvrw, PRM[prmrisgrenspriotype03risvrw]);
            ris_verstuur_ssm(prioFC05risov, PRM[prmrisgrenspriotype05risov]);
            ris_verstuur_ssm(prioFC05risvrw, PRM[prmrisgrenspriotype05risvrw]);
            ris_verstuur_ssm(prioFC08risov, PRM[prmrisgrenspriotype08risov]);
            ris_verstuur_ssm(prioFC08risvrw, PRM[prmrisgrenspriotype08risvrw]);
            ris_verstuur_ssm(prioFC09risov, PRM[prmrisgrenspriotype09risov]);
            ris_verstuur_ssm(prioFC09risvrw, PRM[prmrisgrenspriotype09risvrw]);
            ris_verstuur_ssm(prioFC11risov, PRM[prmrisgrenspriotype11risov]);
            ris_verstuur_ssm(prioFC11risvrw, PRM[prmrisgrenspriotype11risvrw]);
            ris_verstuur_ssm(prioFC61risov, PRM[prmrisgrenspriotype61risov]);
            ris_verstuur_ssm(prioFC61risvrw, PRM[prmrisgrenspriotype61risvrw]);
            ris_verstuur_ssm(prioFC62risov, PRM[prmrisgrenspriotype62risov]);
            ris_verstuur_ssm(prioFC62risvrw, PRM[prmrisgrenspriotype62risvrw]);
            ris_verstuur_ssm(prioFC67risov, PRM[prmrisgrenspriotype67risov]);
            ris_verstuur_ssm(prioFC67risvrw, PRM[prmrisgrenspriotype67risvrw]);
            ris_verstuur_ssm(prioFC68risov, PRM[prmrisgrenspriotype68risov]);
            ris_verstuur_ssm(prioFC68risvrw, PRM[prmrisgrenspriotype68risvrw]);
            ris_verstuur_ssm(hdFC02, PRM[prmrisgrenspriotype02hd]);
            ris_verstuur_ssm(hdFC03, PRM[prmrisgrenspriotype03hd]);
            ris_verstuur_ssm(hdFC05, PRM[prmrisgrenspriotype05hd]);
            ris_verstuur_ssm(hdFC08, PRM[prmrisgrenspriotype08hd]);
            ris_verstuur_ssm(hdFC09, PRM[prmrisgrenspriotype09hd]);
            ris_verstuur_ssm(hdFC11, PRM[prmrisgrenspriotype11hd]);
            ris_verstuur_ssm(hdFC61, PRM[prmrisgrenspriotype61hd]);
            ris_verstuur_ssm(hdFC62, PRM[prmrisgrenspriotype62hd]);
            ris_verstuur_ssm(hdFC67, PRM[prmrisgrenspriotype67hd]);
            ris_verstuur_ssm(hdFC68, PRM[prmrisgrenspriotype68hd]);
        #endif
    #endif

    Aanvragen_Add();
    Aanvragen_halfstar();
}

void BepaalRealisatieTijden(void)
{
    boolv wijziging = TRUE;
    int i;

    /* Bepalen realisatietijden */

    /* Reset */
    for (i = 0; i < FCMAX; ++i)
    {
        Realisatietijd(i, NG, NG);
        Realisatietijd_min(i, NG, NG);
        REALTIJD_max[i] = REALTIJD_uncorrected[i];
    }

    /* Inlopen voetgangers */
    Inlopen_Los2(fc32, fc31, hmadk32a, hmadk32b, hmadk31b, hmadk31a, hinl32, hinl31, hlos32, hlos31, SCH[schlos32_1], SCH[schlos32_2], SCH[schlos31_1], SCH[schlos31_2]);
    Inlopen_Los2(fc34, fc33, hmadk34a, hmadk34b, hmadk33b, hmadk33a, hinl34, hinl33, hlos34, hlos33, SCH[schlos34_1], SCH[schlos34_2], SCH[schlos33_1], SCH[schlos33_2]);

    /* Herstarten/afkappen inlooptijd/inrijtijd */
    RT[til3231] = SG[fc32] && H[hinl32]; AT[til3231] = G[fc31];
    RT[til3132] = SG[fc31] && H[hinl31]; AT[til3132] = G[fc32];
    RT[til3433] = SG[fc34] && H[hinl34]; AT[til3433] = G[fc33];
    RT[til3334] = SG[fc33] && H[hinl33]; AT[til3334] = G[fc34];
    RT[tlr2611] = SG[fc11]; AT[tlr2611] = G[fc26];
    RT[tlr6202] = SG[fc02]; AT[tlr6202] = G[fc62];
    RT[tlr6808] = SG[fc08]; AT[tlr6808] = G[fc68];
    RT[tlr6811] = SG[fc11]; AT[tlr6811] = G[fc68];
    RT[tlr2122] = SG[fc22]; AT[tlr2122] = G[fc21];
    RT[tlr8182] = SG[fc82]; AT[tlr8182] = G[fc81];

    /* correctie realisatietijd berekenen (max. 100 iteraties) */
    for (i = 0; i < 100; ++i)
    {
        wijziging = FALSE;

        /* Gelijkstart / voorstart / late release */
        wijziging |= Corr_Pls(fc22, fc05, T_max[tvs2205], !C[cvchd05]);
        wijziging |= Corr_Pls(fc32, fc05, T_max[tvs3205], !C[cvchd05]);
        wijziging |= Corr_Min(fc26, fc11, T_max[tlr2611], !C[cvchd11]);
        wijziging |= Corr_Min_nl(fc62, fc02, T_max[tlr6202], TRUE);
        wijziging |= Corr_Min_nl(fc68, fc08, T_max[tlr6808], TRUE);
        wijziging |= Corr_Min_nl(fc68, fc11, T_max[tlr6811], TRUE);
        wijziging |= Corr_Min_nl(fc21, fc22, T_max[tlr2122], TRUE);
        wijziging |= Corr_Min_nl(fc81, fc82, T_max[tlr8182], TRUE);
        if (SCH[schgs2232]) wijziging |= Corr_Gel(fc22, fc32, TRUE);
        if (SCH[schgs2434]) wijziging |= Corr_Gel(fc24, fc34, TRUE);
        if (SCH[schgs2484]) wijziging |= Corr_Gel(fc24, fc84, TRUE);
        wijziging |= Corr_Gel(fc28, fc38, TRUE);
        if (SCH[schgs3384]) wijziging |= Corr_Gel(fc33, fc84, TRUE);

        /* Inlopen */
        wijziging |= VTG2_Real_Los(fc32, fc31, T_max[til3231], T_max[til3132], hinl32, hinl31, hlos32, hlos31, FALSE);
        wijziging |= VTG2_Real_Los(fc34, fc33, T_max[til3433], T_max[til3334], hinl34, hinl33, hlos34, hlos33, FALSE);

        /* Fictieve ontruiming */
        wijziging |= Corr_FOT(fc05, fc22, tfo0522, 0, TRUE);
        wijziging |= Corr_FOT(fc05, fc32, tfo0532, 0, TRUE);
        wijziging |= Corr_FOT(fc11, fc26, tfo1126, T_max[tlr2611], TRUE);

        wijziging |= CorrectieRealisatieTijd_Add();

        if (!wijziging) break;
    }

    /* Realisatie tijd naar geheugenelement */
    for (i = 0; i < FCMAX; ++i)
    {
        Realisatietijd_MM(fc02 + i, mrealtijd02 + i);
        MM[mrealtijdmin02 + i] = REALTIJD_min[fc02 + i];
        MM[mrealtijdmax02 + i] = REALTIJD_max[fc02 + i];
    }
    #if (!defined (AUTOMAAT) && !defined AUTOMAAT_TEST || defined (VISSIM)) && !defined NO_PRINT_REALTIJD
    if (display) {
        xyprintf(92, 6, "REALtijden  min  max ");
        for (i = 0; i < FC_MAX; ++i)
        {
            xyprintf( 92, 7 + i, "fc%3s %4d", FC_code[i], MM[mrealtijd02 + i]);
            xyprintf(103, 7 + i, "%4d",                   MM[mrealtijdmin02 + i]);
            xyprintf(108, 7 + i, "%4d",                   MM[mrealtijdmax02 + i]);
        }
    }
    #endif

    BepaalRealisatieTijden_Add();
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

    NaloopFG(fc02, fc62, tnlfg0262);
    NaloopEG(fc02, fc62, tnleg0262);
    NaloopFGDet(fc02, fc62, tnlfgd0262, d02_1a, d02_1b, END);
    NaloopEGDet(fc02, fc62, tnlegd0262, d02_1a, d02_1b, END);
    NaloopFG(fc08, fc68, tnlfg0868);
    NaloopEG(fc08, fc68, tnleg0868);
    NaloopFGDet(fc08, fc68, tnlfgd0868, d08_1a, d08_1b, END);
    NaloopEGDet(fc08, fc68, tnlegd0868, d08_1a, d08_1b, END);
    NaloopFG(fc11, fc68, tnlfg1168);
    NaloopEG(fc11, fc68, tnleg1168);
    NaloopFGDet(fc11, fc68, tnlfgd1168, d11_1, END);
    NaloopEGDet(fc11, fc68, tnlegd1168, d11_1, END);
    NaloopFG(fc22, fc21, tnlfg2221);
    NaloopEG(fc22, fc21, tnleg2221);
    NaloopFGDet(fc22, fc21, tnlfgd2221, d22_1, END);
    NaloopEGDet(fc22, fc21, tnlegd2221, d22_1, END);
    NaloopVtg(fc31, fc32, tnlsg3132);
    NaloopVtgDet(fc31, fc32, dk31a, hnlak31a, tnlsgd3132);
    NaloopVtg(fc32, fc31, tnlsg3231);
    NaloopVtgDet(fc32, fc31, dk32a, hnlak32a, tnlsgd3231);
    NaloopVtgDet(fc33, fc34, dk33a, hnlak33a, tnlsgd3334);
    NaloopVtgDet(fc34, fc33, dk34a, hnlak34a, tnlsgd3433);
    NaloopFG(fc82, fc81, tnlfg8281);
    NaloopEG(fc82, fc81, tnleg8281);
    NaloopFGDet(fc82, fc81, tnlfgd8281, d82_1, END);
    NaloopEGDet(fc82, fc81, tnlegd8281, d82_1, END);


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

    /* AANROEP EN RAPPOTEREN ROBUGROVER */
    if (IH[hrgvact] != 0)
    {
        int teller = 0;

        TC[teller++] = berekencyclustijd_va_arg(fc03, fc05, fc08, END);
        TC[teller++] = berekencyclustijd_va_arg(fc02, fc09, fc11, END);

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

    /* Seniorengroen (percentage van TFG extra als WG) */
    if (SCH[schsi33]) SeniorenGroen(fc33, dk33a, tdbsiexgrdk33a, dk33b, tdbsiexgrdk33b, prmsiexgrperc33, hsiexgr33, tsiexgr33, tnlsgd3334, END);
    if (SCH[schsi34]) SeniorenGroen(fc34, dk34a, tdbsiexgrdk34a, dk34b, tdbsiexgrdk34b, prmsiexgrperc34, hsiexgr34, tsiexgr34, tnlsgd3433, END);

    /* Bij inlopen, inlopende richting in WG houden t.b.v. eventuele aanvraag naloop in tegenrichting */
    RW[fc32] |= T[til3231] ? BIT2 : 0;
    RW[fc31] |= T[til3132] ? BIT2 : 0;
    RW[fc34] |= T[til3433] ? BIT2 : 0;
    RW[fc33] |= T[til3334] ? BIT2 : 0;

    Maxgroen_Add();
    gk_ControlGK();
    if(CIF_PARM1WIJZPB != CIF_GEEN_PARMWIJZ)
    {
        MM[mwijzpb]= CIF_PARM1WIJZPB; /* indexnummer van gewijzigde max.verlengroentijd of andere gewijzigde parameter uit PARM1 buffer */
        MM[mfci] = set_parm1wijzpb_tvgmax(MM[mperiod], prmvg1_02, itvgmaxprm, aanttvgmaxprm); /* argumenten: actuele periode, index eerste verlenggroen parameter, array van fc met prmvg#_$$ */
    }
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
    if (!IH[hplact])
    {
        if (IH[hfileFile68af]) RW[fc08] &= ~BIT4;
        if (IH[hfileFile68af]) RW[fc11] &= ~BIT4;
    }

    /* Geen wachtstand bij file stroomafwaarts */
    if (!IH[hplact])
    {
        if (IH[hfileFile68af]) WS[fc08] &= ~BIT4;
        if (IH[hfileFile68af]) WS[fc11] &= ~BIT4;
    }

    Wachtgroen_Add();
}
void Meetkriterium(void)
{
#if (defined TDHAMAX)
    int d;
#endif
    int fc;

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
        SCH[schrgvd24_3] &&
        (boolv) RichtingVerlengen(fc24, d24_3, d24_2,
                                 trgrd24_3_d24_2, trgvd24_3_d24_2,
                                 hrgvd24_3_d24_2), (mulv)PRM[prmmkrgd24_3],
                                 (count)END);

    /* Inkomende peloton koppeling KOP02 naar fase 02 */
    /* timer resetten om aanvraag te zetten */
    RT[tpelaKOP02] = IH[hpelinKOP02] && !T[tpelaKOP02];
    /* timer resetten maximale tijd toepassen RW vanaf SG */
    RT[tpelrwmaxKOP02] = SG[fc02];
    /* timer resetten om gebied open te houden */
    RT[tpelstartrwKOP02] = IH[hpelinKOP02] && !T[tpelstartrwKOP02];

    /* zet aanvraag als timer is afgelopen */
    if (ET[tpelaKOP02] && SCH[schpelaKOP02]) A[fc02] |= BIT12;

    /* start vasthoud timer bij einde timer en als de timer nog niet loopt */
    RT[tpelrwKOP02] = ET[tpelstartrwKOP02] && !T[tpelrwKOP02];

    MK[fc02] &= ~BIT12;

    /* zet meetkriterium als de vasthoudperiode loopt */
    if (T[tpelrwKOP02] && SCH[schpelmkKOP02])
    {
        MK[fc02] |= BIT2 | BIT12;
    }

    /* houd groen vast als de vasthoudperiode loopt,
       de maximale wachttijd nog niet bereikt is,
       tenzij de timer al loopt (besluit wordt niet teruggenomen) */
    if (T[tpelrwKOP02] && SCH[schpelrwKOP02] && T[tpelrwmaxKOP02] && !IH[hpeltegenhKOP02])
    {
        RW[fc02] |= BIT12;
        PP[fc02] |= BIT12;
        PAR[fc02] |= BIT12;
    }
    else
    {
        PP[fc02] &= ~BIT12;
    }
    if (!(T[tpelrwKOP02] && SCH[schpelrwKOP02]))
    {
        RW[fc02] &= ~BIT12;
    }

    /* School ingreep: reset BITs */
    RW[fc33] &= ~BIT8;
    RW[fc34] &= ~BIT8;

    /* School ingreep: set RW BIT8 */
    if (SCH[schschoolingreep33] && H[hschoolingreepdk33a] && T[tschoolingreepmaxg33]) RW[fc33] |= BIT8;
    if (SCH[schschoolingreep33] && H[hschoolingreepdk33b] && T[tschoolingreepmaxg33]) RW[fc33] |= BIT8;
    if (SCH[schschoolingreep34] && H[hschoolingreepdk34a] && T[tschoolingreepmaxg34]) RW[fc34] |= BIT8;
    if (SCH[schschoolingreep34] && H[hschoolingreepdk34b] && T[tschoolingreepmaxg34]) RW[fc34] |= BIT8;

    #ifndef NO_RIS
        for (fc = 0; fc < FCMAX; ++fc)
        {
            MK[fc] &= ~(BIT10|BIT13);
            CIF_VLOG_FC_CAM[fc] &= ~BIT1;
        }
        if (ris_verlengen(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_1], RIS_MOTORVEHICLES, PRM[prmrisvstart02mveh1], PRM[prmrisvend02mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc02] |= BIT10;
            CIF_VLOG_FC_CAM[fc02] |= BIT1;
        }
        if (ris_verlengen(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm002mveh1], PRM[prmrisvendsrm002mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc02] |= BIT13;
            CIF_VLOG_FC_CAM[fc02] |= BIT1;
        }
        if (ris_verlengen(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_2], RIS_MOTORVEHICLES, PRM[prmrisvstart02mveh2], PRM[prmrisvend02mveh2], SCH[schrisgeencheckopsg]))
        {
            MK[fc02] |= BIT10;
            CIF_VLOG_FC_CAM[fc02] |= BIT1;
        }
        if (ris_verlengen(fc02, SYSTEM_ITF1, PRM[prmrislaneid02_2], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm002mveh2], PRM[prmrisvendsrm002mveh2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc02] |= BIT13;
            CIF_VLOG_FC_CAM[fc02] |= BIT1;
        }
        if (ris_verlengen(fc03, SYSTEM_ITF1, PRM[prmrislaneid03_1], RIS_MOTORVEHICLES, PRM[prmrisvstart03mveh1], PRM[prmrisvend03mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc03] |= BIT10;
            CIF_VLOG_FC_CAM[fc03] |= BIT1;
        }
        if (ris_verlengen(fc03, SYSTEM_ITF1, PRM[prmrislaneid03_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm003mveh1], PRM[prmrisvendsrm003mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc03] |= BIT13;
            CIF_VLOG_FC_CAM[fc03] |= BIT1;
        }
        if (ris_verlengen(fc05, SYSTEM_ITF1, PRM[prmrislaneid05_1], RIS_MOTORVEHICLES, PRM[prmrisvstart05mveh1], PRM[prmrisvend05mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc05] |= BIT10;
            CIF_VLOG_FC_CAM[fc05] |= BIT1;
        }
        if (ris_verlengen(fc05, SYSTEM_ITF1, PRM[prmrislaneid05_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm005mveh1], PRM[prmrisvendsrm005mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc05] |= BIT13;
            CIF_VLOG_FC_CAM[fc05] |= BIT1;
        }
        if (ris_verlengen(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_1], RIS_MOTORVEHICLES, PRM[prmrisvstart08mveh1], PRM[prmrisvend08mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc08] |= BIT10;
            CIF_VLOG_FC_CAM[fc08] |= BIT1;
        }
        if (ris_verlengen(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm008mveh1], PRM[prmrisvendsrm008mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc08] |= BIT13;
            CIF_VLOG_FC_CAM[fc08] |= BIT1;
        }
        if (ris_verlengen(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_2], RIS_MOTORVEHICLES, PRM[prmrisvstart08mveh2], PRM[prmrisvend08mveh2], SCH[schrisgeencheckopsg]))
        {
            MK[fc08] |= BIT10;
            CIF_VLOG_FC_CAM[fc08] |= BIT1;
        }
        if (ris_verlengen(fc08, SYSTEM_ITF1, PRM[prmrislaneid08_2], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm008mveh2], PRM[prmrisvendsrm008mveh2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc08] |= BIT13;
            CIF_VLOG_FC_CAM[fc08] |= BIT1;
        }
        if (ris_verlengen(fc09, SYSTEM_ITF1, PRM[prmrislaneid09_1], RIS_MOTORVEHICLES, PRM[prmrisvstart09mveh1], PRM[prmrisvend09mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc09] |= BIT10;
            CIF_VLOG_FC_CAM[fc09] |= BIT1;
        }
        if (ris_verlengen(fc09, SYSTEM_ITF1, PRM[prmrislaneid09_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm009mveh1], PRM[prmrisvendsrm009mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc09] |= BIT13;
            CIF_VLOG_FC_CAM[fc09] |= BIT1;
        }
        if (ris_verlengen(fc11, SYSTEM_ITF1, PRM[prmrislaneid11_1], RIS_MOTORVEHICLES, PRM[prmrisvstart11mveh1], PRM[prmrisvend11mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc11] |= BIT10;
            CIF_VLOG_FC_CAM[fc11] |= BIT1;
        }
        if (ris_verlengen(fc11, SYSTEM_ITF1, PRM[prmrislaneid11_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm011mveh1], PRM[prmrisvendsrm011mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc11] |= BIT13;
            CIF_VLOG_FC_CAM[fc11] |= BIT1;
        }
        if (ris_verlengen_heading(fc21, SYSTEM_ITF1, PRM[prmrislaneid21_1], RIS_CYCLIST, PRM[prmrisvstart21fts1], PRM[prmrisvend21fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading21_1], PRM[prmrislaneheadingmarge21_1]))
        {
            MK[fc21] |= BIT10;
            CIF_VLOG_FC_CAM[fc21] |= BIT1;
        }
        if (ris_verlengen(fc21, SYSTEM_ITF1, PRM[prmrislaneid21_1], RIS_CYCLIST, PRM[prmrisvstartsrm021fts1], PRM[prmrisvendsrm021fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc21] |= BIT13;
            CIF_VLOG_FC_CAM[fc21] |= BIT1;
        }
        if (ris_verlengen_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_1], RIS_CYCLIST, PRM[prmrisvstart22fts1], PRM[prmrisvend22fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_1], PRM[prmrislaneheadingmarge22_1]))
        {
            MK[fc22] |= BIT10;
            CIF_VLOG_FC_CAM[fc22] |= BIT1;
        }
        if (ris_verlengen(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_1], RIS_CYCLIST, PRM[prmrisvstartsrm022fts1], PRM[prmrisvendsrm022fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc22] |= BIT13;
            CIF_VLOG_FC_CAM[fc22] |= BIT1;
        }
        if (ris_verlengen_heading(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_2], RIS_CYCLIST, PRM[prmrisvstart22fts2], PRM[prmrisvend22fts2], SCH[schrisgeencheckopsg], PRM[prmrislaneheading22_2], PRM[prmrislaneheadingmarge22_2]))
        {
            MK[fc22] |= BIT10;
            CIF_VLOG_FC_CAM[fc22] |= BIT1;
        }
        if (ris_verlengen(fc22, SYSTEM_ITF1, PRM[prmrislaneid22_2], RIS_CYCLIST, PRM[prmrisvstartsrm022fts2], PRM[prmrisvendsrm022fts2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc22] |= BIT13;
            CIF_VLOG_FC_CAM[fc22] |= BIT1;
        }
        if (ris_verlengen_heading(fc24, SYSTEM_ITF1, PRM[prmrislaneid24_1], RIS_CYCLIST, PRM[prmrisvstart24fts1], PRM[prmrisvend24fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading24_1], PRM[prmrislaneheadingmarge24_1]))
        {
            MK[fc24] |= BIT10;
            CIF_VLOG_FC_CAM[fc24] |= BIT1;
        }
        if (ris_verlengen(fc24, SYSTEM_ITF1, PRM[prmrislaneid24_1], RIS_CYCLIST, PRM[prmrisvstartsrm024fts1], PRM[prmrisvendsrm024fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc24] |= BIT13;
            CIF_VLOG_FC_CAM[fc24] |= BIT1;
        }
        if (ris_verlengen_heading(fc26, SYSTEM_ITF1, PRM[prmrislaneid26_1], RIS_CYCLIST, PRM[prmrisvstart26fts1], PRM[prmrisvend26fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading26_1], PRM[prmrislaneheadingmarge26_1]))
        {
            MK[fc26] |= BIT10;
            CIF_VLOG_FC_CAM[fc26] |= BIT1;
        }
        if (ris_verlengen(fc26, SYSTEM_ITF1, PRM[prmrislaneid26_1], RIS_CYCLIST, PRM[prmrisvstartsrm026fts1], PRM[prmrisvendsrm026fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc26] |= BIT13;
            CIF_VLOG_FC_CAM[fc26] |= BIT1;
        }
        if (ris_verlengen_heading(fc28, SYSTEM_ITF1, PRM[prmrislaneid28_1], RIS_CYCLIST, PRM[prmrisvstart28fts1], PRM[prmrisvend28fts1], SCH[schrisgeencheckopsg], PRM[prmrislaneheading28_1], PRM[prmrislaneheadingmarge28_1]))
        {
            MK[fc28] |= BIT10;
            CIF_VLOG_FC_CAM[fc28] |= BIT1;
        }
        if (ris_verlengen(fc28, SYSTEM_ITF1, PRM[prmrislaneid28_1], RIS_CYCLIST, PRM[prmrisvstartsrm028fts1], PRM[prmrisvendsrm028fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc28] |= BIT13;
            CIF_VLOG_FC_CAM[fc28] |= BIT1;
        }
        if (ris_verlengen(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_1], RIS_PEDESTRIAN, PRM[prmrisvstart31vtg1], PRM[prmrisvend31vtg1], SCH[schrisgeencheckopsg]))
        {
            MK[fc31] |= BIT10;
            CIF_VLOG_FC_CAM[fc31] |= BIT1;
        }
        if (ris_verlengen(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_1], RIS_PEDESTRIAN, PRM[prmrisvstartsrm031vtg1], PRM[prmrisvendsrm031vtg1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc31] |= BIT13;
            CIF_VLOG_FC_CAM[fc31] |= BIT1;
        }
        if (ris_verlengen(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_2], RIS_PEDESTRIAN, PRM[prmrisvstart31vtg2], PRM[prmrisvend31vtg2], SCH[schrisgeencheckopsg]))
        {
            MK[fc31] |= BIT10;
            CIF_VLOG_FC_CAM[fc31] |= BIT1;
        }
        if (ris_verlengen(fc31, SYSTEM_ITF1, PRM[prmrislaneid31_2], RIS_PEDESTRIAN, PRM[prmrisvstartsrm031vtg2], PRM[prmrisvendsrm031vtg2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc31] |= BIT13;
            CIF_VLOG_FC_CAM[fc31] |= BIT1;
        }
        if (ris_verlengen(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_1], RIS_PEDESTRIAN, PRM[prmrisvstart32vtg1], PRM[prmrisvend32vtg1], SCH[schrisgeencheckopsg]))
        {
            MK[fc32] |= BIT10;
            CIF_VLOG_FC_CAM[fc32] |= BIT1;
        }
        if (ris_verlengen(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_1], RIS_PEDESTRIAN, PRM[prmrisvstartsrm032vtg1], PRM[prmrisvendsrm032vtg1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc32] |= BIT13;
            CIF_VLOG_FC_CAM[fc32] |= BIT1;
        }
        if (ris_verlengen(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_2], RIS_PEDESTRIAN, PRM[prmrisvstart32vtg2], PRM[prmrisvend32vtg2], SCH[schrisgeencheckopsg]))
        {
            MK[fc32] |= BIT10;
            CIF_VLOG_FC_CAM[fc32] |= BIT1;
        }
        if (ris_verlengen(fc32, SYSTEM_ITF1, PRM[prmrislaneid32_2], RIS_PEDESTRIAN, PRM[prmrisvstartsrm032vtg2], PRM[prmrisvendsrm032vtg2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc32] |= BIT13;
            CIF_VLOG_FC_CAM[fc32] |= BIT1;
        }
        if (ris_verlengen(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_1], RIS_PEDESTRIAN, PRM[prmrisvstart33vtg1], PRM[prmrisvend33vtg1], SCH[schrisgeencheckopsg]))
        {
            MK[fc33] |= BIT10;
            CIF_VLOG_FC_CAM[fc33] |= BIT1;
        }
        if (ris_verlengen(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_1], RIS_PEDESTRIAN, PRM[prmrisvstartsrm033vtg1], PRM[prmrisvendsrm033vtg1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc33] |= BIT13;
            CIF_VLOG_FC_CAM[fc33] |= BIT1;
        }
        if (ris_verlengen(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_2], RIS_PEDESTRIAN, PRM[prmrisvstart33vtg2], PRM[prmrisvend33vtg2], SCH[schrisgeencheckopsg]))
        {
            MK[fc33] |= BIT10;
            CIF_VLOG_FC_CAM[fc33] |= BIT1;
        }
        if (ris_verlengen(fc33, SYSTEM_ITF1, PRM[prmrislaneid33_2], RIS_PEDESTRIAN, PRM[prmrisvstartsrm033vtg2], PRM[prmrisvendsrm033vtg2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc33] |= BIT13;
            CIF_VLOG_FC_CAM[fc33] |= BIT1;
        }
        if (ris_verlengen(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_1], RIS_PEDESTRIAN, PRM[prmrisvstart34vtg1], PRM[prmrisvend34vtg1], SCH[schrisgeencheckopsg]))
        {
            MK[fc34] |= BIT10;
            CIF_VLOG_FC_CAM[fc34] |= BIT1;
        }
        if (ris_verlengen(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_1], RIS_PEDESTRIAN, PRM[prmrisvstartsrm034vtg1], PRM[prmrisvendsrm034vtg1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc34] |= BIT13;
            CIF_VLOG_FC_CAM[fc34] |= BIT1;
        }
        if (ris_verlengen(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_2], RIS_PEDESTRIAN, PRM[prmrisvstart34vtg2], PRM[prmrisvend34vtg2], SCH[schrisgeencheckopsg]))
        {
            MK[fc34] |= BIT10;
            CIF_VLOG_FC_CAM[fc34] |= BIT1;
        }
        if (ris_verlengen(fc34, SYSTEM_ITF1, PRM[prmrislaneid34_2], RIS_PEDESTRIAN, PRM[prmrisvstartsrm034vtg2], PRM[prmrisvendsrm034vtg2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc34] |= BIT13;
            CIF_VLOG_FC_CAM[fc34] |= BIT1;
        }
        if (ris_verlengen(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_1], RIS_PEDESTRIAN, PRM[prmrisvstart38vtg1], PRM[prmrisvend38vtg1], SCH[schrisgeencheckopsg]))
        {
            MK[fc38] |= BIT10;
            CIF_VLOG_FC_CAM[fc38] |= BIT1;
        }
        if (ris_verlengen(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_1], RIS_PEDESTRIAN, PRM[prmrisvstartsrm038vtg1], PRM[prmrisvendsrm038vtg1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc38] |= BIT13;
            CIF_VLOG_FC_CAM[fc38] |= BIT1;
        }
        if (ris_verlengen(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_2], RIS_PEDESTRIAN, PRM[prmrisvstart38vtg2], PRM[prmrisvend38vtg2], SCH[schrisgeencheckopsg]))
        {
            MK[fc38] |= BIT10;
            CIF_VLOG_FC_CAM[fc38] |= BIT1;
        }
        if (ris_verlengen(fc38, SYSTEM_ITF1, PRM[prmrislaneid38_2], RIS_PEDESTRIAN, PRM[prmrisvstartsrm038vtg2], PRM[prmrisvendsrm038vtg2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc38] |= BIT13;
            CIF_VLOG_FC_CAM[fc38] |= BIT1;
        }
        if (ris_verlengen(fc61, SYSTEM_ITF1, PRM[prmrislaneid61_1], RIS_MOTORVEHICLES, PRM[prmrisvstart61mveh1], PRM[prmrisvend61mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc61] |= BIT10;
            CIF_VLOG_FC_CAM[fc61] |= BIT1;
        }
        if (ris_verlengen(fc61, SYSTEM_ITF1, PRM[prmrislaneid61_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm061mveh1], PRM[prmrisvendsrm061mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc61] |= BIT13;
            CIF_VLOG_FC_CAM[fc61] |= BIT1;
        }
        if (ris_verlengen(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_1], RIS_MOTORVEHICLES, PRM[prmrisvstart62mveh1], PRM[prmrisvend62mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc62] |= BIT10;
            CIF_VLOG_FC_CAM[fc62] |= BIT1;
        }
        if (ris_verlengen(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm062mveh1], PRM[prmrisvendsrm062mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc62] |= BIT13;
            CIF_VLOG_FC_CAM[fc62] |= BIT1;
        }
        if (ris_verlengen(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_2], RIS_MOTORVEHICLES, PRM[prmrisvstart62mveh2], PRM[prmrisvend62mveh2], SCH[schrisgeencheckopsg]))
        {
            MK[fc62] |= BIT10;
            CIF_VLOG_FC_CAM[fc62] |= BIT1;
        }
        if (ris_verlengen(fc62, SYSTEM_ITF1, PRM[prmrislaneid62_2], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm062mveh2], PRM[prmrisvendsrm062mveh2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc62] |= BIT13;
            CIF_VLOG_FC_CAM[fc62] |= BIT1;
        }
        if (ris_verlengen(fc84, SYSTEM_ITF1, PRM[prmrislaneid84_1], RIS_CYCLIST, PRM[prmrisvstart84fts1], PRM[prmrisvend84fts1], SCH[schrisgeencheckopsg]))
        {
            MK[fc84] |= BIT10;
            CIF_VLOG_FC_CAM[fc84] |= BIT1;
        }
        if (ris_verlengen(fc84, SYSTEM_ITF1, PRM[prmrislaneid84_1], RIS_CYCLIST, PRM[prmrisvstartsrm084fts1], PRM[prmrisvendsrm084fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc84] |= BIT13;
            CIF_VLOG_FC_CAM[fc84] |= BIT1;
        }
        if (ris_verlengen(fc82, SYSTEM_ITF1, PRM[prmrislaneid82_1], RIS_CYCLIST, PRM[prmrisvstart82fts1], PRM[prmrisvend82fts1], SCH[schrisgeencheckopsg]))
        {
            MK[fc82] |= BIT10;
            CIF_VLOG_FC_CAM[fc82] |= BIT1;
        }
        if (ris_verlengen(fc82, SYSTEM_ITF1, PRM[prmrislaneid82_1], RIS_CYCLIST, PRM[prmrisvstartsrm082fts1], PRM[prmrisvendsrm082fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc82] |= BIT13;
            CIF_VLOG_FC_CAM[fc82] |= BIT1;
        }
        if (ris_verlengen(fc81, SYSTEM_ITF1, PRM[prmrislaneid81_1], RIS_CYCLIST, PRM[prmrisvstart81fts1], PRM[prmrisvend81fts1], SCH[schrisgeencheckopsg]))
        {
            MK[fc81] |= BIT10;
            CIF_VLOG_FC_CAM[fc81] |= BIT1;
        }
        if (ris_verlengen(fc81, SYSTEM_ITF1, PRM[prmrislaneid81_1], RIS_CYCLIST, PRM[prmrisvstartsrm081fts1], PRM[prmrisvendsrm081fts1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc81] |= BIT13;
            CIF_VLOG_FC_CAM[fc81] |= BIT1;
        }
        if (ris_verlengen(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_2], RIS_MOTORVEHICLES, PRM[prmrisvstart68mveh2], PRM[prmrisvend68mveh2], SCH[schrisgeencheckopsg]))
        {
            MK[fc68] |= BIT10;
            CIF_VLOG_FC_CAM[fc68] |= BIT1;
        }
        if (ris_verlengen(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_2], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm068mveh2], PRM[prmrisvendsrm068mveh2], !SCH[schrisgeencheckopsg]))
        {
            MK[fc68] |= BIT13;
            CIF_VLOG_FC_CAM[fc68] |= BIT1;
        }
        if (ris_verlengen(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_1], RIS_MOTORVEHICLES, PRM[prmrisvstart68mveh1], PRM[prmrisvend68mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc68] |= BIT10;
            CIF_VLOG_FC_CAM[fc68] |= BIT1;
        }
        if (ris_verlengen(fc68, SYSTEM_ITF1, PRM[prmrislaneid68_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm068mveh1], PRM[prmrisvendsrm068mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc68] |= BIT13;
            CIF_VLOG_FC_CAM[fc68] |= BIT1;
        }
        if (ris_verlengen(fc67, SYSTEM_ITF1, PRM[prmrislaneid67_1], RIS_MOTORVEHICLES, PRM[prmrisvstart67mveh1], PRM[prmrisvend67mveh1], SCH[schrisgeencheckopsg]))
        {
            MK[fc67] |= BIT10;
            CIF_VLOG_FC_CAM[fc67] |= BIT1;
        }
        if (ris_verlengen(fc67, SYSTEM_ITF1, PRM[prmrislaneid67_1], RIS_MOTORVEHICLES, PRM[prmrisvstartsrm067mveh1], PRM[prmrisvendsrm067mveh1], !SCH[schrisgeencheckopsg]))
        {
            MK[fc67] |= BIT13;
            CIF_VLOG_FC_CAM[fc67] |= BIT1;
        }
    #endif

    /* verlengen RIS schakelbaar, 1 schakelaar voor het schakelen van alle verlengfuncties */
    if (!SCH[schrisverlengen])
    {
        for (fc = 0; fc < FCMAX; ++fc)
        {
            MK[fc] &= ~(BIT10|BIT13);
        }
    }

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

    YM[fc02] |= SCH[schmv02] && ym_max_prmV1(fc02, prmmv02, NG) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc03] |= SCH[schmv03] && ym_max_prmV1(fc03, prmmv03, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc05] |= SCH[schmv05] && ym_max_prmV1(fc05, prmmv05, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc08] |= SCH[schmv08] && ym_max_prmV1(fc08, prmmv08, NG) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc09] |= SCH[schmv09] && ym_max_prmV1(fc09, prmmv09, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc11] |= SCH[schmv11] && ym_max_prmV1(fc11, prmmv11, NG) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc21] |= SCH[schmv21] && ym_max_prmV1(fc21, prmmv21, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc22] |= SCH[schmv22] && ym_max_prmV1(fc22, prmmv22, 0) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc24] |= SCH[schmv24] && ym_max_prmV1(fc24, prmmv24, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc26] |= SCH[schmv26] && ym_max_prmV1(fc26, prmmv26, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc28] |= SCH[schmv28] && ym_max_prmV1(fc28, prmmv28, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc31] |= SCH[schmv31] && ym_max_prmV1(fc31, prmmv31, NG) && hf_wsg() && !kcv(fc32) ? BIT4 : 0;
    YM[fc32] |= SCH[schmv32] && ym_max_prmV1(fc32, prmmv32, NG) && hf_wsg() && !kcv(fc31) ? BIT4 : 0;
    YM[fc33] |= SCH[schmv33] && ym_max_prmV1(fc33, prmmv33, NG) && hf_wsg() && !kcv(fc34) ? BIT4 : 0;
    YM[fc34] |= SCH[schmv34] && ym_max_prmV1(fc34, prmmv34, NG) && hf_wsg() && !kcv(fc33) ? BIT4 : 0;
    YM[fc38] |= SCH[schmv38] && ym_max_prmV1(fc38, prmmv38, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc61] |= SCH[schmv61] && ym_max_prmV1(fc61, prmmv61, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc62] |= SCH[schmv62] && ym_max_prmV1(fc62, prmmv62, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc67] |= SCH[schmv67] && ym_max_prmV1(fc67, prmmv67, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc68] |= SCH[schmv68] && ym_max_prmV1(fc68, prmmv68, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc81] |= SCH[schmv81] && ym_max_prmV1(fc81, prmmv81, NG) && hf_wsg() ? BIT4 : 0;
    YM[fc82] |= SCH[schmv82] && ym_max_prmV1(fc82, prmmv82, 0) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc84] |= SCH[schmv84] && ym_max_prmV1(fc84, prmmv84, NG) && hf_wsg() ? BIT4 : 0;

    /* Niet meeverlengen tijdens file (meting na ss) */
    if (!IH[hplact])
    {
        if (IH[hfileFile68af]) YM[fc08] &= ~BIT4;
        if (IH[hfileFile68af]) YM[fc11] &= ~BIT4;
    }

    /* Hard meeverlengen */
    if (SCH[schhardmv2205] && G[fc05] && !kcv(fc22)) YM[fc22] |= BIT1;
    if (SCH[schhardmv2611] && G[fc11] && !kcv(fc26)) YM[fc26] |= BIT1;
    if (SCH[schhardmv3205] && G[fc05] && !kcv(fc32)) YM[fc32] |= BIT1;

    /* Veiligheidsgroen */
    /* ---------------- */
    veiligheidsgroen_V1(fc02, tvgmax02, d02_4a, tvgvolg02_4a, schvg02_4a, tvghiaat02_4a, d02_4b, tvgvolg02_4b, schvg02_4b, tvghiaat02_4b, END);
    veiligheidsgroen_V1(fc08, tvgmax08, d08_4a, tvgvolg08_4a, schvg08_4a, tvghiaat08_4a, d08_4b, tvgvolg08_4b, schvg08_4b, tvghiaat08_4b, END);
    veiligheidsgroen_V1(fc11, tvgmax11, d11_4, tvgvolg11_4, schvg11_4, tvghiaat11_4, END);

    Meeverlengen_Add();
}
void Synchronisaties(void)
{
    int fc;

    /* Reset synchronisatie BITs */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        RR[fc] &= ~(BIT1 | BIT2);
        RW[fc]&= ~(BIT1);
        YV[fc]&= ~(BIT1);
        YM[fc]&= ~(BIT3);
         X[fc]&= ~(BIT1|BIT2);
    }

    /* Uitvoeren synchronisaties */
    Synchroniseer_SP(IH[hplact]); /* synchronisatie intrekken tbv SP */
    Synchroniseer_SG(); /* synchronisatie obv realtijd (startgroenmomenten) */
    Synchroniseer_FO(); /* synchronisatie obv fictieve ontruiming */

    Synchronisaties_Add();
}

void RealisatieAfhandeling(void)
{
    int fc;

    Synchroniseer_PG(); /* synchronisatie PG's */

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
        set_FPRML_fk_gkl(fc, PRML, ML, MLMAX, (boolv)PFPR[fc]);
    }

    /* langstwachtende alternatieve realisatie */
    /* --------------------------------------- */

    afsluiten_aanvraaggebied_pr(PRML, ML);

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
    RR[fc21] |= R[fc21] && AR[fc21] && (!PAR[fc21] || ERA[fc21]) ? BIT5 : 0;
    RR[fc22] |= R[fc22] && AR[fc22] && (!PAR[fc22] || ERA[fc22]) ? BIT5 : 0;
    RR[fc24] |= R[fc24] && AR[fc24] && (!PAR[fc24] || ERA[fc24]) ? BIT5 : 0;
    RR[fc26] |= R[fc26] && AR[fc26] && (!PAR[fc26] || ERA[fc26]) ? BIT5 : 0;
    RR[fc28] |= R[fc28] && AR[fc28] && (!PAR[fc28] || ERA[fc28]) ? BIT5 : 0;
    RR[fc31] |= R[fc31] && AR[fc31] && (!PAR[fc31] || ERA[fc31]) ? BIT5 : 0;
    RR[fc32] |= R[fc32] && AR[fc32] && (!PAR[fc32] || ERA[fc32]) ? BIT5 : 0;
    RR[fc33] |= R[fc33] && AR[fc33] && (!PAR[fc33] || ERA[fc33]) ? BIT5 : 0;
    RR[fc34] |= R[fc34] && AR[fc34] && (!PAR[fc34] || ERA[fc34]) ? BIT5 : 0;
    RR[fc38] |= R[fc38] && AR[fc38] && (!PAR[fc38] || ERA[fc38]) ? BIT5 : 0;
    RR[fc61] |= R[fc61] && AR[fc61] && (!PAR[fc61] || ERA[fc61]) ? BIT5 : 0;
    RR[fc62] |= R[fc62] && AR[fc62] && (!PAR[fc62] || ERA[fc62]) ? BIT5 : 0;
    RR[fc67] |= R[fc67] && AR[fc67] && (!PAR[fc67] || ERA[fc67]) ? BIT5 : 0;
    RR[fc68] |= R[fc68] && AR[fc68] && (!PAR[fc68] || ERA[fc68]) ? BIT5 : 0;
    RR[fc81] |= R[fc81] && AR[fc81] && (!PAR[fc81] || ERA[fc81]) ? BIT5 : 0;
    RR[fc82] |= R[fc82] && AR[fc82] && (!PAR[fc82] || ERA[fc82]) ? BIT5 : 0;
    RR[fc84] |= R[fc84] && AR[fc84] && (!PAR[fc84] || ERA[fc84]) ? BIT5 : 0;


    /* Niet intrekken alternatief nalooprichting tijdens inlopen voedende richting */
    if (RT[tnlfg2221] || T[tnlfg2221] || RT[tnlfgd2221] || T[tnlfgd2221] || RT[tnleg2221] || T[tnleg2221] || RT[tnlegd2221] || T[tnlegd2221])
    {
        RR[fc21] &= ~BIT5;
    }
    if (RT[tnlsg3231] || T[tnlsg3231] || RT[tnlsgd3231] || T[tnlsgd3231])
    {
        RR[fc31] &= ~BIT5;
    }
    if (RT[tnlsg3132] || T[tnlsg3132] || RT[tnlsgd3132] || T[tnlsgd3132])
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
    if (RT[tnlfg0262] || T[tnlfg0262] || RT[tnlfgd0262] || T[tnlfgd0262] || RT[tnleg0262] || T[tnleg0262] || RT[tnlegd0262] || T[tnlegd0262])
    {
        RR[fc62] &= ~BIT5;
    }
    if (RT[tnlfg0868] || T[tnlfg0868] || RT[tnlfgd0868] || T[tnlfgd0868] || RT[tnleg0868] || T[tnleg0868] || RT[tnlegd0868] || T[tnlegd0868])
    {
        RR[fc68] &= ~BIT5;
    }
    if (RT[tnlfg8281] || T[tnlfg8281] || RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnleg8281] || T[tnleg8281] || RT[tnlegd8281] || T[tnlegd8281])
    {
        RR[fc81] &= ~BIT5;
    }
#ifndef NO_TIMETOX
    if (P[fc02]) { RR[fc02] &= ~BIT5; }
    if (P[fc03]) { RR[fc03] &= ~BIT5; }
    if (P[fc05]) { RR[fc05] &= ~BIT5; }
    if (P[fc08]) { RR[fc08] &= ~BIT5; }
    if (P[fc09]) { RR[fc09] &= ~BIT5; }
    if (P[fc11]) { RR[fc11] &= ~BIT5; }
    if (P[fc21]) { RR[fc21] &= ~BIT5; }
    if (P[fc22]) { RR[fc22] &= ~BIT5; }
    if (P[fc24]) { RR[fc24] &= ~BIT5; }
    if (P[fc26]) { RR[fc26] &= ~BIT5; }
    if (P[fc28]) { RR[fc28] &= ~BIT5; }
    if (P[fc31]) { RR[fc31] &= ~BIT5; }
    if (P[fc32]) { RR[fc32] &= ~BIT5; }
    if (P[fc33]) { RR[fc33] &= ~BIT5; }
    if (P[fc34]) { RR[fc34] &= ~BIT5; }
    if (P[fc38]) { RR[fc38] &= ~BIT5; }
    if (P[fc61]) { RR[fc61] &= ~BIT5; }
    if (P[fc62]) { RR[fc62] &= ~BIT5; }
    if (P[fc67]) { RR[fc67] &= ~BIT5; }
    if (P[fc68]) { RR[fc68] &= ~BIT5; }
    if (P[fc81]) { RR[fc81] &= ~BIT5; }
    if (P[fc82]) { RR[fc82] &= ~BIT5; }
    if (P[fc84]) { RR[fc84] &= ~BIT5; }
#endif // NO_TIMETOX

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

    /* Bij nalopen op EG mag de volgrichting niet RR en FM
       gestuurd worden indien de voedende richting groen is */
    if (!R[fc02] || TNL[fc62]) { RR[fc62] &= ~BIT5; FM[fc62] &= ~BIT5; }
    if (!R[fc08] || TNL[fc68]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (!R[fc11] || TNL[fc68]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (!R[fc22] || TNL[fc21]) { RR[fc21] &= ~BIT5; FM[fc21] &= ~BIT5; }
    if (!R[fc82] || TNL[fc81]) { RR[fc81] &= ~BIT5; FM[fc81] &= ~BIT5; }

    PAR[fc02] = (max_tar_tig(fc02) >= PRM[prmaltp02]) && SCH[schaltg02];
    PAR[fc03] = (max_tar_tig(fc03) >= PRM[prmaltp03]) && SCH[schaltg03];
    PAR[fc05] = (max_tar_tig(fc05) >= PRM[prmaltp05]) && SCH[schaltg05];
    PAR[fc08] = (max_tar_tig(fc08) >= PRM[prmaltp08]) && SCH[schaltg08];
    PAR[fc09] = (max_tar_tig(fc09) >= PRM[prmaltp09]) && SCH[schaltg09];
    PAR[fc11] = (max_tar_tig(fc11) >= PRM[prmaltp11]) && SCH[schaltg11];
    PAR[fc21] = (max_tar_tig(fc21) >= PRM[prmaltp21]) && SCH[schaltg21];
    PAR[fc22] = (max_tar_tig(fc22) >= PRM[prmaltp2232]) && SCH[schaltg2232];
    PAR[fc24] = (max_tar_tig(fc24) >= PRM[prmaltp243484]) && SCH[schaltg243484];
    PAR[fc26] = (max_tar_tig(fc26) >= PRM[prmaltp26]) && SCH[schaltg26];
    PAR[fc28] = (max_tar_tig(fc28) >= PRM[prmaltp2838]) && SCH[schaltg2838];
    PAR[fc31] = (max_tar_tig(fc31) >= PRM[prmaltp31]) && SCH[schaltg31];
    PAR[fc32] = (max_tar_tig(fc32) >= PRM[prmaltp2232]) && SCH[schaltg2232];
    PAR[fc33] = (max_tar_tig(fc33) >= PRM[prmaltp3384]) && SCH[schaltg3384];
    PAR[fc34] = (max_tar_tig(fc34) >= PRM[prmaltp2434]) && SCH[schaltg2434];
    PAR[fc38] = (max_tar_tig(fc38) >= PRM[prmaltp2838]) && SCH[schaltg2838];
    PAR[fc61] = (max_tar_tig(fc61) >= PRM[prmaltp61]) && SCH[schaltg61];
    PAR[fc62] = (max_tar_tig(fc62) >= PRM[prmaltp62]) && SCH[schaltg62];
    PAR[fc67] = (max_tar_tig(fc67) >= PRM[prmaltp67]) && SCH[schaltg67];
    PAR[fc68] = (max_tar_tig(fc68) >= PRM[prmaltp68]) && SCH[schaltg68];
    PAR[fc81] = (max_tar_tig(fc81) >= PRM[prmaltp81]) && SCH[schaltg81];
    PAR[fc82] = (max_tar_tig(fc82) >= PRM[prmaltp82]) && SCH[schaltg82];
    PAR[fc84] = (max_tar_tig(fc84) >= PRM[prmaltp243384]) && SCH[schaltg243384];

     /* Bepaal naloop voetgangers wel/niet toegestaan */
    IH[hnlsg3132] = Naloop_OK(fc31, mar32, tnlsgd3132);
    IH[hnlsg3231] = Naloop_OK(fc32, mar31, tnlsgd3231);
    IH[hnlsg3334] = Naloop_OK(fc33, mar34, tnlsgd3334);
    IH[hnlsg3433] = Naloop_OK(fc34, mar33, tnlsgd3433);

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

    /* Niet alternatief komen tijdens file */
    if (IH[hfileFile68af]) PAR[fc08] = FALSE;
    if (IH[hfileFile68af]) PAR[fc11] = FALSE;

    /* set meerealisatie voor richtingen met nalopen */
    /* --------------------------------------------- */
    set_MRLW_nl(fc62, fc02, (boolv) ((T[tlr6202] || RT[tlr6202]) && A[fc62] && !G[fc62]));
    set_MRLW_nl(fc68, fc08, (boolv) ((T[tlr6808] || RT[tlr6808]) && A[fc68] && !G[fc68]));
    set_MRLW_nl(fc68, fc11, (boolv) ((T[tlr6811] || RT[tlr6811]) && A[fc68] && !G[fc68]));
    set_MRLW_nl(fc21, fc22, (boolv) ((T[tlr2122] || RT[tlr2122]) && A[fc21] && !G[fc21]));
    set_MRLW(fc32, fc31, (boolv) ((T[til3132] || RT[til3132]) && A[fc32] && !G[fc32] && !kcv(fc32)));
    set_MRLW(fc31, fc32, (boolv) ((T[til3231] || RT[til3231]) && A[fc31] && !G[fc31] && !kcv(fc31)));
    set_MRLW(fc34, fc33, (boolv) ((T[til3334] || RT[til3334]) && A[fc34] && !G[fc34] && !kcv(fc34)));
    set_MRLW(fc33, fc34, (boolv) ((T[til3433] || RT[til3433]) && A[fc33] && !G[fc33] && !kcv(fc33)));
    set_MRLW_nl(fc81, fc82, (boolv) ((T[tlr8182] || RT[tlr8182]) && A[fc81] && !G[fc81]));

    /* set meerealisatie voor gelijk- of voorstartende richtingen */
    /* ---------------------------------------------------------- */
    set_MRLW(fc22, fc05, (boolv) (RA[fc05] && (PR[fc05] || AR[fc05] || (AA[fc05] & BIT11)) && A[fc22] && R[fc22] && !TRG[fc22] && !kcv(fc22)));
    set_MRLW(fc32, fc05, (boolv) (RA[fc05] && (PR[fc05] || AR[fc05] || (AA[fc05] & BIT11)) && A[fc32] && R[fc32] && !TRG[fc32] && !kcv(fc32)));
    if (SCH[schgs2232]) set_MRLW(fc22, fc32, (boolv) ((RA[fc32] || SG[fc32]) && (PR[fc32] || AR[fc32] || (AA[fc32] & BIT11)) && A[fc22] && R[fc22] && !TRG[fc22] && !kcv(fc22)));
    if (SCH[schgs2232]) set_MRLW(fc32, fc22, (boolv) ((RA[fc22] || SG[fc22]) && (PR[fc22] || AR[fc22] || (AA[fc32] & BIT11)) && A[fc32] && R[fc32] && !TRG[fc32] && !kcv(fc32)));
    if (SCH[schgs2434]) set_MRLW(fc24, fc34, (boolv) ((RA[fc34] || SG[fc34]) && (PR[fc34] || AR[fc34] || (AA[fc34] & BIT11)) && A[fc24] && R[fc24] && !TRG[fc24] && !kcv(fc24)));
    if (SCH[schgs2434]) set_MRLW(fc34, fc24, (boolv) ((RA[fc24] || SG[fc24]) && (PR[fc24] || AR[fc24] || (AA[fc34] & BIT11)) && A[fc34] && R[fc34] && !TRG[fc34] && !kcv(fc34)));
    if (SCH[schgs2484]) set_MRLW(fc24, fc84, (boolv) ((RA[fc84] || SG[fc84]) && (PR[fc84] || AR[fc84] || (AA[fc84] & BIT11)) && A[fc24] && R[fc24] && !TRG[fc24] && !kcv(fc24)));
    if (SCH[schgs2484]) set_MRLW(fc84, fc24, (boolv) ((RA[fc24] || SG[fc24]) && (PR[fc24] || AR[fc24] || (AA[fc84] & BIT11)) && A[fc84] && R[fc84] && !TRG[fc84] && !kcv(fc84)));
    set_MRLW(fc28, fc38, (boolv) ((RA[fc38] || SG[fc38]) && (PR[fc38] || AR[fc38] || (AA[fc38] & BIT11)) && A[fc28] && R[fc28] && !TRG[fc28] && !kcv(fc28)));
    set_MRLW(fc38, fc28, (boolv) ((RA[fc28] || SG[fc28]) && (PR[fc28] || AR[fc28] || (AA[fc38] & BIT11)) && A[fc38] && R[fc38] && !TRG[fc38] && !kcv(fc38)));
    if (SCH[schgs3384]) set_MRLW(fc33, fc84, (boolv) ((RA[fc84] || SG[fc84]) && (PR[fc84] || AR[fc84] || (AA[fc84] & BIT11)) && A[fc33] && R[fc33] && !TRG[fc33] && !kcv(fc33)));
    if (SCH[schgs3384]) set_MRLW(fc84, fc33, (boolv) ((RA[fc33] || SG[fc33]) && (PR[fc33] || AR[fc33] || (AA[fc84] & BIT11)) && A[fc84] && R[fc84] && !TRG[fc84] && !kcv(fc84)));

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

    /* Alternatieve ruimte in memory element schrijven */
    if (IH[hplact])
    {
        for (fc = 0; fc < FCMAX; ++fc) MM[mar02 + fc] = tar_max_ple(fc);
    }
    else
    {
        for (fc = 0; fc < FCMAX; ++fc) MM[mar02 + fc] = max_tar_tig(fc);
    }



    Alternatief_Add();

    langstwachtende_alternatief_modulen(PRML, ML, ML_MAX);

    /* Tegenhouden voedende richting, bij een conflicterende prio-ingreep van de nalooprichting */
    /* Afzetten RR */
    if ((G[fc09] || !(YV[fc09] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC09bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC09risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC09risvrw] & poBijzonderRealiseren)) &&
        (G[fc11] || !(YV[fc11] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC11bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC11risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC11risvrw] & poBijzonderRealiseren))) RR[fc02] &= ~BIT10;
    if ((G[fc03] || !(YV[fc03] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC03bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risvrw] & poBijzonderRealiseren)) &&
        (G[fc05] || !(YV[fc05] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC05bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC05risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC05risvrw] & poBijzonderRealiseren)) &&
        (G[fc22] || !(YV[fc22] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC22fiets] & poBijzonderRealiseren))) RR[fc08] &= ~BIT10;
    if ((G[fc03] || !(YV[fc03] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC03bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risvrw] & poBijzonderRealiseren)) &&
        (G[fc05] || !(YV[fc05] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC05bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC05risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC05risvrw] & poBijzonderRealiseren)) &&
        (G[fc22] || !(YV[fc22] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC22fiets] & poBijzonderRealiseren))) RR[fc11] &= ~BIT10;
    if ((G[fc02] || !(YV[fc02] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC02karbus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC02risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC02risvrw] & poBijzonderRealiseren)) &&
        (G[fc03] || !(YV[fc03] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC03bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC03risvrw] & poBijzonderRealiseren))) RR[fc22] &= ~BIT10;
    if ((G[fc67] || !(YV[fc67] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC67bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC67risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC67risvrw] & poBijzonderRealiseren)) &&
        (G[fc68] || !(YV[fc68] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC68bus] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC68risov] & poBijzonderRealiseren) &&
                                                 !(iPrioriteitsOpties[prioFC68risvrw] & poBijzonderRealiseren))) RR[fc82] &= ~BIT10;

    /* Opzetten RR */
    if (((Z[fc02] & PRIO_Z_BIT) && (YV[fc09] & PRIO_YV_BIT) && !G[fc09]) ||
        ((Z[fc02] & PRIO_Z_BIT) && (YV[fc11] & PRIO_YV_BIT) && !G[fc11])) RR[fc02] |= BIT10;
    if (((Z[fc08] & PRIO_Z_BIT) && (YV[fc03] & PRIO_YV_BIT) && !G[fc03]) ||
        ((Z[fc08] & PRIO_Z_BIT) && (YV[fc05] & PRIO_YV_BIT) && !G[fc05]) ||
        ((Z[fc08] & PRIO_Z_BIT) && (YV[fc22] & PRIO_YV_BIT) && !G[fc22])) RR[fc08] |= BIT10;
    if (((Z[fc11] & PRIO_Z_BIT) && (YV[fc03] & PRIO_YV_BIT) && !G[fc03]) ||
        ((Z[fc11] & PRIO_Z_BIT) && (YV[fc05] & PRIO_YV_BIT) && !G[fc05]) ||
        ((Z[fc11] & PRIO_Z_BIT) && (YV[fc22] & PRIO_YV_BIT) && !G[fc22])) RR[fc11] |= BIT10;
    if (((Z[fc22] & PRIO_Z_BIT) && (YV[fc02] & PRIO_YV_BIT) && !G[fc02]) ||
        ((Z[fc22] & PRIO_Z_BIT) && (YV[fc03] & PRIO_YV_BIT) && !G[fc03])) RR[fc22] |= BIT10;
    if (((Z[fc82] & PRIO_Z_BIT) && (YV[fc67] & PRIO_YV_BIT) && !G[fc67]) ||
        ((Z[fc82] & PRIO_Z_BIT) && (YV[fc68] & PRIO_YV_BIT) && !G[fc68])) RR[fc82] |= BIT10;

    YML[ML] = yml_cv_pr_nl(PRML, ML, ML_MAX);

    YML[ML1] |= yml_wml(PRML, ML_MAX);
    YML[ML2] |= FALSE;
    YML[ML3] |= FALSE;
    YML[ML4] |= FALSE;
    YML[ML5] |= FALSE;

    Modules_Add();

    SML = modules(ML_MAX, PRML, YML, &ML);

    for (fc = 0; fc < FCMAX; ++fc)
    {
        YM[fc] &= ~BIT5;
        YM[fc] |= SML && PG[fc] ? BIT5 : FALSE;
    }

    /* VA ontruimen */
    /* ============ */

    /* herstarten maxima */
    RT[tvamax62] = !R[fc62];

    /* Fase 62 */
    if (!(CIF_IS[d62_1a] >= CIF_DET_STORING))
    {
        RT[tva6209_d62_1a] = D[d62_1a] && T[tvamax62] && T_max[tva6209_d62_1a];
        RT[tva6211_d62_1a] = D[d62_1a] && T[tvamax62] && T_max[tva6211_d62_1a];
        RT[tva6226_d62_1a] = D[d62_1a] && T[tvamax62] && T_max[tva6226_d62_1a];
    }
    else
    {
        RT[tva6209_d62_1a] = FALSE;
        RT[tva6211_d62_1a] = FALSE;
        RT[tva6226_d62_1a] = FALSE;
    }

    /* afzetten X voor alle relevante fasen */
    X[fc09] &= ~BIT9;
    X[fc11] &= ~BIT9;
    X[fc26] &= ~BIT9;
    X[fc11] &= ~BIT9;

    /* opzetten X voor conflicten van fase 62 */
    if(T[tva6209_d62_1a]) X[fc09] |= BIT9;
    if(T[tva6211_d62_1a]) X[fc11] |= BIT9;
    if(T[tva6226_d62_1a]) X[fc26] |= BIT9;
    /* opzetten X voor synchronisaties */
    if (X[fc26] & BIT9) X[fc11] |= BIT9;

    /* School ingreep: bijhouden max groen & vasthouden naloop tijd */
    RT[tschoolingreepmaxg33] = SG[fc33];
    RT[tschoolingreepmaxg34] = SG[fc34];
    HT[tnlsgd3334] = T[tschoolingreepmaxg33] && CV[fc33] && G[fc33] && IH[hschoolingreepdk33a];
    HT[tnlsgd3433] = T[tschoolingreepmaxg34] && CV[fc34] && G[fc34] && IH[hschoolingreepdk34a];

    #ifndef NO_TIMETOX
    if (SCH[schconfidence15fix])
    {
        reset_rr_fc(BIT11);
        if (R[fc02] && (P[fc02] & BIT11)) set_rr_gk(fc02, BIT11);
        if (R[fc03] && (P[fc03] & BIT11)) set_rr_gk(fc03, BIT11);
        if (R[fc05] && (P[fc05] & BIT11)) set_rr_gk(fc05, BIT11);
        if (R[fc08] && (P[fc08] & BIT11)) set_rr_gk(fc08, BIT11);
        if (R[fc09] && (P[fc09] & BIT11)) set_rr_gk(fc09, BIT11);
        if (R[fc11] && (P[fc11] & BIT11)) set_rr_gk(fc11, BIT11);
        if (R[fc21] && (P[fc21] & BIT11)) set_rr_gk(fc21, BIT11);
        if (R[fc22] && (P[fc22] & BIT11)) set_rr_gk(fc22, BIT11);
        if (R[fc24] && (P[fc24] & BIT11)) set_rr_gk(fc24, BIT11);
        if (R[fc26] && (P[fc26] & BIT11)) set_rr_gk(fc26, BIT11);
        if (R[fc28] && (P[fc28] & BIT11)) set_rr_gk(fc28, BIT11);
        if (R[fc31] && (P[fc31] & BIT11)) set_rr_gk(fc31, BIT11);
        if (R[fc32] && (P[fc32] & BIT11)) set_rr_gk(fc32, BIT11);
        if (R[fc33] && (P[fc33] & BIT11)) set_rr_gk(fc33, BIT11);
        if (R[fc34] && (P[fc34] & BIT11)) set_rr_gk(fc34, BIT11);
        if (R[fc38] && (P[fc38] & BIT11)) set_rr_gk(fc38, BIT11);
        if (R[fc61] && (P[fc61] & BIT11)) set_rr_gk(fc61, BIT11);
        if (R[fc62] && (P[fc62] & BIT11)) set_rr_gk(fc62, BIT11);
        if (R[fc67] && (P[fc67] & BIT11)) set_rr_gk(fc67, BIT11);
        if (R[fc68] && (P[fc68] & BIT11)) set_rr_gk(fc68, BIT11);
        if (R[fc81] && (P[fc81] & BIT11)) set_rr_gk(fc81, BIT11);
        if (R[fc82] && (P[fc82] & BIT11)) set_rr_gk(fc82, BIT11);
        if (R[fc84] && (P[fc84] & BIT11)) set_rr_gk(fc84, BIT11);
        if (SCH[schgs2232] && R[fc22] && (P[fc22] & BIT11)) set_rr_gk(fc32, BIT11);
        if (SCH[schgs2232] && R[fc32] && (P[fc32] & BIT11)) set_rr_gk(fc22, BIT11);
        if (SCH[schgs2434] && R[fc24] && (P[fc24] & BIT11)) set_rr_gk(fc34, BIT11);
        if (SCH[schgs2434] && R[fc34] && (P[fc34] & BIT11)) set_rr_gk(fc24, BIT11);
        if (SCH[schgs2484] && R[fc24] && (P[fc24] & BIT11)) set_rr_gk(fc84, BIT11);
        if (SCH[schgs2484] && R[fc84] && (P[fc84] & BIT11)) set_rr_gk(fc24, BIT11);
        if (R[fc28] && (P[fc28] & BIT11)) set_rr_gk(fc38, BIT11);
        if (R[fc38] && (P[fc38] & BIT11)) set_rr_gk(fc28, BIT11);
        if (SCH[schgs3384] && R[fc33] && (P[fc33] & BIT11)) set_rr_gk(fc84, BIT11);
        if (SCH[schgs3384] && R[fc84] && (P[fc84] & BIT11)) set_rr_gk(fc33, BIT11);
        if (R[fc05] && (P[fc05] & BIT11)) set_rr_gk(fc22, BIT11);
        if (R[fc05] && (P[fc05] & BIT11)) set_rr_gk(fc32, BIT11);
        if (R[fc11] && (P[fc11] & BIT11)) set_rr_gk(fc26, BIT11);
        if (R[fc02] && (P[fc02] & BIT11)) A[fc02] |= BIT11;
        if (R[fc03] && (P[fc03] & BIT11)) A[fc03] |= BIT11;
        if (R[fc05] && (P[fc05] & BIT11)) A[fc05] |= BIT11;
        if (R[fc08] && (P[fc08] & BIT11)) A[fc08] |= BIT11;
        if (R[fc09] && (P[fc09] & BIT11)) A[fc09] |= BIT11;
        if (R[fc11] && (P[fc11] & BIT11)) A[fc11] |= BIT11;
        if (R[fc21] && (P[fc21] & BIT11)) A[fc21] |= BIT11;
        if (R[fc22] && (P[fc22] & BIT11)) A[fc22] |= BIT11;
        if (R[fc24] && (P[fc24] & BIT11)) A[fc24] |= BIT11;
        if (R[fc26] && (P[fc26] & BIT11)) A[fc26] |= BIT11;
        if (R[fc28] && (P[fc28] & BIT11)) A[fc28] |= BIT11;
        if (R[fc31] && (P[fc31] & BIT11)) A[fc31] |= BIT11;
        if (R[fc32] && (P[fc32] & BIT11)) A[fc32] |= BIT11;
        if (R[fc33] && (P[fc33] & BIT11)) A[fc33] |= BIT11;
        if (R[fc34] && (P[fc34] & BIT11)) A[fc34] |= BIT11;
        if (R[fc38] && (P[fc38] & BIT11)) A[fc38] |= BIT11;
        if (R[fc61] && (P[fc61] & BIT11)) A[fc61] |= BIT11;
        if (R[fc62] && (P[fc62] & BIT11)) A[fc62] |= BIT11;
        if (R[fc67] && (P[fc67] & BIT11)) A[fc67] |= BIT11;
        if (R[fc68] && (P[fc68] & BIT11)) A[fc68] |= BIT11;
        if (R[fc81] && (P[fc81] & BIT11)) A[fc81] |= BIT11;
        if (R[fc82] && (P[fc82] & BIT11)) A[fc82] |= BIT11;
        if (R[fc84] && (P[fc84] & BIT11)) A[fc84] |= BIT11;
        if (R[fc02] && (P[fc02] & BIT11) && !RA[fc02] && !kaa(fc02)) AA[fc02] |= BIT11;
        if (R[fc03] && (P[fc03] & BIT11) && !RA[fc03] && !kaa(fc03)) AA[fc03] |= BIT11;
        if (R[fc05] && (P[fc05] & BIT11) && !RA[fc05] && !kaa(fc05)) AA[fc05] |= BIT11;
        if (R[fc08] && (P[fc08] & BIT11) && !RA[fc08] && !kaa(fc08)) AA[fc08] |= BIT11;
        if (R[fc09] && (P[fc09] & BIT11) && !RA[fc09] && !kaa(fc09)) AA[fc09] |= BIT11;
        if (R[fc11] && (P[fc11] & BIT11) && !RA[fc11] && !kaa(fc11)) AA[fc11] |= BIT11;
        if (R[fc21] && (P[fc21] & BIT11) && !RA[fc21] && !kaa(fc21)) AA[fc21] |= BIT11;
        if (R[fc22] && (P[fc22] & BIT11) && !RA[fc22] && !kaa(fc22)) AA[fc22] |= BIT11;
        if (R[fc24] && (P[fc24] & BIT11) && !RA[fc24] && !kaa(fc24)) AA[fc24] |= BIT11;
        if (R[fc26] && (P[fc26] & BIT11) && !RA[fc26] && !kaa(fc26)) AA[fc26] |= BIT11;
        if (R[fc28] && (P[fc28] & BIT11) && !RA[fc28] && !kaa(fc28)) AA[fc28] |= BIT11;
        if (R[fc31] && (P[fc31] & BIT11) && !RA[fc31] && !kaa(fc31)) AA[fc31] |= BIT11;
        if (R[fc32] && (P[fc32] & BIT11) && !RA[fc32] && !kaa(fc32)) AA[fc32] |= BIT11;
        if (R[fc33] && (P[fc33] & BIT11) && !RA[fc33] && !kaa(fc33)) AA[fc33] |= BIT11;
        if (R[fc34] && (P[fc34] & BIT11) && !RA[fc34] && !kaa(fc34)) AA[fc34] |= BIT11;
        if (R[fc38] && (P[fc38] & BIT11) && !RA[fc38] && !kaa(fc38)) AA[fc38] |= BIT11;
        if (R[fc61] && (P[fc61] & BIT11) && !RA[fc61] && !kaa(fc61)) AA[fc61] |= BIT11;
        if (R[fc62] && (P[fc62] & BIT11) && !RA[fc62] && !kaa(fc62)) AA[fc62] |= BIT11;
        if (R[fc67] && (P[fc67] & BIT11) && !RA[fc67] && !kaa(fc67)) AA[fc67] |= BIT11;
        if (R[fc68] && (P[fc68] & BIT11) && !RA[fc68] && !kaa(fc68)) AA[fc68] |= BIT11;
        if (R[fc81] && (P[fc81] & BIT11) && !RA[fc81] && !kaa(fc81)) AA[fc81] |= BIT11;
        if (R[fc82] && (P[fc82] & BIT11) && !RA[fc82] && !kaa(fc82)) AA[fc82] |= BIT11;
        if (R[fc84] && (P[fc84] & BIT11) && !RA[fc84] && !kaa(fc84)) AA[fc84] |= BIT11;

        for (fc = 0; fc < FCMAX; ++fc) YM[fc] &= ~BIT11;

        if (SCH[schgs2232] && RA[fc22] && (P[fc22] & BIT11) && !kaa(fc32) && A[fc32] && !RR[fc32]) AA[fc32] |= BIT11;
        if (SCH[schgs2232] && RA[fc32] && (P[fc32] & BIT11) && !kaa(fc22) && A[fc22] && !RR[fc22]) AA[fc22] |= BIT11;
        if (SCH[schgs2232] && R[fc22] && !PG[fc22] && R[fc32] && PG[fc32]) PG[fc32] = 0;
        if (SCH[schgs2232] && R[fc32] && !PG[fc32] && R[fc22] && PG[fc22]) PG[fc22] = 0;
        if (SCH[schgs2232] && G[fc22] && R[fc32] && (P[fc32] & BIT11)) YM[fc22] |= BIT11;
        if (SCH[schgs2232] && G[fc32] && R[fc22] && (P[fc22] & BIT11)) YM[fc32] |= BIT11;
        if (SCH[schgs2434] && RA[fc24] && (P[fc24] & BIT11) && !kaa(fc34) && A[fc34] && !RR[fc34]) AA[fc34] |= BIT11;
        if (SCH[schgs2434] && RA[fc34] && (P[fc34] & BIT11) && !kaa(fc24) && A[fc24] && !RR[fc24]) AA[fc24] |= BIT11;
        if (SCH[schgs2434] && R[fc24] && !PG[fc24] && R[fc34] && PG[fc34]) PG[fc34] = 0;
        if (SCH[schgs2434] && R[fc34] && !PG[fc34] && R[fc24] && PG[fc24]) PG[fc24] = 0;
        if (SCH[schgs2434] && G[fc24] && R[fc34] && (P[fc34] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs2434] && G[fc34] && R[fc24] && (P[fc24] & BIT11)) YM[fc34] |= BIT11;
        if (SCH[schgs2484] && RA[fc24] && (P[fc24] & BIT11) && !kaa(fc84) && A[fc84] && !RR[fc84]) AA[fc84] |= BIT11;
        if (SCH[schgs2484] && RA[fc84] && (P[fc84] & BIT11) && !kaa(fc24) && A[fc24] && !RR[fc24]) AA[fc24] |= BIT11;
        if (SCH[schgs2484] && R[fc24] && !PG[fc24] && R[fc84] && PG[fc84]) PG[fc84] = 0;
        if (SCH[schgs2484] && R[fc84] && !PG[fc84] && R[fc24] && PG[fc24]) PG[fc24] = 0;
        if (SCH[schgs2484] && G[fc24] && R[fc84] && (P[fc84] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs2484] && G[fc84] && R[fc24] && (P[fc24] & BIT11)) YM[fc84] |= BIT11;
        if (RA[fc28] && (P[fc28] & BIT11) && !kaa(fc38) && A[fc38] && !RR[fc38]) AA[fc38] |= BIT11;
        if (RA[fc38] && (P[fc38] & BIT11) && !kaa(fc28) && A[fc28] && !RR[fc28]) AA[fc28] |= BIT11;
        if (R[fc28] && !PG[fc28] && R[fc38] && PG[fc38]) PG[fc38] = 0;
        if (R[fc38] && !PG[fc38] && R[fc28] && PG[fc28]) PG[fc28] = 0;
        if (G[fc28] && R[fc38] && (P[fc38] & BIT11)) YM[fc28] |= BIT11;
        if (G[fc38] && R[fc28] && (P[fc28] & BIT11)) YM[fc38] |= BIT11;
        if (SCH[schgs3384] && RA[fc33] && (P[fc33] & BIT11) && !kaa(fc84) && A[fc84] && !RR[fc84]) AA[fc84] |= BIT11;
        if (SCH[schgs3384] && RA[fc84] && (P[fc84] & BIT11) && !kaa(fc33) && A[fc33] && !RR[fc33]) AA[fc33] |= BIT11;
        if (SCH[schgs3384] && R[fc33] && !PG[fc33] && R[fc84] && PG[fc84]) PG[fc84] = 0;
        if (SCH[schgs3384] && R[fc84] && !PG[fc84] && R[fc33] && PG[fc33]) PG[fc33] = 0;
        if (SCH[schgs3384] && G[fc33] && R[fc84] && (P[fc84] & BIT11)) YM[fc33] |= BIT11;
        if (SCH[schgs3384] && G[fc84] && R[fc33] && (P[fc33] & BIT11)) YM[fc84] |= BIT11;
        if (R[fc05] && !PG[fc05] && R[fc22] && PG[fc22]) PG[fc22] = 0;
        if (G[fc22] && R[fc05] && (P[fc05] & BIT11)) YM[fc22] |= BIT11;
        if (R[fc05] && !PG[fc05] && R[fc32] && PG[fc32]) PG[fc32] = 0;
        if (G[fc32] && R[fc05] && (P[fc05] & BIT11)) YM[fc32] |= BIT11;
        if (G[fc26] && R[fc11] && (P[fc11] & BIT11)) YM[fc26] |= BIT11;
        /* Correctie gelijkstart <> gelijkstart of naloop
         * Bij een gelijkstart die een fase deelt met een andere gelijsktart of naloop
         * kan de max-end tijd worden verhoogd op start-geel, daarom wordt
         * start geel uitgesteld.
         */
        if (SCH[schgs2232] && G[fc32] && R[fc21] && (P[fc21] & BIT11)) YM[fc32] |= BIT11;
        if (SCH[schgs2232] && G[fc21] && R[fc32] && (P[fc32] & BIT11)) YM[fc21] |= BIT11;
        if (SCH[schgs2232] && G[fc22] && R[fc31] && (P[fc31] & BIT11)) YM[fc22] |= BIT11;
        if (SCH[schgs2232] && G[fc31] && R[fc22] && (P[fc22] & BIT11)) YM[fc31] |= BIT11;
        if (SCH[schgs2232] && G[fc22] && R[fc31] && (P[fc31] & BIT11)) YM[fc22] |= BIT11;
        if (SCH[schgs2232] && G[fc31] && R[fc22] && (P[fc22] & BIT11)) YM[fc31] |= BIT11;
        if (SCH[schgs2434] && SCH[schgs2484] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) YM[fc34] |= BIT11;
        if (SCH[schgs2434] && SCH[schgs2484] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) YM[fc84] |= BIT11;
        if (SCH[schgs2434] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs2434] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) YM[fc33] |= BIT11;
        if (SCH[schgs2434] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs2434] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) YM[fc33] |= BIT11;
        if (SCH[schgs2484] && SCH[schgs2434] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) YM[fc84] |= BIT11;
        if (SCH[schgs2484] && SCH[schgs2434] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) YM[fc34] |= BIT11;
        if (SCH[schgs2484] && SCH[schgs3384] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs2484] && SCH[schgs3384] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) YM[fc33] |= BIT11;
        if (SCH[schgs3384] && SCH[schgs2484] && G[fc33] && R[fc24] && (P[fc24] & BIT11)) YM[fc33] |= BIT11;
        if (SCH[schgs3384] && SCH[schgs2484] && G[fc24] && R[fc33] && (P[fc33] & BIT11)) YM[fc24] |= BIT11;
        if (SCH[schgs3384] && G[fc84] && R[fc34] && (P[fc34] & BIT11)) YM[fc84] |= BIT11;
        if (SCH[schgs3384] && G[fc34] && R[fc84] && (P[fc84] & BIT11)) YM[fc34] |= BIT11;
         /* YM nalopen P */
        if (G[fc62] && R[fc02] && (P[fc02] & BIT11)) YM[fc62] |= BIT11;
        if (G[fc68] && R[fc08] && (P[fc08] & BIT11)) YM[fc68] |= BIT11;
        if (G[fc68] && R[fc11] && (P[fc11] & BIT11)) YM[fc68] |= BIT11;
        if (G[fc21] && R[fc22] && (P[fc22] & BIT11)) YM[fc21] |= BIT11;
        if (G[fc31] && R[fc32] && (P[fc32] & BIT11)) YM[fc31] |= BIT11;
        if (G[fc32] && R[fc31] && (P[fc31] & BIT11)) YM[fc32] |= BIT11;
        if (G[fc32] && R[fc31] && (P[fc31] & BIT11)) YM[fc32] |= BIT11;
        if (G[fc31] && R[fc32] && (P[fc32] & BIT11)) YM[fc31] |= BIT11;
        if (G[fc33] && R[fc34] && (P[fc34] & BIT11)) YM[fc33] |= BIT11;
        if (G[fc34] && R[fc33] && (P[fc33] & BIT11)) YM[fc34] |= BIT11;
        if (G[fc34] && R[fc33] && (P[fc33] & BIT11)) YM[fc34] |= BIT11;
        if (G[fc33] && R[fc34] && (P[fc34] & BIT11)) YM[fc33] |= BIT11;
        if (G[fc81] && R[fc82] && (P[fc82] & BIT11)) YM[fc81] |= BIT11;
    }
    #endif

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

    if (!IH[hplact])
    {
        /* percentage MG bij filemelding */
        if (IH[hfileFile68af] && SCH[schfileFile68af] && SCH[schfiledoserenFile68af])
        {
            PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmfpercFile68af08],
                                         8, TVGA_max[fc08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
            PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmfpercFile68af11],
                                         8, TVGA_max[fc11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
        }
    }
    else
    {
        /* percentage MG bij filemelding tijdens halfstar */
        if (IH[hfileFile68af] && SCH[schfileFile68af] && SCH[schfiledoserenFile68af])
        {
            PercentageVerlengGroenTijden_halfstar(fc08, prmfpercFile68af08, BIT3);
            PercentageVerlengGroenTijden_halfstar(fc11, prmfpercFile68af11, BIT3);
        }
    }

    /* Afkappen tijdens file ingreep File68af */
    /* Eenmalig afkappen fase 08 op start file ingreep */
    RT[tafkmingroen08fileFile68af] = ER[fc08] && T_max[tafkmingroen08fileFile68af];
    if (SH[hfileFile68af] && G[fc08]) IH[hafk08fileFile68af] = TRUE;
    if (EG[fc08]) IH[hafk08fileFile68af] = FALSE;
    /* Afkappen fase 08 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen08fileFile68af] = SG[fc08] && T_max[tmaxgroen08fileFile68af];
    if (G[fc08] && IH[hfileFile68af])
    {
        if (IH[hafk08fileFile68af] && T_max[tafkmingroen08fileFile68af] &&
            !RT[tafkmingroen08fileFile68af] && !T[tafkmingroen08fileFile68af] && !(MK[fc08] & PRIO_MK_BIT) || 
            !RT[tmaxgroen08fileFile68af] && !T[tmaxgroen08fileFile68af])
        {
            Z[fc08] |= BIT5;
        }
    }
    /* Eenmalig afkappen fase 11 op start file ingreep */
    RT[tafkmingroen11fileFile68af] = ER[fc11] && T_max[tafkmingroen11fileFile68af];
    if (SH[hfileFile68af] && G[fc11]) IH[hafk11fileFile68af] = TRUE;
    if (EG[fc11]) IH[hafk11fileFile68af] = FALSE;
    /* Afkappen fase 11 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen11fileFile68af] = SG[fc11] && T_max[tmaxgroen11fileFile68af];
    if (G[fc11] && IH[hfileFile68af])
    {
        if (IH[hafk11fileFile68af] && T_max[tafkmingroen11fileFile68af] &&
            !RT[tafkmingroen11fileFile68af] && !T[tafkmingroen11fileFile68af] && !(MK[fc11] & PRIO_MK_BIT) || 
            !RT[tmaxgroen11fileFile68af] && !T[tmaxgroen11fileFile68af])
        {
            Z[fc11] |= BIT5;
        }
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

    /* Als hulpdienst ingreep aktief is op kruispunt arm dan nooit uitstel of afbreken als gevolg van file stroomafwaarts */
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

    FileVerwerking_Add();
}

void DetectieStoring(void)
{
    int fc;

    /* reset MK-bits vooraf, ivm onderlinge verwijzing. */
    for (fc = 0; fc < FCMAX; ++fc)
        MK[fc] &= ~BIT5;

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

    if (IH[hplact])
    {
        /* percentage VG bij defect alle kop/lange lussen */
        /* ---------------------------------------------- */
        if ((CIF_IS[d03_1] >= CIF_DET_STORING) && (CIF_IS[d03_2] >= CIF_DET_STORING))
        {
            MK[fc03] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc03, prmperc03, BIT5);
        }
        if ((CIF_IS[d05_1] >= CIF_DET_STORING) && (CIF_IS[d05_2] >= CIF_DET_STORING))
        {
            MK[fc05] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc05, prmperc05, BIT5);
        }
        if ((CIF_IS[d08_1a] >= CIF_DET_STORING) && (CIF_IS[d08_1b] >= CIF_DET_STORING) && (CIF_IS[d08_2a] >= CIF_DET_STORING) && (CIF_IS[d08_3a] >= CIF_DET_STORING) ||
            (CIF_IS[d08_2b] >= CIF_DET_STORING) && (CIF_IS[d08_3b] >= CIF_DET_STORING))
        {
            MK[fc08] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc08, prmperc08, BIT5);
        }
        if ((CIF_IS[d09_1] >= CIF_DET_STORING) && (CIF_IS[d09_2] >= CIF_DET_STORING))
        {
            MK[fc09] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc09, prmperc09, BIT5);
        }
        if ((CIF_IS[d11_1] >= CIF_DET_STORING) && (CIF_IS[d11_2] >= CIF_DET_STORING) && (CIF_IS[d11_3] >= CIF_DET_STORING))
        {
            MK[fc11] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc11, prmperc11, BIT5);
        }
        if ((CIF_IS[d61_1] >= CIF_DET_STORING) && (CIF_IS[d61_2] >= CIF_DET_STORING))
        {
            MK[fc61] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc61, prmperc61, BIT5);
        }
        if ((CIF_IS[d62_1a] >= CIF_DET_STORING) && (CIF_IS[d62_1b] >= CIF_DET_STORING) && (CIF_IS[d62_2a] >= CIF_DET_STORING) ||
            (CIF_IS[d62_2b] >= CIF_DET_STORING))
        {
            MK[fc62] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc62, prmperc62, BIT5);
        }
        if ((CIF_IS[d67_1] >= CIF_DET_STORING) && (CIF_IS[d67_2] >= CIF_DET_STORING))
        {
            MK[fc67] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc67, prmperc67, BIT5);
        }
        if ((CIF_IS[d68_1a] >= CIF_DET_STORING) && (CIF_IS[d68_1b] >= CIF_DET_STORING) && (CIF_IS[d68_2a] >= CIF_DET_STORING) ||
            (CIF_IS[d68_2b] >= CIF_DET_STORING))
        {
            MK[fc68] |= BIT5;
            PercentageVerlengGroenTijden_halfstar(fc68, prmperc68, BIT5);
        }

    }
    else
    {
        /* percentage VG bij defect alle kop/lange lussen */
        /* ---------------------------------------------- */
        if ((CIF_IS[d03_1] >= CIF_DET_STORING) && (CIF_IS[d03_2] >= CIF_DET_STORING))
        {
            MK[fc03] |= BIT5;
            PercentageVerlengGroenTijden(fc03, mperiod, PRM[prmperc03], 
                                         8, TVGA_max[fc03], PRM[prmvg1_03], PRM[prmvg2_03], PRM[prmvg3_03], PRM[prmvg4_03], PRM[prmvg5_03], PRM[prmvg6_03], PRM[prmvg7_03]);
        }
        if ((CIF_IS[d05_1] >= CIF_DET_STORING) && (CIF_IS[d05_2] >= CIF_DET_STORING))
        {
            MK[fc05] |= BIT5;
            PercentageVerlengGroenTijden(fc05, mperiod, PRM[prmperc05], 
                                         8, TVGA_max[fc05], PRM[prmvg1_05], PRM[prmvg2_05], PRM[prmvg3_05], PRM[prmvg4_05], PRM[prmvg5_05], PRM[prmvg6_05], PRM[prmvg7_05]);
        }
        if ((CIF_IS[d08_1a] >= CIF_DET_STORING) && (CIF_IS[d08_1b] >= CIF_DET_STORING) && (CIF_IS[d08_2a] >= CIF_DET_STORING) && (CIF_IS[d08_3a] >= CIF_DET_STORING) ||
            (CIF_IS[d08_2b] >= CIF_DET_STORING) && (CIF_IS[d08_3b] >= CIF_DET_STORING))
        {
            MK[fc08] |= BIT5;
            PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmperc08], 
                                         8, TVGA_max[fc08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
        }
        if ((CIF_IS[d09_1] >= CIF_DET_STORING) && (CIF_IS[d09_2] >= CIF_DET_STORING))
        {
            MK[fc09] |= BIT5;
            PercentageVerlengGroenTijden(fc09, mperiod, PRM[prmperc09], 
                                         8, TVGA_max[fc09], PRM[prmvg1_09], PRM[prmvg2_09], PRM[prmvg3_09], PRM[prmvg4_09], PRM[prmvg5_09], PRM[prmvg6_09], PRM[prmvg7_09]);
        }
        if ((CIF_IS[d11_1] >= CIF_DET_STORING) && (CIF_IS[d11_2] >= CIF_DET_STORING) && (CIF_IS[d11_3] >= CIF_DET_STORING))
        {
            MK[fc11] |= BIT5;
            PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmperc11], 
                                         8, TVGA_max[fc11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
        }
        if ((CIF_IS[d61_1] >= CIF_DET_STORING) && (CIF_IS[d61_2] >= CIF_DET_STORING))
        {
            MK[fc61] |= BIT5;
            PercentageVerlengGroenTijden(fc61, mperiod, PRM[prmperc61], 
                                         8, TVGA_max[fc61], PRM[prmvg1_61], PRM[prmvg2_61], PRM[prmvg3_61], PRM[prmvg4_61], PRM[prmvg5_61], PRM[prmvg6_61], PRM[prmvg7_61]);
        }
        if ((CIF_IS[d62_1a] >= CIF_DET_STORING) && (CIF_IS[d62_1b] >= CIF_DET_STORING) && (CIF_IS[d62_2a] >= CIF_DET_STORING) ||
            (CIF_IS[d62_2b] >= CIF_DET_STORING))
        {
            MK[fc62] |= BIT5;
            PercentageVerlengGroenTijden(fc62, mperiod, PRM[prmperc62], 
                                         8, TVGA_max[fc62], PRM[prmvg1_62], PRM[prmvg2_62], PRM[prmvg3_62], PRM[prmvg4_62], PRM[prmvg5_62], PRM[prmvg6_62], PRM[prmvg7_62]);
        }
        if ((CIF_IS[d67_1] >= CIF_DET_STORING) && (CIF_IS[d67_2] >= CIF_DET_STORING))
        {
            MK[fc67] |= BIT5;
            PercentageVerlengGroenTijden(fc67, mperiod, PRM[prmperc67], 
                                         8, TVGA_max[fc67], PRM[prmvg1_67], PRM[prmvg2_67], PRM[prmvg3_67], PRM[prmvg4_67], PRM[prmvg5_67], PRM[prmvg6_67], PRM[prmvg7_67]);
        }
        if ((CIF_IS[d68_1a] >= CIF_DET_STORING) && (CIF_IS[d68_1b] >= CIF_DET_STORING) && (CIF_IS[d68_2a] >= CIF_DET_STORING) ||
            (CIF_IS[d68_2b] >= CIF_DET_STORING))
        {
            MK[fc68] |= BIT5;
            PercentageVerlengGroenTijden(fc68, mperiod, PRM[prmperc68], 
                                         8, TVGA_max[fc68], PRM[prmvg1_68], PRM[prmvg2_68], PRM[prmvg3_68], PRM[prmvg4_68], PRM[prmvg5_68], PRM[prmvg6_68], PRM[prmvg7_68]);
        }

    }

    DetectieStoring_Add();
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

    /* Nalopen */
    /* ------- */
    gk_InitGK();
    gk_InitNL();

    /* TESTOMGEVING */
    /* ============ */
    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST && !defined VISSIM)
        if (!SAPPLPROG)
        {
        #ifdef DUURTEST
            //stuffkey(F5KEY);
            stuffkey(ALTF9KEY);
            stuffkey(F2KEY);
            stuffkey(CTRLALTF3KEY);
            stuffkey(F4KEY);
            //stuffkey(F10KEY);
            //stuffkey(F11KEY);
            CFB_max = 0; /* maximum aantal herstarts na fasebewaking */
            #ifndef NO_VLOG
                MONTYPE[MONTYPE_DATI] = 0;
                LOGTYPE[LOGTYPE_DATI] = 0;
            #endif
        #endif
        }
    #endif
#if defined AUTOMAAT || defined AUTOMAAT_TEST
    /* verwijderen BG, OG en FL tijden in ITSAPP */
    for (i = 0; i < DPMAX; ++i) {
        TBG_max[i]=NG;
        TOG_max[i]=NG;
#if !defined NO_DDFLUTTER
        TFL_max[i]=NG;
        CFL_max[i]=NG;
#endif
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

    #ifndef NO_RIS
        #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
            /* zet display van RIS-berichten aan in de testomgeving */
            /* ---------------------------------------------------- */
            RIS_DIPRM[RIS_DIPRM_ALL] = 1;
        #endif
    #endif

    #if (CCOL_V >= 110 && !defined TDHAMAX) || (CCOL_V < 110)
        init_tdhdyn();
    #endif

    post_init_application();
    post_init_application_halfstar();
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
    CIF_GUS[usovtevroeg61bus] = MM[mstp61bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd61bus] = MM[mstp61bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat61bus] = MM[mstp61bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg62bus] = MM[mstp62bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd62bus] = MM[mstp62bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat62bus] = MM[mstp62bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg67bus] = MM[mstp67bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd67bus] = MM[mstp67bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat67bus] = MM[mstp67bus] == CIF_TE_LAAT;
    CIF_GUS[usovtevroeg68bus] = MM[mstp68bus] == CIF_TE_VROEG;
    CIF_GUS[usovoptijd68bus] = MM[mstp68bus] == CIF_OP_TIJD;
    CIF_GUS[usovtelaat68bus] = MM[mstp68bus] == CIF_TE_LAAT;

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

    /* OVM Rotterdam: extra/minder groen */
    if (TVG_max[fc02] > -1) TVG_max[fc02] += PRM[prmovmextragroen_02];
    if (TVG_max[fc02] > -1) TVG_max[fc02] -= PRM[prmovmmindergroen_02];
    if (TVG_max[fc03] > -1) TVG_max[fc03] += PRM[prmovmextragroen_03];
    if (TVG_max[fc03] > -1) TVG_max[fc03] -= PRM[prmovmmindergroen_03];
    if (TVG_max[fc05] > -1) TVG_max[fc05] += PRM[prmovmextragroen_05];
    if (TVG_max[fc05] > -1) TVG_max[fc05] -= PRM[prmovmmindergroen_05];
    if (TVG_max[fc08] > -1) TVG_max[fc08] += PRM[prmovmextragroen_08];
    if (TVG_max[fc08] > -1) TVG_max[fc08] -= PRM[prmovmmindergroen_08];
    if (TVG_max[fc09] > -1) TVG_max[fc09] += PRM[prmovmextragroen_09];
    if (TVG_max[fc09] > -1) TVG_max[fc09] -= PRM[prmovmmindergroen_09];
    if (TVG_max[fc11] > -1) TVG_max[fc11] += PRM[prmovmextragroen_11];
    if (TVG_max[fc11] > -1) TVG_max[fc11] -= PRM[prmovmmindergroen_11];
    if (TVG_max[fc61] > -1) TVG_max[fc61] += PRM[prmovmextragroen_61];
    if (TVG_max[fc61] > -1) TVG_max[fc61] -= PRM[prmovmmindergroen_61];
    if (TVG_max[fc62] > -1) TVG_max[fc62] += PRM[prmovmextragroen_62];
    if (TVG_max[fc62] > -1) TVG_max[fc62] -= PRM[prmovmmindergroen_62];
    if (TVG_max[fc67] > -1) TVG_max[fc67] += PRM[prmovmextragroen_67];
    if (TVG_max[fc67] > -1) TVG_max[fc67] -= PRM[prmovmmindergroen_67];
    if (TVG_max[fc68] > -1) TVG_max[fc68] += PRM[prmovmextragroen_68];
    if (TVG_max[fc68] > -1) TVG_max[fc68] -= PRM[prmovmmindergroen_68];


    CyclustijdMeting(tcycl, schcycl, SML && (ML == ML1), schcycl_reset, mlcycl);

/* Verklikken inkomende pelotons */
    CIF_GUS[uspelinKOP02] = IH[hpelinKOP02];

    /* Tbv parametreerbare blokindeling: reset A voor niet toegedeeld fasen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (BL[fc] & BIT10) A[fc] = FALSE;
    }

    #ifdef SUMO
        for (isumo = 0; isumo < 44; ++isumo)
        {
            SUMOStateString[isumo] = 'O';
            if (SUMOIds[isumo] != NG)
            {
                SUMOStateString[isumo] = G[SUMOIds[isumo]] ? 'G' : GL[SUMOIds[isumo]] ? 'y' : 'r';
            }
        }
        SUMOStateString[44] = '\0';
        TraCISetTrafficLightState("G5", SUMOStateString);

        TraCIControlSimStep();
    #endif /* #ifdef SUMO */

    PostApplication_Add();
    PostApplication_halfstar();
}
void application(void)
{
    PreApplication();

    KlokPerioden();
    Aanvragen();
    if (IH[hplact])
    {
        Verlenggroen_halfstar();
        Wachtgroen_halfstar();
        Meetkriterium();
        Meetkriterium_halfstar();
        Meeverlengen_halfstar();
        Synchronisaties();
        Synchronisaties_halfstar();
        RealisatieAfhandeling_halfstar();
        Alternatief_halfstar();
        FileVerwerking();
        FileVerwerking_halfstar();
        DetectieStoring();
        DetectieStoring_halfstar();
    }
    else
    {
        Verlenggroen();
    BepaalRealisatieTijden();
        Wachtgroen();
        Meetkriterium();
        Meeverlengen();
        Synchronisaties();
        RealisatieAfhandeling();
        FileVerwerking();
        DetectieStoring();
    }
    if (IH[hmlact] || SCH[schovpriople]) AfhandelingPrio();
    else
    {
        int fc;
        RTFB &= ~PRIO_RTFB_BIT;
        for (fc = 0; fc < FCMAX; ++fc)
        {
            Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
            RW[fc] &= ~PRIO_RW_BIT;
            RR[fc] &= ~PRIO_RR_BIT;
            YV[fc] &= ~PRIO_YV_BIT;
            YM[fc] &= ~PRIO_YM_BIT;
            MK[fc] &= ~PRIO_MK_BIT;
            PP[fc] &= ~PRIO_PP_BIT;
        }
    }
    Fixatie(isfix, 0, FCMAX-1, SCH[schbmfix], PRML, ML);

    PostApplication();
}

void system_application(void)
{
    int ov = 0;

    /* aanroepen PTP loop tbv seriele koppeling */
    ptp_pre_system_app();

    pre_system_application();
    pre_system_application_halfstar();

    /* file verklikking */
    /* ---------------- */
    CIF_GUS[usFile68af] = IH[hfileFile68af];

    /* PRIO verklikking */
    /* ---------------- */
    CIF_GUS[usovinm02karbus] = C[cvc02karbus];
    CIF_GUS[usovinm02risov] = C[cvc02risov];
    CIF_GUS[usovinm02risvrw] = C[cvc02risvrw];
    CIF_GUS[usovinm03bus] = C[cvc03bus];
    CIF_GUS[usovinm03risov] = C[cvc03risov];
    CIF_GUS[usovinm03risvrw] = C[cvc03risvrw];
    CIF_GUS[usovinm05bus] = C[cvc05bus];
    CIF_GUS[usovinm05risov] = C[cvc05risov];
    CIF_GUS[usovinm05risvrw] = C[cvc05risvrw];
    CIF_GUS[usovinm08bus] = C[cvc08bus];
    CIF_GUS[usovinm08risov] = C[cvc08risov];
    CIF_GUS[usovinm08risvrw] = C[cvc08risvrw];
    CIF_GUS[usovinm09bus] = C[cvc09bus];
    CIF_GUS[usovinm09risov] = C[cvc09risov];
    CIF_GUS[usovinm09risvrw] = C[cvc09risvrw];
    CIF_GUS[usovinm11bus] = C[cvc11bus];
    CIF_GUS[usovinm11risov] = C[cvc11risov];
    CIF_GUS[usovinm11risvrw] = C[cvc11risvrw];
    CIF_GUS[usovinm22fiets] = C[cvc22fiets];
    CIF_GUS[usovinm28fiets] = C[cvc28fiets];
    CIF_GUS[usovinm61bus] = C[cvc61bus];
    CIF_GUS[usovinm61risov] = C[cvc61risov];
    CIF_GUS[usovinm61risvrw] = C[cvc61risvrw];
    CIF_GUS[usovinm62bus] = C[cvc62bus];
    CIF_GUS[usovinm62risov] = C[cvc62risov];
    CIF_GUS[usovinm62risvrw] = C[cvc62risvrw];
    CIF_GUS[usovinm67bus] = C[cvc67bus];
    CIF_GUS[usovinm67risov] = C[cvc67risov];
    CIF_GUS[usovinm67risvrw] = C[cvc67risvrw];
    CIF_GUS[usovinm68bus] = C[cvc68bus];
    CIF_GUS[usovinm68risov] = C[cvc68risov];
    CIF_GUS[usovinm68risvrw] = C[cvc68risvrw];
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

    /* aanroepen PTP loop tbv seriele koppeling */
    ptp_post_system_app();

    SegmentSturing(ML+1, ussegm1, ussegm2, ussegm3, ussegm4, ussegm5, ussegm6, ussegm7);

    /* Uitsturen actieve module */
    CIF_GUS[usML1] = ML == ML1;
    CIF_GUS[usML2] = ML == ML2;
    CIF_GUS[usML3] = ML == ML3;
    CIF_GUS[usML4] = ML == ML4;
    CIF_GUS[usML5] = ML == ML5;

    /* Verklikken wijzigingen OV-teller */
    PRIO_teller(cvc02karbus, schcovuber);
    PRIO_teller(cvc02risov, schcovuber);
    PRIO_teller(cvc02risvrw, schcovuber);
    PRIO_teller(cvc03bus, schcovuber);
    PRIO_teller(cvc03risov, schcovuber);
    PRIO_teller(cvc03risvrw, schcovuber);
    PRIO_teller(cvc05bus, schcovuber);
    PRIO_teller(cvc05risov, schcovuber);
    PRIO_teller(cvc05risvrw, schcovuber);
    PRIO_teller(cvc08bus, schcovuber);
    PRIO_teller(cvc08risov, schcovuber);
    PRIO_teller(cvc08risvrw, schcovuber);
    PRIO_teller(cvc09bus, schcovuber);
    PRIO_teller(cvc09risov, schcovuber);
    PRIO_teller(cvc09risvrw, schcovuber);
    PRIO_teller(cvc11bus, schcovuber);
    PRIO_teller(cvc11risov, schcovuber);
    PRIO_teller(cvc11risvrw, schcovuber);
    PRIO_teller(cvc22fiets, schcovuber);
    PRIO_teller(cvc28fiets, schcovuber);
    PRIO_teller(cvc61bus, schcovuber);
    PRIO_teller(cvc61risov, schcovuber);
    PRIO_teller(cvc61risvrw, schcovuber);
    PRIO_teller(cvc62bus, schcovuber);
    PRIO_teller(cvc62risov, schcovuber);
    PRIO_teller(cvc62risvrw, schcovuber);
    PRIO_teller(cvc67bus, schcovuber);
    PRIO_teller(cvc67risov, schcovuber);
    PRIO_teller(cvc67risvrw, schcovuber);
    PRIO_teller(cvc68bus, schcovuber);
    PRIO_teller(cvc68risov, schcovuber);
    PRIO_teller(cvc68risvrw, schcovuber);
    PRIO_teller(cvchd02, schcovuber);
    PRIO_teller(cvchd03, schcovuber);
    PRIO_teller(cvchd05, schcovuber);
    PRIO_teller(cvchd08, schcovuber);
    PRIO_teller(cvchd09, schcovuber);
    PRIO_teller(cvchd11, schcovuber);
    PRIO_teller(cvchd61, schcovuber);
    PRIO_teller(cvchd62, schcovuber);
    PRIO_teller(cvchd67, schcovuber);
    PRIO_teller(cvchd68, schcovuber);

    /* School ingreep: knipperen wachtlicht */
    if (SCH[schschoolingreep33]) CIF_GUS[uswtk33a] = CIF_GUS[uswtk33a] && !(IH[hschoolingreepdk33a] && Knipper_1Hz) || G[fc33] && D[dk33a] && IH[hschoolingreepdk33a] && Knipper_1Hz;
    if (SCH[schschoolingreep33]) CIF_GUS[uswtk33b] = CIF_GUS[uswtk33b] && !(IH[hschoolingreepdk33b] && Knipper_1Hz) || G[fc33] && D[dk33b] && IH[hschoolingreepdk33b] && Knipper_1Hz;
    if (SCH[schschoolingreep34]) CIF_GUS[uswtk34a] = CIF_GUS[uswtk34a] && !(IH[hschoolingreepdk34a] && Knipper_1Hz) || G[fc34] && D[dk34a] && IH[hschoolingreepdk34a] && Knipper_1Hz;
    if (SCH[schschoolingreep34]) CIF_GUS[uswtk34b] = CIF_GUS[uswtk34b] && !(IH[hschoolingreepdk34b] && Knipper_1Hz) || G[fc34] && D[dk34b] && IH[hschoolingreepdk34b] && Knipper_1Hz;

    #ifndef NO_RIS
        #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
            /* simulatie van RIS berichten */
            /* --------------------------- */
            ris_simulation(SAPPLPROG);
        #endif
            /* RIS-Controller */
            /* -------------- */
            ris_controller(SAPPLPROG, TRUE);
    #endif

    post_system_application();
    post_system_application_halfstar();
}

void system_application2(void)
{
#if (!defined NO_TIMETOX)
    int i;
#endif
#if (!defined NO_TIMETOX)
    int fc;
#endif

#ifndef NO_VLOG
    mon3_mon4_buffers(SAPPLPROG, PRM[prmmaxtvgvlog], PRM[prmmaxtfbvlog]);
    #ifndef NO_VLOG_200
        VLOG_mon5_buffer();
    #endif 
#if (!defined AUTOMAAT) || (defined VISSIM)
        file_uber_to_file_hour(LOGFILE_NUMBER_MAX, LOGFILE_LENGTH_MAX);
    #endif
#endif

    #ifdef AUTOMAAT
        #ifndef NO_RIS
            /* Weggeschreven SSM (ACTIVEPRIO)-berichten ‘laten negeren’ voor de Applicatiecontainer */
            if (CIF_WPS[CIF_PROG_CONTROL] != CIF_CONTROL_INCONTROL)
            {
                /* zijn er SSM (ACTIVEPRIO)-berichten weggeschreven? */
                if (RIF_ACTIVEPRIO_AP_WRITE != RIF_ACTIVEPRIO_AP_READ)
                {
                    /* zet de schrijfpointer terug */
                    RIF_ACTIVEPRIO_AP_WRITE = RIF_ACTIVEPRIO_AP_READ;
                }
            }
        #endif
    #endif

    #ifndef NO_TIMETOX
        /* UC4 */
        /* eigenlijk nog per richting een schakelaar of er altijd NG moet worden gestuurd (nu is het een algemene schakelaar) */
        for (i = 0; i < FCMAX; ++i)
        {
            timings_uc4(fc02 + i, mrealtijd02 + i, mrealtijdmin02 + i, mrealtijdmax02 + i, prmttxconfidence15, schtxconfidence15ar, schtimings02 + i);
        }
        if (!SCH[schconfidence15fix])
        {
            for (i = 0; i < FCMAX; ++i)
            {
                P[fc02 + i] &= ~BIT11;
            }
        }

        if (RT[tfo0522] || T[tfo0522]) { P[fc22] &= ~BIT11; P[fc05] &= ~BIT11; }
        if (RT[tfo0532] || T[tfo0532]) { P[fc32] &= ~BIT11; P[fc05] &= ~BIT11; }
        if (RT[tfo1126] || T[tfo1126]) { P[fc26] &= ~BIT11; P[fc11] &= ~BIT11; }

        pre_msg_fctiming();

        msg_fctiming(PRM[prmlatencyminendsg]);

        /* Voedende richting fc02 alleen P als naloop een P heeft of al groen is */
        if (!((P[fc62] & BIT11) || G[fc02]) && (P[fc02] & BIT11)) P[fc02] &= ~BIT11;
        /* P doorzetten */
        if ((P[fc02] & BIT11) && R[fc02]) P[fc62] |= BIT11;

        /* Voedende richting fc08 alleen P als naloop een P heeft of al groen is */
        if (!((P[fc68] & BIT11) || G[fc08]) && (P[fc08] & BIT11)) P[fc08] &= ~BIT11;
        /* P doorzetten */
        if ((P[fc08] & BIT11) && R[fc08]) P[fc68] |= BIT11;

        /* Voedende richting fc11 alleen P als naloop een P heeft of al groen is */
        if (!((P[fc68] & BIT11) || G[fc11]) && (P[fc11] & BIT11)) P[fc11] &= ~BIT11;
        /* P doorzetten */
        if ((P[fc11] & BIT11) && R[fc11]) P[fc68] |= BIT11;

        /* Voedende richting fc22 alleen P als naloop een P heeft of al groen is */
        if (!((P[fc21] & BIT11) || G[fc22]) && (P[fc22] & BIT11)) P[fc22] &= ~BIT11;
        /* P doorzetten */
        if ((P[fc22] & BIT11) && R[fc22]) P[fc21] |= BIT11;

        /* Voedende richting fc82 alleen P als naloop een P heeft of al groen is */
        if (!((P[fc81] & BIT11) || G[fc82]) && (P[fc82] & BIT11)) P[fc82] &= ~BIT11;
        /* P doorzetten */
        if ((P[fc82] & BIT11) && R[fc82]) P[fc81] |= BIT11;

    #endif

#if !(defined NO_TIMETOX) && !defined NO_TIMINGS_PRINT && (!defined (AUTOMAAT) || defined (VISSIM)) && !defined AUTOMAAT_TEST
    if (display) {
        xyprintf( 92, 8 + FC_MAX,"-----");
        xyprintf( 98, 8 + FC_MAX,"STATE");
        xyprintf(104, 8 + FC_MAX,"MINEND");
        xyprintf(111, 8 + FC_MAX,"MAXEND");
        xyprintf(118, 8 + FC_MAX,"LIKELY");
        xyprintf(125, 8 + FC_MAX,"CONF");
        xyprintf(130, 8 + FC_MAX,"MASK");
        xyprintf(135, 8 + FC_MAX,"START");
        for (i = 0; i < FC_MAX; i++) {
            xyprintf( 92, 9 + FC_MAX + i, "fc%3s", FC_code[i]);
            xyprintf( 98, 9 + FC_MAX + i, "%5d", CIF_FC_TIMING[i][0][CIF_TIMING_EVENTSTATE]);
            xyprintf(104, 9 + FC_MAX + i, "%6d", CIF_FC_TIMING[i][0][CIF_TIMING_MINENDTIME]);
            xyprintf(111, 9 + FC_MAX + i, "%6d", CIF_FC_TIMING[i][0][CIF_TIMING_MAXENDTIME]);
            xyprintf(118, 9 + FC_MAX + i, "%6d", CIF_FC_TIMING[i][0][CIF_TIMING_LIKELYTIME]);
            xyprintf(125, 9 + FC_MAX + i, "%4d", CIF_FC_TIMING[i][0][CIF_TIMING_CONFIDENCE]);
            xyprintf(130, 9 + FC_MAX + i, "%4d", CIF_FC_TIMING[i][0][CIF_TIMING_MASK]);
            xyprintf(135, 9 + FC_MAX + i, "%5d", CIF_FC_TIMING[i][0][CIF_TIMING_STARTTIME]);
        }
    }
#endif

#if !(defined NO_TIMETOX)
#if !(defined NO_RIS)
#if !(defined NO_PRIO)
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (C[cvc02karbus] && R[fc] && TIG[fc02][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc02risov] && R[fc] && TIG[fc02][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc02risvrw] && R[fc] && TIG[fc02][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc03bus] && R[fc] && TIG[fc03][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc03risov] && R[fc] && TIG[fc03][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc03risvrw] && R[fc] && TIG[fc03][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc05bus] && R[fc] && TIG[fc05][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc05risov] && R[fc] && TIG[fc05][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc05risvrw] && R[fc] && TIG[fc05][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc08bus] && R[fc] && TIG[fc08][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc08risov] && R[fc] && TIG[fc08][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc08risvrw] && R[fc] && TIG[fc08][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc09bus] && R[fc] && TIG[fc09][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc09risov] && R[fc] && TIG[fc09][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc09risvrw] && R[fc] && TIG[fc09][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc11bus] && R[fc] && TIG[fc11][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc11risov] && R[fc] && TIG[fc11][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc11risvrw] && R[fc] && TIG[fc11][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc22fiets] && R[fc] && TIG[fc22][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_FIETS_PELOTON_INGREEP;
        if (C[cvc28fiets] && R[fc] && TIG[fc28][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_FIETS_PELOTON_INGREEP;
        if (C[cvc61bus] && R[fc] && TIG[fc61][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc61risov] && R[fc] && TIG[fc61][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc61risvrw] && R[fc] && TIG[fc61][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc62bus] && R[fc] && TIG[fc62][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc62risov] && R[fc] && TIG[fc62][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc62risvrw] && R[fc] && TIG[fc62][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc67bus] && R[fc] && TIG[fc67][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc67risov] && R[fc] && TIG[fc67][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc67risvrw] && R[fc] && TIG[fc67][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvc68bus] && R[fc] && TIG[fc68][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc68risov] && R[fc] && TIG[fc68][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_OV_INGREEP;
        if (C[cvc68risvrw] && R[fc] && TIG[fc68][fc])  CIF_FC_RWT[fc] |= CIF_FC_RWT_VRACHTVERKEER_INGREEP;
        if (C[cvchd02] && R[fc] && TIG[fc02][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd03] && R[fc] && TIG[fc03][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd05] && R[fc] && TIG[fc05][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd08] && R[fc] && TIG[fc08][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd09] && R[fc] && TIG[fc09][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd11] && R[fc] && TIG[fc11][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd61] && R[fc] && TIG[fc61][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd62] && R[fc] && TIG[fc62][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd67] && R[fc] && TIG[fc67][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (C[cvchd68] && R[fc] && TIG[fc68][fc]) CIF_FC_RWT[fc] |= CIF_FC_RWT_HULPDIENST_INGREEP;
        if (SG[fc]) CIF_FC_RWT[fc] = 0;
    }
#endif /* NO_PRIO */
#endif /* NO_RIS */
#endif /* NO_TIMETOX */


    post_system_application2();
}

#define ENDDUMP 21

void dump_application(void)
{

    post_dump_application();
    post_dump_application_halfstar();
}

#ifdef CCOL_IS_SPECIAL
void PrioSpecialSignals();
void is_special_signals(void)
{
    #ifdef SUMO
    for (isumo = 0; isumo < DPMAX; isumo++)
    {
        if (isumo == ddummyhdkarin03 || isumo == ddummyhdkarin05 || isumo == ddummyhdkarin08 || isumo == ddummyhdkarin09 || isumo == ddummyhdkarin11 || isumo == ddummyhdkarin61 || isumo == ddummyhdkarin62 || isumo == ddummyhdkarin67 || isumo == ddummyhdkarin68 || isumo == ddummyhdkaruit03 || isumo == ddummyhdkaruit05 || isumo == ddummyhdkaruit08 || isumo == ddummyhdkaruit09 || isumo == ddummyhdkaruit11 || isumo == ddummyhdkaruit61 || isumo == ddummyhdkaruit62 || isumo == ddummyhdkaruit67 || isumo == ddummyhdkaruit68 || isumo == dk84 || isumo == dk28 || isumo == dk24 || isumo == dk22        )
        {
            continue;
        }
        CIF_IS[isumo] = FALSE;
        for (int d = 0; d < 3; ++d)
        {
            if (strlen(SUMODetectors[isumo].SumoNamen[d]) > 1)
            {
                if (!SUMODetectors[isumo].Selectief)
                {
                    double dd = TraCIGetLaneAreaLastStepOccupancy(SUMODetectors[isumo].SumoNamen[d]);
                    if (dd > 0.1) CIF_IS[isumo] = TRUE;
                }
                else
                {
                    int dd = TraCIGetInductionLoopLastStepVehicleNumber(SUMODetectors[isumo].SumoNamen[d], 0);
                    if (dd != 0) CIF_IS[isumo] = TRUE;
                }
            }
        }
    }
    CIF_ISWIJZ = TRUE;
    #endif /* #ifdef SUMO */

    PrioSpecialSignals();
    SpecialSignals_Add();
}
#endif

