/*
   BESTAND:   321afteller-LT.c

   ****************************** Versie commentaar **********************************************************
   *
   * Versie   Datum        Ontwerper   Commentaar
   * 1.2.0    09-10-2020   ddo         Code voor de 3-2-1 afteller voor autoverkeer, door LexTrafico
   * 1.3.0    03-07-2021   ddo         check op gemiddelde CIF_WUS vertraging t.o.v. CIF_GUS
   * 1.4.0    20-12-2021   ddo         fix mbt gemiddelde GUS-WUS vertraging, afkappen op WUS == CIF_ROOD, automatisch zoeken alle I/O
   * 1.5.0    09-02-2022   ddo         beveiliging aanzetten afteller door P[]&BIT4
   *
   ***********************************************************************************************************

   opnemen in reg.add

   bovenaan:
        mulv AFTWAARDE[FCMAX];


   onder post_init_application():

        if (!SAPPLPROG) {
            BepaalAftFc_LT();
            InitAftellerDetectie_LT();
            BepaalDetectieRijstroken_LT();
            
            / * correctie op aantal detectoren * /
            AFT_AANT_DET_R[fc10][1] = 2;  (max aantal det op 1e rijstrook van fc10; bijvoorbeeld wanneer de derde detector op de eerste rijstrook van fc10 niet mee moet doen)
        }
        / * Aansturing hulpelement aansturing 3-2-1 aftellers * / (deze elementen zelf toevoegen onder gebruikersopties)
        IH[haft01] = SCH[schaft01];
        IH[haft02] = SCH[schaft02];
        IH[haft08] = SCH[schaft08];
        IH[haft09] = SCH[schaft09];
        IH[haft10] = SCH[schaft10];
        IH[haft12] = SCH[schaft12];

        alternatief:
        for (aft=0; aft < AFTMAX; ++aft) {
            IH[haft01+aft] = SCH[schaft01+aft];
        }


    onder PreApplication_Add():

        int fc;

        for (fc = 0; fc < FC_MAX; ++fc) { / * resetten GR en RR 321 aftellers * /
          // X[fc] &= ~BIT7; // NIET tegenhouden vanaf versie 1.3.0
            RR[fc] &= ~BIT7;
            GR[fc]  =  0;
        }


    onder RealisatieAfhandeling_Add():

        Verwerk321Aftellers_LT(TRUE);


    onder PostApplication_Add():

        / * 3-2-1 afteller * /
        / * if GR & BIT4  geen RR, etc * /
        for (fc = 0; fc < FC_MAX; ++fc) {
            if (GR[fc]) {
                RR[fc] = FALSE;
                BL[fc] = FALSE;
                 Z[fc] = FALSE;
                 X[fc] = FALSE;
            }
            //X[fc] |= (AFTWAARDE[fc] > 0) ? BIT7 : 0; // NIET tegenhouden vanaf versie 1.3.0
        }


    De individuele in- en uitgangen moeten per stuk toegevoegd worden, bijvoorbeeld

    onder post_system_application():
        / * afhandeling 3-2-1 aftellers * /
        if (G[fc01])  IH[haft01] = SCH[schaft01] && IS[isaftoke011] && IS[isaftoke012];
        if (G[fc02])  IH[haft02] = SCH[schaft02] && IS[isaftoke021] && IS[isaftoke022] && IS[isaftoke023];

        
        CIF_GUS[usaft01_1bit0] = CIF_GUS[usaft01_2bit0] = IH[haft01] && (CIF_GUS[usaft01] & BIT0);
        CIF_GUS[usaft01_1bit1] = CIF_GUS[usaft01_2bit1] = IH[haft01] && (CIF_GUS[usaft01] & BIT1);
        
        CIF_GUS[usaft02_1bit0] = CIF_GUS[usaft02_2bit0] = CIF_GUS[usaft02_3bit0] = IH[haft02] && (CIF_GUS[usaft02] & BIT0) && (CIF_WUS[fc02] == CIF_ROOD);
        CIF_GUS[usaft02_1bit1] = CIF_GUS[usaft02_2bit1] = CIF_GUS[usaft02_3bit1] = IH[haft02] && (CIF_GUS[usaft02] & BIT1) && (CIF_WUS[fc02] == CIF_ROOD);
        



/* Methodiek:
- bepaal aantal rijstroken
- bepaal aantal detectoren per rijstrook
- bepaal detectie elementen per rijstrook
- DB op koplussen
- afteller starten als
  * alle koplussen bezet, of
  * een koplus bezet en geen lopende hiaattijden op de andere rijstrokenm (Ps niet conform CVN advies)
  * richting in RA is
  * alle OT of IG-tijden onder de 19TE zijn middels LOTTG
 - als afteller gestart is dan
  * P[] opzetten
  * X[] opzetten zodat de richting niet eerder komt 
  * G[] van eventuele deelconflictrichtingen (en/of nalopen) (Ps we kijken niet meer naar de realfunc)
- als de afteller is afgeteld dan
  * X, RR, BL afzetten
*/

