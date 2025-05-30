/* HALFSTARRE APPLICATIE */
/* --------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456hst.c
      CCOL:   12.0
    TLCGEN:   12.4.0.16
   CCOLGEN:   12.4.0.16
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
 *
 ************************************************************************************/

#include "halfstar.c"
#include "tx_synch.h"
#include "halfstar_prio.c"

#include "123456hst.add"

void post_init_application_halfstar(void)
{
    post_init_application_halfstar_Add();
}

void pre_application_halfstar(void)
{
    /* na omschakeling van PL -> VA, modules opnieuw initialiseren */
    if (SH[hplact] || EH[hplact])
    {
        init_modules(ML_MAX, PRML, YML, &ML, &SML);
        sync_pg();
        reset_fc_halfstar();
    }

    if (IH[hkpact])
    {
        /* bijhouden verlenggroentijden t.b.v. calculaties diverse functies */
        tvga_timer_halfstar();
    }

    PreApplication_halfstar_Add();
}

void KlokPerioden_halfstar(void)
{
    char volgMaster = TRUE;

    /* BepaalKoppeling */
    /* --------------- */
    MM[mklok] = FALSE;
    MM[mhand] = FALSE;
    MM[mmaster] = FALSE;
    MM[mslave] = FALSE;
    IH[hkpact] = TRUE;
    IH[hplact] = TRUE;
    IH[hmlact] = FALSE;
    APL = NG;

/* Master bepaalt wat er gaat gebeuren */
    if (MM[mleven654321] && !SCH[schslavebep])
    {
        MM[mmaster] = TRUE;

        if      (IH[hptp123456iks03]) APL = PL1;
        else if (IH[hptp123456iks04]) APL = PL2;
        else if (IH[hptp123456iks05]) APL = PL3;
        else APL = PL1;

        if (PRM[prmvolgmasterpl] > 0)
        {
            if (                (APL == PL1) && !(PRM[prmvolgmasterpl] & BIT1) ||
                (APL == PL2) && !(PRM[prmvolgmasterpl] & BIT2) ||
                (APL == PL3) && !(PRM[prmvolgmasterpl] & BIT3))
            {
                volgMaster = FALSE;
            }
        }
        if (volgMaster == FALSE)
        {
            IH[hkpact] = FALSE;
        }
        else
        {
            IH[hpervar] =  IH[hptp123456iks07];
            IH[hperarh] =  IH[hptp123456iks02];
        }
    }
    /* Bij afwezigheid Master bepaalt Slave zelf wat er gaat gebeuren. In dit geval neemt de slave de functie van Master over */
    else
    {
        MM[mslave] = TRUE;
        switch (MM[mperiod])
        {
            case 0: /* default */
            {
                APL = PRM[prmplxperdef] - 1;
                break;
            }
            case 1: /* default */
            {
                APL = PRM[prmplxper1] - 1;
                break;
            }
            case 2: /* default */
            {
                APL = PRM[prmplxper2] - 1;
                break;
            }
            case 3: /* default */
            {
                APL = PRM[prmplxper3] - 1;
                break;
            }
            case 4: /* default */
            {
                APL = PRM[prmplxper4] - 1;
                break;
            }
            case 5: /* default */
            {
                APL = PRM[prmplxper5] - 1;
                break;
            }
            case 6: /* default */
            {
                APL = PRM[prmplxper6] - 1;
                break;
            }
            case 7: /* default */
            {
                APL = PRM[prmplxper7] - 1;
                break;
            }
            default:
            {
                APL = PRM[prmplxperdef] - 1;
                break;
            }
        }
        /* Klokbepaling voor VA-bedrijf */
        if ((SCH[schpervardef] && (MM[mperiod] == 0)) ||
            (SCH[schpervar1] && (MM[mperiod] == 1)) ||
            (SCH[schpervar2] && (MM[mperiod] == 2)) ||
            (SCH[schpervar3] && (MM[mperiod] == 3)) ||
            (SCH[schpervar4] && (MM[mperiod] == 4)) ||
            (SCH[schpervar5] && (MM[mperiod] == 5)) ||
            (SCH[schpervar6] && (MM[mperiod] == 6)) ||
            (SCH[schpervar7] && (MM[mperiod] == 7)))
        {
            IH[hpervar] = TRUE;
        }
        else
        {
            IH[hpervar] = FALSE;
        }

        /* Klokbepaling voor alternatieve realisaties voor de hoofdrichtingen */
        if ((SCH[schperarhdef] && (MM[mperiod] == 0)) ||
            (SCH[schperarh1] && (MM[mperiod] == 1)) ||
            (SCH[schperarh2] && (MM[mperiod] == 2)) ||
            (SCH[schperarh3] && (MM[mperiod] == 3)) ||
            (SCH[schperarh4] && (MM[mperiod] == 4)) ||
            (SCH[schperarh5] && (MM[mperiod] == 5)) ||
            (SCH[schperarh6] && (MM[mperiod] == 6)) ||
            (SCH[schperarh7] && (MM[mperiod] == 7)))
        {
            IH[hperarh] = TRUE;
        }
        else
        {
            IH[hperarh] = FALSE;
        }
    }

    /* Klokbepaling voor VA-bedrijf */
    if (SCH[schvar])
    {
        /* Halfstar/va afhankelijk van schakelaar */
        IH[hkpact] = FALSE;
        MM[mhand]  = TRUE;
        MM[mmaster]  = FALSE;
        MM[mslave]  = FALSE;
    } 
    else
    {
        MM[mklok] = TRUE;
    }

    /* Toestaan alternatief hoofdrichtingen ook mogelijk met schakelaar */
    if (SCH[scharh])
    {
        IH[hperarh] = TRUE;
        MM[mhand]   = TRUE;
    }
    /* Koppelen actief */
    if (H[hpervar] || SCH[schvar] || IH[homschtegenh])
        IH[hkpact] = FALSE;
    else
        IH[hkpact] = TRUE;
    /* Indien VA-bedrijf, dan met schakelaar te bepalen of dit in ML-bedrijf of in versneld PL-bedrijf gebeurt */
    if (!IH[hkpact])
    {
        if (SCH[schvaml] || (APL == NG))
        {
            IH[hmlact] = TRUE;
            IH[hplact] = FALSE;
        }
        else
        {
            IH[hplact] = TRUE;
            IH[hmlact] = FALSE;
        }
    }
    else
    {
        IH[hplact] = TRUE;
        IH[hmlact] = FALSE;
    }

    /* Bij hulpdienstingreep, lokaal VA regelen */
    if (IH[hplhd])
    {
        IH[hmlact] = TRUE;
        IH[hplact] = FALSE;
    }

    KlokPerioden_halfstar_Add();
}

