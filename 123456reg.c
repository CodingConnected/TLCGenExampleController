/* REGELPROGRAMMA */
/* -------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456reg.c
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
    #include "to_min.c"   /* garantie-ontruimingstijden        */
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
    #include "prio.h"       /* prio-afhandeling                  */
    #ifndef NO_RIS
        #include "risvar.c" /* ccol ris controller */
        #include "risappl.c" /* RIS applicatiefuncties */
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
    #include "123456ptp.c" /* PTP seriele koppeling */
#ifdef MIRMON
    #include "MirakelMonitor.h"
#endif /* MIRMON */
    #include "dynamischhiaat.c"

mulv TDH_old[DPMAX];
mulv DB_old[DPMAX];
mulv DVG[DPMAX]; /* T.b.v. veiligheidsgroen */

    /* Robuuste Groenverdeler */
    #include "123456rgv.c"

/* kruispuntnaam in VISSIM */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    code SCJ_code[] = "";
#endif
mulv itvgmaxprm[aanttvgmaxprm]; /* fasecycli met max. verlenggroen parameter */
mulv C_counter_old[CTMAX];

    #if !defined AUTOMAAT && !defined AUTOMAAT_TEST
        extern bool display;
    #endif

#ifdef XTND_DIC /* alleen bij PRACTICE_TEST */
#include "xtnd_dic.c"
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

    IH[hpeltegenhKOP02] = FALSE;

    /* Uitgaande peloton koppeling naar KOP68_uit */
    IH[hptp123456uks01] = SCH[schpkuKOP68_uit68] && (SG[fc68] || FG[fc68]);
    if (G[fc68] && ED[d6801]) IH[hptp123456uks02] = !IH[hptp123456uks02];
    if (G[fc68] && ED[d6802]) IH[hptp123456uks03] = !IH[hptp123456uks03];
    /* Afzetten hulpelementen inkomende peloton koppelingen */
    IH[hpelinKOP02] = FALSE;

    /* Inkomende peloton koppeling van KOP02 */
    IH[hpelinKOP02] |= proc_pel_in_V1(hptp123456iks01, tpelmeetKOP02, tpelmaxhiaatKOP02, prmpelgrensKOP02, mpelvtgKOP02, mpelinKOP02, hptp123456iks02, hptp123456iks03, END);

    /* Robuuste Groenverdeler */
    IH[hrgvact] = SCH[schrgv];

    /* School ingreep */
    RT[tdbsid3331] = !D[d3331];
    RT[tdbsid3332] = !D[d3332];
    RT[tdbsid3431] = !D[d3431];
    RT[tdbsid3432] = !D[d3432];
    IH[hschoolingreepd3331] = D[d3331] && !(RT[tdbsid3331] || T[tdbsid3331]) && !(CIF_IS[d3331] >= CIF_DET_STORING) && (R[fc33] || G[fc33] || H[hschoolingreepd3331]) || TDH[d3331] && !(CIF_IS[d3331] >= CIF_DET_STORING) && H[hschoolingreepd3331];
    IH[hschoolingreepd3332] = D[d3332] && !(RT[tdbsid3332] || T[tdbsid3332]) && !(CIF_IS[d3332] >= CIF_DET_STORING) && (R[fc33] || G[fc33] || H[hschoolingreepd3332]) || TDH[d3332] && !(CIF_IS[d3332] >= CIF_DET_STORING) && H[hschoolingreepd3332];
    IH[hschoolingreepd3431] = D[d3431] && !(RT[tdbsid3431] || T[tdbsid3431]) && !(CIF_IS[d3431] >= CIF_DET_STORING) && (R[fc34] || G[fc34] || H[hschoolingreepd3431]) || TDH[d3431] && !(CIF_IS[d3431] >= CIF_DET_STORING) && H[hschoolingreepd3431];
    IH[hschoolingreepd3432] = D[d3432] && !(RT[tdbsid3432] || T[tdbsid3432]) && !(CIF_IS[d3432] >= CIF_DET_STORING) && (R[fc34] || G[fc34] || H[hschoolingreepd3432]) || TDH[d3432] && !(CIF_IS[d3432] >= CIF_DET_STORING) && H[hschoolingreepd3432];

    /* Reset BITs senioren ingreep */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (US_type[fc] & VTG_type) RW[fc] &= ~BIT7;
    }

    /* Instellen basis waarde hulpelementen 'geen dynamisch hiaat gebruiken'.
       Dit hulpelement kan in gebruikers code worden gebruikt voor eigen aansturing. */
    IH[hgeendynhiaat08] = !SCH[schdynhiaat08];

    /* Instellen basis waarde hulpelementen opdrempelen t.b.v. dynamische hiaattijden.
       Dit hulpelement kan in gebruikers code worden gebruikt voor eigen aansturing. */
    IH[hopdrempelen08] = SCH[schopdrempelen08];

    PreApplication_Add();

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
}

