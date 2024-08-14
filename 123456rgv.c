/* IMPLEMENTATIE ROBUGROVER */
/* ------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456rgv.c
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   14-08-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable) ISG
 *
 ************************************************************************************/

/* defines voor ROBUGROVER */
#define MAX_AANTAL_CONFLICTGROEPEN 2
mulv TC[MAX_AANTAL_CONFLICTGROEPEN];
mulv TC_max, DD_anyfase;
#if (CCOL_V >= 95) && !defined NO_TIGMAX
    mulv TIG_ontwerp[FCMAX][FCMAX];
#else
    mulv TO_ontwerp[FCMAX][FCMAX];
#endif
mulv TISG_rgv[FCMAX][FCMAX];
mulv TISG_basis[FCMAX][FCMAX];

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined VISSIM)
    mulv TC_rgv[MAX_AANTAL_CONFLICTGROEPEN];
    char * TC_string$[MAX_AANTAL_CONFLICTGROEPEN];
#endif

/* Robugrover includes */
#include "rgvfunc.c"
#include "rgv_overslag.c"

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined VISSIM)
    #include "winmg.c"
#endif

boolv Correctie_TISG_rgv_add(void)
{
    return FALSE;
}

void BepaalInterStartGroenTijden_rgv_Add(void)
{
}

void BepaalInterStartGroenTijden_rgv(void)
{
    boolv wijziging = TRUE;

    InitInterStartGroenTijden_rgv();
    InterStartGroenTijden_VulHaldeConflictenIn_rgv();
    InterStartGroenTijden_VulGroenGroenConflictenIn_rgv();

    /* Pas interstartgroentijden aan a.g.v. nalopen */
    InterStartGroenTijd_NLEG_rgv(fc02, fc62, tnlfg0262, tnlfgd0262, tnleg0262, tnlegd0262, tvgnaloop0262);
    InterStartGroenTijd_NLEG_rgv(fc08, fc68, tnlfg0868, tnlfgd0868, tnleg0868, tnlegd0868, tvgnaloop0868);
    InterStartGroenTijd_NLEG_rgv(fc11, fc68, tnlfg1168, tnlfgd1168, tnleg1168, tnlegd1168, tvgnaloop1168);
    InterStartGroenTijd_NLEG_rgv(fc22, fc21, tnlfg2221, NG, tnleg2221, NG, tvgnaloop2221);
    InterStartGroenTijd_NLSG_rgv(fc31, fc32, NG, tnlsgd3132);
    InterStartGroenTijd_NLSG_rgv(fc32, fc31, NG, tnlsgd3231);
    InterStartGroenTijd_NLSG_rgv(fc33, fc34, NG, tnlsgd3334);
    InterStartGroenTijd_NLSG_rgv(fc34, fc33, NG, tnlsgd3433);
    InterStartGroenTijd_NLEG_rgv(fc82, fc81, tnlfg8281, tnlfgd8281, tnleg8281, tnlegd8281, tvgnaloop8281);
    do
    {
        wijziging = FALSE;

        /* Gelijkstart / voorstart / late release */
        if (SCH[schgs2484]) wijziging |= Correctie_TISG_Gelijkstart_rgv(fc24, fc84);
        wijziging |= Correctie_TISG_Voorstart_rgv(fc22, fc05, tvs2205);
        wijziging |= Correctie_TISG_Voorstart_rgv(fc32, fc05, tvs3205);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc26, fc11, tlr2611);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc02, fc62, prmxnl0262);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc08, fc68, prmxnl0868);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc11, fc68, prmxnl1168);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc22, fc21, prmxnl2221);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc31, fc32, prmxnl3132);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc32, fc31, prmxnl3231);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc33, fc34, prmxnl3334);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc34, fc33, prmxnl3433);
        wijziging |= Correctie_TISG_LateRelease_rgv(fc82, fc81, prmxnl8281);
        wijziging |= Correctie_TISG_rgv_add();
    } while (wijziging);

    BepaalInterStartGroenTijden_rgv_Add();
}