void Aanvragen_halfstar(void)
{
    int fc;

    /* tijdens ple, wachtstandaanvraag uit */
    if (IH[hkpact])
    {
        for (fc = 0; fc < FCMAX; ++fc)
            A[fc] &= ~BIT2;

    /* Aanvragen op TXB */
    if (aanvraag_txb(fc02) && PP[fc02]) A[fc02] |= TRUE;
    if (aanvraag_txb(fc08) && PP[fc08]) A[fc08] |= TRUE;
    if (aanvraag_txb(fc11) && PP[fc11]) A[fc11] |= TRUE;
    if (aanvraag_txb(fc67) && PP[fc67]) A[fc67] |= TRUE;
    }

    Aanvragen_halfstar_Add();
}

void Verlenggroen_halfstar(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
    {
        /* afzetten functies en BITJES van ML-bedrijf */
        TVG_max[fc] = 0;
        YV[fc] &= ~(BIT2 | BIT4);
        FM[fc] &= ~BIT2;
        RW[fc] &= ~BIT2;
        /* opzetten verlengfunctie (Vasthouden verlenggroen) bij PL-bedrijf */
        YV[fc] |= MK[fc] && (YV_PL[fc] && PR[fc] || AR[fc] && yv_ar_max_pl(fc, 0)) ? BIT4 : 0;
    }

    Maxgroen_halfstar_Add();
}

void Wachtgroen_halfstar(void)
{
    /* Retour wachtgroen bij wachtgroen richtingen, let op: inclusief aanvraag! */
    wachtstand_halfstar(fc02, IH[hplact], (boolv)(TRUE), (boolv)(TRUE));
    wachtstand_halfstar(fc05, IH[hplact], (boolv)(SCH[schca05]), (boolv)(SCH[schwg05]));
    wachtstand_halfstar(fc08, IH[hplact], (boolv)(SCH[schca08]), (boolv)(SCH[schwg08]));
    wachtstand_halfstar(fc09, IH[hplact], (boolv)(SCH[schca09]), (boolv)(SCH[schwg09]));
    wachtstand_halfstar(fc11, IH[hplact], (boolv)(SCH[schca11]), (boolv)(SCH[schwg11]));
    wachtstand_halfstar(fc21, IH[hplact], (boolv)(SCH[schca21]), (boolv)(SCH[schwg21]));
    wachtstand_halfstar(fc22, IH[hplact], (boolv)(SCH[schca22]), (boolv)(SCH[schwg22]));
    wachtstand_halfstar(fc24, IH[hplact], (boolv)(SCH[schca24]), (boolv)(SCH[schwg24]));
    wachtstand_halfstar(fc26, IH[hplact], (boolv)(SCH[schca26]), (boolv)(SCH[schwg26]));
    wachtstand_halfstar(fc28, IH[hplact], (boolv)(SCH[schca28]), (boolv)(SCH[schwg28]));
    wachtstand_halfstar(fc31, IH[hplact], (boolv)(SCH[schca31]), (boolv)(SCH[schwg31]));
    wachtstand_halfstar(fc32, IH[hplact], (boolv)(SCH[schca32]), (boolv)(SCH[schwg32]));
    wachtstand_halfstar(fc33, IH[hplact], (boolv)(SCH[schca33]), (boolv)(SCH[schwg33]));
    wachtstand_halfstar(fc34, IH[hplact], (boolv)(SCH[schca34]), (boolv)(SCH[schwg34]));
    wachtstand_halfstar(fc38, IH[hplact], (boolv)(SCH[schca38]), (boolv)(SCH[schwg38]));
    wachtstand_halfstar(fc61, IH[hplact], (boolv)(SCH[schca61]), (boolv)(SCH[schwg61]));
    wachtstand_halfstar(fc62, IH[hplact], (boolv)(SCH[schca62]), (boolv)(SCH[schwg62]));
    wachtstand_halfstar(fc67, IH[hplact], (boolv)(SCH[schca67]), (boolv)(SCH[schwg67]));
    wachtstand_halfstar(fc68, IH[hplact], (boolv)(SCH[schca68]), (boolv)(SCH[schwg68]));
    wachtstand_halfstar(fc81, IH[hplact], (boolv)(SCH[schca81]), (boolv)(SCH[schwg81]));
    wachtstand_halfstar(fc82, IH[hplact], (boolv)(SCH[schca82]), (boolv)(SCH[schwg82]));
    wachtstand_halfstar(fc84, IH[hplact], (boolv)(SCH[schca84]), (boolv)(SCH[schwg84]));

    Wachtgroen_halfstar_Add();
}