void Aanvragen(void)
{
    int fc;

    for (fc = 0; fc < FCMAX; ++fc)
        RR[fc] &= ~BIT8;  /* reset BIT-sturing t.b.v. reset A */

    /* Detectie aanvragen */
    /* ------------------ */
    aanvraag_detectie_prm_va_arg((count) fc02, 
        (va_count) d0201, (va_mulv) PRM[prmda0201], 
        (va_count) d0202, (va_mulv) PRM[prmda0202], 
        (va_count) d0203, (va_mulv) PRM[prmda0203], 
        (va_count) d0204, (va_mulv) PRM[prmda0204], 
        (va_count) d0205, (va_mulv) PRM[prmda0205], 
        (va_count) d0206, (va_mulv) PRM[prmda0206], 
        (va_count) d0207, (va_mulv) PRM[prmda0207], 
        (va_count) d0208, (va_mulv) PRM[prmda0208], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc03, 
        (va_count) d0301, (va_mulv) PRM[prmda0301], 
        (va_count) d0302, (va_mulv) PRM[prmda0302], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc05, 
        (va_count) d0501, (va_mulv) PRM[prmda0501], 
        (va_count) d0502, (va_mulv) PRM[prmda0502], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc08, 
        (va_count) d0801, (va_mulv) PRM[prmda0801], 
        (va_count) d0802, (va_mulv) PRM[prmda0802], 
        (va_count) d0803, (va_mulv) PRM[prmda0803], 
        (va_count) d0804, (va_mulv) PRM[prmda0804], 
        (va_count) d0805, (va_mulv) PRM[prmda0805], 
        (va_count) d0806, (va_mulv) PRM[prmda0806], 
        (va_count) d0807, (va_mulv) PRM[prmda0807], 
        (va_count) d0808, (va_mulv) PRM[prmda0808], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc09, 
        (va_count) d0901, (va_mulv) PRM[prmda0901], 
        (va_count) d0902, (va_mulv) PRM[prmda0902], 
        (va_count) d0903, (va_mulv) PRM[prmda0903], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc11, 
        (va_count) d1101, (va_mulv) PRM[prmda1101], 
        (va_count) d1102, (va_mulv) PRM[prmda1102], 
        (va_count) d1103, (va_mulv) PRM[prmda1103], 
        (va_count) d1104, (va_mulv) PRM[prmda1104], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc21, 
        (va_count) d2101, (va_mulv) PRM[prmda2101], 
        (va_count) d2131, (va_mulv) PRM[prmda2131], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc22, 
        (va_count) d2201, (va_mulv) PRM[prmda2201], 
        (va_count) d2231, (va_mulv) PRM[prmda2231], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc24, 
        (va_count) d2401, (va_mulv) PRM[prmda2401], 
        (va_count) d2402, (va_mulv) PRM[prmda2402], 
        (va_count) d2403, (va_mulv) PRM[prmda2403], 
        (va_count) d2431, (va_mulv) PRM[prmda2431], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc26, 
        (va_count) d2601, (va_mulv) PRM[prmda2601], 
        (va_count) d2631, (va_mulv) PRM[prmda2631], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc28, 
        (va_count) d2801, (va_mulv) PRM[prmda2801], 
        (va_count) d2831, (va_mulv) PRM[prmda2831], 
        (va_count) END);
    aanvraag_detectie_reset_prm_va_arg((count) fc28, 
        (va_count) d2802, tav2802, (va_mulv) PRM[prmda2802], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc31, 
        (va_count) d3131, (va_mulv) PRM[prmda3131], 
        (va_count) d3132, (va_mulv) PRM[prmda3132], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc32, 
        (va_count) d3231, (va_mulv) PRM[prmda3231], 
        (va_count) d3232, (va_mulv) PRM[prmda3232], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc33, 
        (va_count) d3331, (va_mulv) PRM[prmda3331], 
        (va_count) d3332, (va_mulv) PRM[prmda3332], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc34, 
        (va_count) d3431, (va_mulv) PRM[prmda3431], 
        (va_count) d3432, (va_mulv) PRM[prmda3432], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc38, 
        (va_count) d3831, (va_mulv) PRM[prmda3831], 
        (va_count) d3832, (va_mulv) PRM[prmda3832], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc61, 
        (va_count) d6101, (va_mulv) PRM[prmda6101], 
        (va_count) d6102, (va_mulv) PRM[prmda6102], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc62, 
        (va_count) d6201, (va_mulv) PRM[prmda6201], 
        (va_count) d6202, (va_mulv) PRM[prmda6202], 
        (va_count) d6203, (va_mulv) PRM[prmda6203], 
        (va_count) d6204, (va_mulv) PRM[prmda6204], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc67, 
        (va_count) d6701, (va_mulv) PRM[prmda6701], 
        (va_count) d6702, (va_mulv) PRM[prmda6702], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc68, 
        (va_count) d6801, (va_mulv) PRM[prmda6801], 
        (va_count) d6802, (va_mulv) PRM[prmda6802], 
        (va_count) d6803, (va_mulv) PRM[prmda6803], 
        (va_count) d6804, (va_mulv) PRM[prmda6804], 
        (va_count) d6821, (va_mulv) PRM[prmda6821], 
        (va_count) d6822, (va_mulv) PRM[prmda6822], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc81, 
        (va_count) d8101, (va_mulv) PRM[prmda8101], 
        (va_count) d8131, (va_mulv) PRM[prmda8131], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc82, 
        (va_count) d8201, (va_mulv) PRM[prmda8201], 
        (va_count) d8231, (va_mulv) PRM[prmda8231], 
        (va_count) END);
    aanvraag_detectie_prm_va_arg((count) fc84, 
        (va_count) d8401, (va_mulv) PRM[prmda8401], 
        (va_count) d8431, (va_mulv) PRM[prmda8431], 
        (va_count) END);


    /* Direct groen in geval van !K voor een richting */
    if (!RA[fc21] && !G[fc21]) A[fc21] &= ~BIT5;
    if (!RA[fc22] && !G[fc22]) A[fc22] &= ~BIT5;
    if (!RA[fc24] && !G[fc24]) A[fc24] &= ~BIT5;
    if (!RA[fc26] && !G[fc26]) A[fc26] &= ~BIT5;
    if (!RA[fc28] && !G[fc28]) A[fc28] &= ~BIT5;
    if (!RA[fc81] && !G[fc81]) A[fc81] &= ~BIT5;
    if (!RA[fc82] && !G[fc82]) A[fc82] &= ~BIT5;
    if (!RA[fc84] && !G[fc84]) A[fc84] &= ~BIT5;

    if (PRM[prmda2101] != 0 && SCH[schsneld2101]) AanvraagSnelV3(fc21, d2101);
    if (PRM[prmda2201] != 0 && SCH[schsneld2201]) AanvraagSnelV3(fc22, d2201);
    if (PRM[prmda2401] != 0 && SCH[schsneld2401]) AanvraagSnelV3(fc24, d2401);
    if (PRM[prmda2601] != 0 && SCH[schsneld2601]) AanvraagSnelV3(fc26, d2601);
    if (PRM[prmda2801] != 0 && SCH[schsneld2801]) AanvraagSnelV3(fc28, d2801);
    if (PRM[prmda8101] != 0 && SCH[schsneld8101]) AanvraagSnelV3(fc81, d8101);
    if (PRM[prmda8201] != 0 && SCH[schsneld8201]) AanvraagSnelV3(fc82, d8201);
    if (PRM[prmda8401] != 0 && SCH[schsneld8401]) AanvraagSnelV3(fc84, d8401);

    /* Meeaanvragen */
    /* ------------ */

    mee_aanvraag(fc62, (bool) (SG[fc02]));
    if (SCH[schma0522])
    {
        mee_aanvraag(fc22, (bool) (R[fc05] && !TRG[fc05] && A[fc05]));
    }
    if (SCH[schma0531])
    {
        mee_aanvraag(fc31, (bool) (R[fc05] && !TRG[fc05] && A[fc05]));
    }
    if (SCH[schma0532])
    {
        mee_aanvraag(fc32, (bool) (R[fc05] && !TRG[fc05] && A[fc05]));
    }
    if (SCH[schma0562])
    {
        mee_aanvraag(fc62, (bool) (SG[fc05]));
    }
    mee_aanvraag(fc68, (bool) (SG[fc08]));
    if (SCH[schma1126])
    {
        mee_aanvraag(fc26, (bool) (R[fc11] && !TRG[fc11] && A[fc11]));
    }
    if (SCH[schma1168])
    {
        mee_aanvraag(fc68, (bool) (SG[fc11]));
    }
    if (SCH[schma2221])
    {
        mee_aanvraag(fc21, (bool) (SG[fc22]));
    }
    if (SCH[schma2484])
    {
        mee_aanvraag(fc84, (bool) (SG[fc24]));
    }
    if (SCH[schma3122])
    {
        mee_aanvraag(fc22, (bool) ((H[hmad3131]) && SG[fc31]));
    }
    mee_aanvraag(fc32, (bool) ((H[hmad3131]) && !G[fc31] && A[fc31]));
    if (SCH[schma3222])
    {
        mee_aanvraag(fc22, (bool) ((H[hmad3232]) && SG[fc32]));
    }
    mee_aanvraag(fc31, (bool) ((H[hmad3232]) && !G[fc32] && A[fc32]));
    if (SCH[schma3324])
    {
        mee_aanvraag(fc24, (bool) ((H[hmad3331]) && SG[fc33]));
    }
    mee_aanvraag(fc34, (bool) ((H[hmad3331]) && !G[fc33] && A[fc33]));
    if (SCH[schma3384])
    {
        mee_aanvraag(fc84, (bool) ((H[hmad3331]) && SG[fc33]));
    }
    if (SCH[schma3424])
    {
        mee_aanvraag(fc24, (bool) ((H[hmad3432]) && SG[fc34]));
    }
    mee_aanvraag(fc33, (bool) ((H[hmad3432]) && !G[fc34] && A[fc34]));
    if (SCH[schma3484])
    {
        mee_aanvraag(fc84, (bool) ((H[hmad3432]) && SG[fc34]));
    }
    mee_aanvraag(fc28, (bool) (SG[fc38]));
    mee_aanvraag(fc81, (bool) (SG[fc82]));
    if (SCH[schma8424])
    {
        mee_aanvraag(fc24, (bool) (SG[fc84]));
    }

    /* Richtinggevoelige aanvragen */
    /* --------------------------- */

    for (fc = 0; fc < FCMAX; ++fc) RR[fc] &= ~BIT9;  /* reset BIT-sturing t.b.v. reset A */

    if (SCH[schrgad2403]) aanvraag_richtinggevoelig_reset(fc24, d2402, d2403, trgad2403, trgavd2403, SCH[schrgadd2403]);

    /* Vaste aanvragen */
    /* --------------- */
    if (SCH[schca02]) vaste_aanvraag(fc02);
    if (SCH[schca03]) vaste_aanvraag(fc03);
    if (SCH[schca05]) vaste_aanvraag(fc05);
    if (SCH[schca08]) vaste_aanvraag(fc08);
    if (SCH[schca09]) vaste_aanvraag(fc09);
    if (SCH[schca11]) vaste_aanvraag(fc11);
    if (SCH[schca21]) vaste_aanvraag(fc21);
    if (SCH[schca22]) vaste_aanvraag(fc22);
    if (SCH[schca24]) vaste_aanvraag(fc24);
    if (SCH[schca26]) vaste_aanvraag(fc26);
    if (SCH[schca28]) vaste_aanvraag(fc28);
    if (SCH[schca31]) vaste_aanvraag(fc31);
    if (SCH[schca32]) vaste_aanvraag(fc32);
    if (SCH[schca33]) vaste_aanvraag(fc33);
    if (SCH[schca34]) vaste_aanvraag(fc34);
    if (SCH[schca38]) vaste_aanvraag(fc38);
    if (SCH[schca61]) vaste_aanvraag(fc61);
    if (SCH[schca62]) vaste_aanvraag(fc62);
    if (SCH[schca67]) vaste_aanvraag(fc67);
    if (SCH[schca68]) vaste_aanvraag(fc68);
    if (SCH[schca81]) vaste_aanvraag(fc81);
    if (SCH[schca82]) vaste_aanvraag(fc82);
    if (SCH[schca84]) vaste_aanvraag(fc84);

    /* Wachtstand groen aanvragen */
    /* -------------------------- */
    aanvraag_wachtstand_exp(fc02, (bool) (SCH[schwg02]));
    aanvraag_wachtstand_exp(fc03, (bool) (SCH[schwg03]));
    aanvraag_wachtstand_exp(fc05, (bool) (SCH[schwg05]));
    aanvraag_wachtstand_exp(fc08, (bool) (SCH[schwg08]));
    aanvraag_wachtstand_exp(fc09, (bool) (SCH[schwg09]));
    aanvraag_wachtstand_exp(fc11, (bool) (SCH[schwg11]));
    aanvraag_wachtstand_exp(fc21, (bool) (SCH[schwg21]));
    aanvraag_wachtstand_exp(fc22, (bool) (SCH[schwg22]));
    aanvraag_wachtstand_exp(fc24, (bool) (SCH[schwg24]));
    aanvraag_wachtstand_exp(fc26, (bool) (SCH[schwg26]));
    aanvraag_wachtstand_exp(fc28, (bool) (SCH[schwg28]));
    aanvraag_wachtstand_exp(fc31, (bool) (SCH[schwg31]));
    aanvraag_wachtstand_exp(fc32, (bool) (SCH[schwg32]));
    aanvraag_wachtstand_exp(fc33, (bool) (SCH[schwg33]));
    aanvraag_wachtstand_exp(fc34, (bool) (SCH[schwg34]));
    aanvraag_wachtstand_exp(fc38, (bool) (SCH[schwg38]));
    aanvraag_wachtstand_exp(fc61, (bool) (SCH[schwg61]));
    aanvraag_wachtstand_exp(fc62, (bool) (SCH[schwg62]));
    aanvraag_wachtstand_exp(fc67, (bool) (SCH[schwg67]));
    aanvraag_wachtstand_exp(fc68, (bool) (SCH[schwg68]));
    aanvraag_wachtstand_exp(fc81, (bool) (SCH[schwg81]));
    aanvraag_wachtstand_exp(fc82, (bool) (SCH[schwg82]));
    aanvraag_wachtstand_exp(fc84, (bool) (SCH[schwg84]));

    /* Geen wachtstand aanvraag bij file stroomafwaarts */
    if (IH[hfile68af] && !G[fc08]) A[fc08] &= ~BIT2;
    if (IH[hfile68af] && !G[fc11]) A[fc11] &= ~BIT2;
    /* Geen mee aanvraag bij file stroomafwaarts */
    if (IH[hfile68af] && !G[fc08]) A[fc08] &= ~BIT4;
    if (IH[hfile68af] && !G[fc11]) A[fc11] &= ~BIT4;

    /* Bewaar meldingen van detectie (bv. voor het zetten van een meeaanvraag) */
    IH[hmad3131] = G[fc31] && !SG[fc31] ? FALSE : IH[hmad3131] || D[d3131] && A[fc31];
    IH[hmad3132] = G[fc31] && !SG[fc31] ? FALSE : IH[hmad3132] || D[d3132] && A[fc31];
    IH[hmad3231] = G[fc32] && !SG[fc32] ? FALSE : IH[hmad3231] || D[d3231] && A[fc32];
    IH[hmad3232] = G[fc32] && !SG[fc32] ? FALSE : IH[hmad3232] || D[d3232] && A[fc32];
    IH[hmad3331] = G[fc33] && !SG[fc33] ? FALSE : IH[hmad3331] || D[d3331] && A[fc33];
    IH[hmad3332] = G[fc33] && !SG[fc33] ? FALSE : IH[hmad3332] || D[d3332] && A[fc33];
    IH[hmad3431] = G[fc34] && !SG[fc34] ? FALSE : IH[hmad3431] || D[d3431] && A[fc34];
    IH[hmad3432] = G[fc34] && !SG[fc34] ? FALSE : IH[hmad3432] || D[d3432] && A[fc34];

    Aanvragen_Add();
}