void rgv_add(void)
{
    static boolv DD[FCMAX];            /* Detectie storing (Detection Disabled) */
    static boolv MK1[FCMAX];           /* Meetkriterium op rijstrook 1 */
    static boolv MK2[FCMAX];           /* Meetkriterium op rijstrook 2 */
    static mulv TVG_rgv_old[FCMAX];   /* Opslag 'old' TVG tijden */
    static mulv TVG_rgv_older[FCMAX]; /* Opslag 'older' TVG tijden */
    static mulv rgvinit = 1;          /* Onthouden initialisatie */
    int teller = 0;
#if (defined AUTOMAAT || defined AUTOMAAT_TEST)
    int fc;
#endif
    int i, j;
    /* detectiestoringen voor de fasecycli */
    /* ----------------------------------- */
    RT[tfd02_1a] = SD[d02_1a] || ED[d02_1a] || !VG[fc02]; 
    RT[tfd02_1b] = SD[d02_1b] || ED[d02_1b] || !VG[fc02]; 
    RT[tfd03_1] = SD[d03_1] || ED[d03_1] || !VG[fc03]; 
    RT[tfd05_1] = SD[d05_1] || ED[d05_1] || !VG[fc05]; 
    RT[tfd08_1a] = SD[d08_1a] || ED[d08_1a] || !VG[fc08]; 
    RT[tfd08_1b] = SD[d08_1b] || ED[d08_1b] || !VG[fc08]; 
    RT[tfd09_1] = SD[d09_1] || ED[d09_1] || !VG[fc09]; 
    RT[tfd11_1] = SD[d11_1] || ED[d11_1] || !VG[fc11]; 

    DD_anyfase = 0;
    #if (defined AUTOMAAT || defined AUTOMAAT_TEST)
        DD[fc02] = (CIF_IS[d02_1a] >= CIF_DET_STORING) || (CIF_IS[d02_1b] >= CIF_DET_STORING)
                    || (CIF_IS[d02_2a] >= CIF_DET_STORING) || (CIF_IS[d02_2b] >= CIF_DET_STORING) || (CIF_IS[d02_3a] >= CIF_DET_STORING) || (CIF_IS[d02_3b] >= CIF_DET_STORING)
                    || (!T[tfd02_1a] && !T[tfd02_1b]);
        DD[fc03] = (CIF_IS[d03_1] >= CIF_DET_STORING)
                    || (CIF_IS[d03_2] >= CIF_DET_STORING)
                    || (!T[tfd03_1]);
        DD[fc05] = (CIF_IS[d05_1] >= CIF_DET_STORING)
                    || (CIF_IS[d05_2] >= CIF_DET_STORING)
                    || (!T[tfd05_1]);
        DD[fc08] = (CIF_IS[d08_1a] >= CIF_DET_STORING) || (CIF_IS[d08_1b] >= CIF_DET_STORING)
                    || (CIF_IS[d08_2a] >= CIF_DET_STORING) || (CIF_IS[d08_2b] >= CIF_DET_STORING) || (CIF_IS[d08_3a] >= CIF_DET_STORING) || (CIF_IS[d08_3b] >= CIF_DET_STORING)
                    || (IH[hfileFile68af])
                    || (!T[tfd08_1a] && !T[tfd08_1b]);
        DD[fc09] = (CIF_IS[d09_1] >= CIF_DET_STORING)
                    || (CIF_IS[d09_2] >= CIF_DET_STORING)
                    || (!T[tfd09_1]);
        DD[fc11] = (CIF_IS[d11_1] >= CIF_DET_STORING)
                    || (CIF_IS[d11_2] >= CIF_DET_STORING) || (CIF_IS[d11_3] >= CIF_DET_STORING)
                    || (IH[hfileFile68af])
                    || (!T[tfd11_1]);
    #else
        DD[fc02] = FALSE;
        DD[fc03] = FALSE;
        DD[fc05] = FALSE;
        DD[fc08] = IH[hfileFile68af] ? TRUE : FALSE;
        DD[fc09] = FALSE;
        DD[fc11] = IH[hfileFile68af] ? TRUE : FALSE;
    #endif

    DD_anyfase |= DD[fc02];
    DD_anyfase |= DD[fc03];
    DD_anyfase |= DD[fc05];
    DD_anyfase |= DD[fc08];
    DD_anyfase |= DD[fc09];
    DD_anyfase |= DD[fc11];

    /* Meetkriterium MK */
    /* ---------------- */
    RT[thd02_2a] = D[d02_2a];
    RT[thd02_2b] = D[d02_2b];
    RT[thd02_3a] = D[d02_3a];
    RT[thd02_3b] = D[d02_3b];
    MK1[fc02] = SVG[fc02] || G[fc02] && MK1[fc02] && (RT[thd02_2a] || T[thd02_2a] || RT[thd02_3a] || T[thd02_3a]);
    MK2[fc02] = SVG[fc02] || G[fc02] && MK2[fc02] && (RT[thd02_2b] || T[thd02_2b] || RT[thd02_3b] || T[thd02_3b]);
    MK1[fc03] = SVG[fc03] || G[fc03] && MK1[fc03] && MK[fc03];
    MK1[fc05] = SVG[fc05] || G[fc05] && MK1[fc05] && MK[fc05];
    RT[thd08_2a] = D[d08_2a];
    RT[thd08_2b] = D[d08_2b];
    RT[thd08_3a] = D[d08_3a];
    RT[thd08_3b] = D[d08_3b];
    MK1[fc08] = SVG[fc08] || G[fc08] && MK1[fc08] && (RT[thd08_2a] || T[thd08_2a] || RT[thd08_3a] || T[thd08_3a]);
    MK2[fc08] = SVG[fc08] || G[fc08] && MK2[fc08] && (RT[thd08_2b] || T[thd08_2b] || RT[thd08_3b] || T[thd08_3b]);
    MK1[fc09] = SVG[fc09] || G[fc09] && MK1[fc09] && MK[fc09];
    MK1[fc11] = SVG[fc11] || G[fc11] && MK1[fc11] && MK[fc11];

    /* Opslaan 'oudste' TVG tijd volgens RoBuGrover */
    /* -------------------------------------------- */
    for (i = 0; i < FCMAX; ++i) TVG_rgv_older[i] = TVG_rgv[i];

    /* Aanpassen verlenggroentijden op einde verlenggroen */
    /* -------------------------------------------------- */
    rgv_verlenggroentijd2(fc02, PRM[prmmintvg_02], PRM[prmmaxtvg_02], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc02], (boolv)!SCH[schrgv_snel], (boolv)DD[fc02], (boolv)(MK1[fc02] && MK2[fc02]));
    rgv_verlenggroentijd1(fc03, PRM[prmmintvg_03], PRM[prmmaxtvg_03], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc03], (boolv)!SCH[schrgv_snel], (boolv)DD[fc03], (boolv)(MK1[fc03]));
    rgv_verlenggroentijd1(fc05, PRM[prmmintvg_05], PRM[prmmaxtvg_05], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc05], (boolv)!SCH[schrgv_snel], (boolv)DD[fc05], (boolv)(MK1[fc05]));
    rgv_verlenggroentijd2(fc08, PRM[prmmintvg_08], PRM[prmmaxtvg_08], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc08], (boolv)!SCH[schrgv_snel], (boolv)DD[fc08], (boolv)(MK1[fc08] && MK2[fc08]));
    rgv_verlenggroentijd1(fc09, PRM[prmmintvg_09], PRM[prmmaxtvg_09], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc09], (boolv)!SCH[schrgv_snel], (boolv)DD[fc09], (boolv)(MK1[fc09]));
    rgv_verlenggroentijd1(fc11, PRM[prmmintvg_11], PRM[prmmaxtvg_11], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc11], (boolv)!SCH[schrgv_snel], (boolv)DD[fc11], (boolv)(MK1[fc11]));

    /* Verlaag de verlenggroentijd indien geen primaire realisatie in de cyclus */
    /* ------------------------------------------------------------------------ */
    rgv_niet_primair(fc02, PRML, ML, SML, ML_MAX, hprreal02, PRM[prmmintvg_02], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc02]));
    rgv_niet_primair(fc03, PRML, ML, SML, ML_MAX, hprreal03, PRM[prmmintvg_03], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc03]));
    rgv_niet_primair(fc05, PRML, ML, SML, ML_MAX, hprreal05, PRM[prmmintvg_05], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc05]));
    rgv_niet_primair(fc08, PRML, ML, SML, ML_MAX, hprreal08, PRM[prmmintvg_08], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc08]));
    rgv_niet_primair(fc09, PRML, ML, SML, ML_MAX, hprreal09, PRM[prmmintvg_09], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc09]));
    rgv_niet_primair(fc11, PRML, ML, SML, ML_MAX, hprreal11, PRM[prmmintvg_11], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc11]));

    /* Opslaan 'oude' TVG tijd volgens RoBuGrover */
    /* ------------------------------------------ */
    for (i = 0; i < FCMAX; ++i) TVG_rgv_old[i] = TVG_rgv[i];

    /* correctie verlenggroentijden t.o.v. de maximum gewenste cyclustijd */
    /* ------------------------------------------------------------------ */
    #if (defined AUTOMAAT || defined AUTOMAAT_TEST) && (!defined VISSIM)
        rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc05, fc11, END);
        rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc08, fc11, fc03, fc05, END);
    #else
        BepaalInterStartGroenTijden_rgv();
        for (teller = 0; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller) TC_rgv[teller] = 0;
        teller = 0;
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc05, fc11, END);
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc08, fc11, fc03, fc05, END);
    #endif

    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined VISSIM)
        teller = 0;
        TC_string$[teller++] = "02 09 05 11";
        TC_string$[teller++] = "08 11 03 05";
    #endif

    /* corrigeer voor te veel verlaagde groentijden */
    /* -------------------------------------------- */
    /* (a.g.v. minder verhoogde groentijd dan waarop de verlaagde groentijd was aangepast) */
    for(i = 0; i < FCMAX; ++i) 
    {
        if ((TVG_rgv_old[i] > TVG_rgv_older[i]) && (TVG_rgv[i] < TVG_rgv_old[i]))
        {
            for(j = 0; j < FCMAX; ++j)
            {
                if(j != i)
                {
                    TVG_rgv[j] = TVG_rgv_old[j]; /* minder verhoogde groentijd */
                }
            }
    #if (defined AUTOMAAT || defined AUTOMAAT_TEST) && (!defined VISSIM)
        rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc05, fc11, END);
        rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc08, fc11, fc03, fc05, END);
    #else
        BepaalInterStartGroenTijden_rgv();
        for (teller = 0; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller) TC_rgv[teller] = 0;
        teller = 0;
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc05, fc11, END);
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_ISG_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc08, fc11, fc03, fc05, END);
    #endif
        }
    }

    /* Kopieer de rgv-waarden naar TVG_max */
    /* ----------------------------------- */
    TVG_max[fc02] = TVG_rgv[fc02];
    TVG_max[fc03] = TVG_rgv[fc03];
    TVG_max[fc05] = TVG_rgv[fc05];
    TVG_max[fc08] = TVG_rgv[fc08];
    TVG_max[fc09] = TVG_rgv[fc09];
    TVG_max[fc11] = TVG_rgv[fc11];

    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined (VISSIM))
        /* Toon de waarden in de testomgeving */
        /* ---------------------------------- */ 
        /* RoBuGrover verklikking in F11 scherm
        for (teller = 10; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller)
        {
            xyprintf (32, teller + 1, "%10s",TC_string$[teller]);
            xyprintf (43, teller + 1, ":%4d", TC_rgv[teller]);
        }
        xyprintf (32, teller + 2, "TVG02=%4d", TVG_max[fc02]);
        xyprintf (32, teller + 3, "TVG03=%4d", TVG_max[fc03]);
        xyprintf (32, teller + 4, "TVG05=%4d", TVG_max[fc05]);
        xyprintf (32, teller + 5, "TVG08=%4d", TVG_max[fc08]);
        xyprintf (32, teller + 6, "TVG09=%4d", TVG_max[fc09]);
        xyprintf (32, teller + 7, "TVG11=%4d", TVG_max[fc11]);
        
        */
        #ifndef DUURTEST
            MG_Bars_init(TVG_basis, TVG_rgv, 10, 750, 0, 0);
            MG_Fasen_Venster_init(szWndTitleName, fc02, fc03, fc05, fc08, fc09, fc11, END);
            MG_Bars();
        #endif
    #endif 
}