void Meetkriterium_halfstar(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
    {
            /* afzetten BITJES van ML-bedrijf */
             Z[fc] &= ~PRIO_Z_BIT;
            FM[fc] &= ~PRIO_FM_BIT;
            RW[fc] &= ~PRIO_RW_BIT;
            RR[fc] &= ~PRIO_RR_BIT;
            YV[fc] &= ~PRIO_YV_BIT;
            MK[fc] &= ~PRIO_MK_BIT;
            PP[fc] &= ~PRIO_PP_BIT;
    }

    if (SCH[schovpriople])
    {
        /* Prio meetkriterium bij PL bedrijf */
        yv_PRIO_pl_halfstar(fc02, BIT7, C[cvc02karbus]);
        yv_PRIO_pl_halfstar(fc02, BIT7, C[cvc02risov]);
        yv_PRIO_pl_halfstar(fc02, BIT7, C[cvc02risvrw]);
        yv_PRIO_pl_halfstar(fc03, BIT7, C[cvc03bus]);
        yv_PRIO_pl_halfstar(fc03, BIT7, C[cvc03risov]);
        yv_PRIO_pl_halfstar(fc03, BIT7, C[cvc03risvrw]);
        yv_PRIO_pl_halfstar(fc05, BIT7, C[cvc05bus]);
        yv_PRIO_pl_halfstar(fc05, BIT7, C[cvc05risov]);
        yv_PRIO_pl_halfstar(fc05, BIT7, C[cvc05risvrw]);
        yv_PRIO_pl_halfstar(fc08, BIT7, C[cvc08bus]);
        yv_PRIO_pl_halfstar(fc08, BIT7, C[cvc08risov]);
        yv_PRIO_pl_halfstar(fc08, BIT7, C[cvc08risvrw]);
        yv_PRIO_pl_halfstar(fc09, BIT7, C[cvc09bus]);
        yv_PRIO_pl_halfstar(fc09, BIT7, C[cvc09risov]);
        yv_PRIO_pl_halfstar(fc09, BIT7, C[cvc09risvrw]);
        yv_PRIO_pl_halfstar(fc11, BIT7, C[cvc11bus]);
        yv_PRIO_pl_halfstar(fc11, BIT7, C[cvc11risov]);
        yv_PRIO_pl_halfstar(fc11, BIT7, C[cvc11risvrw]);
        yv_PRIO_pl_halfstar(fc22, BIT7, C[cvc22fiets]);
        yv_PRIO_pl_halfstar(fc28, BIT7, C[cvc28fiets]);
        yv_PRIO_pl_halfstar(fc61, BIT7, C[cvc61bus]);
        yv_PRIO_pl_halfstar(fc61, BIT7, C[cvc61risov]);
        yv_PRIO_pl_halfstar(fc61, BIT7, C[cvc61risvrw]);
        yv_PRIO_pl_halfstar(fc62, BIT7, C[cvc62bus]);
        yv_PRIO_pl_halfstar(fc62, BIT7, C[cvc62risov]);
        yv_PRIO_pl_halfstar(fc62, BIT7, C[cvc62risvrw]);
        yv_PRIO_pl_halfstar(fc67, BIT7, C[cvc67bus]);
        yv_PRIO_pl_halfstar(fc67, BIT7, C[cvc67risov]);
        yv_PRIO_pl_halfstar(fc67, BIT7, C[cvc67risvrw]);
        yv_PRIO_pl_halfstar(fc68, BIT7, C[cvc68bus]);
        yv_PRIO_pl_halfstar(fc68, BIT7, C[cvc68risov]);
        yv_PRIO_pl_halfstar(fc68, BIT7, C[cvc68risvrw]);
    }

    Meetkriterium_halfstar_Add();
}

