/* IMPLEMENTATIE ROBUGROVER */
/* ------------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456rgv.c
      CCOL:   12.0
    TLCGEN:   12.4.0.9
   CCOLGEN:   12.4.0.9
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.9   14-01-2025   TLCGen      Release versie TLCGen 12.4.0.10
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

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined VISSIM)
    mulv TC_rgv[MAX_AANTAL_CONFLICTGROEPEN];
    char * TC_string$[MAX_AANTAL_CONFLICTGROEPEN];
#endif

/* Robugrover includes */
#include "rgvfunc.c"
#include "rgv_overslag.c"


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

    for(i = 0; i < FCMAX; ++i)
    {
        for(j = 0; j < FCMAX; ++j) 
        {
            #if (CCOL_V >= 95) && !defined NO_TIGMAX
                TIG_ontwerp[i][j] = TIG_max[i][j];
            #else
                TO_ontwerp[i][j] = TO_max[i][j];
            #endif
        }
    }

    /* Fictieve ontwerp ontruimingstijden obv nalooptijden
       - voor nalopen op CV of EG wordt TO_ontwerp gecorrigeerd */
    /* Fase 02 en conflicten van naloop 62 */
    #if (CCOL_V >= 95) && !defined NO_TIGMAX
        TIG_ontwerp[fc02][fc09] = TIG_max[fc62][fc09] + T_max[tnlegd0262];
        TIG_ontwerp[fc02][fc11] = TIG_max[fc62][fc11] + T_max[tnlegd0262];
        TIG_ontwerp[fc02][fc26] = TIG_max[fc62][fc26] + T_max[tnlegd0262];
    #else
        TO_ontwerp[fc02][fc09] = TO_max[fc62][fc09] + T_max[tnlegd0262];
        TO_ontwerp[fc02][fc11] = TO_max[fc62][fc11] + T_max[tnlegd0262];
        TO_ontwerp[fc02][fc26] = TO_max[fc62][fc26] + T_max[tnlegd0262];
    #endif

    /* Fase 08 en conflicten van naloop 68 */
    #if (CCOL_V >= 95) && !defined NO_TIGMAX
        TIG_ontwerp[fc08][fc03] = TIG_max[fc68][fc03] + T_max[tnlegd0868];
        TIG_ontwerp[fc08][fc05] = TIG_max[fc68][fc05] + T_max[tnlegd0868];
        TIG_ontwerp[fc08][fc22] = TIG_max[fc68][fc22] + T_max[tnlegd0868];
        TIG_ontwerp[fc08][fc32] = TIG_max[fc68][fc32] + T_max[tnlegd0868];
        TIG_ontwerp[fc08][fc81] = TIG_max[fc68][fc81] + T_max[tnlegd0868];
    #else
        TO_ontwerp[fc08][fc03] = TO_max[fc68][fc03] + T_max[tnlegd0868];
        TO_ontwerp[fc08][fc05] = TO_max[fc68][fc05] + T_max[tnlegd0868];
        TO_ontwerp[fc08][fc22] = TO_max[fc68][fc22] + T_max[tnlegd0868];
        TO_ontwerp[fc08][fc32] = TO_max[fc68][fc32] + T_max[tnlegd0868];
        TO_ontwerp[fc08][fc81] = TO_max[fc68][fc81] + T_max[tnlegd0868];
    #endif

    /* Fase 11 en conflicten van naloop 68 */
    #if (CCOL_V >= 95) && !defined NO_TIGMAX
        TIG_ontwerp[fc11][fc03] = TIG_max[fc68][fc03] + T_max[tnlegd1168];
        TIG_ontwerp[fc11][fc05] = TIG_max[fc68][fc05] + T_max[tnlegd1168];
        TIG_ontwerp[fc11][fc22] = TIG_max[fc68][fc22] + T_max[tnlegd1168];
        TIG_ontwerp[fc11][fc32] = TIG_max[fc68][fc32] + T_max[tnlegd1168];
        TIG_ontwerp[fc11][fc81] = TIG_max[fc68][fc81] + T_max[tnlegd1168];
    #else
        TO_ontwerp[fc11][fc03] = TO_max[fc68][fc03] + T_max[tnlegd1168];
        TO_ontwerp[fc11][fc05] = TO_max[fc68][fc05] + T_max[tnlegd1168];
        TO_ontwerp[fc11][fc22] = TO_max[fc68][fc22] + T_max[tnlegd1168];
        TO_ontwerp[fc11][fc32] = TO_max[fc68][fc32] + T_max[tnlegd1168];
        TO_ontwerp[fc11][fc81] = TO_max[fc68][fc81] + T_max[tnlegd1168];
    #endif

    /* Fase 22 en conflicten van naloop 21 */
    #if (CCOL_V >= 95) && !defined NO_TIGMAX
        TIG_ontwerp[fc22][fc02] = TIG_max[fc21][fc02] + T_max[tnlegd2221];
        TIG_ontwerp[fc22][fc03] = TIG_max[fc21][fc03] + T_max[tnlegd2221];
    #else
        TO_ontwerp[fc22][fc02] = TO_max[fc21][fc02] + T_max[tnlegd2221];
        TO_ontwerp[fc22][fc03] = TO_max[fc21][fc03] + T_max[tnlegd2221];
    #endif

    /* Fase 82 en conflicten van naloop 81 */
    #if (CCOL_V >= 95) && !defined NO_TIGMAX
        TIG_ontwerp[fc82][fc67] = TIG_max[fc81][fc67] + T_max[tnlegd8281];
        TIG_ontwerp[fc82][fc68] = TIG_max[fc81][fc68] + T_max[tnlegd8281];
    #else
        TO_ontwerp[fc82][fc67] = TO_max[fc81][fc67] + T_max[tnlegd8281];
        TO_ontwerp[fc82][fc68] = TO_max[fc81][fc68] + T_max[tnlegd8281];
    #endif

    /* intitieer waarden TGV_rgv */
    /* ------------------------- */
    if(rgvinit)
    {
        TVG_rgv[fc02] = TVG_max[fc02];
        TVG_rgv[fc03] = TVG_max[fc03];
        TVG_rgv[fc05] = TVG_max[fc05];
        TVG_rgv[fc08] = TVG_max[fc08];
        TVG_rgv[fc09] = TVG_max[fc09];
        TVG_rgv[fc11] = TVG_max[fc11];
        TVG_rgv[fc22] = TVG_max[fc22];
        TVG_rgv[fc28] = TVG_max[fc28];
        rgvinit = 0;
    }

    /* kopieer de basis waarden van TVG_max */
    /* ------------------------------------ */
    TVG_basis[fc02] = TVG_max[fc02] > 0 ? TVG_max[fc02] : 1;
    TVG_basis[fc03] = TVG_max[fc03] > 0 ? TVG_max[fc03] : 1;
    TVG_basis[fc05] = TVG_max[fc05] > 0 ? TVG_max[fc05] : 1;
    TVG_basis[fc08] = TVG_max[fc08] > 0 ? TVG_max[fc08] : 1;
    TVG_basis[fc09] = TVG_max[fc09] > 0 ? TVG_max[fc09] : 1;
    TVG_basis[fc11] = TVG_max[fc11] > 0 ? TVG_max[fc11] : 1;
    TVG_basis[fc22] = TVG_max[fc22] > 0 ? TVG_max[fc22] : 1;
    TVG_basis[fc28] = TVG_max[fc28] > 0 ? TVG_max[fc28] : 1;

    /* detectiestoringen voor de fasecycli */
    /* ----------------------------------- */
    RT[tfd02_1a] = SD[d02_1a] || ED[d02_1a] || !VG[fc02]; 
    RT[tfd02_1b] = SD[d02_1b] || ED[d02_1b] || !VG[fc02]; 
    RT[tfd03_1] = SD[d03_1] || ED[d03_1] || !VG[fc03]; 
    RT[tfd05_1] = SD[d05_1] || ED[d05_1] || !VG[fc05]; 
    RT[tfd08_1a] = SD[d08_1a] || ED[d08_1a] || !VG[fc08]; 
    RT[tfd08_1b] = SD[d08_1b] || ED[d08_1b] || !VG[fc08]; 
    RT[tfd11_1] = SD[d11_1] || ED[d11_1] || !VG[fc11]; 
    RT[tfd22_1] = SD[d22_1] || ED[d22_1] || !VG[fc22]; 
    RT[tfd28_1] = SD[d28_1] || ED[d28_1] || !VG[fc28]; 

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
        DD[fc11] = (CIF_IS[d11_1] >= CIF_DET_STORING)
                    || (CIF_IS[d11_2] >= CIF_DET_STORING) || (CIF_IS[d11_3] >= CIF_DET_STORING)
                    || (IH[hfileFile68af])
                    || (!T[tfd11_1]);
        DD[fc22] = (CIF_IS[d22_1] >= CIF_DET_STORING)
                    || (CIF_IS[d22_1] >= CIF_DET_STORING)
                    || (!T[tfd22_1]);
        DD[fc28] = (CIF_IS[d28_1] >= CIF_DET_STORING)
                    || (CIF_IS[d28_1] >= CIF_DET_STORING)
                    || (!T[tfd28_1]);
    #else
        DD[fc02] = FALSE;
        DD[fc03] = FALSE;
        DD[fc05] = FALSE;
        DD[fc08] = IH[hfileFile68af] ? TRUE : FALSE;
        DD[fc11] = IH[hfileFile68af] ? TRUE : FALSE;
        DD[fc22] = FALSE;
        DD[fc28] = FALSE;
    #endif

    DD_anyfase |= DD[fc02];
    DD_anyfase |= DD[fc03];
    DD_anyfase |= DD[fc05];
    DD_anyfase |= DD[fc08];
    DD_anyfase |= DD[fc11];
    DD_anyfase |= DD[fc22];
    DD_anyfase |= DD[fc28];

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
    MK1[fc11] = SVG[fc11] || G[fc11] && MK1[fc11] && MK[fc11];
    RT[thd22_1] = D[d22_1];
    MK1[fc22] = SVG[fc22] || G[fc22] && MK1[fc22] && (RT[thd22_1] || T[thd22_1]);
    MK1[fc28] = SVG[fc28] || G[fc28] && MK1[fc28] && MK[fc28];

    /* Opslaan 'oudste' TVG tijd volgens RoBuGrover */
    /* -------------------------------------------- */
    for (i = 0; i < FCMAX; ++i) TVG_rgv_older[i] = TVG_rgv[i];

    /* Aanpassen verlenggroentijden op einde verlenggroen */
    /* -------------------------------------------------- */
    rgv_verlenggroentijd2(fc02, PRM[prmmintvg_02], PRM[prmmaxtvg_02], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc02], (boolv)!SCH[schrgv_snel], (boolv)DD[fc02], (boolv)(MK1[fc02] && MK2[fc02]));
    rgv_verlenggroentijd1(fc03, PRM[prmmintvg_03], PRM[prmmaxtvg_03], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc03], (boolv)!SCH[schrgv_snel], (boolv)DD[fc03], (boolv)(MK1[fc03]));
    rgv_verlenggroentijd1(fc05, PRM[prmmintvg_05], PRM[prmmaxtvg_05], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc05], (boolv)!SCH[schrgv_snel], (boolv)DD[fc05], (boolv)(MK1[fc05]));
    rgv_verlenggroentijd2(fc08, PRM[prmmintvg_08], PRM[prmmaxtvg_08], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc08], (boolv)!SCH[schrgv_snel], (boolv)DD[fc08], (boolv)(MK1[fc08] && MK2[fc08]));
    rgv_verlenggroentijd1(fc11, PRM[prmmintvg_11], PRM[prmmaxtvg_11], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc11], (boolv)!SCH[schrgv_snel], (boolv)DD[fc11], (boolv)(MK1[fc11]));
    rgv_verlenggroentijd2(fc22, PRM[prmmintvg_22], PRM[prmmaxtvg_22], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc22], (boolv)!SCH[schrgv_snel], (boolv)DD[fc22], (boolv)(MK1[fc22] && MK2[fc22]));
    rgv_verlenggroentijd1(fc28, PRM[prmmintvg_28], PRM[prmmaxtvg_28], PRM[prmtvg_omhoog], PRM[prmtvg_omlaag], PRM[prmtvg_verschil], TVG_max[fc28], (boolv)!SCH[schrgv_snel], (boolv)DD[fc28], (boolv)(MK1[fc28]));

    /* Verlaag de verlenggroentijd indien geen primaire realisatie in de cyclus */
    /* ------------------------------------------------------------------------ */
    rgv_niet_primair(fc02, PRML, ML, SML, ML_MAX, hprreal02, PRM[prmmintvg_02], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc02]));
    rgv_niet_primair(fc03, PRML, ML, SML, ML_MAX, hprreal03, PRM[prmmintvg_03], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc03]));
    rgv_niet_primair(fc05, PRML, ML, SML, ML_MAX, hprreal05, PRM[prmmintvg_05], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc05]));
    rgv_niet_primair(fc08, PRML, ML, SML, ML_MAX, hprreal08, PRM[prmmintvg_08], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc08]));
    rgv_niet_primair(fc11, PRML, ML, SML, ML_MAX, hprreal11, PRM[prmmintvg_11], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc11]));
    rgv_niet_primair(fc22, PRML, ML, SML, ML_MAX, hprreal22, PRM[prmmintvg_22], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc22]));
    rgv_niet_primair(fc28, PRML, ML, SML, ML_MAX, hprreal28, PRM[prmmintvg_28], PRM[prmtvg_npr_omlaag], (boolv)(DD[fc28]));

    /* Opslaan 'oude' TVG tijd volgens RoBuGrover */
    /* ------------------------------------------ */
    for (i = 0; i < FCMAX; ++i) TVG_rgv_old[i] = TVG_rgv[i];

    /* correctie verlenggroentijden t.o.v. de maximum gewenste cyclustijd */
    /* ------------------------------------------------------------------ */
    #if (defined AUTOMAAT || defined AUTOMAAT_TEST) && (!defined VISSIM)
        rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc03, fc05, fc08, END);
        rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc11, END);
    #else
        for (teller = 0; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller) TC_rgv[teller] = 0;
        teller = 0;
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc03, fc05, fc08, END);
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc11, END);
    #endif

    #if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || (defined VISSIM)
        teller = 0;
        TC_string$[teller++] = "03 05 08";
        TC_string$[teller++] = "02 09 11";
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
        rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc03, fc05, fc08, END);
        rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc11, END);
    #else
        for (teller = 0; teller < MAX_AANTAL_CONFLICTGROEPEN; ++teller) TC_rgv[teller] = 0;
        teller = 0;
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc03, fc05, fc08, END);
        TC_rgv[teller++] = rgv_verlenggroentijd_correctie_va_arg(PRM[prmrgv], DD_anyfase, PRM[prmmin_tcyclus], PRM[prmmax_tcyclus], fc02, fc09, fc11, END);
    #endif
        }
    }

    /* Kopieer de rgv-waarden naar TVG_max */
    /* ----------------------------------- */
    TVG_max[fc02] = TVG_rgv[fc02];
    TVG_max[fc03] = TVG_rgv[fc03];
    TVG_max[fc05] = TVG_rgv[fc05];
    TVG_max[fc08] = TVG_rgv[fc08];
    TVG_max[fc09] = TVG_basis[fc09];
    TVG_max[fc11] = TVG_rgv[fc11];
    TVG_max[fc22] = TVG_rgv[fc22];
    TVG_max[fc28] = TVG_rgv[fc28];

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
        xyprintf (32, teller + 8, "TVG22=%4d", TVG_max[fc22]);
        xyprintf (32, teller + 9, "TVG28=%4d", TVG_max[fc28]);
        
        */
    #endif 
}