/*  voor eventueel toekomstig gebruik:
    BIT1 = OV KAR
    BIT2 = OV HD
    BIT3 = WTV
    BIT4 = AFT
*/


//GR[fc] |= (AFT[fc] > 0) ? BIT4 : 0;
//
//if (GR[fc]) {
//    conflicten_RR(fc);
//    tegenhouden_GR(fc);
//}


boolv GR[FCMAX]; //(Garantie Realiseren)

//tegenhouden_GR(count fc)
//{
//    /* zolang de afteller nog loopt, de betreffende fc tegenhouden */
//    if (GR[fc])  X[fc] |= BIT7;
//}
//
//stuur_conflicten_RR(count fc)
//{
//    int fcc, k;
//
//    for (fcc = 0; fcc < FKFC_MAX[fc]; ++fcc) {
//#if (CCOL_V >= 95)
//        k = KF_pointer[fc][fcc];
//#else     
//        k = TO_pointer[fc][fcc];
//#endif    
//        RR[k] |= BIT7;
//    }
//}

static int AFTMAX = 0;
mulv AFTFC[FCMAX];                 /* array van fasen met een afteller */
mulv AFTUS[FCMAX];                 /* array van afteller-uitgangen     */

mulv AFT_RIJSTROKEN[FCMAX];        /* aantal rijstroken per FC                                                           */
mulv AFT_AANT_DET_R[FCMAX][6];     /* aantal detectoren per rijstrook, 6 posities voor rijstroken: 0 (geen) + 1 t/m 5    */
mulv AFT_DETECTOREN[FCMAX][6][8];  /* aanwezige detector elementen (index) op een rijstrook, max 8 lussen per rijstrook  */

mulv AFTUSBIT[FCMAX][2][7];        /* 2 bitsturing uitgangen per afteller -> max 6 aftellers per signaalgroep            */
mulv AFTISOKE[FCMAX][7];           /* max even veel oke signalen als er aftellers zijn -> max 6 oke signalen             */
mulv AFTSCH  [FCMAX];              /* afteller schakelaars                                                               */
mulv AFTHE   [FCMAX];              /* afteller hulpelementen                                                             */

extern mulv AFTWAARDE[FCMAX];

static int AFTFCLEN;

/* initiele GUS-WUS vertraging per fabrikant */
int DYNNIQ_GWV = 1; /* Dynniq TLC, Dynniq ITS box */
int VIALIS_GWV = 2; /* Vialis TLC, Dynniq ITS box */
int SWARCO_GWV = 3; /* Swarco TLC, Swarco ITS box */

struct GusWusVertraging {
    mulv  vorig0;
    mulv  vorig1;
    mulv  vorig2;
    mulv  vorig3;
    mulv  vorig4;
    mulv  lopend;
    mulv  gemiddeld;
};

struct GusWusVertraging GUS_WUS_VERTRAGING[FCMAX];


void InitAftellerDetectie_LT(void)
{
    register int fc, a, b;

    /* initialiseer arrays */
    for (fc = 0; fc < FC_MAX; ++fc) {
        AFT_RIJSTROKEN[fc] = 0;
        for (a = 0; a < 6; ++a) {
            AFT_AANT_DET_R[FCMAX][a] = 0;
            for (b = 0; b < 8; ++b) {
                AFT_DETECTOREN[fc][a][b] = 999;
            }
        }
    }
}

