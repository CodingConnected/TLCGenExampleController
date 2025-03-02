/*
   BESTAND:   Afteller321.c

   ****************************** Versie commentaar **********************************************************
   *
   * Versie   Datum        Ontwerper   Commentaar
   * 1.2.0    09-10-2020   ddo         Code voor de 3-2-1 afteller voor autoverkeer, door LexTrafico
   * 1.3.0    03-07-2021   ddo         check op gemiddelde CIF_WUS vertraging t.o.v. CIF_GUS
   * 1.4.0    20-12-2021   ddo         fix mbt gemiddelde GUS-WUS vertraging, afkappen op WUS == CIF_ROOD, automatisch zoeken alle I/O
   * 1.5.0    13-02-2022   ddo         aanpassingen tbv test bij gemeente Den Haag
   * 2.0.0    25-02-2025   ddo         overhaul tbv TLCGen plugin
   *
   ***********************************************************************************************************/

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
boolv MAGAFTELLEN[FCMAX];

void InitGusWusVertraging(mulv vertraging, mulv aantal) {

	int fc;

    for (fc = 0; fc < FC_MAX; ++fc) {
        GUS_WUS_VERTRAGING[fc].vorig0    = (aantal > 1) ? (((vertraging - 1) > 1) ? (vertraging - 1) : 1) : 0; 
        GUS_WUS_VERTRAGING[fc].vorig1    = (aantal > 2) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig2    = (aantal > 3) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig3    = (aantal > 4) ? vertraging : 0;                                    
        GUS_WUS_VERTRAGING[fc].vorig4    = 0;                                    
		GUS_WUS_VERTRAGING[fc].lopend    = 0;
        GUS_WUS_VERTRAGING[fc].gemiddeld = 0;                                    
    }
}


void BehandelGusWusVertraging(int aantal, count errormax, count errorbase, count diffbase) {

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

                GUS_WUS_VERTRAGING[fc].gemiddeld = (int)
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
                        int diff;

                        diff =  (GUS_WUS_VERTRAGING[fc].vorig0 > (GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[errormax])) ?
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


boolv MagAftellen(count fc, count aantrijstr, boolv schtdh, ...)
{
    
    va_list argpt;          /* variabele argumentenlijst    */
    mulv rijstr;            /* rijstrook nummer             */
    count dpnr;			    /* arraynummer detectie-element */

    int rijstrook, rijstrookoverig;
    boolv  db[6];
    boolv tdh[6];
    boolv overal_db = TRUE;
    boolv ergens_db = FALSE;
    boolv nergens_tdh = TRUE;
    boolv ToonAfteller = FALSE;
    boolv DetectieStoringKoplus = FALSE;
    boolv DetectieStoringOverig = FALSE;
    
    va_start(argpt, fc);
    do {
        rijstr = va_arg(argpt, va_mulv);	        /* lees rijstrook nummer */
        if (rijstr >= 0) {
            dpnr = (mulv)va_arg(argpt, va_count);	/* lees detectie-element */
            if (dpnr > END) {
                if (IS_type[dpnr] & KOP_type) {
                    if (DB[dpnr]) {
                        db[rijstr] = TRUE;
                        ergens_db = TRUE;
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
    } while ((rijstr >= 0) && (dpnr > END));
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

    return ToonAfteller;
}


void Afteller321(count fc, count usafteller, boolv magaftellen[], mulv aftelwaarde, count prmeerder, count prmlater, mulv afteltienden, ...)
{
    va_list argpt;          /* variabele argumentenlijst	*/
    count fcdc;             /* arraynummer richting in deelconflict	*/
    boolv cond;              /* altijd / schakelbaar      */

    P[fc] |= (magaftellen[fc] && RA[fc] && (/*LOTTG(fc)*/ REALTIJD[fc] == (3 * afteltienden + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater] + 2))) ? AFT_P_BIT : 0;

    if ((P[fc] & AFT_P_BIT) && RA[fc] && magaftellen[fc] && (/*LOTTG(fc)*/ REALTIJD[fc] == (3 * afteltienden + 1 - GUS_WUS_VERTRAGING[fc].gemiddeld + PRM[prmeerder] - PRM[prmlater]))) {
        AFTELLER_TE[fc] = 3 * afteltienden + 1;
        CIF_GUS[usafteller] = (AFTELLER_TE[fc] + afteltienden - 1) / afteltienden;
    }

    if (TE && (AFTELLER_TE[fc] > 0))    AFTELLER_TE[fc] -= TE;

    if (CIF_GUS[usafteller] > 0) {
        CIF_GUS[usafteller] = (AFTELLER_TE[fc] + afteltienden - 1) / afteltienden;
      //if ((CIF_GUS[usafteller] < 1) && (CIF_WUS[fc] != CIF_GROEN))   CIF_GUS[usafteller] = 1;  /* -+- eventueel cif_Gus: && (CIF_GUS[fc] != CIF_GROEN) -+- */
        if ((CIF_GUS[usafteller] > 0) && (CIF_WUS[fc] == CIF_GROEN))   CIF_GUS[usafteller] = 0;

        P[fc] |= AFT_P_BIT;

        va_start(argpt, afteltienden);
        do {
            fcdc = va_arg(argpt, va_count);	/* lees array-nummer detecctie	*/
            if (fcdc >= 0) {
                cond = va_arg(argpt, va_boolv);	/* lees waarde conditie  	*/
                if (cond > END) {
                    if (cond && R[fcdc] && A[fcdc])  P[fcdc] |= AFT_PDC_BIT;
                }
            }
        } while ((fcdc >= 0) && (cond > END));
        va_end(argpt);			/* maak var. arg-lijst leeg	*/

        if ((CIF_GUS[usafteller] <= 1) && (P[fc] & AFT_P_BIT)) {
             X[fc] = FALSE;
            RR[fc] = FALSE;
        }
    }

    //GR[fc] |= ((CIF_GUS[usafteller] > 0) || (US_old[usafteller] > 0)) ? BIT4 : 0;
    aftelwaarde = CIF_GUS[usafteller];
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