void BepaalRealisatieTijden(void)
{
    bool wijziging = TRUE;
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
    Inlopen_Los2(fc32, fc31, hmad3232, hmad3231, hmad3132, hmad3131, hinl32, hinl31, hlos32, hlos31, SCH[schlos32_1], SCH[schlos32_2], SCH[schlos31_1], SCH[schlos31_2]);
    Inlopen_Los2(fc34, fc33, hmad3432, hmad3431, hmad3332, hmad3331, hinl34, hinl33, hlos34, hlos33, SCH[schlos34_1], SCH[schlos34_2], SCH[schlos33_1], SCH[schlos33_2]);

    /* Herstarten/afkappen inlooptijd/inrijtijd */
    RT[til3231] = SG[fc32] && H[hinl32]; AT[til3231] = G[fc31];
    RT[til3132] = SG[fc31] && H[hinl31]; AT[til3132] = G[fc32];
    RT[til3433] = SG[fc34] && H[hinl34]; AT[til3433] = G[fc33];
    RT[til3334] = SG[fc33] && H[hinl33]; AT[til3334] = G[fc34];
    RT[tlr2611] = SG[fc11]; AT[tlr2611] = G[fc26];
    RT[tlr6202] = SG[fc02]; AT[tlr6202] = G[fc62];
    RT[tlr6205] = SG[fc05]; AT[tlr6205] = G[fc62];
    RT[tlr6808] = SG[fc08]; AT[tlr6808] = G[fc68];
    RT[tlr6811] = SG[fc11]; AT[tlr6811] = G[fc68];
    RT[tlr2122] = SG[fc22]; AT[tlr2122] = G[fc21];
    RT[tlr8182] = SG[fc82]; AT[tlr8182] = G[fc81];

    /* correctie realisatietijd berekenen (max. 100 iteraties) */
    for (i = 0; i < 100; ++i)
    {
        wijziging = FALSE;

        /* Gelijkstart / voorstart / late release */
        wijziging |= Corr_Pls(fc22, fc05, T_max[tvs2205], TRUE);
        wijziging |= Corr_Pls(fc32, fc05, T_max[tvs3205], TRUE);
        wijziging |= Corr_Min(fc26, fc11, T_max[tlr2611], TRUE);
        wijziging |= Corr_Min_nl(fc62, fc02, T_max[tlr6202], TRUE);
        wijziging |= Corr_Min_nl(fc62, fc05, T_max[tlr6205], TRUE);
        wijziging |= Corr_Min_nl(fc68, fc08, T_max[tlr6808], TRUE);
        wijziging |= Corr_Min_nl(fc68, fc11, T_max[tlr6811], TRUE);
        wijziging |= Corr_Min_nl(fc21, fc22, T_max[tlr2122], TRUE);
        wijziging |= Corr_Min_nl(fc81, fc82, T_max[tlr8182], TRUE);

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
    }
    #if (!defined (AUTOMAAT) && !defined AUTOMAAT_TEST || defined (VISSIM)) && !defined NO_PRINT_REALTIJD
    if (display) {
        xyprintf(92, 6, "REALtijden  min  max ");
        for (i = 0; i < FC_MAX; ++i)
        {
            xyprintf( 92, 7 + i, "fc%3s %4d", FC_code[i], MM[mrealtijd02 + i]);
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

    NaloopFGDet(fc02, fc62, tnlfgd0262, d0201, d0202, END);
    NaloopEGDet(fc02, fc62, tnlegd0262, d0201, d0202, END);
    NaloopFGDet(fc05, fc62, tnlfgd0562, d0501, END);
    NaloopEGDet(fc05, fc62, tnlegd0562, d0501, END);
    NaloopFGDet(fc08, fc68, tnlfgd0868, d0801, d0802, END);
    NaloopEGDet(fc08, fc68, tnlegd0868, d0801, d0802, END);
    NaloopFGDet(fc11, fc68, tnlfgd1168, d1101, END);
    NaloopEGDet(fc11, fc68, tnlegd1168, d1101, END);
    NaloopFGDet(fc22, fc21, tnlfgd2221, d2201, END);
    NaloopEGDet(fc22, fc21, tnlegd2221, d2201, END);
    NaloopVtgDet(fc31, fc32, d3131, hnla3131, tnlsgd3132);
    NaloopVtgDet(fc32, fc31, d3232, hnla3232, tnlsgd3231);
    NaloopVtgDet(fc33, fc34, d3331, hnla3331, tnlsgd3334);
    NaloopVtgDet(fc34, fc33, d3432, hnla3432, tnlsgd3433);
    NaloopFGDet(fc82, fc81, tnlfgd8281, d8201, END);
    NaloopEGDet(fc82, fc81, tnlegd8281, d8201, END);


    verlenggroentijden_va_arg((count) fc02,
                              (va_mulv) PRM[prmvg1_02], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_02], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_02], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_02], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_02], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_02], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_02], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_02], (va_count) END);
    verlenggroentijden_va_arg((count) fc03,
                              (va_mulv) PRM[prmvg1_03], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_03], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_03], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_03], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_03], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_03], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_03], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_03], (va_count) END);
    verlenggroentijden_va_arg((count) fc05,
                              (va_mulv) PRM[prmvg1_05], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_05], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_05], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_05], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_05], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_05], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_05], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_05], (va_count) END);
    verlenggroentijden_va_arg((count) fc08,
                              (va_mulv) PRM[prmvg1_08], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_08], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_08], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_08], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_08], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_08], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_08], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_08], (va_count) END);
    verlenggroentijden_va_arg((count) fc09,
                              (va_mulv) PRM[prmvg1_09], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_09], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_09], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_09], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_09], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_09], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_09], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_09], (va_count) END);
    verlenggroentijden_va_arg((count) fc11,
                              (va_mulv) PRM[prmvg1_11], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_11], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_11], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_11], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_11], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_11], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_11], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_11], (va_count) END);
    verlenggroentijden_va_arg((count) fc21,
                              (va_mulv) PRM[prmvg1_21], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_21], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_21], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_21], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_21], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_21], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_21], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_21], (va_count) END);
    verlenggroentijden_va_arg((count) fc22,
                              (va_mulv) PRM[prmvg1_22], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_22], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_22], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_22], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_22], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_22], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_22], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_22], (va_count) END);
    verlenggroentijden_va_arg((count) fc24,
                              (va_mulv) PRM[prmvg1_24], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_24], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_24], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_24], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_24], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_24], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_24], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_24], (va_count) END);
    verlenggroentijden_va_arg((count) fc26,
                              (va_mulv) PRM[prmvg1_26], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_26], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_26], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_26], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_26], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_26], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_26], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_26], (va_count) END);
    verlenggroentijden_va_arg((count) fc28,
                              (va_mulv) PRM[prmvg1_28], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_28], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_28], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_28], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_28], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_28], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_28], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_28], (va_count) END);
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
                              (va_mulv) PRM[prmvg8_61], (va_count) END);
    verlenggroentijden_va_arg((count) fc62,
                              (va_mulv) PRM[prmvg1_62], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_62], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_62], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_62], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_62], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_62], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_62], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_62], (va_count) END);
    verlenggroentijden_va_arg((count) fc67,
                              (va_mulv) PRM[prmvg1_67], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_67], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_67], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_67], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_67], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_67], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_67], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_67], (va_count) END);
    verlenggroentijden_va_arg((count) fc68,
                              (va_mulv) PRM[prmvg1_68], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_68], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_68], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_68], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_68], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_68], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_68], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_68], (va_count) END);
    verlenggroentijden_va_arg((count) fc81,
                              (va_mulv) PRM[prmvg1_81], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_81], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_81], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_81], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_81], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_81], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_81], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_81], (va_count) END);
    verlenggroentijden_va_arg((count) fc82,
                              (va_mulv) PRM[prmvg1_82], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_82], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_82], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_82], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_82], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_82], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_82], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_82], (va_count) END);
    verlenggroentijden_va_arg((count) fc84,
                              (va_mulv) PRM[prmvg1_84], (va_mulv) (MM[mperiod] == 1),
                              (va_mulv) PRM[prmvg2_84], (va_mulv) (MM[mperiod] == 2),
                              (va_mulv) PRM[prmvg3_84], (va_mulv) (MM[mperiod] == 3),
                              (va_mulv) PRM[prmvg4_84], (va_mulv) (MM[mperiod] == 4),
                              (va_mulv) PRM[prmvg5_84], (va_mulv) (MM[mperiod] == 5),
                              (va_mulv) PRM[prmvg6_84], (va_mulv) (MM[mperiod] == 6),
                              (va_mulv) PRM[prmvg7_84], (va_mulv) (MM[mperiod] == 7),
                              (va_mulv) PRM[prmvg8_84], (va_count) END);

    /* AANROEP EN RAPPOTEREN ROBUGROVER */
    if (IH[hrgvact] != 0)
    {
        int teller = 0;

        TC[teller++] = berekencyclustijd_va_arg(fc03, fc05, fc08, fc11, END);
        TC[teller++] = berekencyclustijd_va_arg(fc02, fc09, fc11, fc05, END);

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
    if (SCH[schsi33]) SeniorenGroen(fc33, d3331, tdbsiexgrd3331, d3332, tdbsiexgrd3332, prmsiexgrperc33, hsiexgr33, tsiexgr33, tnlsgd3334, END);
    if (SCH[schsi34]) SeniorenGroen(fc34, d3431, tdbsiexgrd3431, d3432, tdbsiexgrd3432, prmsiexgrperc34, hsiexgr34, tsiexgr34, tnlsgd3433, END);

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
    if (IH[hfile68af]) RW[fc08] &= ~BIT4;
    if (IH[hfile68af]) RW[fc11] &= ~BIT4;

    /* Geen wachtstand bij file stroomafwaarts */
    if (IH[hfile68af]) WS[fc08] &= ~BIT4;
    if (IH[hfile68af]) WS[fc11] &= ~BIT4;

    Wachtgroen_Add();
}
void Meetkriterium(void)
{
#if (defined TDHAMAX)
    int d;
#endif
    int fc;

    meetkriterium2_prm_va_arg((count)fc02, (count)tkm02, (count)mmk02, 
                             (va_bool)TDH[d0201], (va_mulv)PRM[prmmk0201],
                             (va_bool)TDH[d0202], (va_mulv)PRM[prmmk0202],
                             (va_bool)TDH[d0203], (va_mulv)PRM[prmmk0203],
                             (va_bool)TDH[d0204], (va_mulv)PRM[prmmk0204],
                             (va_bool)TDH[d0205], (va_mulv)PRM[prmmk0205],
                             (va_bool)TDH[d0206], (va_mulv)PRM[prmmk0206],
                             (va_bool)TDH[d0207], (va_mulv)PRM[prmmk0207],
                             (va_bool)TDH[d0208], (va_mulv)PRM[prmmk0208],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc03, (count)tkm03, 
                             (va_count)d0301, (va_mulv)PRM[prmmk0301],
                             (va_count)d0302, (va_mulv)PRM[prmmk0302],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc05, (count)tkm05, 
                             (va_count)d0501, (va_mulv)PRM[prmmk0501],
                             (va_count)d0502, (va_mulv)PRM[prmmk0502],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc08, (count)tkm08, (count)mmk08, 
                             (va_bool)TDH[d0801], (va_mulv)PRM[prmmk0801],
                             (va_bool)TDH[d0802], (va_mulv)PRM[prmmk0802],
                             (va_bool)TDH[d0803], (va_mulv)PRM[prmmk0803],
                             (va_bool)TDH[d0804], (va_mulv)PRM[prmmk0804],
                             (va_bool)TDH[d0805], (va_mulv)PRM[prmmk0805],
                             (va_bool)TDH[d0806], (va_mulv)PRM[prmmk0806],
                             (va_bool)TDH[d0807], (va_mulv)PRM[prmmk0807],
                             (va_bool)TDH[d0808], (va_mulv)PRM[prmmk0808],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc09, (count)tkm09, 
                             (va_count)d0901, (va_mulv)PRM[prmmk0901],
                             (va_count)d0902, (va_mulv)PRM[prmmk0902],
                             (va_count)d0903, (va_mulv)PRM[prmmk0903],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc11, (count)tkm11, (count)mmk11, 
                             (va_bool)TDH[d1101], (va_mulv)PRM[prmmk1101],
                             (va_bool)TDH[d1102], (va_mulv)PRM[prmmk1102],
                             (va_bool)TDH[d1103], (va_mulv)PRM[prmmk1103],
                             (va_bool)TDH[d1104], (va_mulv)PRM[prmmk1104],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc21, (count)tkm21, 
                             (va_count)d2101, (va_mulv)PRM[prmmk2101],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc22, (count)tkm22, 
                             (va_count)d2201, (va_mulv)PRM[prmmk2201],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc24, (count)tkm24, 
                             (va_count)d2401, (va_mulv)PRM[prmmk2401],
                             (va_count)d2402, (va_mulv)PRM[prmmk2402],
                             (va_count)d2403, (va_mulv)PRM[prmmk2403],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc26, (count)tkm26, 
                             (va_count)d2601, (va_mulv)PRM[prmmk2601],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc28, (count)tkm28, 
                             (va_count)d2801, (va_mulv)PRM[prmmk2801],
                             (va_count)d2802, (va_mulv)PRM[prmmk2802],
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
    meetkriterium_prm_va_arg((count)fc61, (count)tkm61, 
                             (va_count)d6101, (va_mulv)PRM[prmmk6101],
                             (va_count)d6102, (va_mulv)PRM[prmmk6102],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc62, (count)tkm62, (count)mmk62, 
                             (va_bool)TDH[d6201], (va_mulv)PRM[prmmk6201],
                             (va_bool)TDH[d6202], (va_mulv)PRM[prmmk6202],
                             (va_bool)TDH[d6203], (va_mulv)PRM[prmmk6203],
                             (va_bool)TDH[d6204], (va_mulv)PRM[prmmk6204],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc67, (count)tkm67, 
                             (va_count)d6701, (va_mulv)PRM[prmmk6701],
                             (va_count)d6702, (va_mulv)PRM[prmmk6702],
                             (va_count)END);
    meetkriterium2_prm_va_arg((count)fc68, (count)tkm68, (count)mmk68, 
                             (va_bool)TDH[d6801], (va_mulv)PRM[prmmk6801],
                             (va_bool)TDH[d6802], (va_mulv)PRM[prmmk6802],
                             (va_bool)TDH[d6803], (va_mulv)PRM[prmmk6803],
                             (va_bool)TDH[d6804], (va_mulv)PRM[prmmk6804],
                             (va_bool)TDH[d6821], (va_mulv)PRM[prmmk6821],
                             (va_bool)TDH[d6822], (va_mulv)PRM[prmmk6822],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc81, (count)tkm81, 
                             (va_count)d8101, (va_mulv)PRM[prmmk8101],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc82, (count)tkm82, 
                             (va_count)d8201, (va_mulv)PRM[prmmk8201],
                             (va_count)END);
    meetkriterium_prm_va_arg((count)fc84, (count)tkm84, 
                             (va_count)d8401, (va_mulv)PRM[prmmk8401],
                             (va_count)END);


    /* Richtinggevoelig verlengen */
    /* -------------------------- */
    MeetKriteriumRGprm((count) fc24, (count) tkm24,
        SCH[schrgvd2403] &&
        (bool) RichtingVerlengen(fc24, d2403, d2402,
                                 trgrd2403_d2402, trgvd2403_d2402,
                                 hrgvd2403_d2402), (mulv)PRM[prmmkrgd2403],
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
    if (SCH[schschoolingreep33] && H[hschoolingreepd3331] && T[tschoolingreepmaxg33]) RW[fc33] |= BIT8;
    if (SCH[schschoolingreep33] && H[hschoolingreepd3332] && T[tschoolingreepmaxg33]) RW[fc33] |= BIT8;
    if (SCH[schschoolingreep34] && H[hschoolingreepd3431] && T[tschoolingreepmaxg34]) RW[fc34] |= BIT8;
    if (SCH[schschoolingreep34] && H[hschoolingreepd3432] && T[tschoolingreepmaxg34]) RW[fc34] |= BIT8;

    hiaattijden_verlenging(IH[hgeendynhiaat08], SCH[schedkop_08], FALSE, mmk08, IH[hopdrempelen08], fc08, 
        1, d0801, t0801_1, t0801_2, ttdh_0801_1, ttdh_0801_2, tmax_0801, prmspringverleng_0801, hverleng_0801, 
        1, d0803, t0803_1, t0803_2, ttdh_0803_1, ttdh_0803_2, tmax_0803, prmspringverleng_0803, hverleng_0803, 
        1, d0805, t0805_1, t0805_2, ttdh_0805_1, ttdh_0805_2, tmax_0805, prmspringverleng_0805, hverleng_0805, 
        1, d0807, t0807_1, t0807_2, ttdh_0807_1, ttdh_0807_2, tmax_0807, prmspringverleng_0807, hverleng_0807, 
        2, d0802, t0802_1, t0802_2, ttdh_0802_1, ttdh_0802_2, tmax_0802, prmspringverleng_0802, hverleng_0802, 
        2, d0804, t0804_1, t0804_2, ttdh_0804_1, ttdh_0804_2, tmax_0804, prmspringverleng_0804, hverleng_0804, 
        2, d0806, t0806_1, t0806_2, ttdh_0806_1, ttdh_0806_2, tmax_0806, prmspringverleng_0806, hverleng_0806, 
        2, d0808, t0808_1, t0808_2, ttdh_0808_1, ttdh_0808_2, tmax_0808, prmspringverleng_0808, hverleng_0808, 
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

    YM[fc02] |= SCH[schmv02] && !Maatgevend_Groen(fc02) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc03] |= SCH[schmv03] && !Maatgevend_Groen(fc03) && hf_wsg() ? BIT4 : 0;
    YM[fc05] |= SCH[schmv05] && !Maatgevend_Groen(fc05) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc08] |= SCH[schmv08] && !Maatgevend_Groen(fc08) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc09] |= SCH[schmv09] && !Maatgevend_Groen(fc09) && hf_wsg() ? BIT4 : 0;
    YM[fc11] |= SCH[schmv11] && !Maatgevend_Groen(fc11) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc21] |= SCH[schmv21] && !Maatgevend_Groen(fc21) && hf_wsg() ? BIT4 : 0;
    YM[fc22] |= SCH[schmv22] && !Maatgevend_Groen(fc22) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc24] |= SCH[schmv24] && !Maatgevend_Groen(fc24) && hf_wsg() ? BIT4 : 0;
    YM[fc26] |= SCH[schmv26] && !Maatgevend_Groen(fc26) && hf_wsg() ? BIT4 : 0;
    YM[fc28] |= SCH[schmv28] && !Maatgevend_Groen(fc28) && hf_wsg() ? BIT4 : 0;
    YM[fc31] |= SCH[schmv31] && !Maatgevend_Groen(fc31) && hf_wsg() && !kcv(fc32) ? BIT4 : 0; /* @Menno: !kcv(fc32) toevoegen indien inlopen 31-32 is gedefinieerd in de generator */
    YM[fc32] |= SCH[schmv32] && !Maatgevend_Groen(fc32) && hf_wsg() && !kcv(fc31) ? BIT4 : 0;
    YM[fc33] |= SCH[schmv33] && !Maatgevend_Groen(fc33) && hf_wsg() && !kcv(fc34) ? BIT4 : 0;
    YM[fc34] |= SCH[schmv34] && !Maatgevend_Groen(fc34) && hf_wsg() && !kcv(fc33) ? BIT4 : 0;
    YM[fc38] |= SCH[schmv38] && !Maatgevend_Groen(fc38) && hf_wsg() ? BIT4 : 0;
    YM[fc61] |= SCH[schmv61] && !Maatgevend_Groen(fc61) && hf_wsg() ? BIT4 : 0;
    YM[fc62] |= SCH[schmv62] && !Maatgevend_Groen(fc62) && hf_wsg() ? BIT4 : 0;
    YM[fc67] |= SCH[schmv67] && !Maatgevend_Groen(fc67) && hf_wsg() ? BIT4 : 0;
    YM[fc68] |= SCH[schmv68] && !Maatgevend_Groen(fc68) && hf_wsg() ? BIT4 : 0;
    YM[fc81] |= SCH[schmv81] && !Maatgevend_Groen(fc81) && hf_wsg() ? BIT4 : 0;
    YM[fc82] |= SCH[schmv82] && !Maatgevend_Groen(fc82) && hf_wsg_nl() ? BIT4 : 0;
    YM[fc84] |= SCH[schmv84] && !Maatgevend_Groen(fc84) && hf_wsg() ? BIT4 : 0;

    /* Niet meeverlengen tijdens file (meting na ss) */
    if (IH[hfile68af]) YM[fc08] &= ~BIT4;
    if (IH[hfile68af]) YM[fc11] &= ~BIT4;

    /* Hard meeverlengen */
    if (SCH[schhardmv3205] && G[fc05] && !kcv(fc32)) YM[fc32] |= BIT1;

    /* Veiligheidsgroen */
    /* ---------------- */
    veiligheidsgroen_V1(fc02, tvgmax02, d0207, tvgvolg0207, schvg0207, tvghiaat0207, d0208, tvgvolg0208, schvg0208, tvghiaat0208, END);
    veiligheidsgroen_V1(fc08, tvgmax08, d0807, tvgvolg0807, schvg0807, tvghiaat0807, d0808, tvgvolg0808, schvg0808, tvghiaat0808, END);
    veiligheidsgroen_V1(fc11, tvgmax11, d1104, tvgvolg1104, schvg1104, tvghiaat1104, END);

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
        set_FPRML_fk_gkl(fc, PRML, ML, MLMAX, (bool)PFPR[fc]);
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
    if (RT[tnlfgd2221] || T[tnlfgd2221] || RT[tnlegd2221] || T[tnlegd2221])
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
    if (RT[tnlfgd0262] || T[tnlfgd0262] || RT[tnlegd0262] || T[tnlegd0262])
    {
        RR[fc62] &= ~BIT5;
    }
    if (RT[tnlfgd0868] || T[tnlfgd0868] || RT[tnlegd0868] || T[tnlegd0868])
    {
        RR[fc68] &= ~BIT5;
    }
    if (RT[tnlfgd8281] || T[tnlfgd8281] || RT[tnlegd8281] || T[tnlegd8281])
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

    /* Bij nalopen op EG mag de volgrichting niet RR en FM
       gestuurd worden indien de voedende richting groen is */
    if (!R[fc02] || TNL[fc62]) { RR[fc62] &= ~BIT5; FM[fc62] &= ~BIT5; }
    if (!R[fc05] || TNL[fc62]) { RR[fc62] &= ~BIT5; FM[fc62] &= ~BIT5; }
    if (!R[fc08] || TNL[fc68]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (!R[fc11] || TNL[fc68]) { RR[fc68] &= ~BIT5; FM[fc68] &= ~BIT5; }
    if (!R[fc22] || TNL[fc21]) { RR[fc21] &= ~BIT5; FM[fc21] &= ~BIT5; }
    if (!R[fc82] || TNL[fc81]) { RR[fc81] &= ~BIT5; FM[fc81] &= ~BIT5; }

    PAR[fc02] = (Real_Ruimte(fc02, mar02) >= PRM[prmaltp02]) && SCH[schaltg02];
    PAR[fc03] = (Real_Ruimte(fc03, mar03) >= PRM[prmaltp03]) && SCH[schaltg03];
    PAR[fc05] = (Real_Ruimte(fc05, mar05) >= PRM[prmaltp05]) && SCH[schaltg05];
    PAR[fc08] = (Real_Ruimte(fc08, mar08) >= PRM[prmaltp08]) && SCH[schaltg08];
    PAR[fc09] = (Real_Ruimte(fc09, mar09) >= PRM[prmaltp09]) && SCH[schaltg09];
    PAR[fc11] = (Real_Ruimte(fc11, mar11) >= PRM[prmaltp11]) && SCH[schaltg11];
    PAR[fc21] = (Real_Ruimte(fc21, mar21) >= PRM[prmaltp21]) && SCH[schaltg21];
    PAR[fc22] = (Real_Ruimte(fc22, mar22) >= PRM[prmaltp22]) && SCH[schaltg22];
    PAR[fc24] = (Real_Ruimte(fc24, mar24) >= PRM[prmaltp24]) && SCH[schaltg24];
    PAR[fc26] = (Real_Ruimte(fc26, mar26) >= PRM[prmaltp26]) && SCH[schaltg26];
    PAR[fc28] = (Real_Ruimte(fc28, mar28) >= PRM[prmaltp28]) && SCH[schaltg28];
    PAR[fc31] = (Real_Ruimte(fc31, mar31) >= PRM[prmaltp31]) && SCH[schaltg31];
    PAR[fc32] = (Real_Ruimte(fc32, mar32) >= PRM[prmaltp32]) && SCH[schaltg32];
    PAR[fc33] = (Real_Ruimte(fc33, mar33) >= PRM[prmaltp33]) && SCH[schaltg33];
    PAR[fc34] = (Real_Ruimte(fc34, mar34) >= PRM[prmaltp34]) && SCH[schaltg34];
    PAR[fc38] = (Real_Ruimte(fc38, mar38) >= PRM[prmaltp38]) && SCH[schaltg38];
    PAR[fc61] = (Real_Ruimte(fc61, mar61) >= PRM[prmaltp61]) && SCH[schaltg61];
    PAR[fc62] = (Real_Ruimte(fc62, mar62) >= PRM[prmaltp62]) && SCH[schaltg62];
    PAR[fc67] = (Real_Ruimte(fc67, mar67) >= PRM[prmaltp67]) && SCH[schaltg67];
    PAR[fc68] = (Real_Ruimte(fc68, mar68) >= PRM[prmaltp68]) && SCH[schaltg68];
    PAR[fc81] = (Real_Ruimte(fc81, mar81) >= PRM[prmaltp81]) && SCH[schaltg81];
    PAR[fc82] = (Real_Ruimte(fc82, mar82) >= PRM[prmaltp82]) && SCH[schaltg82];
    PAR[fc84] = (Real_Ruimte(fc84, mar84) >= PRM[prmaltp84]) && SCH[schaltg84];

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
        PAR[fc02] = PAR[fc02] && Naloop_OK(fc02, mar62, tnlegd0262);
        PAR[fc05] = PAR[fc05] && Naloop_OK(fc05, mar62, tnlegd0562);
        PAR[fc08] = PAR[fc08] && Naloop_OK(fc08, mar68, tnlegd0868);
        PAR[fc11] = PAR[fc11] && Naloop_OK(fc11, mar68, tnlegd1168);
        PAR[fc22] = PAR[fc22] && Naloop_OK(fc22, mar21, tnlegd2221);
        PAR[fc82] = PAR[fc82] && Naloop_OK(fc82, mar81, tnlegd8281);
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

    /* Niet alternatief komen tijdens file */
    if (IH[hfile68af]) PAR[fc08] = FALSE;
    if (IH[hfile68af]) PAR[fc11] = FALSE;

    /* set meerealisatie voor richtingen met nalopen */
    /* --------------------------------------------- */
    set_MRLW_nl(fc62, fc02, (bool) ((T[tlr6202] || RT[tlr6202]) && A[fc62] && !G[fc62]));
    set_MRLW_nl(fc62, fc05, (bool) ((T[tlr6205] || RT[tlr6205]) && A[fc62] && !G[fc62]));
    set_MRLW_nl(fc68, fc08, (bool) ((T[tlr6808] || RT[tlr6808]) && A[fc68] && !G[fc68]));
    set_MRLW_nl(fc68, fc11, (bool) ((T[tlr6811] || RT[tlr6811]) && A[fc68] && !G[fc68]));
    set_MRLW_nl(fc21, fc22, (bool) ((T[tlr2122] || RT[tlr2122]) && A[fc21] && !G[fc21]));
    set_MRLW(fc32, fc31, (bool) ((T[til3132] || RT[til3132]) && A[fc32] && !G[fc32] && !kcv(fc32)));
    set_MRLW(fc31, fc32, (bool) ((T[til3231] || RT[til3231]) && A[fc31] && !G[fc31] && !kcv(fc31)));
    set_MRLW(fc34, fc33, (bool) ((T[til3334] || RT[til3334]) && A[fc34] && !G[fc34] && !kcv(fc34)));
    set_MRLW(fc33, fc34, (bool) ((T[til3433] || RT[til3433]) && A[fc33] && !G[fc33] && !kcv(fc33)));
    set_MRLW_nl(fc81, fc82, (bool) ((T[tlr8182] || RT[tlr8182]) && A[fc81] && !G[fc81]));

    /* set meerealisatie voor gelijk- of voorstartende richtingen */
    /* ---------------------------------------------------------- */
    set_MRLW(fc22, fc05, (bool) (RA[fc05] && (PR[fc05] || AR[fc05] || (AA[fc05] & BIT11)) && A[fc22] && R[fc22] && !TRG[fc22] && !kcv(fc22)));
    set_MRLW(fc32, fc05, (bool) (RA[fc05] && (PR[fc05] || AR[fc05] || (AA[fc05] & BIT11)) && A[fc32] && R[fc32] && !TRG[fc32] && !kcv(fc32)));






    Alternatief_Add();

    langstwachtende_alternatief_modulen(PRML, ML, ML_MAX);

    /* Tegenhouden voedende richting, bij een conflicterende prio-ingreep van de nalooprichting */
    /* Afzetten RR */
    if ((G[fc11] || !(YV[fc11] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC11] & poBijzonderRealiseren))) RR[fc02] &= ~BIT10;
    if ((G[fc11] || !(YV[fc11] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC11] & poBijzonderRealiseren))) RR[fc05] &= ~BIT10;
    if ((G[fc22] || !(YV[fc22] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC22] & poBijzonderRealiseren))) RR[fc08] &= ~BIT10;
    if ((G[fc22] || !(YV[fc22] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC22] & poBijzonderRealiseren))) RR[fc11] &= ~BIT10;
    if ((G[fc02] || !(YV[fc02] & PRIO_YV_BIT) || !(iPrioriteitsOpties[prioFC02] & poBijzonderRealiseren))) RR[fc22] &= ~BIT10;

    /* Opzetten RR */
    if (((Z[fc02] & PRIO_Z_BIT) && (YV[fc11] & PRIO_YV_BIT) && !G[fc11])) RR[fc02] |= BIT10;
    if (((Z[fc05] & PRIO_Z_BIT) && (YV[fc11] & PRIO_YV_BIT) && !G[fc11])) RR[fc05] |= BIT10;
    if (((Z[fc08] & PRIO_Z_BIT) && (YV[fc22] & PRIO_YV_BIT) && !G[fc22])) RR[fc08] |= BIT10;
    if (((Z[fc11] & PRIO_Z_BIT) && (YV[fc22] & PRIO_YV_BIT) && !G[fc22])) RR[fc11] |= BIT10;
    if (((Z[fc22] & PRIO_Z_BIT) && (YV[fc02] & PRIO_YV_BIT) && !G[fc02])) RR[fc22] |= BIT10;

    YML[ML] = yml_cv_pr_nl(PRML, ML, ML_MAX);

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

    /* VA ontruimen */
    /* ============ */

    /* herstarten maxima */
    RT[tvamax62] = !R[fc62];

    /* Fase 62 */
    if (!(CIF_IS[d6201] >= CIF_DET_STORING))
    {
        RT[tva6209_d6201] = D[d6201] && T[tvamax62] && T_max[tva6209_d6201];
        RT[tva6211_d6201] = D[d6201] && T[tvamax62] && T_max[tva6211_d6201];
        RT[tva6226_d6201] = D[d6201] && T[tvamax62] && T_max[tva6226_d6201];
    }
    else
    {
        RT[tva6209_d6201] = FALSE;
        RT[tva6211_d6201] = FALSE;
        RT[tva6226_d6201] = FALSE;
    }

    /* afzetten X voor alle relevante fasen */
    X[fc09] &= ~BIT9;
    X[fc11] &= ~BIT9;
    X[fc26] &= ~BIT9;
    X[fc11] &= ~BIT9;

    /* opzetten X voor conflicten van fase 62 */
    if(T[tva6209_d6201]) X[fc09] |= BIT9;
    if(T[tva6211_d6201]) X[fc11] |= BIT9;
    if(T[tva6226_d6201]) X[fc26] |= BIT9;
    /* opzetten X voor synchronisaties */
    if (X[fc26] & BIT9) X[fc11] |= BIT9;

    /* School ingreep: bijhouden max groen & vasthouden naloop tijd */
    RT[tschoolingreepmaxg33] = SG[fc33];
    RT[tschoolingreepmaxg34] = SG[fc34];
    HT[tnlsgd3334] = T[tschoolingreepmaxg33] && CV[fc33] && G[fc33] && IH[hschoolingreepd3331];
    HT[tnlsgd3433] = T[tschoolingreepmaxg34] && CV[fc34] && G[fc34] && IH[hschoolingreepd3432];

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

    /* File ingreep 68af */

    FileMeldingV2(d6821, tbz6821, trij6821, tafv6821, hfile6821);
    FileMeldingV2(d6822, tbz6822, trij6822, tafv6822, hfile6822);
    RT[tafv68af] = D[d6821] || D[d6822];
    if (!(T[tafv68af] || RT[tafv68af]))
    {
        IH[hfile6821] = FALSE;
        IH[hfile6822] = FALSE;
    }
        /* strook parallel: file bij melding op 1 strook */
    if(SCH[schfile68afparstrook])
    {
        IH[hfile68af] = IH[hfile6821] || IH[hfile6822];
    }
    /* niet parallel: file bij melding van alle lussen */
    else
    {
        IH[hfile68af] = IH[hfile6821] && IH[hfile6822];
    }

    /* percentage MG bij filemelding */
    if (IH[hfile68af] && SCH[schfile68af] && SCH[schfiledoseren68af])
    {
        PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmfperc68af08],
                                     8, PRM[prmvg8_08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
        PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmfperc68af11],
                                     8, PRM[prmvg8_11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
    }

    /* Afkappen tijdens file ingreep 68af */
    /* Eenmalig afkappen fase 08 op start file ingreep */
    RT[tafkmingroen08file68af] = ER[fc08] && T_max[tafkmingroen08file68af];
    if (SH[hfile68af] && G[fc08]) IH[hafk08file68af] = TRUE;
    if (EG[fc08]) IH[hafk08file68af] = FALSE;
    /* Afkappen fase 08 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen08file68af] = SG[fc08] && T_max[tmaxgroen08file68af];
    if (G[fc08] && IH[hfile68af])
    {
        if (IH[hafk08file68af] && T_max[tafkmingroen08file68af] &&
            !RT[tafkmingroen08file68af] && !T[tafkmingroen08file68af] && !(MK[fc08] & PRIO_MK_BIT) || 
            !RT[tmaxgroen08file68af] && !T[tmaxgroen08file68af])
        {
            Z[fc08] |= BIT5;
        }
    }
    /* Eenmalig afkappen fase 11 op start file ingreep */
    RT[tafkmingroen11file68af] = ER[fc11] && T_max[tafkmingroen11file68af];
    if (SH[hfile68af] && G[fc11]) IH[hafk11file68af] = TRUE;
    if (EG[fc11]) IH[hafk11file68af] = FALSE;
    /* Afkappen fase 11 op max. groentijd tijdens file ingreep */
    RT[tmaxgroen11file68af] = SG[fc11] && T_max[tmaxgroen11file68af];
    if (G[fc11] && IH[hfile68af])
    {
        if (IH[hafk11file68af] && T_max[tafkmingroen11file68af] &&
            !RT[tafkmingroen11file68af] && !T[tafkmingroen11file68af] && !(MK[fc11] & PRIO_MK_BIT) || 
            !RT[tmaxgroen11file68af] && !T[tmaxgroen11file68af])
        {
            Z[fc11] |= BIT5;
        }
    }

    /* Minimale roodtijden tijdens file ingreep 68af */
    /* Minimale roodtijd fase 08 */
    RT[tminrood08file68af] = EGL[fc08] && T_max[tminrood08file68af];
    if (R[fc08] && T[tminrood08file68af] && IH[hfile68af])
    {
        BL[fc08] |= BIT5;
    }
    /* Minimale roodtijd fase 11 */
    RT[tminrood11file68af] = EGL[fc11] && T_max[tminrood11file68af];
    if (R[fc11] && T[tminrood11file68af] && IH[hfile68af])
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
                     SCH[schdvakd0201] && (CIF_IS[d0201] >= CIF_DET_STORING) ||
                     SCH[schdvakd0202] && (CIF_IS[d0202] >= CIF_DET_STORING) ||
                     (CIF_IS[d0201] >= CIF_DET_STORING || PRM[prmda0201] == 0) &&
                     (CIF_IS[d0203] >= CIF_DET_STORING || PRM[prmda0203] == 0) &&
                     (CIF_IS[d0205] >= CIF_DET_STORING || PRM[prmda0205] == 0) &&
                     (CIF_IS[d0207] >= CIF_DET_STORING || PRM[prmda0207] == 0) &&
                     !(PRM[prmda0201] == 0 && PRM[prmda0203] == 0 && PRM[prmda0205] == 0 && PRM[prmda0207] == 0) ||
                     (CIF_IS[d0202] >= CIF_DET_STORING || PRM[prmda0202] == 0) &&
                     (CIF_IS[d0204] >= CIF_DET_STORING || PRM[prmda0204] == 0) &&
                     (CIF_IS[d0206] >= CIF_DET_STORING || PRM[prmda0206] == 0) &&
                     (CIF_IS[d0208] >= CIF_DET_STORING || PRM[prmda0208] == 0) &&
                     !(PRM[prmda0202] == 0 && PRM[prmda0204] == 0 && PRM[prmda0206] == 0 && PRM[prmda0208] == 0));
    RT[tdstvert03] = !T[tdstvert03] && R[fc03] && !A[fc03] && (
                     SCH[schdvakd0301] && (CIF_IS[d0301] >= CIF_DET_STORING) ||
                     (CIF_IS[d0301] >= CIF_DET_STORING || PRM[prmda0301] == 0) &&
                     (CIF_IS[d0302] >= CIF_DET_STORING || PRM[prmda0302] == 0) &&
                     !(PRM[prmda0301] == 0 && PRM[prmda0302] == 0));
    RT[tdstvert05] = !T[tdstvert05] && R[fc05] && !A[fc05] && (
                     (CIF_IS[d0501] >= CIF_DET_STORING || PRM[prmda0501] == 0) &&
                     (CIF_IS[d0502] >= CIF_DET_STORING || PRM[prmda0502] == 0) &&
                     !(PRM[prmda0501] == 0 && PRM[prmda0502] == 0));
    RT[tdstvert08] = !T[tdstvert08] && R[fc08] && !A[fc08] && (
                     (CIF_IS[d0801] >= CIF_DET_STORING || PRM[prmda0801] == 0) &&
                     (CIF_IS[d0803] >= CIF_DET_STORING || PRM[prmda0803] == 0) &&
                     (CIF_IS[d0805] >= CIF_DET_STORING || PRM[prmda0805] == 0) &&
                     !(PRM[prmda0801] == 0 && PRM[prmda0803] == 0 && PRM[prmda0805] == 0) ||
                     (CIF_IS[d0802] >= CIF_DET_STORING || PRM[prmda0802] == 0) &&
                     (CIF_IS[d0804] >= CIF_DET_STORING || PRM[prmda0804] == 0) &&
                     (CIF_IS[d0806] >= CIF_DET_STORING || PRM[prmda0806] == 0) &&
                     !(PRM[prmda0802] == 0 && PRM[prmda0804] == 0 && PRM[prmda0806] == 0));
    RT[tdstvert09] = !T[tdstvert09] && R[fc09] && !A[fc09] && (
                     (CIF_IS[d0901] >= CIF_DET_STORING || PRM[prmda0901] == 0) &&
                     (CIF_IS[d0902] >= CIF_DET_STORING || PRM[prmda0902] == 0) &&
                     !(PRM[prmda0901] == 0 && PRM[prmda0902] == 0));
    RT[tdstvert11] = !T[tdstvert11] && R[fc11] && !A[fc11] && (
                     (CIF_IS[d1101] >= CIF_DET_STORING || PRM[prmda1101] == 0) &&
                     (CIF_IS[d1102] >= CIF_DET_STORING || PRM[prmda1102] == 0) &&
                     (CIF_IS[d1103] >= CIF_DET_STORING || PRM[prmda1103] == 0) &&
                     !(PRM[prmda1101] == 0 && PRM[prmda1102] == 0 && PRM[prmda1103] == 0));
    RT[tdstvert21] = !T[tdstvert21] && R[fc21] && !A[fc21] && (
                     (CIF_IS[d2101] >= CIF_DET_STORING || PRM[prmda2101] == 0) &&
                     (CIF_IS[d2131] >= CIF_DET_STORING || PRM[prmda2131] == 0) &&
                     !(PRM[prmda2101] == 0 && PRM[prmda2131] == 0));
    RT[tdstvert22] = !T[tdstvert22] && R[fc22] && !A[fc22] && (
                     (CIF_IS[d2201] >= CIF_DET_STORING || PRM[prmda2201] == 0) &&
                     (CIF_IS[d2231] >= CIF_DET_STORING || PRM[prmda2231] == 0) &&
                     !(PRM[prmda2201] == 0 && PRM[prmda2231] == 0));
    RT[tdstvert24] = !T[tdstvert24] && R[fc24] && !A[fc24] && (
                     (CIF_IS[d2401] >= CIF_DET_STORING || PRM[prmda2401] == 0) &&
                     (CIF_IS[d2431] >= CIF_DET_STORING || PRM[prmda2431] == 0) &&
                     !(PRM[prmda2401] == 0 && PRM[prmda2431] == 0));
    RT[tdstvert26] = !T[tdstvert26] && R[fc26] && !A[fc26] && (
                     (CIF_IS[d2601] >= CIF_DET_STORING || PRM[prmda2601] == 0) &&
                     (CIF_IS[d2631] >= CIF_DET_STORING || PRM[prmda2631] == 0) &&
                     !(PRM[prmda2601] == 0 && PRM[prmda2631] == 0));
    RT[tdstvert28] = !T[tdstvert28] && R[fc28] && !A[fc28] && (
                     (CIF_IS[d2801] >= CIF_DET_STORING || PRM[prmda2801] == 0) &&
                     (CIF_IS[d2831] >= CIF_DET_STORING || PRM[prmda2831] == 0) &&
                     !(PRM[prmda2801] == 0 && PRM[prmda2831] == 0));
    RT[tdstvert31] = !T[tdstvert31] && R[fc31] && !A[fc31] && (
                     SCH[schdvakd3131] && (CIF_IS[d3131] >= CIF_DET_STORING) ||
                     SCH[schdvakd3132] && (CIF_IS[d3132] >= CIF_DET_STORING) ||
                     (CIF_IS[d3131] >= CIF_DET_STORING || PRM[prmda3131] == 0) &&
                     (CIF_IS[d3132] >= CIF_DET_STORING || PRM[prmda3132] == 0) &&
                     !(PRM[prmda3131] == 0 && PRM[prmda3132] == 0));
    RT[tdstvert32] = !T[tdstvert32] && R[fc32] && !A[fc32] && (
                     (CIF_IS[d3231] >= CIF_DET_STORING || PRM[prmda3231] == 0) &&
                     (CIF_IS[d3232] >= CIF_DET_STORING || PRM[prmda3232] == 0) &&
                     !(PRM[prmda3231] == 0 && PRM[prmda3232] == 0));
    RT[tdstvert33] = !T[tdstvert33] && R[fc33] && !A[fc33] && (
                     (CIF_IS[d3331] >= CIF_DET_STORING || PRM[prmda3331] == 0) &&
                     (CIF_IS[d3332] >= CIF_DET_STORING || PRM[prmda3332] == 0) &&
                     !(PRM[prmda3331] == 0 && PRM[prmda3332] == 0));
    RT[tdstvert34] = !T[tdstvert34] && R[fc34] && !A[fc34] && (
                     (CIF_IS[d3431] >= CIF_DET_STORING || PRM[prmda3431] == 0) &&
                     (CIF_IS[d3432] >= CIF_DET_STORING || PRM[prmda3432] == 0) &&
                     !(PRM[prmda3431] == 0 && PRM[prmda3432] == 0));
    RT[tdstvert38] = !T[tdstvert38] && R[fc38] && !A[fc38] && (
                     (CIF_IS[d3831] >= CIF_DET_STORING || PRM[prmda3831] == 0) &&
                     (CIF_IS[d3832] >= CIF_DET_STORING || PRM[prmda3832] == 0) &&
                     !(PRM[prmda3831] == 0 && PRM[prmda3832] == 0));
    RT[tdstvert61] = !T[tdstvert61] && R[fc61] && !A[fc61] && (
                     (CIF_IS[d6101] >= CIF_DET_STORING || PRM[prmda6101] == 0) &&
                     (CIF_IS[d6102] >= CIF_DET_STORING || PRM[prmda6102] == 0) &&
                     !(PRM[prmda6101] == 0 && PRM[prmda6102] == 0));
    RT[tdstvert62] = !T[tdstvert62] && R[fc62] && !A[fc62] && (
                     (CIF_IS[d6201] >= CIF_DET_STORING || PRM[prmda6201] == 0) &&
                     (CIF_IS[d6203] >= CIF_DET_STORING || PRM[prmda6203] == 0) &&
                     !(PRM[prmda6201] == 0 && PRM[prmda6203] == 0) ||
                     (CIF_IS[d6202] >= CIF_DET_STORING || PRM[prmda6202] == 0) &&
                     (CIF_IS[d6204] >= CIF_DET_STORING || PRM[prmda6204] == 0) &&
                     !(PRM[prmda6202] == 0 && PRM[prmda6204] == 0));
    RT[tdstvert67] = !T[tdstvert67] && R[fc67] && !A[fc67] && (
                     (CIF_IS[d6701] >= CIF_DET_STORING || PRM[prmda6701] == 0) &&
                     (CIF_IS[d6702] >= CIF_DET_STORING || PRM[prmda6702] == 0) &&
                     !(PRM[prmda6701] == 0 && PRM[prmda6702] == 0));
    RT[tdstvert68] = !T[tdstvert68] && R[fc68] && !A[fc68] && (
                     (CIF_IS[d6801] >= CIF_DET_STORING || PRM[prmda6801] == 0) &&
                     (CIF_IS[d6803] >= CIF_DET_STORING || PRM[prmda6803] == 0) &&
                     !(PRM[prmda6801] == 0 && PRM[prmda6803] == 0) ||
                     (CIF_IS[d6802] >= CIF_DET_STORING || PRM[prmda6802] == 0) &&
                     (CIF_IS[d6804] >= CIF_DET_STORING || PRM[prmda6804] == 0) &&
                     !(PRM[prmda6802] == 0 && PRM[prmda6804] == 0));
    RT[tdstvert81] = !T[tdstvert81] && R[fc81] && !A[fc81] && (
                     (CIF_IS[d8101] >= CIF_DET_STORING || PRM[prmda8101] == 0) &&
                     (CIF_IS[d8131] >= CIF_DET_STORING || PRM[prmda8131] == 0) &&
                     !(PRM[prmda8101] == 0 && PRM[prmda8131] == 0));
    RT[tdstvert82] = !T[tdstvert82] && R[fc82] && !A[fc82] && (
                     (CIF_IS[d8201] >= CIF_DET_STORING || PRM[prmda8201] == 0) &&
                     (CIF_IS[d8231] >= CIF_DET_STORING || PRM[prmda8231] == 0) &&
                     !(PRM[prmda8201] == 0 && PRM[prmda8231] == 0));
    RT[tdstvert84] = !T[tdstvert84] && R[fc84] && !A[fc84] && (
                     (CIF_IS[d8401] >= CIF_DET_STORING || PRM[prmda8401] == 0) &&
                     (CIF_IS[d8431] >= CIF_DET_STORING || PRM[prmda8431] == 0) &&
                     !(PRM[prmda8401] == 0 && PRM[prmda8431] == 0));
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
    VervangendHiaatKoplus(fc02, d0201, d0203, thdvd0201);
    VervangendHiaatKoplus(fc02, d0202, d0204, thdvd0202);
    VervangendHiaatKoplus(fc03, d0301, d0302, thdvd0301);
    VervangendHiaatKoplus(fc05, d0501, d0502, thdvd0501);
    VervangendHiaatKoplus(fc08, d0801, d0803, thdvd0801);
    VervangendHiaatKoplus(fc08, d0802, d0804, thdvd0802);
    VervangendHiaatKoplus(fc09, d0901, d0902, thdvd0901);
    VervangendHiaatKoplus(fc11, d1101, d1102, thdvd1101);
    VervangendHiaatKoplus(fc61, d6101, d6102, thdvd6101);
    VervangendHiaatKoplus(fc62, d6201, d6203, thdvd6201);
    VervangendHiaatKoplus(fc62, d6202, d6204, thdvd6202);
    VervangendHiaatKoplus(fc67, d6701, d6702, thdvd6701);
    VervangendHiaatKoplus(fc68, d6801, d6803, thdvd6801);
    VervangendHiaatKoplus(fc68, d6802, d6804, thdvd6802);

    /* percentage VG bij defect alle kop/lange lussen */
    /* ---------------------------------------------- */
    if ((CIF_IS[d0301] >= CIF_DET_STORING) && (CIF_IS[d0302] >= CIF_DET_STORING))
    {
        MK[fc03] |= BIT5;
        PercentageVerlengGroenTijden(fc03, mperiod, PRM[prmperc03], 
                                     8, PRM[prmvg8_03], PRM[prmvg1_03], PRM[prmvg2_03], PRM[prmvg3_03], PRM[prmvg4_03], PRM[prmvg5_03], PRM[prmvg6_03], PRM[prmvg7_03]);
    }
    if ((CIF_IS[d0501] >= CIF_DET_STORING) && (CIF_IS[d0502] >= CIF_DET_STORING))
    {
        MK[fc05] |= BIT5;
        PercentageVerlengGroenTijden(fc05, mperiod, PRM[prmperc05], 
                                     8, PRM[prmvg8_05], PRM[prmvg1_05], PRM[prmvg2_05], PRM[prmvg3_05], PRM[prmvg4_05], PRM[prmvg5_05], PRM[prmvg6_05], PRM[prmvg7_05]);
    }
    if ((CIF_IS[d0801] >= CIF_DET_STORING) && (CIF_IS[d0803] >= CIF_DET_STORING) && (CIF_IS[d0805] >= CIF_DET_STORING) ||
        (CIF_IS[d0802] >= CIF_DET_STORING) && (CIF_IS[d0804] >= CIF_DET_STORING) && (CIF_IS[d0806] >= CIF_DET_STORING))
    {
        MK[fc08] |= BIT5;
        PercentageVerlengGroenTijden(fc08, mperiod, PRM[prmperc08], 
                                     8, PRM[prmvg8_08], PRM[prmvg1_08], PRM[prmvg2_08], PRM[prmvg3_08], PRM[prmvg4_08], PRM[prmvg5_08], PRM[prmvg6_08], PRM[prmvg7_08]);
    }
    if ((CIF_IS[d0901] >= CIF_DET_STORING) && (CIF_IS[d0902] >= CIF_DET_STORING))
    {
        MK[fc09] |= BIT5;
        PercentageVerlengGroenTijden(fc09, mperiod, PRM[prmperc09], 
                                     8, PRM[prmvg8_09], PRM[prmvg1_09], PRM[prmvg2_09], PRM[prmvg3_09], PRM[prmvg4_09], PRM[prmvg5_09], PRM[prmvg6_09], PRM[prmvg7_09]);
    }
    if ((CIF_IS[d1101] >= CIF_DET_STORING) && (CIF_IS[d1102] >= CIF_DET_STORING) && (CIF_IS[d1103] >= CIF_DET_STORING))
    {
        MK[fc11] |= BIT5;
        PercentageVerlengGroenTijden(fc11, mperiod, PRM[prmperc11], 
                                     8, PRM[prmvg8_11], PRM[prmvg1_11], PRM[prmvg2_11], PRM[prmvg3_11], PRM[prmvg4_11], PRM[prmvg5_11], PRM[prmvg6_11], PRM[prmvg7_11]);
    }
    if ((CIF_IS[d6101] >= CIF_DET_STORING) && (CIF_IS[d6102] >= CIF_DET_STORING))
    {
        MK[fc61] |= BIT5;
        PercentageVerlengGroenTijden(fc61, mperiod, PRM[prmperc61], 
                                     8, PRM[prmvg8_61], PRM[prmvg1_61], PRM[prmvg2_61], PRM[prmvg3_61], PRM[prmvg4_61], PRM[prmvg5_61], PRM[prmvg6_61], PRM[prmvg7_61]);
    }
    if ((CIF_IS[d6201] >= CIF_DET_STORING) && (CIF_IS[d6203] >= CIF_DET_STORING) ||
        (CIF_IS[d6202] >= CIF_DET_STORING) && (CIF_IS[d6204] >= CIF_DET_STORING))
    {
        MK[fc62] |= BIT5;
        PercentageVerlengGroenTijden(fc62, mperiod, PRM[prmperc62], 
                                     8, PRM[prmvg8_62], PRM[prmvg1_62], PRM[prmvg2_62], PRM[prmvg3_62], PRM[prmvg4_62], PRM[prmvg5_62], PRM[prmvg6_62], PRM[prmvg7_62]);
    }
    if ((CIF_IS[d6701] >= CIF_DET_STORING) && (CIF_IS[d6702] >= CIF_DET_STORING))
    {
        MK[fc67] |= BIT5;
        PercentageVerlengGroenTijden(fc67, mperiod, PRM[prmperc67], 
                                     8, PRM[prmvg8_67], PRM[prmvg1_67], PRM[prmvg2_67], PRM[prmvg3_67], PRM[prmvg4_67], PRM[prmvg5_67], PRM[prmvg6_67], PRM[prmvg7_67]);
    }
    if ((CIF_IS[d6801] >= CIF_DET_STORING) && (CIF_IS[d6803] >= CIF_DET_STORING) ||
        (CIF_IS[d6802] >= CIF_DET_STORING) && (CIF_IS[d6804] >= CIF_DET_STORING))
    {
        MK[fc68] |= BIT5;
        PercentageVerlengGroenTijden(fc68, mperiod, PRM[prmperc68], 
                                     8, PRM[prmvg8_68], PRM[prmvg1_68], PRM[prmvg2_68], PRM[prmvg3_68], PRM[prmvg4_68], PRM[prmvg5_68], PRM[prmvg6_68], PRM[prmvg7_68]);
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

    #if (CCOL_V >= 110 && !defined TDHAMAX) || (CCOL_V < 110)
        init_tdhdyn();
    #endif

    post_init_application();
}