void BepaalAftFc_LT(char *afteller, char *outbit0, char *outbit1, char *ok)  /*                           BepaalAftFc_LT("aft", "bit0", "bit1", "oke");     */
{                                                                            /* bij ONbewaakte aftellers: BepaalAftFc_LT("aft", "bit0", "bit1", "geenoke"); */
    register int fc, us, is, i, u0, u1, he, sch, usaft = 0, aft;

    AFTFCLEN = strlen(FC_code[0]);

    /* zoek de (multivalente) afteller uitgangen */
    for (fc = 0; fc < FC_MAX; ++fc) {
        if (FC_type[fc] & MVT_type) {
            for (us = FC_MAX; us < US_MAX; ++us) {
                if ((strstr(US_code[us], afteller)) && (strstr(US_code[us], FC_code[fc])) /*&& (US_type[us] & USM_type)*/ && (strlen(US_code[us]) == (AFTFCLEN + strlen(afteller)) )) {
                    AFTFC[usaft] = fc;
                    AFTUS[fc] = us;
                    ++usaft;
                }
            }
        }
    }
    AFTMAX = usaft;
    
    for (aft = 0; aft < AFTMAX; ++aft) {
        /* zoek de bits uitsturing van de afteller uitgangen */
        u0 = u1 = 0;
        for (us = FC_MAX; us < US_MAX; ++us) {
            /* bit0 */
            if ((strstr(US_code[us], afteller)) && (strstr(US_code[us], FC_code[AFTFC[aft]])) && (strstr(US_code[us], outbit0))) {
                ++u0;
                AFTUSBIT[AFTFC[aft]][0][u0] = us;
                AFTUSBIT[AFTFC[aft]][0][ 0] = u0;
            }
            /* bit1 */
            if ((strstr(US_code[us], afteller)) && (strstr(US_code[us], FC_code[AFTFC[aft]])) && (strstr(US_code[us], outbit1))) {
                ++u1;
                AFTUSBIT[AFTFC[aft]][1][u1] = us;
                AFTUSBIT[AFTFC[aft]][1][ 0] = u1;
            }
        }    

        /* zoek de afteller oke ingangen */
        if (ok != "geenoke") {
            i = 0;
            for (is = 0; is < IS_MAX; ++is) {
                if ((strstr(IS_code[is], afteller)) && (strstr(IS_code[is], ok))) {
                    /* verwijder laatste karakter */
                    char isname[15];
                    memcpy(isname, IS_code[is], (strlen(IS_code[is]) - 1));
                    isname[(strlen(IS_code[is]) - 1)] = '\0';
                    /* en vervolgens */
                    if (strstr(isname, FC_code[AFTFC[aft]])) {
                    ++i;
                        AFTISOKE[AFTFC[aft]][i] = is;
                        AFTISOKE[AFTFC[aft]][0] = i;
                }
            }
        }
    }

        /* zoek de afteller schakelaars */
        for (sch = 0; sch < SCH_MAX; ++sch) {
            if ((strstr(SCH_code[sch], afteller)) && (strstr(SCH_code[sch], FC_code[AFTFC[aft]])) && (strlen(SCH_code[sch]) == (AFTFCLEN + strlen(afteller)))) {
                AFTSCH[AFTFC[aft]] = sch;
            }
        }

        /* zoek de afteller hulpelementen */
        for (he = 0; he < HE_MAX; ++he) {
            if ((strstr(H_code[he], afteller)) && (strstr(H_code[he], FC_code[AFTFC[aft]])) && (strlen(H_code[he]) == (AFTFCLEN + strlen(afteller)))) {
                AFTHE[AFTFC[aft]] = he;
            }
        }

    }

}


void BepaalDetectieRijstroken_LT(void)
{
    register int fc, dp, a, b, c, d, e;

    for (fc = 0; fc < FC_MAX; ++fc) {
        if (US_type[fc] & MVT_type) {

            a = b = c = d = e = 0;
            
            /* bepaal aantal rijstroken per fase */
            for (dp = 0; dp < DP_MAX; ++dp) {

                /* bepaal aantal rijstroken per fase */ /* KOP_type gebruiken ipv DKOP_type, anders wordt ook solitair DL_type gezien*/
                if ((strstr(D_code[dp], FC_code[fc])) && (strstr(D_code[dp], "_")) && (IS_type[dp] & KOP_type)) {
                    ++AFT_RIJSTROKEN[fc];
                }
            }

            for (dp = 0; dp < DP_MAX; ++dp) {
                if ((strstr(D_code[dp], FC_code[fc])) && (strstr(D_code[dp], "_")) /*&& (strstr(D_code[dp], "a")) && (IS_type[dp] & DL_type)*/) {

                    /* bepaal de detectoren per rijstrook bij meerdere rijstroken */
                    if      (strstr(D_code[dp], "a"))  {  AFT_DETECTOREN[fc][1][a] = dp;  ++a;  AFT_AANT_DET_R[fc][1] = a;  }
                    else if (strstr(D_code[dp], "b"))  {  AFT_DETECTOREN[fc][2][b] = dp;  ++b;  AFT_AANT_DET_R[fc][2] = b;  }
                    else if (strstr(D_code[dp], "c"))  {  AFT_DETECTOREN[fc][3][c] = dp;  ++c;  AFT_AANT_DET_R[fc][3] = c;  }
                    else if (strstr(D_code[dp], "d"))  {  AFT_DETECTOREN[fc][4][d] = dp;  ++d;  AFT_AANT_DET_R[fc][4] = d;  }
                    else if (strstr(D_code[dp], "e"))  {  AFT_DETECTOREN[fc][5][e] = dp;  ++e;  AFT_AANT_DET_R[fc][5] = e;  }
                                                                                                                           
                    /* bepaal detectoren bij een enkele rijstrook */                                                       
                    else                               {  AFT_DETECTOREN[fc][1][a] = dp;  ++a;  AFT_AANT_DET_R[fc][1] = a;  }
                }
            }
        }
    }
}