void Meeverlengen_halfstar(void)
{
    int fc;

    /* Resetten YM bit voor PL regelen */
    for (fc = 0; fc < FCMAX; ++fc)
        YM[fc] &= ~YM_HALFSTAR;

    set_ym_pl_halfstar(fc02, (boolv)(SCH[schmv02]));
    set_ym_pl_halfstar(fc03, (boolv)(SCH[schmv03]));
    set_ym_pl_halfstar(fc05, (boolv)(SCH[schmv05]));
    set_ym_pl_halfstar(fc08, (boolv)(SCH[schmv08]));
    set_ym_pl_halfstar(fc09, (boolv)(SCH[schmv09]));
    set_ym_pl_halfstar(fc11, (boolv)(SCH[schmv11]));
    set_ym_pl_halfstar(fc21, (boolv)(SCH[schmv21]));
    set_ym_pl_halfstar(fc22, (boolv)(SCH[schmv22]));
    set_ym_pl_halfstar(fc24, (boolv)(SCH[schmv24]));
    set_ym_pl_halfstar(fc26, (boolv)(SCH[schmv26]));
    set_ym_pl_halfstar(fc28, (boolv)(SCH[schmv28]));
    set_ym_pl_halfstar(fc31, (boolv)(SCH[schmv31]));
    set_ym_pl_halfstar(fc32, (boolv)(SCH[schmv32]));
    set_ym_pl_halfstar(fc33, (boolv)(SCH[schmv33]));
    set_ym_pl_halfstar(fc34, (boolv)(SCH[schmv34]));
    set_ym_pl_halfstar(fc38, (boolv)(SCH[schmv38]));
    set_ym_pl_halfstar(fc61, (boolv)(SCH[schmv61]));
    set_ym_pl_halfstar(fc62, (boolv)(SCH[schmv62]));
    set_ym_pl_halfstar(fc67, (boolv)(SCH[schmv67]));
    set_ym_pl_halfstar(fc68, (boolv)(SCH[schmv68]));
    set_ym_pl_halfstar(fc81, (boolv)(SCH[schmv81]));
    set_ym_pl_halfstar(fc82, (boolv)(SCH[schmv82]));
    set_ym_pl_halfstar(fc84, (boolv)(SCH[schmv84]));

    Meeverlengen_halfstar_Add();
}

void Synchronisaties_halfstar(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
        YV[fc] &= ~YV_KOP_HALFSTAR;

    for (fc = 0; fc < FCMAX; ++fc)
    {
        RR[fc]&= ~(BIT1 | BIT2 | BIT3 | RR_KOP_HALFSTAR | RR_VS_HALFSTAR);
        RW[fc]&= ~(BIT3 | RW_KOP_HALFSTAR);
        YV[fc]&= ~(BIT1 | YV_KOP_HALFSTAR);
        YM[fc]&= ~(BIT3 | YM_KOP_HALFSTAR);
         X[fc]&= ~(BIT1 | BIT2 |BIT3 | X_GELIJK_HALFSTAR | X_VOOR_HALFSTAR | X_DEELC_HALFSTAR);
    }

    naloopEG_CV_halfstar(TRUE, fc02, fc62, T_max[tlr6202], tnlegd0262, tnleg0262);
    naloopEG_CV_halfstar(TRUE, fc08, fc68, T_max[tlr6808], tnlegd0868, tnleg0868);
    naloopEG_CV_halfstar(TRUE, fc11, fc68, T_max[tlr6811], tnlegd1168, tnleg1168);
    naloopEG_CV_halfstar(TRUE, fc22, fc21, T_max[tlr2122], tnlegd2221, tnleg2221);
    naloopSG_halfstar(fc31, fc32, dk31a, hnlak31a, tnlsgd3132);
    naloopSG_halfstar(fc32, fc31, dk32a, hnlak32a, tnlsgd3231);
    naloopSG_halfstar(fc33, fc34, dk33a, hnlak33a, tnlsgd3334);
    naloopSG_halfstar(fc34, fc33, dk34a, hnlak34a, tnlsgd3433);
    naloopEG_CV_halfstar(TRUE, fc82, fc81, T_max[tlr8182], tnlegd8281, tnleg8281);
    inloopSG_halfstar(fc31, fc32, til3132);
    inloopSG_halfstar(fc32, fc31, til3231);
    inloopSG_halfstar(fc33, fc34, til3334);
    inloopSG_halfstar(fc34, fc33, til3433);


    Synchronisaties_halfstar_Add();
}

