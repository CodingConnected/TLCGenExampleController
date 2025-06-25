/*
   BESTAND:   Afteller321.c

   ****************************** Versie commentaar **********************************************************
   *
   * Versie   Datum        Ontwerper   Commentaar
   * 1.2.0    09-10-2020   ddo         Code voor de 3-2-1 afteller voor autoverkeer, door Lex Trafico
   * 1.3.0    03-07-2021   ddo         check op gemiddelde CIF_WUS vertraging t.o.v. CIF_GUS
   * 1.4.0    20-12-2021   ddo         fix mbt gemiddelde GUS-WUS vertraging, afkappen op WUS == CIF_ROOD, automatisch zoeken alle I/O
   * 1.5.0    13-02-2022   ddo         aanpassingen tbv test bij gemeente Den Haag
   * 2.0.0    25-02-2025   ddo         totale overhaul tbv TLCGen plugin, implementatie CVN kaders
   * 2.1.0    22-04-2025   ddo         nauwkeuriger start- en eindemoment, afhandeling koplus, prio- en GKL conflicten
   * 2.2.0    23-04-2025   ddo         PRM aft##bewingreep via BITsturing, afhandeling deelconflicten
   * 2.3.0    02-06-2025   ddo         fix RR deelconflict + Level 4 compilerwarnings
   * 2.4.0    StillToDo                SpecGen lemma
   *
   ***********************************************************************************************************/

#ifndef SUS
  #define SUS(index)  (US[index] && !US_old[index])
#endif

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

extern mulv AFTWAARDE[FCMAX];
int AFTELLER_TE[FCMAX] = { 0 };
boolv MAGAFTELLEN[FCMAX] = { 0 };
boolv DBKL[DPMAX] = { 0 };   // status bezetting koplus


void InitGusWusVertraging(mulv vertraging, mulv aantal)
{
    int fc;

    for (fc = 0; fc < FC_MAX; ++fc) {
        GUS_WUS_VERTRAGING[fc].vorig0 = (aantal > 1) ? (((vertraging - 1) > 1) ? (vertraging - 1) : 1) : 0;
        GUS_WUS_VERTRAGING[fc].vorig1 = (aantal > 2) ? vertraging : 0;
        GUS_WUS_VERTRAGING[fc].vorig2 = (aantal > 3) ? vertraging : 0;
        GUS_WUS_VERTRAGING[fc].vorig3 = (aantal > 4) ? vertraging : 0;
        GUS_WUS_VERTRAGING[fc].vorig4 = 0;
        GUS_WUS_VERTRAGING[fc].lopend = 0;
        GUS_WUS_VERTRAGING[fc].gemiddeld = 0;
    }
}