mulv LOTTG(count fc) { /* Lopende OntruimingsTijd Tot Groen */
    count i, k;
    mulv to_tmp, to_max = 0;

    for (i = 0; i < FKFC_MAX[fc]; ++i)
    {
#if (CCOL_V >= 95)
        k = KF_pointer[fc][i];
#else     
        k = TO_pointer[fc][i];
#endif    
#if (CCOL_V >= 95) && !defined NO_TIGMAX
        if (TIG[k][fc])               /* zoek grootste ontruimingstijd      */
        {
            to_tmp = TIG_max[k][fc] - TIG_timer[k];
            if (G[k]) to_tmp = 999;  /* OT tijdens G[k] hoog houden */
#else     
        if (TO[k][fc])               /* zoek grootste ontruimingstijd      */
        {
            to_tmp = TO_max[k][fc] - TO_timer[k];
            if (G[k]||GL[k]) to_tmp = 999;  /* OT tijdens G[k] en GL[k] hoog houden */
#endif    
            if (to_tmp > to_max)
                to_max = to_tmp;
        }
    }
    return to_max;
}

boolv MagAftellen_LT(count fc)
{
    int rijstrook, rijstrookoverig, dp;
    boolv  db[6];
    boolv tdh[6];
    boolv overal_db = TRUE;
    boolv ergens_db = FALSE;
    boolv nergens_tdh = TRUE;
    boolv ToonAfteller = FALSE;
    boolv DetectieStoringKoplus = FALSE;
    boolv DetectieStoringOverig = FALSE;

    if (RA[fc] /*|| AAPR[fc]*/) {

        for (rijstrook = 1; rijstrook <= AFT_RIJSTROKEN[fc]; ++rijstrook) {  /* loop alle rijstroken af bij deze fc          */

            db[rijstrook] = tdh[rijstrook] = FALSE;                          /* initialiseer db en tdh voor deze rijstrook   */

            for (dp = 0; dp < AFT_AANT_DET_R[fc][rijstrook]; ++dp) {         /* loop alle detectoren per rijstrook af        */
                if ((IS_type[AFT_DETECTOREN[fc][rijstrook][dp]] & KOP_type)  /* als de detector een koplus is ...            */
                    && DB[AFT_DETECTOREN[fc][rijstrook][dp]]) {              /* ... en DB staat op                           */
                    db[rijstrook] = TRUE;                                    /* db positie in array hoog maken               */
                    ergens_db = TRUE;
                    if (CIF_IS[AFT_DETECTOREN[fc][rijstrook][dp]] >= CIF_DET_STORING) {
                        DetectieStoringKoplus = TRUE;                        /* eventuele detectie storing registreren       */
                    }
                }
                else {                                                       /* indien geen koplus of geen DB...             */
                    if (!(IS_type[AFT_DETECTOREN[fc][rijstrook][dp]] & KOP_type)) {
                        if (TDH[AFT_DETECTOREN[fc][rijstrook][dp]]) {
                            tdh[rijstrook] = TRUE;                           /* kijken of op de andere lussen een TDH loopt  */
                        }
                        if (CIF_IS[AFT_DETECTOREN[fc][rijstrook][dp]] >= CIF_DET_STORING) {
                            DetectieStoringOverig = TRUE;                    /* eventuele detectie storing registreren       */
                        }
                    }
                }
            }
        }

        /* beslissing nemen of afteller getoond mag worden: als alle koplussen bezet zijn, of op de rijstroken waarvan de
           koplus niet bezet is, er op de overige lussen geen hiaattijden lopen
        */
        for (rijstrook = 1; rijstrook <= AFT_RIJSTROKEN[fc]; ++rijstrook) {
            if (!db[rijstrook]) overal_db = FALSE;
        }

        if (overal_db && !DetectieStoringKoplus) {
            ToonAfteller = TRUE;
        }
        else {
            for (rijstrook = 1; rijstrook <= AFT_RIJSTROKEN[fc]; ++rijstrook) {
                if (db[rijstrook]) {
                    for (rijstrookoverig = 1; rijstrookoverig <= AFT_RIJSTROKEN[fc]; ++rijstrookoverig) {
                        if ((rijstrookoverig != rijstrook) && tdh[rijstrookoverig])  nergens_tdh = FALSE;
                    }
                }
            }
        }

        /* schakelbaar toevoegen schoveraldb CCA19022021 */
        if (!SCH[schaftoveraldb] && ergens_db && nergens_tdh && !DetectieStoringKoplus && !DetectieStoringOverig) {
            ToonAfteller = TRUE;
        }
    }
    return ToonAfteller;
}

int AFTELLER_TE[FCMAX] = { 0 };

void Afteller321(count fc, count usafteller, mulv afteller)
{
    int AFTELTIENDEN = 6;  /* 6 tienden = aftellen vanaf 1,8 seconde voor SG[] */
#ifndef AUTOMAAT
    //if (fc == fc01) { xyprintf(0, 0, "%d", LOTTG(fc)); }
    xyprintf(0, 0, "%d", AFTMAX);
    if (fc == fc28) { stuffkey(F5KEY); }
#endif
    P[fc] |= (MagAftellen_LT(fc) && (LOTTG(fc) <= (3 * AFTELTIENDEN + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmaftvroeger]/*@@weghalen als parameter uit file*/ - PRM[prmaftlater] + 1))) ? BIT4 : 0; /* CCA/DDo 09022022 */

    if ((P[fc]&BIT4) && MagAftellen_LT(fc) && (LOTTG(fc) == (3 * AFTELTIENDEN + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmaftvroeger] - PRM[prmaftlater]))) {
        AFTELLER_TE[fc] = 3 * AFTELTIENDEN + 1;
        CIF_GUS[usafteller] = (AFTELLER_TE[fc] + AFTELTIENDEN - 1) / AFTELTIENDEN;
    }


    if (TE && (AFTELLER_TE[fc] > 0))    AFTELLER_TE[fc] -= TE;

    if (CIF_GUS[usafteller] > 0) {
        CIF_GUS[usafteller] = (AFTELLER_TE[fc] + AFTELTIENDEN - 1) / AFTELTIENDEN;
        if ((CIF_GUS[usafteller] > 0) && (CIF_WUS[fc] == CIF_GROEN))   CIF_GUS[usafteller] = 0;
    }

    GR[fc] |= ((CIF_GUS[usafteller] > 0) || (US_old[usafteller] > 0)) ? BIT4 : 0;
    afteller = CIF_GUS[usafteller];
}