void Alternatief_halfstar(void)
{
    int fc;

    PrioHalfstarPARCorrectieAlternatievenZonderPrio();

    alternatief_halfstar(fc02, PRM[prmaltphst02], SCH[schaltghst02]);
    alternatief_halfstar(fc03, PRM[prmaltphst03], SCH[schaltghst03]);
    alternatief_halfstar(fc05, PRM[prmaltphst05], SCH[schaltghst05]);
    alternatief_halfstar(fc08, PRM[prmaltphst08], SCH[schaltghst08]);
    alternatief_halfstar(fc09, PRM[prmaltphst09], SCH[schaltghst09]);
    alternatief_halfstar(fc11, PRM[prmaltphst11], SCH[schaltghst11]);
    alternatief_halfstar(fc21, PRM[prmaltphst21], SCH[schaltghst21]);
    alternatief_halfstar(fc22, PRM[prmaltphst2232], SCH[schaltghst2232]);
    alternatief_halfstar(fc24, PRM[prmaltphst243484], SCH[schaltghst243484]);
    alternatief_halfstar(fc26, PRM[prmaltphst26], SCH[schaltghst26]);
    alternatief_halfstar(fc28, PRM[prmaltphst2838], SCH[schaltghst2838]);
    alternatief_halfstar(fc31, PRM[prmaltphst31], SCH[schaltghst31]);
    alternatief_halfstar(fc32, PRM[prmaltphst2232], SCH[schaltghst2232]);
    alternatief_halfstar(fc33, PRM[prmaltphst3384], SCH[schaltghst3384]);
    alternatief_halfstar(fc34, PRM[prmaltphst2434], SCH[schaltghst2434]);
    alternatief_halfstar(fc38, PRM[prmaltphst2838], SCH[schaltghst2838]);
    alternatief_halfstar(fc61, PRM[prmaltphst61], SCH[schaltghst61]);
    alternatief_halfstar(fc62, PRM[prmaltphst62], SCH[schaltghst62]);
    alternatief_halfstar(fc67, PRM[prmaltphst67], SCH[schaltghst67]);
    alternatief_halfstar(fc68, PRM[prmaltphst68], SCH[schaltghst68]);
    alternatief_halfstar(fc81, PRM[prmaltphst81], SCH[schaltghst81]);
    alternatief_halfstar(fc82, PRM[prmaltphst82], SCH[schaltghst82]);
    alternatief_halfstar(fc84, PRM[prmaltphst243384], SCH[schaltghst243384]);
    altcor_kop_halfstar(fc02, fc62, tnlegd0262);
    altcor_kop_halfstar(fc08, fc68, tnlegd0868);
    altcor_kop_halfstar(fc11, fc68, tnlegd1168);
    altcor_kop_halfstar(fc22, fc21, tnlegd2221);
    altcor_naloopSG_halfstar(fc31, fc32, IH[hnlak31a], tnlsgd3132, TRUE);
    altcor_naloopSG_halfstar(fc32, fc31, IH[hnlak32a], tnlsgd3231, TRUE);
    altcor_naloopSG_halfstar(fc33, fc34, IH[hnlak33a], tnlsgd3334, TRUE);
    altcor_naloopSG_halfstar(fc34, fc33, IH[hnlak34a], tnlsgd3433, TRUE);
    altcor_kop_halfstar(fc82, fc81, tnlegd8281);
    for (fc = 0; fc < FCMAX; ++fc)
        RR[fc] &= ~RR_ALTCOR_HALFSTAR;

    /* hoofdrichtingen alleen tijdens periode alternatieve realisaties en koppeling uit */
    if (!H[hperarh] && H[hkpact])
    {
        if (!tussen_txa_en_txb(fc02) && !tussen_txb_en_txd(fc02)) PAR[fc02] &= ~BIT0;
        if (!tussen_txa_en_txb(fc08) && !tussen_txb_en_txd(fc08)) PAR[fc08] &= ~BIT0;
    }

    Alternatief_halfstar_Add();

    /* retour rood wanneer richting AR heeft maar geen PAR meer */
    /* -------------------------------------------------------- */
    reset_altreal_halfstar();

    
    signaalplan_alternatief();

}