void PostApplication(void)
{
    int fc;

    int i = 0;
    for (i = 0; i < DPMAX; ++i)
    {
        TDH_old[i] = TDH[i];
        DB_old[i] = DB[i];
    }

/* Verklikken inkomende pelotons */
    CIF_GUS[uspelinKOP02] = IH[hpelinKOP02];

    /* Tbv parametreerbare blokindeling: reset A voor niet toegedeeld fasen */
    for (fc = 0; fc < FCMAX; ++fc)
    {
        if (BL[fc] & BIT10) A[fc] = FALSE;
    }

    PostApplication_Add();
}
void application(void)
{
    PreApplication();

    KlokPerioden();
    Aanvragen();
    BepaalRealisatieTijden();
    Verlenggroen();
    Wachtgroen();
    Meetkriterium();
    Meeverlengen();
    Synchronisaties();
    RealisatieAfhandeling();
    FileVerwerking();
    DetectieStoring();
    AfhandelingPrio();
    Fixatie(isfix, 0, FCMAX-1, SCH[schbmfix], PRML, ML);

    PostApplication();
}

void system_application(void)
{
    int ov = 0;

    /* aanroepen PTP loop tbv seriele koppeling */
    ptp_pre_system_app();

    pre_system_application();

    /* file verklikking */
    /* ---------------- */
    CIF_GUS[usfile68af] = IH[hfile68af];

#ifndef NO_VLOG
    mon3_mon4_buffers(SAPPLPROG, PRM[prmmaxtvgvlog], PRM[prmmaxtfbvlog]);
    #ifndef NO_VLOG_200
        VLOG_mon5_buffer();
    #endif 
#if (!defined AUTOMAAT) || (defined VISSIM)
        file_uber_to_file_hour(LOGFILE_NUMBER_MAX, LOGFILE_LENGTH_MAX);
    #endif
#endif

    /* PRIO verklikking */
    /* ---------------- */
    CIF_GUS[usovinm02] = C[cvc02];
    CIF_GUS[usovinm08] = C[cvc08];
    CIF_GUS[usovinm11] = C[cvc11];
    CIF_GUS[usovinm22] = C[cvc22];
    CIF_GUS[usovinm24] = C[cvc24];
    CIF_GUS[usovinm61] = C[cvc61];
    CIF_GUS[usovinm84] = C[cvc84];
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

    /* minimumtijden */
    /* ------------- */
    check_to_min();
    check_tgg_min();
    check_tgl_min();
    check_trg_min();

    /* aanroepen PTP loop tbv seriele koppeling */
    ptp_post_system_app();


    /* Uitsturen actieve module */
    CIF_GUS[usML1] = ML == ML1;
    CIF_GUS[usML2] = ML == ML2;
    CIF_GUS[usML3] = ML == ML3;
    CIF_GUS[usML4] = ML == ML4;

    /* Verklikken wijzigingen OV-teller */
    PRIO_teller(cvc02, schcovuber);
    PRIO_teller(cvc08, schcovuber);
    PRIO_teller(cvc11, schcovuber);
    PRIO_teller(cvc22, schcovuber);
    PRIO_teller(cvc24, schcovuber);
    PRIO_teller(cvc61, schcovuber);
    PRIO_teller(cvc84, schcovuber);
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

    post_system_application();
}

#define ENDDUMP 21

void dump_application(void)
{

    post_dump_application();
}

#ifdef CCOL_IS_SPECIAL
void PrioSpecialSignals();
void is_special_signals(void)
{
    PrioSpecialSignals();
    SpecialSignals_Add();
}
#endif

