/* REGEL INSTELLINGEN */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456tab.c
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

/* include files */
/* ------------- */
#ifndef PRACTICE_TEST
    #include "123456sys.h"
    #include "fcvar.h"    /* fasecycli                         */
    #include "kfvar.h"    /* conflicten                        */
    #include "usvar.h"    /* uitgangs elementen                */
    #include "dpvar.h"    /* detectie elementen                */
    #include "to_min.h"   /* garantie-ontruimingstijden        */
    #include "trg_min.h"  /* garantie-roodtijden               */
    #include "tgg_min.h"  /* garantie-groentijden              */
    #include "tgl_min.h"  /* garantie-geeltijden               */
    #include "isvar.h"    /* ingangs elementen                 */
    #include "dsivar.h"   /* selectieve detectie               */
    #include "hevar.h"    /* hulp elementen                    */
    #include "mevar.h"    /* geheugen elementen                */
    #include "tmvar.h"    /* tijd elementen                    */
    #include "ctvar.h"    /* teller elementen                  */
    #include "schvar.h"   /* software schakelaars              */
    #include "prmvar.h"   /* parameters                        */
    #include "lwmlvar.h"  /* langstwachtende modulen structuur */
    #include "control.h"  /* controller interface              */
    #ifndef NO_VLOG
        #include "vlogvar.h"  /* variabelen t.b.v. vlogfuncties                */
        #include "logvar.h"   /* variabelen t.b.v. logging                     */
        #include "monvar.h"   /* variabelen t.b.v. realtime monitoring         */
    #endif
#endif /* PRACTICE_TEST */

    mulv FC_type[FCMAX];


#ifndef PRACTICE_TEST
    extern mulv itvgmaxprm[]; /* fasecycli met max. verlenggroen parameter (gedeclareerd in reg.c) */
#endif


void control_defaults(void)
{
    TDB_defmax = NG;
    TDH_defmax = NG;
    TBG_defmax = NG;
    TOG_defmax = NG;

    TRG_defmax = NG;
    TGG_defmax = NG;
    TGL_defmax = NG;
    TFG_defmax = NG;
    TVG_defmax = NG;

    TGG_type     |= RO_type | TE_type; /* Garantiegroentijden read-only */
    TGG_min_type |= RO_type | TE_type; /* Minimale garantiegroentijden read-only */
    TGL_min_type |= RO_type | TE_type; /* Minimale garantiegeeltijden read-only */
    TRG_min_type |= RO_type | TE_type; /* Minimale garantieroodtijden read-only */

#ifndef NO_VLOG
    MON_def = 1;
    LOG_def = 1;
#endif
}

void control_parameters(void)
{
    #ifndef NO_VLOG
        int i;
    #endif

/* fasecycli */
/* --------- */
   FC_code[fc02] = "02"; TRG_max[fc02] = 20; TRG_min[fc02] = 20; TGG_max[fc02] = 40; TGG_min[fc02] = 40; TFG_max[fc02] = 50; TGL_max[fc02] = 30; TGL_min[fc02] = 30; TVG_max[fc02] = 200;
   FC_code[fc03] = "03"; TRG_max[fc03] = 20; TRG_min[fc03] = 20; TGG_max[fc03] = 40; TGG_min[fc03] = 40; TFG_max[fc03] = 40; TGL_max[fc03] = 30; TGL_min[fc03] = 30; TVG_max[fc03] = 150;
   FC_code[fc05] = "05"; TRG_max[fc05] = 20; TRG_min[fc05] = 20; TGG_max[fc05] = 40; TGG_min[fc05] = 40; TFG_max[fc05] = 40; TGL_max[fc05] = 30; TGL_min[fc05] = 30; TVG_max[fc05] = 250;
   FC_code[fc08] = "08"; TRG_max[fc08] = 20; TRG_min[fc08] = 20; TGG_max[fc08] = 40; TGG_min[fc08] = 40; TFG_max[fc08] = 40; TGL_max[fc08] = 35; TGL_min[fc08] = 35; TVG_max[fc08] = 200;
   FC_code[fc09] = "09"; TRG_max[fc09] = 20; TRG_min[fc09] = 20; TGG_max[fc09] = 40; TGG_min[fc09] = 40; TFG_max[fc09] = 40; TGL_max[fc09] = 30; TGL_min[fc09] = 30; TVG_max[fc09] = 150;
   FC_code[fc11] = "11"; TRG_max[fc11] = 20; TRG_min[fc11] = 20; TGG_max[fc11] = 40; TGG_min[fc11] = 40; TFG_max[fc11] = 40; TGL_max[fc11] = 30; TGL_min[fc11] = 30; TVG_max[fc11] = 150;
   FC_code[fc21] = "21"; TRG_max[fc21] = 10; TRG_min[fc21] = 10; TGG_max[fc21] = 40; TGG_min[fc21] = 40; TFG_max[fc21] = 60; TGL_max[fc21] = 30; TGL_min[fc21] = 30; TVG_max[fc21] = 150;
   FC_code[fc22] = "22"; TRG_max[fc22] = 10; TRG_min[fc22] = 10; TGG_max[fc22] = 40; TGG_min[fc22] = 40; TFG_max[fc22] = 60; TGL_max[fc22] = 20; TGL_min[fc22] = 20; TVG_max[fc22] = 150;
   FC_code[fc24] = "24"; TRG_max[fc24] = 10; TRG_min[fc24] = 10; TGG_max[fc24] = 40; TGG_min[fc24] = 40; TFG_max[fc24] = 60; TGL_max[fc24] = 20; TGL_min[fc24] = 20; TVG_max[fc24] = 150;
   FC_code[fc26] = "26"; TRG_max[fc26] = 10; TRG_min[fc26] = 10; TGG_max[fc26] = 40; TGG_min[fc26] = 40; TFG_max[fc26] = 60; TGL_max[fc26] = 30; TGL_min[fc26] = 30; TVG_max[fc26] = 150;
   FC_code[fc28] = "28"; TRG_max[fc28] = 10; TRG_min[fc28] = 10; TGG_max[fc28] = 40; TGG_min[fc28] = 40; TFG_max[fc28] = 60; TGL_max[fc28] = 20; TGL_min[fc28] = 20; TVG_max[fc28] = 150;
   FC_code[fc31] = "31"; TRG_max[fc31] = 10; TRG_min[fc31] = 10; TGG_max[fc31] = 40; TGG_min[fc31] = 40; TFG_max[fc31] = 60; TGL_max[fc31] = 30; TGL_min[fc31] = 30; TVG_max[fc31] = NG;
   FC_code[fc32] = "32"; TRG_max[fc32] = 10; TRG_min[fc32] = 10; TGG_max[fc32] = 40; TGG_min[fc32] = 40; TFG_max[fc32] = 40; TGL_max[fc32] = 30; TGL_min[fc32] = 30; TVG_max[fc32] = NG;
   FC_code[fc33] = "33"; TRG_max[fc33] = 10; TRG_min[fc33] = 10; TGG_max[fc33] = 40; TGG_min[fc33] = 40; TFG_max[fc33] = 40; TGL_max[fc33] = 30; TGL_min[fc33] = 30; TVG_max[fc33] = NG;
   FC_code[fc34] = "34"; TRG_max[fc34] = 10; TRG_min[fc34] = 10; TGG_max[fc34] = 40; TGG_min[fc34] = 40; TFG_max[fc34] = 40; TGL_max[fc34] = 30; TGL_min[fc34] = 30; TVG_max[fc34] = NG;
   FC_code[fc38] = "38"; TRG_max[fc38] = 10; TRG_min[fc38] = 10; TGG_max[fc38] = 40; TGG_min[fc38] = 40; TFG_max[fc38] = 80; TGL_max[fc38] = 30; TGL_min[fc38] = 30; TVG_max[fc38] = NG;
   FC_code[fc61] = "61"; TRG_max[fc61] = 20; TRG_min[fc61] = 20; TGG_max[fc61] = 40; TGG_min[fc61] = 40; TFG_max[fc61] = 50; TGL_max[fc61] = 30; TGL_min[fc61] = 30; TVG_max[fc61] = 50;
   FC_code[fc62] = "62"; TRG_max[fc62] = 20; TRG_min[fc62] = 20; TGG_max[fc62] = 40; TGG_min[fc62] = 40; TFG_max[fc62] = 40; TGL_max[fc62] = 35; TGL_min[fc62] = 35; TVG_max[fc62] = 50;
   FC_code[fc67] = "67"; TRG_max[fc67] = 20; TRG_min[fc67] = 20; TGG_max[fc67] = 40; TGG_min[fc67] = 40; TFG_max[fc67] = 50; TGL_max[fc67] = 30; TGL_min[fc67] = 30; TVG_max[fc67] = 50;
   FC_code[fc68] = "68"; TRG_max[fc68] = 20; TRG_min[fc68] = 20; TGG_max[fc68] = 40; TGG_min[fc68] = 40; TFG_max[fc68] = 40; TGL_max[fc68] = 35; TGL_min[fc68] = 35; TVG_max[fc68] = 50;
   FC_code[fc81] = "81"; TRG_max[fc81] = 10; TRG_min[fc81] = 10; TGG_max[fc81] = 40; TGG_min[fc81] = 40; TFG_max[fc81] = 60; TGL_max[fc81] = 20; TGL_min[fc81] = 20; TVG_max[fc81] = 150;
   FC_code[fc82] = "82"; TRG_max[fc82] = 10; TRG_min[fc82] = 10; TGG_max[fc82] = 40; TGG_min[fc82] = 40; TFG_max[fc82] = 60; TGL_max[fc82] = 20; TGL_min[fc82] = 20; TVG_max[fc82] = 150;
   FC_code[fc84] = "84"; TRG_max[fc84] = 10; TRG_min[fc84] = 10; TGG_max[fc84] = 40; TGG_min[fc84] = 40; TFG_max[fc84] = 60; TGL_max[fc84] = 20; TGL_min[fc84] = 20; TVG_max[fc84] = 150;

#ifndef NO_TMGLMAX
    TMGL_max[fc02] = 30; 
    TMGL_max[fc03] = 30; 
    TMGL_max[fc05] = 30; 
    TMGL_max[fc08] = 35; 
    TMGL_max[fc09] = 30; 
    TMGL_max[fc11] = 30; 
    TMGL_max[fc21] = 30; 
    TMGL_max[fc22] = 20; 
    TMGL_max[fc24] = 20; 
    TMGL_max[fc26] = 30; 
    TMGL_max[fc28] = 20; 
    TMGL_max[fc31] = 30; 
    TMGL_max[fc32] = 30; 
    TMGL_max[fc33] = 30; 
    TMGL_max[fc34] = 30; 
    TMGL_max[fc38] = 30; 
    TMGL_max[fc61] = 30; 
    TMGL_max[fc62] = 35; 
    TMGL_max[fc67] = 30; 
    TMGL_max[fc68] = 35; 
    TMGL_max[fc81] = 20; 
    TMGL_max[fc82] = 20; 
    TMGL_max[fc84] = 20; 
#endif // NO_TMGLMAX

/* conflicten */
/* ---------- */
    TO_max[fc02][fc05] = 0;
    TO_max[fc02][fc21] = 0;
    TO_max[fc02][fc31] = 14;
    TO_max[fc02][fc82] = 0;

    TO_max[fc03][fc05] = 14;
    TO_max[fc03][fc21] = 0;
    TO_max[fc03][fc24] = 46;
    TO_max[fc03][fc31] = 16;
    TO_max[fc03][fc34] = 55;
    TO_max[fc03][fc67] = 34;
    TO_max[fc03][fc68] = 30;
    TO_max[fc03][fc84] = 28;

    TO_max[fc05][fc02] = 19;
    TO_max[fc05][fc03] = 10;
    TO_max[fc05][fc24] = 0;
    TO_max[fc05][fc33] = 20;
    TO_max[fc05][fc68] = 17;
    TO_max[fc05][fc82] = 20;
    TO_max[fc05][fc84] = 26;

    TO_max[fc08][fc11] = 0;
    TO_max[fc08][fc26] = 0;

    TO_max[fc09][fc11] = 31;
    TO_max[fc09][fc26] = 0;
    TO_max[fc09][fc28] = 6;
    TO_max[fc09][fc38] = 21;
    TO_max[fc09][fc61] = 23;
    TO_max[fc09][fc62] = 14;

    TO_max[fc11][fc08] = 28;
    TO_max[fc11][fc09] = 10;
    TO_max[fc11][fc28] = 0;
    TO_max[fc11][fc38] = 0;
    TO_max[fc11][fc62] = 17;

    TO_max[fc21][fc02] = 5;
    TO_max[fc21][fc03] = 5;

    TO_max[fc22][fc68] = 0;

    TO_max[fc24][fc03] = 0;
    TO_max[fc24][fc05] = 31;
    TO_max[fc24][fc67] = 0;

    TO_max[fc26][fc08] = 18;
    TO_max[fc26][fc09] = 20;
    TO_max[fc26][fc62] = 18;

    TO_max[fc28][fc09] = 28;
    TO_max[fc28][fc11] = 44;
    TO_max[fc28][fc61] = 13;

    TO_max[fc31][fc02] = 72;
    TO_max[fc31][fc03] = 73;

    TO_max[fc32][fc68] = 23;

    TO_max[fc33][fc05] = 24;

    TO_max[fc34][fc03] = 22;
    TO_max[fc34][fc67] = 29;

    TO_max[fc38][fc09] = 60;
    TO_max[fc38][fc11] = 78;
    TO_max[fc38][fc61] = 101;

    TO_max[fc61][fc09] = 0;
    TO_max[fc61][fc28] = 7;
    TO_max[fc61][fc38] = 23;

    TO_max[fc62][fc09] = 5;
    TO_max[fc62][fc11] = 0;
    TO_max[fc62][fc26] = 7;

    TO_max[fc67][fc03] = 0;
    TO_max[fc67][fc24] = 20;
    TO_max[fc67][fc34] = 42;
    TO_max[fc67][fc81] = 0;
    TO_max[fc67][fc84] = 10;

    TO_max[fc68][fc03] = 0;
    TO_max[fc68][fc05] = 0;
    TO_max[fc68][fc22] = 19;
    TO_max[fc68][fc32] = 29;
    TO_max[fc68][fc81] = 0;

    TO_max[fc81][fc67] = 15;
    TO_max[fc81][fc68] = 15;

    TO_max[fc82][fc02] = 0;
    TO_max[fc82][fc05] = 0;

    TO_max[fc84][fc03] = 0;
    TO_max[fc84][fc05] = 3;
    TO_max[fc84][fc67] = 47;

    TO_max[fc02][fc09] = GKL;
    TO_max[fc02][fc11] = GKL;
    TO_max[fc02][fc22] = GK;
    TO_max[fc02][fc26] = GKL;
    TO_max[fc02][fc32] = FK;

    TO_max[fc03][fc08] = GK;
    TO_max[fc03][fc11] = GK;
    TO_max[fc03][fc22] = GK;
    TO_max[fc03][fc32] = FK;
    TO_max[fc03][fc33] = FK;

    TO_max[fc05][fc08] = GK;
    TO_max[fc05][fc09] = GKL;
    TO_max[fc05][fc11] = GKL;
    TO_max[fc05][fc26] = GKL;
    TO_max[fc05][fc34] = FK;

    TO_max[fc08][fc03] = GKL;
    TO_max[fc08][fc05] = GKL;
    TO_max[fc08][fc22] = GKL;
    TO_max[fc08][fc31] = FK;
    TO_max[fc08][fc32] = GKL;
    TO_max[fc08][fc81] = GKL;
    TO_max[fc08][fc82] = GKL;

    TO_max[fc09][fc02] = GK;
    TO_max[fc09][fc05] = GK;

    TO_max[fc11][fc02] = GK;
    TO_max[fc11][fc03] = GKL;
    TO_max[fc11][fc05] = GKL;
    TO_max[fc11][fc22] = GKL;
    TO_max[fc11][fc31] = FK;
    TO_max[fc11][fc32] = GKL;
    TO_max[fc11][fc81] = GKL;
    TO_max[fc11][fc82] = GKL;

    TO_max[fc22][fc02] = GKL;
    TO_max[fc22][fc03] = GKL;
    TO_max[fc22][fc08] = GK;
    TO_max[fc22][fc11] = GK;

    TO_max[fc26][fc02] = GK;
    TO_max[fc26][fc05] = GK;

    TO_max[fc31][fc08] = FK;
    TO_max[fc31][fc11] = FK;
    TO_max[fc31][fc68] = FK;

    TO_max[fc32][fc02] = FK;
    TO_max[fc32][fc03] = FK;
    TO_max[fc32][fc08] = GK;
    TO_max[fc32][fc11] = GK;

    TO_max[fc33][fc03] = FK;
    TO_max[fc33][fc67] = FK;

    TO_max[fc34][fc05] = FK;

    TO_max[fc67][fc33] = FK;
    TO_max[fc67][fc82] = GK;

    TO_max[fc68][fc31] = FK;
    TO_max[fc68][fc82] = GK;

    TO_max[fc81][fc08] = GK;
    TO_max[fc81][fc11] = GK;

    TO_max[fc82][fc08] = GKL;
    TO_max[fc82][fc11] = GKL;
    TO_max[fc82][fc67] = GKL;
    TO_max[fc82][fc68] = GKL;

    default_to_min(0);

    TO_min[fc02][fc05] = 0;
    TO_min[fc02][fc21] = 0;
    TO_min[fc02][fc31] = 14;
    TO_min[fc02][fc82] = 0;

    TO_min[fc03][fc05] = 14;
    TO_min[fc03][fc21] = 0;
    TO_min[fc03][fc24] = 46;
    TO_min[fc03][fc31] = 16;
    TO_min[fc03][fc34] = 55;
    TO_min[fc03][fc67] = 34;
    TO_min[fc03][fc68] = 30;
    TO_min[fc03][fc84] = 28;

    TO_min[fc05][fc02] = 19;
    TO_min[fc05][fc03] = 10;
    TO_min[fc05][fc24] = 0;
    TO_min[fc05][fc33] = 20;
    TO_min[fc05][fc68] = 17;
    TO_min[fc05][fc82] = 20;
    TO_min[fc05][fc84] = 26;

    TO_min[fc08][fc11] = 0;
    TO_min[fc08][fc26] = 0;

    TO_min[fc09][fc11] = 31;
    TO_min[fc09][fc26] = 0;
    TO_min[fc09][fc28] = 6;
    TO_min[fc09][fc38] = 21;
    TO_min[fc09][fc61] = 23;
    TO_min[fc09][fc62] = 14;

    TO_min[fc11][fc08] = 28;
    TO_min[fc11][fc09] = 10;
    TO_min[fc11][fc28] = 0;
    TO_min[fc11][fc38] = 0;
    TO_min[fc11][fc62] = 17;

    TO_min[fc21][fc02] = 0;
    TO_min[fc21][fc03] = 0;

    TO_min[fc22][fc68] = 0;

    TO_min[fc24][fc03] = 0;
    TO_min[fc24][fc05] = 31;
    TO_min[fc24][fc67] = 0;

    TO_min[fc26][fc08] = 18;
    TO_min[fc26][fc09] = 20;
    TO_min[fc26][fc62] = 18;

    TO_min[fc28][fc09] = 28;
    TO_min[fc28][fc11] = 44;
    TO_min[fc28][fc61] = 13;

    TO_min[fc31][fc02] = 72;
    TO_min[fc31][fc03] = 73;

    TO_min[fc32][fc68] = 23;

    TO_min[fc33][fc05] = 24;

    TO_min[fc34][fc03] = 22;
    TO_min[fc34][fc67] = 29;

    TO_min[fc38][fc09] = 60;
    TO_min[fc38][fc11] = 78;
    TO_min[fc38][fc61] = 101;

    TO_min[fc61][fc09] = 0;
    TO_min[fc61][fc28] = 7;
    TO_min[fc61][fc38] = 23;

    TO_min[fc62][fc09] = 5;
    TO_min[fc62][fc11] = 0;
    TO_min[fc62][fc26] = 7;

    TO_min[fc67][fc03] = 0;
    TO_min[fc67][fc24] = 20;
    TO_min[fc67][fc34] = 42;
    TO_min[fc67][fc81] = 0;
    TO_min[fc67][fc84] = 10;

    TO_min[fc68][fc03] = 0;
    TO_min[fc68][fc05] = 0;
    TO_min[fc68][fc22] = 19;
    TO_min[fc68][fc32] = 29;
    TO_min[fc68][fc81] = 0;

    TO_min[fc81][fc67] = 10;
    TO_min[fc81][fc68] = 0;

    TO_min[fc82][fc02] = 0;
    TO_min[fc82][fc05] = 0;

    TO_min[fc84][fc03] = 0;
    TO_min[fc84][fc05] = 3;
    TO_min[fc84][fc67] = 47;

/* overige uitgangen */
/* ----------------- */
    US_code[usML1]              = "ML1";                                           /* Verklikken actief zijn ML1                                                  */
    US_code[usML2]              = "ML2";                                           /* Verklikken actief zijn ML2                                                  */
    US_code[usML3]              = "ML3";                                           /* Verklikken actief zijn ML3                                                  */
    US_code[usML4]              = "ML4";                                           /* Verklikken actief zijn ML4                                                  */
    US_code[usfile68af]         = "file68af";                                      /* File ingreep 68af actief                                                    */
    US_code[usmaxwt]            = "maxwt";                                         /* Verklikken maximale wachttijd overschreden                                  */
    US_code[uskarmelding]       = "karmelding";                                    /* Verklikken ontvangst melding KAR                                            */
    US_code[uskarog]            = "karog";                                         /* Verklikken ondergedrag KAR                                                  */
    US_code[usovinm02]          = "ovinm02";                                       /* Verklikken inmelding OV fase 02                                             */
    US_code[usovinm08]          = "ovinm08";                                       /* Verklikken inmelding OV fase 08                                             */
    US_code[usovinm11]          = "ovinm11";                                       /* Verklikken inmelding OV fase 11                                             */
    US_code[usovinm22]          = "ovinm22";                                       /* Verklikken inmelding OV fase 22                                             */
    US_code[usovinm24]          = "ovinm24";                                       /* Verklikken inmelding OV fase 24                                             */
    US_code[usovinm61]          = "ovinm61";                                       /* Verklikken inmelding OV fase 61                                             */
    US_code[usovinm84]          = "ovinm84";                                       /* Verklikken inmelding OV fase 84                                             */
    US_code[ushdinm02]          = "hdinm02";                                       /* Verklikken inmelding HD fase 02                                             */
    US_code[ushdinm03]          = "hdinm03";                                       /* Verklikken inmelding HD fase 03                                             */
    US_code[ushdinm05]          = "hdinm05";                                       /* Verklikken inmelding HD fase 05                                             */
    US_code[ushdinm08]          = "hdinm08";                                       /* Verklikken inmelding HD fase 08                                             */
    US_code[ushdinm09]          = "hdinm09";                                       /* Verklikken inmelding HD fase 09                                             */
    US_code[ushdinm11]          = "hdinm11";                                       /* Verklikken inmelding HD fase 11                                             */
    US_code[ushdinm61]          = "hdinm61";                                       /* Verklikken inmelding HD fase 61                                             */
    US_code[ushdinm62]          = "hdinm62";                                       /* Verklikken inmelding HD fase 62                                             */
    US_code[ushdinm67]          = "hdinm67";                                       /* Verklikken inmelding HD fase 67                                             */
    US_code[ushdinm68]          = "hdinm68";                                       /* Verklikken inmelding HD fase 68                                             */
    US_code[uspelinKOP02]       = "pelinKOP02";                                    /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    US_code[usperdef]           = "perdef";                                        /* Default periode actief                                                      */
    US_code[usper1]             = "per1";                                          /* Periode Reserve actief                                                      */
    US_code[usperoFietsprio1]   = "peroFietsprio1";                                /* Periode actief                                                              */
    US_code[usperoFietsprio2]   = "peroFietsprio2";                                /* Periode actief                                                              */
    US_code[usperoFietsprio3]   = "peroFietsprio3";                                /* Periode actief                                                              */
    US_code[usper2]             = "per2";                                          /* Periode Dag periode actief                                                  */
    US_code[usper3]             = "per3";                                          /* Periode Ochtendspits actief                                                 */
    US_code[usper4]             = "per4";                                          /* Periode Avondspits actief                                                   */
    US_code[usper5]             = "per5";                                          /* Periode Koopavond actief                                                    */
    US_code[usper6]             = "per6";                                          /* Periode Weekend actief                                                      */
    US_code[usper7]             = "per7";                                          /* Periode Reserve actief                                                      */
    US_code[usptp_ptp123456oke] = "ptp_ptp123456oke";                              /* Verklikken PTP oke ptp123456                                                */
    US_code[usptp_ptp123456err] = "ptp_ptp123456err";                              /* Verklikken PTP error ptp123456                                              */
    US_code[usrgv]              = "rgv";                                           /* Verklikken actief zijn RoBuGrover                                           */

/* detectie */
/* -------- */
    D_code[d0201] = "0201"; TDB_max[d0201] = 20; TDH_max[d0201] = 25;
                            TBG_max[d0201] = 20; TOG_max[d0201] = 360;
    D_code[d0202] = "0202"; TDB_max[d0202] = 20; TDH_max[d0202] = 25;
                            TBG_max[d0202] = 20; TOG_max[d0202] = 360;
    D_code[d0203] = "0203"; TDB_max[d0203] = 0;  TDH_max[d0203] = 5;
                            TBG_max[d0203] = 60; TOG_max[d0203] = 360;
    D_code[d0204] = "0204"; TDB_max[d0204] = 0;  TDH_max[d0204] = 5;
                            TBG_max[d0204] = 60; TOG_max[d0204] = 360;
    D_code[d0205] = "0205"; TDB_max[d0205] = 0;  TDH_max[d0205] = 20;
                            TBG_max[d0205] = 60; TOG_max[d0205] = 360;
    D_code[d0206] = "0206"; TDB_max[d0206] = 0;  TDH_max[d0206] = 20;
                            TBG_max[d0206] = 60; TOG_max[d0206] = 360;
    D_code[d0207] = "0207"; TDB_max[d0207] = 0;  TDH_max[d0207] = 25;
                            TBG_max[d0207] = 60; TOG_max[d0207] = 360;
    D_code[d0208] = "0208"; TDB_max[d0208] = 0;  TDH_max[d0208] = 25;
                            TBG_max[d0208] = 60; TOG_max[d0208] = 360;
    D_code[d0301] = "0301"; TDB_max[d0301] = 20; TDH_max[d0301] = 0;
                            TBG_max[d0301] = 20; TOG_max[d0301] = 360;
    D_code[d0302] = "0302"; TDB_max[d0302] = 0;  TDH_max[d0302] = 5;
                            TBG_max[d0302] = 60; TOG_max[d0302] = 360;
    D_code[d0501] = "0501"; TDB_max[d0501] = 20; TDH_max[d0501] = 0;
                            TBG_max[d0501] = 20; TOG_max[d0501] = 360;
    D_code[d0502] = "0502"; TDB_max[d0502] = 0;  TDH_max[d0502] = 5;
                            TBG_max[d0502] = 60; TOG_max[d0502] = 360;
    D_code[d0801] = "0801"; TDB_max[d0801] = 20; TDH_max[d0801] = 25;
                            TBG_max[d0801] = 20; TOG_max[d0801] = 360;
    D_code[d0802] = "0802"; TDB_max[d0802] = 20; TDH_max[d0802] = 25;
                            TBG_max[d0802] = 20; TOG_max[d0802] = 360;
    D_code[d0803] = "0803"; TDB_max[d0803] = 0;  TDH_max[d0803] = 5;
                            TBG_max[d0803] = 60; TOG_max[d0803] = 360;
    D_code[d0804] = "0804"; TDB_max[d0804] = 0;  TDH_max[d0804] = 5;
                            TBG_max[d0804] = 60; TOG_max[d0804] = 360;
    D_code[d0805] = "0805"; TDB_max[d0805] = 0;  TDH_max[d0805] = 20;
                            TBG_max[d0805] = 60; TOG_max[d0805] = 360;
    D_code[d0806] = "0806"; TDB_max[d0806] = 0;  TDH_max[d0806] = 20;
                            TBG_max[d0806] = 60; TOG_max[d0806] = 360;
    D_code[d0807] = "0807"; TDB_max[d0807] = 0;  TDH_max[d0807] = 25;
                            TBG_max[d0807] = 60; TOG_max[d0807] = 360;
    D_code[d0808] = "0808"; TDB_max[d0808] = 0;  TDH_max[d0808] = 25;
                            TBG_max[d0808] = 60; TOG_max[d0808] = 360;
    D_code[d0901] = "0901"; TDB_max[d0901] = 10; TDH_max[d0901] = 30;
                            TBG_max[d0901] = 20; TOG_max[d0901] = 360;
    D_code[d0902] = "0902"; TDB_max[d0902] = 0;  TDH_max[d0902] = 10;
                            TBG_max[d0902] = 60; TOG_max[d0902] = 360;
    D_code[d0903] = "0903"; TDB_max[d0903] = 0;  TDH_max[d0903] = 30;
                            TBG_max[d0903] = 60; TOG_max[d0903] = 360;
    D_code[d1101] = "1101"; TDB_max[d1101] = 20; TDH_max[d1101] = 25;
                            TBG_max[d1101] = 20; TOG_max[d1101] = 360;
    D_code[d1102] = "1102"; TDB_max[d1102] = 0;  TDH_max[d1102] = 5;
                            TBG_max[d1102] = 60; TOG_max[d1102] = 360;
    D_code[d1103] = "1103"; TDB_max[d1103] = 0;  TDH_max[d1103] = 15;
                            TBG_max[d1103] = 60; TOG_max[d1103] = 360;
    D_code[d1104] = "1104"; TDB_max[d1104] = 0;  TDH_max[d1104] = 10;
                            TBG_max[d1104] = 60; TOG_max[d1104] = 360;
    D_code[d2101] = "2101"; TDB_max[d2101] = 15; TDH_max[d2101] = 30;
                            TBG_max[d2101] = 10; TOG_max[d2101] = 1440;
    D_code[d2131] = "2131"; TBG_max[d2131] = 10; TOG_max[d2131] = 1440;
    D_code[d2201] = "2201"; TDB_max[d2201] = 15; TDH_max[d2201] = 30;
                            TBG_max[d2201] = 10; TOG_max[d2201] = 1440;
    D_code[d2231] = "2231"; TBG_max[d2231] = 10; TOG_max[d2231] = 2880;
    D_code[d2401] = "2401"; TDB_max[d2401] = 15; TDH_max[d2401] = 30;
                            TBG_max[d2401] = 10; TOG_max[d2401] = 1440;
    D_code[d2402] = "2402"; TDB_max[d2402] = 0;  TDH_max[d2402] = 50;
                            TBG_max[d2402] = 30; TOG_max[d2402] = 1440;
    D_code[d2403] = "2403"; TDB_max[d2403] = 0;  TDH_max[d2403] = 50;
                            TBG_max[d2403] = 30; TOG_max[d2403] = 1440;
    D_code[d2431] = "2431"; TBG_max[d2431] = 10; TOG_max[d2431] = 2880;
    D_code[d2601] = "2601"; TDB_max[d2601] = 15; TDH_max[d2601] = 30;
                            TBG_max[d2601] = 10; TOG_max[d2601] = 1440;
    D_code[d2631] = "2631"; TBG_max[d2631] = 10; TOG_max[d2631] = 1440;
    D_code[d2801] = "2801"; TDB_max[d2801] = 15; TDH_max[d2801] = 30;
                            TBG_max[d2801] = 10; TOG_max[d2801] = 1440;
    D_code[d2802] = "2802"; TDB_max[d2802] = 0;  TDH_max[d2802] = 50;
                            TBG_max[d2802] = 30; TOG_max[d2802] = 1440;
    D_code[d2831] = "2831"; TBG_max[d2831] = 10; TOG_max[d2831] = 2880;
    D_code[d3131] = "3131"; TBG_max[d3131] = 10; TOG_max[d3131] = 1440;
    D_code[d3132] = "3132"; TBG_max[d3132] = 10; TOG_max[d3132] = 0;
    D_code[d3231] = "3231"; TBG_max[d3231] = 10; TOG_max[d3231] = 0;
    D_code[d3232] = "3232"; TBG_max[d3232] = 10; TOG_max[d3232] = 1440;
    D_code[d3331] = "3331"; TBG_max[d3331] = 10; TOG_max[d3331] = 1440;
    D_code[d3332] = "3332"; TBG_max[d3332] = 10; TOG_max[d3332] = 0;
    D_code[d3431] = "3431"; TBG_max[d3431] = 10; TOG_max[d3431] = 0;
    D_code[d3432] = "3432"; TBG_max[d3432] = 10; TOG_max[d3432] = 1440;
    D_code[d3831] = "3831"; TBG_max[d3831] = 10; TOG_max[d3831] = 1440;
    D_code[d3832] = "3832"; TBG_max[d3832] = 10; TOG_max[d3832] = 0;
    D_code[d6101] = "6101"; TDB_max[d6101] = 20; TDH_max[d6101] = 0;
                            TBG_max[d6101] = 20; TOG_max[d6101] = 360;
    D_code[d6102] = "6102"; TDB_max[d6102] = 0;  TDH_max[d6102] = 5;
                            TBG_max[d6102] = 60; TOG_max[d6102] = 360;
    D_code[d6201] = "6201"; TDB_max[d6201] = 20; TDH_max[d6201] = 25;
                            TBG_max[d6201] = 20; TOG_max[d6201] = 360;
    D_code[d6202] = "6202"; TDB_max[d6202] = 20; TDH_max[d6202] = 25;
                            TBG_max[d6202] = 20; TOG_max[d6202] = 360;
    D_code[d6203] = "6203"; TDB_max[d6203] = 0;  TDH_max[d6203] = 10;
                            TBG_max[d6203] = 60; TOG_max[d6203] = 360;
    D_code[d6204] = "6204"; TDB_max[d6204] = 0;  TDH_max[d6204] = 10;
                            TBG_max[d6204] = 60; TOG_max[d6204] = 360;
    D_code[d6701] = "6701"; TDB_max[d6701] = 20; TDH_max[d6701] = 0;
                            TBG_max[d6701] = 20; TOG_max[d6701] = 360;
    D_code[d6702] = "6702"; TDB_max[d6702] = 0;  TDH_max[d6702] = 5;
                            TBG_max[d6702] = 60; TOG_max[d6702] = 360;
    D_code[d6801] = "6801"; TDB_max[d6801] = 20; TDH_max[d6801] = 25;
                            TBG_max[d6801] = 20; TOG_max[d6801] = 360;
    D_code[d6802] = "6802"; TDB_max[d6802] = 20; TDH_max[d6802] = 25;
                            TBG_max[d6802] = 20; TOG_max[d6802] = 360;
    D_code[d6803] = "6803"; TDB_max[d6803] = 0;  TDH_max[d6803] = 10;
                            TBG_max[d6803] = 60; TOG_max[d6803] = 360;
    D_code[d6804] = "6804"; TDB_max[d6804] = 0;  TDH_max[d6804] = 5;
                            TBG_max[d6804] = 60; TOG_max[d6804] = 360;
    D_code[d6821] = "6821"; TDB_max[d6821] = 0;  TDH_max[d6821] = 0;
                            TBG_max[d6821] = 20; TOG_max[d6821] = 360;
    D_code[d6822] = "6822"; TDB_max[d6822] = 0;  TDH_max[d6822] = 0;
                            TBG_max[d6822] = 20; TOG_max[d6822] = 360;
    D_code[d8101] = "8101"; TDB_max[d8101] = 15; TDH_max[d8101] = 30;
                            TBG_max[d8101] = 10; TOG_max[d8101] = 1440;
    D_code[d8131] = "8131"; TBG_max[d8131] = 10; TOG_max[d8131] = 1440;
    D_code[d8201] = "8201"; TDB_max[d8201] = 15; TDH_max[d8201] = 30;
                            TBG_max[d8201] = 10; TOG_max[d8201] = 1440;
    D_code[d8231] = "8231"; TBG_max[d8231] = 10; TOG_max[d8231] = 1440;
    D_code[d8401] = "8401"; TDB_max[d8401] = 15; TDH_max[d8401] = 30;
                            TBG_max[d8401] = 10; TOG_max[d8401] = 1440;
    D_code[d8431] = "8431"; TBG_max[d8431] = 10; TOG_max[d8431] = 2880;
    D_code[d0241] = "0241"; TBG_max[d0241] = 5;  TOG_max[d0241] = 1440;
    D_code[d0242] = "0242"; TBG_max[d0242] = 5;  TOG_max[d0242] = 1440;
    D_code[d0841] = "0841"; TBG_max[d0841] = 5;  TOG_max[d0841] = 1440;
    D_code[d0842] = "0842"; TBG_max[d0842] = 5;  TOG_max[d0842] = 1440;
    D_code[d1141] = "1141"; TBG_max[d1141] = 5;  TOG_max[d1141] = 1440;
    D_code[d1142] = "1142"; TBG_max[d1142] = 5;  TOG_max[d1142] = 1440;
    D_code[d6141] = "6141"; TBG_max[d6141] = 5;  TOG_max[d6141] = 1440;
#if !defined NO_DDFLUTTER
    TFL_max[d0201] = 60; CFL_max[d0201] = 45;
    TFL_max[d0202] = 60; CFL_max[d0202] = 45;
    TFL_max[d0203] = 60; CFL_max[d0203] = 45;
    TFL_max[d0204] = 60; CFL_max[d0204] = 45;
    TFL_max[d0205] = 60; CFL_max[d0205] = 45;
    TFL_max[d0206] = 60; CFL_max[d0206] = 45;
    TFL_max[d0207] = 60; CFL_max[d0207] = 45;
    TFL_max[d0208] = 60; CFL_max[d0208] = 45;
    TFL_max[d0301] = 60; CFL_max[d0301] = 45;
    TFL_max[d0302] = 60; CFL_max[d0302] = 45;
    TFL_max[d0501] = 60; CFL_max[d0501] = 45;
    TFL_max[d0502] = 60; CFL_max[d0502] = 45;
    TFL_max[d0801] = 60; CFL_max[d0801] = 45;
    TFL_max[d0802] = 60; CFL_max[d0802] = 45;
    TFL_max[d0803] = 60; CFL_max[d0803] = 45;
    TFL_max[d0804] = 60; CFL_max[d0804] = 45;
    TFL_max[d0805] = 60; CFL_max[d0805] = 45;
    TFL_max[d0806] = 60; CFL_max[d0806] = 45;
    TFL_max[d0807] = 60; CFL_max[d0807] = 45;
    TFL_max[d0808] = 60; CFL_max[d0808] = 45;
    TFL_max[d0901] = 60; CFL_max[d0901] = 45;
    TFL_max[d0902] = 60; CFL_max[d0902] = 30;
    TFL_max[d0903] = 60; CFL_max[d0903] = 45;
    TFL_max[d1101] = 60; CFL_max[d1101] = 45;
    TFL_max[d1102] = 60; CFL_max[d1102] = 45;
    TFL_max[d1103] = 60; CFL_max[d1103] = 45;
    TFL_max[d1104] = 60; CFL_max[d1104] = 45;
    TFL_max[d2101] = 60; CFL_max[d2101] = 45;
    TFL_max[d2131] = 60; CFL_max[d2131] = 45;
    TFL_max[d2201] = 60; CFL_max[d2201] = 45;
    TFL_max[d2231] = 60; CFL_max[d2231] = 45;
    TFL_max[d2401] = 60; CFL_max[d2401] = 45;
    TFL_max[d2402] = 60; CFL_max[d2402] = 45;
    TFL_max[d2403] = 60; CFL_max[d2403] = 45;
    TFL_max[d2431] = 60; CFL_max[d2431] = 45;
    TFL_max[d2601] = 60; CFL_max[d2601] = 45;
    TFL_max[d2631] = 60; CFL_max[d2631] = 45;
    TFL_max[d2801] = 60; CFL_max[d2801] = 45;
    TFL_max[d2802] = 60; CFL_max[d2802] = 45;
    TFL_max[d2831] = 60; CFL_max[d2831] = 45;
    TFL_max[d3131] = 60; CFL_max[d3131] = 45;
    TFL_max[d3132] = 60; CFL_max[d3132] = 45;
    TFL_max[d3231] = 60; CFL_max[d3231] = 45;
    TFL_max[d3232] = 60; CFL_max[d3232] = 45;
    TFL_max[d3331] = 60; CFL_max[d3331] = 45;
    TFL_max[d3332] = 60; CFL_max[d3332] = 45;
    TFL_max[d3431] = 60; CFL_max[d3431] = 45;
    TFL_max[d3432] = 60; CFL_max[d3432] = 45;
    TFL_max[d3831] = 60; CFL_max[d3831] = 45;
    TFL_max[d3832] = 60; CFL_max[d3832] = 45;
    TFL_max[d6101] = 60; CFL_max[d6101] = 45;
    TFL_max[d6102] = 60; CFL_max[d6102] = 45;
    TFL_max[d6201] = 60; CFL_max[d6201] = 45;
    TFL_max[d6202] = 60; CFL_max[d6202] = 45;
    TFL_max[d6203] = 60; CFL_max[d6203] = 45;
    TFL_max[d6204] = 60; CFL_max[d6204] = 45;
    TFL_max[d6701] = 60; CFL_max[d6701] = 45;
    TFL_max[d6702] = 60; CFL_max[d6702] = 45;
    TFL_max[d6801] = 60; CFL_max[d6801] = 45;
    TFL_max[d6802] = 60; CFL_max[d6802] = 45;
    TFL_max[d6803] = 60; CFL_max[d6803] = 45;
    TFL_max[d6804] = 60; CFL_max[d6804] = 45;
    TFL_max[d6821] = 60; CFL_max[d6821] = 45;
    TFL_max[d6822] = 60; CFL_max[d6822] = 45;
    TFL_max[d8101] = 60; CFL_max[d8101] = 45;
    TFL_max[d8131] = 60; CFL_max[d8131] = 45;
    TFL_max[d8201] = 60; CFL_max[d8201] = 45;
    TFL_max[d8231] = 60; CFL_max[d8231] = 45;
    TFL_max[d8401] = 60; CFL_max[d8401] = 45;
    TFL_max[d8431] = 60; CFL_max[d8431] = 45;
    TFL_max[d0241] = 30; CFL_max[d0241] = 10;
    TFL_max[d0242] = 30; CFL_max[d0242] = 10;
    TFL_max[d0841] = 30; CFL_max[d0841] = 10;
    TFL_max[d0842] = 30; CFL_max[d0842] = 10;
    TFL_max[d1141] = 30; CFL_max[d1141] = 10;
    TFL_max[d1142] = 30; CFL_max[d1142] = 10;
    TFL_max[d6141] = 30; CFL_max[d6141] = 10;
#endif /* !defined NO_DDFLUTTER */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    D_code[ddummykarin02bus]  = "dummykarin02bus";  
    D_code[ddummykarin08bus]  = "dummykarin08bus";  
    D_code[ddummykarin11bus]  = "dummykarin11bus";  
    D_code[ddummykarin61bus]  = "dummykarin61bus";  
    D_code[ddummykaruit02bus] = "dummykaruit02bus"; 
    D_code[ddummykaruit08bus] = "dummykaruit08bus"; 
    D_code[ddummykaruit11bus] = "dummykaruit11bus"; 
    D_code[ddummykaruit61bus] = "dummykaruit61bus"; 
    D_code[ddummyhdkarin02]   = "dummyhdkarin02";   
    D_code[ddummyhdkaruit02]  = "dummyhdkaruit02";  
    D_code[ddummyhdkarin03]   = "dummyhdkarin03";   
    D_code[ddummyhdkaruit03]  = "dummyhdkaruit03";  
    D_code[ddummyhdkarin05]   = "dummyhdkarin05";   
    D_code[ddummyhdkaruit05]  = "dummyhdkaruit05";  
    D_code[ddummyhdkarin08]   = "dummyhdkarin08";   
    D_code[ddummyhdkaruit08]  = "dummyhdkaruit08";  
    D_code[ddummyhdkarin09]   = "dummyhdkarin09";   
    D_code[ddummyhdkaruit09]  = "dummyhdkaruit09";  
    D_code[ddummyhdkarin11]   = "dummyhdkarin11";   
    D_code[ddummyhdkaruit11]  = "dummyhdkaruit11";  
    D_code[ddummyhdkarin61]   = "dummyhdkarin61";   
    D_code[ddummyhdkaruit61]  = "dummyhdkaruit61";  
    D_code[ddummyhdkarin62]   = "dummyhdkarin62";   
    D_code[ddummyhdkaruit62]  = "dummyhdkaruit62";  
    D_code[ddummyhdkarin67]   = "dummyhdkarin67";   
    D_code[ddummyhdkaruit67]  = "dummyhdkaruit67";  
    D_code[ddummyhdkarin68]   = "dummyhdkarin68";   
    D_code[ddummyhdkaruit68]  = "dummyhdkaruit68";  
#endif

/* overige ingangen */
/* ---------------- */
    IS_code[isfix]              = "fix";                                           /* Fixatie regeling */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    IS_code[isris021car]        = "ris021car";                            
    IS_code[isris021bus]        = "ris021bus";                            
    IS_code[isris021special]    = "ris021special";                        
    IS_code[isris021heavytruck] = "ris021heavytruck";                     
    IS_code[isris022car]        = "ris022car";                            
    IS_code[isris022bus]        = "ris022bus";                            
    IS_code[isris022special]    = "ris022special";                        
    IS_code[isris022heavytruck] = "ris022heavytruck";                     
    IS_code[isris031car]        = "ris031car";                            
    IS_code[isris031bus]        = "ris031bus";                            
    IS_code[isris031special]    = "ris031special";                        
    IS_code[isris031heavytruck] = "ris031heavytruck";                     
    IS_code[isris051car]        = "ris051car";                            
    IS_code[isris051bus]        = "ris051bus";                            
    IS_code[isris051special]    = "ris051special";                        
    IS_code[isris051heavytruck] = "ris051heavytruck";                     
    IS_code[isris081car]        = "ris081car";                            
    IS_code[isris081bus]        = "ris081bus";                            
    IS_code[isris081special]    = "ris081special";                        
    IS_code[isris081heavytruck] = "ris081heavytruck";                     
    IS_code[isris082car]        = "ris082car";                            
    IS_code[isris082bus]        = "ris082bus";                            
    IS_code[isris082special]    = "ris082special";                        
    IS_code[isris082heavytruck] = "ris082heavytruck";                     
    IS_code[isris091car]        = "ris091car";                            
    IS_code[isris091bus]        = "ris091bus";                            
    IS_code[isris091special]    = "ris091special";                        
    IS_code[isris091heavytruck] = "ris091heavytruck";                     
    IS_code[isris111car]        = "ris111car";                            
    IS_code[isris111bus]        = "ris111bus";                            
    IS_code[isris111special]    = "ris111special";                        
    IS_code[isris111heavytruck] = "ris111heavytruck";                     
    IS_code[isris211cyclist]    = "ris211cyclist";                        
    IS_code[isris221cyclist]    = "ris221cyclist";                        
    IS_code[isris222cyclist]    = "ris222cyclist";                        
    IS_code[isris241cyclist]    = "ris241cyclist";                        
    IS_code[isris261cyclist]    = "ris261cyclist";                        
    IS_code[isris281cyclist]    = "ris281cyclist";                        
    IS_code[isris311pedestrian] = "ris311pedestrian";                     
    IS_code[isris312pedestrian] = "ris312pedestrian";                     
    IS_code[isris321pedestrian] = "ris321pedestrian";                     
    IS_code[isris322pedestrian] = "ris322pedestrian";                     
    IS_code[isris331pedestrian] = "ris331pedestrian";                     
    IS_code[isris332pedestrian] = "ris332pedestrian";                     
    IS_code[isris341pedestrian] = "ris341pedestrian";                     
    IS_code[isris342pedestrian] = "ris342pedestrian";                     
    IS_code[isris381pedestrian] = "ris381pedestrian";                     
    IS_code[isris382pedestrian] = "ris382pedestrian";                     
    IS_code[isris611car]        = "ris611car";                            
    IS_code[isris611bus]        = "ris611bus";                            
    IS_code[isris611special]    = "ris611special";                        
    IS_code[isris611heavytruck] = "ris611heavytruck";                     
    IS_code[isris621car]        = "ris621car";                            
    IS_code[isris621bus]        = "ris621bus";                            
    IS_code[isris621special]    = "ris621special";                        
    IS_code[isris621heavytruck] = "ris621heavytruck";                     
    IS_code[isris622car]        = "ris622car";                            
    IS_code[isris622bus]        = "ris622bus";                            
    IS_code[isris622special]    = "ris622special";                        
    IS_code[isris622heavytruck] = "ris622heavytruck";                     
    IS_code[isris671car]        = "ris671car";                            
    IS_code[isris671bus]        = "ris671bus";                            
    IS_code[isris671special]    = "ris671special";                        
    IS_code[isris671heavytruck] = "ris671heavytruck";                     
    IS_code[isris681car]        = "ris681car";                            
    IS_code[isris681bus]        = "ris681bus";                            
    IS_code[isris681special]    = "ris681special";                        
    IS_code[isris681heavytruck] = "ris681heavytruck";                     
    IS_code[isris682car]        = "ris682car";                            
    IS_code[isris682bus]        = "ris682bus";                            
    IS_code[isris682special]    = "ris682special";                        
    IS_code[isris682heavytruck] = "ris682heavytruck";                     
    IS_code[isris811cyclist]    = "ris811cyclist";                        
    IS_code[isris821cyclist]    = "ris821cyclist";                        
    IS_code[isris841cyclist]    = "ris841cyclist";                        
#endif

/* hulp elementen */
/* -------------- */
    H_code[hopdrempelen08]      = "opdrempelen08";                                    /* Opdrempelen toepassen voor fase 08                                 */
    H_code[hgeendynhiaat08]     = "geendynhiaat08";                                   /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    H_code[hverleng_0801]       = "verleng_0801";                                     /* Instructie verlengen op detector 0801 ongeacht dynamische hiaat    */
    H_code[hverleng_0802]       = "verleng_0802";                                     /* Instructie verlengen op detector 0802 ongeacht dynamische hiaat    */
    H_code[hverleng_0803]       = "verleng_0803";                                     /* Instructie verlengen op detector 0803 ongeacht dynamische hiaat    */
    H_code[hverleng_0804]       = "verleng_0804";                                     /* Instructie verlengen op detector 0804 ongeacht dynamische hiaat    */
    H_code[hverleng_0805]       = "verleng_0805";                                     /* Instructie verlengen op detector 0805 ongeacht dynamische hiaat    */
    H_code[hverleng_0806]       = "verleng_0806";                                     /* Instructie verlengen op detector 0806 ongeacht dynamische hiaat    */
    H_code[hverleng_0807]       = "verleng_0807";                                     /* Instructie verlengen op detector 0807 ongeacht dynamische hiaat    */
    H_code[hverleng_0808]       = "verleng_0808";                                     /* Instructie verlengen op detector 0808 ongeacht dynamische hiaat    */
    H_code[hmad3131]            = "mad3131";                                          /* Hulpelement onthouden melding meeaanvraag detector 3131            */
    H_code[hmad3132]            = "mad3132";                                          /* Hulpelement onthouden melding meeaanvraag detector 3132            */
    H_code[hmad3231]            = "mad3231";                                          /* Hulpelement onthouden melding meeaanvraag detector 3231            */
    H_code[hmad3232]            = "mad3232";                                          /* Hulpelement onthouden melding meeaanvraag detector 3232            */
    H_code[hmad3331]            = "mad3331";                                          /* Hulpelement onthouden melding meeaanvraag detector 3331            */
    H_code[hmad3332]            = "mad3332";                                          /* Hulpelement onthouden melding meeaanvraag detector 3332            */
    H_code[hmad3431]            = "mad3431";                                          /* Hulpelement onthouden melding meeaanvraag detector 3431            */
    H_code[hmad3432]            = "mad3432";                                          /* Hulpelement onthouden melding meeaanvraag detector 3432            */
    H_code[hfile68af]           = "file68af";                                         /* File 68af actief                                                   */
    H_code[hfile6821]           = "file6821";                                         /* File 6821 actief                                                   */
    H_code[hfile6822]           = "file6822";                                         /* File 6822 actief                                                   */
    H_code[hafk08file68af]      = "afk08file68af";                                    /* Onthouden afkappen fase 08 bij start file ingreep                  */
    H_code[hafk11file68af]      = "afk11file68af";                                    /* Onthouden afkappen fase 11 bij start file ingreep                  */
    H_code[hnla0201]            = "nla0201";                                          /* Onthouden detectiemelding detector 0201 tbv naloop van 02 naar 62  */
    H_code[hnla0202]            = "nla0202";                                          /* Onthouden detectiemelding detector 0202 tbv naloop van 02 naar 62  */
    H_code[hnla0501]            = "nla0501";                                          /* Onthouden detectiemelding detector 0501 tbv naloop van 05 naar 62  */
    H_code[hnla0801]            = "nla0801";                                          /* Onthouden detectiemelding detector 0801 tbv naloop van 08 naar 68  */
    H_code[hnla0802]            = "nla0802";                                          /* Onthouden detectiemelding detector 0802 tbv naloop van 08 naar 68  */
    H_code[hnla1101]            = "nla1101";                                          /* Onthouden detectiemelding detector 1101 tbv naloop van 11 naar 68  */
    H_code[hnla2201]            = "nla2201";                                          /* Onthouden detectiemelding detector 2201 tbv naloop van 22 naar 21  */
    H_code[hnla3131]            = "nla3131";                                          /* Onthouden detectiemelding detector 3131 tbv naloop van 31 naar 32  */
    H_code[hnla3232]            = "nla3232";                                          /* Onthouden detectiemelding detector 3232 tbv naloop van 32 naar 31  */
    H_code[hnla3331]            = "nla3331";                                          /* Onthouden detectiemelding detector 3331 tbv naloop van 33 naar 34  */
    H_code[hnla3432]            = "nla3432";                                          /* Onthouden detectiemelding detector 3432 tbv naloop van 34 naar 33  */
    H_code[hnla8201]            = "nla8201";                                          /* Onthouden detectiemelding detector 8201 tbv naloop van 82 naar 81  */
    H_code[hprio02]             = "prio02";                                           /* Bijhouden actief zijn prioriteit fase 02                           */
    H_code[hprioin02]           = "prioin02";                                         /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02]          = "priouit02";                                        /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprioin02kar]        = "prioin02kar";                                      /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hprioin02sd0242]     = "prioin02sd0242";                                   /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02kar]       = "priouit02kar";                                     /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hpriouit02sd0241]    = "priouit02sd0241";                                  /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprio08]             = "prio08";                                           /* Bijhouden actief zijn prioriteit fase 08                           */
    H_code[hprioin08]           = "prioin08";                                         /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08]          = "priouit08";                                        /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprioin08kar]        = "prioin08kar";                                      /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hprioin08sd0842]     = "prioin08sd0842";                                   /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08kar]       = "priouit08kar";                                     /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hpriouit08sd0841]    = "priouit08sd0841";                                  /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprio11]             = "prio11";                                           /* Bijhouden actief zijn prioriteit fase 11                           */
    H_code[hprioin11]           = "prioin11";                                         /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11]          = "priouit11";                                        /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprioin11kar]        = "prioin11kar";                                      /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hprioin11sd1142]     = "prioin11sd1142";                                   /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11kar]       = "priouit11kar";                                     /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hpriouit11sd1141]    = "priouit11sd1141";                                  /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprio22]             = "prio22";                                           /* Bijhouden actief zijn prioriteit fase 22                           */
    H_code[hprioin22]           = "prioin22";                                         /* Prioriteit inmelding fase 22 Fiets                                 */
    H_code[hpriouit22]          = "priouit22";                                        /* Prioriteit uitmelding 22 Fiets                                     */
    H_code[hprioin22fiets]      = "prioin22fiets";                                    /* Prioriteit inmelding fase 22 Fiets                                 */
    H_code[hpriouit22fiets]     = "priouit22fiets";                                   /* Prioriteit uitmelding 22 Fiets                                     */
    H_code[hprio24]             = "prio24";                                           /* Bijhouden actief zijn prioriteit fase 24                           */
    H_code[hprioin24]           = "prioin24";                                         /* Prioriteit inmelding fase 24 Fiets                                 */
    H_code[hpriouit24]          = "priouit24";                                        /* Prioriteit uitmelding 24 Fiets                                     */
    H_code[hprioin24fiets2403]  = "prioin24fiets2403";                                /* Prioriteit inmelding fase 24 Fiets                                 */
    H_code[hpriouit24fiets]     = "priouit24fiets";                                   /* Prioriteit uitmelding 24 Fiets                                     */
    H_code[hprio61]             = "prio61";                                           /* Bijhouden actief zijn prioriteit fase 61                           */
    H_code[hprioin61]           = "prioin61";                                         /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61]          = "priouit61";                                        /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprioin61kar]        = "prioin61kar";                                      /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hprioin61sd0241]     = "prioin61sd0241";                                   /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61kar]       = "priouit61kar";                                     /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hpriouit61sd6141]    = "priouit61sd6141";                                  /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprio84]             = "prio84";                                           /* Bijhouden actief zijn prioriteit fase 84                           */
    H_code[hprioin84]           = "prioin84";                                         /* Prioriteit inmelding fase 84 Fiets                                 */
    H_code[hpriouit84]          = "priouit84";                                        /* Prioriteit uitmelding 84 Fiets                                     */
    H_code[hprioin84fiets]      = "prioin84fiets";                                    /* Prioriteit inmelding fase 84 Fiets                                 */
    H_code[hpriouit84fiets]     = "priouit84fiets";                                   /* Prioriteit uitmelding 84 Fiets                                     */
    H_code[hhd02]               = "hd02";                                             /* Bijhouden aanwezigheid HD fase 02                                  */
    H_code[hhdin02]             = "hdin02";                                           /* HD inmelding 02                                                    */
    H_code[hhduit02]            = "hduit02";                                          /* HD uitmelding 02                                                   */
    H_code[hhdin02kar]          = "hdin02kar";                                        /* HD inmelding 02                                                    */
    H_code[hhduit02kar]         = "hduit02kar";                                       /* HD uitmelding 02                                                   */
    H_code[hhd03]               = "hd03";                                             /* Bijhouden aanwezigheid HD fase 03                                  */
    H_code[hhdin03]             = "hdin03";                                           /* HD inmelding 03                                                    */
    H_code[hhduit03]            = "hduit03";                                          /* HD uitmelding 03                                                   */
    H_code[hhdin03kar]          = "hdin03kar";                                        /* HD inmelding 03                                                    */
    H_code[hhduit03kar]         = "hduit03kar";                                       /* HD uitmelding 03                                                   */
    H_code[hhd05]               = "hd05";                                             /* Bijhouden aanwezigheid HD fase 05                                  */
    H_code[hhdin05]             = "hdin05";                                           /* HD inmelding 05                                                    */
    H_code[hhduit05]            = "hduit05";                                          /* HD uitmelding 05                                                   */
    H_code[hhdin05kar]          = "hdin05kar";                                        /* HD inmelding 05                                                    */
    H_code[hhduit05kar]         = "hduit05kar";                                       /* HD uitmelding 05                                                   */
    H_code[hhd08]               = "hd08";                                             /* Bijhouden aanwezigheid HD fase 08                                  */
    H_code[hhdin08]             = "hdin08";                                           /* HD inmelding 08                                                    */
    H_code[hhduit08]            = "hduit08";                                          /* HD uitmelding 08                                                   */
    H_code[hhdin08kar]          = "hdin08kar";                                        /* HD inmelding 08                                                    */
    H_code[hhduit08kar]         = "hduit08kar";                                       /* HD uitmelding 08                                                   */
    H_code[hhd09]               = "hd09";                                             /* Bijhouden aanwezigheid HD fase 09                                  */
    H_code[hhdin09]             = "hdin09";                                           /* HD inmelding 09                                                    */
    H_code[hhduit09]            = "hduit09";                                          /* HD uitmelding 09                                                   */
    H_code[hhdin09kar]          = "hdin09kar";                                        /* HD inmelding 09                                                    */
    H_code[hhduit09kar]         = "hduit09kar";                                       /* HD uitmelding 09                                                   */
    H_code[hhd11]               = "hd11";                                             /* Bijhouden aanwezigheid HD fase 11                                  */
    H_code[hhdin11]             = "hdin11";                                           /* HD inmelding 11                                                    */
    H_code[hhduit11]            = "hduit11";                                          /* HD uitmelding 11                                                   */
    H_code[hhdin11kar]          = "hdin11kar";                                        /* HD inmelding 11                                                    */
    H_code[hhduit11kar]         = "hduit11kar";                                       /* HD uitmelding 11                                                   */
    H_code[hhd61]               = "hd61";                                             /* Bijhouden aanwezigheid HD fase 61                                  */
    H_code[hhdin61]             = "hdin61";                                           /* HD inmelding 61                                                    */
    H_code[hhduit61]            = "hduit61";                                          /* HD uitmelding 61                                                   */
    H_code[hhdin61kar]          = "hdin61kar";                                        /* HD inmelding 61                                                    */
    H_code[hhduit61kar]         = "hduit61kar";                                       /* HD uitmelding 61                                                   */
    H_code[hhd62]               = "hd62";                                             /* Bijhouden aanwezigheid HD fase 62                                  */
    H_code[hhdin62]             = "hdin62";                                           /* HD inmelding 62                                                    */
    H_code[hhduit62]            = "hduit62";                                          /* HD uitmelding 62                                                   */
    H_code[hhdin62kar]          = "hdin62kar";                                        /* HD inmelding 62                                                    */
    H_code[hhduit62kar]         = "hduit62kar";                                       /* HD uitmelding 62                                                   */
    H_code[hhd67]               = "hd67";                                             /* Bijhouden aanwezigheid HD fase 67                                  */
    H_code[hhdin67]             = "hdin67";                                           /* HD inmelding 67                                                    */
    H_code[hhduit67]            = "hduit67";                                          /* HD uitmelding 67                                                   */
    H_code[hhdin67kar]          = "hdin67kar";                                        /* HD inmelding 67                                                    */
    H_code[hhduit67kar]         = "hduit67kar";                                       /* HD uitmelding 67                                                   */
    H_code[hhd68]               = "hd68";                                             /* Bijhouden aanwezigheid HD fase 68                                  */
    H_code[hhdin68]             = "hdin68";                                           /* HD inmelding 68                                                    */
    H_code[hhduit68]            = "hduit68";                                          /* HD uitmelding 68                                                   */
    H_code[hhdin68kar]          = "hdin68kar";                                        /* HD inmelding 68                                                    */
    H_code[hhduit68kar]         = "hduit68kar";                                       /* HD uitmelding 68                                                   */
    H_code[hpelinKOP02]         = "pelinKOP02";                                       /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    H_code[hpeltegenhKOP02]     = "peltegenhKOP02";                                   /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    H_code[hpkud6801KOP68_uit]  = "pkud6801KOP68_uit";                                /* Bijhouden uitgaande status 6801 voor koppeling KOP68_uit           */
    H_code[hpkud6802KOP68_uit]  = "pkud6802KOP68_uit";                                /* Bijhouden uitgaande status 6802 voor koppeling KOP68_uit           */
    H_code[hperiodFietsprio1]   = "periodFietsprio1";                                 /* Periode Fietsprio1 actief                                          */
    H_code[hperiodFietsprio2]   = "periodFietsprio2";                                 /* Periode Fietsprio2 actief                                          */
    H_code[hperiodFietsprio3]   = "periodFietsprio3";                                 /* Periode Fietsprio3 actief                                          */
    H_code[hptp123456iks01]     = "ptp123456iks01";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks02]     = "ptp123456iks02";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks03]     = "ptp123456iks03";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks04]     = "ptp123456iks04";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks05]     = "ptp123456iks05";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks06]     = "ptp123456iks06";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks07]     = "ptp123456iks07";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks08]     = "ptp123456iks08";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks09]     = "ptp123456iks09";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks10]     = "ptp123456iks10";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks11]     = "ptp123456iks11";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks12]     = "ptp123456iks12";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks13]     = "ptp123456iks13";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks14]     = "ptp123456iks14";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks15]     = "ptp123456iks15";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks16]     = "ptp123456iks16";                                   /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456uks01]     = "ptp123456uks01";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks02]     = "ptp123456uks02";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks03]     = "ptp123456uks03";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks04]     = "ptp123456uks04";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks05]     = "ptp123456uks05";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks06]     = "ptp123456uks06";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks07]     = "ptp123456uks07";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks08]     = "ptp123456uks08";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks09]     = "ptp123456uks09";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks10]     = "ptp123456uks10";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks11]     = "ptp123456uks11";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks12]     = "ptp123456uks12";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks13]     = "ptp123456uks13";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks14]     = "ptp123456uks14";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks15]     = "ptp123456uks15";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks16]     = "ptp123456uks16";                                   /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp_ptp123456oke]   = "ptp_ptp123456oke";                                 /* Onthouden PTP oke ptp123456                                        */
    H_code[hptp_ptp123456err]   = "ptp_ptp123456err";                                 /* Onthouden PTP error ptp123456                                      */
    H_code[hptp_ptp123456err0]  = "ptp_ptp123456err0";                                /* Onthouden PTP error 0 ptp123456                                    */
    H_code[hptp_ptp123456err1]  = "ptp_ptp123456err1";                                /* Onthouden PTP error 1 ptp123456                                    */
    H_code[hptp_ptp123456err2]  = "ptp_ptp123456err2";                                /* Onthouden PTP error 2 ptp123456                                    */
    H_code[hrgvd2403_d2402]     = "rgvd2403_d2402";                                   /* Onthouden detector melding 24 richtinggevoelig verlengen fase 2403 */
    H_code[hrgvact]             = "rgvact";                                           /* Bijhouden actief zijn RoBuGrover                                   */
    H_code[hprreal02]           = "prreal02";                                         /* Bijhouden primaire realisatie fase 02                              */
    H_code[hprreal03]           = "prreal03";                                         /* Bijhouden primaire realisatie fase 03                              */
    H_code[hprreal05]           = "prreal05";                                         /* Bijhouden primaire realisatie fase 05                              */
    H_code[hprreal08]           = "prreal08";                                         /* Bijhouden primaire realisatie fase 08                              */
    H_code[hprreal11]           = "prreal11";                                         /* Bijhouden primaire realisatie fase 11                              */
    H_code[hprreal22]           = "prreal22";                                         /* Bijhouden primaire realisatie fase 22                              */
    H_code[hprreal28]           = "prreal28";                                         /* Bijhouden primaire realisatie fase 28                              */
    H_code[hschoolingreepd3331] = "schoolingreepd3331";                               /* Onthouden actief zijn schoolingreep voor fase 33 via detector 3331 */
    H_code[hschoolingreepd3332] = "schoolingreepd3332";                               /* Onthouden actief zijn schoolingreep voor fase 33 via detector 3332 */
    H_code[hschoolingreepd3431] = "schoolingreepd3431";                               /* Onthouden actief zijn schoolingreep voor fase 34 via detector 3431 */
    H_code[hschoolingreepd3432] = "schoolingreepd3432";                               /* Onthouden actief zijn schoolingreep voor fase 34 via detector 3432 */
    H_code[hsiexgr33]           = "siexgr33";                                         /* Onthouden actief zijn senioreningreep bij fase 33                  */
    H_code[hsiexgr34]           = "siexgr34";                                         /* Onthouden actief zijn senioreningreep bij fase 34                  */
    H_code[hnleg0262]           = "nleg0262";                                        
    H_code[hnleg0562]           = "nleg0562";                                        
    H_code[hnleg0868]           = "nleg0868";                                        
    H_code[hnleg1168]           = "nleg1168";                                        
    H_code[hnleg2221]           = "nleg2221";                                        
    H_code[hnlsg3132]           = "nlsg3132";                                        
    H_code[hnlsg3231]           = "nlsg3231";                                        
    H_code[hnlsg3334]           = "nlsg3334";                                        
    H_code[hnlsg3433]           = "nlsg3433";                                        
    H_code[hnleg8281]           = "nleg8281";                                        
    H_code[hinl32]              = "inl32";                                            /* Onthouden inlopen toestaan fase 32                                 */
    H_code[hlos32]              = "los32";                                            /* Onthouden toestaan los realiseren fase 32                          */
    H_code[hinl31]              = "inl31";                                            /* Onthouden inlopen toestaan fase 31                                 */
    H_code[hlos31]              = "los31";                                            /* Onthouden toestaan los realiseren fase 31                          */
    H_code[hinl34]              = "inl34";                                            /* Onthouden inlopen toestaan fase 34                                 */
    H_code[hlos34]              = "los34";                                            /* Onthouden toestaan los realiseren fase 34                          */
    H_code[hinl33]              = "inl33";                                            /* Onthouden inlopen toestaan fase 33                                 */
    H_code[hlos33]              = "los33";                                            /* Onthouden toestaan los realiseren fase 33                          */
    H_code[hlos62]              = "los62";                                            /* Onthouden toestaan los realiseren fase 62                          */
    H_code[hlos68]              = "los68";                                            /* Onthouden toestaan los realiseren fase 68                          */
    H_code[hlos21]              = "los21";                                            /* Onthouden toestaan los realiseren fase 21                          */
    H_code[hlos81]              = "los81";                                            /* Onthouden toestaan los realiseren fase 81                          */

/* geheugen elementen */
/* ------------------ */
    MM_code[mperiod]      = "period";                             /* Onthouden actieve periode                                               */
    MM_code[mmk02]        = "mk02";                               /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 02            */
    MM_code[mmk08]        = "mk08";                               /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08            */
    MM_code[mmk11]        = "mk11";                               /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11            */
    MM_code[mmk62]        = "mk62";                               /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62            */
    MM_code[mmk68]        = "mk68";                               /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68            */
    MM_code[mpelvtgKOP02] = "pelvtgKOP02";                        /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    MM_code[mpelinKOP02]  = "pelinKOP02";                         /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    MM_code[mrealtijd02]  = "realtijd02";                         /* Realisatie tijd fase 02                                                 */
    MM_code[mrealtijd03]  = "realtijd03";                         /* Realisatie tijd fase 03                                                 */
    MM_code[mrealtijd05]  = "realtijd05";                         /* Realisatie tijd fase 05                                                 */
    MM_code[mrealtijd08]  = "realtijd08";                         /* Realisatie tijd fase 08                                                 */
    MM_code[mrealtijd09]  = "realtijd09";                         /* Realisatie tijd fase 09                                                 */
    MM_code[mrealtijd11]  = "realtijd11";                         /* Realisatie tijd fase 11                                                 */
    MM_code[mrealtijd21]  = "realtijd21";                         /* Realisatie tijd fase 21                                                 */
    MM_code[mrealtijd22]  = "realtijd22";                         /* Realisatie tijd fase 22                                                 */
    MM_code[mrealtijd24]  = "realtijd24";                         /* Realisatie tijd fase 24                                                 */
    MM_code[mrealtijd26]  = "realtijd26";                         /* Realisatie tijd fase 26                                                 */
    MM_code[mrealtijd28]  = "realtijd28";                         /* Realisatie tijd fase 28                                                 */
    MM_code[mrealtijd31]  = "realtijd31";                         /* Realisatie tijd fase 31                                                 */
    MM_code[mrealtijd32]  = "realtijd32";                         /* Realisatie tijd fase 32                                                 */
    MM_code[mrealtijd33]  = "realtijd33";                         /* Realisatie tijd fase 33                                                 */
    MM_code[mrealtijd34]  = "realtijd34";                         /* Realisatie tijd fase 34                                                 */
    MM_code[mrealtijd38]  = "realtijd38";                         /* Realisatie tijd fase 38                                                 */
    MM_code[mrealtijd61]  = "realtijd61";                         /* Realisatie tijd fase 61                                                 */
    MM_code[mrealtijd62]  = "realtijd62";                         /* Realisatie tijd fase 62                                                 */
    MM_code[mrealtijd67]  = "realtijd67";                         /* Realisatie tijd fase 67                                                 */
    MM_code[mrealtijd68]  = "realtijd68";                         /* Realisatie tijd fase 68                                                 */
    MM_code[mrealtijd81]  = "realtijd81";                         /* Realisatie tijd fase 81                                                 */
    MM_code[mrealtijd82]  = "realtijd82";                         /* Realisatie tijd fase 82                                                 */
    MM_code[mrealtijd84]  = "realtijd84";                         /* Realisatie tijd fase 84                                                 */
    MM_code[mar02]        = "ar02";                               /* Alternatieve ruimte fase 02                                             */
    MM_code[mar03]        = "ar03";                               /* Alternatieve ruimte fase 03                                             */
    MM_code[mar05]        = "ar05";                               /* Alternatieve ruimte fase 05                                             */
    MM_code[mar08]        = "ar08";                               /* Alternatieve ruimte fase 08                                             */
    MM_code[mar09]        = "ar09";                               /* Alternatieve ruimte fase 09                                             */
    MM_code[mar11]        = "ar11";                               /* Alternatieve ruimte fase 11                                             */
    MM_code[mar21]        = "ar21";                               /* Alternatieve ruimte fase 21                                             */
    MM_code[mar22]        = "ar22";                               /* Alternatieve ruimte fase 22                                             */
    MM_code[mar24]        = "ar24";                               /* Alternatieve ruimte fase 24                                             */
    MM_code[mar26]        = "ar26";                               /* Alternatieve ruimte fase 26                                             */
    MM_code[mar28]        = "ar28";                               /* Alternatieve ruimte fase 28                                             */
    MM_code[mar31]        = "ar31";                               /* Alternatieve ruimte fase 31                                             */
    MM_code[mar32]        = "ar32";                               /* Alternatieve ruimte fase 32                                             */
    MM_code[mar33]        = "ar33";                               /* Alternatieve ruimte fase 33                                             */
    MM_code[mar34]        = "ar34";                               /* Alternatieve ruimte fase 34                                             */
    MM_code[mar38]        = "ar38";                               /* Alternatieve ruimte fase 38                                             */
    MM_code[mar61]        = "ar61";                               /* Alternatieve ruimte fase 61                                             */
    MM_code[mar62]        = "ar62";                               /* Alternatieve ruimte fase 62                                             */
    MM_code[mar67]        = "ar67";                               /* Alternatieve ruimte fase 67                                             */
    MM_code[mar68]        = "ar68";                               /* Alternatieve ruimte fase 68                                             */
    MM_code[mar81]        = "ar81";                               /* Alternatieve ruimte fase 81                                             */
    MM_code[mar82]        = "ar82";                               /* Alternatieve ruimte fase 82                                             */
    MM_code[mar84]        = "ar84";                               /* Alternatieve ruimte fase 84                                             */
    MM_code[mwijzpb]      = "wijzpb";                             /* Wijziging aan PB doorgeven                                              */
    MM_code[mfci]         = "fci";                                /* Index fc met gewijzigde TVG_max[]                                       */

/* tijd elementen */
/* -------------- */
    T_code[t0801_1]                = "0801_1";                T_max[t0801_1]                = 0;    T_type[t0801_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0801                                      */
    T_code[t0801_2]                = "0801_2";                T_max[t0801_2]                = 0;    T_type[t0801_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0801                                      */
    T_code[ttdh_0801_1]            = "tdh_0801_1";            T_max[ttdh_0801_1]            = 0;    T_type[ttdh_0801_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0801                                         */
    T_code[ttdh_0801_2]            = "tdh_0801_2";            T_max[ttdh_0801_2]            = 0;    T_type[ttdh_0801_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0801                                         */
    T_code[tmax_0801]              = "max_0801";              T_max[tmax_0801]              = 80;   T_type[tmax_0801]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0801                               */
    T_code[t0802_1]                = "0802_1";                T_max[t0802_1]                = 0;    T_type[t0802_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0802                                      */
    T_code[t0802_2]                = "0802_2";                T_max[t0802_2]                = 0;    T_type[t0802_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0802                                      */
    T_code[ttdh_0802_1]            = "tdh_0802_1";            T_max[ttdh_0802_1]            = 0;    T_type[ttdh_0802_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0802                                         */
    T_code[ttdh_0802_2]            = "tdh_0802_2";            T_max[ttdh_0802_2]            = 0;    T_type[ttdh_0802_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0802                                         */
    T_code[tmax_0802]              = "max_0802";              T_max[tmax_0802]              = 80;   T_type[tmax_0802]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0802                               */
    T_code[t0803_1]                = "0803_1";                T_max[t0803_1]                = 0;    T_type[t0803_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0803                                      */
    T_code[t0803_2]                = "0803_2";                T_max[t0803_2]                = 0;    T_type[t0803_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0803                                      */
    T_code[ttdh_0803_1]            = "tdh_0803_1";            T_max[ttdh_0803_1]            = 1;    T_type[ttdh_0803_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0803                                         */
    T_code[ttdh_0803_2]            = "tdh_0803_2";            T_max[ttdh_0803_2]            = 1;    T_type[ttdh_0803_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0803                                         */
    T_code[tmax_0803]              = "max_0803";              T_max[tmax_0803]              = 100;  T_type[tmax_0803]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0803                               */
    T_code[t0804_1]                = "0804_1";                T_max[t0804_1]                = 0;    T_type[t0804_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0804                                      */
    T_code[t0804_2]                = "0804_2";                T_max[t0804_2]                = 0;    T_type[t0804_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0804                                      */
    T_code[ttdh_0804_1]            = "tdh_0804_1";            T_max[ttdh_0804_1]            = 1;    T_type[ttdh_0804_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0804                                         */
    T_code[ttdh_0804_2]            = "tdh_0804_2";            T_max[ttdh_0804_2]            = 1;    T_type[ttdh_0804_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0804                                         */
    T_code[tmax_0804]              = "max_0804";              T_max[tmax_0804]              = 100;  T_type[tmax_0804]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0804                               */
    T_code[t0805_1]                = "0805_1";                T_max[t0805_1]                = 100;  T_type[t0805_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0805                                      */
    T_code[t0805_2]                = "0805_2";                T_max[t0805_2]                = 220;  T_type[t0805_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0805                                      */
    T_code[ttdh_0805_1]            = "tdh_0805_1";            T_max[ttdh_0805_1]            = 8;    T_type[ttdh_0805_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0805                                         */
    T_code[ttdh_0805_2]            = "tdh_0805_2";            T_max[ttdh_0805_2]            = 0;    T_type[ttdh_0805_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0805                                         */
    T_code[tmax_0805]              = "max_0805";              T_max[tmax_0805]              = 0;    T_type[tmax_0805]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0805                               */
    T_code[t0806_1]                = "0806_1";                T_max[t0806_1]                = 100;  T_type[t0806_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0806                                      */
    T_code[t0806_2]                = "0806_2";                T_max[t0806_2]                = 220;  T_type[t0806_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0806                                      */
    T_code[ttdh_0806_1]            = "tdh_0806_1";            T_max[ttdh_0806_1]            = 8;    T_type[ttdh_0806_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0806                                         */
    T_code[ttdh_0806_2]            = "tdh_0806_2";            T_max[ttdh_0806_2]            = 0;    T_type[ttdh_0806_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0806                                         */
    T_code[tmax_0806]              = "max_0806";              T_max[tmax_0806]              = 0;    T_type[tmax_0806]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0806                               */
    T_code[t0807_1]                = "0807_1";                T_max[t0807_1]                = 0;    T_type[t0807_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0807                                      */
    T_code[t0807_2]                = "0807_2";                T_max[t0807_2]                = 0;    T_type[t0807_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0807                                      */
    T_code[ttdh_0807_1]            = "tdh_0807_1";            T_max[ttdh_0807_1]            = 25;   T_type[ttdh_0807_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0807                                         */
    T_code[ttdh_0807_2]            = "tdh_0807_2";            T_max[ttdh_0807_2]            = 25;   T_type[ttdh_0807_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0807                                         */
    T_code[tmax_0807]              = "max_0807";              T_max[tmax_0807]              = 0;    T_type[tmax_0807]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0807                               */
    T_code[t0808_1]                = "0808_1";                T_max[t0808_1]                = 0;    T_type[t0808_1]                = TE_type; /* Dynamische hiaattijden moment 1 voor detector 0808                                      */
    T_code[t0808_2]                = "0808_2";                T_max[t0808_2]                = 0;    T_type[t0808_2]                = TE_type; /* Dynamische hiaattijden moment 2 voor detector 0808                                      */
    T_code[ttdh_0808_1]            = "tdh_0808_1";            T_max[ttdh_0808_1]            = 2520; T_type[ttdh_0808_1]            = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 0808                                         */
    T_code[ttdh_0808_2]            = "tdh_0808_2";            T_max[ttdh_0808_2]            = 25;   T_type[ttdh_0808_2]            = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 0808                                         */
    T_code[tmax_0808]              = "max_0808";              T_max[tmax_0808]              = 0;    T_type[tmax_0808]              = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 0808                               */
    T_code[tav2802]                = "av2802";                T_max[tav2802]                = 50;   T_type[tav2802]                = TE_type; /* Tijd na afvallen detector 2802 tbv verwijderen aanvraag                                 */
    T_code[tkm02]                  = "km02";                  T_max[tkm02]                  = 80;   T_type[tkm02]                  = TE_type; /* Kop maximum voor detector 02                                                            */
    T_code[tkm03]                  = "km03";                  T_max[tkm03]                  = 80;   T_type[tkm03]                  = TE_type; /* Kop maximum voor detector 03                                                            */
    T_code[tkm05]                  = "km05";                  T_max[tkm05]                  = 80;   T_type[tkm05]                  = TE_type; /* Kop maximum voor detector 05                                                            */
    T_code[tkm08]                  = "km08";                  T_max[tkm08]                  = 80;   T_type[tkm08]                  = TE_type; /* Kop maximum voor detector 08                                                            */
    T_code[tkm09]                  = "km09";                  T_max[tkm09]                  = 80;   T_type[tkm09]                  = TE_type; /* Kop maximum voor detector 09                                                            */
    T_code[tkm11]                  = "km11";                  T_max[tkm11]                  = 80;   T_type[tkm11]                  = TE_type; /* Kop maximum voor detector 11                                                            */
    T_code[tkm21]                  = "km21";                  T_max[tkm21]                  = 80;   T_type[tkm21]                  = TE_type; /* Kop maximum voor detector 21                                                            */
    T_code[tkm22]                  = "km22";                  T_max[tkm22]                  = 60;   T_type[tkm22]                  = TE_type; /* Kop maximum voor detector 22                                                            */
    T_code[tkm24]                  = "km24";                  T_max[tkm24]                  = 60;   T_type[tkm24]                  = TE_type; /* Kop maximum voor detector 24                                                            */
    T_code[tkm26]                  = "km26";                  T_max[tkm26]                  = 80;   T_type[tkm26]                  = TE_type; /* Kop maximum voor detector 26                                                            */
    T_code[tkm28]                  = "km28";                  T_max[tkm28]                  = 60;   T_type[tkm28]                  = TE_type; /* Kop maximum voor detector 28                                                            */
    T_code[tkm61]                  = "km61";                  T_max[tkm61]                  = 80;   T_type[tkm61]                  = TE_type; /* Kop maximum voor detector 61                                                            */
    T_code[tkm62]                  = "km62";                  T_max[tkm62]                  = 80;   T_type[tkm62]                  = TE_type; /* Kop maximum voor detector 62                                                            */
    T_code[tkm67]                  = "km67";                  T_max[tkm67]                  = 80;   T_type[tkm67]                  = TE_type; /* Kop maximum voor detector 67                                                            */
    T_code[tkm68]                  = "km68";                  T_max[tkm68]                  = 80;   T_type[tkm68]                  = TE_type; /* Kop maximum voor detector 68                                                            */
    T_code[tkm81]                  = "km81";                  T_max[tkm81]                  = 80;   T_type[tkm81]                  = TE_type; /* Kop maximum voor detector 81                                                            */
    T_code[tkm82]                  = "km82";                  T_max[tkm82]                  = 80;   T_type[tkm82]                  = TE_type; /* Kop maximum voor detector 82                                                            */
    T_code[tkm84]                  = "km84";                  T_max[tkm84]                  = 60;   T_type[tkm84]                  = TE_type; /* Kop maximum voor detector 84                                                            */
    T_code[thdvd0201]              = "hdvd0201";              T_max[thdvd0201]              = 25;   T_type[thdvd0201]              = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 0201                               */
    T_code[thdvd0202]              = "hdvd0202";              T_max[thdvd0202]              = 25;   T_type[thdvd0202]              = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 0202                               */
    T_code[tdstvert02]             = "dstvert02";             T_max[tdstvert02]             = 100;  T_type[tdstvert02]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                     */
    T_code[thdvd0301]              = "hdvd0301";              T_max[thdvd0301]              = 25;   T_type[thdvd0301]              = TE_type; /* Vervangend hiaat koplus fase 03 bij defect lange lus 0301                               */
    T_code[tdstvert03]             = "dstvert03";             T_max[tdstvert03]             = 100;  T_type[tdstvert03]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                     */
    T_code[thdvd0501]              = "hdvd0501";              T_max[thdvd0501]              = 25;   T_type[thdvd0501]              = TE_type; /* Vervangend hiaat koplus fase 05 bij defect lange lus 0501                               */
    T_code[tdstvert05]             = "dstvert05";             T_max[tdstvert05]             = 100;  T_type[tdstvert05]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                     */
    T_code[thdvd0801]              = "hdvd0801";              T_max[thdvd0801]              = 25;   T_type[thdvd0801]              = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 0801                               */
    T_code[thdvd0802]              = "hdvd0802";              T_max[thdvd0802]              = 25;   T_type[thdvd0802]              = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 0802                               */
    T_code[tdstvert08]             = "dstvert08";             T_max[tdstvert08]             = 100;  T_type[tdstvert08]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                     */
    T_code[thdvd0901]              = "hdvd0901";              T_max[thdvd0901]              = 25;   T_type[thdvd0901]              = TE_type; /* Vervangend hiaat koplus fase 09 bij defect lange lus 0901                               */
    T_code[tdstvert09]             = "dstvert09";             T_max[tdstvert09]             = 100;  T_type[tdstvert09]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                     */
    T_code[thdvd1101]              = "hdvd1101";              T_max[thdvd1101]              = 25;   T_type[thdvd1101]              = TE_type; /* Vervangend hiaat koplus fase 11 bij defect lange lus 1101                               */
    T_code[tdstvert11]             = "dstvert11";             T_max[tdstvert11]             = 100;  T_type[tdstvert11]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                     */
    T_code[tdstvert21]             = "dstvert21";             T_max[tdstvert21]             = 100;  T_type[tdstvert21]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                     */
    T_code[thdvd2201]              = "hdvd2201";              T_max[thdvd2201]              = 35;   T_type[thdvd2201]              = TE_type; /* Vervangend hiaat koplus fase 22 bij defect lange lus 2201                               */
    T_code[tdstvert22]             = "dstvert22";             T_max[tdstvert22]             = 100;  T_type[tdstvert22]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                     */
    T_code[thdvd2401]              = "hdvd2401";              T_max[thdvd2401]              = 35;   T_type[thdvd2401]              = TE_type; /* Vervangend hiaat koplus fase 24 bij defect lange lus 2401                               */
    T_code[tdstvert24]             = "dstvert24";             T_max[tdstvert24]             = 100;  T_type[tdstvert24]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                     */
    T_code[tdstvert26]             = "dstvert26";             T_max[tdstvert26]             = 100;  T_type[tdstvert26]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                     */
    T_code[thdvd2801]              = "hdvd2801";              T_max[thdvd2801]              = 35;   T_type[thdvd2801]              = TE_type; /* Vervangend hiaat koplus fase 28 bij defect lange lus 2801                               */
    T_code[tdstvert28]             = "dstvert28";             T_max[tdstvert28]             = 100;  T_type[tdstvert28]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                     */
    T_code[tdstvert31]             = "dstvert31";             T_max[tdstvert31]             = 300;  T_type[tdstvert31]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                     */
    T_code[tdstvert32]             = "dstvert32";             T_max[tdstvert32]             = 300;  T_type[tdstvert32]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                     */
    T_code[tdstvert33]             = "dstvert33";             T_max[tdstvert33]             = 300;  T_type[tdstvert33]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                     */
    T_code[tdstvert34]             = "dstvert34";             T_max[tdstvert34]             = 300;  T_type[tdstvert34]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                     */
    T_code[tdstvert38]             = "dstvert38";             T_max[tdstvert38]             = 300;  T_type[tdstvert38]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                     */
    T_code[thdvd6101]              = "hdvd6101";              T_max[thdvd6101]              = 25;   T_type[thdvd6101]              = TE_type; /* Vervangend hiaat koplus fase 61 bij defect lange lus 6101                               */
    T_code[tdstvert61]             = "dstvert61";             T_max[tdstvert61]             = 100;  T_type[tdstvert61]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                     */
    T_code[thdvd6201]              = "hdvd6201";              T_max[thdvd6201]              = 25;   T_type[thdvd6201]              = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 6201                               */
    T_code[thdvd6202]              = "hdvd6202";              T_max[thdvd6202]              = 25;   T_type[thdvd6202]              = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 6202                               */
    T_code[tdstvert62]             = "dstvert62";             T_max[tdstvert62]             = 100;  T_type[tdstvert62]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                     */
    T_code[thdvd6701]              = "hdvd6701";              T_max[thdvd6701]              = 25;   T_type[thdvd6701]              = TE_type; /* Vervangend hiaat koplus fase 67 bij defect lange lus 6701                               */
    T_code[tdstvert67]             = "dstvert67";             T_max[tdstvert67]             = 100;  T_type[tdstvert67]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                     */
    T_code[thdvd6801]              = "hdvd6801";              T_max[thdvd6801]              = 25;   T_type[thdvd6801]              = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 6801                               */
    T_code[thdvd6802]              = "hdvd6802";              T_max[thdvd6802]              = 25;   T_type[thdvd6802]              = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 6802                               */
    T_code[tdstvert68]             = "dstvert68";             T_max[tdstvert68]             = 100;  T_type[tdstvert68]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                     */
    T_code[tdstvert81]             = "dstvert81";             T_max[tdstvert81]             = 100;  T_type[tdstvert81]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                     */
    T_code[tdstvert82]             = "dstvert82";             T_max[tdstvert82]             = 100;  T_type[tdstvert82]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                     */
    T_code[thdvd8401]              = "hdvd8401";              T_max[thdvd8401]              = 35;   T_type[thdvd8401]              = TE_type; /* Vervangend hiaat koplus fase 84 bij defect lange lus 8401                               */
    T_code[tdstvert84]             = "dstvert84";             T_max[tdstvert84]             = 100;  T_type[tdstvert84]             = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                     */
    T_code[tafv68af]               = "afv68af";               T_max[tafv68af]               = 600;  T_type[tafv68af]               = TE_type; /* Afval vertraging file 68af                                                              */
    T_code[tafv6821]               = "afv6821";               T_max[tafv6821]               = 35;   T_type[tafv6821]               = TE_type; /* Afval vertraging file 6821                                                              */
    T_code[tbz6821]                = "bz6821";                T_max[tbz6821]                = 35;   T_type[tbz6821]                = TE_type; /* Bezettijd file detector 6821                                                            */
    T_code[trij6821]               = "rij6821";               T_max[trij6821]               = 20;   T_type[trij6821]               = TE_type; /* Rijtijd file detector 6821                                                              */
    T_code[tafv6822]               = "afv6822";               T_max[tafv6822]               = 35;   T_type[tafv6822]               = TE_type; /* Afval vertraging file 6822                                                              */
    T_code[tbz6822]                = "bz6822";                T_max[tbz6822]                = 35;   T_type[tbz6822]                = TE_type; /* Bezettijd file detector 6822                                                            */
    T_code[trij6822]               = "rij6822";               T_max[trij6822]               = 20;   T_type[trij6822]               = TE_type; /* Rijtijd file detector 6822                                                              */
    T_code[tafkmingroen08file68af] = "afkmingroen08file68af"; T_max[tafkmingroen08file68af] = 100;  T_type[tafkmingroen08file68af] = TE_type; /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                   */
    T_code[tafkmingroen11file68af] = "afkmingroen11file68af"; T_max[tafkmingroen11file68af] = 100;  T_type[tafkmingroen11file68af] = TE_type; /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                   */
    T_code[tminrood08file68af]     = "minrood08file68af";     T_max[tminrood08file68af]     = 0;    T_type[tminrood08file68af]     = TE_type; /* Minimale roodtijd bij fase 08 voor file ingreep                                         */
    T_code[tminrood11file68af]     = "minrood11file68af";     T_max[tminrood11file68af]     = 0;    T_type[tminrood11file68af]     = TE_type; /* Minimale roodtijd bij fase 11 voor file ingreep                                         */
    T_code[tmaxgroen08file68af]    = "maxgroen08file68af";    T_max[tmaxgroen08file68af]    = 400;  T_type[tmaxgroen08file68af]    = TE_type; /* Maximale groentijd bij fase 08 voor file ingreep                                        */
    T_code[tmaxgroen11file68af]    = "maxgroen11file68af";    T_max[tmaxgroen11file68af]    = 400;  T_type[tmaxgroen11file68af]    = TE_type; /* Maximale groentijd bij fase 11 voor file ingreep                                        */
    T_code[tnlfgd0262]             = "nlfgd0262";             T_max[tnlfgd0262]             = 60;   T_type[tnlfgd0262]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                            */
    T_code[tnlegd0262]             = "nlegd0262";             T_max[tnlegd0262]             = 40;   T_type[tnlegd0262]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 02 naar 62                               */
    T_code[tnlfgd0562]             = "nlfgd0562";             T_max[tnlfgd0562]             = 80;   T_type[tnlfgd0562]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 05 naar 62                            */
    T_code[tnlegd0562]             = "nlegd0562";             T_max[tnlegd0562]             = 50;   T_type[tnlegd0562]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 05 naar 62                               */
    T_code[tnlfgd0868]             = "nlfgd0868";             T_max[tnlfgd0868]             = 60;   T_type[tnlfgd0868]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                            */
    T_code[tnlegd0868]             = "nlegd0868";             T_max[tnlegd0868]             = 40;   T_type[tnlegd0868]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 08 naar 68                               */
    T_code[tnlfgd1168]             = "nlfgd1168";             T_max[tnlfgd1168]             = 80;   T_type[tnlfgd1168]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                            */
    T_code[tnlegd1168]             = "nlegd1168";             T_max[tnlegd1168]             = 50;   T_type[tnlegd1168]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 11 naar 68                               */
    T_code[tnlfgd2221]             = "nlfgd2221";             T_max[tnlfgd2221]             = 40;   T_type[tnlfgd2221]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                            */
    T_code[tnlegd2221]             = "nlegd2221";             T_max[tnlegd2221]             = 30;   T_type[tnlegd2221]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 22 naar 21                               */
    T_code[tnlsgd3132]             = "nlsgd3132";             T_max[tnlsgd3132]             = 125;  T_type[tnlsgd3132]             = TE_type; /* Detectieafhankelijke naloop op start groen van 31 naar 32                               */
    T_code[tnlsgd3231]             = "nlsgd3231";             T_max[tnlsgd3231]             = 115;  T_type[tnlsgd3231]             = TE_type; /* Detectieafhankelijke naloop op start groen van 32 naar 31                               */
    T_code[tnlsgd3334]             = "nlsgd3334";             T_max[tnlsgd3334]             = 80;   T_type[tnlsgd3334]             = TE_type; /* Detectieafhankelijke naloop op start groen van 33 naar 34                               */
    T_code[tnlsgd3433]             = "nlsgd3433";             T_max[tnlsgd3433]             = 95;   T_type[tnlsgd3433]             = TE_type; /* Detectieafhankelijke naloop op start groen van 34 naar 33                               */
    T_code[tnlfgd8281]             = "nlfgd8281";             T_max[tnlfgd8281]             = 50;   T_type[tnlfgd8281]             = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                            */
    T_code[tnlegd8281]             = "nlegd8281";             T_max[tnlegd8281]             = 30;   T_type[tnlegd8281]             = TE_type; /* Detectieafhankelijke naloop op einde groen van 82 naar 81                               */
    T_code[tkarmelding]            = "karmelding";            T_max[tkarmelding]            = 15;   T_type[tkarmelding]            = TE_type; /* Duur verklikking ontvangst melding KAR                                                  */
    T_code[tkarog]                 = "karog";                 T_max[tkarog]                 = 1440; T_type[tkarog]                 = TM_type; /* Ondergedrag KAR                                                                         */
    T_code[tprioin02kar]           = "prioin02kar";           T_max[tprioin02kar]           = 15;   T_type[tprioin02kar]           = TE_type; /* Anti jutter tijd inmelden 02 Bus                                                        */
    T_code[tprioin02sd0242]        = "prioin02sd0242";        T_max[tprioin02sd0242]        = 15;   T_type[tprioin02sd0242]        = TE_type; /* Anti jutter tijd inmelden 02 Bus                                                        */
    T_code[tpriouit02kar]          = "priouit02kar";          T_max[tpriouit02kar]          = 15;   T_type[tpriouit02kar]          = TE_type; /* Anti jutter tijd uitmelden 02                                                           */
    T_code[tpriouit02sd0241]       = "priouit02sd0241";       T_max[tpriouit02sd0241]       = 15;   T_type[tpriouit02sd0241]       = TE_type; /* Anti jutter tijd uitmelden 02                                                           */
    T_code[tprioin02]              = "prioin02";              T_max[tprioin02]              = 15;   T_type[tprioin02]              = TE_type; /* Anti jutter tijd inmelden 02 Bus                                                        */
    T_code[tpriouit02]             = "priouit02";             T_max[tpriouit02]             = 15;   T_type[tpriouit02]             = TE_type; /* Anti jutter tijd uitmelden 02                                                           */
    T_code[tbtovg02]               = "btovg02";               T_max[tbtovg02]               = 0;    T_type[tbtovg02]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                   */
    T_code[trt02]                  = "rt02";                  T_max[trt02]                  = 0;    T_type[trt02]                  = TE_type; /* Actuele rijtijd prio fase 02                                                            */
    T_code[tgb02]                  = "gb02";                  T_max[tgb02]                  = 300;  T_type[tgb02]                  = TE_type; /* Groenbewaking prioriteit fase 02                                                        */
    T_code[tblk02]                 = "blk02";                 T_max[tblk02]                 = 0;    T_type[tblk02]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 02                                              */
    T_code[tprioin08sd0842]        = "prioin08sd0842";        T_max[tprioin08sd0842]        = 15;   T_type[tprioin08sd0842]        = TE_type; /* Anti jutter tijd inmelden 08 Bus                                                        */
    T_code[tpriouit08kar]          = "priouit08kar";          T_max[tpriouit08kar]          = 15;   T_type[tpriouit08kar]          = TE_type; /* Anti jutter tijd uitmelden 08                                                           */
    T_code[tpriouit08sd0841]       = "priouit08sd0841";       T_max[tpriouit08sd0841]       = 15;   T_type[tpriouit08sd0841]       = TE_type; /* Anti jutter tijd uitmelden 08                                                           */
    T_code[tbtovg08]               = "btovg08";               T_max[tbtovg08]               = 0;    T_type[tbtovg08]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                   */
    T_code[trt08]                  = "rt08";                  T_max[trt08]                  = 0;    T_type[trt08]                  = TE_type; /* Actuele rijtijd prio fase 08                                                            */
    T_code[tgb08]                  = "gb08";                  T_max[tgb08]                  = 300;  T_type[tgb08]                  = TE_type; /* Groenbewaking prioriteit fase 08                                                        */
    T_code[tblk08]                 = "blk08";                 T_max[tblk08]                 = 0;    T_type[tblk08]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 08                                              */
    T_code[tprioin11sd1142]        = "prioin11sd1142";        T_max[tprioin11sd1142]        = 15;   T_type[tprioin11sd1142]        = TE_type; /* Anti jutter tijd inmelden 11 Bus                                                        */
    T_code[tpriouit11kar]          = "priouit11kar";          T_max[tpriouit11kar]          = 15;   T_type[tpriouit11kar]          = TE_type; /* Anti jutter tijd uitmelden 11                                                           */
    T_code[tpriouit11sd1141]       = "priouit11sd1141";       T_max[tpriouit11sd1141]       = 15;   T_type[tpriouit11sd1141]       = TE_type; /* Anti jutter tijd uitmelden 11                                                           */
    T_code[tbtovg11]               = "btovg11";               T_max[tbtovg11]               = 0;    T_type[tbtovg11]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                   */
    T_code[trt11]                  = "rt11";                  T_max[trt11]                  = 0;    T_type[trt11]                  = TE_type; /* Actuele rijtijd prio fase 11                                                            */
    T_code[tgb11]                  = "gb11";                  T_max[tgb11]                  = 300;  T_type[tgb11]                  = TE_type; /* Groenbewaking prioriteit fase 11                                                        */
    T_code[tblk11]                 = "blk11";                 T_max[tblk11]                 = 0;    T_type[tblk11]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 11                                              */
    T_code[tprioin22fiets]         = "prioin22fiets";         T_max[tprioin22fiets]         = 15;   T_type[tprioin22fiets]         = TE_type; /* Anti jutter tijd inmelden 22 Fiets                                                      */
    T_code[tprioin22]              = "prioin22";              T_max[tprioin22]              = 15;   T_type[tprioin22]              = TE_type; /* Anti jutter tijd inmelden 22 Fiets                                                      */
    T_code[tpriouit22]             = "priouit22";             T_max[tpriouit22]             = 15;   T_type[tpriouit22]             = TE_type; /* Anti jutter tijd uitmelden 22                                                           */
    T_code[tbtovg22]               = "btovg22";               T_max[tbtovg22]               = 30;   T_type[tbtovg22]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                   */
    T_code[trt22]                  = "rt22";                  T_max[trt22]                  = 0;    T_type[trt22]                  = TE_type; /* Actuele rijtijd prio fase 22                                                            */
    T_code[tgb22]                  = "gb22";                  T_max[tgb22]                  = 100;  T_type[tgb22]                  = TE_type; /* Groenbewaking prioriteit fase 22                                                        */
    T_code[tblk22]                 = "blk22";                 T_max[tblk22]                 = 100;  T_type[tblk22]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 22                                              */
    T_code[tprioin24fiets2403]     = "prioin24fiets2403";     T_max[tprioin24fiets2403]     = 15;   T_type[tprioin24fiets2403]     = TE_type; /* Anti jutter tijd inmelden 24 Fiets                                                      */
    T_code[tprioin24]              = "prioin24";              T_max[tprioin24]              = 15;   T_type[tprioin24]              = TE_type; /* Anti jutter tijd inmelden 24 Fiets                                                      */
    T_code[tpriouit24]             = "priouit24";             T_max[tpriouit24]             = 15;   T_type[tpriouit24]             = TE_type; /* Anti jutter tijd uitmelden 24                                                           */
    T_code[tbtovg24]               = "btovg24";               T_max[tbtovg24]               = 30;   T_type[tbtovg24]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 24                                   */
    T_code[trt24]                  = "rt24";                  T_max[trt24]                  = 0;    T_type[trt24]                  = TE_type; /* Actuele rijtijd prio fase 24                                                            */
    T_code[tgb24]                  = "gb24";                  T_max[tgb24]                  = 100;  T_type[tgb24]                  = TE_type; /* Groenbewaking prioriteit fase 24                                                        */
    T_code[tblk24]                 = "blk24";                 T_max[tblk24]                 = 100;  T_type[tblk24]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 24                                              */
    T_code[tbtovg61]               = "btovg61";               T_max[tbtovg61]               = 0;    T_type[tbtovg61]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                   */
    T_code[trt61]                  = "rt61";                  T_max[trt61]                  = 0;    T_type[trt61]                  = TE_type; /* Actuele rijtijd prio fase 61                                                            */
    T_code[tgb61]                  = "gb61";                  T_max[tgb61]                  = 150;  T_type[tgb61]                  = TE_type; /* Groenbewaking prioriteit fase 61                                                        */
    T_code[tblk61]                 = "blk61";                 T_max[tblk61]                 = 0;    T_type[tblk61]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 61                                              */
    T_code[tprioin84fiets]         = "prioin84fiets";         T_max[tprioin84fiets]         = 15;   T_type[tprioin84fiets]         = TE_type; /* Anti jutter tijd inmelden 84 Fiets                                                      */
    T_code[tprioin84]              = "prioin84";              T_max[tprioin84]              = 15;   T_type[tprioin84]              = TE_type; /* Anti jutter tijd inmelden 84 Fiets                                                      */
    T_code[tpriouit84]             = "priouit84";             T_max[tpriouit84]             = 15;   T_type[tpriouit84]             = TE_type; /* Anti jutter tijd uitmelden 84                                                           */
    T_code[tbtovg84]               = "btovg84";               T_max[tbtovg84]               = 30;   T_type[tbtovg84]               = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 84                                   */
    T_code[trt84]                  = "rt84";                  T_max[trt84]                  = 0;    T_type[trt84]                  = TE_type; /* Actuele rijtijd prio fase 84                                                            */
    T_code[tgb84]                  = "gb84";                  T_max[tgb84]                  = 100;  T_type[tgb84]                  = TE_type; /* Groenbewaking prioriteit fase 84                                                        */
    T_code[tblk84]                 = "blk84";                 T_max[tblk84]                 = 100;  T_type[tblk84]                 = TE_type; /* Blokkeertijd na prioriteitsingreep fase 84                                              */
    T_code[tgbhd02]                = "gbhd02";                T_max[tgbhd02]                = 300;  T_type[tgbhd02]                = TE_type; /* Groenbewaking HD fase 02                                                                */
    T_code[trthd02]                = "rthd02";                T_max[trthd02]                = 0;    T_type[trthd02]                = TE_type; /* Actuele rijtijd HD fase 02                                                              */
    T_code[tbtovg02hd]             = "btovg02hd";             T_max[tbtovg02hd]             = 0;    T_type[tbtovg02hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                   */
    T_code[thdin02kar]             = "hdin02kar";             T_max[thdin02kar]             = 15;   T_type[thdin02kar]             = TE_type; /* Anti jutter tijd inmelden HD 02 KAR                                                     */
    T_code[thduit02kar]            = "hduit02kar";            T_max[thduit02kar]            = 15;   T_type[thduit02kar]            = TE_type; /* Anti jutter tijd uitmelden HD 02                                                        */
    T_code[tgbhd03]                = "gbhd03";                T_max[tgbhd03]                = 300;  T_type[tgbhd03]                = TE_type; /* Groenbewaking HD fase 03                                                                */
    T_code[trthd03]                = "rthd03";                T_max[trthd03]                = 0;    T_type[trthd03]                = TE_type; /* Actuele rijtijd HD fase 03                                                              */
    T_code[tbtovg03hd]             = "btovg03hd";             T_max[tbtovg03hd]             = 0;    T_type[tbtovg03hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                   */
    T_code[thdin03kar]             = "hdin03kar";             T_max[thdin03kar]             = 15;   T_type[thdin03kar]             = TE_type; /* Anti jutter tijd inmelden HD 03 KAR                                                     */
    T_code[thduit03kar]            = "hduit03kar";            T_max[thduit03kar]            = 15;   T_type[thduit03kar]            = TE_type; /* Anti jutter tijd uitmelden HD 03                                                        */
    T_code[tgbhd05]                = "gbhd05";                T_max[tgbhd05]                = 300;  T_type[tgbhd05]                = TE_type; /* Groenbewaking HD fase 05                                                                */
    T_code[trthd05]                = "rthd05";                T_max[trthd05]                = 0;    T_type[trthd05]                = TE_type; /* Actuele rijtijd HD fase 05                                                              */
    T_code[tbtovg05hd]             = "btovg05hd";             T_max[tbtovg05hd]             = 0;    T_type[tbtovg05hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                   */
    T_code[thdin05kar]             = "hdin05kar";             T_max[thdin05kar]             = 15;   T_type[thdin05kar]             = TE_type; /* Anti jutter tijd inmelden HD 05 KAR                                                     */
    T_code[thduit05kar]            = "hduit05kar";            T_max[thduit05kar]            = 15;   T_type[thduit05kar]            = TE_type; /* Anti jutter tijd uitmelden HD 05                                                        */
    T_code[tgbhd08]                = "gbhd08";                T_max[tgbhd08]                = 300;  T_type[tgbhd08]                = TE_type; /* Groenbewaking HD fase 08                                                                */
    T_code[trthd08]                = "rthd08";                T_max[trthd08]                = 0;    T_type[trthd08]                = TE_type; /* Actuele rijtijd HD fase 08                                                              */
    T_code[tbtovg08hd]             = "btovg08hd";             T_max[tbtovg08hd]             = 0;    T_type[tbtovg08hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                   */
    T_code[thdin08kar]             = "hdin08kar";             T_max[thdin08kar]             = 15;   T_type[thdin08kar]             = TE_type; /* Anti jutter tijd inmelden HD 08 KAR                                                     */
    T_code[thduit08kar]            = "hduit08kar";            T_max[thduit08kar]            = 15;   T_type[thduit08kar]            = TE_type; /* Anti jutter tijd uitmelden HD 08                                                        */
    T_code[tgbhd09]                = "gbhd09";                T_max[tgbhd09]                = 300;  T_type[tgbhd09]                = TE_type; /* Groenbewaking HD fase 09                                                                */
    T_code[trthd09]                = "rthd09";                T_max[trthd09]                = 0;    T_type[trthd09]                = TE_type; /* Actuele rijtijd HD fase 09                                                              */
    T_code[tbtovg09hd]             = "btovg09hd";             T_max[tbtovg09hd]             = 0;    T_type[tbtovg09hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                   */
    T_code[thdin09kar]             = "hdin09kar";             T_max[thdin09kar]             = 15;   T_type[thdin09kar]             = TE_type; /* Anti jutter tijd inmelden HD 09 KAR                                                     */
    T_code[thduit09kar]            = "hduit09kar";            T_max[thduit09kar]            = 15;   T_type[thduit09kar]            = TE_type; /* Anti jutter tijd uitmelden HD 09                                                        */
    T_code[tgbhd11]                = "gbhd11";                T_max[tgbhd11]                = 300;  T_type[tgbhd11]                = TE_type; /* Groenbewaking HD fase 11                                                                */
    T_code[trthd11]                = "rthd11";                T_max[trthd11]                = 0;    T_type[trthd11]                = TE_type; /* Actuele rijtijd HD fase 11                                                              */
    T_code[tbtovg11hd]             = "btovg11hd";             T_max[tbtovg11hd]             = 0;    T_type[tbtovg11hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                   */
    T_code[thdin11kar]             = "hdin11kar";             T_max[thdin11kar]             = 15;   T_type[thdin11kar]             = TE_type; /* Anti jutter tijd inmelden HD 11 KAR                                                     */
    T_code[thduit11kar]            = "hduit11kar";            T_max[thduit11kar]            = 15;   T_type[thduit11kar]            = TE_type; /* Anti jutter tijd uitmelden HD 11                                                        */
    T_code[tgbhd61]                = "gbhd61";                T_max[tgbhd61]                = 400;  T_type[tgbhd61]                = TE_type; /* Groenbewaking HD fase 61                                                                */
    T_code[trthd61]                = "rthd61";                T_max[trthd61]                = 0;    T_type[trthd61]                = TE_type; /* Actuele rijtijd HD fase 61                                                              */
    T_code[tbtovg61hd]             = "btovg61hd";             T_max[tbtovg61hd]             = 0;    T_type[tbtovg61hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                   */
    T_code[thdin61kar]             = "hdin61kar";             T_max[thdin61kar]             = 15;   T_type[thdin61kar]             = TE_type; /* Anti jutter tijd inmelden HD 61 KAR                                                     */
    T_code[thduit61kar]            = "hduit61kar";            T_max[thduit61kar]            = 15;   T_type[thduit61kar]            = TE_type; /* Anti jutter tijd uitmelden HD 61                                                        */
    T_code[tgbhd62]                = "gbhd62";                T_max[tgbhd62]                = 400;  T_type[tgbhd62]                = TE_type; /* Groenbewaking HD fase 62                                                                */
    T_code[trthd62]                = "rthd62";                T_max[trthd62]                = 0;    T_type[trthd62]                = TE_type; /* Actuele rijtijd HD fase 62                                                              */
    T_code[tbtovg62hd]             = "btovg62hd";             T_max[tbtovg62hd]             = 0;    T_type[tbtovg62hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                   */
    T_code[thdin62kar]             = "hdin62kar";             T_max[thdin62kar]             = 15;   T_type[thdin62kar]             = TE_type; /* Anti jutter tijd inmelden HD 62 KAR                                                     */
    T_code[thduit62kar]            = "hduit62kar";            T_max[thduit62kar]            = 15;   T_type[thduit62kar]            = TE_type; /* Anti jutter tijd uitmelden HD 62                                                        */
    T_code[tgbhd67]                = "gbhd67";                T_max[tgbhd67]                = 400;  T_type[tgbhd67]                = TE_type; /* Groenbewaking HD fase 67                                                                */
    T_code[trthd67]                = "rthd67";                T_max[trthd67]                = 0;    T_type[trthd67]                = TE_type; /* Actuele rijtijd HD fase 67                                                              */
    T_code[tbtovg67hd]             = "btovg67hd";             T_max[tbtovg67hd]             = 0;    T_type[tbtovg67hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                   */
    T_code[thdin67kar]             = "hdin67kar";             T_max[thdin67kar]             = 15;   T_type[thdin67kar]             = TE_type; /* Anti jutter tijd inmelden HD 67 KAR                                                     */
    T_code[thduit67kar]            = "hduit67kar";            T_max[thduit67kar]            = 15;   T_type[thduit67kar]            = TE_type; /* Anti jutter tijd uitmelden HD 67                                                        */
    T_code[tgbhd68]                = "gbhd68";                T_max[tgbhd68]                = 400;  T_type[tgbhd68]                = TE_type; /* Groenbewaking HD fase 68                                                                */
    T_code[trthd68]                = "rthd68";                T_max[trthd68]                = 0;    T_type[trthd68]                = TE_type; /* Actuele rijtijd HD fase 68                                                              */
    T_code[tbtovg68hd]             = "btovg68hd";             T_max[tbtovg68hd]             = 0;    T_type[tbtovg68hd]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                   */
    T_code[thdin68kar]             = "hdin68kar";             T_max[thdin68kar]             = 15;   T_type[thdin68kar]             = TE_type; /* Anti jutter tijd inmelden HD 68 KAR                                                     */
    T_code[thduit68kar]            = "hduit68kar";            T_max[thduit68kar]            = 15;   T_type[thduit68kar]            = TE_type; /* Anti jutter tijd uitmelden HD 68                                                        */
    T_code[tpelmeetKOP02]          = "pelmeetKOP02";          T_max[tpelmeetKOP02]          = 100;  T_type[tpelmeetKOP02]          = TE_type; /* Meetperiode peloton koppeling KOP02 fase KOP02                                          */
    T_code[tpelmaxhiaatKOP02]      = "pelmaxhiaatKOP02";      T_max[tpelmaxhiaatKOP02]      = 50;   T_type[tpelmaxhiaatKOP02]      = TE_type; /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                               */
    T_code[tpelrwKOP02]            = "pelrwKOP02";            T_max[tpelrwKOP02]            = 100;  T_type[tpelrwKOP02]            = TE_type; /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                         */
    T_code[tpelrwmaxKOP02]         = "pelrwmaxKOP02";         T_max[tpelrwmaxKOP02]         = 400;  T_type[tpelrwmaxKOP02]         = TE_type; /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02  */
    T_code[tpelstartrwKOP02]       = "pelstartrwKOP02";       T_max[tpelstartrwKOP02]       = 150;  T_type[tpelstartrwKOP02]       = TE_type; /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                  */
    T_code[tpelaKOP02]             = "pelaKOP02";             T_max[tpelaKOP02]             = 200;  T_type[tpelaKOP02]             = TE_type; /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                         */
    T_code[trgad2403]              = "rgad2403";              T_max[trgad2403]              = 10;   T_type[trgad2403]              = TE_type; /* Richtinggevoelige aanvraag rijtijd fase 24 van 2403 naar 2402                           */
    T_code[trgavd2403]             = "rgavd2403";             T_max[trgavd2403]             = 0;    T_type[trgavd2403]             = TE_type; /* Timer reset richtinggevoelige aanvraag fase 24 van 2403 naar 2402                       */
    T_code[trgrd2403_d2402]        = "rgrd2403_d2402";        T_max[trgrd2403_d2402]        = 10;   T_type[trgrd2403_d2402]        = TE_type; /* Richtinggevoelig verlengen rijtijd fase 24 van 2403 naar 2402                           */
    T_code[trgvd2403_d2402]        = "rgvd2403_d2402";        T_max[trgvd2403_d2402]        = 30;   T_type[trgvd2403_d2402]        = TE_type; /* Richtinggevoelig verlengen hiaattijd fase 24 van 2403 naar 2402                         */
    T_code[tfd0201]                = "fd0201";                T_max[tfd0201]                = 60;   T_type[tfd0201]                = TE_type; /* File meting RoBuGrover fase 02 detector 0201                                            */
    T_code[tfd0202]                = "fd0202";                T_max[tfd0202]                = 60;   T_type[tfd0202]                = TE_type; /* File meting RoBuGrover fase 02 detector 0202                                            */
    T_code[thd0203]                = "hd0203";                T_max[thd0203]                = 10;   T_type[thd0203]                = TE_type; /* RoBuGrover hiaat meting fase 02 detector 0203                                           */
    T_code[thd0204]                = "hd0204";                T_max[thd0204]                = 10;   T_type[thd0204]                = TE_type; /* RoBuGrover hiaat meting fase 02 detector 0204                                           */
    T_code[thd0205]                = "hd0205";                T_max[thd0205]                = 10;   T_type[thd0205]                = TE_type; /* RoBuGrover hiaat meting fase 02 detector 0205                                           */
    T_code[thd0206]                = "hd0206";                T_max[thd0206]                = 10;   T_type[thd0206]                = TE_type; /* RoBuGrover hiaat meting fase 02 detector 0206                                           */
    T_code[tfd0301]                = "fd0301";                T_max[tfd0301]                = 60;   T_type[tfd0301]                = TE_type; /* File meting RoBuGrover fase 03 detector 0301                                            */
    T_code[thd0302]                = "hd0302";                T_max[thd0302]                = 10;   T_type[thd0302]                = TE_type; /* RoBuGrover hiaat meting fase 03 detector 0302                                           */
    T_code[tfd0501]                = "fd0501";                T_max[tfd0501]                = 60;   T_type[tfd0501]                = TE_type; /* File meting RoBuGrover fase 05 detector 0501                                            */
    T_code[thd0502]                = "hd0502";                T_max[thd0502]                = 10;   T_type[thd0502]                = TE_type; /* RoBuGrover hiaat meting fase 05 detector 0502                                           */
    T_code[tfd0801]                = "fd0801";                T_max[tfd0801]                = 60;   T_type[tfd0801]                = TE_type; /* File meting RoBuGrover fase 08 detector 0801                                            */
    T_code[tfd0802]                = "fd0802";                T_max[tfd0802]                = 60;   T_type[tfd0802]                = TE_type; /* File meting RoBuGrover fase 08 detector 0802                                            */
    T_code[thd0803]                = "hd0803";                T_max[thd0803]                = 10;   T_type[thd0803]                = TE_type; /* RoBuGrover hiaat meting fase 08 detector 0803                                           */
    T_code[thd0804]                = "hd0804";                T_max[thd0804]                = 10;   T_type[thd0804]                = TE_type; /* RoBuGrover hiaat meting fase 08 detector 0804                                           */
    T_code[thd0805]                = "hd0805";                T_max[thd0805]                = 10;   T_type[thd0805]                = TE_type; /* RoBuGrover hiaat meting fase 08 detector 0805                                           */
    T_code[thd0806]                = "hd0806";                T_max[thd0806]                = 10;   T_type[thd0806]                = TE_type; /* RoBuGrover hiaat meting fase 08 detector 0806                                           */
    T_code[tfd1101]                = "fd1101";                T_max[tfd1101]                = 60;   T_type[tfd1101]                = TE_type; /* File meting RoBuGrover fase 11 detector 1101                                            */
    T_code[thd1102]                = "hd1102";                T_max[thd1102]                = 10;   T_type[thd1102]                = TE_type; /* RoBuGrover hiaat meting fase 11 detector 1102                                           */
    T_code[thd1103]                = "hd1103";                T_max[thd1103]                = 10;   T_type[thd1103]                = TE_type; /* RoBuGrover hiaat meting fase 11 detector 1103                                           */
    T_code[tfd2201]                = "fd2201";                T_max[tfd2201]                = 60;   T_type[tfd2201]                = TE_type; /* File meting RoBuGrover fase 22 detector 2201                                            */
    T_code[thd2201]                = "hd2201";                T_max[thd2201]                = 10;   T_type[thd2201]                = TE_type; /* RoBuGrover hiaat meting fase 22 detector 2201                                           */
    T_code[tfd2801]                = "fd2801";                T_max[tfd2801]                = 60;   T_type[tfd2801]                = TE_type; /* File meting RoBuGrover fase 28 detector 2801                                            */
    T_code[thd2801]                = "hd2801";                T_max[thd2801]                = 10;   T_type[thd2801]                = TE_type; /* RoBuGrover hiaat meting fase 28 detector 2801                                           */
    T_code[tschoolingreepmaxg33]   = "schoolingreepmaxg33";   T_max[tschoolingreepmaxg33]   = 500;  T_type[tschoolingreepmaxg33]   = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                       */
    T_code[tdbsid3331]             = "dbsid3331";             T_max[tdbsid3331]             = 60;   T_type[tdbsid3331]             = TE_type; /* Bezettijd detector 3331 t.b.v. schoolingreep                                            */
    T_code[tdbsid3332]             = "dbsid3332";             T_max[tdbsid3332]             = 60;   T_type[tdbsid3332]             = TE_type; /* Bezettijd detector 3332 t.b.v. schoolingreep                                            */
    T_code[tschoolingreepmaxg34]   = "schoolingreepmaxg34";   T_max[tschoolingreepmaxg34]   = 500;  T_type[tschoolingreepmaxg34]   = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                       */
    T_code[tdbsid3431]             = "dbsid3431";             T_max[tdbsid3431]             = 60;   T_type[tdbsid3431]             = TE_type; /* Bezettijd detector 3431 t.b.v. schoolingreep                                            */
    T_code[tdbsid3432]             = "dbsid3432";             T_max[tdbsid3432]             = 60;   T_type[tdbsid3432]             = TE_type; /* Bezettijd detector 3432 t.b.v. schoolingreep                                            */
    T_code[tsiexgr33]              = "siexgr33";              T_max[tsiexgr33]              = 999;  T_type[tsiexgr33]              = TE_type; /* Meten duur extra groen bij senioreningreep op fase 33                                   */
    T_code[tdbsiexgrd3331]         = "dbsiexgrd3331";         T_max[tdbsiexgrd3331]         = 30;   T_type[tdbsiexgrd3331]         = TE_type; /* Bezettijd detector 3331 t.b.v. Senioreningreep                                          */
    T_code[tdbsiexgrd3332]         = "dbsiexgrd3332";         T_max[tdbsiexgrd3332]         = 30;   T_type[tdbsiexgrd3332]         = TE_type; /* Bezettijd detector 3332 t.b.v. Senioreningreep                                          */
    T_code[tsiexgr34]              = "siexgr34";              T_max[tsiexgr34]              = 999;  T_type[tsiexgr34]              = TE_type; /* Meten duur extra groen bij senioreningreep op fase 34                                   */
    T_code[tdbsiexgrd3431]         = "dbsiexgrd3431";         T_max[tdbsiexgrd3431]         = 30;   T_type[tdbsiexgrd3431]         = TE_type; /* Bezettijd detector 3431 t.b.v. Senioreningreep                                          */
    T_code[tdbsiexgrd3432]         = "dbsiexgrd3432";         T_max[tdbsiexgrd3432]         = 30;   T_type[tdbsiexgrd3432]         = TE_type; /* Bezettijd detector 3432 t.b.v. Senioreningreep                                          */
    T_code[tvamax62]               = "vamax62";               T_max[tvamax62]               = 100;  T_type[tvamax62]               = TE_type; /* Maximale tijd VA ontruimen na einde geel fase 62                                        */
    T_code[tva6209_d6201]          = "va6209_d6201";          T_max[tva6209_d6201]          = 0;    T_type[tva6209_d6201]          = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                      */
    T_code[tva6211_d6201]          = "va6211_d6201";          T_max[tva6211_d6201]          = 10;   T_type[tva6211_d6201]          = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                      */
    T_code[tva6226_d6201]          = "va6226_d6201";          T_max[tva6226_d6201]          = 20;   T_type[tva6226_d6201]          = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                      */
    T_code[tvgmax02]               = "vgmax02";               T_max[tvgmax02]               = 80;   T_type[tvgmax02]               = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    T_code[tvgvolg0207]            = "vgvolg0207";            T_max[tvgvolg0207]            = 25;   T_type[tvgvolg0207]            = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0207 van fase 02 */
    T_code[tvghiaat0207]           = "vghiaat0207";           T_max[tvghiaat0207]           = 20;   T_type[tvghiaat0207]           = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 0207 van fase 02                    */
    T_code[tvgvolg0208]            = "vgvolg0208";            T_max[tvgvolg0208]            = 25;   T_type[tvgvolg0208]            = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0208 van fase 02 */
    T_code[tvghiaat0208]           = "vghiaat0208";           T_max[tvghiaat0208]           = 20;   T_type[tvghiaat0208]           = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 0208 van fase 02                    */
    T_code[tvgmax08]               = "vgmax08";               T_max[tvgmax08]               = 80;   T_type[tvgmax08]               = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    T_code[tvgvolg0807]            = "vgvolg0807";            T_max[tvgvolg0807]            = 25;   T_type[tvgvolg0807]            = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0807 van fase 08 */
    T_code[tvghiaat0807]           = "vghiaat0807";           T_max[tvghiaat0807]           = 20;   T_type[tvghiaat0807]           = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 0807 van fase 08                    */
    T_code[tvgvolg0808]            = "vgvolg0808";            T_max[tvgvolg0808]            = 25;   T_type[tvgvolg0808]            = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0808 van fase 08 */
    T_code[tvghiaat0808]           = "vghiaat0808";           T_max[tvghiaat0808]           = 20;   T_type[tvghiaat0808]           = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 0808 van fase 08                    */
    T_code[tvgmax11]               = "vgmax11";               T_max[tvgmax11]               = 80;   T_type[tvgmax11]               = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    T_code[tvgvolg1104]            = "vgvolg1104";            T_max[tvgvolg1104]            = 25;   T_type[tvgvolg1104]            = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 1104 van fase 11 */
    T_code[tvghiaat1104]           = "vghiaat1104";           T_max[tvghiaat1104]           = 20;   T_type[tvghiaat1104]           = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 1104 van fase 11                    */
    T_code[tvs2205]                = "vs2205";                T_max[tvs2205]                = 20;   T_type[tvs2205]                = TE_type; /* Voorstarttijd fase 22 op fase 05                                                        */
    T_code[tvs3205]                = "vs3205";                T_max[tvs3205]                = 20;   T_type[tvs3205]                = TE_type; /* Voorstarttijd fase 32 op fase 05                                                        */
    T_code[tlr2611]                = "lr2611";                T_max[tlr2611]                = 10;   T_type[tlr2611]                = TE_type; /* Late release tijd fase 26 na fase 11                                                    */
    T_code[tlr6202]                = "lr6202";                T_max[tlr6202]                = 60;   T_type[tlr6202]                = TE_type; /* Late release tijd fase 62 na fase 02                                                    */
    T_code[tlr6205]                = "lr6205";                T_max[tlr6205]                = 80;   T_type[tlr6205]                = TE_type; /* Late release tijd fase 62 na fase 05                                                    */
    T_code[tlr6808]                = "lr6808";                T_max[tlr6808]                = 60;   T_type[tlr6808]                = TE_type; /* Late release tijd fase 68 na fase 08                                                    */
    T_code[tlr6811]                = "lr6811";                T_max[tlr6811]                = 80;   T_type[tlr6811]                = TE_type; /* Late release tijd fase 68 na fase 11                                                    */
    T_code[tlr2122]                = "lr2122";                T_max[tlr2122]                = 40;   T_type[tlr2122]                = TE_type; /* Late release tijd fase 21 na fase 22                                                    */
    T_code[tlr8182]                = "lr8182";                T_max[tlr8182]                = 50;   T_type[tlr8182]                = TE_type; /* Late release tijd fase 81 na fase 82                                                    */
    T_code[til3231]                = "il3231";                T_max[til3231]                = 80;   T_type[til3231]                = TE_type; /* Inloop tijd fase 32 naar fase 31                                                        */
    T_code[til3132]                = "il3132";                T_max[til3132]                = 50;   T_type[til3132]                = TE_type; /* Inloop tijd fase 31 naar fase 32                                                        */
    T_code[til3433]                = "il3433";                T_max[til3433]                = 50;   T_type[til3433]                = TE_type; /* Inloop tijd fase 34 naar fase 33                                                        */
    T_code[til3334]                = "il3334";                T_max[til3334]                = 50;   T_type[til3334]                = TE_type; /* Inloop tijd fase 33 naar fase 34                                                        */
    T_code[tfo0522]                = "fo0522";                T_max[tfo0522]                = 40;   T_type[tfo0522]                = TE_type; /* Fictieve ontruimingstijd van 05 naar fase 22                                            */
    T_code[tfo0532]                = "fo0532";                T_max[tfo0532]                = 50;   T_type[tfo0532]                = TE_type; /* Fictieve ontruimingstijd van 05 naar fase 32                                            */
    T_code[tfo1126]                = "fo1126";                T_max[tfo1126]                = 30;   T_type[tfo1126]                = TE_type; /* Fictieve ontruimingstijd van 11 naar fase 26                                            */

/* teller elementen */
/* ---------------- */
    C_code[cvc02]          = "vc02";          C_max[cvc02]          = 999; C_type[cvc02]          = CT_type; /* Bijhouden prio inmeldingen fase 02 type Bus             */
    C_code[cvc08]          = "vc08";          C_max[cvc08]          = 999; C_type[cvc08]          = CT_type; /* Bijhouden prio inmeldingen fase 08 type Bus             */
    C_code[cvc11]          = "vc11";          C_max[cvc11]          = 999; C_type[cvc11]          = CT_type; /* Bijhouden prio inmeldingen fase 11 type Bus             */
    C_code[cftscyc22fiets] = "ftscyc22fiets"; C_max[cftscyc22fiets] = 999;                                   /* Bijhouden realisaties tbv peloton prio voor fase 22     */
    C_code[cvc22]          = "vc22";          C_max[cvc22]          = 999; C_type[cvc22]          = CT_type; /* Bijhouden prio inmeldingen fase 22 type Fiets           */
    C_code[cftscyc24fiets] = "ftscyc24fiets"; C_max[cftscyc24fiets] = 999;                                   /* Bijhouden realisaties tbv peloton prio voor fase 24     */
    C_code[cftsvtg24fiets] = "ftsvtg24fiets"; C_max[cftsvtg24fiets] = 999;                                   /* Bijhouden aantal fietsers tbv peloton prio voor fase 24 */
    C_code[cvc24]          = "vc24";          C_max[cvc24]          = 999; C_type[cvc24]          = CT_type; /* Bijhouden prio inmeldingen fase 24 type Fiets           */
    C_code[cvc61]          = "vc61";          C_max[cvc61]          = 999; C_type[cvc61]          = CT_type; /* Bijhouden prio inmeldingen fase 61 type Bus             */
    C_code[cftscyc84fiets] = "ftscyc84fiets"; C_max[cftscyc84fiets] = 999;                                   /* Bijhouden realisaties tbv peloton prio voor fase 84     */
    C_code[cvc84]          = "vc84";          C_max[cvc84]          = 999; C_type[cvc84]          = CT_type; /* Bijhouden prio inmeldingen fase 84 type Fiets           */
    C_code[cvchd02]        = "vchd02";        C_max[cvchd02]        = 999; C_type[cvchd02]        = CT_type; /* Bijhouden prio inmeldingen fase 02                      */
    C_code[cvchd03]        = "vchd03";        C_max[cvchd03]        = 999; C_type[cvchd03]        = CT_type; /* Bijhouden prio inmeldingen fase 03                      */
    C_code[cvchd05]        = "vchd05";        C_max[cvchd05]        = 999; C_type[cvchd05]        = CT_type; /* Bijhouden prio inmeldingen fase 05                      */
    C_code[cvchd08]        = "vchd08";        C_max[cvchd08]        = 999; C_type[cvchd08]        = CT_type; /* Bijhouden prio inmeldingen fase 08                      */
    C_code[cvchd09]        = "vchd09";        C_max[cvchd09]        = 999; C_type[cvchd09]        = CT_type; /* Bijhouden prio inmeldingen fase 09                      */
    C_code[cvchd11]        = "vchd11";        C_max[cvchd11]        = 999; C_type[cvchd11]        = CT_type; /* Bijhouden prio inmeldingen fase 11                      */
    C_code[cvchd61]        = "vchd61";        C_max[cvchd61]        = 999; C_type[cvchd61]        = CT_type; /* Bijhouden prio inmeldingen fase 61                      */
    C_code[cvchd62]        = "vchd62";        C_max[cvchd62]        = 999; C_type[cvchd62]        = CT_type; /* Bijhouden prio inmeldingen fase 62                      */
    C_code[cvchd67]        = "vchd67";        C_max[cvchd67]        = 999; C_type[cvchd67]        = CT_type; /* Bijhouden prio inmeldingen fase 67                      */
    C_code[cvchd68]        = "vchd68";        C_max[cvchd68]        = 999; C_type[cvchd68]        = CT_type; /* Bijhouden prio inmeldingen fase 68                      */

/* schakelaars */
/* ----------- */
    SCH_code[schdynhiaat08]        = "dynhiaat08";        SCH[schdynhiaat08]        = 1;                                    /* Toepassen dynamisch hiaat bij fase 08                                */
    SCH_code[schopdrempelen08]     = "opdrempelen08";     SCH[schopdrempelen08]     = 1;                                    /* Opdrempelen toepassen voor fase 08                                   */
    SCH_code[schedkop_08]          = "edkop_08";          SCH[schedkop_08]          = 1;                                    /* Start timers dynamische hiaat fase 08 op einde detectie koplus       */
    SCH_code[schdvakd0201]         = "dvakd0201";         SCH[schdvakd0201]         = 1;                                    /* Aanvraag fase 02 bij storing op detector 0201                        */
    SCH_code[schdvakd0202]         = "dvakd0202";         SCH[schdvakd0202]         = 1;                                    /* Aanvraag fase 02 bij storing op detector 0202                        */
    SCH_code[schdvakd0301]         = "dvakd0301";         SCH[schdvakd0301]         = 1;                                    /* Aanvraag fase 03 bij storing op detector 0301                        */
    SCH_code[schdvakd3131]         = "dvakd3131";         SCH[schdvakd3131]         = 1;                                    /* Aanvraag fase 31 bij storing op detector 3131                        */
    SCH_code[schdvakd3132]         = "dvakd3132";         SCH[schdvakd3132]         = 1;                                    /* Aanvraag fase 31 bij storing op detector 3132                        */
    SCH_code[schfile68af]          = "file68af";          SCH[schfile68af]          = 1;                                    /* File ingreep 68af toepassen                                          */
    SCH_code[schfiledoseren68af]   = "filedoseren68af";   SCH[schfiledoseren68af]   = 1;                                    /* Toepassen doseerpercentages voor fileingreep 68af                    */
    SCH_code[schfile68afparstrook] = "file68afparstrook"; SCH[schfile68afparstrook] = 1;                                    /* Parallele file meldingen per strook file ingreep 68af                */
    SCH_code[schbmfix]             = "bmfix";             SCH[schbmfix]             = 1;                                    /* Bijkomen tijdens fixatie mogelijk                                    */
    SCH_code[schma0522]            = "ma0522";            SCH[schma0522]            = 1;                                    /* Meeaanvraag van 05 naar 22 actief                                    */
    SCH_code[schma0531]            = "ma0531";            SCH[schma0531]            = 1;                                    /* Meeaanvraag van 05 naar 31 actief                                    */
    SCH_code[schma0532]            = "ma0532";            SCH[schma0532]            = 1;                                    /* Meeaanvraag van 05 naar 32 actief                                    */
    SCH_code[schma0562]            = "ma0562";            SCH[schma0562]            = 1;                                    /* Meeaanvraag van 05 naar 62 actief                                    */
    SCH_code[schma1126]            = "ma1126";            SCH[schma1126]            = 1;                                    /* Meeaanvraag van 11 naar 26 actief                                    */
    SCH_code[schma1168]            = "ma1168";            SCH[schma1168]            = 1;                                    /* Meeaanvraag van 11 naar 68 actief                                    */
    SCH_code[schma2221]            = "ma2221";            SCH[schma2221]            = 1;                                    /* Meeaanvraag van 22 naar 21 actief                                    */
    SCH_code[schma2484]            = "ma2484";            SCH[schma2484]            = 1;                                    /* Meeaanvraag van 24 naar 84 actief                                    */
    SCH_code[schma3122]            = "ma3122";            SCH[schma3122]            = 1;                                    /* Meeaanvraag van 31 naar 22 actief                                    */
    SCH_code[schma3222]            = "ma3222";            SCH[schma3222]            = 1;                                    /* Meeaanvraag van 32 naar 22 actief                                    */
    SCH_code[schma3324]            = "ma3324";            SCH[schma3324]            = 1;                                    /* Meeaanvraag van 33 naar 24 actief                                    */
    SCH_code[schma3384]            = "ma3384";            SCH[schma3384]            = 1;                                    /* Meeaanvraag van 33 naar 84 actief                                    */
    SCH_code[schma3424]            = "ma3424";            SCH[schma3424]            = 1;                                    /* Meeaanvraag van 34 naar 24 actief                                    */
    SCH_code[schma3484]            = "ma3484";            SCH[schma3484]            = 1;                                    /* Meeaanvraag van 34 naar 84 actief                                    */
    SCH_code[schma8424]            = "ma8424";            SCH[schma8424]            = 1;                                    /* Meeaanvraag van 84 naar 24 actief                                    */
    SCH_code[schmv02]              = "mv02";              SCH[schmv02]              = 1;                                    /* Meeverlengen fase 02                                                 */
    SCH_code[schmv03]              = "mv03";              SCH[schmv03]              = 1;                                    /* Meeverlengen fase 03                                                 */
    SCH_code[schmv05]              = "mv05";              SCH[schmv05]              = 1;                                    /* Meeverlengen fase 05                                                 */
    SCH_code[schmv08]              = "mv08";              SCH[schmv08]              = 1;                                    /* Meeverlengen fase 08                                                 */
    SCH_code[schmv09]              = "mv09";              SCH[schmv09]              = 1;                                    /* Meeverlengen fase 09                                                 */
    SCH_code[schmv11]              = "mv11";              SCH[schmv11]              = 1;                                    /* Meeverlengen fase 11                                                 */
    SCH_code[schmv21]              = "mv21";              SCH[schmv21]              = 1;                                    /* Meeverlengen fase 21                                                 */
    SCH_code[schmv22]              = "mv22";              SCH[schmv22]              = 1;                                    /* Meeverlengen fase 22                                                 */
    SCH_code[schmv24]              = "mv24";              SCH[schmv24]              = 1;                                    /* Meeverlengen fase 24                                                 */
    SCH_code[schmv26]              = "mv26";              SCH[schmv26]              = 1;                                    /* Meeverlengen fase 26                                                 */
    SCH_code[schmv28]              = "mv28";              SCH[schmv28]              = 1;                                    /* Meeverlengen fase 28                                                 */
    SCH_code[schmv31]              = "mv31";              SCH[schmv31]              = 1;                                    /* Meeverlengen fase 31                                                 */
    SCH_code[schmv32]              = "mv32";              SCH[schmv32]              = 1;                                    /* Meeverlengen fase 32                                                 */
    SCH_code[schhardmv3205]        = "hardmv3205";        SCH[schhardmv3205]        = 0;                                    /* Hard meeverlengen fase 32 met fase 05                                */
    SCH_code[schmv33]              = "mv33";              SCH[schmv33]              = 1;                                    /* Meeverlengen fase 33                                                 */
    SCH_code[schmv34]              = "mv34";              SCH[schmv34]              = 1;                                    /* Meeverlengen fase 34                                                 */
    SCH_code[schmv38]              = "mv38";              SCH[schmv38]              = 1;                                    /* Meeverlengen fase 38                                                 */
    SCH_code[schmv61]              = "mv61";              SCH[schmv61]              = 1;                                    /* Meeverlengen fase 61                                                 */
    SCH_code[schmv62]              = "mv62";              SCH[schmv62]              = 1;                                    /* Meeverlengen fase 62                                                 */
    SCH_code[schmv67]              = "mv67";              SCH[schmv67]              = 1;                                    /* Meeverlengen fase 67                                                 */
    SCH_code[schmv68]              = "mv68";              SCH[schmv68]              = 1;                                    /* Meeverlengen fase 68                                                 */
    SCH_code[schmv81]              = "mv81";              SCH[schmv81]              = 1;                                    /* Meeverlengen fase 81                                                 */
    SCH_code[schmv82]              = "mv82";              SCH[schmv82]              = 1;                                    /* Meeverlengen fase 82                                                 */
    SCH_code[schmv84]              = "mv84";              SCH[schmv84]              = 1;                                    /* Meeverlengen fase 84                                                 */
    SCH_code[schmlprm]             = "mlprm";             SCH[schmlprm]             = 0;                                    /* Toepassen parametriseerbare modulestructuur                          */
    SCH_code[schcovuber]           = "covuber";           SCH[schcovuber]           = 0;                                    /* Weergeven wijzigingen PRIO_teller via CIF_UBER                       */
    SCH_code[schcheckdstype]       = "checkdstype";       SCH[schcheckdstype]       = 0;                                    /* Check type DSI bericht bij VECOM                                     */
    SCH_code[schprioin02kar]       = "prioin02kar";       SCH[schprioin02kar]       = 1;                                    /* Inmelden 02 via Bus toestaan                                         */
    SCH_code[schprioin02sd0242SD]  = "prioin02sd0242SD";  SCH[schprioin02sd0242SD]  = 1;                                    /* Inmelden 02 via Bus toestaan                                         */
    SCH_code[schpriouit02kar]      = "priouit02kar";      SCH[schpriouit02kar]      = 1;                                    /* Uitmelden 02 via Bus toestaan                                        */
    SCH_code[schpriouit02sd0241SD] = "priouit02sd0241SD"; SCH[schpriouit02sd0241SD] = 1;                                    /* Uitmelden 02 via Bus toestaan                                        */
    SCH_code[schupinagb02]         = "upinagb02";         SCH[schupinagb02]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02        */
    SCH_code[schprioin08kar]       = "prioin08kar";       SCH[schprioin08kar]       = 1;                                    /* Inmelden 08 via Bus toestaan                                         */
    SCH_code[schprioin08sd0842SD]  = "prioin08sd0842SD";  SCH[schprioin08sd0842SD]  = 1;                                    /* Inmelden 08 via Bus toestaan                                         */
    SCH_code[schpriouit08kar]      = "priouit08kar";      SCH[schpriouit08kar]      = 1;                                    /* Uitmelden 08 via Bus toestaan                                        */
    SCH_code[schpriouit08sd0841SD] = "priouit08sd0841SD"; SCH[schpriouit08sd0841SD] = 1;                                    /* Uitmelden 08 via Bus toestaan                                        */
    SCH_code[schupinagb08]         = "upinagb08";         SCH[schupinagb08]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08        */
    SCH_code[schprioin11kar]       = "prioin11kar";       SCH[schprioin11kar]       = 1;                                    /* Inmelden 11 via Bus toestaan                                         */
    SCH_code[schprioin11sd1142SD]  = "prioin11sd1142SD";  SCH[schprioin11sd1142SD]  = 1;                                    /* Inmelden 11 via Bus toestaan                                         */
    SCH_code[schpriouit11kar]      = "priouit11kar";      SCH[schpriouit11kar]      = 1;                                    /* Uitmelden 11 via Bus toestaan                                        */
    SCH_code[schpriouit11sd1141SD] = "priouit11sd1141SD"; SCH[schpriouit11sd1141SD] = 1;                                    /* Uitmelden 11 via Bus toestaan                                        */
    SCH_code[schupinagb11]         = "upinagb11";         SCH[schupinagb11]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11        */
    SCH_code[schprioin22fiets]     = "prioin22fiets";     SCH[schprioin22fiets]     = 1;                                    /* Inmelden 22 via Fiets toestaan                                       */
    SCH_code[schpriouit22fiets]    = "priouit22fiets";    SCH[schpriouit22fiets]    = 1;                                    /* Uitmelden 22 via Fiets toestaan                                      */
    SCH_code[schupinagb22]         = "upinagb22";         SCH[schupinagb22]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22        */
    SCH_code[schprioin24fiets2403] = "prioin24fiets2403"; SCH[schprioin24fiets2403] = 1;                                    /* Inmelden 24 via Fiets toestaan                                       */
    SCH_code[schpriouit24fiets]    = "priouit24fiets";    SCH[schpriouit24fiets]    = 1;                                    /* Uitmelden 24 via Fiets toestaan                                      */
    SCH_code[schupinagb24]         = "upinagb24";         SCH[schupinagb24]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 24        */
    SCH_code[schprioin61kar]       = "prioin61kar";       SCH[schprioin61kar]       = 1;                                    /* Inmelden 61 via Bus toestaan                                         */
    SCH_code[schprioin61sd0241SD]  = "prioin61sd0241SD";  SCH[schprioin61sd0241SD]  = 1;                                    /* Inmelden 61 via Bus toestaan                                         */
    SCH_code[schpriouit61kar]      = "priouit61kar";      SCH[schpriouit61kar]      = 1;                                    /* Uitmelden 61 via Bus toestaan                                        */
    SCH_code[schpriouit61sd6141SD] = "priouit61sd6141SD"; SCH[schpriouit61sd6141SD] = 1;                                    /* Uitmelden 61 via Bus toestaan                                        */
    SCH_code[schupinagb61]         = "upinagb61";         SCH[schupinagb61]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61        */
    SCH_code[schprioin84fiets]     = "prioin84fiets";     SCH[schprioin84fiets]     = 1;                                    /* Inmelden 84 via Fiets toestaan                                       */
    SCH_code[schpriouit84fiets]    = "priouit84fiets";    SCH[schpriouit84fiets]    = 1;                                    /* Uitmelden 84 via Fiets toestaan                                      */
    SCH_code[schupinagb84]         = "upinagb84";         SCH[schupinagb84]         = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 84        */
    SCH_code[schupinagbhd02]       = "upinagbhd02";       SCH[schupinagbhd02]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02        */
    SCH_code[schhdin02kar]         = "hdin02kar";         SCH[schhdin02kar]         = 1;                                    /* Inmelden 02 via KAR HD toestaan                                      */
    SCH_code[schhduit02kar]        = "hduit02kar";        SCH[schhduit02kar]        = 1;                                    /* Uitmelden 02 via KAR HD toestaan                                     */
    SCH_code[schchecksirene02]     = "checksirene02";     SCH[schchecksirene02]     = 1;                                    /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd03]       = "upinagbhd03";       SCH[schupinagbhd03]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03        */
    SCH_code[schhdin03kar]         = "hdin03kar";         SCH[schhdin03kar]         = 1;                                    /* Inmelden 03 via KAR HD toestaan                                      */
    SCH_code[schhduit03kar]        = "hduit03kar";        SCH[schhduit03kar]        = 1;                                    /* Uitmelden 03 via KAR HD toestaan                                     */
    SCH_code[schchecksirene03]     = "checksirene03";     SCH[schchecksirene03]     = 1;                                    /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd05]       = "upinagbhd05";       SCH[schupinagbhd05]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05        */
    SCH_code[schhdin05kar]         = "hdin05kar";         SCH[schhdin05kar]         = 1;                                    /* Inmelden 05 via KAR HD toestaan                                      */
    SCH_code[schhduit05kar]        = "hduit05kar";        SCH[schhduit05kar]        = 1;                                    /* Uitmelden 05 via KAR HD toestaan                                     */
    SCH_code[schchecksirene05]     = "checksirene05";     SCH[schchecksirene05]     = 1;                                    /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd08]       = "upinagbhd08";       SCH[schupinagbhd08]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08        */
    SCH_code[schhdin08kar]         = "hdin08kar";         SCH[schhdin08kar]         = 1;                                    /* Inmelden 08 via KAR HD toestaan                                      */
    SCH_code[schhduit08kar]        = "hduit08kar";        SCH[schhduit08kar]        = 1;                                    /* Uitmelden 08 via KAR HD toestaan                                     */
    SCH_code[schchecksirene08]     = "checksirene08";     SCH[schchecksirene08]     = 1;                                    /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd09]       = "upinagbhd09";       SCH[schupinagbhd09]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09        */
    SCH_code[schhdin09kar]         = "hdin09kar";         SCH[schhdin09kar]         = 1;                                    /* Inmelden 09 via KAR HD toestaan                                      */
    SCH_code[schhduit09kar]        = "hduit09kar";        SCH[schhduit09kar]        = 1;                                    /* Uitmelden 09 via KAR HD toestaan                                     */
    SCH_code[schchecksirene09]     = "checksirene09";     SCH[schchecksirene09]     = 1;                                    /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd11]       = "upinagbhd11";       SCH[schupinagbhd11]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11        */
    SCH_code[schhdin11kar]         = "hdin11kar";         SCH[schhdin11kar]         = 1;                                    /* Inmelden 11 via KAR HD toestaan                                      */
    SCH_code[schhduit11kar]        = "hduit11kar";        SCH[schhduit11kar]        = 1;                                    /* Uitmelden 11 via KAR HD toestaan                                     */
    SCH_code[schchecksirene11]     = "checksirene11";     SCH[schchecksirene11]     = 1;                                    /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd61]       = "upinagbhd61";       SCH[schupinagbhd61]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61        */
    SCH_code[schhdin61kar]         = "hdin61kar";         SCH[schhdin61kar]         = 1;                                    /* Inmelden 61 via KAR HD toestaan                                      */
    SCH_code[schhduit61kar]        = "hduit61kar";        SCH[schhduit61kar]        = 1;                                    /* Uitmelden 61 via KAR HD toestaan                                     */
    SCH_code[schchecksirene61]     = "checksirene61";     SCH[schchecksirene61]     = 1;                                    /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd62]       = "upinagbhd62";       SCH[schupinagbhd62]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62        */
    SCH_code[schhdin62kar]         = "hdin62kar";         SCH[schhdin62kar]         = 1;                                    /* Inmelden 62 via KAR HD toestaan                                      */
    SCH_code[schhduit62kar]        = "hduit62kar";        SCH[schhduit62kar]        = 1;                                    /* Uitmelden 62 via KAR HD toestaan                                     */
    SCH_code[schchecksirene62]     = "checksirene62";     SCH[schchecksirene62]     = 1;                                    /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd67]       = "upinagbhd67";       SCH[schupinagbhd67]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67        */
    SCH_code[schhdin67kar]         = "hdin67kar";         SCH[schhdin67kar]         = 1;                                    /* Inmelden 67 via KAR HD toestaan                                      */
    SCH_code[schhduit67kar]        = "hduit67kar";        SCH[schhduit67kar]        = 1;                                    /* Uitmelden 67 via KAR HD toestaan                                     */
    SCH_code[schchecksirene67]     = "checksirene67";     SCH[schchecksirene67]     = 1;                                    /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR               */
    SCH_code[schupinagbhd68]       = "upinagbhd68";       SCH[schupinagbhd68]       = 0;                                    /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68        */
    SCH_code[schhdin68kar]         = "hdin68kar";         SCH[schhdin68kar]         = 1;                                    /* Inmelden 68 via KAR HD toestaan                                      */
    SCH_code[schhduit68kar]        = "hduit68kar";        SCH[schhduit68kar]        = 1;                                    /* Uitmelden 68 via KAR HD toestaan                                     */
    SCH_code[schchecksirene68]     = "checksirene68";     SCH[schchecksirene68]     = 1;                                    /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR               */
    SCH_code[schpelrwKOP02]        = "pelrwKOP02";        SCH[schpelrwKOP02]        = 1;                                    /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02 */
    SCH_code[schpelmkKOP02]        = "pelmkKOP02";        SCH[schpelmkKOP02]        = 1;                                    /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02     */
    SCH_code[schpelaKOP02]         = "pelaKOP02";         SCH[schpelaKOP02]         = 1;                                    /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02          */
    SCH_code[schpkuKOP68_uit68]    = "pkuKOP68_uit68";    SCH[schpkuKOP68_uit68]    = 1;                                    /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit */
    SCH_code[schrisgeencheckopsg]  = "risgeencheckopsg";  SCH[schrisgeencheckopsg]  = 0;                                    /* Niet checken op signaalgroep bij RIS aanvragen en verlengen          */
    SCH_code[schrisaanvraag]       = "risaanvraag";       SCH[schrisaanvraag]       = 1;                                    /* Globaal in of uitschakelen aanvragen via RIS                         */
    SCH_code[schrisverlengen]      = "risverlengen";      SCH[schrisverlengen]      = 1;                                    /* Globaal in of uitschakelen verlengen via RIS                         */
    SCH_code[schrgadd2403]         = "rgadd2403";         SCH[schrgadd2403]         = 1;                                    /* Type richtinggevoelige aanvraag fase 24 van 2403 naar 2402           */
    SCH_code[schrgad2403]          = "rgad2403";          SCH[schrgad2403]          = 1;                                    /* Richtinggevoelig aanvragen fase 24 aan/uit van 2403 naar 2402        */
    SCH_code[schrgvd2403]          = "rgvd2403";          SCH[schrgvd2403]          = 1;                                    /* Richtinggevoelig verlengen fase 24 aan/uit van 2403 naar 2402        */
    SCH_code[schrgv]               = "rgv";               SCH[schrgv]               = 0;                                    /* RoBuGrover aan of uit                                                */
    SCH_code[schrgv_snel]          = "rgv_snel";          SCH[schrgv_snel]          = 0;                                    /* RoBuGrover versneld ophogen of verlagen                              */
    SCH_code[schschoolingreep33]   = "schoolingreep33";   SCH[schschoolingreep33]   = 0;                                    /* Schoolingreep aan of uit voor fase 33                                */
    SCH_code[schschoolingreep34]   = "schoolingreep34";   SCH[schschoolingreep34]   = 0;                                    /* Schoolingreep aan of uit voor fase 34                                */
    SCH_code[schsi33]              = "si33";              SCH[schsi33]              = 0;                                    /* Senioreningreep aan of uit voor fase 33                              */
    SCH_code[schsi34]              = "si34";              SCH[schsi34]              = 0;                                    /* Senioreningreep aan of uit voor fase 34                              */
    SCH_code[schca02]              = "ca02";              SCH[schca02]              = 0;                                    /* Cyclische aanvraag fase 02                                           */
    SCH_code[schca03]              = "ca03";              SCH[schca03]              = 0;                                    /* Cyclische aanvraag fase 03                                           */
    SCH_code[schca05]              = "ca05";              SCH[schca05]              = 0;                                    /* Cyclische aanvraag fase 05                                           */
    SCH_code[schca08]              = "ca08";              SCH[schca08]              = 0;                                    /* Cyclische aanvraag fase 08                                           */
    SCH_code[schca09]              = "ca09";              SCH[schca09]              = 0;                                    /* Cyclische aanvraag fase 09                                           */
    SCH_code[schca11]              = "ca11";              SCH[schca11]              = 0;                                    /* Cyclische aanvraag fase 11                                           */
    SCH_code[schca21]              = "ca21";              SCH[schca21]              = 0;                                    /* Cyclische aanvraag fase 21                                           */
    SCH_code[schca22]              = "ca22";              SCH[schca22]              = 0;                                    /* Cyclische aanvraag fase 22                                           */
    SCH_code[schca24]              = "ca24";              SCH[schca24]              = 0;                                    /* Cyclische aanvraag fase 24                                           */
    SCH_code[schca26]              = "ca26";              SCH[schca26]              = 0;                                    /* Cyclische aanvraag fase 26                                           */
    SCH_code[schca28]              = "ca28";              SCH[schca28]              = 0;                                    /* Cyclische aanvraag fase 28                                           */
    SCH_code[schca31]              = "ca31";              SCH[schca31]              = 0;                                    /* Cyclische aanvraag fase 31                                           */
    SCH_code[schca32]              = "ca32";              SCH[schca32]              = 0;                                    /* Cyclische aanvraag fase 32                                           */
    SCH_code[schca33]              = "ca33";              SCH[schca33]              = 0;                                    /* Cyclische aanvraag fase 33                                           */
    SCH_code[schca34]              = "ca34";              SCH[schca34]              = 0;                                    /* Cyclische aanvraag fase 34                                           */
    SCH_code[schca38]              = "ca38";              SCH[schca38]              = 0;                                    /* Cyclische aanvraag fase 38                                           */
    SCH_code[schca61]              = "ca61";              SCH[schca61]              = 0;                                    /* Cyclische aanvraag fase 61                                           */
    SCH_code[schca62]              = "ca62";              SCH[schca62]              = 0;                                    /* Cyclische aanvraag fase 62                                           */
    SCH_code[schca67]              = "ca67";              SCH[schca67]              = 0;                                    /* Cyclische aanvraag fase 67                                           */
    SCH_code[schca68]              = "ca68";              SCH[schca68]              = 0;                                    /* Cyclische aanvraag fase 68                                           */
    SCH_code[schca81]              = "ca81";              SCH[schca81]              = 0;                                    /* Cyclische aanvraag fase 81                                           */
    SCH_code[schca82]              = "ca82";              SCH[schca82]              = 0;                                    /* Cyclische aanvraag fase 82                                           */
    SCH_code[schca84]              = "ca84";              SCH[schca84]              = 0;                                    /* Cyclische aanvraag fase 84                                           */
    SCH_code[schvg0207]            = "vg0207";            SCH[schvg0207]            = 0;                                    /* Veiligheidsgroen detector 0207 fase 02                               */
    SCH_code[schvg0208]            = "vg0208";            SCH[schvg0208]            = 0;                                    /* Veiligheidsgroen detector 0208 fase 02                               */
    SCH_code[schvg0807]            = "vg0807";            SCH[schvg0807]            = 0;                                    /* Veiligheidsgroen detector 0807 fase 08                               */
    SCH_code[schvg0808]            = "vg0808";            SCH[schvg0808]            = 0;                                    /* Veiligheidsgroen detector 0808 fase 08                               */
    SCH_code[schvg1104]            = "vg1104";            SCH[schvg1104]            = 0;                                    /* Veiligheidsgroen detector 1104 fase 11                               */
    SCH_code[schaltg02]            = "altg02";            SCH[schaltg02]            = 1;                                    /* Alternatieve realisatie toestaan fase 02                             */
    SCH_code[schaltg03]            = "altg03";            SCH[schaltg03]            = 1;                                    /* Alternatieve realisatie toestaan fase 03                             */
    SCH_code[schaltg05]            = "altg05";            SCH[schaltg05]            = 1;                                    /* Alternatieve realisatie toestaan fase 05                             */
    SCH_code[schaltg08]            = "altg08";            SCH[schaltg08]            = 1;                                    /* Alternatieve realisatie toestaan fase 08                             */
    SCH_code[schaltg09]            = "altg09";            SCH[schaltg09]            = 1;                                    /* Alternatieve realisatie toestaan fase 09                             */
    SCH_code[schaltg11]            = "altg11";            SCH[schaltg11]            = 1;                                    /* Alternatieve realisatie toestaan fase 11                             */
    SCH_code[schaltg21]            = "altg21";            SCH[schaltg21]            = 1;                                    /* Alternatieve realisatie toestaan fase 21                             */
    SCH_code[schaltg22]            = "altg22";            SCH[schaltg22]            = 1;                                    /* Alternatieve realisatie toestaan fase 22                             */
    SCH_code[schaltg24]            = "altg24";            SCH[schaltg24]            = 1;                                    /* Alternatieve realisatie toestaan fase 24                             */
    SCH_code[schaltg26]            = "altg26";            SCH[schaltg26]            = 1;                                    /* Alternatieve realisatie toestaan fase 26                             */
    SCH_code[schaltg28]            = "altg28";            SCH[schaltg28]            = 1;                                    /* Alternatieve realisatie toestaan fase 28                             */
    SCH_code[schaltg31]            = "altg31";            SCH[schaltg31]            = 1;                                    /* Alternatieve realisatie toestaan fase 31                             */
    SCH_code[schaltg32]            = "altg32";            SCH[schaltg32]            = 1;                                    /* Alternatieve realisatie toestaan fase 32                             */
    SCH_code[schaltg33]            = "altg33";            SCH[schaltg33]            = 1;                                    /* Alternatieve realisatie toestaan fase 33                             */
    SCH_code[schaltg34]            = "altg34";            SCH[schaltg34]            = 1;                                    /* Alternatieve realisatie toestaan fase 34                             */
    SCH_code[schaltg38]            = "altg38";            SCH[schaltg38]            = 1;                                    /* Alternatieve realisatie toestaan fase 38                             */
    SCH_code[schaltg61]            = "altg61";            SCH[schaltg61]            = 1;                                    /* Alternatieve realisatie toestaan fase 61                             */
    SCH_code[schaltg62]            = "altg62";            SCH[schaltg62]            = 1;                                    /* Alternatieve realisatie toestaan fase 62                             */
    SCH_code[schaltg67]            = "altg67";            SCH[schaltg67]            = 1;                                    /* Alternatieve realisatie toestaan fase 67                             */
    SCH_code[schaltg68]            = "altg68";            SCH[schaltg68]            = 1;                                    /* Alternatieve realisatie toestaan fase 68                             */
    SCH_code[schaltg81]            = "altg81";            SCH[schaltg81]            = 1;                                    /* Alternatieve realisatie toestaan fase 81                             */
    SCH_code[schaltg82]            = "altg82";            SCH[schaltg82]            = 1;                                    /* Alternatieve realisatie toestaan fase 82                             */
    SCH_code[schaltg84]            = "altg84";            SCH[schaltg84]            = 1;                                    /* Alternatieve realisatie toestaan fase 84                             */
    SCH_code[schwg02]              = "wg02";              SCH[schwg02]              = 0;                                    /* Wachtstand groen fase 02                                             */
    SCH_code[schwg03]              = "wg03";              SCH[schwg03]              = 0;                                    /* Wachtstand groen fase 03                                             */
    SCH_code[schwg05]              = "wg05";              SCH[schwg05]              = 0;                                    /* Wachtstand groen fase 05                                             */
    SCH_code[schwg08]              = "wg08";              SCH[schwg08]              = 0;                                    /* Wachtstand groen fase 08                                             */
    SCH_code[schwg09]              = "wg09";              SCH[schwg09]              = 0;                                    /* Wachtstand groen fase 09                                             */
    SCH_code[schwg11]              = "wg11";              SCH[schwg11]              = 0;                                    /* Wachtstand groen fase 11                                             */
    SCH_code[schwg21]              = "wg21";              SCH[schwg21]              = 0;                                    /* Wachtstand groen fase 21                                             */
    SCH_code[schwg22]              = "wg22";              SCH[schwg22]              = 0;                                    /* Wachtstand groen fase 22                                             */
    SCH_code[schwg24]              = "wg24";              SCH[schwg24]              = 0;                                    /* Wachtstand groen fase 24                                             */
    SCH_code[schwg26]              = "wg26";              SCH[schwg26]              = 0;                                    /* Wachtstand groen fase 26                                             */
    SCH_code[schwg28]              = "wg28";              SCH[schwg28]              = 0;                                    /* Wachtstand groen fase 28                                             */
    SCH_code[schwg31]              = "wg31";              SCH[schwg31]              = 0;                                    /* Wachtstand groen fase 31                                             */
    SCH_code[schwg32]              = "wg32";              SCH[schwg32]              = 0;                                    /* Wachtstand groen fase 32                                             */
    SCH_code[schwg33]              = "wg33";              SCH[schwg33]              = 0;                                    /* Wachtstand groen fase 33                                             */
    SCH_code[schwg34]              = "wg34";              SCH[schwg34]              = 0;                                    /* Wachtstand groen fase 34                                             */
    SCH_code[schwg38]              = "wg38";              SCH[schwg38]              = 0;                                    /* Wachtstand groen fase 38                                             */
    SCH_code[schwg61]              = "wg61";              SCH[schwg61]              = 0;                                    /* Wachtstand groen fase 61                                             */
    SCH_code[schwg62]              = "wg62";              SCH[schwg62]              = 0;                                    /* Wachtstand groen fase 62                                             */
    SCH_code[schwg67]              = "wg67";              SCH[schwg67]              = 0;                                    /* Wachtstand groen fase 67                                             */
    SCH_code[schwg68]              = "wg68";              SCH[schwg68]              = 0;                                    /* Wachtstand groen fase 68                                             */
    SCH_code[schwg81]              = "wg81";              SCH[schwg81]              = 0;                                    /* Wachtstand groen fase 81                                             */
    SCH_code[schwg82]              = "wg82";              SCH[schwg82]              = 0;                                    /* Wachtstand groen fase 82                                             */
    SCH_code[schwg84]              = "wg84";              SCH[schwg84]              = 0;                                    /* Wachtstand groen fase 84                                             */
    SCH_code[schlos32_1]           = "los32_1";           SCH[schlos32_1]           = 0;                                    /* Toestaan los realiseren fase 32                                      */
    SCH_code[schlos32_2]           = "los32_2";           SCH[schlos32_2]           = 0;                                    /* Toestaan los realiseren fase 32                                      */
    SCH_code[schlos31_1]           = "los31_1";           SCH[schlos31_1]           = 0;                                    /* Toestaan los realiseren fase 31                                      */
    SCH_code[schlos31_2]           = "los31_2";           SCH[schlos31_2]           = 0;                                    /* Toestaan los realiseren fase 31                                      */
    SCH_code[schlos34_1]           = "los34_1";           SCH[schlos34_1]           = 0;                                    /* Toestaan los realiseren fase 34                                      */
    SCH_code[schlos34_2]           = "los34_2";           SCH[schlos34_2]           = 0;                                    /* Toestaan los realiseren fase 34                                      */
    SCH_code[schlos33_1]           = "los33_1";           SCH[schlos33_1]           = 0;                                    /* Toestaan los realiseren fase 33                                      */
    SCH_code[schlos33_2]           = "los33_2";           SCH[schlos33_2]           = 0;                                    /* Toestaan los realiseren fase 33                                      */
    SCH_code[schsneld2101]         = "sneld2101";         SCH[schsneld2101]         = 1;                                    /* Aanvraag snel voor detector 2101 aan of uit                          */
    SCH_code[schsneld2201]         = "sneld2201";         SCH[schsneld2201]         = 1;                                    /* Aanvraag snel voor detector 2201 aan of uit                          */
    SCH_code[schsneld2401]         = "sneld2401";         SCH[schsneld2401]         = 1;                                    /* Aanvraag snel voor detector 2401 aan of uit                          */
    SCH_code[schsneld2601]         = "sneld2601";         SCH[schsneld2601]         = 1;                                    /* Aanvraag snel voor detector 2601 aan of uit                          */
    SCH_code[schsneld2801]         = "sneld2801";         SCH[schsneld2801]         = 1;                                    /* Aanvraag snel voor detector 2801 aan of uit                          */
    SCH_code[schsneld8101]         = "sneld8101";         SCH[schsneld8101]         = 1;                                    /* Aanvraag snel voor detector 8101 aan of uit                          */
    SCH_code[schsneld8201]         = "sneld8201";         SCH[schsneld8201]         = 1;                                    /* Aanvraag snel voor detector 8201 aan of uit                          */
    SCH_code[schsneld8401]         = "sneld8401";         SCH[schsneld8401]         = 1;                                    /* Aanvraag snel voor detector 8401 aan of uit                          */

/* parameters */
/* ---------- */
    PRM_code[prmspringverleng_0801]      = "springverleng_0801";      PRM[prmspringverleng_0801]      = 2;                                                    /* Dyn. hiaattij instelling voor det. 0801 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0802]      = "springverleng_0802";      PRM[prmspringverleng_0802]      = 2;                                                    /* Dyn. hiaattij instelling voor det. 0802 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0803]      = "springverleng_0803";      PRM[prmspringverleng_0803]      = 24;                                                   /* Dyn. hiaattij instelling voor det. 0803 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0804]      = "springverleng_0804";      PRM[prmspringverleng_0804]      = 24;                                                   /* Dyn. hiaattij instelling voor det. 0804 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0805]      = "springverleng_0805";      PRM[prmspringverleng_0805]      = 9;                                                    /* Dyn. hiaattij instelling voor det. 0805 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0806]      = "springverleng_0806";      PRM[prmspringverleng_0806]      = 9;                                                    /* Dyn. hiaattij instelling voor det. 0806 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0807]      = "springverleng_0807";      PRM[prmspringverleng_0807]      = 0;                                                    /* Dyn. hiaattij instelling voor det. 0807 (via bitsturing)                                          */
    PRM_code[prmspringverleng_0808]      = "springverleng_0808";      PRM[prmspringverleng_0808]      = 0;                                                    /* Dyn. hiaattij instelling voor det. 0808 (via bitsturing)                                          */
    PRM_code[prmfb]                      = "fb";                      PRM[prmfb]                      = 240;  PRM_type[prmfb]                      = TS_type; /* Instelling fasebewaking                                                                           */
    PRM_code[prmxx]                      = "xx";                      PRM[prmxx]                      = 12;                                                   /* Versiebeheer xx                                                                                   */
    PRM_code[prmyy]                      = "yy";                      PRM[prmyy]                      = 5;                                                    /* Versiebeheer yy                                                                                   */
    PRM_code[prmzz]                      = "zz";                      PRM[prmzz]                      = 0;                                                    /* Versiebeheer zz                                                                                   */
    PRM_code[prmda0201]                  = "da0201";                  PRM[prmda0201]                  = 1;                                                    /* Aanvraag functie voor detector 0201                                                               */
    PRM_code[prmda0202]                  = "da0202";                  PRM[prmda0202]                  = 1;                                                    /* Aanvraag functie voor detector 0202                                                               */
    PRM_code[prmda0203]                  = "da0203";                  PRM[prmda0203]                  = 2;                                                    /* Aanvraag functie voor detector 0203                                                               */
    PRM_code[prmda0204]                  = "da0204";                  PRM[prmda0204]                  = 2;                                                    /* Aanvraag functie voor detector 0204                                                               */
    PRM_code[prmda0205]                  = "da0205";                  PRM[prmda0205]                  = 2;                                                    /* Aanvraag functie voor detector 0205                                                               */
    PRM_code[prmda0206]                  = "da0206";                  PRM[prmda0206]                  = 2;                                                    /* Aanvraag functie voor detector 0206                                                               */
    PRM_code[prmda0207]                  = "da0207";                  PRM[prmda0207]                  = 2;                                                    /* Aanvraag functie voor detector 0207                                                               */
    PRM_code[prmda0208]                  = "da0208";                  PRM[prmda0208]                  = 2;                                                    /* Aanvraag functie voor detector 0208                                                               */
    PRM_code[prmda0301]                  = "da0301";                  PRM[prmda0301]                  = 1;                                                    /* Aanvraag functie voor detector 0301                                                               */
    PRM_code[prmda0302]                  = "da0302";                  PRM[prmda0302]                  = 2;                                                    /* Aanvraag functie voor detector 0302                                                               */
    PRM_code[prmda0501]                  = "da0501";                  PRM[prmda0501]                  = 1;                                                    /* Aanvraag functie voor detector 0501                                                               */
    PRM_code[prmda0502]                  = "da0502";                  PRM[prmda0502]                  = 2;                                                    /* Aanvraag functie voor detector 0502                                                               */
    PRM_code[prmda0801]                  = "da0801";                  PRM[prmda0801]                  = 1;                                                    /* Aanvraag functie voor detector 0801                                                               */
    PRM_code[prmda0802]                  = "da0802";                  PRM[prmda0802]                  = 1;                                                    /* Aanvraag functie voor detector 0802                                                               */
    PRM_code[prmda0803]                  = "da0803";                  PRM[prmda0803]                  = 1;                                                    /* Aanvraag functie voor detector 0803                                                               */
    PRM_code[prmda0804]                  = "da0804";                  PRM[prmda0804]                  = 1;                                                    /* Aanvraag functie voor detector 0804                                                               */
    PRM_code[prmda0805]                  = "da0805";                  PRM[prmda0805]                  = 2;                                                    /* Aanvraag functie voor detector 0805                                                               */
    PRM_code[prmda0806]                  = "da0806";                  PRM[prmda0806]                  = 2;                                                    /* Aanvraag functie voor detector 0806                                                               */
    PRM_code[prmda0807]                  = "da0807";                  PRM[prmda0807]                  = 2;                                                    /* Aanvraag functie voor detector 0807                                                               */
    PRM_code[prmda0808]                  = "da0808";                  PRM[prmda0808]                  = 2;                                                    /* Aanvraag functie voor detector 0808                                                               */
    PRM_code[prmda0901]                  = "da0901";                  PRM[prmda0901]                  = 1;                                                    /* Aanvraag functie voor detector 0901                                                               */
    PRM_code[prmda0902]                  = "da0902";                  PRM[prmda0902]                  = 2;                                                    /* Aanvraag functie voor detector 0902                                                               */
    PRM_code[prmda0903]                  = "da0903";                  PRM[prmda0903]                  = 2;                                                    /* Aanvraag functie voor detector 0903                                                               */
    PRM_code[prmda1101]                  = "da1101";                  PRM[prmda1101]                  = 1;                                                    /* Aanvraag functie voor detector 1101                                                               */
    PRM_code[prmda1102]                  = "da1102";                  PRM[prmda1102]                  = 2;                                                    /* Aanvraag functie voor detector 1102                                                               */
    PRM_code[prmda1103]                  = "da1103";                  PRM[prmda1103]                  = 2;                                                    /* Aanvraag functie voor detector 1103                                                               */
    PRM_code[prmda1104]                  = "da1104";                  PRM[prmda1104]                  = 2;                                                    /* Aanvraag functie voor detector 1104                                                               */
    PRM_code[prmda2101]                  = "da2101";                  PRM[prmda2101]                  = 1;                                                    /* Aanvraag functie voor detector 2101                                                               */
    PRM_code[prmda2131]                  = "da2131";                  PRM[prmda2131]                  = 2;                                                    /* Aanvraag functie voor detector 2131                                                               */
    PRM_code[prmda2201]                  = "da2201";                  PRM[prmda2201]                  = 1;                                                    /* Aanvraag functie voor detector 2201                                                               */
    PRM_code[prmda2231]                  = "da2231";                  PRM[prmda2231]                  = 2;                                                    /* Aanvraag functie voor detector 2231                                                               */
    PRM_code[prmda2401]                  = "da2401";                  PRM[prmda2401]                  = 1;                                                    /* Aanvraag functie voor detector 2401                                                               */
    PRM_code[prmda2402]                  = "da2402";                  PRM[prmda2402]                  = 0;                                                    /* Aanvraag functie voor detector 2402                                                               */
    PRM_code[prmda2403]                  = "da2403";                  PRM[prmda2403]                  = 0;                                                    /* Aanvraag functie voor detector 2403                                                               */
    PRM_code[prmda2431]                  = "da2431";                  PRM[prmda2431]                  = 2;                                                    /* Aanvraag functie voor detector 2431                                                               */
    PRM_code[prmda2601]                  = "da2601";                  PRM[prmda2601]                  = 1;                                                    /* Aanvraag functie voor detector 2601                                                               */
    PRM_code[prmda2631]                  = "da2631";                  PRM[prmda2631]                  = 2;                                                    /* Aanvraag functie voor detector 2631                                                               */
    PRM_code[prmda2801]                  = "da2801";                  PRM[prmda2801]                  = 1;                                                    /* Aanvraag functie voor detector 2801                                                               */
    PRM_code[prmda2802]                  = "da2802";                  PRM[prmda2802]                  = 2;                                                    /* Aanvraag functie voor detector 2802                                                               */
    PRM_code[prmda2831]                  = "da2831";                  PRM[prmda2831]                  = 2;                                                    /* Aanvraag functie voor detector 2831                                                               */
    PRM_code[prmda3131]                  = "da3131";                  PRM[prmda3131]                  = 3;                                                    /* Aanvraag functie voor detector 3131                                                               */
    PRM_code[prmda3132]                  = "da3132";                  PRM[prmda3132]                  = 3;                                                    /* Aanvraag functie voor detector 3132                                                               */
    PRM_code[prmda3231]                  = "da3231";                  PRM[prmda3231]                  = 3;                                                    /* Aanvraag functie voor detector 3231                                                               */
    PRM_code[prmda3232]                  = "da3232";                  PRM[prmda3232]                  = 3;                                                    /* Aanvraag functie voor detector 3232                                                               */
    PRM_code[prmda3331]                  = "da3331";                  PRM[prmda3331]                  = 3;                                                    /* Aanvraag functie voor detector 3331                                                               */
    PRM_code[prmda3332]                  = "da3332";                  PRM[prmda3332]                  = 3;                                                    /* Aanvraag functie voor detector 3332                                                               */
    PRM_code[prmda3431]                  = "da3431";                  PRM[prmda3431]                  = 3;                                                    /* Aanvraag functie voor detector 3431                                                               */
    PRM_code[prmda3432]                  = "da3432";                  PRM[prmda3432]                  = 3;                                                    /* Aanvraag functie voor detector 3432                                                               */
    PRM_code[prmda3831]                  = "da3831";                  PRM[prmda3831]                  = 3;                                                    /* Aanvraag functie voor detector 3831                                                               */
    PRM_code[prmda3832]                  = "da3832";                  PRM[prmda3832]                  = 3;                                                    /* Aanvraag functie voor detector 3832                                                               */
    PRM_code[prmda6101]                  = "da6101";                  PRM[prmda6101]                  = 1;                                                    /* Aanvraag functie voor detector 6101                                                               */
    PRM_code[prmda6102]                  = "da6102";                  PRM[prmda6102]                  = 1;                                                    /* Aanvraag functie voor detector 6102                                                               */
    PRM_code[prmda6201]                  = "da6201";                  PRM[prmda6201]                  = 1;                                                    /* Aanvraag functie voor detector 6201                                                               */
    PRM_code[prmda6202]                  = "da6202";                  PRM[prmda6202]                  = 1;                                                    /* Aanvraag functie voor detector 6202                                                               */
    PRM_code[prmda6203]                  = "da6203";                  PRM[prmda6203]                  = 2;                                                    /* Aanvraag functie voor detector 6203                                                               */
    PRM_code[prmda6204]                  = "da6204";                  PRM[prmda6204]                  = 2;                                                    /* Aanvraag functie voor detector 6204                                                               */
    PRM_code[prmda6701]                  = "da6701";                  PRM[prmda6701]                  = 1;                                                    /* Aanvraag functie voor detector 6701                                                               */
    PRM_code[prmda6702]                  = "da6702";                  PRM[prmda6702]                  = 2;                                                    /* Aanvraag functie voor detector 6702                                                               */
    PRM_code[prmda6801]                  = "da6801";                  PRM[prmda6801]                  = 1;                                                    /* Aanvraag functie voor detector 6801                                                               */
    PRM_code[prmda6802]                  = "da6802";                  PRM[prmda6802]                  = 1;                                                    /* Aanvraag functie voor detector 6802                                                               */
    PRM_code[prmda6803]                  = "da6803";                  PRM[prmda6803]                  = 2;                                                    /* Aanvraag functie voor detector 6803                                                               */
    PRM_code[prmda6804]                  = "da6804";                  PRM[prmda6804]                  = 2;                                                    /* Aanvraag functie voor detector 6804                                                               */
    PRM_code[prmda6821]                  = "da6821";                  PRM[prmda6821]                  = 0;                                                    /* Aanvraag functie voor detector 6821                                                               */
    PRM_code[prmda6822]                  = "da6822";                  PRM[prmda6822]                  = 0;                                                    /* Aanvraag functie voor detector 6822                                                               */
    PRM_code[prmda8101]                  = "da8101";                  PRM[prmda8101]                  = 1;                                                    /* Aanvraag functie voor detector 8101                                                               */
    PRM_code[prmda8131]                  = "da8131";                  PRM[prmda8131]                  = 2;                                                    /* Aanvraag functie voor detector 8131                                                               */
    PRM_code[prmda8201]                  = "da8201";                  PRM[prmda8201]                  = 1;                                                    /* Aanvraag functie voor detector 8201                                                               */
    PRM_code[prmda8231]                  = "da8231";                  PRM[prmda8231]                  = 2;                                                    /* Aanvraag functie voor detector 8231                                                               */
    PRM_code[prmda8401]                  = "da8401";                  PRM[prmda8401]                  = 1;                                                    /* Aanvraag functie voor detector 8401                                                               */
    PRM_code[prmda8431]                  = "da8431";                  PRM[prmda8431]                  = 2;                                                    /* Aanvraag functie voor detector 8431                                                               */
    PRM_code[prmmk0201]                  = "mk0201";                  PRM[prmmk0201]                  = 1;                                                    /* Meetkriterium type voor detector 0201                                                             */
    PRM_code[prmmk0202]                  = "mk0202";                  PRM[prmmk0202]                  = 5;                                                    /* Meetkriterium type voor detector 0202                                                             */
    PRM_code[prmmk0203]                  = "mk0203";                  PRM[prmmk0203]                  = 2;                                                    /* Meetkriterium type voor detector 0203                                                             */
    PRM_code[prmmk0204]                  = "mk0204";                  PRM[prmmk0204]                  = 6;                                                    /* Meetkriterium type voor detector 0204                                                             */
    PRM_code[prmmk0205]                  = "mk0205";                  PRM[prmmk0205]                  = 3;                                                    /* Meetkriterium type voor detector 0205                                                             */
    PRM_code[prmmk0206]                  = "mk0206";                  PRM[prmmk0206]                  = 7;                                                    /* Meetkriterium type voor detector 0206                                                             */
    PRM_code[prmmk0207]                  = "mk0207";                  PRM[prmmk0207]                  = 3;                                                    /* Meetkriterium type voor detector 0207                                                             */
    PRM_code[prmmk0208]                  = "mk0208";                  PRM[prmmk0208]                  = 7;                                                    /* Meetkriterium type voor detector 0208                                                             */
    PRM_code[prmmk0301]                  = "mk0301";                  PRM[prmmk0301]                  = 1;                                                    /* Meetkriterium type voor detector 0301                                                             */
    PRM_code[prmmk0302]                  = "mk0302";                  PRM[prmmk0302]                  = 2;                                                    /* Meetkriterium type voor detector 0302                                                             */
    PRM_code[prmmk0501]                  = "mk0501";                  PRM[prmmk0501]                  = 1;                                                    /* Meetkriterium type voor detector 0501                                                             */
    PRM_code[prmmk0502]                  = "mk0502";                  PRM[prmmk0502]                  = 2;                                                    /* Meetkriterium type voor detector 0502                                                             */
    PRM_code[prmmk0801]                  = "mk0801";                  PRM[prmmk0801]                  = 1;                                                    /* Meetkriterium type voor detector 0801                                                             */
    PRM_code[prmmk0802]                  = "mk0802";                  PRM[prmmk0802]                  = 5;                                                    /* Meetkriterium type voor detector 0802                                                             */
    PRM_code[prmmk0803]                  = "mk0803";                  PRM[prmmk0803]                  = 2;                                                    /* Meetkriterium type voor detector 0803                                                             */
    PRM_code[prmmk0804]                  = "mk0804";                  PRM[prmmk0804]                  = 6;                                                    /* Meetkriterium type voor detector 0804                                                             */
    PRM_code[prmmk0805]                  = "mk0805";                  PRM[prmmk0805]                  = 3;                                                    /* Meetkriterium type voor detector 0805                                                             */
    PRM_code[prmmk0806]                  = "mk0806";                  PRM[prmmk0806]                  = 7;                                                    /* Meetkriterium type voor detector 0806                                                             */
    PRM_code[prmmk0807]                  = "mk0807";                  PRM[prmmk0807]                  = 3;                                                    /* Meetkriterium type voor detector 0807                                                             */
    PRM_code[prmmk0808]                  = "mk0808";                  PRM[prmmk0808]                  = 7;                                                    /* Meetkriterium type voor detector 0808                                                             */
    PRM_code[prmmk0901]                  = "mk0901";                  PRM[prmmk0901]                  = 1;                                                    /* Meetkriterium type voor detector 0901                                                             */
    PRM_code[prmmk0902]                  = "mk0902";                  PRM[prmmk0902]                  = 2;                                                    /* Meetkriterium type voor detector 0902                                                             */
    PRM_code[prmmk0903]                  = "mk0903";                  PRM[prmmk0903]                  = 3;                                                    /* Meetkriterium type voor detector 0903                                                             */
    PRM_code[prmmk1101]                  = "mk1101";                  PRM[prmmk1101]                  = 1;                                                    /* Meetkriterium type voor detector 1101                                                             */
    PRM_code[prmmk1102]                  = "mk1102";                  PRM[prmmk1102]                  = 2;                                                    /* Meetkriterium type voor detector 1102                                                             */
    PRM_code[prmmk1103]                  = "mk1103";                  PRM[prmmk1103]                  = 3;                                                    /* Meetkriterium type voor detector 1103                                                             */
    PRM_code[prmmk1104]                  = "mk1104";                  PRM[prmmk1104]                  = 3;                                                    /* Meetkriterium type voor detector 1104                                                             */
    PRM_code[prmmk2101]                  = "mk2101";                  PRM[prmmk2101]                  = 1;                                                    /* Meetkriterium type voor detector 2101                                                             */
    PRM_code[prmmk2201]                  = "mk2201";                  PRM[prmmk2201]                  = 2;                                                    /* Meetkriterium type voor detector 2201                                                             */
    PRM_code[prmmk2401]                  = "mk2401";                  PRM[prmmk2401]                  = 2;                                                    /* Meetkriterium type voor detector 2401                                                             */
    PRM_code[prmmk2402]                  = "mk2402";                  PRM[prmmk2402]                  = 0;                                                    /* Meetkriterium type voor detector 2402                                                             */
    PRM_code[prmmk2403]                  = "mk2403";                  PRM[prmmk2403]                  = 0;                                                    /* Meetkriterium type voor detector 2403                                                             */
    PRM_code[prmmk2601]                  = "mk2601";                  PRM[prmmk2601]                  = 2;                                                    /* Meetkriterium type voor detector 2601                                                             */
    PRM_code[prmmk2801]                  = "mk2801";                  PRM[prmmk2801]                  = 2;                                                    /* Meetkriterium type voor detector 2801                                                             */
    PRM_code[prmmk2802]                  = "mk2802";                  PRM[prmmk2802]                  = 3;                                                    /* Meetkriterium type voor detector 2802                                                             */
    PRM_code[prmmk6101]                  = "mk6101";                  PRM[prmmk6101]                  = 1;                                                    /* Meetkriterium type voor detector 6101                                                             */
    PRM_code[prmmk6102]                  = "mk6102";                  PRM[prmmk6102]                  = 2;                                                    /* Meetkriterium type voor detector 6102                                                             */
    PRM_code[prmmk6201]                  = "mk6201";                  PRM[prmmk6201]                  = 1;                                                    /* Meetkriterium type voor detector 6201                                                             */
    PRM_code[prmmk6202]                  = "mk6202";                  PRM[prmmk6202]                  = 5;                                                    /* Meetkriterium type voor detector 6202                                                             */
    PRM_code[prmmk6203]                  = "mk6203";                  PRM[prmmk6203]                  = 2;                                                    /* Meetkriterium type voor detector 6203                                                             */
    PRM_code[prmmk6204]                  = "mk6204";                  PRM[prmmk6204]                  = 6;                                                    /* Meetkriterium type voor detector 6204                                                             */
    PRM_code[prmmk6701]                  = "mk6701";                  PRM[prmmk6701]                  = 1;                                                    /* Meetkriterium type voor detector 6701                                                             */
    PRM_code[prmmk6702]                  = "mk6702";                  PRM[prmmk6702]                  = 2;                                                    /* Meetkriterium type voor detector 6702                                                             */
    PRM_code[prmmk6801]                  = "mk6801";                  PRM[prmmk6801]                  = 1;                                                    /* Meetkriterium type voor detector 6801                                                             */
    PRM_code[prmmk6802]                  = "mk6802";                  PRM[prmmk6802]                  = 5;                                                    /* Meetkriterium type voor detector 6802                                                             */
    PRM_code[prmmk6803]                  = "mk6803";                  PRM[prmmk6803]                  = 2;                                                    /* Meetkriterium type voor detector 6803                                                             */
    PRM_code[prmmk6804]                  = "mk6804";                  PRM[prmmk6804]                  = 6;                                                    /* Meetkriterium type voor detector 6804                                                             */
    PRM_code[prmmk6821]                  = "mk6821";                  PRM[prmmk6821]                  = 0;                                                    /* Meetkriterium type voor detector 6821                                                             */
    PRM_code[prmmk6822]                  = "mk6822";                  PRM[prmmk6822]                  = 4;                                                    /* Meetkriterium type voor detector 6822                                                             */
    PRM_code[prmmk8101]                  = "mk8101";                  PRM[prmmk8101]                  = 1;                                                    /* Meetkriterium type voor detector 8101                                                             */
    PRM_code[prmmk8201]                  = "mk8201";                  PRM[prmmk8201]                  = 2;                                                    /* Meetkriterium type voor detector 8201                                                             */
    PRM_code[prmmk8401]                  = "mk8401";                  PRM[prmmk8401]                  = 2;                                                    /* Meetkriterium type voor detector 8401                                                             */
    PRM_code[prmperc03]                  = "perc03";                  PRM[prmperc03]                  = 65;                                                   /* Percentage groentijd fase 03 bij defect kop en lange lus                                          */
    PRM_code[prmperc05]                  = "perc05";                  PRM[prmperc05]                  = 65;                                                   /* Percentage groentijd fase 05 bij defect kop en lange lus                                          */
    PRM_code[prmperc08]                  = "perc08";                  PRM[prmperc08]                  = 65;                                                   /* Percentage groentijd fase 08 bij defect kop en lange lus                                          */
    PRM_code[prmperc09]                  = "perc09";                  PRM[prmperc09]                  = 65;                                                   /* Percentage groentijd fase 09 bij defect kop en lange lus                                          */
    PRM_code[prmperc11]                  = "perc11";                  PRM[prmperc11]                  = 65;                                                   /* Percentage groentijd fase 11 bij defect kop en lange lus                                          */
    PRM_code[prmperc61]                  = "perc61";                  PRM[prmperc61]                  = 65;                                                   /* Percentage groentijd fase 61 bij defect kop en lange lus                                          */
    PRM_code[prmperc62]                  = "perc62";                  PRM[prmperc62]                  = 65;                                                   /* Percentage groentijd fase 62 bij defect kop en lange lus                                          */
    PRM_code[prmperc67]                  = "perc67";                  PRM[prmperc67]                  = 65;                                                   /* Percentage groentijd fase 67 bij defect kop en lange lus                                          */
    PRM_code[prmperc68]                  = "perc68";                  PRM[prmperc68]                  = 65;                                                   /* Percentage groentijd fase 68 bij defect kop en lange lus                                          */
    PRM_code[prmfperc68af08]             = "fperc68af08";             PRM[prmfperc68af08]             = 50;                                                   /* Doseerpercentage 08                                                                               */
    PRM_code[prmfperc68af11]             = "fperc68af11";             PRM[prmfperc68af11]             = 50;                                                   /* Doseerpercentage 11                                                                               */
    PRM_code[prmprml02]                  = "prml02";                  PRM[prmprml02]                  = 1;                                                    /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml03]                  = "prml03";                  PRM[prmprml03]                  = 2;                                                    /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml05]                  = "prml05";                  PRM[prmprml05]                  = 4;                                                    /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml08]                  = "prml08";                  PRM[prmprml08]                  = 1;                                                    /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml09]                  = "prml09";                  PRM[prmprml09]                  = 2;                                                    /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml11]                  = "prml11";                  PRM[prmprml11]                  = 8;                                                    /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml21]                  = "prml21";                  PRM[prmprml21]                  = 4;                                                    /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml22]                  = "prml22";                  PRM[prmprml22]                  = 4;                                                    /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml24]                  = "prml24";                  PRM[prmprml24]                  = 1;                                                    /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml26]                  = "prml26";                  PRM[prmprml26]                  = 8;                                                    /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml28]                  = "prml28";                  PRM[prmprml28]                  = 1;                                                    /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml31]                  = "prml31";                  PRM[prmprml31]                  = 4;                                                    /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml32]                  = "prml32";                  PRM[prmprml32]                  = 4;                                                    /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml33]                  = "prml33";                  PRM[prmprml33]                  = 1;                                                    /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml34]                  = "prml34";                  PRM[prmprml34]                  = 1;                                                    /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml38]                  = "prml38";                  PRM[prmprml38]                  = 1;                                                    /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml61]                  = "prml61";                  PRM[prmprml61]                  = 4;                                                    /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml62]                  = "prml62";                  PRM[prmprml62]                  = 5;                                                    /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml67]                  = "prml67";                  PRM[prmprml67]                  = 4;                                                    /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml68]                  = "prml68";                  PRM[prmprml68]                  = 1;                                                    /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml81]                  = "prml81";                  PRM[prmprml81]                  = 2;                                                    /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml82]                  = "prml82";                  PRM[prmprml82]                  = 2;                                                    /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmprml84]                  = "prml84";                  PRM[prmprml84]                  = 1;                                                    /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    PRM_code[prmmwta]                    = "mwta";                    PRM[prmmwta]                    = 90;   PRM_type[prmmwta]                    = TS_type; /* Maximale wachttijd autoverkeer                                                                    */
    PRM_code[prmmwtfts]                  = "mwtfts";                  PRM[prmmwtfts]                  = 60;   PRM_type[prmmwtfts]                  = TS_type; /* Maximale wachttijd fiets                                                                          */
    PRM_code[prmmwtvtg]                  = "mwtvtg";                  PRM[prmmwtvtg]                  = 60;   PRM_type[prmmwtvtg]                  = TS_type; /* Maximale wachttijd voetgangers                                                                    */
    PRM_code[prmrto02]                   = "rto02";                   PRM[prmrto02]                   = 140;  PRM_type[prmrto02]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 02                                                           */
    PRM_code[prmrtbg02]                  = "rtbg02";                  PRM[prmrtbg02]                  = 100;  PRM_type[prmrtbg02]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 02                                                     */
    PRM_code[prmrtg02]                   = "rtg02";                   PRM[prmrtg02]                   = 60;   PRM_type[prmrtg02]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 02                                                             */
    PRM_code[prmomx02]                   = "omx02";                   PRM[prmomx02]                   = 150;  PRM_type[prmomx02]                   = TE_type; /* Ondermaximum OV fase 02                                                                           */
    PRM_code[prmvtgcat02]                = "vtgcat02";                PRM[prmvtgcat02]                = 1;                                                    /* Voertuigcategorie DSI voor prio ingreep 02                                                        */
    PRM_code[prmprio02]                  = "prio02";                  PRM[prmprio02]                  = 23;                                                   /* Prioriteitsinstelling OV fase 02                                                                  */
    PRM_code[prmrto08]                   = "rto08";                   PRM[prmrto08]                   = 140;  PRM_type[prmrto08]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 08                                                           */
    PRM_code[prmrtbg08]                  = "rtbg08";                  PRM[prmrtbg08]                  = 100;  PRM_type[prmrtbg08]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 08                                                     */
    PRM_code[prmrtg08]                   = "rtg08";                   PRM[prmrtg08]                   = 60;   PRM_type[prmrtg08]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 08                                                             */
    PRM_code[prmomx08]                   = "omx08";                   PRM[prmomx08]                   = 150;  PRM_type[prmomx08]                   = TE_type; /* Ondermaximum OV fase 08                                                                           */
    PRM_code[prmvtgcat08]                = "vtgcat08";                PRM[prmvtgcat08]                = 1;                                                    /* Voertuigcategorie DSI voor prio ingreep 08                                                        */
    PRM_code[prmprio08]                  = "prio08";                  PRM[prmprio08]                  = 123;                                                  /* Prioriteitsinstelling OV fase 08                                                                  */
    PRM_code[prmrto11]                   = "rto11";                   PRM[prmrto11]                   = 140;  PRM_type[prmrto11]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 11                                                           */
    PRM_code[prmrtbg11]                  = "rtbg11";                  PRM[prmrtbg11]                  = 100;  PRM_type[prmrtbg11]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 11                                                     */
    PRM_code[prmrtg11]                   = "rtg11";                   PRM[prmrtg11]                   = 60;   PRM_type[prmrtg11]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 11                                                             */
    PRM_code[prmomx11]                   = "omx11";                   PRM[prmomx11]                   = 150;  PRM_type[prmomx11]                   = TE_type; /* Ondermaximum OV fase 11                                                                           */
    PRM_code[prmvtgcat11]                = "vtgcat11";                PRM[prmvtgcat11]                = 1;                                                    /* Voertuigcategorie DSI voor prio ingreep 11                                                        */
    PRM_code[prmprio11]                  = "prio11";                  PRM[prmprio11]                  = 123;                                                  /* Prioriteitsinstelling OV fase 11                                                                  */
    PRM_code[prmftsblok22fiets]          = "ftsblok22fiets";          PRM[prmftsblok22fiets]          = 1023;                                                 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                    */
    PRM_code[prmftsmaxpercyc22fiets]     = "ftsmaxpercyc22fiets";     PRM[prmftsmaxpercyc22fiets]     = 1;                                                    /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                   */
    PRM_code[prmftsminwt22fiets]         = "ftsminwt22fiets";         PRM[prmftsminwt22fiets]         = 300;  PRM_type[prmftsminwt22fiets]         = TS_type; /* Minimale wachttijd tbv peloton prio voor fase 22                                                  */
    PRM_code[prmrto22]                   = "rto22";                   PRM[prmrto22]                   = 0;    PRM_type[prmrto22]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 22                                                           */
    PRM_code[prmrtbg22]                  = "rtbg22";                  PRM[prmrtbg22]                  = 0;    PRM_type[prmrtbg22]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 22                                                     */
    PRM_code[prmrtg22]                   = "rtg22";                   PRM[prmrtg22]                   = 0;    PRM_type[prmrtg22]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 22                                                             */
    PRM_code[prmomx22]                   = "omx22";                   PRM[prmomx22]                   = 100;  PRM_type[prmomx22]                   = TE_type; /* Ondermaximum OV fase 22                                                                           */
    PRM_code[prmprio22]                  = "prio22";                  PRM[prmprio22]                  = 23;                                                   /* Prioriteitsinstelling OV fase 22                                                                  */
    PRM_code[prmftsblok24fiets]          = "ftsblok24fiets";          PRM[prmftsblok24fiets]          = 1023;                                                 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 24                                    */
    PRM_code[prmftsmaxpercyc24fiets]     = "ftsmaxpercyc24fiets";     PRM[prmftsmaxpercyc24fiets]     = 1;                                                    /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 24                                   */
    PRM_code[prmftsminvtg24fiets]        = "ftsminvtg24fiets";        PRM[prmftsminvtg24fiets]        = 5;                                                    /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 24                                    */
    PRM_code[prmftsminwt24fiets]         = "ftsminwt24fiets";         PRM[prmftsminwt24fiets]         = 300;  PRM_type[prmftsminwt24fiets]         = TS_type; /* Minimale wachttijd tbv peloton prio voor fase 24                                                  */
    PRM_code[prmrto24]                   = "rto24";                   PRM[prmrto24]                   = 0;    PRM_type[prmrto24]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 24                                                           */
    PRM_code[prmrtbg24]                  = "rtbg24";                  PRM[prmrtbg24]                  = 0;    PRM_type[prmrtbg24]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 24                                                     */
    PRM_code[prmrtg24]                   = "rtg24";                   PRM[prmrtg24]                   = 0;    PRM_type[prmrtg24]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 24                                                             */
    PRM_code[prmomx24]                   = "omx24";                   PRM[prmomx24]                   = 100;  PRM_type[prmomx24]                   = TE_type; /* Ondermaximum OV fase 24                                                                           */
    PRM_code[prmprio24]                  = "prio24";                  PRM[prmprio24]                  = 23;                                                   /* Prioriteitsinstelling OV fase 24                                                                  */
    PRM_code[prmrto61]                   = "rto61";                   PRM[prmrto61]                   = 0;    PRM_type[prmrto61]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 61                                                           */
    PRM_code[prmrtbg61]                  = "rtbg61";                  PRM[prmrtbg61]                  = 0;    PRM_type[prmrtbg61]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 61                                                     */
    PRM_code[prmrtg61]                   = "rtg61";                   PRM[prmrtg61]                   = 0;    PRM_type[prmrtg61]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 61                                                             */
    PRM_code[prmomx61]                   = "omx61";                   PRM[prmomx61]                   = 150;  PRM_type[prmomx61]                   = TE_type; /* Ondermaximum OV fase 61                                                                           */
    PRM_code[prmvtgcat61]                = "vtgcat61";                PRM[prmvtgcat61]                = 1;                                                    /* Voertuigcategorie DSI voor prio ingreep 61                                                        */
    PRM_code[prmprio61]                  = "prio61";                  PRM[prmprio61]                  = 123;                                                  /* Prioriteitsinstelling OV fase 61                                                                  */
    PRM_code[prmallelijnen61]            = "allelijnen61";            PRM[prmallelijnen61]            = 0;                                                    /* Prioriteit geven aan alle lijnen fase 61                                                          */
    PRM_code[prmlijn61_01]               = "lijn61_01";               PRM[prmlijn61_01]               = 0;                                                    /* Lijnnummer 1 tbv prioriteit OV fase 61                                                            */
    PRM_code[prmlijn61_02]               = "lijn61_02";               PRM[prmlijn61_02]               = 0;                                                    /* Lijnnummer 2 tbv prioriteit OV fase 61                                                            */
    PRM_code[prmlijn61_03]               = "lijn61_03";               PRM[prmlijn61_03]               = 0;                                                    /* Lijnnummer 3 tbv prioriteit OV fase 61                                                            */
    PRM_code[prmlijn61_04]               = "lijn61_04";               PRM[prmlijn61_04]               = 0;                                                    /* Lijnnummer 4 tbv prioriteit OV fase 61                                                            */
    PRM_code[prmlijn61_05]               = "lijn61_05";               PRM[prmlijn61_05]               = 0;                                                    /* Lijnnummer 5 tbv prioriteit OV fase 61                                                            */
    PRM_code[prmftsblok84fiets]          = "ftsblok84fiets";          PRM[prmftsblok84fiets]          = 1023;                                                 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 84                                    */
    PRM_code[prmftsmaxpercyc84fiets]     = "ftsmaxpercyc84fiets";     PRM[prmftsmaxpercyc84fiets]     = 1;                                                    /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 84                                   */
    PRM_code[prmftsminwt84fiets]         = "ftsminwt84fiets";         PRM[prmftsminwt84fiets]         = 30;   PRM_type[prmftsminwt84fiets]         = TS_type; /* Minimale wachttijd tbv peloton prio voor fase 84                                                  */
    PRM_code[prmrto84]                   = "rto84";                   PRM[prmrto84]                   = 0;    PRM_type[prmrto84]                   = TE_type; /* Ongehinderde rijtijd prioriteit fase 84                                                           */
    PRM_code[prmrtbg84]                  = "rtbg84";                  PRM[prmrtbg84]                  = 0;    PRM_type[prmrtbg84]                  = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 84                                                     */
    PRM_code[prmrtg84]                   = "rtg84";                   PRM[prmrtg84]                   = 0;    PRM_type[prmrtg84]                   = TE_type; /* Gehinderde rijtijd prioriteit fase 84                                                             */
    PRM_code[prmomx84]                   = "omx84";                   PRM[prmomx84]                   = 100;  PRM_type[prmomx84]                   = TE_type; /* Ondermaximum OV fase 84                                                                           */
    PRM_code[prmprio84]                  = "prio84";                  PRM[prmprio84]                  = 23;                                                   /* Prioriteitsinstelling OV fase 84                                                                  */
    PRM_code[prmpriohd02]                = "priohd02";                PRM[prmpriohd02]                = 9005;                                                 /* Prioriteitsinstelling HD fase 02                                                                  */
    PRM_code[prmrtohd02]                 = "rtohd02";                 PRM[prmrtohd02]                 = 0;    PRM_type[prmrtohd02]                 = TE_type; /* Ongehinderde rijtijd HD fase 02                                                                   */
    PRM_code[prmrtbghd02]                = "rtbghd02";                PRM[prmrtbghd02]                = 0;    PRM_type[prmrtbghd02]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 02                                                             */
    PRM_code[prmrtghd02]                 = "rtghd02";                 PRM[prmrtghd02]                 = 0;    PRM_type[prmrtghd02]                 = TE_type; /* Gehinderde rijtijd HD fase 02                                                                     */
    PRM_code[prmpriohd03]                = "priohd03";                PRM[prmpriohd03]                = 9005;                                                 /* Prioriteitsinstelling HD fase 03                                                                  */
    PRM_code[prmrtohd03]                 = "rtohd03";                 PRM[prmrtohd03]                 = 0;    PRM_type[prmrtohd03]                 = TE_type; /* Ongehinderde rijtijd HD fase 03                                                                   */
    PRM_code[prmrtbghd03]                = "rtbghd03";                PRM[prmrtbghd03]                = 0;    PRM_type[prmrtbghd03]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 03                                                             */
    PRM_code[prmrtghd03]                 = "rtghd03";                 PRM[prmrtghd03]                 = 0;    PRM_type[prmrtghd03]                 = TE_type; /* Gehinderde rijtijd HD fase 03                                                                     */
    PRM_code[prmpriohd05]                = "priohd05";                PRM[prmpriohd05]                = 9005;                                                 /* Prioriteitsinstelling HD fase 05                                                                  */
    PRM_code[prmrtohd05]                 = "rtohd05";                 PRM[prmrtohd05]                 = 0;    PRM_type[prmrtohd05]                 = TE_type; /* Ongehinderde rijtijd HD fase 05                                                                   */
    PRM_code[prmrtbghd05]                = "rtbghd05";                PRM[prmrtbghd05]                = 0;    PRM_type[prmrtbghd05]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 05                                                             */
    PRM_code[prmrtghd05]                 = "rtghd05";                 PRM[prmrtghd05]                 = 0;    PRM_type[prmrtghd05]                 = TE_type; /* Gehinderde rijtijd HD fase 05                                                                     */
    PRM_code[prmpriohd08]                = "priohd08";                PRM[prmpriohd08]                = 9005;                                                 /* Prioriteitsinstelling HD fase 08                                                                  */
    PRM_code[prmrtohd08]                 = "rtohd08";                 PRM[prmrtohd08]                 = 0;    PRM_type[prmrtohd08]                 = TE_type; /* Ongehinderde rijtijd HD fase 08                                                                   */
    PRM_code[prmrtbghd08]                = "rtbghd08";                PRM[prmrtbghd08]                = 0;    PRM_type[prmrtbghd08]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 08                                                             */
    PRM_code[prmrtghd08]                 = "rtghd08";                 PRM[prmrtghd08]                 = 0;    PRM_type[prmrtghd08]                 = TE_type; /* Gehinderde rijtijd HD fase 08                                                                     */
    PRM_code[prmpriohd09]                = "priohd09";                PRM[prmpriohd09]                = 9005;                                                 /* Prioriteitsinstelling HD fase 09                                                                  */
    PRM_code[prmrtohd09]                 = "rtohd09";                 PRM[prmrtohd09]                 = 0;    PRM_type[prmrtohd09]                 = TE_type; /* Ongehinderde rijtijd HD fase 09                                                                   */
    PRM_code[prmrtbghd09]                = "rtbghd09";                PRM[prmrtbghd09]                = 0;    PRM_type[prmrtbghd09]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 09                                                             */
    PRM_code[prmrtghd09]                 = "rtghd09";                 PRM[prmrtghd09]                 = 0;    PRM_type[prmrtghd09]                 = TE_type; /* Gehinderde rijtijd HD fase 09                                                                     */
    PRM_code[prmpriohd11]                = "priohd11";                PRM[prmpriohd11]                = 9005;                                                 /* Prioriteitsinstelling HD fase 11                                                                  */
    PRM_code[prmrtohd11]                 = "rtohd11";                 PRM[prmrtohd11]                 = 0;    PRM_type[prmrtohd11]                 = TE_type; /* Ongehinderde rijtijd HD fase 11                                                                   */
    PRM_code[prmrtbghd11]                = "rtbghd11";                PRM[prmrtbghd11]                = 0;    PRM_type[prmrtbghd11]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 11                                                             */
    PRM_code[prmrtghd11]                 = "rtghd11";                 PRM[prmrtghd11]                 = 0;    PRM_type[prmrtghd11]                 = TE_type; /* Gehinderde rijtijd HD fase 11                                                                     */
    PRM_code[prmpriohd61]                = "priohd61";                PRM[prmpriohd61]                = 9005;                                                 /* Prioriteitsinstelling HD fase 61                                                                  */
    PRM_code[prmrtohd61]                 = "rtohd61";                 PRM[prmrtohd61]                 = 0;    PRM_type[prmrtohd61]                 = TE_type; /* Ongehinderde rijtijd HD fase 61                                                                   */
    PRM_code[prmrtbghd61]                = "rtbghd61";                PRM[prmrtbghd61]                = 0;    PRM_type[prmrtbghd61]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 61                                                             */
    PRM_code[prmrtghd61]                 = "rtghd61";                 PRM[prmrtghd61]                 = 0;    PRM_type[prmrtghd61]                 = TE_type; /* Gehinderde rijtijd HD fase 61                                                                     */
    PRM_code[prmpriohd62]                = "priohd62";                PRM[prmpriohd62]                = 9005;                                                 /* Prioriteitsinstelling HD fase 62                                                                  */
    PRM_code[prmrtohd62]                 = "rtohd62";                 PRM[prmrtohd62]                 = 0;    PRM_type[prmrtohd62]                 = TE_type; /* Ongehinderde rijtijd HD fase 62                                                                   */
    PRM_code[prmrtbghd62]                = "rtbghd62";                PRM[prmrtbghd62]                = 0;    PRM_type[prmrtbghd62]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 62                                                             */
    PRM_code[prmrtghd62]                 = "rtghd62";                 PRM[prmrtghd62]                 = 0;    PRM_type[prmrtghd62]                 = TE_type; /* Gehinderde rijtijd HD fase 62                                                                     */
    PRM_code[prmpriohd67]                = "priohd67";                PRM[prmpriohd67]                = 9005;                                                 /* Prioriteitsinstelling HD fase 67                                                                  */
    PRM_code[prmrtohd67]                 = "rtohd67";                 PRM[prmrtohd67]                 = 0;    PRM_type[prmrtohd67]                 = TE_type; /* Ongehinderde rijtijd HD fase 67                                                                   */
    PRM_code[prmrtbghd67]                = "rtbghd67";                PRM[prmrtbghd67]                = 0;    PRM_type[prmrtbghd67]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 67                                                             */
    PRM_code[prmrtghd67]                 = "rtghd67";                 PRM[prmrtghd67]                 = 0;    PRM_type[prmrtghd67]                 = TE_type; /* Gehinderde rijtijd HD fase 67                                                                     */
    PRM_code[prmpriohd68]                = "priohd68";                PRM[prmpriohd68]                = 9005;                                                 /* Prioriteitsinstelling HD fase 68                                                                  */
    PRM_code[prmrtohd68]                 = "rtohd68";                 PRM[prmrtohd68]                 = 0;    PRM_type[prmrtohd68]                 = TE_type; /* Ongehinderde rijtijd HD fase 68                                                                   */
    PRM_code[prmrtbghd68]                = "rtbghd68";                PRM[prmrtbghd68]                = 0;    PRM_type[prmrtbghd68]                = TE_type; /* Beperkt gehinderde rijtijd HD fase 68                                                             */
    PRM_code[prmrtghd68]                 = "rtghd68";                 PRM[prmrtghd68]                 = 0;    PRM_type[prmrtghd68]                 = TE_type; /* Gehinderde rijtijd HD fase 68                                                                     */
    PRM_code[prmkarsg02]                 = "karsg02";                 PRM[prmkarsg02]                 = 2;                                                    /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                            */
    PRM_code[prmkarsg08]                 = "karsg08";                 PRM[prmkarsg08]                 = 8;                                                    /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                            */
    PRM_code[prmkarsg11]                 = "karsg11";                 PRM[prmkarsg11]                 = 11;                                                   /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                            */
    PRM_code[prmkarsg61]                 = "karsg61";                 PRM[prmkarsg61]                 = 61;                                                   /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                            */
    PRM_code[prmkarsghd02]               = "karsghd02";               PRM[prmkarsghd02]               = 2;                                                    /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd03]               = "karsghd03";               PRM[prmkarsghd03]               = 3;                                                    /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd05]               = "karsghd05";               PRM[prmkarsghd05]               = 5;                                                    /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd08]               = "karsghd08";               PRM[prmkarsghd08]               = 8;                                                    /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd09]               = "karsghd09";               PRM[prmkarsghd09]               = 9;                                                    /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd11]               = "karsghd11";               PRM[prmkarsghd11]               = 11;                                                   /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd61]               = "karsghd61";               PRM[prmkarsghd61]               = 61;                                                   /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd62]               = "karsghd62";               PRM[prmkarsghd62]               = 62;                                                   /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd67]               = "karsghd67";               PRM[prmkarsghd67]               = 67;                                                   /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                         */
    PRM_code[prmkarsghd68]               = "karsghd68";               PRM[prmkarsghd68]               = 68;                                                   /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                         */
    PRM_code[prmpelgrensKOP02]           = "pelgrensKOP02";           PRM[prmpelgrensKOP02]           = 8;                                                    /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                    */
    PRM_code[prmstkp1]                   = "stkp1";                   PRM[prmstkp1]                   = 0;    PRM_type[prmstkp1]                   = TI_type; /* Start klokperiode nacht                                                                           */
    PRM_code[prmetkp1]                   = "etkp1";                   PRM[prmetkp1]                   = 0;    PRM_type[prmetkp1]                   = TI_type; /* Einde klokperiode nacht                                                                           */
    PRM_code[prmdckp1]                   = "dckp1";                   PRM[prmdckp1]                   = 10;                                                   /* Dagsoort klokperiode nacht                                                                        */
    PRM_code[prmstkp2]                   = "stkp2";                   PRM[prmstkp2]                   = 600;  PRM_type[prmstkp2]                   = TI_type; /* Start klokperiode dag                                                                             */
    PRM_code[prmetkp2]                   = "etkp2";                   PRM[prmetkp2]                   = 1900; PRM_type[prmetkp2]                   = TI_type; /* Einde klokperiode dag                                                                             */
    PRM_code[prmdckp2]                   = "dckp2";                   PRM[prmdckp2]                   = 8;                                                    /* Dagsoort klokperiode dag                                                                          */
    PRM_code[prmstkp3]                   = "stkp3";                   PRM[prmstkp3]                   = 700;  PRM_type[prmstkp3]                   = TI_type; /* Start klokperiode ochtend                                                                         */
    PRM_code[prmetkp3]                   = "etkp3";                   PRM[prmetkp3]                   = 930;  PRM_type[prmetkp3]                   = TI_type; /* Einde klokperiode ochtend                                                                         */
    PRM_code[prmdckp3]                   = "dckp3";                   PRM[prmdckp3]                   = 8;                                                    /* Dagsoort klokperiode ochtend                                                                      */
    PRM_code[prmstkp4]                   = "stkp4";                   PRM[prmstkp4]                   = 1530; PRM_type[prmstkp4]                   = TI_type; /* Start klokperiode avond                                                                           */
    PRM_code[prmetkp4]                   = "etkp4";                   PRM[prmetkp4]                   = 1830; PRM_type[prmetkp4]                   = TI_type; /* Einde klokperiode avond                                                                           */
    PRM_code[prmdckp4]                   = "dckp4";                   PRM[prmdckp4]                   = 8;                                                    /* Dagsoort klokperiode avond                                                                        */
    PRM_code[prmstkp5]                   = "stkp5";                   PRM[prmstkp5]                   = 1830; PRM_type[prmstkp5]                   = TI_type; /* Start klokperiode koopavond                                                                       */
    PRM_code[prmetkp5]                   = "etkp5";                   PRM[prmetkp5]                   = 2200; PRM_type[prmetkp5]                   = TI_type; /* Einde klokperiode koopavond                                                                       */
    PRM_code[prmdckp5]                   = "dckp5";                   PRM[prmdckp5]                   = 4;                                                    /* Dagsoort klokperiode koopavond                                                                    */
    PRM_code[prmstkp6]                   = "stkp6";                   PRM[prmstkp6]                   = 1030; PRM_type[prmstkp6]                   = TI_type; /* Start klokperiode weekend                                                                         */
    PRM_code[prmetkp6]                   = "etkp6";                   PRM[prmetkp6]                   = 1700; PRM_type[prmetkp6]                   = TI_type; /* Einde klokperiode weekend                                                                         */
    PRM_code[prmdckp6]                   = "dckp6";                   PRM[prmdckp6]                   = 9;                                                    /* Dagsoort klokperiode weekend                                                                      */
    PRM_code[prmstkp7]                   = "stkp7";                   PRM[prmstkp7]                   = 0;    PRM_type[prmstkp7]                   = TI_type; /* Start klokperiode reserve                                                                         */
    PRM_code[prmetkp7]                   = "etkp7";                   PRM[prmetkp7]                   = 0;    PRM_type[prmetkp7]                   = TI_type; /* Einde klokperiode reserve                                                                         */
    PRM_code[prmdckp7]                   = "dckp7";                   PRM[prmdckp7]                   = 10;                                                   /* Dagsoort klokperiode reserve                                                                      */
    PRM_code[prmstkpoFietsprio1]         = "stkpoFietsprio1";         PRM[prmstkpoFietsprio1]         = 0;    PRM_type[prmstkpoFietsprio1]         = TI_type; /* Start klokperiode Fietsprio1                                                                      */
    PRM_code[prmetkpoFietsprio1]         = "etkpoFietsprio1";         PRM[prmetkpoFietsprio1]         = 2400; PRM_type[prmetkpoFietsprio1]         = TI_type; /* Einde klokperiode Fietsprio1                                                                      */
    PRM_code[prmdckpoFietsprio1]         = "dckpoFietsprio1";         PRM[prmdckpoFietsprio1]         = 10;                                                   /* Dagsoort klokperiode Fietsprio1                                                                   */
    PRM_code[prmstkpoFietsprio2]         = "stkpoFietsprio2";         PRM[prmstkpoFietsprio2]         = 0;    PRM_type[prmstkpoFietsprio2]         = TI_type; /* Start klokperiode Fietsprio2                                                                      */
    PRM_code[prmetkpoFietsprio2]         = "etkpoFietsprio2";         PRM[prmetkpoFietsprio2]         = 0;    PRM_type[prmetkpoFietsprio2]         = TI_type; /* Einde klokperiode Fietsprio2                                                                      */
    PRM_code[prmdckpoFietsprio2]         = "dckpoFietsprio2";         PRM[prmdckpoFietsprio2]         = 10;                                                   /* Dagsoort klokperiode Fietsprio2                                                                   */
    PRM_code[prmstkpoFietsprio3]         = "stkpoFietsprio3";         PRM[prmstkpoFietsprio3]         = 0;    PRM_type[prmstkpoFietsprio3]         = TI_type; /* Start klokperiode Fietsprio3                                                                      */
    PRM_code[prmetkpoFietsprio3]         = "etkpoFietsprio3";         PRM[prmetkpoFietsprio3]         = 0;    PRM_type[prmetkpoFietsprio3]         = TI_type; /* Einde klokperiode Fietsprio3                                                                      */
    PRM_code[prmdckpoFietsprio3]         = "dckpoFietsprio3";         PRM[prmdckpoFietsprio3]         = 10;                                                   /* Dagsoort klokperiode Fietsprio3                                                                   */
    PRM_code[prmvg1_02]                  = "vg1_02";                  PRM[prmvg1_02]                  = 200;  PRM_type[prmvg1_02]                  = TE_type; /* Verlenggroentijd VG1 02                                                                           */
    PRM_code[prmvg1_03]                  = "vg1_03";                  PRM[prmvg1_03]                  = 150;  PRM_type[prmvg1_03]                  = TE_type; /* Verlenggroentijd VG1 03                                                                           */
    PRM_code[prmvg1_05]                  = "vg1_05";                  PRM[prmvg1_05]                  = 250;  PRM_type[prmvg1_05]                  = TE_type; /* Verlenggroentijd VG1 05                                                                           */
    PRM_code[prmvg1_08]                  = "vg1_08";                  PRM[prmvg1_08]                  = 200;  PRM_type[prmvg1_08]                  = TE_type; /* Verlenggroentijd VG1 08                                                                           */
    PRM_code[prmvg1_09]                  = "vg1_09";                  PRM[prmvg1_09]                  = 150;  PRM_type[prmvg1_09]                  = TE_type; /* Verlenggroentijd VG1 09                                                                           */
    PRM_code[prmvg1_11]                  = "vg1_11";                  PRM[prmvg1_11]                  = 150;  PRM_type[prmvg1_11]                  = TE_type; /* Verlenggroentijd VG1 11                                                                           */
    PRM_code[prmvg1_21]                  = "vg1_21";                  PRM[prmvg1_21]                  = 150;  PRM_type[prmvg1_21]                  = TE_type; /* Verlenggroentijd VG1 21                                                                           */
    PRM_code[prmvg1_22]                  = "vg1_22";                  PRM[prmvg1_22]                  = 150;  PRM_type[prmvg1_22]                  = TE_type; /* Verlenggroentijd VG1 22                                                                           */
    PRM_code[prmvg1_24]                  = "vg1_24";                  PRM[prmvg1_24]                  = 150;  PRM_type[prmvg1_24]                  = TE_type; /* Verlenggroentijd VG1 24                                                                           */
    PRM_code[prmvg1_26]                  = "vg1_26";                  PRM[prmvg1_26]                  = 150;  PRM_type[prmvg1_26]                  = TE_type; /* Verlenggroentijd VG1 26                                                                           */
    PRM_code[prmvg1_28]                  = "vg1_28";                  PRM[prmvg1_28]                  = 150;  PRM_type[prmvg1_28]                  = TE_type; /* Verlenggroentijd VG1 28                                                                           */
    PRM_code[prmvg1_61]                  = "vg1_61";                  PRM[prmvg1_61]                  = 50;   PRM_type[prmvg1_61]                  = TE_type; /* Verlenggroentijd VG1 61                                                                           */
    PRM_code[prmvg1_62]                  = "vg1_62";                  PRM[prmvg1_62]                  = 50;   PRM_type[prmvg1_62]                  = TE_type; /* Verlenggroentijd VG1 62                                                                           */
    PRM_code[prmvg1_67]                  = "vg1_67";                  PRM[prmvg1_67]                  = 50;   PRM_type[prmvg1_67]                  = TE_type; /* Verlenggroentijd VG1 67                                                                           */
    PRM_code[prmvg1_68]                  = "vg1_68";                  PRM[prmvg1_68]                  = 50;   PRM_type[prmvg1_68]                  = TE_type; /* Verlenggroentijd VG1 68                                                                           */
    PRM_code[prmvg1_81]                  = "vg1_81";                  PRM[prmvg1_81]                  = 150;  PRM_type[prmvg1_81]                  = TE_type; /* Verlenggroentijd VG1 81                                                                           */
    PRM_code[prmvg1_82]                  = "vg1_82";                  PRM[prmvg1_82]                  = 150;  PRM_type[prmvg1_82]                  = TE_type; /* Verlenggroentijd VG1 82                                                                           */
    PRM_code[prmvg1_84]                  = "vg1_84";                  PRM[prmvg1_84]                  = 150;  PRM_type[prmvg1_84]                  = TE_type; /* Verlenggroentijd VG1 84                                                                           */
    PRM_code[prmvg2_02]                  = "vg2_02";                  PRM[prmvg2_02]                  = 200;  PRM_type[prmvg2_02]                  = TE_type; /* Verlenggroentijd VG2 02                                                                           */
    PRM_code[prmvg2_03]                  = "vg2_03";                  PRM[prmvg2_03]                  = 150;  PRM_type[prmvg2_03]                  = TE_type; /* Verlenggroentijd VG2 03                                                                           */
    PRM_code[prmvg2_05]                  = "vg2_05";                  PRM[prmvg2_05]                  = 250;  PRM_type[prmvg2_05]                  = TE_type; /* Verlenggroentijd VG2 05                                                                           */
    PRM_code[prmvg2_08]                  = "vg2_08";                  PRM[prmvg2_08]                  = 200;  PRM_type[prmvg2_08]                  = TE_type; /* Verlenggroentijd VG2 08                                                                           */
    PRM_code[prmvg2_09]                  = "vg2_09";                  PRM[prmvg2_09]                  = 150;  PRM_type[prmvg2_09]                  = TE_type; /* Verlenggroentijd VG2 09                                                                           */
    PRM_code[prmvg2_11]                  = "vg2_11";                  PRM[prmvg2_11]                  = 150;  PRM_type[prmvg2_11]                  = TE_type; /* Verlenggroentijd VG2 11                                                                           */
    PRM_code[prmvg2_21]                  = "vg2_21";                  PRM[prmvg2_21]                  = 150;  PRM_type[prmvg2_21]                  = TE_type; /* Verlenggroentijd VG2 21                                                                           */
    PRM_code[prmvg2_22]                  = "vg2_22";                  PRM[prmvg2_22]                  = 150;  PRM_type[prmvg2_22]                  = TE_type; /* Verlenggroentijd VG2 22                                                                           */
    PRM_code[prmvg2_24]                  = "vg2_24";                  PRM[prmvg2_24]                  = 150;  PRM_type[prmvg2_24]                  = TE_type; /* Verlenggroentijd VG2 24                                                                           */
    PRM_code[prmvg2_26]                  = "vg2_26";                  PRM[prmvg2_26]                  = 150;  PRM_type[prmvg2_26]                  = TE_type; /* Verlenggroentijd VG2 26                                                                           */
    PRM_code[prmvg2_28]                  = "vg2_28";                  PRM[prmvg2_28]                  = 150;  PRM_type[prmvg2_28]                  = TE_type; /* Verlenggroentijd VG2 28                                                                           */
    PRM_code[prmvg2_61]                  = "vg2_61";                  PRM[prmvg2_61]                  = 50;   PRM_type[prmvg2_61]                  = TE_type; /* Verlenggroentijd VG2 61                                                                           */
    PRM_code[prmvg2_62]                  = "vg2_62";                  PRM[prmvg2_62]                  = 50;   PRM_type[prmvg2_62]                  = TE_type; /* Verlenggroentijd VG2 62                                                                           */
    PRM_code[prmvg2_67]                  = "vg2_67";                  PRM[prmvg2_67]                  = 50;   PRM_type[prmvg2_67]                  = TE_type; /* Verlenggroentijd VG2 67                                                                           */
    PRM_code[prmvg2_68]                  = "vg2_68";                  PRM[prmvg2_68]                  = 50;   PRM_type[prmvg2_68]                  = TE_type; /* Verlenggroentijd VG2 68                                                                           */
    PRM_code[prmvg2_81]                  = "vg2_81";                  PRM[prmvg2_81]                  = 150;  PRM_type[prmvg2_81]                  = TE_type; /* Verlenggroentijd VG2 81                                                                           */
    PRM_code[prmvg2_82]                  = "vg2_82";                  PRM[prmvg2_82]                  = 150;  PRM_type[prmvg2_82]                  = TE_type; /* Verlenggroentijd VG2 82                                                                           */
    PRM_code[prmvg2_84]                  = "vg2_84";                  PRM[prmvg2_84]                  = 150;  PRM_type[prmvg2_84]                  = TE_type; /* Verlenggroentijd VG2 84                                                                           */
    PRM_code[prmvg3_02]                  = "vg3_02";                  PRM[prmvg3_02]                  = 200;  PRM_type[prmvg3_02]                  = TE_type; /* Verlenggroentijd VG3 02                                                                           */
    PRM_code[prmvg3_03]                  = "vg3_03";                  PRM[prmvg3_03]                  = 150;  PRM_type[prmvg3_03]                  = TE_type; /* Verlenggroentijd VG3 03                                                                           */
    PRM_code[prmvg3_05]                  = "vg3_05";                  PRM[prmvg3_05]                  = 250;  PRM_type[prmvg3_05]                  = TE_type; /* Verlenggroentijd VG3 05                                                                           */
    PRM_code[prmvg3_08]                  = "vg3_08";                  PRM[prmvg3_08]                  = 200;  PRM_type[prmvg3_08]                  = TE_type; /* Verlenggroentijd VG3 08                                                                           */
    PRM_code[prmvg3_09]                  = "vg3_09";                  PRM[prmvg3_09]                  = 150;  PRM_type[prmvg3_09]                  = TE_type; /* Verlenggroentijd VG3 09                                                                           */
    PRM_code[prmvg3_11]                  = "vg3_11";                  PRM[prmvg3_11]                  = 150;  PRM_type[prmvg3_11]                  = TE_type; /* Verlenggroentijd VG3 11                                                                           */
    PRM_code[prmvg3_21]                  = "vg3_21";                  PRM[prmvg3_21]                  = 150;  PRM_type[prmvg3_21]                  = TE_type; /* Verlenggroentijd VG3 21                                                                           */
    PRM_code[prmvg3_22]                  = "vg3_22";                  PRM[prmvg3_22]                  = 150;  PRM_type[prmvg3_22]                  = TE_type; /* Verlenggroentijd VG3 22                                                                           */
    PRM_code[prmvg3_24]                  = "vg3_24";                  PRM[prmvg3_24]                  = 150;  PRM_type[prmvg3_24]                  = TE_type; /* Verlenggroentijd VG3 24                                                                           */
    PRM_code[prmvg3_26]                  = "vg3_26";                  PRM[prmvg3_26]                  = 150;  PRM_type[prmvg3_26]                  = TE_type; /* Verlenggroentijd VG3 26                                                                           */
    PRM_code[prmvg3_28]                  = "vg3_28";                  PRM[prmvg3_28]                  = 150;  PRM_type[prmvg3_28]                  = TE_type; /* Verlenggroentijd VG3 28                                                                           */
    PRM_code[prmvg3_61]                  = "vg3_61";                  PRM[prmvg3_61]                  = 50;   PRM_type[prmvg3_61]                  = TE_type; /* Verlenggroentijd VG3 61                                                                           */
    PRM_code[prmvg3_62]                  = "vg3_62";                  PRM[prmvg3_62]                  = 50;   PRM_type[prmvg3_62]                  = TE_type; /* Verlenggroentijd VG3 62                                                                           */
    PRM_code[prmvg3_67]                  = "vg3_67";                  PRM[prmvg3_67]                  = 50;   PRM_type[prmvg3_67]                  = TE_type; /* Verlenggroentijd VG3 67                                                                           */
    PRM_code[prmvg3_68]                  = "vg3_68";                  PRM[prmvg3_68]                  = 50;   PRM_type[prmvg3_68]                  = TE_type; /* Verlenggroentijd VG3 68                                                                           */
    PRM_code[prmvg3_81]                  = "vg3_81";                  PRM[prmvg3_81]                  = 150;  PRM_type[prmvg3_81]                  = TE_type; /* Verlenggroentijd VG3 81                                                                           */
    PRM_code[prmvg3_82]                  = "vg3_82";                  PRM[prmvg3_82]                  = 150;  PRM_type[prmvg3_82]                  = TE_type; /* Verlenggroentijd VG3 82                                                                           */
    PRM_code[prmvg3_84]                  = "vg3_84";                  PRM[prmvg3_84]                  = 150;  PRM_type[prmvg3_84]                  = TE_type; /* Verlenggroentijd VG3 84                                                                           */
    PRM_code[prmvg4_02]                  = "vg4_02";                  PRM[prmvg4_02]                  = 300;  PRM_type[prmvg4_02]                  = TE_type; /* Verlenggroentijd VG4 02                                                                           */
    PRM_code[prmvg4_03]                  = "vg4_03";                  PRM[prmvg4_03]                  = 150;  PRM_type[prmvg4_03]                  = TE_type; /* Verlenggroentijd VG4 03                                                                           */
    PRM_code[prmvg4_05]                  = "vg4_05";                  PRM[prmvg4_05]                  = 300;  PRM_type[prmvg4_05]                  = TE_type; /* Verlenggroentijd VG4 05                                                                           */
    PRM_code[prmvg4_08]                  = "vg4_08";                  PRM[prmvg4_08]                  = 250;  PRM_type[prmvg4_08]                  = TE_type; /* Verlenggroentijd VG4 08                                                                           */
    PRM_code[prmvg4_09]                  = "vg4_09";                  PRM[prmvg4_09]                  = 200;  PRM_type[prmvg4_09]                  = TE_type; /* Verlenggroentijd VG4 09                                                                           */
    PRM_code[prmvg4_11]                  = "vg4_11";                  PRM[prmvg4_11]                  = 250;  PRM_type[prmvg4_11]                  = TE_type; /* Verlenggroentijd VG4 11                                                                           */
    PRM_code[prmvg4_21]                  = "vg4_21";                  PRM[prmvg4_21]                  = 150;  PRM_type[prmvg4_21]                  = TE_type; /* Verlenggroentijd VG4 21                                                                           */
    PRM_code[prmvg4_22]                  = "vg4_22";                  PRM[prmvg4_22]                  = 150;  PRM_type[prmvg4_22]                  = TE_type; /* Verlenggroentijd VG4 22                                                                           */
    PRM_code[prmvg4_24]                  = "vg4_24";                  PRM[prmvg4_24]                  = 150;  PRM_type[prmvg4_24]                  = TE_type; /* Verlenggroentijd VG4 24                                                                           */
    PRM_code[prmvg4_26]                  = "vg4_26";                  PRM[prmvg4_26]                  = 150;  PRM_type[prmvg4_26]                  = TE_type; /* Verlenggroentijd VG4 26                                                                           */
    PRM_code[prmvg4_28]                  = "vg4_28";                  PRM[prmvg4_28]                  = 150;  PRM_type[prmvg4_28]                  = TE_type; /* Verlenggroentijd VG4 28                                                                           */
    PRM_code[prmvg4_61]                  = "vg4_61";                  PRM[prmvg4_61]                  = 50;   PRM_type[prmvg4_61]                  = TE_type; /* Verlenggroentijd VG4 61                                                                           */
    PRM_code[prmvg4_62]                  = "vg4_62";                  PRM[prmvg4_62]                  = 50;   PRM_type[prmvg4_62]                  = TE_type; /* Verlenggroentijd VG4 62                                                                           */
    PRM_code[prmvg4_67]                  = "vg4_67";                  PRM[prmvg4_67]                  = 50;   PRM_type[prmvg4_67]                  = TE_type; /* Verlenggroentijd VG4 67                                                                           */
    PRM_code[prmvg4_68]                  = "vg4_68";                  PRM[prmvg4_68]                  = 50;   PRM_type[prmvg4_68]                  = TE_type; /* Verlenggroentijd VG4 68                                                                           */
    PRM_code[prmvg4_81]                  = "vg4_81";                  PRM[prmvg4_81]                  = 150;  PRM_type[prmvg4_81]                  = TE_type; /* Verlenggroentijd VG4 81                                                                           */
    PRM_code[prmvg4_82]                  = "vg4_82";                  PRM[prmvg4_82]                  = 150;  PRM_type[prmvg4_82]                  = TE_type; /* Verlenggroentijd VG4 82                                                                           */
    PRM_code[prmvg4_84]                  = "vg4_84";                  PRM[prmvg4_84]                  = 150;  PRM_type[prmvg4_84]                  = TE_type; /* Verlenggroentijd VG4 84                                                                           */
    PRM_code[prmvg5_02]                  = "vg5_02";                  PRM[prmvg5_02]                  = 300;  PRM_type[prmvg5_02]                  = TE_type; /* Verlenggroentijd VG5 02                                                                           */
    PRM_code[prmvg5_03]                  = "vg5_03";                  PRM[prmvg5_03]                  = 150;  PRM_type[prmvg5_03]                  = TE_type; /* Verlenggroentijd VG5 03                                                                           */
    PRM_code[prmvg5_05]                  = "vg5_05";                  PRM[prmvg5_05]                  = 300;  PRM_type[prmvg5_05]                  = TE_type; /* Verlenggroentijd VG5 05                                                                           */
    PRM_code[prmvg5_08]                  = "vg5_08";                  PRM[prmvg5_08]                  = 250;  PRM_type[prmvg5_08]                  = TE_type; /* Verlenggroentijd VG5 08                                                                           */
    PRM_code[prmvg5_09]                  = "vg5_09";                  PRM[prmvg5_09]                  = 200;  PRM_type[prmvg5_09]                  = TE_type; /* Verlenggroentijd VG5 09                                                                           */
    PRM_code[prmvg5_11]                  = "vg5_11";                  PRM[prmvg5_11]                  = 250;  PRM_type[prmvg5_11]                  = TE_type; /* Verlenggroentijd VG5 11                                                                           */
    PRM_code[prmvg5_21]                  = "vg5_21";                  PRM[prmvg5_21]                  = 150;  PRM_type[prmvg5_21]                  = TE_type; /* Verlenggroentijd VG5 21                                                                           */
    PRM_code[prmvg5_22]                  = "vg5_22";                  PRM[prmvg5_22]                  = 150;  PRM_type[prmvg5_22]                  = TE_type; /* Verlenggroentijd VG5 22                                                                           */
    PRM_code[prmvg5_24]                  = "vg5_24";                  PRM[prmvg5_24]                  = 150;  PRM_type[prmvg5_24]                  = TE_type; /* Verlenggroentijd VG5 24                                                                           */
    PRM_code[prmvg5_26]                  = "vg5_26";                  PRM[prmvg5_26]                  = 150;  PRM_type[prmvg5_26]                  = TE_type; /* Verlenggroentijd VG5 26                                                                           */
    PRM_code[prmvg5_28]                  = "vg5_28";                  PRM[prmvg5_28]                  = 150;  PRM_type[prmvg5_28]                  = TE_type; /* Verlenggroentijd VG5 28                                                                           */
    PRM_code[prmvg5_61]                  = "vg5_61";                  PRM[prmvg5_61]                  = 50;   PRM_type[prmvg5_61]                  = TE_type; /* Verlenggroentijd VG5 61                                                                           */
    PRM_code[prmvg5_62]                  = "vg5_62";                  PRM[prmvg5_62]                  = 50;   PRM_type[prmvg5_62]                  = TE_type; /* Verlenggroentijd VG5 62                                                                           */
    PRM_code[prmvg5_67]                  = "vg5_67";                  PRM[prmvg5_67]                  = 50;   PRM_type[prmvg5_67]                  = TE_type; /* Verlenggroentijd VG5 67                                                                           */
    PRM_code[prmvg5_68]                  = "vg5_68";                  PRM[prmvg5_68]                  = 50;   PRM_type[prmvg5_68]                  = TE_type; /* Verlenggroentijd VG5 68                                                                           */
    PRM_code[prmvg5_81]                  = "vg5_81";                  PRM[prmvg5_81]                  = 150;  PRM_type[prmvg5_81]                  = TE_type; /* Verlenggroentijd VG5 81                                                                           */
    PRM_code[prmvg5_82]                  = "vg5_82";                  PRM[prmvg5_82]                  = 150;  PRM_type[prmvg5_82]                  = TE_type; /* Verlenggroentijd VG5 82                                                                           */
    PRM_code[prmvg5_84]                  = "vg5_84";                  PRM[prmvg5_84]                  = 150;  PRM_type[prmvg5_84]                  = TE_type; /* Verlenggroentijd VG5 84                                                                           */
    PRM_code[prmvg6_02]                  = "vg6_02";                  PRM[prmvg6_02]                  = 300;  PRM_type[prmvg6_02]                  = TE_type; /* Verlenggroentijd VG6 02                                                                           */
    PRM_code[prmvg6_03]                  = "vg6_03";                  PRM[prmvg6_03]                  = 150;  PRM_type[prmvg6_03]                  = TE_type; /* Verlenggroentijd VG6 03                                                                           */
    PRM_code[prmvg6_05]                  = "vg6_05";                  PRM[prmvg6_05]                  = 300;  PRM_type[prmvg6_05]                  = TE_type; /* Verlenggroentijd VG6 05                                                                           */
    PRM_code[prmvg6_08]                  = "vg6_08";                  PRM[prmvg6_08]                  = 250;  PRM_type[prmvg6_08]                  = TE_type; /* Verlenggroentijd VG6 08                                                                           */
    PRM_code[prmvg6_09]                  = "vg6_09";                  PRM[prmvg6_09]                  = 200;  PRM_type[prmvg6_09]                  = TE_type; /* Verlenggroentijd VG6 09                                                                           */
    PRM_code[prmvg6_11]                  = "vg6_11";                  PRM[prmvg6_11]                  = 250;  PRM_type[prmvg6_11]                  = TE_type; /* Verlenggroentijd VG6 11                                                                           */
    PRM_code[prmvg6_21]                  = "vg6_21";                  PRM[prmvg6_21]                  = 150;  PRM_type[prmvg6_21]                  = TE_type; /* Verlenggroentijd VG6 21                                                                           */
    PRM_code[prmvg6_22]                  = "vg6_22";                  PRM[prmvg6_22]                  = 150;  PRM_type[prmvg6_22]                  = TE_type; /* Verlenggroentijd VG6 22                                                                           */
    PRM_code[prmvg6_24]                  = "vg6_24";                  PRM[prmvg6_24]                  = 150;  PRM_type[prmvg6_24]                  = TE_type; /* Verlenggroentijd VG6 24                                                                           */
    PRM_code[prmvg6_26]                  = "vg6_26";                  PRM[prmvg6_26]                  = 150;  PRM_type[prmvg6_26]                  = TE_type; /* Verlenggroentijd VG6 26                                                                           */
    PRM_code[prmvg6_28]                  = "vg6_28";                  PRM[prmvg6_28]                  = 150;  PRM_type[prmvg6_28]                  = TE_type; /* Verlenggroentijd VG6 28                                                                           */
    PRM_code[prmvg6_61]                  = "vg6_61";                  PRM[prmvg6_61]                  = 50;   PRM_type[prmvg6_61]                  = TE_type; /* Verlenggroentijd VG6 61                                                                           */
    PRM_code[prmvg6_62]                  = "vg6_62";                  PRM[prmvg6_62]                  = 50;   PRM_type[prmvg6_62]                  = TE_type; /* Verlenggroentijd VG6 62                                                                           */
    PRM_code[prmvg6_67]                  = "vg6_67";                  PRM[prmvg6_67]                  = 50;   PRM_type[prmvg6_67]                  = TE_type; /* Verlenggroentijd VG6 67                                                                           */
    PRM_code[prmvg6_68]                  = "vg6_68";                  PRM[prmvg6_68]                  = 50;   PRM_type[prmvg6_68]                  = TE_type; /* Verlenggroentijd VG6 68                                                                           */
    PRM_code[prmvg6_81]                  = "vg6_81";                  PRM[prmvg6_81]                  = 150;  PRM_type[prmvg6_81]                  = TE_type; /* Verlenggroentijd VG6 81                                                                           */
    PRM_code[prmvg6_82]                  = "vg6_82";                  PRM[prmvg6_82]                  = 150;  PRM_type[prmvg6_82]                  = TE_type; /* Verlenggroentijd VG6 82                                                                           */
    PRM_code[prmvg6_84]                  = "vg6_84";                  PRM[prmvg6_84]                  = 150;  PRM_type[prmvg6_84]                  = TE_type; /* Verlenggroentijd VG6 84                                                                           */
    PRM_code[prmvg7_02]                  = "vg7_02";                  PRM[prmvg7_02]                  = 300;  PRM_type[prmvg7_02]                  = TE_type; /* Verlenggroentijd VG7 02                                                                           */
    PRM_code[prmvg7_03]                  = "vg7_03";                  PRM[prmvg7_03]                  = 150;  PRM_type[prmvg7_03]                  = TE_type; /* Verlenggroentijd VG7 03                                                                           */
    PRM_code[prmvg7_05]                  = "vg7_05";                  PRM[prmvg7_05]                  = 300;  PRM_type[prmvg7_05]                  = TE_type; /* Verlenggroentijd VG7 05                                                                           */
    PRM_code[prmvg7_08]                  = "vg7_08";                  PRM[prmvg7_08]                  = 250;  PRM_type[prmvg7_08]                  = TE_type; /* Verlenggroentijd VG7 08                                                                           */
    PRM_code[prmvg7_09]                  = "vg7_09";                  PRM[prmvg7_09]                  = 200;  PRM_type[prmvg7_09]                  = TE_type; /* Verlenggroentijd VG7 09                                                                           */
    PRM_code[prmvg7_11]                  = "vg7_11";                  PRM[prmvg7_11]                  = 250;  PRM_type[prmvg7_11]                  = TE_type; /* Verlenggroentijd VG7 11                                                                           */
    PRM_code[prmvg7_21]                  = "vg7_21";                  PRM[prmvg7_21]                  = 150;  PRM_type[prmvg7_21]                  = TE_type; /* Verlenggroentijd VG7 21                                                                           */
    PRM_code[prmvg7_22]                  = "vg7_22";                  PRM[prmvg7_22]                  = 150;  PRM_type[prmvg7_22]                  = TE_type; /* Verlenggroentijd VG7 22                                                                           */
    PRM_code[prmvg7_24]                  = "vg7_24";                  PRM[prmvg7_24]                  = 150;  PRM_type[prmvg7_24]                  = TE_type; /* Verlenggroentijd VG7 24                                                                           */
    PRM_code[prmvg7_26]                  = "vg7_26";                  PRM[prmvg7_26]                  = 150;  PRM_type[prmvg7_26]                  = TE_type; /* Verlenggroentijd VG7 26                                                                           */
    PRM_code[prmvg7_28]                  = "vg7_28";                  PRM[prmvg7_28]                  = 150;  PRM_type[prmvg7_28]                  = TE_type; /* Verlenggroentijd VG7 28                                                                           */
    PRM_code[prmvg7_61]                  = "vg7_61";                  PRM[prmvg7_61]                  = 50;   PRM_type[prmvg7_61]                  = TE_type; /* Verlenggroentijd VG7 61                                                                           */
    PRM_code[prmvg7_62]                  = "vg7_62";                  PRM[prmvg7_62]                  = 50;   PRM_type[prmvg7_62]                  = TE_type; /* Verlenggroentijd VG7 62                                                                           */
    PRM_code[prmvg7_67]                  = "vg7_67";                  PRM[prmvg7_67]                  = 50;   PRM_type[prmvg7_67]                  = TE_type; /* Verlenggroentijd VG7 67                                                                           */
    PRM_code[prmvg7_68]                  = "vg7_68";                  PRM[prmvg7_68]                  = 50;   PRM_type[prmvg7_68]                  = TE_type; /* Verlenggroentijd VG7 68                                                                           */
    PRM_code[prmvg7_81]                  = "vg7_81";                  PRM[prmvg7_81]                  = 150;  PRM_type[prmvg7_81]                  = TE_type; /* Verlenggroentijd VG7 81                                                                           */
    PRM_code[prmvg7_82]                  = "vg7_82";                  PRM[prmvg7_82]                  = 150;  PRM_type[prmvg7_82]                  = TE_type; /* Verlenggroentijd VG7 82                                                                           */
    PRM_code[prmvg7_84]                  = "vg7_84";                  PRM[prmvg7_84]                  = 150;  PRM_type[prmvg7_84]                  = TE_type; /* Verlenggroentijd VG7 84                                                                           */
    PRM_code[prmvg8_02]                  = "vg8_02";                  PRM[prmvg8_02]                  = 300;  PRM_type[prmvg8_02]                  = TE_type; /* Verlenggroentijd VG8 02                                                                           */
    PRM_code[prmvg8_03]                  = "vg8_03";                  PRM[prmvg8_03]                  = 300;  PRM_type[prmvg8_03]                  = TE_type; /* Verlenggroentijd VG8 03                                                                           */
    PRM_code[prmvg8_05]                  = "vg8_05";                  PRM[prmvg8_05]                  = 300;  PRM_type[prmvg8_05]                  = TE_type; /* Verlenggroentijd VG8 05                                                                           */
    PRM_code[prmvg8_08]                  = "vg8_08";                  PRM[prmvg8_08]                  = 300;  PRM_type[prmvg8_08]                  = TE_type; /* Verlenggroentijd VG8 08                                                                           */
    PRM_code[prmvg8_09]                  = "vg8_09";                  PRM[prmvg8_09]                  = 300;  PRM_type[prmvg8_09]                  = TE_type; /* Verlenggroentijd VG8 09                                                                           */
    PRM_code[prmvg8_11]                  = "vg8_11";                  PRM[prmvg8_11]                  = 300;  PRM_type[prmvg8_11]                  = TE_type; /* Verlenggroentijd VG8 11                                                                           */
    PRM_code[prmvg8_21]                  = "vg8_21";                  PRM[prmvg8_21]                  = 150;  PRM_type[prmvg8_21]                  = TE_type; /* Verlenggroentijd VG8 21                                                                           */
    PRM_code[prmvg8_22]                  = "vg8_22";                  PRM[prmvg8_22]                  = 150;  PRM_type[prmvg8_22]                  = TE_type; /* Verlenggroentijd VG8 22                                                                           */
    PRM_code[prmvg8_24]                  = "vg8_24";                  PRM[prmvg8_24]                  = 150;  PRM_type[prmvg8_24]                  = TE_type; /* Verlenggroentijd VG8 24                                                                           */
    PRM_code[prmvg8_26]                  = "vg8_26";                  PRM[prmvg8_26]                  = 150;  PRM_type[prmvg8_26]                  = TE_type; /* Verlenggroentijd VG8 26                                                                           */
    PRM_code[prmvg8_28]                  = "vg8_28";                  PRM[prmvg8_28]                  = 150;  PRM_type[prmvg8_28]                  = TE_type; /* Verlenggroentijd VG8 28                                                                           */
    PRM_code[prmvg8_61]                  = "vg8_61";                  PRM[prmvg8_61]                  = 300;  PRM_type[prmvg8_61]                  = TE_type; /* Verlenggroentijd VG8 61                                                                           */
    PRM_code[prmvg8_62]                  = "vg8_62";                  PRM[prmvg8_62]                  = 300;  PRM_type[prmvg8_62]                  = TE_type; /* Verlenggroentijd VG8 62                                                                           */
    PRM_code[prmvg8_67]                  = "vg8_67";                  PRM[prmvg8_67]                  = 300;  PRM_type[prmvg8_67]                  = TE_type; /* Verlenggroentijd VG8 67                                                                           */
    PRM_code[prmvg8_68]                  = "vg8_68";                  PRM[prmvg8_68]                  = 300;  PRM_type[prmvg8_68]                  = TE_type; /* Verlenggroentijd VG8 68                                                                           */
    PRM_code[prmvg8_81]                  = "vg8_81";                  PRM[prmvg8_81]                  = 150;  PRM_type[prmvg8_81]                  = TE_type; /* Verlenggroentijd VG8 81                                                                           */
    PRM_code[prmvg8_82]                  = "vg8_82";                  PRM[prmvg8_82]                  = 150;  PRM_type[prmvg8_82]                  = TE_type; /* Verlenggroentijd VG8 82                                                                           */
    PRM_code[prmvg8_84]                  = "vg8_84";                  PRM[prmvg8_84]                  = 150;  PRM_type[prmvg8_84]                  = TE_type; /* Verlenggroentijd VG8 84                                                                           */
    PRM_code[prmptp123456iks01]          = "ptp123456iks01";          PRM[prmptp123456iks01]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks02]          = "ptp123456iks02";          PRM[prmptp123456iks02]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks03]          = "ptp123456iks03";          PRM[prmptp123456iks03]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks04]          = "ptp123456iks04";          PRM[prmptp123456iks04]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks05]          = "ptp123456iks05";          PRM[prmptp123456iks05]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks06]          = "ptp123456iks06";          PRM[prmptp123456iks06]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks07]          = "ptp123456iks07";          PRM[prmptp123456iks07]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks08]          = "ptp123456iks08";          PRM[prmptp123456iks08]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks09]          = "ptp123456iks09";          PRM[prmptp123456iks09]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks10]          = "ptp123456iks10";          PRM[prmptp123456iks10]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks11]          = "ptp123456iks11";          PRM[prmptp123456iks11]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks12]          = "ptp123456iks12";          PRM[prmptp123456iks12]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks13]          = "ptp123456iks13";          PRM[prmptp123456iks13]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks14]          = "ptp123456iks14";          PRM[prmptp123456iks14]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks15]          = "ptp123456iks15";          PRM[prmptp123456iks15]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456iks16]          = "ptp123456iks16";          PRM[prmptp123456iks16]          = 2;                                                    /* Instelling inkomende signalen van ptp123456                                                       */
    PRM_code[prmptp123456uks01]          = "ptp123456uks01";          PRM[prmptp123456uks01]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks02]          = "ptp123456uks02";          PRM[prmptp123456uks02]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks03]          = "ptp123456uks03";          PRM[prmptp123456uks03]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks04]          = "ptp123456uks04";          PRM[prmptp123456uks04]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks05]          = "ptp123456uks05";          PRM[prmptp123456uks05]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks06]          = "ptp123456uks06";          PRM[prmptp123456uks06]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks07]          = "ptp123456uks07";          PRM[prmptp123456uks07]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks08]          = "ptp123456uks08";          PRM[prmptp123456uks08]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks09]          = "ptp123456uks09";          PRM[prmptp123456uks09]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks10]          = "ptp123456uks10";          PRM[prmptp123456uks10]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks11]          = "ptp123456uks11";          PRM[prmptp123456uks11]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks12]          = "ptp123456uks12";          PRM[prmptp123456uks12]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks13]          = "ptp123456uks13";          PRM[prmptp123456uks13]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks14]          = "ptp123456uks14";          PRM[prmptp123456uks14]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks15]          = "ptp123456uks15";          PRM[prmptp123456uks15]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp123456uks16]          = "ptp123456uks16";          PRM[prmptp123456uks16]          = 2;                                                    /* Instelling uitgaande signalen naar ptp123456                                                      */
    PRM_code[prmptp_ptp123456oke]        = "ptp_ptp123456oke";        PRM[prmptp_ptp123456oke]        = 0;                                                    /* PTP oke ptp123456                                                                                 */
    PRM_code[prmptp_ptp123456err]        = "ptp_ptp123456err";        PRM[prmptp_ptp123456err]        = 0;                                                    /* PTP error ptp123456                                                                               */
    PRM_code[prmptp_ptp123456err0]       = "ptp_ptp123456err0";       PRM[prmptp_ptp123456err0]       = 0;                                                    /* PTP error 0 ptp123456                                                                             */
    PRM_code[prmptp_ptp123456err1]       = "ptp_ptp123456err1";       PRM[prmptp_ptp123456err1]       = 0;                                                    /* PTP error 1 ptp123456                                                                             */
    PRM_code[prmptp_ptp123456err2]       = "ptp_ptp123456err2";       PRM[prmptp_ptp123456err2]       = 0;                                                    /* PTP error 2 ptp123456                                                                             */
    PRM_code[prmrisapproachid02]         = "risapproachid02";         PRM[prmrisapproachid02]         = 1;                                                    /* Approach id voor fase 02                                                                          */
    PRM_code[prmrisapproachid03]         = "risapproachid03";         PRM[prmrisapproachid03]         = 1;                                                    /* Approach id voor fase 03                                                                          */
    PRM_code[prmrisapproachid05]         = "risapproachid05";         PRM[prmrisapproachid05]         = 2;                                                    /* Approach id voor fase 05                                                                          */
    PRM_code[prmrisapproachid08]         = "risapproachid08";         PRM[prmrisapproachid08]         = 3;                                                    /* Approach id voor fase 08                                                                          */
    PRM_code[prmrisapproachid09]         = "risapproachid09";         PRM[prmrisapproachid09]         = 3;                                                    /* Approach id voor fase 09                                                                          */
    PRM_code[prmrisapproachid11]         = "risapproachid11";         PRM[prmrisapproachid11]         = 4;                                                    /* Approach id voor fase 11                                                                          */
    PRM_code[prmrisapproachid21]         = "risapproachid21";         PRM[prmrisapproachid21]         = 5;                                                    /* Approach id voor fase 21                                                                          */
    PRM_code[prmrisapproachid22]         = "risapproachid22";         PRM[prmrisapproachid22]         = 5;                                                    /* Approach id voor fase 22                                                                          */
    PRM_code[prmrisapproachid24]         = "risapproachid24";         PRM[prmrisapproachid24]         = 6;                                                    /* Approach id voor fase 24                                                                          */
    PRM_code[prmrisapproachid26]         = "risapproachid26";         PRM[prmrisapproachid26]         = 7;                                                    /* Approach id voor fase 26                                                                          */
    PRM_code[prmrisapproachid28]         = "risapproachid28";         PRM[prmrisapproachid28]         = 8;                                                    /* Approach id voor fase 28                                                                          */
    PRM_code[prmrisapproachid31]         = "risapproachid31";         PRM[prmrisapproachid31]         = 5;                                                    /* Approach id voor fase 31                                                                          */
    PRM_code[prmrisapproachid32]         = "risapproachid32";         PRM[prmrisapproachid32]         = 5;                                                    /* Approach id voor fase 32                                                                          */
    PRM_code[prmrisapproachid33]         = "risapproachid33";         PRM[prmrisapproachid33]         = 6;                                                    /* Approach id voor fase 33                                                                          */
    PRM_code[prmrisapproachid34]         = "risapproachid34";         PRM[prmrisapproachid34]         = 6;                                                    /* Approach id voor fase 34                                                                          */
    PRM_code[prmrisapproachid38]         = "risapproachid38";         PRM[prmrisapproachid38]         = 8;                                                    /* Approach id voor fase 38                                                                          */
    PRM_code[prmrisapproachid61]         = "risapproachid61";         PRM[prmrisapproachid61]         = 9;                                                    /* Approach id voor fase 61                                                                          */
    PRM_code[prmrisapproachid62]         = "risapproachid62";         PRM[prmrisapproachid62]         = 9;                                                    /* Approach id voor fase 62                                                                          */
    PRM_code[prmrisapproachid67]         = "risapproachid67";         PRM[prmrisapproachid67]         = 10;                                                   /* Approach id voor fase 67                                                                          */
    PRM_code[prmrisapproachid68]         = "risapproachid68";         PRM[prmrisapproachid68]         = 10;                                                   /* Approach id voor fase 68                                                                          */
    PRM_code[prmrisapproachid81]         = "risapproachid81";         PRM[prmrisapproachid81]         = 5;                                                    /* Approach id voor fase 81                                                                          */
    PRM_code[prmrisapproachid82]         = "risapproachid82";         PRM[prmrisapproachid82]         = 5;                                                    /* Approach id voor fase 82                                                                          */
    PRM_code[prmrisapproachid84]         = "risapproachid84";         PRM[prmrisapproachid84]         = 6;                                                    /* Approach id voor fase 84                                                                          */
    PRM_code[prmrislaneid02_1]           = "rislaneid02_1";           PRM[prmrislaneid02_1]           = 1;                                                    /* Lane id voor lane met index 1 bij fase 02                                                         */
    PRM_code[prmrislaneid02_2]           = "rislaneid02_2";           PRM[prmrislaneid02_2]           = 2;                                                    /* Lane id voor lane met index 2 bij fase 02                                                         */
    PRM_code[prmrislaneid03_1]           = "rislaneid03_1";           PRM[prmrislaneid03_1]           = 3;                                                    /* Lane id voor lane met index 1 bij fase 03                                                         */
    PRM_code[prmrislaneid05_1]           = "rislaneid05_1";           PRM[prmrislaneid05_1]           = 4;                                                    /* Lane id voor lane met index 1 bij fase 05                                                         */
    PRM_code[prmrislaneid08_1]           = "rislaneid08_1";           PRM[prmrislaneid08_1]           = 5;                                                    /* Lane id voor lane met index 1 bij fase 08                                                         */
    PRM_code[prmrislaneid08_2]           = "rislaneid08_2";           PRM[prmrislaneid08_2]           = 6;                                                    /* Lane id voor lane met index 2 bij fase 08                                                         */
    PRM_code[prmrislaneid09_1]           = "rislaneid09_1";           PRM[prmrislaneid09_1]           = 7;                                                    /* Lane id voor lane met index 1 bij fase 09                                                         */
    PRM_code[prmrislaneid11_1]           = "rislaneid11_1";           PRM[prmrislaneid11_1]           = 8;                                                    /* Lane id voor lane met index 1 bij fase 11                                                         */
    PRM_code[prmrislaneid21_1]           = "rislaneid21_1";           PRM[prmrislaneid21_1]           = 9;                                                    /* Lane id voor lane met index 1 bij fase 21                                                         */
    PRM_code[prmrislaneheading21_1]      = "rislaneheading21_1";      PRM[prmrislaneheading21_1]      = 270;                                                  /* Lane heading voor lane met index 1 bij fase 21                                                    */
    PRM_code[prmrislaneheadingmarge21_1] = "rislaneheadingmarge21_1"; PRM[prmrislaneheadingmarge21_1] = 45;                                                   /* Lane heading marge voor lane met index 1 bij fase 21                                              */
    PRM_code[prmrislaneid22_1]           = "rislaneid22_1";           PRM[prmrislaneid22_1]           = 10;                                                   /* Lane id voor lane met index 1 bij fase 22                                                         */
    PRM_code[prmrislaneheading22_1]      = "rislaneheading22_1";      PRM[prmrislaneheading22_1]      = 270;                                                  /* Lane heading voor lane met index 1 bij fase 22                                                    */
    PRM_code[prmrislaneheadingmarge22_1] = "rislaneheadingmarge22_1"; PRM[prmrislaneheadingmarge22_1] = 45;                                                   /* Lane heading marge voor lane met index 1 bij fase 22                                              */
    PRM_code[prmrislaneid22_2]           = "rislaneid22_2";           PRM[prmrislaneid22_2]           = 99;                                                   /* Lane id voor lane met index 2 bij fase 22                                                         */
    PRM_code[prmrislaneheading22_2]      = "rislaneheading22_2";      PRM[prmrislaneheading22_2]      = 270;                                                  /* Lane heading voor lane met index 2 bij fase 22                                                    */
    PRM_code[prmrislaneheadingmarge22_2] = "rislaneheadingmarge22_2"; PRM[prmrislaneheadingmarge22_2] = 45;                                                   /* Lane heading marge voor lane met index 2 bij fase 22                                              */
    PRM_code[prmrislaneid24_1]           = "rislaneid24_1";           PRM[prmrislaneid24_1]           = 11;                                                   /* Lane id voor lane met index 1 bij fase 24                                                         */
    PRM_code[prmrislaneheading24_1]      = "rislaneheading24_1";      PRM[prmrislaneheading24_1]      = 270;                                                  /* Lane heading voor lane met index 1 bij fase 24                                                    */
    PRM_code[prmrislaneheadingmarge24_1] = "rislaneheadingmarge24_1"; PRM[prmrislaneheadingmarge24_1] = 45;                                                   /* Lane heading marge voor lane met index 1 bij fase 24                                              */
    PRM_code[prmrislaneid26_1]           = "rislaneid26_1";           PRM[prmrislaneid26_1]           = 12;                                                   /* Lane id voor lane met index 1 bij fase 26                                                         */
    PRM_code[prmrislaneheading26_1]      = "rislaneheading26_1";      PRM[prmrislaneheading26_1]      = 270;                                                  /* Lane heading voor lane met index 1 bij fase 26                                                    */
    PRM_code[prmrislaneheadingmarge26_1] = "rislaneheadingmarge26_1"; PRM[prmrislaneheadingmarge26_1] = 45;                                                   /* Lane heading marge voor lane met index 1 bij fase 26                                              */
    PRM_code[prmrislaneid28_1]           = "rislaneid28_1";           PRM[prmrislaneid28_1]           = 13;                                                   /* Lane id voor lane met index 1 bij fase 28                                                         */
    PRM_code[prmrislaneheading28_1]      = "rislaneheading28_1";      PRM[prmrislaneheading28_1]      = 270;                                                  /* Lane heading voor lane met index 1 bij fase 28                                                    */
    PRM_code[prmrislaneheadingmarge28_1] = "rislaneheadingmarge28_1"; PRM[prmrislaneheadingmarge28_1] = 45;                                                   /* Lane heading marge voor lane met index 1 bij fase 28                                              */
    PRM_code[prmrislaneid31_1]           = "rislaneid31_1";           PRM[prmrislaneid31_1]           = 14;                                                   /* Lane id voor lane met index 1 bij fase 31                                                         */
    PRM_code[prmrislaneid31_2]           = "rislaneid31_2";           PRM[prmrislaneid31_2]           = 15;                                                   /* Lane id voor lane met index 2 bij fase 31                                                         */
    PRM_code[prmrislaneid32_1]           = "rislaneid32_1";           PRM[prmrislaneid32_1]           = 16;                                                   /* Lane id voor lane met index 1 bij fase 32                                                         */
    PRM_code[prmrislaneid32_2]           = "rislaneid32_2";           PRM[prmrislaneid32_2]           = 17;                                                   /* Lane id voor lane met index 2 bij fase 32                                                         */
    PRM_code[prmrislaneid33_1]           = "rislaneid33_1";           PRM[prmrislaneid33_1]           = 18;                                                   /* Lane id voor lane met index 1 bij fase 33                                                         */
    PRM_code[prmrislaneid33_2]           = "rislaneid33_2";           PRM[prmrislaneid33_2]           = 19;                                                   /* Lane id voor lane met index 2 bij fase 33                                                         */
    PRM_code[prmrislaneid34_1]           = "rislaneid34_1";           PRM[prmrislaneid34_1]           = 20;                                                   /* Lane id voor lane met index 1 bij fase 34                                                         */
    PRM_code[prmrislaneid34_2]           = "rislaneid34_2";           PRM[prmrislaneid34_2]           = 21;                                                   /* Lane id voor lane met index 2 bij fase 34                                                         */
    PRM_code[prmrislaneid38_1]           = "rislaneid38_1";           PRM[prmrislaneid38_1]           = 22;                                                   /* Lane id voor lane met index 1 bij fase 38                                                         */
    PRM_code[prmrislaneid38_2]           = "rislaneid38_2";           PRM[prmrislaneid38_2]           = 23;                                                   /* Lane id voor lane met index 2 bij fase 38                                                         */
    PRM_code[prmrislaneid61_1]           = "rislaneid61_1";           PRM[prmrislaneid61_1]           = 24;                                                   /* Lane id voor lane met index 1 bij fase 61                                                         */
    PRM_code[prmrislaneid62_1]           = "rislaneid62_1";           PRM[prmrislaneid62_1]           = 25;                                                   /* Lane id voor lane met index 1 bij fase 62                                                         */
    PRM_code[prmrislaneid62_2]           = "rislaneid62_2";           PRM[prmrislaneid62_2]           = 26;                                                   /* Lane id voor lane met index 2 bij fase 62                                                         */
    PRM_code[prmrislaneid67_1]           = "rislaneid67_1";           PRM[prmrislaneid67_1]           = 27;                                                   /* Lane id voor lane met index 1 bij fase 67                                                         */
    PRM_code[prmrislaneid68_1]           = "rislaneid68_1";           PRM[prmrislaneid68_1]           = 28;                                                   /* Lane id voor lane met index 1 bij fase 68                                                         */
    PRM_code[prmrislaneid68_2]           = "rislaneid68_2";           PRM[prmrislaneid68_2]           = 29;                                                   /* Lane id voor lane met index 2 bij fase 68                                                         */
    PRM_code[prmrislaneid81_1]           = "rislaneid81_1";           PRM[prmrislaneid81_1]           = 30;                                                   /* Lane id voor lane met index 1 bij fase 81                                                         */
    PRM_code[prmrislaneid82_1]           = "rislaneid82_1";           PRM[prmrislaneid82_1]           = 31;                                                   /* Lane id voor lane met index 1 bij fase 82                                                         */
    PRM_code[prmrislaneid84_1]           = "rislaneid84_1";           PRM[prmrislaneid84_1]           = 32;                                                   /* Lane id voor lane met index 1 bij fase 84                                                         */
    PRM_code[prmrisastart02mveh1]        = "risastart02mveh1";        PRM[prmrisastart02mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                  */
    PRM_code[prmrisastartsrm002mveh1]    = "risastartsrm002mveh1";    PRM[prmrisastartsrm002mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                 */
    PRM_code[prmrisastart02mveh2]        = "risastart02mveh2";        PRM[prmrisastart02mveh2]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                  */
    PRM_code[prmrisastartsrm002mveh2]    = "risastartsrm002mveh2";    PRM[prmrisastartsrm002mveh2]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                 */
    PRM_code[prmrisastart03mveh1]        = "risastart03mveh1";        PRM[prmrisastart03mveh1]        = 1;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                  */
    PRM_code[prmrisastartsrm003mveh1]    = "risastartsrm003mveh1";    PRM[prmrisastartsrm003mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                 */
    PRM_code[prmrisastart05mveh1]        = "risastart05mveh1";        PRM[prmrisastart05mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                  */
    PRM_code[prmrisastartsrm005mveh1]    = "risastartsrm005mveh1";    PRM[prmrisastartsrm005mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                 */
    PRM_code[prmrisastart08mveh1]        = "risastart08mveh1";        PRM[prmrisastart08mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                  */
    PRM_code[prmrisastartsrm008mveh1]    = "risastartsrm008mveh1";    PRM[prmrisastartsrm008mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                 */
    PRM_code[prmrisastart08mveh2]        = "risastart08mveh2";        PRM[prmrisastart08mveh2]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                  */
    PRM_code[prmrisastartsrm008mveh2]    = "risastartsrm008mveh2";    PRM[prmrisastartsrm008mveh2]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                 */
    PRM_code[prmrisastart09mveh1]        = "risastart09mveh1";        PRM[prmrisastart09mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                  */
    PRM_code[prmrisastartsrm009mveh1]    = "risastartsrm009mveh1";    PRM[prmrisastartsrm009mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                 */
    PRM_code[prmrisastart11mveh1]        = "risastart11mveh1";        PRM[prmrisastart11mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                  */
    PRM_code[prmrisastartsrm011mveh1]    = "risastartsrm011mveh1";    PRM[prmrisastartsrm011mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                 */
    PRM_code[prmrisastart21fts1]         = "risastart21fts1";         PRM[prmrisastart21fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                  */
    PRM_code[prmrisastartsrm021fts1]     = "risastartsrm021fts1";     PRM[prmrisastartsrm021fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                 */
    PRM_code[prmrisastart22fts1]         = "risastart22fts1";         PRM[prmrisastart22fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                  */
    PRM_code[prmrisastartsrm022fts1]     = "risastartsrm022fts1";     PRM[prmrisastartsrm022fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                 */
    PRM_code[prmrisastart22fts2]         = "risastart22fts2";         PRM[prmrisastart22fts2]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                  */
    PRM_code[prmrisastartsrm022fts2]     = "risastartsrm022fts2";     PRM[prmrisastartsrm022fts2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                 */
    PRM_code[prmrisastart24fts1]         = "risastart24fts1";         PRM[prmrisastart24fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                  */
    PRM_code[prmrisastartsrm024fts1]     = "risastartsrm024fts1";     PRM[prmrisastartsrm024fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                 */
    PRM_code[prmrisastart26fts1]         = "risastart26fts1";         PRM[prmrisastart26fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                  */
    PRM_code[prmrisastartsrm026fts1]     = "risastartsrm026fts1";     PRM[prmrisastartsrm026fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                 */
    PRM_code[prmrisastart28fts1]         = "risastart28fts1";         PRM[prmrisastart28fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                  */
    PRM_code[prmrisastartsrm028fts1]     = "risastartsrm028fts1";     PRM[prmrisastartsrm028fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                 */
    PRM_code[prmrisastart31vtg1]         = "risastart31vtg1";         PRM[prmrisastart31vtg1]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                  */
    PRM_code[prmrisastartsrm031vtg1]     = "risastartsrm031vtg1";     PRM[prmrisastartsrm031vtg1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                 */
    PRM_code[prmrisastart31vtg2]         = "risastart31vtg2";         PRM[prmrisastart31vtg2]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                  */
    PRM_code[prmrisastartsrm031vtg2]     = "risastartsrm031vtg2";     PRM[prmrisastartsrm031vtg2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                 */
    PRM_code[prmrisastart32vtg1]         = "risastart32vtg1";         PRM[prmrisastart32vtg1]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                  */
    PRM_code[prmrisastartsrm032vtg1]     = "risastartsrm032vtg1";     PRM[prmrisastartsrm032vtg1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                 */
    PRM_code[prmrisastart32vtg2]         = "risastart32vtg2";         PRM[prmrisastart32vtg2]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                  */
    PRM_code[prmrisastartsrm032vtg2]     = "risastartsrm032vtg2";     PRM[prmrisastartsrm032vtg2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                 */
    PRM_code[prmrisastart33vtg1]         = "risastart33vtg1";         PRM[prmrisastart33vtg1]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                  */
    PRM_code[prmrisastartsrm033vtg1]     = "risastartsrm033vtg1";     PRM[prmrisastartsrm033vtg1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                 */
    PRM_code[prmrisastart33vtg2]         = "risastart33vtg2";         PRM[prmrisastart33vtg2]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                  */
    PRM_code[prmrisastartsrm033vtg2]     = "risastartsrm033vtg2";     PRM[prmrisastartsrm033vtg2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                 */
    PRM_code[prmrisastart34vtg1]         = "risastart34vtg1";         PRM[prmrisastart34vtg1]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                  */
    PRM_code[prmrisastartsrm034vtg1]     = "risastartsrm034vtg1";     PRM[prmrisastartsrm034vtg1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                 */
    PRM_code[prmrisastart34vtg2]         = "risastart34vtg2";         PRM[prmrisastart34vtg2]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                  */
    PRM_code[prmrisastartsrm034vtg2]     = "risastartsrm034vtg2";     PRM[prmrisastartsrm034vtg2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                 */
    PRM_code[prmrisastart38vtg1]         = "risastart38vtg1";         PRM[prmrisastart38vtg1]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                  */
    PRM_code[prmrisastartsrm038vtg1]     = "risastartsrm038vtg1";     PRM[prmrisastartsrm038vtg1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                 */
    PRM_code[prmrisastart84fts1]         = "risastart84fts1";         PRM[prmrisastart84fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                  */
    PRM_code[prmrisastartsrm084fts1]     = "risastartsrm084fts1";     PRM[prmrisastartsrm084fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                 */
    PRM_code[prmrisastart82fts1]         = "risastart82fts1";         PRM[prmrisastart82fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                  */
    PRM_code[prmrisastartsrm082fts1]     = "risastartsrm082fts1";     PRM[prmrisastartsrm082fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                 */
    PRM_code[prmrisastart81fts1]         = "risastart81fts1";         PRM[prmrisastart81fts1]         = 20;                                                   /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                  */
    PRM_code[prmrisastartsrm081fts1]     = "risastartsrm081fts1";     PRM[prmrisastartsrm081fts1]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                 */
    PRM_code[prmrisastart68mveh2]        = "risastart68mveh2";        PRM[prmrisastart68mveh2]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                  */
    PRM_code[prmrisastartsrm068mveh2]    = "risastartsrm068mveh2";    PRM[prmrisastartsrm068mveh2]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                 */
    PRM_code[prmrisastart68mveh1]        = "risastart68mveh1";        PRM[prmrisastart68mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                  */
    PRM_code[prmrisastartsrm068mveh1]    = "risastartsrm068mveh1";    PRM[prmrisastartsrm068mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                 */
    PRM_code[prmrisastart67mveh1]        = "risastart67mveh1";        PRM[prmrisastart67mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                  */
    PRM_code[prmrisastartsrm067mveh1]    = "risastartsrm067mveh1";    PRM[prmrisastartsrm067mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                 */
    PRM_code[prmrisastart62mveh2]        = "risastart62mveh2";        PRM[prmrisastart62mveh2]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                  */
    PRM_code[prmrisastartsrm062mveh2]    = "risastartsrm062mveh2";    PRM[prmrisastartsrm062mveh2]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                 */
    PRM_code[prmrisastart62mveh1]        = "risastart62mveh1";        PRM[prmrisastart62mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                  */
    PRM_code[prmrisastartsrm062mveh1]    = "risastartsrm062mveh1";    PRM[prmrisastartsrm062mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                 */
    PRM_code[prmrisastart61mveh1]        = "risastart61mveh1";        PRM[prmrisastart61mveh1]        = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                  */
    PRM_code[prmrisastartsrm061mveh1]    = "risastartsrm061mveh1";    PRM[prmrisastartsrm061mveh1]    = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                 */
    PRM_code[prmrisastart38vtg2]         = "risastart38vtg2";         PRM[prmrisastart38vtg2]         = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                  */
    PRM_code[prmrisastartsrm038vtg2]     = "risastartsrm038vtg2";     PRM[prmrisastartsrm038vtg2]     = 0;                                                    /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                 */
    PRM_code[prmrisaend02mveh1]          = "risaend02mveh1";          PRM[prmrisaend02mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                  */
    PRM_code[prmrisaendsrm002mveh1]      = "risaendsrm002mveh1";      PRM[prmrisaendsrm002mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                 */
    PRM_code[prmrisaend02mveh2]          = "risaend02mveh2";          PRM[prmrisaend02mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                  */
    PRM_code[prmrisaendsrm002mveh2]      = "risaendsrm002mveh2";      PRM[prmrisaendsrm002mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                 */
    PRM_code[prmrisaend03mveh1]          = "risaend03mveh1";          PRM[prmrisaend03mveh1]          = 1;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                  */
    PRM_code[prmrisaendsrm003mveh1]      = "risaendsrm003mveh1";      PRM[prmrisaendsrm003mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                 */
    PRM_code[prmrisaend05mveh1]          = "risaend05mveh1";          PRM[prmrisaend05mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                  */
    PRM_code[prmrisaendsrm005mveh1]      = "risaendsrm005mveh1";      PRM[prmrisaendsrm005mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                 */
    PRM_code[prmrisaend08mveh1]          = "risaend08mveh1";          PRM[prmrisaend08mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                  */
    PRM_code[prmrisaendsrm008mveh1]      = "risaendsrm008mveh1";      PRM[prmrisaendsrm008mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                 */
    PRM_code[prmrisaend08mveh2]          = "risaend08mveh2";          PRM[prmrisaend08mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                  */
    PRM_code[prmrisaendsrm008mveh2]      = "risaendsrm008mveh2";      PRM[prmrisaendsrm008mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                 */
    PRM_code[prmrisaend09mveh1]          = "risaend09mveh1";          PRM[prmrisaend09mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                  */
    PRM_code[prmrisaendsrm009mveh1]      = "risaendsrm009mveh1";      PRM[prmrisaendsrm009mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                 */
    PRM_code[prmrisaend11mveh1]          = "risaend11mveh1";          PRM[prmrisaend11mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                  */
    PRM_code[prmrisaendsrm011mveh1]      = "risaendsrm011mveh1";      PRM[prmrisaendsrm011mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                 */
    PRM_code[prmrisaend21fts1]           = "risaend21fts1";           PRM[prmrisaend21fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                  */
    PRM_code[prmrisaendsrm021fts1]       = "risaendsrm021fts1";       PRM[prmrisaendsrm021fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                 */
    PRM_code[prmrisaend22fts1]           = "risaend22fts1";           PRM[prmrisaend22fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                  */
    PRM_code[prmrisaendsrm022fts1]       = "risaendsrm022fts1";       PRM[prmrisaendsrm022fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                 */
    PRM_code[prmrisaend22fts2]           = "risaend22fts2";           PRM[prmrisaend22fts2]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                  */
    PRM_code[prmrisaendsrm022fts2]       = "risaendsrm022fts2";       PRM[prmrisaendsrm022fts2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                 */
    PRM_code[prmrisaend24fts1]           = "risaend24fts1";           PRM[prmrisaend24fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                  */
    PRM_code[prmrisaendsrm024fts1]       = "risaendsrm024fts1";       PRM[prmrisaendsrm024fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                 */
    PRM_code[prmrisaend26fts1]           = "risaend26fts1";           PRM[prmrisaend26fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                  */
    PRM_code[prmrisaendsrm026fts1]       = "risaendsrm026fts1";       PRM[prmrisaendsrm026fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                 */
    PRM_code[prmrisaend28fts1]           = "risaend28fts1";           PRM[prmrisaend28fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                  */
    PRM_code[prmrisaendsrm028fts1]       = "risaendsrm028fts1";       PRM[prmrisaendsrm028fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                 */
    PRM_code[prmrisaend31vtg1]           = "risaend31vtg1";           PRM[prmrisaend31vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                  */
    PRM_code[prmrisaendsrm031vtg1]       = "risaendsrm031vtg1";       PRM[prmrisaendsrm031vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                 */
    PRM_code[prmrisaend31vtg2]           = "risaend31vtg2";           PRM[prmrisaend31vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                  */
    PRM_code[prmrisaendsrm031vtg2]       = "risaendsrm031vtg2";       PRM[prmrisaendsrm031vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                 */
    PRM_code[prmrisaend32vtg1]           = "risaend32vtg1";           PRM[prmrisaend32vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                  */
    PRM_code[prmrisaendsrm032vtg1]       = "risaendsrm032vtg1";       PRM[prmrisaendsrm032vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                 */
    PRM_code[prmrisaend32vtg2]           = "risaend32vtg2";           PRM[prmrisaend32vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                  */
    PRM_code[prmrisaendsrm032vtg2]       = "risaendsrm032vtg2";       PRM[prmrisaendsrm032vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                 */
    PRM_code[prmrisaend33vtg1]           = "risaend33vtg1";           PRM[prmrisaend33vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                  */
    PRM_code[prmrisaendsrm033vtg1]       = "risaendsrm033vtg1";       PRM[prmrisaendsrm033vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                 */
    PRM_code[prmrisaend33vtg2]           = "risaend33vtg2";           PRM[prmrisaend33vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                  */
    PRM_code[prmrisaendsrm033vtg2]       = "risaendsrm033vtg2";       PRM[prmrisaendsrm033vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                 */
    PRM_code[prmrisaend34vtg1]           = "risaend34vtg1";           PRM[prmrisaend34vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                  */
    PRM_code[prmrisaendsrm034vtg1]       = "risaendsrm034vtg1";       PRM[prmrisaendsrm034vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                 */
    PRM_code[prmrisaend34vtg2]           = "risaend34vtg2";           PRM[prmrisaend34vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                  */
    PRM_code[prmrisaendsrm034vtg2]       = "risaendsrm034vtg2";       PRM[prmrisaendsrm034vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                 */
    PRM_code[prmrisaend38vtg1]           = "risaend38vtg1";           PRM[prmrisaend38vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                  */
    PRM_code[prmrisaendsrm038vtg1]       = "risaendsrm038vtg1";       PRM[prmrisaendsrm038vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                 */
    PRM_code[prmrisaend84fts1]           = "risaend84fts1";           PRM[prmrisaend84fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                  */
    PRM_code[prmrisaendsrm084fts1]       = "risaendsrm084fts1";       PRM[prmrisaendsrm084fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                 */
    PRM_code[prmrisaend82fts1]           = "risaend82fts1";           PRM[prmrisaend82fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                  */
    PRM_code[prmrisaendsrm082fts1]       = "risaendsrm082fts1";       PRM[prmrisaendsrm082fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                 */
    PRM_code[prmrisaend81fts1]           = "risaend81fts1";           PRM[prmrisaend81fts1]           = 40;                                                   /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                  */
    PRM_code[prmrisaendsrm081fts1]       = "risaendsrm081fts1";       PRM[prmrisaendsrm081fts1]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                 */
    PRM_code[prmrisaend68mveh2]          = "risaend68mveh2";          PRM[prmrisaend68mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                  */
    PRM_code[prmrisaendsrm068mveh2]      = "risaendsrm068mveh2";      PRM[prmrisaendsrm068mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                 */
    PRM_code[prmrisaend68mveh1]          = "risaend68mveh1";          PRM[prmrisaend68mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                  */
    PRM_code[prmrisaendsrm068mveh1]      = "risaendsrm068mveh1";      PRM[prmrisaendsrm068mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                 */
    PRM_code[prmrisaend67mveh1]          = "risaend67mveh1";          PRM[prmrisaend67mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                  */
    PRM_code[prmrisaendsrm067mveh1]      = "risaendsrm067mveh1";      PRM[prmrisaendsrm067mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                 */
    PRM_code[prmrisaend62mveh2]          = "risaend62mveh2";          PRM[prmrisaend62mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                  */
    PRM_code[prmrisaendsrm062mveh2]      = "risaendsrm062mveh2";      PRM[prmrisaendsrm062mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                 */
    PRM_code[prmrisaend62mveh1]          = "risaend62mveh1";          PRM[prmrisaend62mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                  */
    PRM_code[prmrisaendsrm062mveh1]      = "risaendsrm062mveh1";      PRM[prmrisaendsrm062mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                 */
    PRM_code[prmrisaend61mveh1]          = "risaend61mveh1";          PRM[prmrisaend61mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                  */
    PRM_code[prmrisaendsrm061mveh1]      = "risaendsrm061mveh1";      PRM[prmrisaendsrm061mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                 */
    PRM_code[prmrisaend38vtg2]           = "risaend38vtg2";           PRM[prmrisaend38vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                  */
    PRM_code[prmrisaendsrm038vtg2]       = "risaendsrm038vtg2";       PRM[prmrisaendsrm038vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                 */
    PRM_code[prmrisvstart02mveh1]        = "risvstart02mveh1";        PRM[prmrisvstart02mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                   */
    PRM_code[prmrisvstartsrm002mveh1]    = "risvstartsrm002mveh1";    PRM[prmrisvstartsrm002mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                  */
    PRM_code[prmrisvstart02mveh2]        = "risvstart02mveh2";        PRM[prmrisvstart02mveh2]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                   */
    PRM_code[prmrisvstartsrm002mveh2]    = "risvstartsrm002mveh2";    PRM[prmrisvstartsrm002mveh2]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                  */
    PRM_code[prmrisvstart03mveh1]        = "risvstart03mveh1";        PRM[prmrisvstart03mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                   */
    PRM_code[prmrisvstartsrm003mveh1]    = "risvstartsrm003mveh1";    PRM[prmrisvstartsrm003mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                  */
    PRM_code[prmrisvstart05mveh1]        = "risvstart05mveh1";        PRM[prmrisvstart05mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                   */
    PRM_code[prmrisvstartsrm005mveh1]    = "risvstartsrm005mveh1";    PRM[prmrisvstartsrm005mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                  */
    PRM_code[prmrisvstart08mveh1]        = "risvstart08mveh1";        PRM[prmrisvstart08mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                   */
    PRM_code[prmrisvstartsrm008mveh1]    = "risvstartsrm008mveh1";    PRM[prmrisvstartsrm008mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                  */
    PRM_code[prmrisvstart08mveh2]        = "risvstart08mveh2";        PRM[prmrisvstart08mveh2]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                   */
    PRM_code[prmrisvstartsrm008mveh2]    = "risvstartsrm008mveh2";    PRM[prmrisvstartsrm008mveh2]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                  */
    PRM_code[prmrisvstart09mveh1]        = "risvstart09mveh1";        PRM[prmrisvstart09mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                   */
    PRM_code[prmrisvstartsrm009mveh1]    = "risvstartsrm009mveh1";    PRM[prmrisvstartsrm009mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                  */
    PRM_code[prmrisvstart11mveh1]        = "risvstart11mveh1";        PRM[prmrisvstart11mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                   */
    PRM_code[prmrisvstartsrm011mveh1]    = "risvstartsrm011mveh1";    PRM[prmrisvstartsrm011mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                  */
    PRM_code[prmrisvstart21fts1]         = "risvstart21fts1";         PRM[prmrisvstart21fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                   */
    PRM_code[prmrisvstartsrm021fts1]     = "risvstartsrm021fts1";     PRM[prmrisvstartsrm021fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                  */
    PRM_code[prmrisvstart22fts1]         = "risvstart22fts1";         PRM[prmrisvstart22fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                   */
    PRM_code[prmrisvstartsrm022fts1]     = "risvstartsrm022fts1";     PRM[prmrisvstartsrm022fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                  */
    PRM_code[prmrisvstart22fts2]         = "risvstart22fts2";         PRM[prmrisvstart22fts2]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                   */
    PRM_code[prmrisvstartsrm022fts2]     = "risvstartsrm022fts2";     PRM[prmrisvstartsrm022fts2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                  */
    PRM_code[prmrisvstart24fts1]         = "risvstart24fts1";         PRM[prmrisvstart24fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                   */
    PRM_code[prmrisvstartsrm024fts1]     = "risvstartsrm024fts1";     PRM[prmrisvstartsrm024fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                  */
    PRM_code[prmrisvstart26fts1]         = "risvstart26fts1";         PRM[prmrisvstart26fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                   */
    PRM_code[prmrisvstartsrm026fts1]     = "risvstartsrm026fts1";     PRM[prmrisvstartsrm026fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                  */
    PRM_code[prmrisvstart28fts1]         = "risvstart28fts1";         PRM[prmrisvstart28fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                   */
    PRM_code[prmrisvstartsrm028fts1]     = "risvstartsrm028fts1";     PRM[prmrisvstartsrm028fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                  */
    PRM_code[prmrisvstart31vtg1]         = "risvstart31vtg1";         PRM[prmrisvstart31vtg1]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                   */
    PRM_code[prmrisvstartsrm031vtg1]     = "risvstartsrm031vtg1";     PRM[prmrisvstartsrm031vtg1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                  */
    PRM_code[prmrisvstart31vtg2]         = "risvstart31vtg2";         PRM[prmrisvstart31vtg2]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                   */
    PRM_code[prmrisvstartsrm031vtg2]     = "risvstartsrm031vtg2";     PRM[prmrisvstartsrm031vtg2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                  */
    PRM_code[prmrisvstart32vtg1]         = "risvstart32vtg1";         PRM[prmrisvstart32vtg1]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                   */
    PRM_code[prmrisvstartsrm032vtg1]     = "risvstartsrm032vtg1";     PRM[prmrisvstartsrm032vtg1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                  */
    PRM_code[prmrisvstart32vtg2]         = "risvstart32vtg2";         PRM[prmrisvstart32vtg2]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                   */
    PRM_code[prmrisvstartsrm032vtg2]     = "risvstartsrm032vtg2";     PRM[prmrisvstartsrm032vtg2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                  */
    PRM_code[prmrisvstart33vtg1]         = "risvstart33vtg1";         PRM[prmrisvstart33vtg1]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                   */
    PRM_code[prmrisvstartsrm033vtg1]     = "risvstartsrm033vtg1";     PRM[prmrisvstartsrm033vtg1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                  */
    PRM_code[prmrisvstart33vtg2]         = "risvstart33vtg2";         PRM[prmrisvstart33vtg2]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                   */
    PRM_code[prmrisvstartsrm033vtg2]     = "risvstartsrm033vtg2";     PRM[prmrisvstartsrm033vtg2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                  */
    PRM_code[prmrisvstart34vtg1]         = "risvstart34vtg1";         PRM[prmrisvstart34vtg1]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                   */
    PRM_code[prmrisvstartsrm034vtg1]     = "risvstartsrm034vtg1";     PRM[prmrisvstartsrm034vtg1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                  */
    PRM_code[prmrisvstart34vtg2]         = "risvstart34vtg2";         PRM[prmrisvstart34vtg2]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                   */
    PRM_code[prmrisvstartsrm034vtg2]     = "risvstartsrm034vtg2";     PRM[prmrisvstartsrm034vtg2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                  */
    PRM_code[prmrisvstart38vtg1]         = "risvstart38vtg1";         PRM[prmrisvstart38vtg1]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                   */
    PRM_code[prmrisvstartsrm038vtg1]     = "risvstartsrm038vtg1";     PRM[prmrisvstartsrm038vtg1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                  */
    PRM_code[prmrisvstart84fts1]         = "risvstart84fts1";         PRM[prmrisvstart84fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                   */
    PRM_code[prmrisvstartsrm084fts1]     = "risvstartsrm084fts1";     PRM[prmrisvstartsrm084fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                  */
    PRM_code[prmrisvstart82fts1]         = "risvstart82fts1";         PRM[prmrisvstart82fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                   */
    PRM_code[prmrisvstartsrm082fts1]     = "risvstartsrm082fts1";     PRM[prmrisvstartsrm082fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                  */
    PRM_code[prmrisvstart81fts1]         = "risvstart81fts1";         PRM[prmrisvstart81fts1]         = 20;                                                   /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                   */
    PRM_code[prmrisvstartsrm081fts1]     = "risvstartsrm081fts1";     PRM[prmrisvstartsrm081fts1]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                  */
    PRM_code[prmrisvstart68mveh2]        = "risvstart68mveh2";        PRM[prmrisvstart68mveh2]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                   */
    PRM_code[prmrisvstartsrm068mveh2]    = "risvstartsrm068mveh2";    PRM[prmrisvstartsrm068mveh2]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                  */
    PRM_code[prmrisvstart68mveh1]        = "risvstart68mveh1";        PRM[prmrisvstart68mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                   */
    PRM_code[prmrisvstartsrm068mveh1]    = "risvstartsrm068mveh1";    PRM[prmrisvstartsrm068mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                  */
    PRM_code[prmrisvstart67mveh1]        = "risvstart67mveh1";        PRM[prmrisvstart67mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                   */
    PRM_code[prmrisvstartsrm067mveh1]    = "risvstartsrm067mveh1";    PRM[prmrisvstartsrm067mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                  */
    PRM_code[prmrisvstart62mveh2]        = "risvstart62mveh2";        PRM[prmrisvstart62mveh2]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                   */
    PRM_code[prmrisvstartsrm062mveh2]    = "risvstartsrm062mveh2";    PRM[prmrisvstartsrm062mveh2]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                  */
    PRM_code[prmrisvstart62mveh1]        = "risvstart62mveh1";        PRM[prmrisvstart62mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                   */
    PRM_code[prmrisvstartsrm062mveh1]    = "risvstartsrm062mveh1";    PRM[prmrisvstartsrm062mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                  */
    PRM_code[prmrisvstart61mveh1]        = "risvstart61mveh1";        PRM[prmrisvstart61mveh1]        = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                   */
    PRM_code[prmrisvstartsrm061mveh1]    = "risvstartsrm061mveh1";    PRM[prmrisvstartsrm061mveh1]    = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                  */
    PRM_code[prmrisvstart38vtg2]         = "risvstart38vtg2";         PRM[prmrisvstart38vtg2]         = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                   */
    PRM_code[prmrisvstartsrm038vtg2]     = "risvstartsrm038vtg2";     PRM[prmrisvstartsrm038vtg2]     = 0;                                                    /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                  */
    PRM_code[prmrisvend02mveh1]          = "risvend02mveh1";          PRM[prmrisvend02mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                   */
    PRM_code[prmrisvendsrm002mveh1]      = "risvendsrm002mveh1";      PRM[prmrisvendsrm002mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                  */
    PRM_code[prmrisvend02mveh2]          = "risvend02mveh2";          PRM[prmrisvend02mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                   */
    PRM_code[prmrisvendsrm002mveh2]      = "risvendsrm002mveh2";      PRM[prmrisvendsrm002mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                  */
    PRM_code[prmrisvend03mveh1]          = "risvend03mveh1";          PRM[prmrisvend03mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                   */
    PRM_code[prmrisvendsrm003mveh1]      = "risvendsrm003mveh1";      PRM[prmrisvendsrm003mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                  */
    PRM_code[prmrisvend05mveh1]          = "risvend05mveh1";          PRM[prmrisvend05mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                   */
    PRM_code[prmrisvendsrm005mveh1]      = "risvendsrm005mveh1";      PRM[prmrisvendsrm005mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                  */
    PRM_code[prmrisvend08mveh1]          = "risvend08mveh1";          PRM[prmrisvend08mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                   */
    PRM_code[prmrisvendsrm008mveh1]      = "risvendsrm008mveh1";      PRM[prmrisvendsrm008mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                  */
    PRM_code[prmrisvend08mveh2]          = "risvend08mveh2";          PRM[prmrisvend08mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                   */
    PRM_code[prmrisvendsrm008mveh2]      = "risvendsrm008mveh2";      PRM[prmrisvendsrm008mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                  */
    PRM_code[prmrisvend09mveh1]          = "risvend09mveh1";          PRM[prmrisvend09mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                   */
    PRM_code[prmrisvendsrm009mveh1]      = "risvendsrm009mveh1";      PRM[prmrisvendsrm009mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                  */
    PRM_code[prmrisvend11mveh1]          = "risvend11mveh1";          PRM[prmrisvend11mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                   */
    PRM_code[prmrisvendsrm011mveh1]      = "risvendsrm011mveh1";      PRM[prmrisvendsrm011mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                  */
    PRM_code[prmrisvend21fts1]           = "risvend21fts1";           PRM[prmrisvend21fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                   */
    PRM_code[prmrisvendsrm021fts1]       = "risvendsrm021fts1";       PRM[prmrisvendsrm021fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                  */
    PRM_code[prmrisvend22fts1]           = "risvend22fts1";           PRM[prmrisvend22fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                   */
    PRM_code[prmrisvendsrm022fts1]       = "risvendsrm022fts1";       PRM[prmrisvendsrm022fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                  */
    PRM_code[prmrisvend22fts2]           = "risvend22fts2";           PRM[prmrisvend22fts2]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                   */
    PRM_code[prmrisvendsrm022fts2]       = "risvendsrm022fts2";       PRM[prmrisvendsrm022fts2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                  */
    PRM_code[prmrisvend24fts1]           = "risvend24fts1";           PRM[prmrisvend24fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                   */
    PRM_code[prmrisvendsrm024fts1]       = "risvendsrm024fts1";       PRM[prmrisvendsrm024fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                  */
    PRM_code[prmrisvend26fts1]           = "risvend26fts1";           PRM[prmrisvend26fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                   */
    PRM_code[prmrisvendsrm026fts1]       = "risvendsrm026fts1";       PRM[prmrisvendsrm026fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                  */
    PRM_code[prmrisvend28fts1]           = "risvend28fts1";           PRM[prmrisvend28fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                   */
    PRM_code[prmrisvendsrm028fts1]       = "risvendsrm028fts1";       PRM[prmrisvendsrm028fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                  */
    PRM_code[prmrisvend31vtg1]           = "risvend31vtg1";           PRM[prmrisvend31vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                   */
    PRM_code[prmrisvendsrm031vtg1]       = "risvendsrm031vtg1";       PRM[prmrisvendsrm031vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                  */
    PRM_code[prmrisvend31vtg2]           = "risvend31vtg2";           PRM[prmrisvend31vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                   */
    PRM_code[prmrisvendsrm031vtg2]       = "risvendsrm031vtg2";       PRM[prmrisvendsrm031vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                  */
    PRM_code[prmrisvend32vtg1]           = "risvend32vtg1";           PRM[prmrisvend32vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                   */
    PRM_code[prmrisvendsrm032vtg1]       = "risvendsrm032vtg1";       PRM[prmrisvendsrm032vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                  */
    PRM_code[prmrisvend32vtg2]           = "risvend32vtg2";           PRM[prmrisvend32vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                   */
    PRM_code[prmrisvendsrm032vtg2]       = "risvendsrm032vtg2";       PRM[prmrisvendsrm032vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                  */
    PRM_code[prmrisvend33vtg1]           = "risvend33vtg1";           PRM[prmrisvend33vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                   */
    PRM_code[prmrisvendsrm033vtg1]       = "risvendsrm033vtg1";       PRM[prmrisvendsrm033vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                  */
    PRM_code[prmrisvend33vtg2]           = "risvend33vtg2";           PRM[prmrisvend33vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                   */
    PRM_code[prmrisvendsrm033vtg2]       = "risvendsrm033vtg2";       PRM[prmrisvendsrm033vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                  */
    PRM_code[prmrisvend34vtg1]           = "risvend34vtg1";           PRM[prmrisvend34vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                   */
    PRM_code[prmrisvendsrm034vtg1]       = "risvendsrm034vtg1";       PRM[prmrisvendsrm034vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                  */
    PRM_code[prmrisvend34vtg2]           = "risvend34vtg2";           PRM[prmrisvend34vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                   */
    PRM_code[prmrisvendsrm034vtg2]       = "risvendsrm034vtg2";       PRM[prmrisvendsrm034vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                  */
    PRM_code[prmrisvend38vtg1]           = "risvend38vtg1";           PRM[prmrisvend38vtg1]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                   */
    PRM_code[prmrisvendsrm038vtg1]       = "risvendsrm038vtg1";       PRM[prmrisvendsrm038vtg1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                  */
    PRM_code[prmrisvend84fts1]           = "risvend84fts1";           PRM[prmrisvend84fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                   */
    PRM_code[prmrisvendsrm084fts1]       = "risvendsrm084fts1";       PRM[prmrisvendsrm084fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                  */
    PRM_code[prmrisvend82fts1]           = "risvend82fts1";           PRM[prmrisvend82fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                   */
    PRM_code[prmrisvendsrm082fts1]       = "risvendsrm082fts1";       PRM[prmrisvendsrm082fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                  */
    PRM_code[prmrisvend81fts1]           = "risvend81fts1";           PRM[prmrisvend81fts1]           = 40;                                                   /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                   */
    PRM_code[prmrisvendsrm081fts1]       = "risvendsrm081fts1";       PRM[prmrisvendsrm081fts1]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                  */
    PRM_code[prmrisvend68mveh2]          = "risvend68mveh2";          PRM[prmrisvend68mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                   */
    PRM_code[prmrisvendsrm068mveh2]      = "risvendsrm068mveh2";      PRM[prmrisvendsrm068mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                  */
    PRM_code[prmrisvend68mveh1]          = "risvend68mveh1";          PRM[prmrisvend68mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                   */
    PRM_code[prmrisvendsrm068mveh1]      = "risvendsrm068mveh1";      PRM[prmrisvendsrm068mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                  */
    PRM_code[prmrisvend67mveh1]          = "risvend67mveh1";          PRM[prmrisvend67mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                   */
    PRM_code[prmrisvendsrm067mveh1]      = "risvendsrm067mveh1";      PRM[prmrisvendsrm067mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                  */
    PRM_code[prmrisvend62mveh2]          = "risvend62mveh2";          PRM[prmrisvend62mveh2]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                   */
    PRM_code[prmrisvendsrm062mveh2]      = "risvendsrm062mveh2";      PRM[prmrisvendsrm062mveh2]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                  */
    PRM_code[prmrisvend62mveh1]          = "risvend62mveh1";          PRM[prmrisvend62mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                   */
    PRM_code[prmrisvendsrm062mveh1]      = "risvendsrm062mveh1";      PRM[prmrisvendsrm062mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                  */
    PRM_code[prmrisvend61mveh1]          = "risvend61mveh1";          PRM[prmrisvend61mveh1]          = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                   */
    PRM_code[prmrisvendsrm061mveh1]      = "risvendsrm061mveh1";      PRM[prmrisvendsrm061mveh1]      = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                  */
    PRM_code[prmrisvend38vtg2]           = "risvend38vtg2";           PRM[prmrisvend38vtg2]           = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                   */
    PRM_code[prmrisvendsrm038vtg2]       = "risvendsrm038vtg2";       PRM[prmrisvendsrm038vtg2]       = 0;                                                    /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                  */
    PRM_code[prmrispstart22fts1]         = "rispstart22fts1";         PRM[prmrispstart22fts1]         = 50;                                                   /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                */
    PRM_code[prmrispstart22fts2]         = "rispstart22fts2";         PRM[prmrispstart22fts2]         = 50;                                                   /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                */
    PRM_code[prmrispstart28fts1]         = "rispstart28fts1";         PRM[prmrispstart28fts1]         = 50;                                                   /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                */
    PRM_code[prmrispend22fts1]           = "rispend22fts1";           PRM[prmrispend22fts1]           = 99;                                                   /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                */
    PRM_code[prmrispend22fts2]           = "rispend22fts2";           PRM[prmrispend22fts2]           = 99;                                                   /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                */
    PRM_code[prmrispend28fts1]           = "rispend28fts1";           PRM[prmrispend28fts1]           = 99;                                                   /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                */
    PRM_code[prmmkrgd2403]               = "mkrgd2403";               PRM[prmmkrgd2403]               = 3;                                                    /* Type verlengen tbv richtinggevoelig verlengen fase 24                                             */
    PRM_code[prmrgv]                     = "rgv";                     PRM[prmrgv]                     = 2;                                                    /* Type RoBuGrover                                                                                   */
    PRM_code[prmmin_tcyclus]             = "min_tcyclus";             PRM[prmmin_tcyclus]             = 80;   PRM_type[prmmin_tcyclus]             = TE_type; /* Minimale cyclustijd                                                                               */
    PRM_code[prmmax_tcyclus]             = "max_tcyclus";             PRM[prmmax_tcyclus]             = 1200; PRM_type[prmmax_tcyclus]             = TE_type; /* Maximale cyclustijd                                                                               */
    PRM_code[prmtvg_omhoog]              = "tvg_omhoog";              PRM[prmtvg_omhoog]              = 50;   PRM_type[prmtvg_omhoog]              = TE_type; /* Hoeveelheid ophogen TVG                                                                           */
    PRM_code[prmtvg_omlaag]              = "tvg_omlaag";              PRM[prmtvg_omlaag]              = 20;   PRM_type[prmtvg_omlaag]              = TE_type; /* Hoeveelheid verlagen TVG                                                                          */
    PRM_code[prmtvg_verschil]            = "tvg_verschil";            PRM[prmtvg_verschil]            = 50;   PRM_type[prmtvg_verschil]            = TE_type; /* Parameter verschil                                                                                */
    PRM_code[prmtvg_npr_omlaag]          = "tvg_npr_omlaag";          PRM[prmtvg_npr_omlaag]          = 50;   PRM_type[prmtvg_npr_omlaag]          = TE_type; /* Hoeveelheid verlagen TVG bij niet primair                                                         */
    PRM_code[prmmintvg_02]               = "mintvg_02";               PRM[prmmintvg_02]               = 100;  PRM_type[prmmintvg_02]               = TE_type; /* Minimale verlenggroentijd fase 02                                                                 */
    PRM_code[prmmaxtvg_02]               = "maxtvg_02";               PRM[prmmaxtvg_02]               = 500;  PRM_type[prmmaxtvg_02]               = TE_type; /* Maximale verlenggroentijd fase 02                                                                 */
    PRM_code[prmmintvg_03]               = "mintvg_03";               PRM[prmmintvg_03]               = 100;  PRM_type[prmmintvg_03]               = TE_type; /* Minimale verlenggroentijd fase 03                                                                 */
    PRM_code[prmmaxtvg_03]               = "maxtvg_03";               PRM[prmmaxtvg_03]               = 500;  PRM_type[prmmaxtvg_03]               = TE_type; /* Maximale verlenggroentijd fase 03                                                                 */
    PRM_code[prmmintvg_05]               = "mintvg_05";               PRM[prmmintvg_05]               = 100;  PRM_type[prmmintvg_05]               = TE_type; /* Minimale verlenggroentijd fase 05                                                                 */
    PRM_code[prmmaxtvg_05]               = "maxtvg_05";               PRM[prmmaxtvg_05]               = 500;  PRM_type[prmmaxtvg_05]               = TE_type; /* Maximale verlenggroentijd fase 05                                                                 */
    PRM_code[prmmintvg_08]               = "mintvg_08";               PRM[prmmintvg_08]               = 100;  PRM_type[prmmintvg_08]               = TE_type; /* Minimale verlenggroentijd fase 08                                                                 */
    PRM_code[prmmaxtvg_08]               = "maxtvg_08";               PRM[prmmaxtvg_08]               = 500;  PRM_type[prmmaxtvg_08]               = TE_type; /* Maximale verlenggroentijd fase 08                                                                 */
    PRM_code[prmmintvg_11]               = "mintvg_11";               PRM[prmmintvg_11]               = 100;  PRM_type[prmmintvg_11]               = TE_type; /* Minimale verlenggroentijd fase 11                                                                 */
    PRM_code[prmmaxtvg_11]               = "maxtvg_11";               PRM[prmmaxtvg_11]               = 500;  PRM_type[prmmaxtvg_11]               = TE_type; /* Maximale verlenggroentijd fase 11                                                                 */
    PRM_code[prmmintvg_22]               = "mintvg_22";               PRM[prmmintvg_22]               = 40;   PRM_type[prmmintvg_22]               = TE_type; /* Minimale verlenggroentijd fase 22                                                                 */
    PRM_code[prmmaxtvg_22]               = "maxtvg_22";               PRM[prmmaxtvg_22]               = 150;  PRM_type[prmmaxtvg_22]               = TE_type; /* Maximale verlenggroentijd fase 22                                                                 */
    PRM_code[prmmintvg_28]               = "mintvg_28";               PRM[prmmintvg_28]               = 40;   PRM_type[prmmintvg_28]               = TE_type; /* Minimale verlenggroentijd fase 28                                                                 */
    PRM_code[prmmaxtvg_28]               = "maxtvg_28";               PRM[prmmaxtvg_28]               = 150;  PRM_type[prmmaxtvg_28]               = TE_type; /* Maximale verlenggroentijd fase 28                                                                 */
    PRM_code[prmsiexgrperc33]            = "siexgrperc33";            PRM[prmsiexgrperc33]            = 50;                                                   /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                   */
    PRM_code[prmsiexgrperc34]            = "siexgrperc34";            PRM[prmsiexgrperc34]            = 50;                                                   /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                   */
    PRM_code[prmmaxtvgvlog]              = "maxtvgvlog";              PRM[prmmaxtvgvlog]              = 5;    PRM_type[prmmaxtvgvlog]              = CT_type; /* Parameter VLOG max. aantal volledige verlenggroen                                                 */
    PRM_code[prmmaxtfbvlog]              = "maxtfbvlog";              PRM[prmmaxtfbvlog]              = 90;   PRM_type[prmmaxtfbvlog]              = TS_type; /* Parameter VLOG max. wachttijd na aanvraag                                                         */
    PRM_code[prmmlfpr02]                 = "mlfpr02";                 PRM[prmmlfpr02]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 02                                                           */
    PRM_code[prmmlfpr03]                 = "mlfpr03";                 PRM[prmmlfpr03]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 03                                                           */
    PRM_code[prmmlfpr05]                 = "mlfpr05";                 PRM[prmmlfpr05]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 05                                                           */
    PRM_code[prmmlfpr08]                 = "mlfpr08";                 PRM[prmmlfpr08]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 08                                                           */
    PRM_code[prmmlfpr09]                 = "mlfpr09";                 PRM[prmmlfpr09]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 09                                                           */
    PRM_code[prmmlfpr11]                 = "mlfpr11";                 PRM[prmmlfpr11]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 11                                                           */
    PRM_code[prmmlfpr21]                 = "mlfpr21";                 PRM[prmmlfpr21]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 21                                                           */
    PRM_code[prmmlfpr22]                 = "mlfpr22";                 PRM[prmmlfpr22]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 22                                                           */
    PRM_code[prmmlfpr24]                 = "mlfpr24";                 PRM[prmmlfpr24]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 24                                                           */
    PRM_code[prmmlfpr26]                 = "mlfpr26";                 PRM[prmmlfpr26]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 26                                                           */
    PRM_code[prmmlfpr28]                 = "mlfpr28";                 PRM[prmmlfpr28]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 28                                                           */
    PRM_code[prmmlfpr31]                 = "mlfpr31";                 PRM[prmmlfpr31]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 31                                                           */
    PRM_code[prmmlfpr32]                 = "mlfpr32";                 PRM[prmmlfpr32]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 32                                                           */
    PRM_code[prmmlfpr33]                 = "mlfpr33";                 PRM[prmmlfpr33]                 = 2;                                                    /* Maximaal aantal modules vooruit fase 33                                                           */
    PRM_code[prmmlfpr34]                 = "mlfpr34";                 PRM[prmmlfpr34]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 34                                                           */
    PRM_code[prmmlfpr38]                 = "mlfpr38";                 PRM[prmmlfpr38]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 38                                                           */
    PRM_code[prmmlfpr61]                 = "mlfpr61";                 PRM[prmmlfpr61]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 61                                                           */
    PRM_code[prmmlfpr62]                 = "mlfpr62";                 PRM[prmmlfpr62]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 62                                                           */
    PRM_code[prmmlfpr67]                 = "mlfpr67";                 PRM[prmmlfpr67]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 67                                                           */
    PRM_code[prmmlfpr68]                 = "mlfpr68";                 PRM[prmmlfpr68]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 68                                                           */
    PRM_code[prmmlfpr81]                 = "mlfpr81";                 PRM[prmmlfpr81]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 81                                                           */
    PRM_code[prmmlfpr82]                 = "mlfpr82";                 PRM[prmmlfpr82]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 82                                                           */
    PRM_code[prmmlfpr84]                 = "mlfpr84";                 PRM[prmmlfpr84]                 = 1;                                                    /* Maximaal aantal modules vooruit fase 84                                                           */
    PRM_code[prmaltg02]                  = "altg02";                  PRM[prmaltg02]                  = 60;   PRM_type[prmaltg02]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 02                                            */
    PRM_code[prmaltp02]                  = "altp02";                  PRM[prmaltp02]                  = 60;   PRM_type[prmaltp02]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 02                                               */
    PRM_code[prmaltg03]                  = "altg03";                  PRM[prmaltg03]                  = 60;   PRM_type[prmaltg03]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 03                                            */
    PRM_code[prmaltp03]                  = "altp03";                  PRM[prmaltp03]                  = 60;   PRM_type[prmaltp03]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 03                                               */
    PRM_code[prmaltg05]                  = "altg05";                  PRM[prmaltg05]                  = 60;   PRM_type[prmaltg05]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 05                                            */
    PRM_code[prmaltp05]                  = "altp05";                  PRM[prmaltp05]                  = 60;   PRM_type[prmaltp05]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 05                                               */
    PRM_code[prmaltg08]                  = "altg08";                  PRM[prmaltg08]                  = 60;   PRM_type[prmaltg08]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 08                                            */
    PRM_code[prmaltp08]                  = "altp08";                  PRM[prmaltp08]                  = 60;   PRM_type[prmaltp08]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 08                                               */
    PRM_code[prmaltg09]                  = "altg09";                  PRM[prmaltg09]                  = 60;   PRM_type[prmaltg09]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 09                                            */
    PRM_code[prmaltp09]                  = "altp09";                  PRM[prmaltp09]                  = 60;   PRM_type[prmaltp09]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 09                                               */
    PRM_code[prmaltg11]                  = "altg11";                  PRM[prmaltg11]                  = 60;   PRM_type[prmaltg11]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 11                                            */
    PRM_code[prmaltp11]                  = "altp11";                  PRM[prmaltp11]                  = 60;   PRM_type[prmaltp11]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 11                                               */
    PRM_code[prmaltg21]                  = "altg21";                  PRM[prmaltg21]                  = 60;   PRM_type[prmaltg21]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 21                                            */
    PRM_code[prmaltp21]                  = "altp21";                  PRM[prmaltp21]                  = 60;   PRM_type[prmaltp21]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 21                                               */
    PRM_code[prmaltg22]                  = "altg22";                  PRM[prmaltg22]                  = 60;   PRM_type[prmaltg22]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 22                                            */
    PRM_code[prmaltp22]                  = "altp22";                  PRM[prmaltp22]                  = 60;   PRM_type[prmaltp22]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 22                                               */
    PRM_code[prmaltg24]                  = "altg24";                  PRM[prmaltg24]                  = 60;   PRM_type[prmaltg24]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 24                                            */
    PRM_code[prmaltp24]                  = "altp24";                  PRM[prmaltp24]                  = 60;   PRM_type[prmaltp24]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 24                                               */
    PRM_code[prmaltg26]                  = "altg26";                  PRM[prmaltg26]                  = 60;   PRM_type[prmaltg26]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 26                                            */
    PRM_code[prmaltp26]                  = "altp26";                  PRM[prmaltp26]                  = 60;   PRM_type[prmaltp26]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 26                                               */
    PRM_code[prmaltg28]                  = "altg28";                  PRM[prmaltg28]                  = 60;   PRM_type[prmaltg28]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 28                                            */
    PRM_code[prmaltp28]                  = "altp28";                  PRM[prmaltp28]                  = 60;   PRM_type[prmaltp28]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 28                                               */
    PRM_code[prmaltg31]                  = "altg31";                  PRM[prmaltg31]                  = 60;   PRM_type[prmaltg31]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 31                                            */
    PRM_code[prmaltp31]                  = "altp31";                  PRM[prmaltp31]                  = 60;   PRM_type[prmaltp31]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 31                                               */
    PRM_code[prmaltg32]                  = "altg32";                  PRM[prmaltg32]                  = 60;   PRM_type[prmaltg32]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 32                                            */
    PRM_code[prmaltp32]                  = "altp32";                  PRM[prmaltp32]                  = 60;   PRM_type[prmaltp32]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 32                                               */
    PRM_code[prmaltg33]                  = "altg33";                  PRM[prmaltg33]                  = 60;   PRM_type[prmaltg33]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 33                                            */
    PRM_code[prmaltp33]                  = "altp33";                  PRM[prmaltp33]                  = 60;   PRM_type[prmaltp33]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 33                                               */
    PRM_code[prmaltg34]                  = "altg34";                  PRM[prmaltg34]                  = 60;   PRM_type[prmaltg34]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 34                                            */
    PRM_code[prmaltp34]                  = "altp34";                  PRM[prmaltp34]                  = 60;   PRM_type[prmaltp34]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 34                                               */
    PRM_code[prmaltg38]                  = "altg38";                  PRM[prmaltg38]                  = 60;   PRM_type[prmaltg38]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 38                                            */
    PRM_code[prmaltp38]                  = "altp38";                  PRM[prmaltp38]                  = 60;   PRM_type[prmaltp38]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 38                                               */
    PRM_code[prmaltg61]                  = "altg61";                  PRM[prmaltg61]                  = 60;   PRM_type[prmaltg61]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 61                                            */
    PRM_code[prmaltp61]                  = "altp61";                  PRM[prmaltp61]                  = 60;   PRM_type[prmaltp61]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 61                                               */
    PRM_code[prmaltg62]                  = "altg62";                  PRM[prmaltg62]                  = 60;   PRM_type[prmaltg62]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 62                                            */
    PRM_code[prmaltp62]                  = "altp62";                  PRM[prmaltp62]                  = 60;   PRM_type[prmaltp62]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 62                                               */
    PRM_code[prmaltg67]                  = "altg67";                  PRM[prmaltg67]                  = 60;   PRM_type[prmaltg67]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 67                                            */
    PRM_code[prmaltp67]                  = "altp67";                  PRM[prmaltp67]                  = 60;   PRM_type[prmaltp67]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 67                                               */
    PRM_code[prmaltg68]                  = "altg68";                  PRM[prmaltg68]                  = 60;   PRM_type[prmaltg68]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 68                                            */
    PRM_code[prmaltp68]                  = "altp68";                  PRM[prmaltp68]                  = 60;   PRM_type[prmaltp68]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 68                                               */
    PRM_code[prmaltg81]                  = "altg81";                  PRM[prmaltg81]                  = 60;   PRM_type[prmaltg81]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 81                                            */
    PRM_code[prmaltp81]                  = "altp81";                  PRM[prmaltp81]                  = 60;   PRM_type[prmaltp81]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 81                                               */
    PRM_code[prmaltg82]                  = "altg82";                  PRM[prmaltg82]                  = 60;   PRM_type[prmaltg82]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 82                                            */
    PRM_code[prmaltp82]                  = "altp82";                  PRM[prmaltp82]                  = 60;   PRM_type[prmaltp82]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 82                                               */
    PRM_code[prmaltg84]                  = "altg84";                  PRM[prmaltg84]                  = 60;   PRM_type[prmaltg84]                  = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 84                                            */
    PRM_code[prmaltp84]                  = "altp84";                  PRM[prmaltp84]                  = 60;   PRM_type[prmaltp84]                  = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 84                                               */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    PRM_code[prmtestdsivert]             = "testdsivert";             PRM[prmtestdsivert]             = 120;  PRM_type[prmtestdsivert]             = TS_type; /* Testen vertraging in DSI bericht in testomgeving                                                  */
    PRM_code[prmtestdsilyn]              = "testdsilyn";              PRM[prmtestdsilyn]              = 0;                                         /* Testen lijnnummer DSI bericht in testomgeving                                                     */
    PRM_code[prmtestdsicat]              = "testdsicat";              PRM[prmtestdsicat]              = 10;                                        /* Testen ritcategorie DSI bericht in testomgeving                                                   */
#endif


/* extra data */
/* ---------- */
    FC_type[fc02] = MVT_type;
    FC_type[fc03] = MVT_type;
    FC_type[fc05] = MVT_type;
    FC_type[fc08] = MVT_type;
    FC_type[fc09] = MVT_type;
    FC_type[fc11] = MVT_type;
    FC_type[fc21] = FTS_type;
    FC_type[fc22] = FTS_type;
    FC_type[fc24] = FTS_type;
    FC_type[fc26] = FTS_type;
    FC_type[fc28] = FTS_type;
    FC_type[fc31] = VTG_type;
    FC_type[fc32] = VTG_type;
    FC_type[fc33] = VTG_type;
    FC_type[fc34] = VTG_type;
    FC_type[fc38] = VTG_type;
    FC_type[fc61] = MVT_type;
    FC_type[fc62] = MVT_type;
    FC_type[fc67] = MVT_type;
    FC_type[fc68] = MVT_type;
    FC_type[fc81] = FTS_type;
    FC_type[fc82] = FTS_type;
    FC_type[fc84] = FTS_type;

/* Selectieve detectie */
/* ------------------- */
    DS_code[dsdummy] = "dsdummy";
    DS_code[D0241]  = "0241";
    DS_code[D0242]  = "0242";
    DS_code[D0841]  = "0841";
    DS_code[D0842]  = "0842";
    DS_code[D1141]  = "1141";
    DS_code[D1142]  = "1142";
    DS_code[D6141]  = "6141";

/* modulen */
/* ------- */
    PRML[ML1][fc02] = PRIMAIR;
    PRML[ML1][fc24] = PRIMAIR;
    PRML[ML1][fc08] = PRIMAIR;
    PRML[ML1][fc28] = PRIMAIR;
    PRML[ML1][fc34] = PRIMAIR;
    PRML[ML1][fc33] = PRIMAIR;
    PRML[ML1][fc38] = PRIMAIR;
    PRML[ML1][fc84] = PRIMAIR;
    PRML[ML1][fc68] = PRIMAIR;
    PRML[ML1][fc62] = PRIMAIR;

    PRML[ML2][fc03] = PRIMAIR;
    PRML[ML2][fc09] = PRIMAIR;
    PRML[ML2][fc82] = PRIMAIR;
    PRML[ML2][fc81] = PRIMAIR;

    PRML[ML3][fc05] = PRIMAIR;
    PRML[ML3][fc32] = PRIMAIR;
    PRML[ML3][fc31] = PRIMAIR;
    PRML[ML3][fc22] = PRIMAIR;
    PRML[ML3][fc21] = PRIMAIR;
    PRML[ML3][fc61] = PRIMAIR;
    PRML[ML3][fc62] = PRIMAIR;
    PRML[ML3][fc67] = PRIMAIR;

    PRML[ML4][fc11] = PRIMAIR;
    PRML[ML4][fc26] = PRIMAIR;


#ifndef NO_VLOG
/* VLOG */
/* ---- */

    /*VLOG - logging */
    /*-------------- */
    LOGTYPE[LOGTYPE_FC] = BIT0+BIT1+BIT2+BIT3+BIT5;
    LOGTYPE[LOGTYPE_US] = BIT0+BIT1;
    LOGTYPE[LOGTYPE_PS] = BIT0+BIT1;
    LOGTYPE[LOGTYPE_DS] = BIT0+BIT1;
    LOGPRM[LOGPRM_LOGKLOKSCH] = 1;
    LOGPRM[LOGPRM_VLOGMODE] = VLOGMODE_LOG_FILE_ASCII;

    /* VLOG - monitoring */
    /* ----------------- */
    MONTYPE[MONTYPE_FC] = BIT0+BIT1+BIT2+BIT3+BIT5;
    MONTYPE[MONTYPE_US] = BIT0+BIT1;
    MONTYPE[MONTYPE_PS] = BIT0+BIT1;
    MONTYPE[MONTYPE_DS] = BIT0+BIT1;

    MONPRM[MONPRM_VLOGMODE] = 1; /* 1 = ASCII */


    for (i = 0; i < FCMAX; ++i) MONFC[i] = BIT0+BIT1+BIT2+BIT3;
    for (i = FCMAX; i < USMAX; ++i) MONUS[i] = BIT0+BIT1;
#endif /* NO_VLOG */

/* Typen ingangen */
/* -------------- */
    IS_type[d0201] = DKOP_type;
    IS_type[d0202] = DKOP_type;
    IS_type[d0203] = DLNG_type;
    IS_type[d0204] = DLNG_type;
    IS_type[d0205] = DLNG_type;
    IS_type[d0206] = DLNG_type;
    IS_type[d0207] = DVER_type;
    IS_type[d0208] = DVER_type;
    IS_type[d0301] = DKOP_type;
    IS_type[d0302] = DLNG_type;
    IS_type[d0501] = DKOP_type;
    IS_type[d0502] = DLNG_type;
    IS_type[d0801] = DKOP_type;
    IS_type[d0802] = DKOP_type;
    IS_type[d0803] = DLNG_type;
    IS_type[d0804] = DLNG_type;
    IS_type[d0805] = DLNG_type;
    IS_type[d0806] = DLNG_type;
    IS_type[d0807] = DVER_type;
    IS_type[d0808] = DVER_type;
    IS_type[d0901] = DKOP_type;
    IS_type[d0902] = DLNG_type;
    IS_type[d0903] = DVER_type;
    IS_type[d1101] = DKOP_type;
    IS_type[d1102] = DLNG_type;
    IS_type[d1103] = DLNG_type;
    IS_type[d1104] = DVER_type;
    IS_type[d2101] = DKOP_type;
    IS_type[d2131] = DK_type;
    IS_type[d2201] = DKOP_type;
    IS_type[d2231] = DK_type;
    IS_type[d2401] = DKOP_type;
    IS_type[d2402] = DVER_type;
    IS_type[d2403] = DVER_type;
    IS_type[d2431] = DK_type;
    IS_type[d2601] = DKOP_type;
    IS_type[d2631] = DK_type;
    IS_type[d2801] = DKOP_type;
    IS_type[d2802] = DVER_type;
    IS_type[d2831] = DK_type;
    IS_type[d3131] = DK_type;
    IS_type[d3132] = DK_type;
    IS_type[d3231] = DK_type;
    IS_type[d3232] = DK_type;
    IS_type[d3331] = DK_type;
    IS_type[d3332] = DK_type;
    IS_type[d3431] = DK_type;
    IS_type[d3432] = DK_type;
    IS_type[d3831] = DK_type;
    IS_type[d3832] = DK_type;
    IS_type[d6101] = DKOP_type;
    IS_type[d6102] = DLNG_type;
    IS_type[d6201] = DKOP_type;
    IS_type[d6202] = DKOP_type;
    IS_type[d6203] = DLNG_type;
    IS_type[d6204] = DLNG_type;
    IS_type[d6701] = DKOP_type;
    IS_type[d6702] = DLNG_type;
    IS_type[d6801] = DKOP_type;
    IS_type[d6802] = DKOP_type;
    IS_type[d6803] = DLNG_type;
    IS_type[d6804] = DLNG_type;
    IS_type[d6821] = DVER_type;
    IS_type[d6822] = DVER_type;
    IS_type[d8101] = DKOP_type;
    IS_type[d8131] = DK_type;
    IS_type[d8201] = DKOP_type;
    IS_type[d8231] = DK_type;
    IS_type[d8401] = DKOP_type;
    IS_type[d8431] = DK_type;
    IS_type[d0241] = DKOP_type;
    IS_type[d0242] = DKOP_type;
    IS_type[d0841] = DKOP_type;
    IS_type[d0842] = DKOP_type;
    IS_type[d1141] = DKOP_type;
    IS_type[d1142] = DKOP_type;

/* Typen uitgangen */
/* --------------- */
    US_type[fc02] = MVT_type;
    US_type[fc03] = MVT_type;
    US_type[fc05] = MVT_type;
    US_type[fc08] = MVT_type;
    US_type[fc09] = MVT_type;
    US_type[fc11] = MVT_type;
    US_type[fc21] = FTS_type;
    US_type[fc22] = FTS_type;
    US_type[fc24] = FTS_type;
    US_type[fc26] = FTS_type;
    US_type[fc28] = FTS_type;
    US_type[fc31] = VTG_type;
    US_type[fc32] = VTG_type;
    US_type[fc33] = VTG_type;
    US_type[fc34] = VTG_type;
    US_type[fc38] = VTG_type;
    US_type[fc61] = MVT_type;
    US_type[fc62] = MVT_type;
    US_type[fc67] = MVT_type;
    US_type[fc68] = MVT_type;
    US_type[fc81] = FTS_type;
    US_type[fc82] = FTS_type;
    US_type[fc84] = FTS_type;

#ifdef VISSIM
    D_code[d0201] = "0211";
    D_code[d0202] = "0212";
    D_code[d0203] = "0221";
    D_code[d0204] = "0222";
    D_code[d0205] = "0231";
    D_code[d0206] = "0232";
    D_code[d0207] = "0241";
    D_code[d0208] = "0242";
    D_code[d0301] = "0310";
    D_code[d0302] = "0320";
    D_code[d0501] = "0510";
    D_code[d0502] = "0520";
    D_code[d0801] = "0811";
    D_code[d0802] = "0812";
    D_code[d0803] = "0821";
    D_code[d0804] = "0822";
    D_code[d0805] = "0831";
    D_code[d0806] = "0832";
    D_code[d0807] = "0841";
    D_code[d0808] = "0842";
    D_code[d0901] = "091";
    D_code[d0902] = "092";
    D_code[d0903] = "093";
    D_code[d1101] = "1110";
    D_code[d1102] = "1120";
    D_code[d1103] = "1130";
    D_code[d1104] = "1140";
    D_code[d2101] = "211";
    D_code[d2131] = "212";
    D_code[d2201] = "2210";
    D_code[d2231] = "2201";
    D_code[d2401] = "2410";
    D_code[d2402] = "2420";
    D_code[d2403] = "2430";
    D_code[d2431] = "243";
    D_code[d2601] = "261";
    D_code[d2631] = "262";
    D_code[d2801] = "2810";
    D_code[d2802] = "2820";
    D_code[d2831] = "2801";
    D_code[d3131] = "3101";
    D_code[d3132] = "3102";
    D_code[d3231] = "3202";
    D_code[d3232] = "3201";
    D_code[d3331] = "3301";
    D_code[d3332] = "3302";
    D_code[d3431] = "3402";
    D_code[d3432] = "3401";
    D_code[d3831] = "3801";
    D_code[d3832] = "3802";
    D_code[d6101] = "6110";
    D_code[d6102] = "6120";
    D_code[d6201] = "6211";
    D_code[d6202] = "6212";
    D_code[d6203] = "6221";
    D_code[d6204] = "6222";
    D_code[d6701] = "6710";
    D_code[d6702] = "6720";
    D_code[d6801] = "6811";
    D_code[d6802] = "6812";
    D_code[d6803] = "6821";
    D_code[d6804] = "6822";
    D_code[d6821] = "681";
    D_code[d6822] = "682";
    D_code[d8101] = "811";
    D_code[d8131] = "812";
    D_code[d8201] = "821";
    D_code[d8231] = "822";
    D_code[d8401] = "8410";
    D_code[d8431] = "8401";
#endif

    itvgmaxprm[tvgmaxprm02] = fc02;
    itvgmaxprm[tvgmaxprm03] = fc03;
    itvgmaxprm[tvgmaxprm05] = fc05;
    itvgmaxprm[tvgmaxprm08] = fc08;
    itvgmaxprm[tvgmaxprm09] = fc09;
    itvgmaxprm[tvgmaxprm11] = fc11;
    itvgmaxprm[tvgmaxprm21] = fc21;
    itvgmaxprm[tvgmaxprm22] = fc22;
    itvgmaxprm[tvgmaxprm24] = fc24;
    itvgmaxprm[tvgmaxprm26] = fc26;
    itvgmaxprm[tvgmaxprm28] = fc28;
    itvgmaxprm[tvgmaxprm61] = fc61;
    itvgmaxprm[tvgmaxprm62] = fc62;
    itvgmaxprm[tvgmaxprm67] = fc67;
    itvgmaxprm[tvgmaxprm68] = fc68;
    itvgmaxprm[tvgmaxprm81] = fc81;
    itvgmaxprm[tvgmaxprm82] = fc82;
    itvgmaxprm[tvgmaxprm84] = fc84;

    #include "123456tab.add"
}