void RealisatieAfhandeling_halfstar(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
    {
        PP[fc] &= ~BIT4;
        YM[fc] &= ~BIT5;
        RS[fc] &= ~RS_HALFSTAR;
        PP[fc] |= GL[fc] ? BIT4 : 0; /* i.v.m. overslag door conflicten */
    }
    
    /* Tweede realisaties (middels parameters) */

    /* PL1 */

    /* PL2 */

    /* PL3 */
    set_2real(fc28, prmtxA1PL3_28, prmtxA2PL3_28, PL3, (boolv)(IH[hplact]));
    set_2real(fc38, prmtxA1PL3_38, prmtxA2PL3_38, PL3, (boolv)(IH[hplact]));
    set_2real(fc61, prmtxA1PL3_61, prmtxA2PL3_61, PL3, (boolv)(IH[hplact]));

    /* PP opzetten */
    set_pp_halfstar(fc02, IH[hkpact], BIT4);
    set_pp_halfstar(fc08, IH[hkpact], BIT4);
    set_pp_halfstar(fc11, IH[hkpact], BIT4);
    set_pp_halfstar(fc67, IH[hkpact], BIT4);

    for (fc = 0; fc < FCMAX; ++fc)
    {
        /* Voorstartgroen tijdens voorstart t.o.v. sg-plan, alleen als gekoppeld wordt geregeld */
        vs_ple(fc, IH[hkpact]);

        /* opzetten van YS en YW tijdens halfstar bedrijf */
        /* resetten */
        RW[fc] &= ~RW_WG_HALFSTAR;
        YW[fc] &= ~YW_PL_HALFSTAR;
        /* vasthouden wachtgroen functie bij PL-bedrijf */
        RW[fc] |= YW_PL[fc] && tussen_txb_en_txc(fc) && (TXC[PL][fc] > 0) ? RW_WG_HALFSTAR : 0; /* TXC-afhandeling */
        YW[fc] |= YW_PL[fc] && tussen_txb_en_txc(fc) && (TXC[PL][fc] > 0) ? YW_PL_HALFSTAR : 0; /* TXC-afhandeling */
    }

    /* primaire realisaties signaalplansturing */
    /* --------------------------------------- */
    if (SCH[schovpriople])
    {
        signaalplan_primair_PRIO_ple();
    }
    else
    {
        signaalplan_primair();
    }

    /* afsluiten primaire aanvraaggebieden */
    /* ----------------------------------- */
    if (SCH[schovpriople])
    {
        set_pg_primair_fc_PRIO_ple();
    }
    else
    {
        set_pg_primair_fc();
    }

    /* reset PG bij planwisseling */
    /* -------------------------- */
    /* anders kan PG op blijven staan, waardoor richting eenmaal wordt overgeslagen en de regeling kan vastlopen */
    if (SH[hmlact] || SH[hplact] || SPL)
    {
        for (fc = 0; fc < FCMAX; ++fc)
        {
            PG[fc] = FALSE;
        }
    }

    /* vooruitrealiseren tijdens PL
     *
     * Wanneer hoofdrichtingen in PL bedrijf vooruit realiseren bestaat de modelijkheid
     * - dat ze kort voor het TxB moment uit groen gaan (en niet tijdig meer groen kunnen worden)
     * - dat ze sowieso niet meer komen tussen TxB en TxD omdat ze al primair gerealiseerd zijn.
     * Beide zijn conflicterend met het idee van een groene golf.
     * Daarom hoofdrichtingen die kort voor TxB al groen wijn, sowieso vasthouden tot TxB en
     * hoofdrichtingen altijd mogelijk maken primair te komen op TxB (maw PG afzetten).
     */

    /* vasthouden groen hoofdrichtingen gedurende periode voorafgaand aan TxB moment (indien eerder groen gestuurd) */
    RW[fc02] |= (G[fc02] && TOTXB_PL[fc02] && (TOTXB_PL[fc02] < 100)) ? RW_WG_HALFSTAR : 0; /* ivm vooruitrealiseren */
    YW[fc02] |= (G[fc02] && TOTXB_PL[fc02] && (TOTXB_PL[fc02] < 100)) ? YW_PL_HALFSTAR : 0; /* ivm vooruitrealiseren */
    RW[fc08] |= (G[fc08] && TOTXB_PL[fc08] && (TOTXB_PL[fc08] < 100)) ? RW_WG_HALFSTAR : 0; /* ivm vooruitrealiseren */
    YW[fc08] |= (G[fc08] && TOTXB_PL[fc08] && (TOTXB_PL[fc08] < 100)) ? YW_PL_HALFSTAR : 0; /* ivm vooruitrealiseren */

    /* intrekken PG[] (primair en versneld primair) gedurende periode voorafgaand aan TxB moment (indien al eerder gerealiseerd) */
    if (R[fc02] && TOTXB_PL[fc02] && (TOTXB_PL[fc02] < TFG_max[fc02])) PG[fc02] &= ~(PRIMAIR_VERSNELD);
    if (R[fc08] && TOTXB_PL[fc08] && (TOTXB_PL[fc08] < TFG_max[fc08])) PG[fc08] &= ~(PRIMAIR_VERSNELD);

    RealisatieAfhandeling_halfstar_Add();
}

void FileVerwerking_halfstar(void)
{

    FileVerwerking_halfstar_Add();
}

void DetectieStoring_halfstar(void)
{
    DetectieStoring_halfstar_Add();
}

void PostApplication_halfstar(void)
{
    /* Knipperpuls generator */
    /* --------------------- */
    RT[tleven] = !T[tleven]; /* timer herstarten */
    if (ST[tleven])  IH[hleven] = !IH[hleven];   /* hulpwaarde aan/uit zetten */

    /* Levensignaal van 654321 */
    RT[tleven654321] = SH[hptp123456iks01];
    MM[mleven654321] = T[tleven654321];
    /* herstart fasebewakingstimers bij wisseling tussen ML/PL en SPL */
    /* -------------------------------------------------------------- */
    RTFB &= ~RTFB_PLVA_HALFSTAR;
    RTFB |= (SH[hplact] || SH[hmlact] || (SPL && IH[hplact])) ? RTFB_PLVA_HALFSTAR : 0;

    PostApplication_halfstar_Add();
}