void Verwerk321Aftellers(boolv aftellen)
{
    register int i;
    if (aftellen) {
        for (i = 0; i < AFTMAX; ++i) {
                Afteller321(AFTFC[i], AFTUS[AFTFC[i]], AFTWAARDE[AFTFC[i]]);
        }
    }
}

//void Verwerk321Aftellers_LT_P1(boolv aftellen)
//{
//    register int i;
//    if (aftellen) {
//        for (i = 0; i < AFTMAX; ++i) {
//            if ((AFTFC[i] != fc102) && (AFTFC[i] != fc111)) {
//                Afteller321_LT(AFTFC[i], AFTUS[AFTFC[i]], AFTWAARDE[AFTFC[i]]);
//            }
//        }
//    }
//}


#if !defined AUTOMAAT && !defined AUTOMAAT_TEST

extern boolv aftafwijking;
mulv aftprev[FCMAX] = { 0 };
mulv aftstarttime[FCMAX];
mulv aftendtime[FCMAX];

void aft_bewaking_testomgeving_fc(count fc, count usaft, mulv afteltijd) 
{
    int diff=0;

    if ((CIF_GUS[usaft] == 3) && (aftprev[fc] == 0)) {
        aftstarttime[fc] = CIF_KLOK[CIF_TSEC_TELLER];
        aftprev[fc] = 3;
    }

    if ((CIF_GUS[usaft] == 0) && (aftprev[fc] == 3)) {
        aftendtime[fc] = CIF_KLOK[CIF_TSEC_TELLER];
        aftprev[fc] = 0;

        diff = (aftendtime[fc] > aftstarttime[fc]) ? aftendtime[fc] - aftstarttime[fc] : aftendtime[fc] + MAX_KLOKTELLER - aftstarttime[fc];
             
        if ((diff > (afteltijd+0)) || ((diff > 0) && (diff < (afteltijd-1)))) aftafwijking = TRUE;
    }
}

void aft_bewaking_testomgeving(mulv afteltijd)
{
#if !defined AUTOMAAT
    int i, diff = 0;

    for (i = 0; i < AFTMAX; ++i) {

        if ((CIF_GUS[AFTUS[AFTFC[i]]] == 3) && (aftprev[AFTFC[i]] == 0)) {
            aftstarttime[AFTFC[i]] = CIF_KLOK[CIF_TSEC_TELLER];
            aftprev[AFTFC[i]] = 3;
        }

        if ((CIF_GUS[AFTUS[AFTFC[i]]] == 0) && (aftprev[AFTFC[i]] == 3)) {
            aftendtime[AFTFC[i]] = CIF_KLOK[CIF_TSEC_TELLER];
            aftprev[AFTFC[i]] = 0;

            diff = (aftendtime[AFTFC[i]] > aftstarttime[AFTFC[i]]) ? aftendtime[AFTFC[i]] - aftstarttime[AFTFC[i]]
                                                                   : aftendtime[AFTFC[i]] + MAX_KLOKTELLER - aftstarttime[AFTFC[i]];

            if ((diff > (afteltijd + 0)) || ((diff > 0) && (diff < (afteltijd - 1)))) aftafwijking = TRUE;
        }
    }
#endif
}