void BehandelGusWusVertraging(mulv aantal, count errormax, count errorbase, count diffbase)
{
    int fc;

    if (aantal > 5)  aantal = 5;
    if (aantal < 1)  aantal = 1;

    for (fc = 0; fc < FC_MAX; ++fc) {

        if (SG[fc] || G[fc] && (CIF_WUS[fc] == CIF_ROOD) && TE)  GUS_WUS_VERTRAGING[fc].lopend += TE;

        if (TE && (CIF_WUS[fc] == CIF_GROEN) && (GUS_WUS_VERTRAGING[fc].lopend > 0)) {

            /* schuif de registers van lagere naar hogere */
            GUS_WUS_VERTRAGING[fc].vorig4 = GUS_WUS_VERTRAGING[fc].vorig3;
            GUS_WUS_VERTRAGING[fc].vorig3 = GUS_WUS_VERTRAGING[fc].vorig2;
            GUS_WUS_VERTRAGING[fc].vorig2 = GUS_WUS_VERTRAGING[fc].vorig1;
            GUS_WUS_VERTRAGING[fc].vorig1 = GUS_WUS_VERTRAGING[fc].vorig0;
            GUS_WUS_VERTRAGING[fc].vorig0 = GUS_WUS_VERTRAGING[fc].lopend;

            /* Bereken gemiddelde vertraging over het opgegeven aantal groenrealisaties. */
            if (((aantal >= 5) ? (GUS_WUS_VERTRAGING[fc].vorig4 != 0) : TRUE) &&
                ((aantal >= 4) ? (GUS_WUS_VERTRAGING[fc].vorig3 != 0) : TRUE) &&
                ((aantal >= 3) ? (GUS_WUS_VERTRAGING[fc].vorig2 != 0) : TRUE) &&
                ((aantal >= 2) ? (GUS_WUS_VERTRAGING[fc].vorig1 != 0) : TRUE) &&
                ((aantal >= 1) ? (GUS_WUS_VERTRAGING[fc].vorig0 != 0) : TRUE)) {

                GUS_WUS_VERTRAGING[fc].gemiddeld = (mulv)
                    (((aantal >= 5) ? GUS_WUS_VERTRAGING[fc].vorig4 : 0) +
                        ((aantal >= 4) ? GUS_WUS_VERTRAGING[fc].vorig3 : 0) +
                        ((aantal >= 3) ? GUS_WUS_VERTRAGING[fc].vorig2 : 0) +
                        ((aantal >= 2) ? GUS_WUS_VERTRAGING[fc].vorig1 : 0) +
                        ((aantal >= 1) ? GUS_WUS_VERTRAGING[fc].vorig0 : 0)) / aantal;
            }

            GUS_WUS_VERTRAGING[fc].lopend = 0;

            if (errormax != NG) {
                if ((GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax]))
                    ||
                    (GUS_WUS_VERTRAGING[fc].vorig0 < (GUS_WUS_VERTRAGING[fc].gemiddeld - PRM[errormax]))) {

                    ++PRM[errorbase + fc];

                    if (diffbase != NG) {
                        mulv diff;

                        diff = (GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) ?
                            (GUS_WUS_VERTRAGING[fc].vorig0 - (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) :
                            ((GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax]) - GUS_WUS_VERTRAGING[fc].vorig0);

                        if (diff > PRM[diffbase + fc]) PRM[diffbase + fc] = diff;
                    }
                }
            }
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


boolv ConflicterendPrioAft(count fc)
{
#ifdef prioFCMAX
    int prio;

    for (prio = 0; prio < prioFCMAX; ++prio) {
#if !(CCOL_V >= 95) || defined NO_TIGMAX
        if ((TO_max[fc][iFC_PRIOix[prio]] > NK) || (TO_max[fc][iFC_PRIOix[prio]] < GK) /* || ( TO_max[fc][iFC_PRIOix[prio]] < FK)*/) {
#else
        if ((TIG_max[fc][iFC_PRIOix[prio]] > NK) || (TIG_max[fc][iFC_PRIOix[prio]] < GK) /* || (TIG_max[fc][iFC_PRIOix[prio]] < FK)*/) {
#endif
            if (IH[iH_PRIOix[prio]]) return TRUE;
        }
        }
#endif   // prioFCMAX
    return FALSE;
    }


boolv ConflicterendGklAft(count fc)
{
    int i, n;

    for (i = KFC_MAX[fc]; i < GKFC_MAX[fc]; ++i) {
#if !(CCOL_V >= 95)
        n = TO_pointer[fc][i];
#else
        n = KF_pointer[fc][i];
#endif
#if !(CCOL_V >= 95) || defined NO_TIGMAX  /* geen intergroen */
        if ((TO_max[fc][n] == GKL) && MG[n] && (TG_timer[n] < (TFG_max[n] + 2)))   return TRUE;
#else
        if ((TIG_max[fc][n] == GKL) && MG[n] && (TG_timer[n] < (TFG_max[n] + 2)))   return TRUE;
#endif
    }
    return FALSE;
}


boolv MagAftellen(count fc, count aantrijstr, count aftbewingreep, boolv dbkl[], boolv schtdh, ...)   // DBKL nog naar aanroep halen in gegenereeerde aanroep
{
    va_list argpt;          /* variabele argumentenlijst    */
    va_mulv rijstr;         /* rijstrook nummer             */
    va_count dpnr;		    /* arraynummer detectie-element */
    va_count dbtimer = -1;  /* arraynummer AFT DB timer     */

    int rijstrook, rijstrookoverig;
    boolv  db[6] = { 0 };
    boolv tdh[6] = { 0 };
    boolv overal_db = TRUE;
    boolv ergens_db = FALSE;
    boolv nergens_tdh = TRUE;
    boolv ToonAfteller = FALSE;
    boolv DetectieStoringKoplus = FALSE;
    boolv DetectieStoringOverig = FALSE;

    va_start(argpt, schtdh);
    do {
        rijstr = va_arg(argpt, va_mulv);	        /* lees rijstrook nummer */
        if (rijstr >= 0) {
            dpnr = va_arg(argpt, va_count);         /* lees detectie-element */
            if (dpnr >= 0) {
                dbtimer = va_arg(argpt, va_count);
                if (dbtimer > END) {
                    if (IS_type[dpnr] & KOP_type) {
                        if ((dbtimer >= 0)) {
                            if (!D[dpnr]) T_timer[dbtimer] = 0;
                            if (R[fc]) {
                                if (D[dpnr] && (T_timer[dbtimer] < (TFB_max * 5)) && (T_max[dbtimer] > 0)) T_timer[dbtimer] += TE;
                                if ((T_timer[dbtimer] > T_max[dbtimer]) && (T_timer[dbtimer] < (TFB_max * 5))) {        // kijk naar de helft van TFB_max in TE
                                    db[rijstr] = TRUE;
                                    ergens_db = TRUE;
                                    dbkl[dpnr] = TRUE;
                                }
                            }
                            if (G[fc] && dbkl[dpnr] && ED[dpnr]) {
                                dbkl[dpnr] = FALSE;
                                PRM[aftbewingreep] &= ~BIT1;
                            }
                            if (GL[fc] && dbkl[dpnr])  PRM[aftbewingreep] |= BIT1;
                        }
                        if (CIF_IS[dpnr] >= CIF_DET_STORING) {
                            DetectieStoringKoplus = TRUE;
                        }
                    }
                    else {
                        if (!(IS_type[dpnr] & KOP_type)) {
                            if (TDH[dpnr]) {
                                tdh[rijstr] = TRUE;
                            }
                            if (CIF_IS[dpnr] >= CIF_DET_STORING) {
                                DetectieStoringOverig = TRUE;
                            }
                        }
                    }
                }
            }
        }
    } while ((rijstr >= 0) && (dbtimer > END));
    va_end(argpt);			/* maak var. arg-lijst leeg */

    /* beslissing nemen of afteller getoond mag worden: als alle koplussen bezet zijn, of op de rijstroken waarvan de
       koplus niet bezet is, er op de overige lussen geen hiaattijden lopen
    */
    for (rijstrook = 1; rijstrook <= aantrijstr; ++rijstrook) {
        if (!db[rijstrook]) overal_db = FALSE;
    }
    if (overal_db && !DetectieStoringKoplus) {
        ToonAfteller = TRUE;
    }
    else {
        for (rijstrook = 1; rijstrook <= aantrijstr; ++rijstrook) {
            if (db[rijstrook]) {
                for (rijstrookoverig = 1; rijstrookoverig <= aantrijstr; ++rijstrookoverig) {
                    if ((rijstrookoverig != rijstrook) && tdh[rijstrookoverig])  nergens_tdh = FALSE;
                }
            }
        }
    }

    if (schtdh && ergens_db && nergens_tdh && !DetectieStoringKoplus && !DetectieStoringOverig) {
        ToonAfteller = TRUE;
    }

    ToonAfteller = ToonAfteller && !PRM[aftbewingreep];

    return ToonAfteller;
}


void Afteller321(count fc, count usafteller, count fixatie, count nietaft, boolv magaftellen[], boolv aftelwaarde[], mulv X_bit, mulv P_BIT, mulv PSG_BIT, mulv RRDC_bit, count prmeerder, count prmlater, count prmaftmin, mulv afteltienden, ...)
{
    va_list argpt;          /* variabele argumentenlijst	*/
    va_count fcdc;          /* arraynummer richting in deelconflict	*/
    va_boolv cond;          /* altijd of schakelbaar      */
    va_mulv PDCNLbit = -1;

    int i, n;

    /* AFTeller pas starten wanneer P al op staat */
    if ((P[fc] & P_BIT) && RA[fc]) CIF_GUS[usafteller] = (s_int16)((AFTELLER_TE[fc] + afteltienden - 1) / afteltienden);

    if (!CIF_GUS[usafteller] && !IS[fixatie] && !(P[fc] & PSG_BIT) && !IH[nietaft] && !ConflicterendGklAft(fc) && !ConflicterendPrioAft(fc)) {
        if (magaftellen[fc] && RA[fc] && !AFTELLER_TE[fc] && (REALTIJD[fc] == (3 * afteltienden + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater] /*+ 2*/))) {
            P[fc] |= P_BIT;
            AFTELLER_TE[fc] = 3 * afteltienden + 2 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater];
        }

        if ((PRM[prmaftmin] <= 2) && magaftellen[fc] && RA[fc] && !AFTELLER_TE[fc] && (REALTIJD[fc] == (2 * afteltienden + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater] /*+ 2*/))) {
            P[fc] |= P_BIT;
            AFTELLER_TE[fc] = 2 * afteltienden + 2 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater];
        }

        if ((PRM[prmaftmin] <= 1) && magaftellen[fc] && RA[fc] && !AFTELLER_TE[fc] && (REALTIJD[fc] == (1 * afteltienden + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater] /*+ 2*/))) {
            P[fc] |= P_BIT;
            AFTELLER_TE[fc] = 1 * afteltienden + 2 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater];
        }
    }

    if (TE && (AFTELLER_TE[fc] > 0))    AFTELLER_TE[fc] -= TE;

    /* reset afhandeling deelconflicten */
    va_start(argpt, afteltienden);
    do {
        fcdc = va_arg(argpt, va_count);	/* lees array-nummer richting in deelconflict	*/
        if (fcdc >= 0) {
            cond = va_arg(argpt, va_boolv);	/* lees waarde conditie  	*/
            if (cond >= 0) {
                PDCNLbit = va_arg(argpt, va_mulv);
                if (PDCNLbit > END) {
                    RR[fcdc] &= ~RRDC_bit;
                    if (G[fc] && R[fcdc] && (PDCNLbit == AFT_P_DC_BIT))  P[fcdc] &= ~AFT_P_DC_BIT;
                }
            }
        }
    } while ((fcdc >= 0) && (PDCNLbit > END));
    va_end(argpt);			/* maak var. arg-lijst leeg	*/

    if (CIF_GUS[usafteller] > 0) {
        CIF_GUS[usafteller] = (s_int16)((AFTELLER_TE[fc] + afteltienden - 1) / afteltienden);
        if ((CIF_GUS[usafteller] > 0) && (CIF_WUS[fc] == CIF_GROEN))   CIF_GUS[usafteller] = 0;

        /* afhandeling deelconflicten en nalopen */
        va_start(argpt, afteltienden);
        do {
            fcdc = va_arg(argpt, va_count);	/* lees array-nummer richting in deelconflict	*/
            if (fcdc >= 0) {
                cond = va_arg(argpt, va_boolv);	/* lees waarde conditie  	*/
                if (cond >= 0) {
                    PDCNLbit = va_arg(argpt, va_mulv);
                    if (PDCNLbit > END) {
                        if (PDCNLbit == AFT_P_NL_BIT) {
                            if (cond && R[fcdc] && A[fcdc])  P[fcdc] |= PDCNLbit;
                        }
                        if (PDCNLbit == AFT_P_DC_BIT) {
                            if (cond && R[fcdc] && A[fcdc] && !(REALTIJD[fcdc] > AFTELLER_TE[fc]))  P[fcdc] |= PDCNLbit;   // hier check op afteltijd versus realtijd deelconflict -> RR en PG
                            RR[fcdc] |= !(P[fcdc] & PDCNLbit) ? RRDC_bit : 0;
                            if (!(P[fcdc] & PDCNLbit))  PG[fcdc] |= PRIMAIR_OVERSLAG;
                        }
                    }
                }
            }
        } while ((fcdc >= 0) && (PDCNLbit > END));
        va_end(argpt);			/* maak var. arg-lijst leeg	*/

        if (CIF_GUS[usafteller] && (AFTELLER_TE[fc] < 2) && (P[fc] & P_BIT)) {
            P[fc] |= PSG_BIT;
        }
    }

    if ((P[fc] & PSG_BIT) && !AFTELLER_TE[fc]) {
         X[fc] = FALSE;
        RR[fc] = FALSE;
    }

    X[fc] &= ~X_bit;
    if (AFTELLER_TE[fc])  X[fc] |= X_bit;

    if (AFTELLER_TE[fc] && G[fc]) AFTELLER_TE[fc] = 0;

    // beeindigen GKL conflicten die in MG staan (doorgaans door prio ingreep)
    if (P[fc] & PSG_BIT) {
        for (i = KFC_MAX[fc]; i < GKFC_MAX[fc]; ++i) {  /* groen conflicten */
#if !(CCOL_V >= 95)
            n = TO_pointer[fc][i];
#else
            n = KF_pointer[fc][i];
#endif
#if !(CCOL_V >= 95) || defined NO_TIGMAX  /* geen intergroen */
            if ((TO_max[fc][n] == GKL) && MG[n]) YM[n] = FALSE;
#else
            if ((TIG_max[fc][n] == GKL) && MG[n]) YM[n] = FALSE;
#endif
        }
    }

    aftelwaarde[fc] = CIF_GUS[usafteller];

}