void pre_system_application_halfstar(void)
{
    int fc;

    /* kopieer signaalplantijden - na wijziging */
    /* ---------------------------------------- */
    #if (CCOL_V >= 95)
        if (SCH[schinst] || COPY_2_TRIG)
    #else
        if (SCH[schinst] || COPY_2_TIG)
    #endif
    {
        copy_signalplan(PL);
        create_trig();        /* creëer nieuwe TIG-tabel na wijzigingen geel-, ontruimingstijden */
        correction_trig();    /* correcties TIG-tabel a.g.v. koppelingen e.d. */
        check_signalplans(); /* check signalplans */
        SCH[schinst] = 0;
        #if (CCOL_V >= 95)
            COPY_2_TRIG = FALSE;
        #else
            COPY_2_TIG = FALSE;
        #endif
        CIF_PARM1WIJZAP = (s_int16) (&SCH[schinst] - CIF_PARM1);
    }
    RTX = FALSE;
    
    if (IH[hplact]) /* Code alleen bij PL-bedrijf */
    {
        RT[toffset] = SH[hptp123456iks06]; /* offset starten op start koppelpuls */
        SYN_TXS = ET[toffset]; /* synchronisatie einde offset timer */
        synchronization_timer(SAPPLPROG, T_max[txmarge]);
        FTX = HTX = FALSE;  /* reset instructievariabelen van TX */
        
        if (!IH[hkpact] && !IH[hmlact])
        {
            /* ongekoppelde voertuigafhankelijke signaalplansturing */
            /* ---------------------------------------------------- */
            for (fc = 0; fc < FC_MAX; ++fc)  
                YW_PL[fc] = FALSE;
            
            FTX = !H[homschtegenh] &&
                  versnel_tx(TRUE); /* voertuigafhankelijk */
        }
        else
        {
            /* gekoppelde signaalplansturing */
            /* ----------------------------- */
            /* als TXS_SYNC, en daarmee ook TXS_OKE, de regeling zacht of hard synchroniseren afhankelijk van 
                 positie ten opzichte van de master */
            if (MM[mleven654321] && TXS_OKE && TXS_SYNC && (TXS_delta > 0) && (PL==APL))
            {
                /* regeling loopt iets vooruit (2 x marge) */
                if (TXS_delta > 0 && (TXS_delta <= (2 * T_max[txmarge])))
                {
                    HTX = TRUE;
                }
                else
                /* regeling loop iets achter (2 x marge) */
                if (TXS_delta > 0 && (TXS_delta >= (TX_max[PL] - (2 * T_max[txmarge]))))
                {
                    FTX = versnel_tx(FALSE);
                }
                /* in alle andere gevallen is de afwijking te groot en moet, om lange synchronisatietijden te voorkomen,
                     de regeling hard worden gesynschroniseerd */
                else
                {
                    if (!H[homschtegenh]) /* koppelingen en pelotons mogen niet worden afgekapt     */
                        TX_timer = TXS_timer; /* TX_timer gelijk maken aan de cyclustijd van de master */
                }
            }
            else
            {
                /* do nothing */
            }
        }
    } /* Einde code PL-bedrijf */
    /* tijdens VA bedrijf hard synchroniseren */
    else
    {
        RTX = SH[hptp123456iks06];
    }

    /* Koppelsignalen (PTP) van 654321 */
    GUS[usin654321leven] = IH[hptp123456iks01];
    if (MM[mleven654321])
    {
        GUS[usin654321kpuls] = IH[hptp123456iks06];
        GUS[usin654321pervar] = IH[hptp123456iks07];
        GUS[usin654321perarh] = IH[hptp123456iks02];
        GUS[usin654321PL1] = IH[hptp123456iks03];
        GUS[usin654321PL2] = IH[hptp123456iks04];
        GUS[usin654321PL3] = IH[hptp123456iks05];
    }
    else
    {
        GUS[usin654321kpuls] = FALSE;
        GUS[usin654321pervar] = FALSE;
        GUS[usin654321perarh] = FALSE;
        GUS[usin654321PL1] = FALSE;
        GUS[usin654321PL2] = FALSE;
        GUS[usin654321PL3] = FALSE;
    }

    /* Koppelsignalen (PTP) naar 654321 */
    GUS[usuit654321leven] = IH[hptp123456uks01] = IH[hleven];
    GUS[usuit654321syncok] = IH[hptp123456uks02] = REG && (MM[mleven654321] && (TXS_delta == 0) && TXS_OKE);
    GUS[usuit654321txsok] = IH[hptp123456uks04] = REG && MM[mleven654321] && TXS_OKE;

    GUS[usplact] = IH[hplact];
    GUS[usmlact] = IH[hmlact];
    GUS[uskpact] = IH[hkpact];
    GUS[usmlpl] = IH[hplact] ? (s_int16)(PL+1): (s_int16)(ML+1);
    GUS[usPL1] = IH[hplact] && (PL == PL1);
    GUS[usPL2] = IH[hplact] && (PL == PL2);
    GUS[usPL3] = IH[hplact] && (PL == PL3);
    GUS[ustxtimer] = IH[hplact] ? (s_int16)(TX_timer): 0;
    GUS[usklok] = MM[mklok];
    GUS[ushand] = MM[mhand];
    GUS[usmaster] = MM[mmaster];
    GUS[usslave] = MM[mslave];


    pre_system_application_halfstar_Add();
}