//void aft_bewaking_testomgeving_P1(mulv afteltijd)
//{
//#if !defined AUTOMAAT
//    int i, diff = 0;
//
//    for (i = 0; i < AFTMAX; ++i) {
//        if ((AFTFC[i] != fc102) && (AFTFC[i] != fc111)) {
//            if ((CIF_GUS[AFTUS[AFTFC[i]]] == 3) && (aftprev[AFTFC[i]] == 0)) {
//                aftstarttime[AFTFC[i]] = CIF_KLOK[CIF_TSEC_TELLER];
//                aftprev[AFTFC[i]] = 3;
//            }
//
//            if ((CIF_GUS[AFTUS[AFTFC[i]]] == 0) && (aftprev[AFTFC[i]] == 3)) {
//                aftendtime[AFTFC[i]] = CIF_KLOK[CIF_TSEC_TELLER];
//                aftprev[AFTFC[i]] = 0;
//
//                diff = (aftendtime[AFTFC[i]] > aftstarttime[AFTFC[i]]) ? aftendtime[AFTFC[i]] - aftstarttime[AFTFC[i]]
//                    : aftendtime[AFTFC[i]] + MAX_KLOKTELLER - aftstarttime[AFTFC[i]];
//
//                if ((diff > (afteltijd + 0)) || ((diff > 0) && (diff < (afteltijd - 1)))) aftafwijking = TRUE;
//            }
//        }
//    }
//#endif
//}

void aft_toon_status(int Xcoord, int Ycoord) {
    int i;

    for (i = 0; i < AFTMAX; ++i) {
        xyprintf(Xcoord + 10 * i, Ycoord + 0,  " fc%s", FC_code[AFTFC[i]]);
        xyprintf(Xcoord + 10 * i, Ycoord + 1,     "%s", US_code[AFTUS[AFTFC[i]]]);
        xyprintf(Xcoord + 10 * i, Ycoord + 2, "    %d", CIF_GUS[AFTUS[AFTFC[i]]]);
        xyprintf(Xcoord + 10 * i, Ycoord + 3, "GR %2d", GR[AFTFC[i]]);
    }
}

void aft_toon_detectoren(int Xcoord, int Ycoord/*, int maxrijstr*/) {
    int dp, aftfc, maxrijstr=0;

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        maxrijstr = max(maxrijstr, AFT_RIJSTROKEN[AFTFC[aftfc]]);
    }

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        xyprintf(Xcoord + 10 * aftfc, Ycoord + 0, "fc%s ", FC_code[AFTFC[aftfc]], AFT_RIJSTROKEN[AFTFC[aftfc]]);
        xyprintf(Xcoord + 10 * aftfc, Ycoord + 1, "rstr: %d", AFT_RIJSTROKEN[AFTFC[aftfc]]);
        for (dp = 0; dp < 8; ++dp) {
            if (maxrijstr >= 1) {
                xyprintf(Xcoord + 10 * aftfc, Ycoord +  2, "det : %d", AFT_AANT_DET_R[AFTFC[aftfc]][1]);
                xyprintf(Xcoord + 10 * aftfc, Ycoord +  3 + dp, "%s", (AFT_DETECTOREN[AFTFC[aftfc]][1][dp] > DPMAX) ? "   -   " : D_code[AFT_DETECTOREN[AFTFC[aftfc]][1][dp]]);
            }
            if (maxrijstr >= 2) {
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 12, "det : %d", AFT_AANT_DET_R[AFTFC[aftfc]][2]);
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 13 + dp, "%s", (AFT_DETECTOREN[AFTFC[aftfc]][2][dp] > DPMAX) ? "   -   " : D_code[AFT_DETECTOREN[AFTFC[aftfc]][2][dp]]);
            }
            if (maxrijstr >= 3) {
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 22, "det : %d", AFT_AANT_DET_R[AFTFC[aftfc]][3]);
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 23 + dp, "%s", (AFT_DETECTOREN[AFTFC[aftfc]][3][dp] > DPMAX) ? "   -   " : D_code[AFT_DETECTOREN[AFTFC[aftfc]][3][dp]]);
            }
            if (maxrijstr >= 4) {
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 32, "det : %d", AFT_AANT_DET_R[AFTFC[aftfc]][4]);
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 33 + dp, "%s", (AFT_DETECTOREN[AFTFC[aftfc]][4][dp] > DPMAX) ? "   -   " : D_code[AFT_DETECTOREN[AFTFC[aftfc]][4][dp]]);
            }
            if (maxrijstr >= 5) {
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 42, "det : %d", AFT_AANT_DET_R[AFTFC[aftfc]][5]);
                xyprintf(Xcoord + 10 * aftfc, Ycoord + 43 + dp, "%s", (AFT_DETECTOREN[AFTFC[aftfc]][5][dp] > DPMAX) ? "   -   " : D_code[AFT_DETECTOREN[AFTFC[aftfc]][5][dp]]);
            }
        }
    }
}