void AFTbewaking(count fc, count usaft, mulv aftbewtim[], mulv maxbew, count aftbewingreep, mulv aftelTE, count schaft, ...)
{
    va_list argpt;          /* variabele argumentenlijst	*/
    count isoke;            /* arraynummer aft OK signaal	*/

    boolv OK = TRUE;

    if (!CIF_GUS[usaft] && G[fc] /* && !PRM[aftbewingreep]*/) aftbewtim[fc] = 0;
    if (US[usaft] && !US_old[usaft] || aftbewtim[fc] && R[fc] && TE)  ++aftbewtim[fc];

    va_start(argpt, schaft);
    do {
        isoke = va_arg(argpt, va_count);	/* lees array-nummer IS oke */
        if (isoke >= 0) {
            if (!IS[isoke]) OK = FALSE;
        }
    } while (isoke > END);
    va_end(argpt);			                /* maak var. arg-lijst leeg */

    if ((aftbewtim[fc] > PRM[maxbew]) || !OK ||
        (aftbewtim[fc] > (3 * aftelTE + 3)) && !G[fc]) {
        SCH[schaft] = FALSE;
        /* PRM[aftbewingreep] BIT1 wordt gebruikt voor niet afrijden tijdens groen (herstelbaar) */
        if (!OK)                                            PRM[aftbewingreep] |= BIT2;
        if (aftbewtim[fc] > PRM[maxbew])                    PRM[aftbewingreep] |= BIT3;
        if ((aftbewtim[fc] > (3 * aftelTE + 3)) && !G[fc])  PRM[aftbewingreep] |= BIT4;
        CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
    }
}