void post_system_application_halfstar(void)
{
    post_system_application_halfstar_Add();
}

void post_dump_application_halfstar(void)
{
    post_dump_application_halfstar_Add();
}

boolv application1_trig(void)
{
    return application1_tig_Add();
}

boolv application2_trig(void)
{
    return application2_tig_Add();
}

/* Deze functie wordt aangeroepen vanuit OVInstellingen() in 123456ov.c */
void PrioHalfstarSettings(void)
{
    /* Bepalen tijd na TXD t.b.v. verlengen bij OV ingreep */
    iExtraGroenNaTXD[prioFC02karbus] = PRM[prmnatxdhst02karbus];
    iExtraGroenNaTXD[prioFC02risov] = PRM[prmnatxdhst02risov];
    iExtraGroenNaTXD[prioFC02risvrw] = PRM[prmnatxdhst02risvrw];
    iExtraGroenNaTXD[prioFC03bus] = PRM[prmnatxdhst03bus];
    iExtraGroenNaTXD[prioFC03risov] = PRM[prmnatxdhst03risov];
    iExtraGroenNaTXD[prioFC03risvrw] = PRM[prmnatxdhst03risvrw];
    iExtraGroenNaTXD[prioFC05bus] = PRM[prmnatxdhst05bus];
    iExtraGroenNaTXD[prioFC05risov] = PRM[prmnatxdhst05risov];
    iExtraGroenNaTXD[prioFC05risvrw] = PRM[prmnatxdhst05risvrw];
    iExtraGroenNaTXD[prioFC08bus] = PRM[prmnatxdhst08bus];
    iExtraGroenNaTXD[prioFC08risov] = PRM[prmnatxdhst08risov];
    iExtraGroenNaTXD[prioFC08risvrw] = PRM[prmnatxdhst08risvrw];
    iExtraGroenNaTXD[prioFC09bus] = PRM[prmnatxdhst09bus];
    iExtraGroenNaTXD[prioFC09risov] = PRM[prmnatxdhst09risov];
    iExtraGroenNaTXD[prioFC09risvrw] = PRM[prmnatxdhst09risvrw];
    iExtraGroenNaTXD[prioFC11bus] = PRM[prmnatxdhst11bus];
    iExtraGroenNaTXD[prioFC11risov] = PRM[prmnatxdhst11risov];
    iExtraGroenNaTXD[prioFC11risvrw] = PRM[prmnatxdhst11risvrw];
    iExtraGroenNaTXD[prioFC22fiets] = PRM[prmnatxdhst22fiets];
    iExtraGroenNaTXD[prioFC28fiets] = PRM[prmnatxdhst28fiets];
    iExtraGroenNaTXD[prioFC61bus] = PRM[prmnatxdhst61bus];
    iExtraGroenNaTXD[prioFC61risov] = PRM[prmnatxdhst61risov];
    iExtraGroenNaTXD[prioFC61risvrw] = PRM[prmnatxdhst61risvrw];
    iExtraGroenNaTXD[prioFC62bus] = PRM[prmnatxdhst62bus];
    iExtraGroenNaTXD[prioFC62risov] = PRM[prmnatxdhst62risov];
    iExtraGroenNaTXD[prioFC62risvrw] = PRM[prmnatxdhst62risvrw];
    iExtraGroenNaTXD[prioFC67bus] = PRM[prmnatxdhst67bus];
    iExtraGroenNaTXD[prioFC67risov] = PRM[prmnatxdhst67risov];
    iExtraGroenNaTXD[prioFC67risvrw] = PRM[prmnatxdhst67risvrw];
    iExtraGroenNaTXD[prioFC68bus] = PRM[prmnatxdhst68bus];
    iExtraGroenNaTXD[prioFC68risov] = PRM[prmnatxdhst68risov];
    iExtraGroenNaTXD[prioFC68risvrw] = PRM[prmnatxdhst68risvrw];

    /* PRIO opties hoofdrichtingen */
    PrioHalfstarBepaalHoofdrichtingOpties(NG, (va_count)fc02, (va_mulv)SCH[schtegenov02], (va_mulv)SCH[schafkwgov02], (va_mulv)SCH[schafkvgov02], TFG_max[fc02],
                                            (va_count)fc08, (va_mulv)SCH[schtegenov08], (va_mulv)SCH[schafkwgov08], (va_mulv)SCH[schafkvgov08], TFG_max[fc08],
                                            (va_count)END);
}