void aft_toon_elementen(int Xcoord, int Ycoord/*, int maxrijstr*/) {
    int i, aftfc, maxrijstr = 0;

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        maxrijstr = max(maxrijstr, AFT_RIJSTROKEN[AFTFC[aftfc]]);
    }

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        xyprintf(Xcoord + 15 * aftfc, Ycoord + 0, "fc%s ", FC_code[AFTFC[aftfc]], AFT_RIJSTROKEN[AFTFC[aftfc]]);
        xyprintf(Xcoord + 15 * aftfc, Ycoord + 1, "rstr: %d", AFT_RIJSTROKEN[AFTFC[aftfc]]);

        xyprintf(Xcoord + 15 * aftfc, Ycoord + 2, "h: %s %d",   H_code[AFTHE [AFTFC[aftfc]]],  IH[AFTHE [AFTFC[aftfc]]]);
        xyprintf(Xcoord + 15 * aftfc, Ycoord + 3, "s: %s %d", SCH_code[AFTSCH[AFTFC[aftfc]]], SCH[AFTSCH[AFTFC[aftfc]]]);

        xyprintf(Xcoord + 15 * aftfc, Ycoord + 4, "aant ok: %d", AFTISOKE[AFTFC[aftfc]][0]);
        for (i = 0; i < AFTISOKE[AFTFC[aftfc]][0]; ++i) {
            xyprintf(Xcoord + 15 * aftfc, Ycoord + 5+i, "i: %s %d", IS_code[AFTISOKE[AFTFC[aftfc]][i+1]], IS[AFTISOKE[AFTFC[aftfc]][i+1]]);
        }

        xyprintf(Xcoord + 15 * aftfc, Ycoord + 11, "aant bit: %d", AFTUSBIT[AFTFC[aftfc]][0][0] + AFTUSBIT[AFTFC[aftfc]][1][0]);
        for (i = 0; i < AFTUSBIT[AFTFC[aftfc]][0][0]; ++i) {
            xyprintf(Xcoord + 15 * aftfc, Ycoord + 12 + 2 * i, /*"b: %s %d"*/"%s %d", US_code[AFTUSBIT[AFTFC[aftfc]][0][i + 1]], US[AFTUSBIT[AFTFC[aftfc]][0][i + 1]]);
            xyprintf(Xcoord + 15 * aftfc, Ycoord + 13 + 2 * i, /*"b: %s %d"*/"%s %d", US_code[AFTUSBIT[AFTFC[aftfc]][1][i + 1]], US[AFTUSBIT[AFTFC[aftfc]][1][i + 1]]);
        }
    }
}

#endif