void AFTstoring(count usstoring, count schreset, ...)
{
    va_list argpt;          /* variabele argumentenlijst    */
    count prmbewingreep;    /* arraynummer aft bew ingreep  */

    boolv storing = FALSE;

    va_start(argpt, schreset);
    do {
        prmbewingreep = va_arg(argpt, va_count);
        if (PRM[prmbewingreep] > BIT1) storing |= TRUE;  // BIT1 storingen (geen ED tijdens G) worden hier niet meegenomen, deze zijn automatisch herstelbaar
    } while (prmbewingreep > END);
    va_end(argpt);			                /* maak var. arg-lijst leeg */

    CIF_GUS[usstoring] = storing;

    if (SCH[schreset])
    {
        va_start(argpt, schreset);
        do {
            prmbewingreep = va_arg(argpt, va_count);
            PRM[prmbewingreep] = 0;

        } while (prmbewingreep > END);
        va_end(argpt);			                /* maak var. arg-lijst leeg */

        CIF_GUS[usstoring] = 0;
        SCH[schreset] = 0;
        CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
    }
}


#if !defined AUTOMAAT && !defined AUTOMAAT_TEST
#ifndef __DPLWVAR_H
#include "dplwvar.h"
#endif
void toon_aft_waarde(count aft, int x_coord, int y_coord, int test, boolv tonen, unsigned long fgcolor, unsigned long bgcolor)
{
    if (CIF_GUS[aft] == 0)       display_number(x_coord, y_coord, "%1d", CIF_GUS[aft], ANSI_FIXED_FONT, bgcolor, test == 1 ? RGB_BLACK : bgcolor);
    else if (tonen)              display_number(x_coord, y_coord, "%1d", CIF_GUS[aft], ANSI_FIXED_FONT, fgcolor, bgcolor);

}
#endif