//void BehandelGusWusVertraging(int aantal, count errormax, count errorbase, count diffbase) {
void BehandelGusWusVertraging(int aantal) {

    int fc;

    if (aantal > 5)  aantal = 5;
    if (aantal < 1)  aantal = 1;

    for (fc = 0; fc < FC_MAX; ++fc) {

        if (SG[fc] || G[fc] && (CIF_WUS[fc] == CIF_ROOD) && TE)  GUS_WUS_VERTRAGING[fc].lopend += TE;

        if (/*CIF_WUSWIJZ*/ TE && (CIF_WUS[fc] == CIF_GROEN) && (GUS_WUS_VERTRAGING[fc].lopend > 0)) {
            
            /* schuif de registers van lagere naar hogere */
            /*if (aantal >= 5)*/ GUS_WUS_VERTRAGING[fc].vorig4 = GUS_WUS_VERTRAGING[fc].vorig3;
            /*if (aantal >= 4)*/ GUS_WUS_VERTRAGING[fc].vorig3 = GUS_WUS_VERTRAGING[fc].vorig2;
            /*if (aantal >= 3)*/ GUS_WUS_VERTRAGING[fc].vorig2 = GUS_WUS_VERTRAGING[fc].vorig1;
            /*if (aantal >= 2)*/ GUS_WUS_VERTRAGING[fc].vorig1 = GUS_WUS_VERTRAGING[fc].vorig0;
            /*if (aantal >= 1)*/ GUS_WUS_VERTRAGING[fc].vorig0 = GUS_WUS_VERTRAGING[fc].lopend /*+ 1*/; /* + 1 omdat berekening 1 TE achterloopt */

            /* Bereken gemiddelde vertraging over het opgegeven aantal groenrealisaties. */
            if (((aantal >= 5) ? (GUS_WUS_VERTRAGING[fc].vorig4 != 0) : TRUE) &&
                ((aantal >= 4) ? (GUS_WUS_VERTRAGING[fc].vorig3 != 0) : TRUE) &&
                ((aantal >= 3) ? (GUS_WUS_VERTRAGING[fc].vorig2 != 0) : TRUE) &&
                ((aantal >= 2) ? (GUS_WUS_VERTRAGING[fc].vorig1 != 0) : TRUE) &&
                ((aantal >= 1) ? (GUS_WUS_VERTRAGING[fc].vorig0 != 0) : TRUE)) {

                GUS_WUS_VERTRAGING[fc].gemiddeld = (int)
                    (((aantal >= 5) ? GUS_WUS_VERTRAGING[fc].vorig4 : 0) +
                     ((aantal >= 4) ? GUS_WUS_VERTRAGING[fc].vorig3 : 0) +
                     ((aantal >= 3) ? GUS_WUS_VERTRAGING[fc].vorig2 : 0) +
                     ((aantal >= 2) ? GUS_WUS_VERTRAGING[fc].vorig1 : 0) +
                     ((aantal >= 1) ? GUS_WUS_VERTRAGING[fc].vorig0 : 0)) / aantal;
            }
            
            GUS_WUS_VERTRAGING[fc].lopend = 0;

//            if (errormax != NG) {
//                if ((GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax]))
//                    ||
//                    (GUS_WUS_VERTRAGING[fc].vorig0 < (GUS_WUS_VERTRAGING[fc].gemiddeld - PRM[errormax]))) {
//
//                    ++PRM[errorbase + fc];
//
//                    if (diffbase != NG) {
//                        int diff;
//
//                        diff = (GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) ?
//                               (GUS_WUS_VERTRAGING[fc].vorig0 - (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) :
//                               ((GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax]) - GUS_WUS_VERTRAGING[fc].vorig0);
//
//                        if (diff > PRM[diffbase + fc]) PRM[diffbase + fc] = diff;
//        }
//    }
//}

            //if (diffbase != NG) {
            //    int diff;
            //
            //    diff = (GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) ?
            //           (GUS_WUS_VERTRAGING[fc].vorig0 - (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) :
            //           ((GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax]) - GUS_WUS_VERTRAGING[fc].vorig0);
            //
            //    if (diff > PRM[diffbase + fc]) PRM[diffbase + fc] = diff;
            //}

        }
    }
}


void InitGusWusVertraging(mulv vertraging, mulv aantal) {

	int fc;

    for (fc = 0; fc < FC_MAX; ++fc) {
        GUS_WUS_VERTRAGING[fc].vorig0    = (aantal > 1) ? (((vertraging - 1) > 1) ? (vertraging - 1) : 1) : 0; 
        GUS_WUS_VERTRAGING[fc].vorig1    = (aantal > 2) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig2    = (aantal > 3) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig3    = (aantal > 4) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig4    = 0;                                    
		GUS_WUS_VERTRAGING[fc].lopend = 0;
        GUS_WUS_VERTRAGING[fc].gemiddeld = 0;                                    
    }
}

void InitSchakelAft_LT(void)
{
    int aftfc;

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        IH[AFTHE[AFTFC[aftfc]]] = SCH[AFTSCH[AFTFC[aftfc]]];
    }
}

void BeveiligingAft_LT(boolv checkok)
{
    int aftfc, i;
    boolv aftoke = TRUE;

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {

        if (checkok) {
            for (i = 0; i < AFTISOKE[AFTFC[aftfc]][0]; ++i) {
                if (!IS[AFTISOKE[AFTFC[aftfc]][i + 1]])  aftoke = FALSE;
            }
        }

        if (G[AFTFC[aftfc]])  IH[AFTHE[AFTFC[aftfc]]] = SCH[AFTSCH[AFTFC[aftfc]]] && aftoke;
    }
}

void BitsturingAft_LT(void)
{
    int aftfc, i;

    for (aftfc = 0; aftfc < AFTMAX; ++aftfc) {
        for (i = 0; i < AFTUSBIT[AFTFC[aftfc]][0][0]; ++i) {
            CIF_GUS[AFTUSBIT[AFTFC[aftfc]][0][i + 1]] = IH[AFTHE[AFTFC[aftfc]]] && (CIF_GUS[AFTUS[AFTFC[aftfc]]] & BIT0) && (CIF_WUS[AFTFC[aftfc]] == CIF_ROOD);
            CIF_GUS[AFTUSBIT[AFTFC[aftfc]][1][i + 1]] = IH[AFTHE[AFTFC[aftfc]]] && (CIF_GUS[AFTUS[AFTFC[aftfc]]] & BIT1) && (CIF_WUS[AFTFC[aftfc]] == CIF_ROOD);
        }
	}
}