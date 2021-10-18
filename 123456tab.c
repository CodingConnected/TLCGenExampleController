/* REGEL INSTELLINGEN */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456tab.c
      CCOL:   11.0
    TLCGEN:   0.10.2.0
   CCOLGEN:   0.10.2.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    06-07-2021   Cyril       basisversie
 * 1.1.0    27-07-2021   Peter       TISG-matrix toegevoegd
 * 1.4.0    19-08-2021   Cyril       TLCGen0.9.10.0; fc21+fc67 toegeveogd
 * 1.5.0    14-09-2021   Peter       Kleine aanpassingen m.b.t. TISG-matrix
 * 1.6.0    20-09-2021   Cyril       Nieuwe versie TLCGen (20092021 beta); handmatig Real_los + F11
 * 1.9.0    18-10-2021   Cyril       Filelussen en fc82 fc81 toegeovoegd
 *
 ************************************************************************************/

/* include files */
/* ------------- */
    #include "123456sys.h"
    #include "fcvar.h"    /* fasecycli                         */
    #include "kfvar.h"    /* conflicten                        */
    #include "usvar.h"    /* uitgangs elementen                */
    #include "dpvar.h"    /* detectie elementen                */
    #include "tig_min.h"   /* garantie-ontruimingstijden        */
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

    mulv FC_type[FCMAX];

    void Timings_Eventstate_Definition(void);


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

    TRG_type    |= RO_type; /* Garantieroodtijden  read-only */
    TGG_type    |= RO_type; /* Garantiegroentijden read-only */
    TVG_deftype |= RO_type; /* Verlenggroentijden  read-only */

#ifndef NO_VLOG
    #if !defined NO_VLOG_300
        /* Defaults voor VLOG
           Toelichting instellingen:
           - MONDP   1=DP-status
           - MONIS   1=IS-status, 2=IS-snelheid (ISV_type) 4=IS-lengte (ISL_type), 8=IS-mulv
           - MONFC   1=FCWUS, 2=FCGUS, 4=FCMON2, 8=FCMON3, 32=OVMON5, 64=FCTIMING, 128=FCRWT
           - MONUS   1=WUS-status, 2=GUS-status, 4=WUS-mulv, 8=GUS-mulv
           - MONDS   1=DS-status
        */
        MONTYPE_def = 1;
        MONDP_def   = 17;
        MONIS_def   = 31;
        MONFC_def   = 255;
        MONUS_def   = 15;
        MONDS_def   = 1;
        LOGTYPE_def = 1;
    #else /* VLOG 2.0 */
        MON_def = 1;
        LOG_def = 1;
    #endif
#endif
}

void control_parameters(void)
{
/* fasecycli */
/* --------- */
   FC_code[fc02] = "02"; TRG_max[fc02] = 20; TRG_min[fc02] = 20; TGG_max[fc02] = 40; TGG_min[fc02] = 40; TFG_max[fc02] = 40; TGL_max[fc02] = 35; TGL_min[fc02] = 35; TMGL_max[fc02] = 35; TVGA_max[fc02] = 160;
   FC_code[fc03] = "03"; TRG_max[fc03] = 20; TRG_min[fc03] = 20; TGG_max[fc03] = 40; TGG_min[fc03] = 40; TFG_max[fc03] = 40; TGL_max[fc03] = 30; TGL_min[fc03] = 30; TMGL_max[fc03] = 30; TVGA_max[fc03] = 110;
   FC_code[fc05] = "05"; TRG_max[fc05] = 20; TRG_min[fc05] = 20; TGG_max[fc05] = 40; TGG_min[fc05] = 40; TFG_max[fc05] = 40; TGL_max[fc05] = 30; TGL_min[fc05] = 30; TMGL_max[fc05] = 30; TVGA_max[fc05] = 210;
   FC_code[fc08] = "08"; TRG_max[fc08] = 20; TRG_min[fc08] = 20; TGG_max[fc08] = 40; TGG_min[fc08] = 40; TFG_max[fc08] = 40; TGL_max[fc08] = 35; TGL_min[fc08] = 35; TMGL_max[fc08] = 35; TVGA_max[fc08] = 160;
   FC_code[fc09] = "09"; TRG_max[fc09] = 20; TRG_min[fc09] = 20; TGG_max[fc09] = 40; TGG_min[fc09] = 40; TFG_max[fc09] = 40; TGL_max[fc09] = 30; TGL_min[fc09] = 30; TMGL_max[fc09] = 30; TVGA_max[fc09] = 110;
   FC_code[fc11] = "11"; TRG_max[fc11] = 20; TRG_min[fc11] = 20; TGG_max[fc11] = 40; TGG_min[fc11] = 40; TFG_max[fc11] = 40; TGL_max[fc11] = 30; TGL_min[fc11] = 30; TMGL_max[fc11] = 30; TVGA_max[fc11] = 110;
   FC_code[fc21] = "21"; TRG_max[fc21] = 10; TRG_min[fc21] = 10; TGG_max[fc21] = 40; TGG_min[fc21] = 40; TFG_max[fc21] = 60; TGL_max[fc21] = 30; TGL_min[fc21] = 30; TMGL_max[fc21] = 30; TVGA_max[fc21] = 90;
   FC_code[fc22] = "22"; TRG_max[fc22] = 10; TRG_min[fc22] = 10; TGG_max[fc22] = 40; TGG_min[fc22] = 40; TFG_max[fc22] = 60; TGL_max[fc22] = 20; TGL_min[fc22] = 20; TMGL_max[fc22] = 20; TVGA_max[fc22] = 90;
   FC_code[fc24] = "24"; TRG_max[fc24] = 10; TRG_min[fc24] = 10; TGG_max[fc24] = 40; TGG_min[fc24] = 40; TFG_max[fc24] = 60; TGL_max[fc24] = 20; TGL_min[fc24] = 20; TMGL_max[fc24] = 20; TVGA_max[fc24] = 90;
   FC_code[fc26] = "26"; TRG_max[fc26] = 10; TRG_min[fc26] = 10; TGG_max[fc26] = 40; TGG_min[fc26] = 40; TFG_max[fc26] = 60; TGL_max[fc26] = 30; TGL_min[fc26] = 30; TMGL_max[fc26] = 30; TVGA_max[fc26] = 90;
   FC_code[fc28] = "28"; TRG_max[fc28] = 10; TRG_min[fc28] = 10; TGG_max[fc28] = 40; TGG_min[fc28] = 40; TFG_max[fc28] = 60; TGL_max[fc28] = 20; TGL_min[fc28] = 20; TMGL_max[fc28] = 20; TVGA_max[fc28] = 90;
   FC_code[fc31] = "31"; TRG_max[fc31] = 10; TRG_min[fc31] = 10; TGG_max[fc31] = 40; TGG_min[fc31] = 40; TFG_max[fc31] = 60; TGL_max[fc31] = 30; TGL_min[fc31] = 30; TMGL_max[fc31] = 30; TVGA_max[fc31] = NG;
   FC_code[fc32] = "32"; TRG_max[fc32] = 10; TRG_min[fc32] = 10; TGG_max[fc32] = 40; TGG_min[fc32] = 40; TFG_max[fc32] = 40; TGL_max[fc32] = 30; TGL_min[fc32] = 30; TMGL_max[fc32] = 30; TVGA_max[fc32] = NG;
   FC_code[fc33] = "33"; TRG_max[fc33] = 10; TRG_min[fc33] = 10; TGG_max[fc33] = 40; TGG_min[fc33] = 40; TFG_max[fc33] = 40; TGL_max[fc33] = 30; TGL_min[fc33] = 30; TMGL_max[fc33] = 30; TVGA_max[fc33] = NG;
   FC_code[fc34] = "34"; TRG_max[fc34] = 10; TRG_min[fc34] = 10; TGG_max[fc34] = 40; TGG_min[fc34] = 40; TFG_max[fc34] = 40; TGL_max[fc34] = 30; TGL_min[fc34] = 30; TMGL_max[fc34] = 30; TVGA_max[fc34] = NG;
   FC_code[fc38] = "38"; TRG_max[fc38] = 10; TRG_min[fc38] = 10; TGG_max[fc38] = 40; TGG_min[fc38] = 40; TFG_max[fc38] = 80; TGL_max[fc38] = 30; TGL_min[fc38] = 30; TMGL_max[fc38] = 30; TVGA_max[fc38] = NG;
   FC_code[fc61] = "61"; TRG_max[fc61] = 20; TRG_min[fc61] = 20; TGG_max[fc61] = 40; TGG_min[fc61] = 40; TFG_max[fc61] = 50; TGL_max[fc61] = 30; TGL_min[fc61] = 30; TMGL_max[fc61] = 30; TVGA_max[fc61] = 0;
   FC_code[fc62] = "62"; TRG_max[fc62] = 20; TRG_min[fc62] = 20; TGG_max[fc62] = 40; TGG_min[fc62] = 40; TFG_max[fc62] = 40; TGL_max[fc62] = 35; TGL_min[fc62] = 35; TMGL_max[fc62] = 35; TVGA_max[fc62] = 10;
   FC_code[fc67] = "67"; TRG_max[fc67] = 20; TRG_min[fc67] = 20; TGG_max[fc67] = 40; TGG_min[fc67] = 40; TFG_max[fc67] = 50; TGL_max[fc67] = 30; TGL_min[fc67] = 30; TMGL_max[fc67] = 30; TVGA_max[fc67] = 0;
   FC_code[fc68] = "68"; TRG_max[fc68] = 20; TRG_min[fc68] = 20; TGG_max[fc68] = 40; TGG_min[fc68] = 40; TFG_max[fc68] = 40; TGL_max[fc68] = 35; TGL_min[fc68] = 35; TMGL_max[fc68] = 35; TVGA_max[fc68] = 10;
   FC_code[fc84] = "84"; TRG_max[fc84] = 10; TRG_min[fc84] = 10; TGG_max[fc84] = 40; TGG_min[fc84] = 40; TFG_max[fc84] = 60; TGL_max[fc84] = 20; TGL_min[fc84] = 20; TMGL_max[fc84] = 20; TVGA_max[fc84] = 90;
   FC_code[fc82] = "82"; TRG_max[fc82] = 10; TRG_min[fc82] = 10; TGG_max[fc82] = 40; TGG_min[fc82] = 40; TFG_max[fc82] = 60; TGL_max[fc82] = 20; TGL_min[fc82] = 20; TMGL_max[fc82] = 20; TVGA_max[fc82] = 90;
   FC_code[fc81] = "81"; TRG_max[fc81] = 10; TRG_min[fc81] = 10; TGG_max[fc81] = 40; TGG_min[fc81] = 40; TFG_max[fc81] = 60; TGL_max[fc81] = 20; TGL_min[fc81] = 20; TMGL_max[fc81] = 20; TVGA_max[fc81] = 90;

/* conflicten */
/* ---------- */
    TIG_max[fc02][fc05] = 25;
    TIG_max[fc02][fc21] = 0;
    TIG_max[fc02][fc31] = 44;
    TIG_max[fc02][fc82] = 30;

    TIG_max[fc03][fc05] = 44;
    TIG_max[fc03][fc21] = 10;
    TIG_max[fc03][fc24] = 76;
    TIG_max[fc03][fc31] = 46;
    TIG_max[fc03][fc34] = 85;
    TIG_max[fc03][fc67] = 64;
    TIG_max[fc03][fc68] = 60;
    TIG_max[fc03][fc84] = 58;

    TIG_max[fc05][fc02] = 49;
    TIG_max[fc05][fc03] = 40;
    TIG_max[fc05][fc24] = 30;
    TIG_max[fc05][fc33] = 50;
    TIG_max[fc05][fc68] = 47;
    TIG_max[fc05][fc84] = 56;
    TIG_max[fc05][fc82] = 50;

    TIG_max[fc08][fc11] = 20;
    TIG_max[fc08][fc26] = 0;

    TIG_max[fc09][fc11] = 61;
    TIG_max[fc09][fc26] = 10;
    TIG_max[fc09][fc28] = 36;
    TIG_max[fc09][fc38] = 51;
    TIG_max[fc09][fc61] = 53;
    TIG_max[fc09][fc62] = 44;

    TIG_max[fc11][fc08] = 58;
    TIG_max[fc11][fc09] = 40;
    TIG_max[fc11][fc28] = 15;
    TIG_max[fc11][fc38] = 29;
    TIG_max[fc11][fc62] = 47;

    TIG_max[fc21][fc02] = 30;
    TIG_max[fc21][fc03] = 14;

    TIG_max[fc22][fc68] = 17;

    TIG_max[fc24][fc03] = 13;
    TIG_max[fc24][fc05] = 51;
    TIG_max[fc24][fc67] = 17;

    TIG_max[fc26][fc08] = 48;
    TIG_max[fc26][fc09] = 50;
    TIG_max[fc26][fc62] = 48;

    TIG_max[fc28][fc09] = 48;
    TIG_max[fc28][fc11] = 64;
    TIG_max[fc28][fc61] = 33;

    TIG_max[fc31][fc02] = 102;
    TIG_max[fc31][fc03] = 103;

    TIG_max[fc32][fc68] = 53;

    TIG_max[fc33][fc05] = 54;

    TIG_max[fc34][fc03] = 52;
    TIG_max[fc34][fc67] = 59;

    TIG_max[fc38][fc09] = 90;
    TIG_max[fc38][fc11] = 108;
    TIG_max[fc38][fc61] = 131;

    TIG_max[fc61][fc09] = 27;
    TIG_max[fc61][fc28] = 37;
    TIG_max[fc61][fc38] = 53;

    TIG_max[fc62][fc09] = 40;
    TIG_max[fc62][fc11] = 32;
    TIG_max[fc62][fc26] = 42;

    TIG_max[fc67][fc03] = 24;
    TIG_max[fc67][fc24] = 50;
    TIG_max[fc67][fc34] = 72;
    TIG_max[fc67][fc84] = 40;
    TIG_max[fc67][fc81] = 0;

    TIG_max[fc68][fc03] = 31;
    TIG_max[fc68][fc05] = 34;
    TIG_max[fc68][fc22] = 54;
    TIG_max[fc68][fc32] = 64;
    TIG_max[fc68][fc81] = 5;

    TIG_max[fc84][fc03] = 15;
    TIG_max[fc84][fc05] = 23;
    TIG_max[fc84][fc67] = 67;

    TIG_max[fc82][fc02] = 4;
    TIG_max[fc82][fc05] = 1;

    TIG_max[fc81][fc67] = 30;
    TIG_max[fc81][fc68] = 20;

    TIG_max[fc02][fc09] = GKL;
    TIG_max[fc02][fc11] = GKL;
    TIG_max[fc02][fc22] = GK;
    TIG_max[fc02][fc26] = GKL;
    TIG_max[fc02][fc32] = FK;

    TIG_max[fc03][fc08] = GK;
    TIG_max[fc03][fc22] = GK;
    TIG_max[fc03][fc32] = FK;
    TIG_max[fc03][fc33] = FK;

    TIG_max[fc05][fc08] = GK;
    TIG_max[fc05][fc34] = FK;

    TIG_max[fc08][fc03] = GKL;
    TIG_max[fc08][fc05] = GKL;
    TIG_max[fc08][fc22] = GKL;
    TIG_max[fc08][fc31] = FK;
    TIG_max[fc08][fc32] = GKL;
    TIG_max[fc08][fc81] = GKL;

    TIG_max[fc09][fc02] = GK;

    TIG_max[fc11][fc02] = GK;

    TIG_max[fc22][fc02] = GKL;
    TIG_max[fc22][fc03] = GKL;
    TIG_max[fc22][fc08] = GK;

    TIG_max[fc26][fc02] = GK;

    TIG_max[fc31][fc08] = FK;
    TIG_max[fc31][fc68] = FK;

    TIG_max[fc32][fc02] = FK;
    TIG_max[fc32][fc03] = FK;
    TIG_max[fc32][fc08] = GK;

    TIG_max[fc33][fc03] = FK;
    TIG_max[fc33][fc67] = FK;

    TIG_max[fc34][fc05] = FK;

    TIG_max[fc67][fc33] = FK;
    TIG_max[fc67][fc82] = GK;

    TIG_max[fc68][fc31] = FK;
    TIG_max[fc68][fc82] = GK;

    TIG_max[fc82][fc67] = GKL;
    TIG_max[fc82][fc68] = GKL;

    TIG_max[fc81][fc08] = GK;

    default_tig_min(0);

    TIG_min[fc02][fc05] = 25;
    TIG_min[fc02][fc21] = 0;
    TIG_min[fc02][fc31] = 44;
    TIG_min[fc02][fc82] = 30;

    TIG_min[fc03][fc05] = 44;
    TIG_min[fc03][fc21] = 10;
    TIG_min[fc03][fc24] = 76;
    TIG_min[fc03][fc31] = 46;
    TIG_min[fc03][fc34] = 85;
    TIG_min[fc03][fc67] = 64;
    TIG_min[fc03][fc68] = 60;
    TIG_min[fc03][fc84] = 58;

    TIG_min[fc05][fc02] = 49;
    TIG_min[fc05][fc03] = 40;
    TIG_min[fc05][fc24] = 30;
    TIG_min[fc05][fc33] = 50;
    TIG_min[fc05][fc68] = 47;
    TIG_min[fc05][fc84] = 56;
    TIG_min[fc05][fc82] = 50;

    TIG_min[fc08][fc11] = 20;
    TIG_min[fc08][fc26] = 0;

    TIG_min[fc09][fc11] = 61;
    TIG_min[fc09][fc26] = 10;
    TIG_min[fc09][fc28] = 36;
    TIG_min[fc09][fc38] = 51;
    TIG_min[fc09][fc61] = 53;
    TIG_min[fc09][fc62] = 44;

    TIG_min[fc11][fc08] = 58;
    TIG_min[fc11][fc09] = 40;
    TIG_min[fc11][fc28] = 15;
    TIG_min[fc11][fc38] = 29;
    TIG_min[fc11][fc62] = 47;

    TIG_min[fc21][fc02] = 30;
    TIG_min[fc21][fc03] = 14;

    TIG_min[fc22][fc68] = 17;

    TIG_min[fc24][fc03] = 13;
    TIG_min[fc24][fc05] = 51;
    TIG_min[fc24][fc67] = 17;

    TIG_min[fc26][fc08] = 48;
    TIG_min[fc26][fc09] = 50;
    TIG_min[fc26][fc62] = 48;

    TIG_min[fc28][fc09] = 48;
    TIG_min[fc28][fc11] = 64;
    TIG_min[fc28][fc61] = 33;

    TIG_min[fc31][fc02] = 102;
    TIG_min[fc31][fc03] = 103;

    TIG_min[fc32][fc68] = 53;

    TIG_min[fc33][fc05] = 54;

    TIG_min[fc34][fc03] = 52;
    TIG_min[fc34][fc67] = 59;

    TIG_min[fc38][fc09] = 90;
    TIG_min[fc38][fc11] = 108;
    TIG_min[fc38][fc61] = 131;

    TIG_min[fc61][fc09] = 27;
    TIG_min[fc61][fc28] = 37;
    TIG_min[fc61][fc38] = 53;

    TIG_min[fc62][fc09] = 40;
    TIG_min[fc62][fc11] = 32;
    TIG_min[fc62][fc26] = 42;

    TIG_min[fc67][fc03] = 24;
    TIG_min[fc67][fc24] = 50;
    TIG_min[fc67][fc34] = 72;
    TIG_min[fc67][fc84] = 40;
    TIG_min[fc67][fc81] = 0;

    TIG_min[fc68][fc03] = 31;
    TIG_min[fc68][fc05] = 34;
    TIG_min[fc68][fc22] = 54;
    TIG_min[fc68][fc32] = 64;
    TIG_min[fc68][fc81] = 5;

    TIG_min[fc84][fc03] = 15;
    TIG_min[fc84][fc05] = 23;
    TIG_min[fc84][fc67] = 67;

    TIG_min[fc82][fc02] = 4;
    TIG_min[fc82][fc05] = 1;

    TIG_min[fc81][fc67] = 30;
    TIG_min[fc81][fc68] = 20;

/* overige uitgangen */
/* ----------------- */
    US_code[ussegm1]        = "segm1";                                 /* Aansturing segmenten display               */
    US_code[ussegm2]        = "segm2";                                 /* Aansturing segmenten display               */
    US_code[ussegm3]        = "segm3";                                 /* Aansturing segmenten display               */
    US_code[ussegm4]        = "segm4";                                 /* Aansturing segmenten display               */
    US_code[ussegm5]        = "segm5";                                 /* Aansturing segmenten display               */
    US_code[ussegm6]        = "segm6";                                 /* Aansturing segmenten display               */
    US_code[ussegm7]        = "segm7";                                 /* Aansturing segmenten display               */
    US_code[usML1]          = "ML1";                                   /* Verklikken actief zijn ML1                 */
    US_code[usML2]          = "ML2";                                   /* Verklikken actief zijn ML2                 */
    US_code[usML3]          = "ML3";                                   /* Verklikken actief zijn ML3                 */
    US_code[usML4]          = "ML4";                                   /* Verklikken actief zijn ML4                 */
    US_code[usfileFile68af] = "fileFile68af";                          /* File ingreep File68af actief               */
    US_code[usovtevroeg02]  = "ovtevroeg02";                           /* Voorste OV voertuig bij 02 te vroeg        */
    US_code[usovoptijd02]   = "ovoptijd02";                            /* Voorste OV voertuig bij 02 op tijd         */
    US_code[usovtelaat02]   = "ovtelaat02";                            /* Voorste OV voertuig bij 02 te laat         */
    US_code[usovtevroeg03]  = "ovtevroeg03";                           /* Voorste OV voertuig bij 03 te vroeg        */
    US_code[usovoptijd03]   = "ovoptijd03";                            /* Voorste OV voertuig bij 03 op tijd         */
    US_code[usovtelaat03]   = "ovtelaat03";                            /* Voorste OV voertuig bij 03 te laat         */
    US_code[usovtevroeg05]  = "ovtevroeg05";                           /* Voorste OV voertuig bij 05 te vroeg        */
    US_code[usovoptijd05]   = "ovoptijd05";                            /* Voorste OV voertuig bij 05 op tijd         */
    US_code[usovtelaat05]   = "ovtelaat05";                            /* Voorste OV voertuig bij 05 te laat         */
    US_code[usovtevroeg08]  = "ovtevroeg08";                           /* Voorste OV voertuig bij 08 te vroeg        */
    US_code[usovoptijd08]   = "ovoptijd08";                            /* Voorste OV voertuig bij 08 op tijd         */
    US_code[usovtelaat08]   = "ovtelaat08";                            /* Voorste OV voertuig bij 08 te laat         */
    US_code[usovtevroeg09]  = "ovtevroeg09";                           /* Voorste OV voertuig bij 09 te vroeg        */
    US_code[usovoptijd09]   = "ovoptijd09";                            /* Voorste OV voertuig bij 09 op tijd         */
    US_code[usovtelaat09]   = "ovtelaat09";                            /* Voorste OV voertuig bij 09 te laat         */
    US_code[usovtevroeg11]  = "ovtevroeg11";                           /* Voorste OV voertuig bij 11 te vroeg        */
    US_code[usovoptijd11]   = "ovoptijd11";                            /* Voorste OV voertuig bij 11 op tijd         */
    US_code[usovtelaat11]   = "ovtelaat11";                            /* Voorste OV voertuig bij 11 te laat         */
    US_code[usovtevroeg61]  = "ovtevroeg61";                           /* Voorste OV voertuig bij 61 te vroeg        */
    US_code[usovoptijd61]   = "ovoptijd61";                            /* Voorste OV voertuig bij 61 op tijd         */
    US_code[usovtelaat61]   = "ovtelaat61";                            /* Voorste OV voertuig bij 61 te laat         */
    US_code[usovtevroeg62]  = "ovtevroeg62";                           /* Voorste OV voertuig bij 62 te vroeg        */
    US_code[usovoptijd62]   = "ovoptijd62";                            /* Voorste OV voertuig bij 62 op tijd         */
    US_code[usovtelaat62]   = "ovtelaat62";                            /* Voorste OV voertuig bij 62 te laat         */
    US_code[usovtevroeg67]  = "ovtevroeg67";                           /* Voorste OV voertuig bij 67 te vroeg        */
    US_code[usovoptijd67]   = "ovoptijd67";                            /* Voorste OV voertuig bij 67 op tijd         */
    US_code[usovtelaat67]   = "ovtelaat67";                            /* Voorste OV voertuig bij 67 te laat         */
    US_code[usovtevroeg68]  = "ovtevroeg68";                           /* Voorste OV voertuig bij 68 te vroeg        */
    US_code[usovoptijd68]   = "ovoptijd68";                            /* Voorste OV voertuig bij 68 op tijd         */
    US_code[usovtelaat68]   = "ovtelaat68";                            /* Voorste OV voertuig bij 68 te laat         */
    US_code[usmaxwt]        = "maxwt";                                 /* Verklikken maximale wachttijd overschreden */
    US_code[uskarmelding]   = "karmelding";                            /* Verklikken ontvangst melding KAR           */
    US_code[uskarog]        = "karog";                                 /* Verklikken ondergedrag KAR                 */
    US_code[usovinm02]      = "ovinm02";                               /* Verklikken inmelding OV fase 02            */
    US_code[usovinm03]      = "ovinm03";                               /* Verklikken inmelding OV fase 03            */
    US_code[usovinm05]      = "ovinm05";                               /* Verklikken inmelding OV fase 05            */
    US_code[usovinm08]      = "ovinm08";                               /* Verklikken inmelding OV fase 08            */
    US_code[usovinm09]      = "ovinm09";                               /* Verklikken inmelding OV fase 09            */
    US_code[usovinm11]      = "ovinm11";                               /* Verklikken inmelding OV fase 11            */
    US_code[usovinm61]      = "ovinm61";                               /* Verklikken inmelding OV fase 61            */
    US_code[usovinm62]      = "ovinm62";                               /* Verklikken inmelding OV fase 62            */
    US_code[usovinm67]      = "ovinm67";                               /* Verklikken inmelding OV fase 67            */
    US_code[usovinm68]      = "ovinm68";                               /* Verklikken inmelding OV fase 68            */
    US_code[ushdinm02]      = "hdinm02";                               /* Verklikken inmelding HD fase 02            */
    US_code[ushdinm03]      = "hdinm03";                               /* Verklikken inmelding HD fase 03            */
    US_code[ushdinm05]      = "hdinm05";                               /* Verklikken inmelding HD fase 05            */
    US_code[ushdinm08]      = "hdinm08";                               /* Verklikken inmelding HD fase 08            */
    US_code[ushdinm09]      = "hdinm09";                               /* Verklikken inmelding HD fase 09            */
    US_code[ushdinm11]      = "hdinm11";                               /* Verklikken inmelding HD fase 11            */
    US_code[ushdinm61]      = "hdinm61";                               /* Verklikken inmelding HD fase 61            */
    US_code[ushdinm62]      = "hdinm62";                               /* Verklikken inmelding HD fase 62            */
    US_code[ushdinm67]      = "hdinm67";                               /* Verklikken inmelding HD fase 67            */
    US_code[ushdinm68]      = "hdinm68";                               /* Verklikken inmelding HD fase 68            */
    US_code[usperdef]       = "perdef";                                /* Default periode actief                     */
    US_code[usper1]         = "per1";                                  /* Periode Dag periode actief                 */
    US_code[usper2]         = "per2";                                  /* Periode Ochtendspits actief                */
    US_code[usper3]         = "per3";                                  /* Periode Avondspits actief                  */
    US_code[usper4]         = "per4";                                  /* Periode Koopavond actief                   */
    US_code[usper5]         = "per5";                                  /* Periode Weekend actief                     */
    US_code[usper6]         = "per6";                                  /* Periode Reserve actief                     */
    US_code[usrgv]          = "rgv";                                   /* Verklikken actief zijn RoBuGrover          */
    US_code[uswtk21]        = "wtk21";                                 /* Aansturing waitsignaal detector k21        */
    US_code[uswtk22]        = "wtk22";                                 /* Aansturing waitsignaal detector k22        */
    US_code[uswtk24]        = "wtk24";                                 /* Aansturing waitsignaal detector k24        */
    US_code[uswtk26]        = "wtk26";                                 /* Aansturing waitsignaal detector k26        */
    US_code[uswtk28]        = "wtk28";                                 /* Aansturing waitsignaal detector k28        */
    US_code[uswtk31a]       = "wtk31a";                                /* Aansturing waitsignaal detector k31a       */
    US_code[uswtk31b]       = "wtk31b";                                /* Aansturing waitsignaal detector k31b       */
    US_code[uswtk32a]       = "wtk32a";                                /* Aansturing waitsignaal detector k32a       */
    US_code[uswtk32b]       = "wtk32b";                                /* Aansturing waitsignaal detector k32b       */
    US_code[uswtk33a]       = "wtk33a";                                /* Aansturing waitsignaal detector k33a       */
    US_code[uswtk33b]       = "wtk33b";                                /* Aansturing waitsignaal detector k33b       */
    US_code[uswtk34a]       = "wtk34a";                                /* Aansturing waitsignaal detector k34a       */
    US_code[uswtk34b]       = "wtk34b";                                /* Aansturing waitsignaal detector k34b       */
    US_code[uswtk38a]       = "wtk38a";                                /* Aansturing waitsignaal detector k38a       */
    US_code[uswtk38b]       = "wtk38b";                                /* Aansturing waitsignaal detector k38b       */
    US_code[uswtk84]        = "wtk84";                                 /* Aansturing waitsignaal detector k84        */
    US_code[uswtk82]        = "wtk82";                                 /* Aansturing waitsignaal detector k82        */
    US_code[uswtk81]        = "wtk81";                                 /* Aansturing waitsignaal detector k81        */

/* detectie */
/* -------- */
    D_code[d02_1a] = "02_1a"; TDB_max[d02_1a] = 20; TDH_max[d02_1a] = 25;
                              TBG_max[d02_1a] = 20; TOG_max[d02_1a] = 360;
    D_code[d02_1b] = "02_1b"; TDB_max[d02_1b] = 20; TDH_max[d02_1b] = 25;
                              TBG_max[d02_1b] = 20; TOG_max[d02_1b] = 360;
    D_code[d02_2a] = "02_2a"; TDB_max[d02_2a] = 0;  TDH_max[d02_2a] = 5;
                              TBG_max[d02_2a] = 60; TOG_max[d02_2a] = 360;
    D_code[d02_2b] = "02_2b"; TDB_max[d02_2b] = 0;  TDH_max[d02_2b] = 5;
                              TBG_max[d02_2b] = 60; TOG_max[d02_2b] = 360;
    D_code[d02_3a] = "02_3a"; TDB_max[d02_3a] = 0;  TDH_max[d02_3a] = 20;
                              TBG_max[d02_3a] = 60; TOG_max[d02_3a] = 360;
    D_code[d02_3b] = "02_3b"; TDB_max[d02_3b] = 0;  TDH_max[d02_3b] = 20;
                              TBG_max[d02_3b] = 60; TOG_max[d02_3b] = 360;
    D_code[d02_4a] = "02_4a"; TDB_max[d02_4a] = 0;  TDH_max[d02_4a] = 25;
                              TBG_max[d02_4a] = 60; TOG_max[d02_4a] = 360;
    D_code[d02_4b] = "02_4b"; TDB_max[d02_4b] = 0;  TDH_max[d02_4b] = 25;
                              TBG_max[d02_4b] = 60; TOG_max[d02_4b] = 360;
    D_code[d03_1]  = "03_1";  TDB_max[d03_1]  = 20; TDH_max[d03_1]  = 0;
                              TBG_max[d03_1]  = 20; TOG_max[d03_1]  = 360;
    D_code[d03_2]  = "03_2";  TDB_max[d03_2]  = 0;  TDH_max[d03_2]  = 5;
                              TBG_max[d03_2]  = 60; TOG_max[d03_2]  = 360;
    D_code[d05_1]  = "05_1";  TDB_max[d05_1]  = 20; TDH_max[d05_1]  = 0;
                              TBG_max[d05_1]  = 20; TOG_max[d05_1]  = 360;
    D_code[d05_2]  = "05_2";  TDB_max[d05_2]  = 0;  TDH_max[d05_2]  = 5;
                              TBG_max[d05_2]  = 60; TOG_max[d05_2]  = 360;
    D_code[d08_1a] = "08_1a"; TDB_max[d08_1a] = 20; TDH_max[d08_1a] = 25;
                              TBG_max[d08_1a] = 20; TOG_max[d08_1a] = 360;
    D_code[d08_1b] = "08_1b"; TDB_max[d08_1b] = 20; TDH_max[d08_1b] = 25;
                              TBG_max[d08_1b] = 20; TOG_max[d08_1b] = 360;
    D_code[d08_2a] = "08_2a"; TDB_max[d08_2a] = 0;  TDH_max[d08_2a] = 5;
                              TBG_max[d08_2a] = 60; TOG_max[d08_2a] = 360;
    D_code[d08_2b] = "08_2b"; TDB_max[d08_2b] = 0;  TDH_max[d08_2b] = 5;
                              TBG_max[d08_2b] = 60; TOG_max[d08_2b] = 360;
    D_code[d08_3a] = "08_3a"; TDB_max[d08_3a] = 0;  TDH_max[d08_3a] = 20;
                              TBG_max[d08_3a] = 60; TOG_max[d08_3a] = 360;
    D_code[d08_3b] = "08_3b"; TDB_max[d08_3b] = 0;  TDH_max[d08_3b] = 20;
                              TBG_max[d08_3b] = 60; TOG_max[d08_3b] = 360;
    D_code[d08_4a] = "08_4a"; TDB_max[d08_4a] = 0;  TDH_max[d08_4a] = 25;
                              TBG_max[d08_4a] = 60; TOG_max[d08_4a] = 360;
    D_code[d08_4b] = "08_4b"; TDB_max[d08_4b] = 0;  TDH_max[d08_4b] = 25;
                              TBG_max[d08_4b] = 60; TOG_max[d08_4b] = 360;
    D_code[d09_1]  = "09_1";  TDB_max[d09_1]  = 20; TDH_max[d09_1]  = 25;
                              TBG_max[d09_1]  = 20; TOG_max[d09_1]  = 360;
    D_code[d09_2]  = "09_2";  TDB_max[d09_2]  = 0;  TDH_max[d09_2]  = 5;
                              TBG_max[d09_2]  = 60; TOG_max[d09_2]  = 360;
    D_code[d09_3]  = "09_3";  TDB_max[d09_3]  = 0;  TDH_max[d09_3]  = 15;
                              TBG_max[d09_3]  = 60; TOG_max[d09_3]  = 360;
    D_code[d11_1]  = "11_1";  TDB_max[d11_1]  = 20; TDH_max[d11_1]  = 25;
                              TBG_max[d11_1]  = 20; TOG_max[d11_1]  = 360;
    D_code[d11_2]  = "11_2";  TDB_max[d11_2]  = 0;  TDH_max[d11_2]  = 5;
                              TBG_max[d11_2]  = 60; TOG_max[d11_2]  = 360;
    D_code[d11_3]  = "11_3";  TDB_max[d11_3]  = 0;  TDH_max[d11_3]  = 15;
                              TBG_max[d11_3]  = 60; TOG_max[d11_3]  = 360;
    D_code[d11_4]  = "11_4";  TDB_max[d11_4]  = 0;  TDH_max[d11_4]  = 10;
                              TBG_max[d11_4]  = 60; TOG_max[d11_4]  = 360;
    D_code[d211]   = "211";   TDB_max[d211]   = 15; TDH_max[d211]   = 30;
                              TBG_max[d211]   = 10; TOG_max[d211]   = 1440;
    D_code[dk21]   = "k21";   TBG_max[dk21]   = 10; TOG_max[dk21]   = 1440;
    D_code[d22_1]  = "22_1";  TDB_max[d22_1]  = 15; TDH_max[d22_1]  = 30;
                              TBG_max[d22_1]  = 10; TOG_max[d22_1]  = 1440;
    D_code[dk22]   = "k22";   TBG_max[dk22]   = 10; TOG_max[dk22]   = 2880;
    D_code[d24_1]  = "24_1";  TDB_max[d24_1]  = 15; TDH_max[d24_1]  = 30;
                              TBG_max[d24_1]  = 10; TOG_max[d24_1]  = 1440;
    D_code[d24_2]  = "24_2";  TDB_max[d24_2]  = 0;  TDH_max[d24_2]  = 50;
                              TBG_max[d24_2]  = 30; TOG_max[d24_2]  = 1440;
    D_code[d24_3]  = "24_3";  TDB_max[d24_3]  = 0;  TDH_max[d24_3]  = 50;
                              TBG_max[d24_3]  = 30; TOG_max[d24_3]  = 1440;
    D_code[dk24]   = "k24";   TBG_max[dk24]   = 10; TOG_max[dk24]   = 2880;
    D_code[d261]   = "261";   TDB_max[d261]   = 15; TDH_max[d261]   = 30;
                              TBG_max[d261]   = 10; TOG_max[d261]   = 1440;
    D_code[dk26]   = "k26";   TBG_max[dk26]   = 10; TOG_max[dk26]   = 1440;
    D_code[d28_1]  = "28_1";  TDB_max[d28_1]  = 15; TDH_max[d28_1]  = 30;
                              TBG_max[d28_1]  = 10; TOG_max[d28_1]  = 1440;
    D_code[d28_2]  = "28_2";  TDB_max[d28_2]  = 0;  TDH_max[d28_2]  = 50;
                              TBG_max[d28_2]  = 30; TOG_max[d28_2]  = 1440;
    D_code[dk28]   = "k28";   TBG_max[dk28]   = 10; TOG_max[dk28]   = 2880;
    D_code[dk31a]  = "k31a";  TBG_max[dk31a]  = 10; TOG_max[dk31a]  = 1440;
    D_code[dk31b]  = "k31b";  TBG_max[dk31b]  = 10; TOG_max[dk31b]  = 0;
    D_code[dk32a]  = "k32a";  TBG_max[dk32a]  = 10; TOG_max[dk32a]  = 1440;
    D_code[dk32b]  = "k32b";  TBG_max[dk32b]  = 10; TOG_max[dk32b]  = 0;
    D_code[dk33a]  = "k33a";  TBG_max[dk33a]  = 10; TOG_max[dk33a]  = 1440;
    D_code[dk33b]  = "k33b";  TBG_max[dk33b]  = 10; TOG_max[dk33b]  = 0;
    D_code[dk34a]  = "k34a";  TBG_max[dk34a]  = 10; TOG_max[dk34a]  = 1440;
    D_code[dk34b]  = "k34b";  TBG_max[dk34b]  = 10; TOG_max[dk34b]  = 0;
    D_code[dk38a]  = "k38a";  TBG_max[dk38a]  = 10; TOG_max[dk38a]  = 1440;
    D_code[dk38b]  = "k38b";  TBG_max[dk38b]  = 10; TOG_max[dk38b]  = 0;
    D_code[d61_1]  = "61_1";  TDB_max[d61_1]  = 20; TDH_max[d61_1]  = 0;
                              TBG_max[d61_1]  = 20; TOG_max[d61_1]  = 360;
    D_code[d61_2]  = "61_2";  TDB_max[d61_2]  = 0;  TDH_max[d61_2]  = 5;
                              TBG_max[d61_2]  = 60; TOG_max[d61_2]  = 360;
    D_code[d62_1a] = "62_1a"; TDB_max[d62_1a] = 20; TDH_max[d62_1a] = 25;
                              TBG_max[d62_1a] = 20; TOG_max[d62_1a] = 360;
    D_code[d62_1b] = "62_1b"; TDB_max[d62_1b] = 20; TDH_max[d62_1b] = 25;
                              TBG_max[d62_1b] = 20; TOG_max[d62_1b] = 360;
    D_code[d62_2a] = "62_2a"; TDB_max[d62_2a] = 0;  TDH_max[d62_2a] = 10;
                              TBG_max[d62_2a] = 60; TOG_max[d62_2a] = 360;
    D_code[d62_2b] = "62_2b"; TDB_max[d62_2b] = 0;  TDH_max[d62_2b] = 10;
                              TBG_max[d62_2b] = 60; TOG_max[d62_2b] = 360;
    D_code[d67_1]  = "67_1";  TDB_max[d67_1]  = 20; TDH_max[d67_1]  = 0;
                              TBG_max[d67_1]  = 20; TOG_max[d67_1]  = 360;
    D_code[d67_2]  = "67_2";  TDB_max[d67_2]  = 0;  TDH_max[d67_2]  = 5;
                              TBG_max[d67_2]  = 60; TOG_max[d67_2]  = 360;
    D_code[d68_1a] = "68_1a"; TDB_max[d68_1a] = 20; TDH_max[d68_1a] = 25;
                              TBG_max[d68_1a] = 20; TOG_max[d68_1a] = 360;
    D_code[d68_1b] = "68_1b"; TDB_max[d68_1b] = 20; TDH_max[d68_1b] = 25;
                              TBG_max[d68_1b] = 20; TOG_max[d68_1b] = 360;
    D_code[d68_2a] = "68_2a"; TDB_max[d68_2a] = 0;  TDH_max[d68_2a] = 10;
                              TBG_max[d68_2a] = 60; TOG_max[d68_2a] = 360;
    D_code[d68_2b] = "68_2b"; TDB_max[d68_2b] = 0;  TDH_max[d68_2b] = 5;
                              TBG_max[d68_2b] = 60; TOG_max[d68_2b] = 360;
    D_code[d68_9a] = "68_9a"; TDB_max[d68_9a] = 0;  TDH_max[d68_9a] = 0;
                              TBG_max[d68_9a] = 20; TOG_max[d68_9a] = 360;
    D_code[d68_9b] = "68_9b"; TDB_max[d68_9b] = 0;  TDH_max[d68_9b] = 0;
                              TBG_max[d68_9b] = 20; TOG_max[d68_9b] = 360;
    D_code[d84_1]  = "84_1";  TDB_max[d84_1]  = 15; TDH_max[d84_1]  = 30;
                              TBG_max[d84_1]  = 10; TOG_max[d84_1]  = 1440;
    D_code[dk84]   = "k84";   TBG_max[dk84]   = 10; TOG_max[dk84]   = 2880;
    D_code[d82_1]  = "82_1";  TDB_max[d82_1]  = 15; TDH_max[d82_1]  = 30;
                              TBG_max[d82_1]  = 10; TOG_max[d82_1]  = 1440;
    D_code[dk82]   = "k82";   TBG_max[dk82]   = 10; TOG_max[dk82]   = 1440;
    D_code[d81_1]  = "81_1";  TDB_max[d81_1]  = 15; TDH_max[d81_1]  = 30;
                              TBG_max[d81_1]  = 10; TOG_max[d81_1]  = 1440;
    D_code[dk81]   = "k81";   TBG_max[dk81]   = 10; TOG_max[dk81]   = 1440;
#if !defined NO_DDFLUTTER
    TFL_max[d02_1a] = 60; CFL_max[d02_1a] = 45;
    TFL_max[d02_1b] = 60; CFL_max[d02_1b] = 45;
    TFL_max[d02_2a] = 60; CFL_max[d02_2a] = 45;
    TFL_max[d02_2b] = 60; CFL_max[d02_2b] = 45;
    TFL_max[d02_3a] = 60; CFL_max[d02_3a] = 45;
    TFL_max[d02_3b] = 60; CFL_max[d02_3b] = 45;
    TFL_max[d02_4a] = 60; CFL_max[d02_4a] = 45;
    TFL_max[d02_4b] = 60; CFL_max[d02_4b] = 45;
    TFL_max[d03_1] = 60;  CFL_max[d03_1] = 45;
    TFL_max[d03_2] = 60;  CFL_max[d03_2] = 45;
    TFL_max[d05_1] = 60;  CFL_max[d05_1] = 45;
    TFL_max[d05_2] = 60;  CFL_max[d05_2] = 45;
    TFL_max[d08_1a] = 60; CFL_max[d08_1a] = 45;
    TFL_max[d08_1b] = 60; CFL_max[d08_1b] = 45;
    TFL_max[d08_2a] = 60; CFL_max[d08_2a] = 45;
    TFL_max[d08_2b] = 60; CFL_max[d08_2b] = 45;
    TFL_max[d08_3a] = 60; CFL_max[d08_3a] = 45;
    TFL_max[d08_3b] = 60; CFL_max[d08_3b] = 45;
    TFL_max[d08_4a] = 60; CFL_max[d08_4a] = 45;
    TFL_max[d08_4b] = 60; CFL_max[d08_4b] = 45;
    TFL_max[d09_1] = 60;  CFL_max[d09_1] = 45;
    TFL_max[d09_2] = 60;  CFL_max[d09_2] = 45;
    TFL_max[d09_3] = 60;  CFL_max[d09_3] = 45;
    TFL_max[d11_1] = 60;  CFL_max[d11_1] = 45;
    TFL_max[d11_2] = 60;  CFL_max[d11_2] = 45;
    TFL_max[d11_3] = 60;  CFL_max[d11_3] = 45;
    TFL_max[d11_4] = 60;  CFL_max[d11_4] = 45;
    TFL_max[d211] = 60;   CFL_max[d211] = 45;
    TFL_max[dk21] = 60;   CFL_max[dk21] = 45;
    TFL_max[d22_1] = 60;  CFL_max[d22_1] = 45;
    TFL_max[dk22] = 60;   CFL_max[dk22] = 45;
    TFL_max[d24_1] = 60;  CFL_max[d24_1] = 45;
    TFL_max[d24_2] = 60;  CFL_max[d24_2] = 45;
    TFL_max[d24_3] = 60;  CFL_max[d24_3] = 45;
    TFL_max[dk24] = 60;   CFL_max[dk24] = 45;
    TFL_max[d261] = 60;   CFL_max[d261] = 45;
    TFL_max[dk26] = 60;   CFL_max[dk26] = 45;
    TFL_max[d28_1] = 60;  CFL_max[d28_1] = 45;
    TFL_max[d28_2] = 60;  CFL_max[d28_2] = 45;
    TFL_max[dk28] = 60;   CFL_max[dk28] = 45;
    TFL_max[dk31a] = 60;  CFL_max[dk31a] = 45;
    TFL_max[dk31b] = 60;  CFL_max[dk31b] = 45;
    TFL_max[dk32a] = 60;  CFL_max[dk32a] = 45;
    TFL_max[dk32b] = 60;  CFL_max[dk32b] = 45;
    TFL_max[dk33a] = 60;  CFL_max[dk33a] = 45;
    TFL_max[dk33b] = 60;  CFL_max[dk33b] = 45;
    TFL_max[dk34a] = 60;  CFL_max[dk34a] = 45;
    TFL_max[dk34b] = 60;  CFL_max[dk34b] = 45;
    TFL_max[dk38a] = 60;  CFL_max[dk38a] = 45;
    TFL_max[dk38b] = 60;  CFL_max[dk38b] = 45;
    TFL_max[d61_1] = 60;  CFL_max[d61_1] = 45;
    TFL_max[d61_2] = 60;  CFL_max[d61_2] = 45;
    TFL_max[d62_1a] = 60; CFL_max[d62_1a] = 45;
    TFL_max[d62_1b] = 60; CFL_max[d62_1b] = 45;
    TFL_max[d62_2a] = 60; CFL_max[d62_2a] = 45;
    TFL_max[d62_2b] = 60; CFL_max[d62_2b] = 45;
    TFL_max[d67_1] = 60;  CFL_max[d67_1] = 45;
    TFL_max[d67_2] = 60;  CFL_max[d67_2] = 45;
    TFL_max[d68_1a] = 60; CFL_max[d68_1a] = 45;
    TFL_max[d68_1b] = 60; CFL_max[d68_1b] = 45;
    TFL_max[d68_2a] = 60; CFL_max[d68_2a] = 45;
    TFL_max[d68_2b] = 60; CFL_max[d68_2b] = 45;
    TFL_max[d68_9a] = 60; CFL_max[d68_9a] = 45;
    TFL_max[d68_9b] = 60; CFL_max[d68_9b] = 45;
    TFL_max[d84_1] = 60;  CFL_max[d84_1] = 45;
    TFL_max[dk84] = 60;   CFL_max[dk84] = 45;
    TFL_max[d82_1] = 60;  CFL_max[d82_1] = 45;
    TFL_max[dk82] = 60;   CFL_max[dk82] = 45;
    TFL_max[d81_1] = 60;  CFL_max[d81_1] = 45;
    TFL_max[dk81] = 60;   CFL_max[dk81] = 45;
#endif /* !defined NO_DDFLUTTER */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    D_code[ddummykarin02bus]  = "dummykarin02bus";  
    D_code[ddummykarin03bus]  = "dummykarin03bus";  
    D_code[ddummykarin05bus]  = "dummykarin05bus";  
    D_code[ddummykarin08bus]  = "dummykarin08bus";  
    D_code[ddummykarin09bus]  = "dummykarin09bus";  
    D_code[ddummykarin11bus]  = "dummykarin11bus";  
    D_code[ddummykarin61bus]  = "dummykarin61bus";  
    D_code[ddummykarin62bus]  = "dummykarin62bus";  
    D_code[ddummykarin67bus]  = "dummykarin67bus";  
    D_code[ddummykarin68bus]  = "dummykarin68bus";  
    D_code[ddummykaruit02bus] = "dummykaruit02bus"; 
    D_code[ddummykaruit03bus] = "dummykaruit03bus"; 
    D_code[ddummykaruit05bus] = "dummykaruit05bus"; 
    D_code[ddummykaruit08bus] = "dummykaruit08bus"; 
    D_code[ddummykaruit09bus] = "dummykaruit09bus"; 
    D_code[ddummykaruit11bus] = "dummykaruit11bus"; 
    D_code[ddummykaruit61bus] = "dummykaruit61bus"; 
    D_code[ddummykaruit62bus] = "dummykaruit62bus"; 
    D_code[ddummykaruit67bus] = "dummykaruit67bus"; 
    D_code[ddummykaruit68bus] = "dummykaruit68bus"; 
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
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
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
    IS_code[isris841cyclist]    = "ris841cyclist";                        
#endif

/* hulp elementen */
/* -------------- */
    H_code[hopdrempelen02]     = "opdrempelen02";                                  /* Opdrempelen toepassen voor fase 02                                 */
    H_code[hgeendynhiaat02]    = "geendynhiaat02";                                 /* Tegenhouden toepassen dynamische hiaattijden voor fase 02          */
    H_code[hverleng_02_1a]     = "verleng_02_1a";                                  /* Instructie verlengen op detector 02_1a ongeacht dynamische hiaat   */
    H_code[hverleng_02_1b]     = "verleng_02_1b";                                  /* Instructie verlengen op detector 02_1b ongeacht dynamische hiaat   */
    H_code[hverleng_02_2a]     = "verleng_02_2a";                                  /* Instructie verlengen op detector 02_2a ongeacht dynamische hiaat   */
    H_code[hverleng_02_2b]     = "verleng_02_2b";                                  /* Instructie verlengen op detector 02_2b ongeacht dynamische hiaat   */
    H_code[hverleng_02_3a]     = "verleng_02_3a";                                  /* Instructie verlengen op detector 02_3a ongeacht dynamische hiaat   */
    H_code[hverleng_02_3b]     = "verleng_02_3b";                                  /* Instructie verlengen op detector 02_3b ongeacht dynamische hiaat   */
    H_code[hverleng_02_4a]     = "verleng_02_4a";                                  /* Instructie verlengen op detector 02_4a ongeacht dynamische hiaat   */
    H_code[hverleng_02_4b]     = "verleng_02_4b";                                  /* Instructie verlengen op detector 02_4b ongeacht dynamische hiaat   */
    H_code[hopdrempelen08]     = "opdrempelen08";                                  /* Opdrempelen toepassen voor fase 08                                 */
    H_code[hgeendynhiaat08]    = "geendynhiaat08";                                 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    H_code[hverleng_08_1a]     = "verleng_08_1a";                                  /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    H_code[hverleng_08_1b]     = "verleng_08_1b";                                  /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    H_code[hverleng_08_2a]     = "verleng_08_2a";                                  /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    H_code[hverleng_08_2b]     = "verleng_08_2b";                                  /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    H_code[hverleng_08_3a]     = "verleng_08_3a";                                  /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    H_code[hverleng_08_3b]     = "verleng_08_3b";                                  /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    H_code[hverleng_08_4a]     = "verleng_08_4a";                                  /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    H_code[hverleng_08_4b]     = "verleng_08_4b";                                  /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    H_code[hopdrempelen09]     = "opdrempelen09";                                  /* Opdrempelen toepassen voor fase 09                                 */
    H_code[hgeendynhiaat09]    = "geendynhiaat09";                                 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    H_code[hverleng_09_1]      = "verleng_09_1";                                   /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    H_code[hverleng_09_2]      = "verleng_09_2";                                   /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    H_code[hverleng_09_3]      = "verleng_09_3";                                   /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    H_code[hopdrempelen11]     = "opdrempelen11";                                  /* Opdrempelen toepassen voor fase 11                                 */
    H_code[hgeendynhiaat11]    = "geendynhiaat11";                                 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    H_code[hverleng_11_1]      = "verleng_11_1";                                   /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    H_code[hverleng_11_2]      = "verleng_11_2";                                   /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    H_code[hverleng_11_3]      = "verleng_11_3";                                   /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    H_code[hverleng_11_4]      = "verleng_11_4";                                   /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    H_code[hmadk31a]           = "madk31a";                                        /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    H_code[hmadk31b]           = "madk31b";                                        /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    H_code[hmadk32a]           = "madk32a";                                        /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    H_code[hmadk32b]           = "madk32b";                                        /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    H_code[hmadk33a]           = "madk33a";                                        /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    H_code[hmadk33b]           = "madk33b";                                        /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    H_code[hmadk34a]           = "madk34a";                                        /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    H_code[hmadk34b]           = "madk34b";                                        /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    H_code[hfileFile68af]      = "fileFile68af";                                   /* File File68af actief                                               */
    H_code[hfile68_9a]         = "file68_9a";                                      /* File 68_9a actief                                                  */
    H_code[hfile68_9b]         = "file68_9b";                                      /* File 68_9b actief                                                  */
    H_code[hafk08fileFile68af] = "afk08fileFile68af";                              /* Onthouden afkappen fase 08 bij start file ingreep                  */
    H_code[hafk11fileFile68af] = "afk11fileFile68af";                              /* Onthouden afkappen fase 11 bij start file ingreep                  */
    H_code[hnla22_1]           = "nla22_1";                                        /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    H_code[hnlak31a]           = "nlak31a";                                        /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    H_code[hnlak32a]           = "nlak32a";                                        /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    H_code[hnlak33a]           = "nlak33a";                                        /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    H_code[hnlak34a]           = "nlak34a";                                        /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    H_code[hnla82_1]           = "nla82_1";                                        /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    H_code[hstp02bus]          = "stp02bus";                                       /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    H_code[hstp03bus]          = "stp03bus";                                       /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    H_code[hstp05bus]          = "stp05bus";                                       /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    H_code[hstp08bus]          = "stp08bus";                                       /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    H_code[hstp09bus]          = "stp09bus";                                       /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    H_code[hstp11bus]          = "stp11bus";                                       /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    H_code[hstp61bus]          = "stp61bus";                                       /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    H_code[hstp62bus]          = "stp62bus";                                       /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    H_code[hstp67bus]          = "stp67bus";                                       /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    H_code[hstp68bus]          = "stp68bus";                                       /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    H_code[hprio02bus]         = "prio02bus";                                      /* Bijhouden actief zijn prioriteit fase 02                           */
    H_code[hprioin02bus]       = "prioin02bus";                                    /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02bus]      = "priouit02bus";                                   /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprioin02buskar]    = "prioin02buskar";                                 /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02buskar]   = "priouit02buskar";                                /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprio03bus]         = "prio03bus";                                      /* Bijhouden actief zijn prioriteit fase 03                           */
    H_code[hprioin03bus]       = "prioin03bus";                                    /* Prioriteit inmelding fase 03 Bus                                   */
    H_code[hpriouit03bus]      = "priouit03bus";                                   /* Prioriteit uitmelding 03 Bus                                       */
    H_code[hprioin03buskar]    = "prioin03buskar";                                 /* Prioriteit inmelding fase 03 Bus                                   */
    H_code[hpriouit03buskar]   = "priouit03buskar";                                /* Prioriteit uitmelding 03 Bus                                       */
    H_code[hprio05bus]         = "prio05bus";                                      /* Bijhouden actief zijn prioriteit fase 05                           */
    H_code[hprioin05bus]       = "prioin05bus";                                    /* Prioriteit inmelding fase 05 Bus                                   */
    H_code[hpriouit05bus]      = "priouit05bus";                                   /* Prioriteit uitmelding 05 Bus                                       */
    H_code[hprioin05buskar]    = "prioin05buskar";                                 /* Prioriteit inmelding fase 05 Bus                                   */
    H_code[hpriouit05buskar]   = "priouit05buskar";                                /* Prioriteit uitmelding 05 Bus                                       */
    H_code[hprio08bus]         = "prio08bus";                                      /* Bijhouden actief zijn prioriteit fase 08                           */
    H_code[hprioin08bus]       = "prioin08bus";                                    /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08bus]      = "priouit08bus";                                   /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprioin08buskar]    = "prioin08buskar";                                 /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08buskar]   = "priouit08buskar";                                /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprio09bus]         = "prio09bus";                                      /* Bijhouden actief zijn prioriteit fase 09                           */
    H_code[hprioin09bus]       = "prioin09bus";                                    /* Prioriteit inmelding fase 09 Bus                                   */
    H_code[hpriouit09bus]      = "priouit09bus";                                   /* Prioriteit uitmelding 09 Bus                                       */
    H_code[hprioin09buskar]    = "prioin09buskar";                                 /* Prioriteit inmelding fase 09 Bus                                   */
    H_code[hpriouit09buskar]   = "priouit09buskar";                                /* Prioriteit uitmelding 09 Bus                                       */
    H_code[hprio11bus]         = "prio11bus";                                      /* Bijhouden actief zijn prioriteit fase 11                           */
    H_code[hprioin11bus]       = "prioin11bus";                                    /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11bus]      = "priouit11bus";                                   /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprioin11buskar]    = "prioin11buskar";                                 /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11buskar]   = "priouit11buskar";                                /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprio61bus]         = "prio61bus";                                      /* Bijhouden actief zijn prioriteit fase 61                           */
    H_code[hprioin61bus]       = "prioin61bus";                                    /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61bus]      = "priouit61bus";                                   /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprioin61buskar]    = "prioin61buskar";                                 /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61buskar]   = "priouit61buskar";                                /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprio62bus]         = "prio62bus";                                      /* Bijhouden actief zijn prioriteit fase 62                           */
    H_code[hprioin62bus]       = "prioin62bus";                                    /* Prioriteit inmelding fase 62 Bus                                   */
    H_code[hpriouit62bus]      = "priouit62bus";                                   /* Prioriteit uitmelding 62 Bus                                       */
    H_code[hprioin62buskar]    = "prioin62buskar";                                 /* Prioriteit inmelding fase 62 Bus                                   */
    H_code[hpriouit62buskar]   = "priouit62buskar";                                /* Prioriteit uitmelding 62 Bus                                       */
    H_code[hprio67bus]         = "prio67bus";                                      /* Bijhouden actief zijn prioriteit fase 67                           */
    H_code[hprioin67bus]       = "prioin67bus";                                    /* Prioriteit inmelding fase 67 Bus                                   */
    H_code[hpriouit67bus]      = "priouit67bus";                                   /* Prioriteit uitmelding 67 Bus                                       */
    H_code[hprioin67buskar]    = "prioin67buskar";                                 /* Prioriteit inmelding fase 67 Bus                                   */
    H_code[hpriouit67buskar]   = "priouit67buskar";                                /* Prioriteit uitmelding 67 Bus                                       */
    H_code[hprio68bus]         = "prio68bus";                                      /* Bijhouden actief zijn prioriteit fase 68                           */
    H_code[hprioin68bus]       = "prioin68bus";                                    /* Prioriteit inmelding fase 68 Bus                                   */
    H_code[hpriouit68bus]      = "priouit68bus";                                   /* Prioriteit uitmelding 68 Bus                                       */
    H_code[hprioin68buskar]    = "prioin68buskar";                                 /* Prioriteit inmelding fase 68 Bus                                   */
    H_code[hpriouit68buskar]   = "priouit68buskar";                                /* Prioriteit uitmelding 68 Bus                                       */
    H_code[hhd02]              = "hd02";                                           /* Bijhouden aanwezigheid HD fase 02                                  */
    H_code[hhdin02]            = "hdin02";                                         /* HD inmelding 02                                                    */
    H_code[hhduit02]           = "hduit02";                                        /* HD uitmelding 02                                                   */
    H_code[hhdin02kar]         = "hdin02kar";                                      /* HD inmelding 02                                                    */
    H_code[hhduit02kar]        = "hduit02kar";                                     /* HD uitmelding 02                                                   */
    H_code[hhd03]              = "hd03";                                           /* Bijhouden aanwezigheid HD fase 03                                  */
    H_code[hhdin03]            = "hdin03";                                         /* HD inmelding 03                                                    */
    H_code[hhduit03]           = "hduit03";                                        /* HD uitmelding 03                                                   */
    H_code[hhdin03kar]         = "hdin03kar";                                      /* HD inmelding 03                                                    */
    H_code[hhduit03kar]        = "hduit03kar";                                     /* HD uitmelding 03                                                   */
    H_code[hhd05]              = "hd05";                                           /* Bijhouden aanwezigheid HD fase 05                                  */
    H_code[hhdin05]            = "hdin05";                                         /* HD inmelding 05                                                    */
    H_code[hhduit05]           = "hduit05";                                        /* HD uitmelding 05                                                   */
    H_code[hhdin05kar]         = "hdin05kar";                                      /* HD inmelding 05                                                    */
    H_code[hhduit05kar]        = "hduit05kar";                                     /* HD uitmelding 05                                                   */
    H_code[hhd08]              = "hd08";                                           /* Bijhouden aanwezigheid HD fase 08                                  */
    H_code[hhdin08]            = "hdin08";                                         /* HD inmelding 08                                                    */
    H_code[hhduit08]           = "hduit08";                                        /* HD uitmelding 08                                                   */
    H_code[hhdin08kar]         = "hdin08kar";                                      /* HD inmelding 08                                                    */
    H_code[hhduit08kar]        = "hduit08kar";                                     /* HD uitmelding 08                                                   */
    H_code[hhd09]              = "hd09";                                           /* Bijhouden aanwezigheid HD fase 09                                  */
    H_code[hhdin09]            = "hdin09";                                         /* HD inmelding 09                                                    */
    H_code[hhduit09]           = "hduit09";                                        /* HD uitmelding 09                                                   */
    H_code[hhdin09kar]         = "hdin09kar";                                      /* HD inmelding 09                                                    */
    H_code[hhduit09kar]        = "hduit09kar";                                     /* HD uitmelding 09                                                   */
    H_code[hhd11]              = "hd11";                                           /* Bijhouden aanwezigheid HD fase 11                                  */
    H_code[hhdin11]            = "hdin11";                                         /* HD inmelding 11                                                    */
    H_code[hhduit11]           = "hduit11";                                        /* HD uitmelding 11                                                   */
    H_code[hhdin11kar]         = "hdin11kar";                                      /* HD inmelding 11                                                    */
    H_code[hhduit11kar]        = "hduit11kar";                                     /* HD uitmelding 11                                                   */
    H_code[hhd61]              = "hd61";                                           /* Bijhouden aanwezigheid HD fase 61                                  */
    H_code[hhdin61]            = "hdin61";                                         /* HD inmelding 61                                                    */
    H_code[hhduit61]           = "hduit61";                                        /* HD uitmelding 61                                                   */
    H_code[hhdin61kar]         = "hdin61kar";                                      /* HD inmelding 61                                                    */
    H_code[hhduit61kar]        = "hduit61kar";                                     /* HD uitmelding 61                                                   */
    H_code[hhd62]              = "hd62";                                           /* Bijhouden aanwezigheid HD fase 62                                  */
    H_code[hhdin62]            = "hdin62";                                         /* HD inmelding 62                                                    */
    H_code[hhduit62]           = "hduit62";                                        /* HD uitmelding 62                                                   */
    H_code[hhdin62kar]         = "hdin62kar";                                      /* HD inmelding 62                                                    */
    H_code[hhduit62kar]        = "hduit62kar";                                     /* HD uitmelding 62                                                   */
    H_code[hhd67]              = "hd67";                                           /* Bijhouden aanwezigheid HD fase 67                                  */
    H_code[hhdin67]            = "hdin67";                                         /* HD inmelding 67                                                    */
    H_code[hhduit67]           = "hduit67";                                        /* HD uitmelding 67                                                   */
    H_code[hhdin67kar]         = "hdin67kar";                                      /* HD inmelding 67                                                    */
    H_code[hhduit67kar]        = "hduit67kar";                                     /* HD uitmelding 67                                                   */
    H_code[hhd68]              = "hd68";                                           /* Bijhouden aanwezigheid HD fase 68                                  */
    H_code[hhdin68]            = "hdin68";                                         /* HD inmelding 68                                                    */
    H_code[hhduit68]           = "hduit68";                                        /* HD uitmelding 68                                                   */
    H_code[hhdin68kar]         = "hdin68kar";                                      /* HD inmelding 68                                                    */
    H_code[hhduit68kar]        = "hduit68kar";                                     /* HD uitmelding 68                                                   */
    H_code[hrgvd24_3_d24_2]    = "rgvd24_3_d24_2";                                 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    H_code[hrgvact]            = "rgvact";                                         /* Bijhouden actief zijn RoBuGrover                                   */
    H_code[hprreal02]          = "prreal02";                                       /* Bijhouden primaire realisatie fase 02                              */
    H_code[hprreal03]          = "prreal03";                                       /* Bijhouden primaire realisatie fase 03                              */
    H_code[hprreal05]          = "prreal05";                                       /* Bijhouden primaire realisatie fase 05                              */
    H_code[hprreal08]          = "prreal08";                                       /* Bijhouden primaire realisatie fase 08                              */
    H_code[hprreal09]          = "prreal09";                                       /* Bijhouden primaire realisatie fase 09                              */
    H_code[hprreal11]          = "prreal11";                                       /* Bijhouden primaire realisatie fase 11                              */
    H_code[hprreal22]          = "prreal22";                                       /* Bijhouden primaire realisatie fase 22                              */
    H_code[hprreal28]          = "prreal28";                                       /* Bijhouden primaire realisatie fase 28                              */
    H_code[hprreal68]          = "prreal68";                                       /* Bijhouden primaire realisatie fase 68                              */
    H_code[hnleg0262]          = "nleg0262";                                      
    H_code[hnleg0868]          = "nleg0868";                                      
    H_code[hnleg2221]          = "nleg2221";                                      
    H_code[hnlsg3132]          = "nlsg3132";                                      
    H_code[hnlsg3231]          = "nlsg3231";                                      
    H_code[hnlsg3334]          = "nlsg3334";                                      
    H_code[hnlsg3433]          = "nlsg3433";                                      
    H_code[hnleg8281]          = "nleg8281";                                      
    H_code[hinl32]             = "inl32";                                          /* Onthouden inlopen toestaan fase 32                                 */
    H_code[hlos32]             = "los32";                                          /* Onthouden toestaan los realiseren fase 32                          */
    H_code[hinl31]             = "inl31";                                          /* Onthouden inlopen toestaan fase 31                                 */
    H_code[hlos31]             = "los31";                                          /* Onthouden toestaan los realiseren fase 31                          */
    H_code[hinl34]             = "inl34";                                          /* Onthouden inlopen toestaan fase 34                                 */
    H_code[hlos34]             = "los34";                                          /* Onthouden toestaan los realiseren fase 34                          */
    H_code[hinl33]             = "inl33";                                          /* Onthouden inlopen toestaan fase 33                                 */
    H_code[hlos33]             = "los33";                                          /* Onthouden toestaan los realiseren fase 33                          */
    H_code[hlos62]             = "los62";                                          /* Onthouden toestaan los realiseren fase 62                          */
    H_code[hlos68]             = "los68";                                          /* Onthouden toestaan los realiseren fase 68                          */
    H_code[hlos21]             = "los21";                                          /* Onthouden toestaan los realiseren fase 21                          */
    H_code[hlos81]             = "los81";                                          /* Onthouden toestaan los realiseren fase 81                          */

/* geheugen elementen */
/* ------------------ */
    MM_code[mperiod]        = "period";                                 /* Onthouden actieve periode                                    */
    MM_code[mmk02]          = "mk02";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 02 */
    MM_code[mmk03]          = "mk03";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    MM_code[mmk05]          = "mk05";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    MM_code[mmk08]          = "mk08";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    MM_code[mmk09]          = "mk09";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    MM_code[mmk11]          = "mk11";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    MM_code[mmk61]          = "mk61";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    MM_code[mmk62]          = "mk62";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    MM_code[mmk67]          = "mk67";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    MM_code[mmk68]          = "mk68";                                   /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    MM_code[mstp02bus]      = "stp02bus";                               /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    MM_code[mstp03bus]      = "stp03bus";                               /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    MM_code[mstp05bus]      = "stp05bus";                               /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    MM_code[mstp08bus]      = "stp08bus";                               /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    MM_code[mstp09bus]      = "stp09bus";                               /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    MM_code[mstp11bus]      = "stp11bus";                               /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    MM_code[mstp61bus]      = "stp61bus";                               /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    MM_code[mstp62bus]      = "stp62bus";                               /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    MM_code[mstp67bus]      = "stp67bus";                               /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    MM_code[mstp68bus]      = "stp68bus";                               /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    MM_code[mrealtijd02]    = "realtijd02";                             /* Realisatie tijd fase 02                                      */
    MM_code[mrealtijd03]    = "realtijd03";                             /* Realisatie tijd fase 03                                      */
    MM_code[mrealtijd05]    = "realtijd05";                             /* Realisatie tijd fase 05                                      */
    MM_code[mrealtijd08]    = "realtijd08";                             /* Realisatie tijd fase 08                                      */
    MM_code[mrealtijd09]    = "realtijd09";                             /* Realisatie tijd fase 09                                      */
    MM_code[mrealtijd11]    = "realtijd11";                             /* Realisatie tijd fase 11                                      */
    MM_code[mrealtijd21]    = "realtijd21";                             /* Realisatie tijd fase 21                                      */
    MM_code[mrealtijd22]    = "realtijd22";                             /* Realisatie tijd fase 22                                      */
    MM_code[mrealtijd24]    = "realtijd24";                             /* Realisatie tijd fase 24                                      */
    MM_code[mrealtijd26]    = "realtijd26";                             /* Realisatie tijd fase 26                                      */
    MM_code[mrealtijd28]    = "realtijd28";                             /* Realisatie tijd fase 28                                      */
    MM_code[mrealtijd31]    = "realtijd31";                             /* Realisatie tijd fase 31                                      */
    MM_code[mrealtijd32]    = "realtijd32";                             /* Realisatie tijd fase 32                                      */
    MM_code[mrealtijd33]    = "realtijd33";                             /* Realisatie tijd fase 33                                      */
    MM_code[mrealtijd34]    = "realtijd34";                             /* Realisatie tijd fase 34                                      */
    MM_code[mrealtijd38]    = "realtijd38";                             /* Realisatie tijd fase 38                                      */
    MM_code[mrealtijd61]    = "realtijd61";                             /* Realisatie tijd fase 61                                      */
    MM_code[mrealtijd62]    = "realtijd62";                             /* Realisatie tijd fase 62                                      */
    MM_code[mrealtijd67]    = "realtijd67";                             /* Realisatie tijd fase 67                                      */
    MM_code[mrealtijd68]    = "realtijd68";                             /* Realisatie tijd fase 68                                      */
    MM_code[mrealtijd84]    = "realtijd84";                             /* Realisatie tijd fase 84                                      */
    MM_code[mrealtijd82]    = "realtijd82";                             /* Realisatie tijd fase 82                                      */
    MM_code[mrealtijd81]    = "realtijd81";                             /* Realisatie tijd fase 81                                      */
    MM_code[mrealtijdmin02] = "realtijdmin02";                          /* Realisatie minimum tijd fase 02                              */
    MM_code[mrealtijdmin03] = "realtijdmin03";                          /* Realisatie minimum tijd fase 03                              */
    MM_code[mrealtijdmin05] = "realtijdmin05";                          /* Realisatie minimum tijd fase 05                              */
    MM_code[mrealtijdmin08] = "realtijdmin08";                          /* Realisatie minimum tijd fase 08                              */
    MM_code[mrealtijdmin09] = "realtijdmin09";                          /* Realisatie minimum tijd fase 09                              */
    MM_code[mrealtijdmin11] = "realtijdmin11";                          /* Realisatie minimum tijd fase 11                              */
    MM_code[mrealtijdmin21] = "realtijdmin21";                          /* Realisatie minimum tijd fase 21                              */
    MM_code[mrealtijdmin22] = "realtijdmin22";                          /* Realisatie minimum tijd fase 22                              */
    MM_code[mrealtijdmin24] = "realtijdmin24";                          /* Realisatie minimum tijd fase 24                              */
    MM_code[mrealtijdmin26] = "realtijdmin26";                          /* Realisatie minimum tijd fase 26                              */
    MM_code[mrealtijdmin28] = "realtijdmin28";                          /* Realisatie minimum tijd fase 28                              */
    MM_code[mrealtijdmin31] = "realtijdmin31";                          /* Realisatie minimum tijd fase 31                              */
    MM_code[mrealtijdmin32] = "realtijdmin32";                          /* Realisatie minimum tijd fase 32                              */
    MM_code[mrealtijdmin33] = "realtijdmin33";                          /* Realisatie minimum tijd fase 33                              */
    MM_code[mrealtijdmin34] = "realtijdmin34";                          /* Realisatie minimum tijd fase 34                              */
    MM_code[mrealtijdmin38] = "realtijdmin38";                          /* Realisatie minimum tijd fase 38                              */
    MM_code[mrealtijdmin61] = "realtijdmin61";                          /* Realisatie minimum tijd fase 61                              */
    MM_code[mrealtijdmin62] = "realtijdmin62";                          /* Realisatie minimum tijd fase 62                              */
    MM_code[mrealtijdmin67] = "realtijdmin67";                          /* Realisatie minimum tijd fase 67                              */
    MM_code[mrealtijdmin68] = "realtijdmin68";                          /* Realisatie minimum tijd fase 68                              */
    MM_code[mrealtijdmin84] = "realtijdmin84";                          /* Realisatie minimum tijd fase 84                              */
    MM_code[mrealtijdmin82] = "realtijdmin82";                          /* Realisatie minimum tijd fase 82                              */
    MM_code[mrealtijdmin81] = "realtijdmin81";                          /* Realisatie minimum tijd fase 81                              */
    MM_code[mrealtijdmax02] = "realtijdmax02";                          /* Realisatie maximum tijd fase 02                              */
    MM_code[mrealtijdmax03] = "realtijdmax03";                          /* Realisatie maximum tijd fase 03                              */
    MM_code[mrealtijdmax05] = "realtijdmax05";                          /* Realisatie maximum tijd fase 05                              */
    MM_code[mrealtijdmax08] = "realtijdmax08";                          /* Realisatie maximum tijd fase 08                              */
    MM_code[mrealtijdmax09] = "realtijdmax09";                          /* Realisatie maximum tijd fase 09                              */
    MM_code[mrealtijdmax11] = "realtijdmax11";                          /* Realisatie maximum tijd fase 11                              */
    MM_code[mrealtijdmax21] = "realtijdmax21";                          /* Realisatie maximum tijd fase 21                              */
    MM_code[mrealtijdmax22] = "realtijdmax22";                          /* Realisatie maximum tijd fase 22                              */
    MM_code[mrealtijdmax24] = "realtijdmax24";                          /* Realisatie maximum tijd fase 24                              */
    MM_code[mrealtijdmax26] = "realtijdmax26";                          /* Realisatie maximum tijd fase 26                              */
    MM_code[mrealtijdmax28] = "realtijdmax28";                          /* Realisatie maximum tijd fase 28                              */
    MM_code[mrealtijdmax31] = "realtijdmax31";                          /* Realisatie maximum tijd fase 31                              */
    MM_code[mrealtijdmax32] = "realtijdmax32";                          /* Realisatie maximum tijd fase 32                              */
    MM_code[mrealtijdmax33] = "realtijdmax33";                          /* Realisatie maximum tijd fase 33                              */
    MM_code[mrealtijdmax34] = "realtijdmax34";                          /* Realisatie maximum tijd fase 34                              */
    MM_code[mrealtijdmax38] = "realtijdmax38";                          /* Realisatie maximum tijd fase 38                              */
    MM_code[mrealtijdmax61] = "realtijdmax61";                          /* Realisatie maximum tijd fase 61                              */
    MM_code[mrealtijdmax62] = "realtijdmax62";                          /* Realisatie maximum tijd fase 62                              */
    MM_code[mrealtijdmax67] = "realtijdmax67";                          /* Realisatie maximum tijd fase 67                              */
    MM_code[mrealtijdmax68] = "realtijdmax68";                          /* Realisatie maximum tijd fase 68                              */
    MM_code[mrealtijdmax84] = "realtijdmax84";                          /* Realisatie maximum tijd fase 84                              */
    MM_code[mrealtijdmax82] = "realtijdmax82";                          /* Realisatie maximum tijd fase 82                              */
    MM_code[mrealtijdmax81] = "realtijdmax81";                          /* Realisatie maximum tijd fase 81                              */
    MM_code[mar02]          = "ar02";                                   /* Alternatieve ruimte fase 02                                  */
    MM_code[mar03]          = "ar03";                                   /* Alternatieve ruimte fase 03                                  */
    MM_code[mar05]          = "ar05";                                   /* Alternatieve ruimte fase 05                                  */
    MM_code[mar08]          = "ar08";                                   /* Alternatieve ruimte fase 08                                  */
    MM_code[mar09]          = "ar09";                                   /* Alternatieve ruimte fase 09                                  */
    MM_code[mar11]          = "ar11";                                   /* Alternatieve ruimte fase 11                                  */
    MM_code[mar21]          = "ar21";                                   /* Alternatieve ruimte fase 21                                  */
    MM_code[mar22]          = "ar22";                                   /* Alternatieve ruimte fase 22                                  */
    MM_code[mar24]          = "ar24";                                   /* Alternatieve ruimte fase 24                                  */
    MM_code[mar26]          = "ar26";                                   /* Alternatieve ruimte fase 26                                  */
    MM_code[mar28]          = "ar28";                                   /* Alternatieve ruimte fase 28                                  */
    MM_code[mar31]          = "ar31";                                   /* Alternatieve ruimte fase 31                                  */
    MM_code[mar32]          = "ar32";                                   /* Alternatieve ruimte fase 32                                  */
    MM_code[mar33]          = "ar33";                                   /* Alternatieve ruimte fase 33                                  */
    MM_code[mar34]          = "ar34";                                   /* Alternatieve ruimte fase 34                                  */
    MM_code[mar38]          = "ar38";                                   /* Alternatieve ruimte fase 38                                  */
    MM_code[mar61]          = "ar61";                                   /* Alternatieve ruimte fase 61                                  */
    MM_code[mar62]          = "ar62";                                   /* Alternatieve ruimte fase 62                                  */
    MM_code[mar67]          = "ar67";                                   /* Alternatieve ruimte fase 67                                  */
    MM_code[mar68]          = "ar68";                                   /* Alternatieve ruimte fase 68                                  */
    MM_code[mar84]          = "ar84";                                   /* Alternatieve ruimte fase 84                                  */
    MM_code[mar82]          = "ar82";                                   /* Alternatieve ruimte fase 82                                  */
    MM_code[mar81]          = "ar81";                                   /* Alternatieve ruimte fase 81                                  */

/* tijd elementen */
/* -------------- */
    T_code[t02_1a_1]                   = "02_1a_1";                   T_max[t02_1a_1]                   = 0;    T_type[t02_1a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_1a                                      */
    T_code[t02_1a_2]                   = "02_1a_2";                   T_max[t02_1a_2]                   = 0;    T_type[t02_1a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_1a                                      */
    T_code[ttdh_02_1a_1]               = "tdh_02_1a_1";               T_max[ttdh_02_1a_1]               = 0;    T_type[ttdh_02_1a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_1a                                         */
    T_code[ttdh_02_1a_2]               = "tdh_02_1a_2";               T_max[ttdh_02_1a_2]               = 0;    T_type[ttdh_02_1a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_1a                                         */
    T_code[tmax_02_1a]                 = "max_02_1a";                 T_max[tmax_02_1a]                 = 80;   T_type[tmax_02_1a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1a                               */
    T_code[t02_1b_1]                   = "02_1b_1";                   T_max[t02_1b_1]                   = 0;    T_type[t02_1b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_1b                                      */
    T_code[t02_1b_2]                   = "02_1b_2";                   T_max[t02_1b_2]                   = 0;    T_type[t02_1b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_1b                                      */
    T_code[ttdh_02_1b_1]               = "tdh_02_1b_1";               T_max[ttdh_02_1b_1]               = 0;    T_type[ttdh_02_1b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_1b                                         */
    T_code[ttdh_02_1b_2]               = "tdh_02_1b_2";               T_max[ttdh_02_1b_2]               = 0;    T_type[ttdh_02_1b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_1b                                         */
    T_code[tmax_02_1b]                 = "max_02_1b";                 T_max[tmax_02_1b]                 = 80;   T_type[tmax_02_1b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1b                               */
    T_code[t02_2a_1]                   = "02_2a_1";                   T_max[t02_2a_1]                   = 0;    T_type[t02_2a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_2a                                      */
    T_code[t02_2a_2]                   = "02_2a_2";                   T_max[t02_2a_2]                   = 0;    T_type[t02_2a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_2a                                      */
    T_code[ttdh_02_2a_1]               = "tdh_02_2a_1";               T_max[ttdh_02_2a_1]               = 1;    T_type[ttdh_02_2a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_2a                                         */
    T_code[ttdh_02_2a_2]               = "tdh_02_2a_2";               T_max[ttdh_02_2a_2]               = 1;    T_type[ttdh_02_2a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_2a                                         */
    T_code[tmax_02_2a]                 = "max_02_2a";                 T_max[tmax_02_2a]                 = 100;  T_type[tmax_02_2a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2a                               */
    T_code[t02_2b_1]                   = "02_2b_1";                   T_max[t02_2b_1]                   = 0;    T_type[t02_2b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_2b                                      */
    T_code[t02_2b_2]                   = "02_2b_2";                   T_max[t02_2b_2]                   = 0;    T_type[t02_2b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_2b                                      */
    T_code[ttdh_02_2b_1]               = "tdh_02_2b_1";               T_max[ttdh_02_2b_1]               = 1;    T_type[ttdh_02_2b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_2b                                         */
    T_code[ttdh_02_2b_2]               = "tdh_02_2b_2";               T_max[ttdh_02_2b_2]               = 1;    T_type[ttdh_02_2b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_2b                                         */
    T_code[tmax_02_2b]                 = "max_02_2b";                 T_max[tmax_02_2b]                 = 100;  T_type[tmax_02_2b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2b                               */
    T_code[t02_3a_1]                   = "02_3a_1";                   T_max[t02_3a_1]                   = 100;  T_type[t02_3a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_3a                                      */
    T_code[t02_3a_2]                   = "02_3a_2";                   T_max[t02_3a_2]                   = 220;  T_type[t02_3a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_3a                                      */
    T_code[ttdh_02_3a_1]               = "tdh_02_3a_1";               T_max[ttdh_02_3a_1]               = 8;    T_type[ttdh_02_3a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_3a                                         */
    T_code[ttdh_02_3a_2]               = "tdh_02_3a_2";               T_max[ttdh_02_3a_2]               = 0;    T_type[ttdh_02_3a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_3a                                         */
    T_code[tmax_02_3a]                 = "max_02_3a";                 T_max[tmax_02_3a]                 = 0;    T_type[tmax_02_3a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3a                               */
    T_code[t02_3b_1]                   = "02_3b_1";                   T_max[t02_3b_1]                   = 100;  T_type[t02_3b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_3b                                      */
    T_code[t02_3b_2]                   = "02_3b_2";                   T_max[t02_3b_2]                   = 220;  T_type[t02_3b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_3b                                      */
    T_code[ttdh_02_3b_1]               = "tdh_02_3b_1";               T_max[ttdh_02_3b_1]               = 8;    T_type[ttdh_02_3b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_3b                                         */
    T_code[ttdh_02_3b_2]               = "tdh_02_3b_2";               T_max[ttdh_02_3b_2]               = 0;    T_type[ttdh_02_3b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_3b                                         */
    T_code[tmax_02_3b]                 = "max_02_3b";                 T_max[tmax_02_3b]                 = 0;    T_type[tmax_02_3b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3b                               */
    T_code[t02_4a_1]                   = "02_4a_1";                   T_max[t02_4a_1]                   = 0;    T_type[t02_4a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_4a                                      */
    T_code[t02_4a_2]                   = "02_4a_2";                   T_max[t02_4a_2]                   = 0;    T_type[t02_4a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_4a                                      */
    T_code[ttdh_02_4a_1]               = "tdh_02_4a_1";               T_max[ttdh_02_4a_1]               = 25;   T_type[ttdh_02_4a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_4a                                         */
    T_code[ttdh_02_4a_2]               = "tdh_02_4a_2";               T_max[ttdh_02_4a_2]               = 25;   T_type[ttdh_02_4a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_4a                                         */
    T_code[tmax_02_4a]                 = "max_02_4a";                 T_max[tmax_02_4a]                 = 0;    T_type[tmax_02_4a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4a                               */
    T_code[t02_4b_1]                   = "02_4b_1";                   T_max[t02_4b_1]                   = 0;    T_type[t02_4b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 02_4b                                      */
    T_code[t02_4b_2]                   = "02_4b_2";                   T_max[t02_4b_2]                   = 0;    T_type[t02_4b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 02_4b                                      */
    T_code[ttdh_02_4b_1]               = "tdh_02_4b_1";               T_max[ttdh_02_4b_1]               = 25;   T_type[ttdh_02_4b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 02_4b                                         */
    T_code[ttdh_02_4b_2]               = "tdh_02_4b_2";               T_max[ttdh_02_4b_2]               = 25;   T_type[ttdh_02_4b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 02_4b                                         */
    T_code[tmax_02_4b]                 = "max_02_4b";                 T_max[tmax_02_4b]                 = 0;    T_type[tmax_02_4b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4b                               */
    T_code[t08_1a_1]                   = "08_1a_1";                   T_max[t08_1a_1]                   = 0;    T_type[t08_1a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_1a                                      */
    T_code[t08_1a_2]                   = "08_1a_2";                   T_max[t08_1a_2]                   = 0;    T_type[t08_1a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_1a                                      */
    T_code[ttdh_08_1a_1]               = "tdh_08_1a_1";               T_max[ttdh_08_1a_1]               = 0;    T_type[ttdh_08_1a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_1a                                         */
    T_code[ttdh_08_1a_2]               = "tdh_08_1a_2";               T_max[ttdh_08_1a_2]               = 0;    T_type[ttdh_08_1a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_1a                                         */
    T_code[tmax_08_1a]                 = "max_08_1a";                 T_max[tmax_08_1a]                 = 80;   T_type[tmax_08_1a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a                               */
    T_code[t08_1b_1]                   = "08_1b_1";                   T_max[t08_1b_1]                   = 0;    T_type[t08_1b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_1b                                      */
    T_code[t08_1b_2]                   = "08_1b_2";                   T_max[t08_1b_2]                   = 0;    T_type[t08_1b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_1b                                      */
    T_code[ttdh_08_1b_1]               = "tdh_08_1b_1";               T_max[ttdh_08_1b_1]               = 0;    T_type[ttdh_08_1b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_1b                                         */
    T_code[ttdh_08_1b_2]               = "tdh_08_1b_2";               T_max[ttdh_08_1b_2]               = 0;    T_type[ttdh_08_1b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_1b                                         */
    T_code[tmax_08_1b]                 = "max_08_1b";                 T_max[tmax_08_1b]                 = 80;   T_type[tmax_08_1b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b                               */
    T_code[t08_2a_1]                   = "08_2a_1";                   T_max[t08_2a_1]                   = 0;    T_type[t08_2a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_2a                                      */
    T_code[t08_2a_2]                   = "08_2a_2";                   T_max[t08_2a_2]                   = 0;    T_type[t08_2a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_2a                                      */
    T_code[ttdh_08_2a_1]               = "tdh_08_2a_1";               T_max[ttdh_08_2a_1]               = 1;    T_type[ttdh_08_2a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_2a                                         */
    T_code[ttdh_08_2a_2]               = "tdh_08_2a_2";               T_max[ttdh_08_2a_2]               = 1;    T_type[ttdh_08_2a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_2a                                         */
    T_code[tmax_08_2a]                 = "max_08_2a";                 T_max[tmax_08_2a]                 = 100;  T_type[tmax_08_2a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a                               */
    T_code[t08_2b_1]                   = "08_2b_1";                   T_max[t08_2b_1]                   = 0;    T_type[t08_2b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_2b                                      */
    T_code[t08_2b_2]                   = "08_2b_2";                   T_max[t08_2b_2]                   = 0;    T_type[t08_2b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_2b                                      */
    T_code[ttdh_08_2b_1]               = "tdh_08_2b_1";               T_max[ttdh_08_2b_1]               = 1;    T_type[ttdh_08_2b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_2b                                         */
    T_code[ttdh_08_2b_2]               = "tdh_08_2b_2";               T_max[ttdh_08_2b_2]               = 1;    T_type[ttdh_08_2b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_2b                                         */
    T_code[tmax_08_2b]                 = "max_08_2b";                 T_max[tmax_08_2b]                 = 100;  T_type[tmax_08_2b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b                               */
    T_code[t08_3a_1]                   = "08_3a_1";                   T_max[t08_3a_1]                   = 100;  T_type[t08_3a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_3a                                      */
    T_code[t08_3a_2]                   = "08_3a_2";                   T_max[t08_3a_2]                   = 220;  T_type[t08_3a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_3a                                      */
    T_code[ttdh_08_3a_1]               = "tdh_08_3a_1";               T_max[ttdh_08_3a_1]               = 8;    T_type[ttdh_08_3a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_3a                                         */
    T_code[ttdh_08_3a_2]               = "tdh_08_3a_2";               T_max[ttdh_08_3a_2]               = 0;    T_type[ttdh_08_3a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_3a                                         */
    T_code[tmax_08_3a]                 = "max_08_3a";                 T_max[tmax_08_3a]                 = 0;    T_type[tmax_08_3a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a                               */
    T_code[t08_3b_1]                   = "08_3b_1";                   T_max[t08_3b_1]                   = 100;  T_type[t08_3b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_3b                                      */
    T_code[t08_3b_2]                   = "08_3b_2";                   T_max[t08_3b_2]                   = 220;  T_type[t08_3b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_3b                                      */
    T_code[ttdh_08_3b_1]               = "tdh_08_3b_1";               T_max[ttdh_08_3b_1]               = 8;    T_type[ttdh_08_3b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_3b                                         */
    T_code[ttdh_08_3b_2]               = "tdh_08_3b_2";               T_max[ttdh_08_3b_2]               = 0;    T_type[ttdh_08_3b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_3b                                         */
    T_code[tmax_08_3b]                 = "max_08_3b";                 T_max[tmax_08_3b]                 = 0;    T_type[tmax_08_3b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b                               */
    T_code[t08_4a_1]                   = "08_4a_1";                   T_max[t08_4a_1]                   = 0;    T_type[t08_4a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_4a                                      */
    T_code[t08_4a_2]                   = "08_4a_2";                   T_max[t08_4a_2]                   = 0;    T_type[t08_4a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_4a                                      */
    T_code[ttdh_08_4a_1]               = "tdh_08_4a_1";               T_max[ttdh_08_4a_1]               = 25;   T_type[ttdh_08_4a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_4a                                         */
    T_code[ttdh_08_4a_2]               = "tdh_08_4a_2";               T_max[ttdh_08_4a_2]               = 25;   T_type[ttdh_08_4a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_4a                                         */
    T_code[tmax_08_4a]                 = "max_08_4a";                 T_max[tmax_08_4a]                 = 0;    T_type[tmax_08_4a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a                               */
    T_code[t08_4b_1]                   = "08_4b_1";                   T_max[t08_4b_1]                   = 0;    T_type[t08_4b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_4b                                      */
    T_code[t08_4b_2]                   = "08_4b_2";                   T_max[t08_4b_2]                   = 0;    T_type[t08_4b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_4b                                      */
    T_code[ttdh_08_4b_1]               = "tdh_08_4b_1";               T_max[ttdh_08_4b_1]               = 2520; T_type[ttdh_08_4b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_4b                                         */
    T_code[ttdh_08_4b_2]               = "tdh_08_4b_2";               T_max[ttdh_08_4b_2]               = 25;   T_type[ttdh_08_4b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_4b                                         */
    T_code[tmax_08_4b]                 = "max_08_4b";                 T_max[tmax_08_4b]                 = 0;    T_type[tmax_08_4b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b                               */
    T_code[t09_1_1]                    = "09_1_1";                    T_max[t09_1_1]                    = 0;    T_type[t09_1_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_1                                       */
    T_code[t09_1_2]                    = "09_1_2";                    T_max[t09_1_2]                    = 0;    T_type[t09_1_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_1                                       */
    T_code[ttdh_09_1_1]                = "tdh_09_1_1";                T_max[ttdh_09_1_1]                = 0;    T_type[ttdh_09_1_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_1                                          */
    T_code[ttdh_09_1_2]                = "tdh_09_1_2";                T_max[ttdh_09_1_2]                = 0;    T_type[ttdh_09_1_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_1                                          */
    T_code[tmax_09_1]                  = "max_09_1";                  T_max[tmax_09_1]                  = 80;   T_type[tmax_09_1]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    T_code[t09_2_1]                    = "09_2_1";                    T_max[t09_2_1]                    = 0;    T_type[t09_2_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    T_code[t09_2_2]                    = "09_2_2";                    T_max[t09_2_2]                    = 0;    T_type[t09_2_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    T_code[ttdh_09_2_1]                = "tdh_09_2_1";                T_max[ttdh_09_2_1]                = 1;    T_type[ttdh_09_2_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    T_code[ttdh_09_2_2]                = "tdh_09_2_2";                T_max[ttdh_09_2_2]                = 1;    T_type[ttdh_09_2_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    T_code[tmax_09_2]                  = "max_09_2";                  T_max[tmax_09_2]                  = 100;  T_type[tmax_09_2]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    T_code[t09_3_1]                    = "09_3_1";                    T_max[t09_3_1]                    = 100;  T_type[t09_3_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    T_code[t09_3_2]                    = "09_3_2";                    T_max[t09_3_2]                    = 220;  T_type[t09_3_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    T_code[ttdh_09_3_1]                = "tdh_09_3_1";                T_max[ttdh_09_3_1]                = 20;   T_type[ttdh_09_3_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    T_code[ttdh_09_3_2]                = "tdh_09_3_2";                T_max[ttdh_09_3_2]                = 8;    T_type[ttdh_09_3_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    T_code[tmax_09_3]                  = "max_09_3";                  T_max[tmax_09_3]                  = 0;    T_type[tmax_09_3]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
    T_code[t11_1_1]                    = "11_1_1";                    T_max[t11_1_1]                    = 0;    T_type[t11_1_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_1                                       */
    T_code[t11_1_2]                    = "11_1_2";                    T_max[t11_1_2]                    = 0;    T_type[t11_1_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_1                                       */
    T_code[ttdh_11_1_1]                = "tdh_11_1_1";                T_max[ttdh_11_1_1]                = 0;    T_type[ttdh_11_1_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_1                                          */
    T_code[ttdh_11_1_2]                = "tdh_11_1_2";                T_max[ttdh_11_1_2]                = 0;    T_type[ttdh_11_1_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_1                                          */
    T_code[tmax_11_1]                  = "max_11_1";                  T_max[tmax_11_1]                  = 80;   T_type[tmax_11_1]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                                */
    T_code[t11_2_1]                    = "11_2_1";                    T_max[t11_2_1]                    = 0;    T_type[t11_2_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_2                                       */
    T_code[t11_2_2]                    = "11_2_2";                    T_max[t11_2_2]                    = 0;    T_type[t11_2_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_2                                       */
    T_code[ttdh_11_2_1]                = "tdh_11_2_1";                T_max[ttdh_11_2_1]                = 1;    T_type[ttdh_11_2_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_2                                          */
    T_code[ttdh_11_2_2]                = "tdh_11_2_2";                T_max[ttdh_11_2_2]                = 1;    T_type[ttdh_11_2_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_2                                          */
    T_code[tmax_11_2]                  = "max_11_2";                  T_max[tmax_11_2]                  = 100;  T_type[tmax_11_2]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                                */
    T_code[t11_3_1]                    = "11_3_1";                    T_max[t11_3_1]                    = 100;  T_type[t11_3_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_3                                       */
    T_code[t11_3_2]                    = "11_3_2";                    T_max[t11_3_2]                    = 220;  T_type[t11_3_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_3                                       */
    T_code[ttdh_11_3_1]                = "tdh_11_3_1";                T_max[ttdh_11_3_1]                = 20;   T_type[ttdh_11_3_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_3                                          */
    T_code[ttdh_11_3_2]                = "tdh_11_3_2";                T_max[ttdh_11_3_2]                = 8;    T_type[ttdh_11_3_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_3                                          */
    T_code[tmax_11_3]                  = "max_11_3";                  T_max[tmax_11_3]                  = 0;    T_type[tmax_11_3]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                                */
    T_code[t11_4_1]                    = "11_4_1";                    T_max[t11_4_1]                    = 0;    T_type[t11_4_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_4                                       */
    T_code[t11_4_2]                    = "11_4_2";                    T_max[t11_4_2]                    = 0;    T_type[t11_4_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_4                                       */
    T_code[ttdh_11_4_1]                = "tdh_11_4_1";                T_max[ttdh_11_4_1]                = 25;   T_type[ttdh_11_4_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_4                                          */
    T_code[ttdh_11_4_2]                = "tdh_11_4_2";                T_max[ttdh_11_4_2]                = 25;   T_type[ttdh_11_4_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_4                                          */
    T_code[tmax_11_4]                  = "max_11_4";                  T_max[tmax_11_4]                  = 0;    T_type[tmax_11_4]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                                */
    T_code[tav28_2]                    = "av28_2";                    T_max[tav28_2]                    = 50;   T_type[tav28_2]                    = TE_type; /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                                  */
    T_code[tkm02]                      = "km02";                      T_max[tkm02]                      = 80;   T_type[tkm02]                      = TE_type; /* Kop maximum voor detector 02                                                             */
    T_code[tkm03]                      = "km03";                      T_max[tkm03]                      = 80;   T_type[tkm03]                      = TE_type; /* Kop maximum voor detector 03                                                             */
    T_code[tkm05]                      = "km05";                      T_max[tkm05]                      = 80;   T_type[tkm05]                      = TE_type; /* Kop maximum voor detector 05                                                             */
    T_code[tkm08]                      = "km08";                      T_max[tkm08]                      = 80;   T_type[tkm08]                      = TE_type; /* Kop maximum voor detector 08                                                             */
    T_code[tkm09]                      = "km09";                      T_max[tkm09]                      = 80;   T_type[tkm09]                      = TE_type; /* Kop maximum voor detector 09                                                             */
    T_code[tkm11]                      = "km11";                      T_max[tkm11]                      = 80;   T_type[tkm11]                      = TE_type; /* Kop maximum voor detector 11                                                             */
    T_code[tkm21]                      = "km21";                      T_max[tkm21]                      = 80;   T_type[tkm21]                      = TE_type; /* Kop maximum voor detector 21                                                             */
    T_code[tkm22]                      = "km22";                      T_max[tkm22]                      = 60;   T_type[tkm22]                      = TE_type; /* Kop maximum voor detector 22                                                             */
    T_code[tkm24]                      = "km24";                      T_max[tkm24]                      = 60;   T_type[tkm24]                      = TE_type; /* Kop maximum voor detector 24                                                             */
    T_code[tkm26]                      = "km26";                      T_max[tkm26]                      = 80;   T_type[tkm26]                      = TE_type; /* Kop maximum voor detector 26                                                             */
    T_code[tkm28]                      = "km28";                      T_max[tkm28]                      = 60;   T_type[tkm28]                      = TE_type; /* Kop maximum voor detector 28                                                             */
    T_code[tkm61]                      = "km61";                      T_max[tkm61]                      = 80;   T_type[tkm61]                      = TE_type; /* Kop maximum voor detector 61                                                             */
    T_code[tkm62]                      = "km62";                      T_max[tkm62]                      = 80;   T_type[tkm62]                      = TE_type; /* Kop maximum voor detector 62                                                             */
    T_code[tkm67]                      = "km67";                      T_max[tkm67]                      = 80;   T_type[tkm67]                      = TE_type; /* Kop maximum voor detector 67                                                             */
    T_code[tkm68]                      = "km68";                      T_max[tkm68]                      = 80;   T_type[tkm68]                      = TE_type; /* Kop maximum voor detector 68                                                             */
    T_code[tkm84]                      = "km84";                      T_max[tkm84]                      = 60;   T_type[tkm84]                      = TE_type; /* Kop maximum voor detector 84                                                             */
    T_code[tkm82]                      = "km82";                      T_max[tkm82]                      = 80;   T_type[tkm82]                      = TE_type; /* Kop maximum voor detector 82                                                             */
    T_code[tkm81]                      = "km81";                      T_max[tkm81]                      = 80;   T_type[tkm81]                      = TE_type; /* Kop maximum voor detector 81                                                             */
    T_code[thdvd02_1a]                 = "hdvd02_1a";                 T_max[thdvd02_1a]                 = 25;   T_type[thdvd02_1a]                 = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a                               */
    T_code[thdvd02_1b]                 = "hdvd02_1b";                 T_max[thdvd02_1b]                 = 25;   T_type[thdvd02_1b]                 = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b                               */
    T_code[tdstvert02]                 = "dstvert02";                 T_max[tdstvert02]                 = 100;  T_type[tdstvert02]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                      */
    T_code[thdvd03_1]                  = "hdvd03_1";                  T_max[thdvd03_1]                  = 25;   T_type[thdvd03_1]                  = TE_type; /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    T_code[tdstvert03]                 = "dstvert03";                 T_max[tdstvert03]                 = 100;  T_type[tdstvert03]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    T_code[thdvd05_1]                  = "hdvd05_1";                  T_max[thdvd05_1]                  = 25;   T_type[thdvd05_1]                  = TE_type; /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    T_code[tdstvert05]                 = "dstvert05";                 T_max[tdstvert05]                 = 100;  T_type[tdstvert05]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    T_code[thdvd08_1a]                 = "hdvd08_1a";                 T_max[thdvd08_1a]                 = 25;   T_type[thdvd08_1a]                 = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    T_code[thdvd08_1b]                 = "hdvd08_1b";                 T_max[thdvd08_1b]                 = 25;   T_type[thdvd08_1b]                 = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    T_code[tdstvert08]                 = "dstvert08";                 T_max[tdstvert08]                 = 100;  T_type[tdstvert08]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    T_code[thdvd09_1]                  = "hdvd09_1";                  T_max[thdvd09_1]                  = 25;   T_type[thdvd09_1]                  = TE_type; /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    T_code[tdstvert09]                 = "dstvert09";                 T_max[tdstvert09]                 = 100;  T_type[tdstvert09]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    T_code[thdvd11_1]                  = "hdvd11_1";                  T_max[thdvd11_1]                  = 25;   T_type[thdvd11_1]                  = TE_type; /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    T_code[tdstvert11]                 = "dstvert11";                 T_max[tdstvert11]                 = 100;  T_type[tdstvert11]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    T_code[tdstvert21]                 = "dstvert21";                 T_max[tdstvert21]                 = 200;  T_type[tdstvert21]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    T_code[thdvd22_1]                  = "hdvd22_1";                  T_max[thdvd22_1]                  = 35;   T_type[thdvd22_1]                  = TE_type; /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    T_code[tdstvert22]                 = "dstvert22";                 T_max[tdstvert22]                 = 200;  T_type[tdstvert22]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    T_code[thdvd24_1]                  = "hdvd24_1";                  T_max[thdvd24_1]                  = 35;   T_type[thdvd24_1]                  = TE_type; /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    T_code[tdstvert24]                 = "dstvert24";                 T_max[tdstvert24]                 = 200;  T_type[tdstvert24]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    T_code[tdstvert26]                 = "dstvert26";                 T_max[tdstvert26]                 = 200;  T_type[tdstvert26]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    T_code[thdvd28_1]                  = "hdvd28_1";                  T_max[thdvd28_1]                  = 35;   T_type[thdvd28_1]                  = TE_type; /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    T_code[tdstvert28]                 = "dstvert28";                 T_max[tdstvert28]                 = 200;  T_type[tdstvert28]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    T_code[tdstvert31]                 = "dstvert31";                 T_max[tdstvert31]                 = 300;  T_type[tdstvert31]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    T_code[tdstvert32]                 = "dstvert32";                 T_max[tdstvert32]                 = 300;  T_type[tdstvert32]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    T_code[tdstvert33]                 = "dstvert33";                 T_max[tdstvert33]                 = 300;  T_type[tdstvert33]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    T_code[tdstvert34]                 = "dstvert34";                 T_max[tdstvert34]                 = 300;  T_type[tdstvert34]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    T_code[tdstvert38]                 = "dstvert38";                 T_max[tdstvert38]                 = 300;  T_type[tdstvert38]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    T_code[thdvd61_1]                  = "hdvd61_1";                  T_max[thdvd61_1]                  = 25;   T_type[thdvd61_1]                  = TE_type; /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    T_code[tdstvert61]                 = "dstvert61";                 T_max[tdstvert61]                 = 200;  T_type[tdstvert61]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    T_code[thdvd62_1a]                 = "hdvd62_1a";                 T_max[thdvd62_1a]                 = 25;   T_type[thdvd62_1a]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    T_code[thdvd62_1b]                 = "hdvd62_1b";                 T_max[thdvd62_1b]                 = 25;   T_type[thdvd62_1b]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    T_code[tdstvert62]                 = "dstvert62";                 T_max[tdstvert62]                 = 200;  T_type[tdstvert62]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    T_code[thdvd67_1]                  = "hdvd67_1";                  T_max[thdvd67_1]                  = 25;   T_type[thdvd67_1]                  = TE_type; /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    T_code[tdstvert67]                 = "dstvert67";                 T_max[tdstvert67]                 = 200;  T_type[tdstvert67]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    T_code[thdvd68_1a]                 = "hdvd68_1a";                 T_max[thdvd68_1a]                 = 25;   T_type[thdvd68_1a]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    T_code[thdvd68_1b]                 = "hdvd68_1b";                 T_max[thdvd68_1b]                 = 25;   T_type[thdvd68_1b]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    T_code[tdstvert68]                 = "dstvert68";                 T_max[tdstvert68]                 = 200;  T_type[tdstvert68]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    T_code[thdvd84_1]                  = "hdvd84_1";                  T_max[thdvd84_1]                  = 35;   T_type[thdvd84_1]                  = TE_type; /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    T_code[tdstvert84]                 = "dstvert84";                 T_max[tdstvert84]                 = 200;  T_type[tdstvert84]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    T_code[tdstvert82]                 = "dstvert82";                 T_max[tdstvert82]                 = 200;  T_type[tdstvert82]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    T_code[tdstvert81]                 = "dstvert81";                 T_max[tdstvert81]                 = 200;  T_type[tdstvert81]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    T_code[tafvFile68af]               = "afvFile68af";               T_max[tafvFile68af]               = 600;  T_type[tafvFile68af]               = TE_type; /* Afval vertraging file File68af                                                           */
    T_code[tafv68_9a]                  = "afv68_9a";                  T_max[tafv68_9a]                  = 35;   T_type[tafv68_9a]                  = TE_type; /* Afval vertraging file 68_9a                                                              */
    T_code[tbz68_9a]                   = "bz68_9a";                   T_max[tbz68_9a]                   = 35;   T_type[tbz68_9a]                   = TE_type; /* Bezettijd file detector 68_9a                                                            */
    T_code[trij68_9a]                  = "rij68_9a";                  T_max[trij68_9a]                  = 20;   T_type[trij68_9a]                  = TE_type; /* Rijtijd file detector 68_9a                                                              */
    T_code[tafv68_9b]                  = "afv68_9b";                  T_max[tafv68_9b]                  = 35;   T_type[tafv68_9b]                  = TE_type; /* Afval vertraging file 68_9b                                                              */
    T_code[tbz68_9b]                   = "bz68_9b";                   T_max[tbz68_9b]                   = 35;   T_type[tbz68_9b]                   = TE_type; /* Bezettijd file detector 68_9b                                                            */
    T_code[trij68_9b]                  = "rij68_9b";                  T_max[trij68_9b]                  = 20;   T_type[trij68_9b]                  = TE_type; /* Rijtijd file detector 68_9b                                                              */
    T_code[tafkmingroen08fileFile68af] = "afkmingroen08fileFile68af"; T_max[tafkmingroen08fileFile68af] = 100;  T_type[tafkmingroen08fileFile68af] = TE_type; /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                    */
    T_code[tafkmingroen11fileFile68af] = "afkmingroen11fileFile68af"; T_max[tafkmingroen11fileFile68af] = 100;  T_type[tafkmingroen11fileFile68af] = TE_type; /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                    */
    T_code[tminrood08fileFile68af]     = "minrood08fileFile68af";     T_max[tminrood08fileFile68af]     = 0;    T_type[tminrood08fileFile68af]     = TE_type; /* Minimale roodtijd bij fase 08 voor file ingreep                                          */
    T_code[tminrood11fileFile68af]     = "minrood11fileFile68af";     T_max[tminrood11fileFile68af]     = 0;    T_type[tminrood11fileFile68af]     = TE_type; /* Minimale roodtijd bij fase 11 voor file ingreep                                          */
    T_code[tnlfg0262]                  = "nlfg0262";                  T_max[tnlfg0262]                  = 0;    T_type[tnlfg0262]                  = TE_type; /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    T_code[tnleg0262]                  = "nleg0262";                  T_max[tnleg0262]                  = 50;   T_type[tnleg0262]                  = TE_type; /* Naloop op einde groen van 02 naar 62                                                     */
    T_code[tnlfg0868]                  = "nlfg0868";                  T_max[tnlfg0868]                  = 0;    T_type[tnlfg0868]                  = TE_type; /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    T_code[tnleg0868]                  = "nleg0868";                  T_max[tnleg0868]                  = 70;   T_type[tnleg0868]                  = TE_type; /* Naloop op einde groen van 08 naar 68                                                     */
    T_code[tnlfg2221]                  = "nlfg2221";                  T_max[tnlfg2221]                  = 30;   T_type[tnlfg2221]                  = TE_type; /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    T_code[tnlfgd2221]                 = "nlfgd2221";                 T_max[tnlfgd2221]                 = 40;   T_type[tnlfgd2221]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    T_code[tnleg2221]                  = "nleg2221";                  T_max[tnleg2221]                  = 40;   T_type[tnleg2221]                  = TE_type; /* Naloop op einde groen van 22 naar 21                                                     */
    T_code[tnlegd2221]                 = "nlegd2221";                 T_max[tnlegd2221]                 = 50;   T_type[tnlegd2221]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    T_code[tnlsgd3132]                 = "nlsgd3132";                 T_max[tnlsgd3132]                 = 125;  T_type[tnlsgd3132]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    T_code[tnlsgd3231]                 = "nlsgd3231";                 T_max[tnlsgd3231]                 = 115;  T_type[tnlsgd3231]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    T_code[tnlsgd3334]                 = "nlsgd3334";                 T_max[tnlsgd3334]                 = 80;   T_type[tnlsgd3334]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    T_code[tnlsgd3433]                 = "nlsgd3433";                 T_max[tnlsgd3433]                 = 95;   T_type[tnlsgd3433]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    T_code[tnlfg8281]                  = "nlfg8281";                  T_max[tnlfg8281]                  = 50;   T_type[tnlfg8281]                  = TE_type; /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    T_code[tnlfgd8281]                 = "nlfgd8281";                 T_max[tnlfgd8281]                 = 50;   T_type[tnlfgd8281]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    T_code[tnleg8281]                  = "nleg8281";                  T_max[tnleg8281]                  = 60;   T_type[tnleg8281]                  = TE_type; /* Naloop op einde groen van 82 naar 81                                                     */
    T_code[tnlegd8281]                 = "nlegd8281";                 T_max[tnlegd8281]                 = 70;   T_type[tnlegd8281]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    T_code[tkarmelding]                = "karmelding";                T_max[tkarmelding]                = 15;   T_type[tkarmelding]                = TE_type; /* Duur verklikking ontvangst melding KAR                                                   */
    T_code[tkarog]                     = "karog";                     T_max[tkarog]                     = 1440; T_type[tkarog]                     = TM_type; /* Ondergedrag KAR                                                                          */
    T_code[tbtovg02bus]                = "btovg02bus";                T_max[tbtovg02bus]                = 0;    T_type[tbtovg02bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    T_code[trt02bus]                   = "rt02bus";                   T_max[trt02bus]                   = 0;    T_type[trt02bus]                   = TE_type; /* Actuele rijtijd prio fase 02                                                             */
    T_code[tgb02bus]                   = "gb02bus";                   T_max[tgb02bus]                   = 300;  T_type[tgb02bus]                   = TE_type; /* Groenbewaking prioriteit fase 02                                                         */
    T_code[tblk02bus]                  = "blk02bus";                  T_max[tblk02bus]                  = 0;    T_type[tblk02bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    T_code[tbtovg03bus]                = "btovg03bus";                T_max[tbtovg03bus]                = 0;    T_type[tbtovg03bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    T_code[trt03bus]                   = "rt03bus";                   T_max[trt03bus]                   = 0;    T_type[trt03bus]                   = TE_type; /* Actuele rijtijd prio fase 03                                                             */
    T_code[tgb03bus]                   = "gb03bus";                   T_max[tgb03bus]                   = 300;  T_type[tgb03bus]                   = TE_type; /* Groenbewaking prioriteit fase 03                                                         */
    T_code[tblk03bus]                  = "blk03bus";                  T_max[tblk03bus]                  = 0;    T_type[tblk03bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    T_code[tbtovg05bus]                = "btovg05bus";                T_max[tbtovg05bus]                = 0;    T_type[tbtovg05bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    T_code[trt05bus]                   = "rt05bus";                   T_max[trt05bus]                   = 0;    T_type[trt05bus]                   = TE_type; /* Actuele rijtijd prio fase 05                                                             */
    T_code[tgb05bus]                   = "gb05bus";                   T_max[tgb05bus]                   = 300;  T_type[tgb05bus]                   = TE_type; /* Groenbewaking prioriteit fase 05                                                         */
    T_code[tblk05bus]                  = "blk05bus";                  T_max[tblk05bus]                  = 0;    T_type[tblk05bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    T_code[tbtovg08bus]                = "btovg08bus";                T_max[tbtovg08bus]                = 0;    T_type[tbtovg08bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    T_code[trt08bus]                   = "rt08bus";                   T_max[trt08bus]                   = 0;    T_type[trt08bus]                   = TE_type; /* Actuele rijtijd prio fase 08                                                             */
    T_code[tgb08bus]                   = "gb08bus";                   T_max[tgb08bus]                   = 300;  T_type[tgb08bus]                   = TE_type; /* Groenbewaking prioriteit fase 08                                                         */
    T_code[tblk08bus]                  = "blk08bus";                  T_max[tblk08bus]                  = 0;    T_type[tblk08bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    T_code[tbtovg09bus]                = "btovg09bus";                T_max[tbtovg09bus]                = 0;    T_type[tbtovg09bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    T_code[trt09bus]                   = "rt09bus";                   T_max[trt09bus]                   = 0;    T_type[trt09bus]                   = TE_type; /* Actuele rijtijd prio fase 09                                                             */
    T_code[tgb09bus]                   = "gb09bus";                   T_max[tgb09bus]                   = 300;  T_type[tgb09bus]                   = TE_type; /* Groenbewaking prioriteit fase 09                                                         */
    T_code[tblk09bus]                  = "blk09bus";                  T_max[tblk09bus]                  = 0;    T_type[tblk09bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    T_code[tbtovg11bus]                = "btovg11bus";                T_max[tbtovg11bus]                = 0;    T_type[tbtovg11bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    T_code[trt11bus]                   = "rt11bus";                   T_max[trt11bus]                   = 0;    T_type[trt11bus]                   = TE_type; /* Actuele rijtijd prio fase 11                                                             */
    T_code[tgb11bus]                   = "gb11bus";                   T_max[tgb11bus]                   = 300;  T_type[tgb11bus]                   = TE_type; /* Groenbewaking prioriteit fase 11                                                         */
    T_code[tblk11bus]                  = "blk11bus";                  T_max[tblk11bus]                  = 0;    T_type[tblk11bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    T_code[tbtovg61bus]                = "btovg61bus";                T_max[tbtovg61bus]                = 0;    T_type[tbtovg61bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    T_code[trt61bus]                   = "rt61bus";                   T_max[trt61bus]                   = 0;    T_type[trt61bus]                   = TE_type; /* Actuele rijtijd prio fase 61                                                             */
    T_code[tgb61bus]                   = "gb61bus";                   T_max[tgb61bus]                   = 300;  T_type[tgb61bus]                   = TE_type; /* Groenbewaking prioriteit fase 61                                                         */
    T_code[tblk61bus]                  = "blk61bus";                  T_max[tblk61bus]                  = 0;    T_type[tblk61bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    T_code[tbtovg62bus]                = "btovg62bus";                T_max[tbtovg62bus]                = 0;    T_type[tbtovg62bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    T_code[trt62bus]                   = "rt62bus";                   T_max[trt62bus]                   = 0;    T_type[trt62bus]                   = TE_type; /* Actuele rijtijd prio fase 62                                                             */
    T_code[tgb62bus]                   = "gb62bus";                   T_max[tgb62bus]                   = 300;  T_type[tgb62bus]                   = TE_type; /* Groenbewaking prioriteit fase 62                                                         */
    T_code[tblk62bus]                  = "blk62bus";                  T_max[tblk62bus]                  = 0;    T_type[tblk62bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    T_code[tbtovg67bus]                = "btovg67bus";                T_max[tbtovg67bus]                = 0;    T_type[tbtovg67bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    T_code[trt67bus]                   = "rt67bus";                   T_max[trt67bus]                   = 0;    T_type[trt67bus]                   = TE_type; /* Actuele rijtijd prio fase 67                                                             */
    T_code[tgb67bus]                   = "gb67bus";                   T_max[tgb67bus]                   = 300;  T_type[tgb67bus]                   = TE_type; /* Groenbewaking prioriteit fase 67                                                         */
    T_code[tblk67bus]                  = "blk67bus";                  T_max[tblk67bus]                  = 0;    T_type[tblk67bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    T_code[tprioin68buskar]            = "prioin68buskar";            T_max[tprioin68buskar]            = 15;   T_type[tprioin68buskar]            = TE_type; /* Anti jutter tijd inmelden 68 Bus                                                         */
    T_code[tbtovg68bus]                = "btovg68bus";                T_max[tbtovg68bus]                = 0;    T_type[tbtovg68bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    T_code[trt68bus]                   = "rt68bus";                   T_max[trt68bus]                   = 0;    T_type[trt68bus]                   = TE_type; /* Actuele rijtijd prio fase 68                                                             */
    T_code[tgb68bus]                   = "gb68bus";                   T_max[tgb68bus]                   = 300;  T_type[tgb68bus]                   = TE_type; /* Groenbewaking prioriteit fase 68                                                         */
    T_code[tblk68bus]                  = "blk68bus";                  T_max[tblk68bus]                  = 0;    T_type[tblk68bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    T_code[tgbhd02]                    = "gbhd02";                    T_max[tgbhd02]                    = 900;  T_type[tgbhd02]                    = TE_type; /* Groenbewaking HD fase 02                                                                 */
    T_code[trthd02]                    = "rthd02";                    T_max[trthd02]                    = 0;    T_type[trthd02]                    = TE_type; /* Actuele rijtijd HD fase 02                                                               */
    T_code[tbtovg02hd]                 = "btovg02hd";                 T_max[tbtovg02hd]                 = 0;    T_type[tbtovg02hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    T_code[thdin02kar]                 = "hdin02kar";                 T_max[thdin02kar]                 = 15;   T_type[thdin02kar]                 = TE_type; /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    T_code[thduit02kar]                = "hduit02kar";                T_max[thduit02kar]                = 15;   T_type[thduit02kar]                = TE_type; /* Anti jutter tijd uitmelden HD 02                                                         */
    T_code[tgbhd03]                    = "gbhd03";                    T_max[tgbhd03]                    = 900;  T_type[tgbhd03]                    = TE_type; /* Groenbewaking HD fase 03                                                                 */
    T_code[trthd03]                    = "rthd03";                    T_max[trthd03]                    = 0;    T_type[trthd03]                    = TE_type; /* Actuele rijtijd HD fase 03                                                               */
    T_code[tbtovg03hd]                 = "btovg03hd";                 T_max[tbtovg03hd]                 = 0;    T_type[tbtovg03hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    T_code[thdin03kar]                 = "hdin03kar";                 T_max[thdin03kar]                 = 15;   T_type[thdin03kar]                 = TE_type; /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    T_code[thduit03kar]                = "hduit03kar";                T_max[thduit03kar]                = 15;   T_type[thduit03kar]                = TE_type; /* Anti jutter tijd uitmelden HD 03                                                         */
    T_code[tgbhd05]                    = "gbhd05";                    T_max[tgbhd05]                    = 900;  T_type[tgbhd05]                    = TE_type; /* Groenbewaking HD fase 05                                                                 */
    T_code[trthd05]                    = "rthd05";                    T_max[trthd05]                    = 0;    T_type[trthd05]                    = TE_type; /* Actuele rijtijd HD fase 05                                                               */
    T_code[tbtovg05hd]                 = "btovg05hd";                 T_max[tbtovg05hd]                 = 0;    T_type[tbtovg05hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    T_code[thdin05kar]                 = "hdin05kar";                 T_max[thdin05kar]                 = 15;   T_type[thdin05kar]                 = TE_type; /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    T_code[thduit05kar]                = "hduit05kar";                T_max[thduit05kar]                = 15;   T_type[thduit05kar]                = TE_type; /* Anti jutter tijd uitmelden HD 05                                                         */
    T_code[tgbhd08]                    = "gbhd08";                    T_max[tgbhd08]                    = 900;  T_type[tgbhd08]                    = TE_type; /* Groenbewaking HD fase 08                                                                 */
    T_code[trthd08]                    = "rthd08";                    T_max[trthd08]                    = 0;    T_type[trthd08]                    = TE_type; /* Actuele rijtijd HD fase 08                                                               */
    T_code[tbtovg08hd]                 = "btovg08hd";                 T_max[tbtovg08hd]                 = 0;    T_type[tbtovg08hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    T_code[thdin08kar]                 = "hdin08kar";                 T_max[thdin08kar]                 = 15;   T_type[thdin08kar]                 = TE_type; /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    T_code[thduit08kar]                = "hduit08kar";                T_max[thduit08kar]                = 15;   T_type[thduit08kar]                = TE_type; /* Anti jutter tijd uitmelden HD 08                                                         */
    T_code[tgbhd09]                    = "gbhd09";                    T_max[tgbhd09]                    = 900;  T_type[tgbhd09]                    = TE_type; /* Groenbewaking HD fase 09                                                                 */
    T_code[trthd09]                    = "rthd09";                    T_max[trthd09]                    = 0;    T_type[trthd09]                    = TE_type; /* Actuele rijtijd HD fase 09                                                               */
    T_code[tbtovg09hd]                 = "btovg09hd";                 T_max[tbtovg09hd]                 = 0;    T_type[tbtovg09hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    T_code[thdin09kar]                 = "hdin09kar";                 T_max[thdin09kar]                 = 15;   T_type[thdin09kar]                 = TE_type; /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    T_code[thduit09kar]                = "hduit09kar";                T_max[thduit09kar]                = 15;   T_type[thduit09kar]                = TE_type; /* Anti jutter tijd uitmelden HD 09                                                         */
    T_code[tgbhd11]                    = "gbhd11";                    T_max[tgbhd11]                    = 900;  T_type[tgbhd11]                    = TE_type; /* Groenbewaking HD fase 11                                                                 */
    T_code[trthd11]                    = "rthd11";                    T_max[trthd11]                    = 0;    T_type[trthd11]                    = TE_type; /* Actuele rijtijd HD fase 11                                                               */
    T_code[tbtovg11hd]                 = "btovg11hd";                 T_max[tbtovg11hd]                 = 0;    T_type[tbtovg11hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    T_code[thdin11kar]                 = "hdin11kar";                 T_max[thdin11kar]                 = 15;   T_type[thdin11kar]                 = TE_type; /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    T_code[thduit11kar]                = "hduit11kar";                T_max[thduit11kar]                = 15;   T_type[thduit11kar]                = TE_type; /* Anti jutter tijd uitmelden HD 11                                                         */
    T_code[tgbhd61]                    = "gbhd61";                    T_max[tgbhd61]                    = 900;  T_type[tgbhd61]                    = TE_type; /* Groenbewaking HD fase 61                                                                 */
    T_code[trthd61]                    = "rthd61";                    T_max[trthd61]                    = 0;    T_type[trthd61]                    = TE_type; /* Actuele rijtijd HD fase 61                                                               */
    T_code[tbtovg61hd]                 = "btovg61hd";                 T_max[tbtovg61hd]                 = 0;    T_type[tbtovg61hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    T_code[thdin61kar]                 = "hdin61kar";                 T_max[thdin61kar]                 = 15;   T_type[thdin61kar]                 = TE_type; /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    T_code[thduit61kar]                = "hduit61kar";                T_max[thduit61kar]                = 15;   T_type[thduit61kar]                = TE_type; /* Anti jutter tijd uitmelden HD 61                                                         */
    T_code[tgbhd62]                    = "gbhd62";                    T_max[tgbhd62]                    = 900;  T_type[tgbhd62]                    = TE_type; /* Groenbewaking HD fase 62                                                                 */
    T_code[trthd62]                    = "rthd62";                    T_max[trthd62]                    = 0;    T_type[trthd62]                    = TE_type; /* Actuele rijtijd HD fase 62                                                               */
    T_code[tbtovg62hd]                 = "btovg62hd";                 T_max[tbtovg62hd]                 = 0;    T_type[tbtovg62hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    T_code[thdin62kar]                 = "hdin62kar";                 T_max[thdin62kar]                 = 15;   T_type[thdin62kar]                 = TE_type; /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    T_code[thduit62kar]                = "hduit62kar";                T_max[thduit62kar]                = 15;   T_type[thduit62kar]                = TE_type; /* Anti jutter tijd uitmelden HD 62                                                         */
    T_code[tgbhd67]                    = "gbhd67";                    T_max[tgbhd67]                    = 900;  T_type[tgbhd67]                    = TE_type; /* Groenbewaking HD fase 67                                                                 */
    T_code[trthd67]                    = "rthd67";                    T_max[trthd67]                    = 0;    T_type[trthd67]                    = TE_type; /* Actuele rijtijd HD fase 67                                                               */
    T_code[tbtovg67hd]                 = "btovg67hd";                 T_max[tbtovg67hd]                 = 0;    T_type[tbtovg67hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    T_code[thdin67kar]                 = "hdin67kar";                 T_max[thdin67kar]                 = 15;   T_type[thdin67kar]                 = TE_type; /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    T_code[thduit67kar]                = "hduit67kar";                T_max[thduit67kar]                = 15;   T_type[thduit67kar]                = TE_type; /* Anti jutter tijd uitmelden HD 67                                                         */
    T_code[tgbhd68]                    = "gbhd68";                    T_max[tgbhd68]                    = 900;  T_type[tgbhd68]                    = TE_type; /* Groenbewaking HD fase 68                                                                 */
    T_code[trthd68]                    = "rthd68";                    T_max[trthd68]                    = 0;    T_type[trthd68]                    = TE_type; /* Actuele rijtijd HD fase 68                                                               */
    T_code[tbtovg68hd]                 = "btovg68hd";                 T_max[tbtovg68hd]                 = 0;    T_type[tbtovg68hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    T_code[thdin68kar]                 = "hdin68kar";                 T_max[thdin68kar]                 = 15;   T_type[thdin68kar]                 = TE_type; /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    T_code[thduit68kar]                = "hduit68kar";                T_max[thduit68kar]                = 15;   T_type[thduit68kar]                = TE_type; /* Anti jutter tijd uitmelden HD 68                                                         */
    T_code[trgad24_3]                  = "rgad24_3";                  T_max[trgad24_3]                  = 10;   T_type[trgad24_3]                  = TE_type; /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    T_code[trgavd24_3]                 = "rgavd24_3";                 T_max[trgavd24_3]                 = 60;   T_type[trgavd24_3]                 = TE_type; /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    T_code[trgrd24_3_d24_2]            = "rgrd24_3_d24_2";            T_max[trgrd24_3_d24_2]            = 10;   T_type[trgrd24_3_d24_2]            = TE_type; /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    T_code[trgvd24_3_d24_2]            = "rgvd24_3_d24_2";            T_max[trgvd24_3_d24_2]            = 50;   T_type[trgvd24_3_d24_2]            = TE_type; /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    T_code[tfd02_1a]                   = "fd02_1a";                   T_max[tfd02_1a]                   = 60;   T_type[tfd02_1a]                   = TE_type; /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    T_code[tfd02_1b]                   = "fd02_1b";                   T_max[tfd02_1b]                   = 60;   T_type[tfd02_1b]                   = TE_type; /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    T_code[thd02_2a]                   = "hd02_2a";                   T_max[thd02_2a]                   = 10;   T_type[thd02_2a]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    T_code[thd02_2b]                   = "hd02_2b";                   T_max[thd02_2b]                   = 10;   T_type[thd02_2b]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    T_code[thd02_3a]                   = "hd02_3a";                   T_max[thd02_3a]                   = 10;   T_type[thd02_3a]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    T_code[thd02_3b]                   = "hd02_3b";                   T_max[thd02_3b]                   = 10;   T_type[thd02_3b]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    T_code[tfd03_1]                    = "fd03_1";                    T_max[tfd03_1]                    = 60;   T_type[tfd03_1]                    = TE_type; /* File meting RoBuGrover fase 03 detector 03_1                                             */
    T_code[thd03_2]                    = "hd03_2";                    T_max[thd03_2]                    = 10;   T_type[thd03_2]                    = TE_type; /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    T_code[tfd05_1]                    = "fd05_1";                    T_max[tfd05_1]                    = 60;   T_type[tfd05_1]                    = TE_type; /* File meting RoBuGrover fase 05 detector 05_1                                             */
    T_code[thd05_2]                    = "hd05_2";                    T_max[thd05_2]                    = 10;   T_type[thd05_2]                    = TE_type; /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    T_code[tfd08_1a]                   = "fd08_1a";                   T_max[tfd08_1a]                   = 60;   T_type[tfd08_1a]                   = TE_type; /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    T_code[tfd08_1b]                   = "fd08_1b";                   T_max[tfd08_1b]                   = 60;   T_type[tfd08_1b]                   = TE_type; /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    T_code[thd08_2a]                   = "hd08_2a";                   T_max[thd08_2a]                   = 10;   T_type[thd08_2a]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    T_code[thd08_2b]                   = "hd08_2b";                   T_max[thd08_2b]                   = 10;   T_type[thd08_2b]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    T_code[thd08_3a]                   = "hd08_3a";                   T_max[thd08_3a]                   = 10;   T_type[thd08_3a]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    T_code[thd08_3b]                   = "hd08_3b";                   T_max[thd08_3b]                   = 10;   T_type[thd08_3b]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    T_code[tfd09_1]                    = "fd09_1";                    T_max[tfd09_1]                    = 60;   T_type[tfd09_1]                    = TE_type; /* File meting RoBuGrover fase 09 detector 09_1                                             */
    T_code[thd09_2]                    = "hd09_2";                    T_max[thd09_2]                    = 10;   T_type[thd09_2]                    = TE_type; /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    T_code[thd09_3]                    = "hd09_3";                    T_max[thd09_3]                    = 10;   T_type[thd09_3]                    = TE_type; /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    T_code[tfd11_1]                    = "fd11_1";                    T_max[tfd11_1]                    = 60;   T_type[tfd11_1]                    = TE_type; /* File meting RoBuGrover fase 11 detector 11_1                                             */
    T_code[thd11_2]                    = "hd11_2";                    T_max[thd11_2]                    = 10;   T_type[thd11_2]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    T_code[thd11_3]                    = "hd11_3";                    T_max[thd11_3]                    = 10;   T_type[thd11_3]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    T_code[tfd22_1]                    = "fd22_1";                    T_max[tfd22_1]                    = 60;   T_type[tfd22_1]                    = TE_type; /* File meting RoBuGrover fase 22 detector 22_1                                             */
    T_code[thd22_1]                    = "hd22_1";                    T_max[thd22_1]                    = 10;   T_type[thd22_1]                    = TE_type; /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    T_code[tfd28_1]                    = "fd28_1";                    T_max[tfd28_1]                    = 60;   T_type[tfd28_1]                    = TE_type; /* File meting RoBuGrover fase 28 detector 28_1                                             */
    T_code[thd28_1]                    = "hd28_1";                    T_max[thd28_1]                    = 10;   T_type[thd28_1]                    = TE_type; /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    T_code[tfd68_1a]                   = "fd68_1a";                   T_max[tfd68_1a]                   = 60;   T_type[tfd68_1a]                   = TE_type; /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    T_code[tfd68_1b]                   = "fd68_1b";                   T_max[tfd68_1b]                   = 60;   T_type[tfd68_1b]                   = TE_type; /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    T_code[thd68_2a]                   = "hd68_2a";                   T_max[thd68_2a]                   = 10;   T_type[thd68_2a]                   = TE_type; /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    T_code[thd68_2b]                   = "hd68_2b";                   T_max[thd68_2b]                   = 10;   T_type[thd68_2b]                   = TE_type; /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    T_code[tuitgestca02]               = "uitgestca02";               T_max[tuitgestca02]               = 100;  T_type[tuitgestca02]               = TE_type; /* Uitgestelde cyclische aanvraag fase 02                                                   */
    T_code[tuitgestca03]               = "uitgestca03";               T_max[tuitgestca03]               = 100;  T_type[tuitgestca03]               = TE_type; /* Uitgestelde cyclische aanvraag fase 03                                                   */
    T_code[tuitgestca05]               = "uitgestca05";               T_max[tuitgestca05]               = 100;  T_type[tuitgestca05]               = TE_type; /* Uitgestelde cyclische aanvraag fase 05                                                   */
    T_code[tuitgestca08]               = "uitgestca08";               T_max[tuitgestca08]               = 100;  T_type[tuitgestca08]               = TE_type; /* Uitgestelde cyclische aanvraag fase 08                                                   */
    T_code[tuitgestca09]               = "uitgestca09";               T_max[tuitgestca09]               = 100;  T_type[tuitgestca09]               = TE_type; /* Uitgestelde cyclische aanvraag fase 09                                                   */
    T_code[tuitgestca11]               = "uitgestca11";               T_max[tuitgestca11]               = 100;  T_type[tuitgestca11]               = TE_type; /* Uitgestelde cyclische aanvraag fase 11                                                   */
    T_code[tuitgestca21]               = "uitgestca21";               T_max[tuitgestca21]               = 200;  T_type[tuitgestca21]               = TE_type; /* Uitgestelde cyclische aanvraag fase 21                                                   */
    T_code[tuitgestca22]               = "uitgestca22";               T_max[tuitgestca22]               = 200;  T_type[tuitgestca22]               = TE_type; /* Uitgestelde cyclische aanvraag fase 22                                                   */
    T_code[tuitgestca24]               = "uitgestca24";               T_max[tuitgestca24]               = 200;  T_type[tuitgestca24]               = TE_type; /* Uitgestelde cyclische aanvraag fase 24                                                   */
    T_code[tuitgestca26]               = "uitgestca26";               T_max[tuitgestca26]               = 200;  T_type[tuitgestca26]               = TE_type; /* Uitgestelde cyclische aanvraag fase 26                                                   */
    T_code[tuitgestca28]               = "uitgestca28";               T_max[tuitgestca28]               = 200;  T_type[tuitgestca28]               = TE_type; /* Uitgestelde cyclische aanvraag fase 28                                                   */
    T_code[tuitgestca31]               = "uitgestca31";               T_max[tuitgestca31]               = 300;  T_type[tuitgestca31]               = TE_type; /* Uitgestelde cyclische aanvraag fase 31                                                   */
    T_code[tuitgestca32]               = "uitgestca32";               T_max[tuitgestca32]               = 300;  T_type[tuitgestca32]               = TE_type; /* Uitgestelde cyclische aanvraag fase 32                                                   */
    T_code[tuitgestca33]               = "uitgestca33";               T_max[tuitgestca33]               = 300;  T_type[tuitgestca33]               = TE_type; /* Uitgestelde cyclische aanvraag fase 33                                                   */
    T_code[tuitgestca34]               = "uitgestca34";               T_max[tuitgestca34]               = 300;  T_type[tuitgestca34]               = TE_type; /* Uitgestelde cyclische aanvraag fase 34                                                   */
    T_code[tuitgestca38]               = "uitgestca38";               T_max[tuitgestca38]               = 300;  T_type[tuitgestca38]               = TE_type; /* Uitgestelde cyclische aanvraag fase 38                                                   */
    T_code[tuitgestca61]               = "uitgestca61";               T_max[tuitgestca61]               = 100;  T_type[tuitgestca61]               = TE_type; /* Uitgestelde cyclische aanvraag fase 61                                                   */
    T_code[tuitgestca62]               = "uitgestca62";               T_max[tuitgestca62]               = 100;  T_type[tuitgestca62]               = TE_type; /* Uitgestelde cyclische aanvraag fase 62                                                   */
    T_code[tuitgestca67]               = "uitgestca67";               T_max[tuitgestca67]               = 100;  T_type[tuitgestca67]               = TE_type; /* Uitgestelde cyclische aanvraag fase 67                                                   */
    T_code[tuitgestca68]               = "uitgestca68";               T_max[tuitgestca68]               = 100;  T_type[tuitgestca68]               = TE_type; /* Uitgestelde cyclische aanvraag fase 68                                                   */
    T_code[tuitgestca84]               = "uitgestca84";               T_max[tuitgestca84]               = 200;  T_type[tuitgestca84]               = TE_type; /* Uitgestelde cyclische aanvraag fase 84                                                   */
    T_code[tuitgestca82]               = "uitgestca82";               T_max[tuitgestca82]               = 200;  T_type[tuitgestca82]               = TE_type; /* Uitgestelde cyclische aanvraag fase 82                                                   */
    T_code[tuitgestca81]               = "uitgestca81";               T_max[tuitgestca81]               = 200;  T_type[tuitgestca81]               = TE_type; /* Uitgestelde cyclische aanvraag fase 81                                                   */
    T_code[tvgmax02]                   = "vgmax02";                   T_max[tvgmax02]                   = 80;   T_type[tvgmax02]                   = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    T_code[tvgvolg02_4a]               = "vgvolg02_4a";               T_max[tvgvolg02_4a]               = 25;   T_type[tvgvolg02_4a]               = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    T_code[tvghiaat02_4a]              = "vghiaat02_4a";              T_max[tvghiaat02_4a]              = 20;   T_type[tvghiaat02_4a]              = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    T_code[tvgvolg02_4b]               = "vgvolg02_4b";               T_max[tvgvolg02_4b]               = 25;   T_type[tvgvolg02_4b]               = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    T_code[tvghiaat02_4b]              = "vghiaat02_4b";              T_max[tvghiaat02_4b]              = 20;   T_type[tvghiaat02_4b]              = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    T_code[tvgmax08]                   = "vgmax08";                   T_max[tvgmax08]                   = 80;   T_type[tvgmax08]                   = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    T_code[tvgvolg08_4a]               = "vgvolg08_4a";               T_max[tvgvolg08_4a]               = 25;   T_type[tvgvolg08_4a]               = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    T_code[tvghiaat08_4a]              = "vghiaat08_4a";              T_max[tvghiaat08_4a]              = 20;   T_type[tvghiaat08_4a]              = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    T_code[tvgvolg08_4b]               = "vgvolg08_4b";               T_max[tvgvolg08_4b]               = 25;   T_type[tvgvolg08_4b]               = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    T_code[tvghiaat08_4b]              = "vghiaat08_4b";              T_max[tvghiaat08_4b]              = 20;   T_type[tvghiaat08_4b]              = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    T_code[tvgmax11]                   = "vgmax11";                   T_max[tvgmax11]                   = 80;   T_type[tvgmax11]                   = TE_type; /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    T_code[tvgvolg11_4]                = "vgvolg11_4";                T_max[tvgvolg11_4]                = 25;   T_type[tvgvolg11_4]                = TE_type; /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    T_code[tvghiaat11_4]               = "vghiaat11_4";               T_max[tvghiaat11_4]               = 20;   T_type[tvghiaat11_4]               = TE_type; /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    T_code[tvs2205]                    = "vs2205";                    T_max[tvs2205]                    = 20;   T_type[tvs2205]                    = TE_type; /* Voorstarttijd fase 22 op fase 05                                                         */
    T_code[tvs3205]                    = "vs3205";                    T_max[tvs3205]                    = 20;   T_type[tvs3205]                    = TE_type; /* Voorstarttijd fase 32 op fase 05                                                         */
    T_code[tlr2611]                    = "lr2611";                    T_max[tlr2611]                    = 20;   T_type[tlr2611]                    = TE_type; /* Late release tijd fase 26 naar fase 11                                                   */
    T_code[tlr6202]                    = "lr6202";                    T_max[tlr6202]                    = 30;   T_type[tlr6202]                    = TE_type; /* Late release tijd fase 62 naar fase 02                                                   */
    T_code[tlr6808]                    = "lr6808";                    T_max[tlr6808]                    = 30;   T_type[tlr6808]                    = TE_type; /* Late release tijd fase 68 naar fase 08                                                   */
    T_code[tlr2122]                    = "lr2122";                    T_max[tlr2122]                    = 20;   T_type[tlr2122]                    = TE_type; /* Late release tijd fase 21 naar fase 22                                                   */
    T_code[tlr8182]                    = "lr8182";                    T_max[tlr8182]                    = 30;   T_type[tlr8182]                    = TE_type; /* Late release tijd fase 81 naar fase 82                                                   */
    T_code[tinl3231]                   = "inl3231";                   T_max[tinl3231]                   = 30;   T_type[tinl3231]                   = TE_type; /* Inloop tijd fase 32                                                                      */
    T_code[tinl3132]                   = "inl3132";                   T_max[tinl3132]                   = 30;   T_type[tinl3132]                   = TE_type; /* Inloop tijd fase 31                                                                      */
    T_code[tinl3433]                   = "inl3433";                   T_max[tinl3433]                   = 30;   T_type[tinl3433]                   = TE_type; /* Inloop tijd fase 34                                                                      */
    T_code[tinl3334]                   = "inl3334";                   T_max[tinl3334]                   = 30;   T_type[tinl3334]                   = TE_type; /* Inloop tijd fase 33                                                                      */
    T_code[tfo0522]                    = "fo0522";                    T_max[tfo0522]                    = 40;   T_type[tfo0522]                    = TE_type; /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    T_code[tfo0532]                    = "fo0532";                    T_max[tfo0532]                    = 50;   T_type[tfo0532]                    = TE_type; /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    T_code[tfo1126]                    = "fo1126";                    T_max[tfo1126]                    = 20;   T_type[tfo1126]                    = TE_type; /* Fictieve ontruimingstijd van 11 naar fase 26                                             */

/* teller elementen */
/* ---------------- */
    C_code[cvc02bus] = "vc02bus"; C_max[cvc02bus] = 999; C_type[cvc02bus] = CT_type; /* Bijhouden prio inmeldingen fase 02 type Bus */
    C_code[cvc03bus] = "vc03bus"; C_max[cvc03bus] = 999; C_type[cvc03bus] = CT_type; /* Bijhouden prio inmeldingen fase 03 type Bus */
    C_code[cvc05bus] = "vc05bus"; C_max[cvc05bus] = 999; C_type[cvc05bus] = CT_type; /* Bijhouden prio inmeldingen fase 05 type Bus */
    C_code[cvc08bus] = "vc08bus"; C_max[cvc08bus] = 999; C_type[cvc08bus] = CT_type; /* Bijhouden prio inmeldingen fase 08 type Bus */
    C_code[cvc09bus] = "vc09bus"; C_max[cvc09bus] = 999; C_type[cvc09bus] = CT_type; /* Bijhouden prio inmeldingen fase 09 type Bus */
    C_code[cvc11bus] = "vc11bus"; C_max[cvc11bus] = 999; C_type[cvc11bus] = CT_type; /* Bijhouden prio inmeldingen fase 11 type Bus */
    C_code[cvc61bus] = "vc61bus"; C_max[cvc61bus] = 999; C_type[cvc61bus] = CT_type; /* Bijhouden prio inmeldingen fase 61 type Bus */
    C_code[cvc62bus] = "vc62bus"; C_max[cvc62bus] = 999; C_type[cvc62bus] = CT_type; /* Bijhouden prio inmeldingen fase 62 type Bus */
    C_code[cvc67bus] = "vc67bus"; C_max[cvc67bus] = 999; C_type[cvc67bus] = CT_type; /* Bijhouden prio inmeldingen fase 67 type Bus */
    C_code[cvc68bus] = "vc68bus"; C_max[cvc68bus] = 999; C_type[cvc68bus] = CT_type; /* Bijhouden prio inmeldingen fase 68 type Bus */
    C_code[cvchd02]  = "vchd02";  C_max[cvchd02]  = 999; C_type[cvchd02]  = CT_type; /* Bijhouden prio inmeldingen fase 02          */
    C_code[cvchd03]  = "vchd03";  C_max[cvchd03]  = 999; C_type[cvchd03]  = CT_type; /* Bijhouden prio inmeldingen fase 03          */
    C_code[cvchd05]  = "vchd05";  C_max[cvchd05]  = 999; C_type[cvchd05]  = CT_type; /* Bijhouden prio inmeldingen fase 05          */
    C_code[cvchd08]  = "vchd08";  C_max[cvchd08]  = 999; C_type[cvchd08]  = CT_type; /* Bijhouden prio inmeldingen fase 08          */
    C_code[cvchd09]  = "vchd09";  C_max[cvchd09]  = 999; C_type[cvchd09]  = CT_type; /* Bijhouden prio inmeldingen fase 09          */
    C_code[cvchd11]  = "vchd11";  C_max[cvchd11]  = 999; C_type[cvchd11]  = CT_type; /* Bijhouden prio inmeldingen fase 11          */
    C_code[cvchd61]  = "vchd61";  C_max[cvchd61]  = 999; C_type[cvchd61]  = CT_type; /* Bijhouden prio inmeldingen fase 61          */
    C_code[cvchd62]  = "vchd62";  C_max[cvchd62]  = 999; C_type[cvchd62]  = CT_type; /* Bijhouden prio inmeldingen fase 62          */
    C_code[cvchd67]  = "vchd67";  C_max[cvchd67]  = 999; C_type[cvchd67]  = CT_type; /* Bijhouden prio inmeldingen fase 67          */
    C_code[cvchd68]  = "vchd68";  C_max[cvchd68]  = 999; C_type[cvchd68]  = CT_type; /* Bijhouden prio inmeldingen fase 68          */

/* schakelaars */
/* ----------- */
    SCH_code[schdynhiaat02]            = "dynhiaat02";            SCH[schdynhiaat02]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 02                          */
    SCH_code[schopdrempelen02]         = "opdrempelen02";         SCH[schopdrempelen02]         = 1;                                        /* Opdrempelen toepassen voor fase 02                             */
    SCH_code[schedkop_02]              = "edkop_02";              SCH[schedkop_02]              = 1;                                        /* Start timers dynamische hiaat fase 02 op einde detectie koplus */
    SCH_code[schdynhiaat08]            = "dynhiaat08";            SCH[schdynhiaat08]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 08                          */
    SCH_code[schopdrempelen08]         = "opdrempelen08";         SCH[schopdrempelen08]         = 1;                                        /* Opdrempelen toepassen voor fase 08                             */
    SCH_code[schedkop_08]              = "edkop_08";              SCH[schedkop_08]              = 1;                                        /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    SCH_code[schdynhiaat09]            = "dynhiaat09";            SCH[schdynhiaat09]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 09                          */
    SCH_code[schopdrempelen09]         = "opdrempelen09";         SCH[schopdrempelen09]         = 0;                                        /* Opdrempelen toepassen voor fase 09                             */
    SCH_code[schedkop_09]              = "edkop_09";              SCH[schedkop_09]              = 1;                                        /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    SCH_code[schdynhiaat11]            = "dynhiaat11";            SCH[schdynhiaat11]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 11                          */
    SCH_code[schopdrempelen11]         = "opdrempelen11";         SCH[schopdrempelen11]         = 0;                                        /* Opdrempelen toepassen voor fase 11                             */
    SCH_code[schedkop_11]              = "edkop_11";              SCH[schedkop_11]              = 1;                                        /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    SCH_code[schconfidence15fix]       = "confidence15fix";       SCH[schconfidence15fix]       = 0;                                       
    SCH_code[schtxconfidence15ar]      = "txconfidence15ar";      SCH[schtxconfidence15ar]      = 1;                                       
    SCH_code[schspatconfidence1]       = "spatconfidence1";       SCH[schspatconfidence1]       = 0;                                       
    SCH_code[schspatconfidence3]       = "spatconfidence3";       SCH[schspatconfidence3]       = 0;                                       
    SCH_code[schspatconfidence6]       = "spatconfidence6";       SCH[schspatconfidence6]       = 0;                                       
    SCH_code[schspatconfidence9]       = "spatconfidence9";       SCH[schspatconfidence9]       = 0;                                       
    SCH_code[schspatconfidence12]      = "spatconfidence12";      SCH[schspatconfidence12]      = 0;                                       
    SCH_code[schspatconfidence15]      = "spatconfidence15";      SCH[schspatconfidence15]      = 1;                                       
    SCH_code[schtimings02]             = "timings02";             SCH[schtimings02]             = 0;                                       
    SCH_code[schtimings03]             = "timings03";             SCH[schtimings03]             = 0;                                       
    SCH_code[schtimings05]             = "timings05";             SCH[schtimings05]             = 0;                                       
    SCH_code[schtimings08]             = "timings08";             SCH[schtimings08]             = 0;                                       
    SCH_code[schtimings09]             = "timings09";             SCH[schtimings09]             = 0;                                       
    SCH_code[schtimings11]             = "timings11";             SCH[schtimings11]             = 0;                                       
    SCH_code[schtimings21]             = "timings21";             SCH[schtimings21]             = 0;                                       
    SCH_code[schtimings22]             = "timings22";             SCH[schtimings22]             = 0;                                       
    SCH_code[schtimings24]             = "timings24";             SCH[schtimings24]             = 0;                                       
    SCH_code[schtimings26]             = "timings26";             SCH[schtimings26]             = 0;                                       
    SCH_code[schtimings28]             = "timings28";             SCH[schtimings28]             = 0;                                       
    SCH_code[schtimings31]             = "timings31";             SCH[schtimings31]             = 0;                                       
    SCH_code[schtimings32]             = "timings32";             SCH[schtimings32]             = 0;                                       
    SCH_code[schtimings33]             = "timings33";             SCH[schtimings33]             = 0;                                       
    SCH_code[schtimings34]             = "timings34";             SCH[schtimings34]             = 0;                                       
    SCH_code[schtimings38]             = "timings38";             SCH[schtimings38]             = 0;                                       
    SCH_code[schtimings61]             = "timings61";             SCH[schtimings61]             = 0;                                       
    SCH_code[schtimings62]             = "timings62";             SCH[schtimings62]             = 0;                                       
    SCH_code[schtimings67]             = "timings67";             SCH[schtimings67]             = 0;                                       
    SCH_code[schtimings68]             = "timings68";             SCH[schtimings68]             = 0;                                       
    SCH_code[schtimings84]             = "timings84";             SCH[schtimings84]             = 0;                                       
    SCH_code[schtimings82]             = "timings82";             SCH[schtimings82]             = 0;                                       
    SCH_code[schtimings81]             = "timings81";             SCH[schtimings81]             = 0;                                       
    SCH_code[schfileFile68af]          = "fileFile68af";          SCH[schfileFile68af]          = 1;                                        /* File ingreep File68af toepassen                                */
    SCH_code[schfiledoserenFile68af]   = "filedoserenFile68af";   SCH[schfiledoserenFile68af]   = 1;                                        /* Toepassen doseerpercentages voor fileingreep File68af          */
    SCH_code[schfileFile68afparstrook] = "fileFile68afparstrook"; SCH[schfileFile68afparstrook] = 0;                                        /* Parallele file meldingen per strook file ingreep File68af      */
    SCH_code[schbmfix]                 = "bmfix";                 SCH[schbmfix]                 = 0;                                        /* Bijkomen tijdens fixatie mogelijk                              */
    SCH_code[schma0261]                = "ma0261";                SCH[schma0261]                = 0;                                        /* Meeaanvraag van 02 naar 61 actief                              */
    SCH_code[schma0262]                = "ma0262";                SCH[schma0262]                = 1;                                        /* Meeaanvraag van 02 naar 62 actief                              */
    SCH_code[schma0521]                = "ma0521";                SCH[schma0521]                = 1;                                        /* Meeaanvraag van 05 naar 21 actief                              */
    SCH_code[schma0522]                = "ma0522";                SCH[schma0522]                = 1;                                        /* Meeaanvraag van 05 naar 22 actief                              */
    SCH_code[schma0532]                = "ma0532";                SCH[schma0532]                = 1;                                        /* Meeaanvraag van 05 naar 32 actief                              */
    SCH_code[schma0868]                = "ma0868";                SCH[schma0868]                = 1;                                        /* Meeaanvraag van 08 naar 68 actief                              */
    SCH_code[schma1126]                = "ma1126";                SCH[schma1126]                = 1;                                        /* Meeaanvraag van 11 naar 26 actief                              */
    SCH_code[schma2221]                = "ma2221";                SCH[schma2221]                = 1;                                        /* Meeaanvraag van 22 naar 21 actief                              */
    SCH_code[schma3122]                = "ma3122";                SCH[schma3122]                = 0;                                        /* Meeaanvraag van 31 naar 22 actief                              */
    SCH_code[schma3132]                = "ma3132";                SCH[schma3132]                = 1;                                        /* Meeaanvraag van 31 naar 32 actief                              */
    SCH_code[schma3222]                = "ma3222";                SCH[schma3222]                = 1;                                        /* Meeaanvraag van 32 naar 22 actief                              */
    SCH_code[schma3231]                = "ma3231";                SCH[schma3231]                = 1;                                        /* Meeaanvraag van 32 naar 31 actief                              */
    SCH_code[schma3324]                = "ma3324";                SCH[schma3324]                = 0;                                        /* Meeaanvraag van 33 naar 24 actief                              */
    SCH_code[schma3334]                = "ma3334";                SCH[schma3334]                = 1;                                        /* Meeaanvraag van 33 naar 34 actief                              */
    SCH_code[schma3384]                = "ma3384";                SCH[schma3384]                = 0;                                        /* Meeaanvraag van 33 naar 84 actief                              */
    SCH_code[schma3424]                = "ma3424";                SCH[schma3424]                = 0;                                        /* Meeaanvraag van 34 naar 24 actief                              */
    SCH_code[schma3433]                = "ma3433";                SCH[schma3433]                = 1;                                        /* Meeaanvraag van 34 naar 33 actief                              */
    SCH_code[schma3484]                = "ma3484";                SCH[schma3484]                = 0;                                        /* Meeaanvraag van 34 naar 84 actief                              */
    SCH_code[schma8281]                = "ma8281";                SCH[schma8281]                = 1;                                        /* Meeaanvraag van 82 naar 81 actief                              */
    SCH_code[schmv02]                  = "mv02";                  SCH[schmv02]                  = 1;                                        /* Meeverlengen fase 02                                           */
    SCH_code[schmv03]                  = "mv03";                  SCH[schmv03]                  = 1;                                        /* Meeverlengen fase 03                                           */
    SCH_code[schmv05]                  = "mv05";                  SCH[schmv05]                  = 1;                                        /* Meeverlengen fase 05                                           */
    SCH_code[schmv08]                  = "mv08";                  SCH[schmv08]                  = 1;                                        /* Meeverlengen fase 08                                           */
    SCH_code[schmv09]                  = "mv09";                  SCH[schmv09]                  = 1;                                        /* Meeverlengen fase 09                                           */
    SCH_code[schmv11]                  = "mv11";                  SCH[schmv11]                  = 1;                                        /* Meeverlengen fase 11                                           */
    SCH_code[schmv21]                  = "mv21";                  SCH[schmv21]                  = 1;                                        /* Meeverlengen fase 21                                           */
    SCH_code[schmv22]                  = "mv22";                  SCH[schmv22]                  = 1;                                        /* Meeverlengen fase 22                                           */
    SCH_code[schmv24]                  = "mv24";                  SCH[schmv24]                  = 1;                                        /* Meeverlengen fase 24                                           */
    SCH_code[schmv26]                  = "mv26";                  SCH[schmv26]                  = 1;                                        /* Meeverlengen fase 26                                           */
    SCH_code[schmv28]                  = "mv28";                  SCH[schmv28]                  = 1;                                        /* Meeverlengen fase 28                                           */
    SCH_code[schmv31]                  = "mv31";                  SCH[schmv31]                  = 0;                                        /* Meeverlengen fase 31                                           */
    SCH_code[schmv32]                  = "mv32";                  SCH[schmv32]                  = 0;                                        /* Meeverlengen fase 32                                           */
    SCH_code[schmv33]                  = "mv33";                  SCH[schmv33]                  = 0;                                        /* Meeverlengen fase 33                                           */
    SCH_code[schmv34]                  = "mv34";                  SCH[schmv34]                  = 0;                                        /* Meeverlengen fase 34                                           */
    SCH_code[schmv38]                  = "mv38";                  SCH[schmv38]                  = 0;                                        /* Meeverlengen fase 38                                           */
    SCH_code[schmv61]                  = "mv61";                  SCH[schmv61]                  = 0;                                        /* Meeverlengen fase 61                                           */
    SCH_code[schmv62]                  = "mv62";                  SCH[schmv62]                  = 0;                                        /* Meeverlengen fase 62                                           */
    SCH_code[schmv67]                  = "mv67";                  SCH[schmv67]                  = 1;                                        /* Meeverlengen fase 67                                           */
    SCH_code[schmv68]                  = "mv68";                  SCH[schmv68]                  = 0;                                        /* Meeverlengen fase 68                                           */
    SCH_code[schmv84]                  = "mv84";                  SCH[schmv84]                  = 1;                                        /* Meeverlengen fase 84                                           */
    SCH_code[schmv82]                  = "mv82";                  SCH[schmv82]                  = 1;                                        /* Meeverlengen fase 82                                           */
    SCH_code[schmv81]                  = "mv81";                  SCH[schmv81]                  = 1;                                        /* Meeverlengen fase 81                                           */
    SCH_code[schmlprm]                 = "mlprm";                 SCH[schmlprm]                 = 0;                                        /* Toepassen parametriseerbare modulestructuur                    */
    SCH_code[schovstipt02bus]          = "ovstipt02bus";          SCH[schovstipt02bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    SCH_code[schovstipt03bus]          = "ovstipt03bus";          SCH[schovstipt03bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    SCH_code[schovstipt05bus]          = "ovstipt05bus";          SCH[schovstipt05bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    SCH_code[schovstipt08bus]          = "ovstipt08bus";          SCH[schovstipt08bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    SCH_code[schovstipt09bus]          = "ovstipt09bus";          SCH[schovstipt09bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    SCH_code[schovstipt11bus]          = "ovstipt11bus";          SCH[schovstipt11bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    SCH_code[schovstipt61bus]          = "ovstipt61bus";          SCH[schovstipt61bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    SCH_code[schovstipt62bus]          = "ovstipt62bus";          SCH[schovstipt62bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    SCH_code[schovstipt67bus]          = "ovstipt67bus";          SCH[schovstipt67bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    SCH_code[schovstipt68bus]          = "ovstipt68bus";          SCH[schovstipt68bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    SCH_code[schcovuber]               = "covuber";               SCH[schcovuber]               = 1;                                        /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    SCH_code[schcheckdstype]           = "checkdstype";           SCH[schcheckdstype]           = 0;                                        /* Check type DSI bericht bij VECOM                               */
    SCH_code[schprioin02buskar]        = "prioin02buskar";        SCH[schprioin02buskar]        = 1;                                        /* Inmelden 02 via Bus toestaan                                   */
    SCH_code[schpriouit02buskar]       = "priouit02buskar";       SCH[schpriouit02buskar]       = 1;                                        /* Uitmelden 02 via Bus toestaan                                  */
    SCH_code[schupinagb02bus]          = "upinagb02bus";          SCH[schupinagb02bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    SCH_code[schprioin03buskar]        = "prioin03buskar";        SCH[schprioin03buskar]        = 1;                                        /* Inmelden 03 via Bus toestaan                                   */
    SCH_code[schpriouit03buskar]       = "priouit03buskar";       SCH[schpriouit03buskar]       = 1;                                        /* Uitmelden 03 via Bus toestaan                                  */
    SCH_code[schupinagb03bus]          = "upinagb03bus";          SCH[schupinagb03bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    SCH_code[schprioin05buskar]        = "prioin05buskar";        SCH[schprioin05buskar]        = 1;                                        /* Inmelden 05 via Bus toestaan                                   */
    SCH_code[schpriouit05buskar]       = "priouit05buskar";       SCH[schpriouit05buskar]       = 1;                                        /* Uitmelden 05 via Bus toestaan                                  */
    SCH_code[schupinagb05bus]          = "upinagb05bus";          SCH[schupinagb05bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    SCH_code[schprioin08buskar]        = "prioin08buskar";        SCH[schprioin08buskar]        = 1;                                        /* Inmelden 08 via Bus toestaan                                   */
    SCH_code[schpriouit08buskar]       = "priouit08buskar";       SCH[schpriouit08buskar]       = 1;                                        /* Uitmelden 08 via Bus toestaan                                  */
    SCH_code[schupinagb08bus]          = "upinagb08bus";          SCH[schupinagb08bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    SCH_code[schprioin09buskar]        = "prioin09buskar";        SCH[schprioin09buskar]        = 1;                                        /* Inmelden 09 via Bus toestaan                                   */
    SCH_code[schpriouit09buskar]       = "priouit09buskar";       SCH[schpriouit09buskar]       = 1;                                        /* Uitmelden 09 via Bus toestaan                                  */
    SCH_code[schupinagb09bus]          = "upinagb09bus";          SCH[schupinagb09bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    SCH_code[schprioin11buskar]        = "prioin11buskar";        SCH[schprioin11buskar]        = 1;                                        /* Inmelden 11 via Bus toestaan                                   */
    SCH_code[schpriouit11buskar]       = "priouit11buskar";       SCH[schpriouit11buskar]       = 1;                                        /* Uitmelden 11 via Bus toestaan                                  */
    SCH_code[schupinagb11bus]          = "upinagb11bus";          SCH[schupinagb11bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    SCH_code[schprioin61buskar]        = "prioin61buskar";        SCH[schprioin61buskar]        = 1;                                        /* Inmelden 61 via Bus toestaan                                   */
    SCH_code[schpriouit61buskar]       = "priouit61buskar";       SCH[schpriouit61buskar]       = 1;                                        /* Uitmelden 61 via Bus toestaan                                  */
    SCH_code[schupinagb61bus]          = "upinagb61bus";          SCH[schupinagb61bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    SCH_code[schprioin62buskar]        = "prioin62buskar";        SCH[schprioin62buskar]        = 1;                                        /* Inmelden 62 via Bus toestaan                                   */
    SCH_code[schpriouit62buskar]       = "priouit62buskar";       SCH[schpriouit62buskar]       = 1;                                        /* Uitmelden 62 via Bus toestaan                                  */
    SCH_code[schupinagb62bus]          = "upinagb62bus";          SCH[schupinagb62bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    SCH_code[schprioin67buskar]        = "prioin67buskar";        SCH[schprioin67buskar]        = 1;                                        /* Inmelden 67 via Bus toestaan                                   */
    SCH_code[schpriouit67buskar]       = "priouit67buskar";       SCH[schpriouit67buskar]       = 1;                                        /* Uitmelden 67 via Bus toestaan                                  */
    SCH_code[schupinagb67bus]          = "upinagb67bus";          SCH[schupinagb67bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    SCH_code[schprioin68buskar]        = "prioin68buskar";        SCH[schprioin68buskar]        = 1;                                        /* Inmelden 68 via Bus toestaan                                   */
    SCH_code[schpriouit68buskar]       = "priouit68buskar";       SCH[schpriouit68buskar]       = 1;                                        /* Uitmelden 68 via Bus toestaan                                  */
    SCH_code[schupinagb68bus]          = "upinagb68bus";          SCH[schupinagb68bus]          = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    SCH_code[schupinagbhd02]           = "upinagbhd02";           SCH[schupinagbhd02]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    SCH_code[schhdin02kar]             = "hdin02kar";             SCH[schhdin02kar]             = 1;                                        /* Inmelden 02 via KAR HD toestaan                                */
    SCH_code[schhduit02kar]            = "hduit02kar";            SCH[schhduit02kar]            = 1;                                        /* Uitmelden 02 via KAR HD toestaan                               */
    SCH_code[schchecksirene02]         = "checksirene02";         SCH[schchecksirene02]         = 1;                                        /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd03]           = "upinagbhd03";           SCH[schupinagbhd03]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    SCH_code[schhdin03kar]             = "hdin03kar";             SCH[schhdin03kar]             = 1;                                        /* Inmelden 03 via KAR HD toestaan                                */
    SCH_code[schhduit03kar]            = "hduit03kar";            SCH[schhduit03kar]            = 1;                                        /* Uitmelden 03 via KAR HD toestaan                               */
    SCH_code[schchecksirene03]         = "checksirene03";         SCH[schchecksirene03]         = 1;                                        /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd05]           = "upinagbhd05";           SCH[schupinagbhd05]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    SCH_code[schhdin05kar]             = "hdin05kar";             SCH[schhdin05kar]             = 1;                                        /* Inmelden 05 via KAR HD toestaan                                */
    SCH_code[schhduit05kar]            = "hduit05kar";            SCH[schhduit05kar]            = 1;                                        /* Uitmelden 05 via KAR HD toestaan                               */
    SCH_code[schchecksirene05]         = "checksirene05";         SCH[schchecksirene05]         = 1;                                        /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd08]           = "upinagbhd08";           SCH[schupinagbhd08]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    SCH_code[schhdin08kar]             = "hdin08kar";             SCH[schhdin08kar]             = 1;                                        /* Inmelden 08 via KAR HD toestaan                                */
    SCH_code[schhduit08kar]            = "hduit08kar";            SCH[schhduit08kar]            = 1;                                        /* Uitmelden 08 via KAR HD toestaan                               */
    SCH_code[schchecksirene08]         = "checksirene08";         SCH[schchecksirene08]         = 1;                                        /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd09]           = "upinagbhd09";           SCH[schupinagbhd09]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    SCH_code[schhdin09kar]             = "hdin09kar";             SCH[schhdin09kar]             = 1;                                        /* Inmelden 09 via KAR HD toestaan                                */
    SCH_code[schhduit09kar]            = "hduit09kar";            SCH[schhduit09kar]            = 1;                                        /* Uitmelden 09 via KAR HD toestaan                               */
    SCH_code[schchecksirene09]         = "checksirene09";         SCH[schchecksirene09]         = 1;                                        /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd11]           = "upinagbhd11";           SCH[schupinagbhd11]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    SCH_code[schhdin11kar]             = "hdin11kar";             SCH[schhdin11kar]             = 1;                                        /* Inmelden 11 via KAR HD toestaan                                */
    SCH_code[schhduit11kar]            = "hduit11kar";            SCH[schhduit11kar]            = 1;                                        /* Uitmelden 11 via KAR HD toestaan                               */
    SCH_code[schchecksirene11]         = "checksirene11";         SCH[schchecksirene11]         = 1;                                        /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd61]           = "upinagbhd61";           SCH[schupinagbhd61]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    SCH_code[schhdin61kar]             = "hdin61kar";             SCH[schhdin61kar]             = 1;                                        /* Inmelden 61 via KAR HD toestaan                                */
    SCH_code[schhduit61kar]            = "hduit61kar";            SCH[schhduit61kar]            = 1;                                        /* Uitmelden 61 via KAR HD toestaan                               */
    SCH_code[schchecksirene61]         = "checksirene61";         SCH[schchecksirene61]         = 1;                                        /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd62]           = "upinagbhd62";           SCH[schupinagbhd62]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    SCH_code[schhdin62kar]             = "hdin62kar";             SCH[schhdin62kar]             = 1;                                        /* Inmelden 62 via KAR HD toestaan                                */
    SCH_code[schhduit62kar]            = "hduit62kar";            SCH[schhduit62kar]            = 1;                                        /* Uitmelden 62 via KAR HD toestaan                               */
    SCH_code[schchecksirene62]         = "checksirene62";         SCH[schchecksirene62]         = 1;                                        /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd67]           = "upinagbhd67";           SCH[schupinagbhd67]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    SCH_code[schhdin67kar]             = "hdin67kar";             SCH[schhdin67kar]             = 1;                                        /* Inmelden 67 via KAR HD toestaan                                */
    SCH_code[schhduit67kar]            = "hduit67kar";            SCH[schhduit67kar]            = 1;                                        /* Uitmelden 67 via KAR HD toestaan                               */
    SCH_code[schchecksirene67]         = "checksirene67";         SCH[schchecksirene67]         = 1;                                        /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd68]           = "upinagbhd68";           SCH[schupinagbhd68]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    SCH_code[schhdin68kar]             = "hdin68kar";             SCH[schhdin68kar]             = 1;                                        /* Inmelden 68 via KAR HD toestaan                                */
    SCH_code[schhduit68kar]            = "hduit68kar";            SCH[schhduit68kar]            = 1;                                        /* Uitmelden 68 via KAR HD toestaan                               */
    SCH_code[schchecksirene68]         = "checksirene68";         SCH[schchecksirene68]         = 1;                                        /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    SCH_code[schrisgeencheckopsg]      = "risgeencheckopsg";      SCH[schrisgeencheckopsg]      = 0;                                        /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    SCH_code[schrgadd24_3]             = "rgadd24_3";             SCH[schrgadd24_3]             = 1;                                        /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    SCH_code[schrgv]                   = "rgv";                   SCH[schrgv]                   = 0;                                        /* RoBuGrover aan of uit                                          */
    SCH_code[schrgv_snel]              = "rgv_snel";              SCH[schrgv_snel]              = 0;                                        /* RoBuGrover versneld ophogen of verlagen                        */
    SCH_code[schca02]                  = "ca02";                  SCH[schca02]                  = 0;                                        /* Cyclische aanvraag fase 02                                     */
    SCH_code[schca03]                  = "ca03";                  SCH[schca03]                  = 0;                                        /* Cyclische aanvraag fase 03                                     */
    SCH_code[schca05]                  = "ca05";                  SCH[schca05]                  = 0;                                        /* Cyclische aanvraag fase 05                                     */
    SCH_code[schca08]                  = "ca08";                  SCH[schca08]                  = 0;                                        /* Cyclische aanvraag fase 08                                     */
    SCH_code[schca09]                  = "ca09";                  SCH[schca09]                  = 0;                                        /* Cyclische aanvraag fase 09                                     */
    SCH_code[schca11]                  = "ca11";                  SCH[schca11]                  = 0;                                        /* Cyclische aanvraag fase 11                                     */
    SCH_code[schca21]                  = "ca21";                  SCH[schca21]                  = 0;                                        /* Cyclische aanvraag fase 21                                     */
    SCH_code[schca22]                  = "ca22";                  SCH[schca22]                  = 0;                                        /* Cyclische aanvraag fase 22                                     */
    SCH_code[schca24]                  = "ca24";                  SCH[schca24]                  = 0;                                        /* Cyclische aanvraag fase 24                                     */
    SCH_code[schca26]                  = "ca26";                  SCH[schca26]                  = 0;                                        /* Cyclische aanvraag fase 26                                     */
    SCH_code[schca28]                  = "ca28";                  SCH[schca28]                  = 0;                                        /* Cyclische aanvraag fase 28                                     */
    SCH_code[schca31]                  = "ca31";                  SCH[schca31]                  = 0;                                        /* Cyclische aanvraag fase 31                                     */
    SCH_code[schca32]                  = "ca32";                  SCH[schca32]                  = 0;                                        /* Cyclische aanvraag fase 32                                     */
    SCH_code[schca33]                  = "ca33";                  SCH[schca33]                  = 0;                                        /* Cyclische aanvraag fase 33                                     */
    SCH_code[schca34]                  = "ca34";                  SCH[schca34]                  = 0;                                        /* Cyclische aanvraag fase 34                                     */
    SCH_code[schca38]                  = "ca38";                  SCH[schca38]                  = 0;                                        /* Cyclische aanvraag fase 38                                     */
    SCH_code[schca61]                  = "ca61";                  SCH[schca61]                  = 0;                                        /* Cyclische aanvraag fase 61                                     */
    SCH_code[schca62]                  = "ca62";                  SCH[schca62]                  = 0;                                        /* Cyclische aanvraag fase 62                                     */
    SCH_code[schca67]                  = "ca67";                  SCH[schca67]                  = 0;                                        /* Cyclische aanvraag fase 67                                     */
    SCH_code[schca68]                  = "ca68";                  SCH[schca68]                  = 0;                                        /* Cyclische aanvraag fase 68                                     */
    SCH_code[schca84]                  = "ca84";                  SCH[schca84]                  = 0;                                        /* Cyclische aanvraag fase 84                                     */
    SCH_code[schca82]                  = "ca82";                  SCH[schca82]                  = 0;                                        /* Cyclische aanvraag fase 82                                     */
    SCH_code[schca81]                  = "ca81";                  SCH[schca81]                  = 0;                                        /* Cyclische aanvraag fase 81                                     */
    SCH_code[schvg02_4a]               = "vg02_4a";               SCH[schvg02_4a]               = 0;                                        /* Veiligheidsgroen detector 02_4a fase 02                        */
    SCH_code[schvg02_4b]               = "vg02_4b";               SCH[schvg02_4b]               = 0;                                        /* Veiligheidsgroen detector 02_4b fase 02                        */
    SCH_code[schvg08_4a]               = "vg08_4a";               SCH[schvg08_4a]               = 0;                                        /* Veiligheidsgroen detector 08_4a fase 08                        */
    SCH_code[schvg08_4b]               = "vg08_4b";               SCH[schvg08_4b]               = 0;                                        /* Veiligheidsgroen detector 08_4b fase 08                        */
    SCH_code[schvg11_4]                = "vg11_4";                SCH[schvg11_4]                = 0;                                        /* Veiligheidsgroen detector 11_4 fase 11                         */
    SCH_code[schaltg02]                = "altg02";                SCH[schaltg02]                = 1;                                        /* Alternatieve realisatie toestaan fase 02                       */
    SCH_code[schaltg03]                = "altg03";                SCH[schaltg03]                = 1;                                        /* Alternatieve realisatie toestaan fase 03                       */
    SCH_code[schaltg05]                = "altg05";                SCH[schaltg05]                = 1;                                        /* Alternatieve realisatie toestaan fase 05                       */
    SCH_code[schaltg08]                = "altg08";                SCH[schaltg08]                = 1;                                        /* Alternatieve realisatie toestaan fase 08                       */
    SCH_code[schaltg09]                = "altg09";                SCH[schaltg09]                = 1;                                        /* Alternatieve realisatie toestaan fase 09                       */
    SCH_code[schaltg11]                = "altg11";                SCH[schaltg11]                = 1;                                        /* Alternatieve realisatie toestaan fase 11                       */
    SCH_code[schaltg21]                = "altg21";                SCH[schaltg21]                = 1;                                        /* Alternatieve realisatie toestaan fase 21                       */
    SCH_code[schaltg2232]              = "altg2232";              SCH[schaltg2232]              = 1;                                        /* Alternatieve realisatie toestaan fasen 22, 32                  */
    SCH_code[schaltg2434]              = "altg2434";              SCH[schaltg2434]              = 1;                                        /* Alternatieve realisatie toestaan fasen 24, 34                  */
    SCH_code[schaltg26]                = "altg26";                SCH[schaltg26]                = 1;                                        /* Alternatieve realisatie toestaan fase 26                       */
    SCH_code[schaltg28]                = "altg28";                SCH[schaltg28]                = 1;                                        /* Alternatieve realisatie toestaan fase 28                       */
    SCH_code[schaltg31]                = "altg31";                SCH[schaltg31]                = 1;                                        /* Alternatieve realisatie toestaan fase 31                       */
    SCH_code[schaltg3384]              = "altg3384";              SCH[schaltg3384]              = 1;                                        /* Alternatieve realisatie toestaan fasen 33, 84                  */
    SCH_code[schaltg38]                = "altg38";                SCH[schaltg38]                = 1;                                        /* Alternatieve realisatie toestaan fase 38                       */
    SCH_code[schaltg61]                = "altg61";                SCH[schaltg61]                = 1;                                        /* Alternatieve realisatie toestaan fase 61                       */
    SCH_code[schaltg62]                = "altg62";                SCH[schaltg62]                = 1;                                        /* Alternatieve realisatie toestaan fase 62                       */
    SCH_code[schaltg67]                = "altg67";                SCH[schaltg67]                = 1;                                        /* Alternatieve realisatie toestaan fase 67                       */
    SCH_code[schaltg68]                = "altg68";                SCH[schaltg68]                = 1;                                        /* Alternatieve realisatie toestaan fase 68                       */
    SCH_code[schaltg82]                = "altg82";                SCH[schaltg82]                = 1;                                        /* Alternatieve realisatie toestaan fase 82                       */
    SCH_code[schaltg81]                = "altg81";                SCH[schaltg81]                = 1;                                        /* Alternatieve realisatie toestaan fase 81                       */
    SCH_code[schwg02]                  = "wg02";                  SCH[schwg02]                  = 0;                                        /* Wachtstand groen fase 02                                       */
    SCH_code[schwg03]                  = "wg03";                  SCH[schwg03]                  = 0;                                        /* Wachtstand groen fase 03                                       */
    SCH_code[schwg05]                  = "wg05";                  SCH[schwg05]                  = 0;                                        /* Wachtstand groen fase 05                                       */
    SCH_code[schwg08]                  = "wg08";                  SCH[schwg08]                  = 0;                                        /* Wachtstand groen fase 08                                       */
    SCH_code[schwg09]                  = "wg09";                  SCH[schwg09]                  = 0;                                        /* Wachtstand groen fase 09                                       */
    SCH_code[schwg11]                  = "wg11";                  SCH[schwg11]                  = 0;                                        /* Wachtstand groen fase 11                                       */
    SCH_code[schwg21]                  = "wg21";                  SCH[schwg21]                  = 0;                                        /* Wachtstand groen fase 21                                       */
    SCH_code[schwg22]                  = "wg22";                  SCH[schwg22]                  = 0;                                        /* Wachtstand groen fase 22                                       */
    SCH_code[schwg24]                  = "wg24";                  SCH[schwg24]                  = 0;                                        /* Wachtstand groen fase 24                                       */
    SCH_code[schwg26]                  = "wg26";                  SCH[schwg26]                  = 0;                                        /* Wachtstand groen fase 26                                       */
    SCH_code[schwg28]                  = "wg28";                  SCH[schwg28]                  = 0;                                        /* Wachtstand groen fase 28                                       */
    SCH_code[schwg31]                  = "wg31";                  SCH[schwg31]                  = 0;                                        /* Wachtstand groen fase 31                                       */
    SCH_code[schwg32]                  = "wg32";                  SCH[schwg32]                  = 0;                                        /* Wachtstand groen fase 32                                       */
    SCH_code[schwg33]                  = "wg33";                  SCH[schwg33]                  = 0;                                        /* Wachtstand groen fase 33                                       */
    SCH_code[schwg34]                  = "wg34";                  SCH[schwg34]                  = 0;                                        /* Wachtstand groen fase 34                                       */
    SCH_code[schwg38]                  = "wg38";                  SCH[schwg38]                  = 0;                                        /* Wachtstand groen fase 38                                       */
    SCH_code[schwg61]                  = "wg61";                  SCH[schwg61]                  = 0;                                        /* Wachtstand groen fase 61                                       */
    SCH_code[schwg62]                  = "wg62";                  SCH[schwg62]                  = 0;                                        /* Wachtstand groen fase 62                                       */
    SCH_code[schwg67]                  = "wg67";                  SCH[schwg67]                  = 0;                                        /* Wachtstand groen fase 67                                       */
    SCH_code[schwg68]                  = "wg68";                  SCH[schwg68]                  = 0;                                        /* Wachtstand groen fase 68                                       */
    SCH_code[schwg84]                  = "wg84";                  SCH[schwg84]                  = 0;                                        /* Wachtstand groen fase 84                                       */
    SCH_code[schwg82]                  = "wg82";                  SCH[schwg82]                  = 0;                                        /* Wachtstand groen fase 82                                       */
    SCH_code[schwg81]                  = "wg81";                  SCH[schwg81]                  = 0;                                        /* Wachtstand groen fase 81                                       */
    SCH_code[schgs2232]                = "gs2232";                SCH[schgs2232]                = 1;                                        /* Schakelbare gelijkstart tussen fase 32 en 22                   */
    SCH_code[schgs2434]                = "gs2434";                SCH[schgs2434]                = 1;                                        /* Schakelbare gelijkstart tussen fase 34 en 24                   */
    SCH_code[schgs3384]                = "gs3384";                SCH[schgs3384]                = 1;                                        /* Schakelbare gelijkstart tussen fase 84 en 33                   */
    SCH_code[schlos32_1]               = "los32_1";               SCH[schlos32_1]               = 0;                                        /* Toestaan los realiseren fase 32                                */
    SCH_code[schlos32_2]               = "los32_2";               SCH[schlos32_2]               = 0;                                        /* Toestaan los realiseren fase 32                                */
    SCH_code[schlos31_1]               = "los31_1";               SCH[schlos31_1]               = 0;                                        /* Toestaan los realiseren fase 31                                */
    SCH_code[schlos31_2]               = "los31_2";               SCH[schlos31_2]               = 0;                                        /* Toestaan los realiseren fase 31                                */
    SCH_code[schlos34_1]               = "los34_1";               SCH[schlos34_1]               = 0;                                        /* Toestaan los realiseren fase 34                                */
    SCH_code[schlos34_2]               = "los34_2";               SCH[schlos34_2]               = 0;                                        /* Toestaan los realiseren fase 34                                */
    SCH_code[schlos33_1]               = "los33_1";               SCH[schlos33_1]               = 0;                                        /* Toestaan los realiseren fase 33                                */
    SCH_code[schlos33_2]               = "los33_2";               SCH[schlos33_2]               = 0;                                        /* Toestaan los realiseren fase 33                                */
    SCH_code[schgsbeidedkb]            = "gsbeidedkb";            SCH[schgsbeidedkb]            = 0;                                       

/* parameters */
/* ---------- */
    PRM_code[prmTDHstd02_1a]         = "TDHstd02_1a";         PRM[prmTDHstd02_1a]         = 999;  PRM_type[prmTDHstd02_1a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_1a                                                                              */
    PRM_code[prmspringverleng_02_1a] = "springverleng_02_1a"; PRM[prmspringverleng_02_1a] = 2;                                                /* Dyn. hiaattij instelling voor det. 02_1a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_1b]         = "TDHstd02_1b";         PRM[prmTDHstd02_1b]         = 999;  PRM_type[prmTDHstd02_1b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_1b                                                                              */
    PRM_code[prmspringverleng_02_1b] = "springverleng_02_1b"; PRM[prmspringverleng_02_1b] = 2;                                                /* Dyn. hiaattij instelling voor det. 02_1b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_2a]         = "TDHstd02_2a";         PRM[prmTDHstd02_2a]         = 999;  PRM_type[prmTDHstd02_2a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_2a                                                                              */
    PRM_code[prmspringverleng_02_2a] = "springverleng_02_2a"; PRM[prmspringverleng_02_2a] = 24;                                               /* Dyn. hiaattij instelling voor det. 02_2a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_2b]         = "TDHstd02_2b";         PRM[prmTDHstd02_2b]         = 999;  PRM_type[prmTDHstd02_2b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_2b                                                                              */
    PRM_code[prmspringverleng_02_2b] = "springverleng_02_2b"; PRM[prmspringverleng_02_2b] = 24;                                               /* Dyn. hiaattij instelling voor det. 02_2b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_3a]         = "TDHstd02_3a";         PRM[prmTDHstd02_3a]         = 999;  PRM_type[prmTDHstd02_3a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_3a                                                                              */
    PRM_code[prmspringverleng_02_3a] = "springverleng_02_3a"; PRM[prmspringverleng_02_3a] = 9;                                                /* Dyn. hiaattij instelling voor det. 02_3a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_3b]         = "TDHstd02_3b";         PRM[prmTDHstd02_3b]         = 999;  PRM_type[prmTDHstd02_3b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_3b                                                                              */
    PRM_code[prmspringverleng_02_3b] = "springverleng_02_3b"; PRM[prmspringverleng_02_3b] = 9;                                                /* Dyn. hiaattij instelling voor det. 02_3b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_4a]         = "TDHstd02_4a";         PRM[prmTDHstd02_4a]         = 999;  PRM_type[prmTDHstd02_4a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_4a                                                                              */
    PRM_code[prmspringverleng_02_4a] = "springverleng_02_4a"; PRM[prmspringverleng_02_4a] = 0;                                                /* Dyn. hiaattij instelling voor det. 02_4a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd02_4b]         = "TDHstd02_4b";         PRM[prmTDHstd02_4b]         = 999;  PRM_type[prmTDHstd02_4b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 02_4b                                                                              */
    PRM_code[prmspringverleng_02_4b] = "springverleng_02_4b"; PRM[prmspringverleng_02_4b] = 0;                                                /* Dyn. hiaattij instelling voor det. 02_4b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_1a]         = "TDHstd08_1a";         PRM[prmTDHstd08_1a]         = 999;  PRM_type[prmTDHstd08_1a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_1a                                                                              */
    PRM_code[prmspringverleng_08_1a] = "springverleng_08_1a"; PRM[prmspringverleng_08_1a] = 2;                                                /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_1b]         = "TDHstd08_1b";         PRM[prmTDHstd08_1b]         = 999;  PRM_type[prmTDHstd08_1b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_1b                                                                              */
    PRM_code[prmspringverleng_08_1b] = "springverleng_08_1b"; PRM[prmspringverleng_08_1b] = 2;                                                /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_2a]         = "TDHstd08_2a";         PRM[prmTDHstd08_2a]         = 999;  PRM_type[prmTDHstd08_2a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_2a                                                                              */
    PRM_code[prmspringverleng_08_2a] = "springverleng_08_2a"; PRM[prmspringverleng_08_2a] = 24;                                               /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_2b]         = "TDHstd08_2b";         PRM[prmTDHstd08_2b]         = 999;  PRM_type[prmTDHstd08_2b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_2b                                                                              */
    PRM_code[prmspringverleng_08_2b] = "springverleng_08_2b"; PRM[prmspringverleng_08_2b] = 24;                                               /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_3a]         = "TDHstd08_3a";         PRM[prmTDHstd08_3a]         = 999;  PRM_type[prmTDHstd08_3a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_3a                                                                              */
    PRM_code[prmspringverleng_08_3a] = "springverleng_08_3a"; PRM[prmspringverleng_08_3a] = 9;                                                /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_3b]         = "TDHstd08_3b";         PRM[prmTDHstd08_3b]         = 999;  PRM_type[prmTDHstd08_3b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_3b                                                                              */
    PRM_code[prmspringverleng_08_3b] = "springverleng_08_3b"; PRM[prmspringverleng_08_3b] = 9;                                                /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_4a]         = "TDHstd08_4a";         PRM[prmTDHstd08_4a]         = 999;  PRM_type[prmTDHstd08_4a]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_4a                                                                              */
    PRM_code[prmspringverleng_08_4a] = "springverleng_08_4a"; PRM[prmspringverleng_08_4a] = 0;                                                /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    PRM_code[prmTDHstd08_4b]         = "TDHstd08_4b";         PRM[prmTDHstd08_4b]         = 999;  PRM_type[prmTDHstd08_4b]         = TE_type; /* Onthouden oorspronkelijke TDH voor detector 08_4b                                                                              */
    PRM_code[prmspringverleng_08_4b] = "springverleng_08_4b"; PRM[prmspringverleng_08_4b] = 0;                                                /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    PRM_code[prmTDHstd09_1]          = "TDHstd09_1";          PRM[prmTDHstd09_1]          = 999;  PRM_type[prmTDHstd09_1]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 09_1                                                                               */
    PRM_code[prmspringverleng_09_1]  = "springverleng_09_1";  PRM[prmspringverleng_09_1]  = 2;                                                /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd09_2]          = "TDHstd09_2";          PRM[prmTDHstd09_2]          = 999;  PRM_type[prmTDHstd09_2]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 09_2                                                                               */
    PRM_code[prmspringverleng_09_2]  = "springverleng_09_2";  PRM[prmspringverleng_09_2]  = 24;                                               /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd09_3]          = "TDHstd09_3";          PRM[prmTDHstd09_3]          = 999;  PRM_type[prmTDHstd09_3]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 09_3                                                                               */
    PRM_code[prmspringverleng_09_3]  = "springverleng_09_3";  PRM[prmspringverleng_09_3]  = 9;                                                /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd11_1]          = "TDHstd11_1";          PRM[prmTDHstd11_1]          = 999;  PRM_type[prmTDHstd11_1]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 11_1                                                                               */
    PRM_code[prmspringverleng_11_1]  = "springverleng_11_1";  PRM[prmspringverleng_11_1]  = 2;                                                /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd11_2]          = "TDHstd11_2";          PRM[prmTDHstd11_2]          = 999;  PRM_type[prmTDHstd11_2]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 11_2                                                                               */
    PRM_code[prmspringverleng_11_2]  = "springverleng_11_2";  PRM[prmspringverleng_11_2]  = 24;                                               /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd11_3]          = "TDHstd11_3";          PRM[prmTDHstd11_3]          = 999;  PRM_type[prmTDHstd11_3]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 11_3                                                                               */
    PRM_code[prmspringverleng_11_3]  = "springverleng_11_3";  PRM[prmspringverleng_11_3]  = 9;                                                /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    PRM_code[prmTDHstd11_4]          = "TDHstd11_4";          PRM[prmTDHstd11_4]          = 999;  PRM_type[prmTDHstd11_4]          = TE_type; /* Onthouden oorspronkelijke TDH voor detector 11_4                                                                               */
    PRM_code[prmspringverleng_11_4]  = "springverleng_11_4";  PRM[prmspringverleng_11_4]  = 0;                                                /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    PRM_code[prmttxconfidence15]     = "ttxconfidence15";     PRM[prmttxconfidence15]     = 30;                                              
    PRM_code[prmlatencyminendsg]     = "latencyminendsg";     PRM[prmlatencyminendsg]     = 3;    PRM_type[prmlatencyminendsg]     = TE_type;
    PRM_code[prmfb]                  = "fb";                  PRM[prmfb]                  = 240;  PRM_type[prmfb]                  = TS_type; /* Instelling fasebewaking                                                                                                        */
    PRM_code[prmxx]                  = "xx";                  PRM[prmxx]                  = 1;                                                /* Versiebeheer xx                                                                                                                */
    PRM_code[prmyy]                  = "yy";                  PRM[prmyy]                  = 9;                                                /* Versiebeheer yy                                                                                                                */
    PRM_code[prmzz]                  = "zz";                  PRM[prmzz]                  = 0;                                                /* Versiebeheer zz                                                                                                                */
    PRM_code[prmovmextragroen_02]    = "ovmextragroen_02";    PRM[prmovmextragroen_02]    = 0;    PRM_type[prmovmextragroen_02]    = TE_type;
    PRM_code[prmovmmindergroen_02]   = "ovmmindergroen_02";   PRM[prmovmmindergroen_02]   = 0;    PRM_type[prmovmmindergroen_02]   = TE_type;
    PRM_code[prmovmextragroen_03]    = "ovmextragroen_03";    PRM[prmovmextragroen_03]    = 0;    PRM_type[prmovmextragroen_03]    = TE_type;
    PRM_code[prmovmmindergroen_03]   = "ovmmindergroen_03";   PRM[prmovmmindergroen_03]   = 0;    PRM_type[prmovmmindergroen_03]   = TE_type;
    PRM_code[prmovmextragroen_05]    = "ovmextragroen_05";    PRM[prmovmextragroen_05]    = 0;    PRM_type[prmovmextragroen_05]    = TE_type;
    PRM_code[prmovmmindergroen_05]   = "ovmmindergroen_05";   PRM[prmovmmindergroen_05]   = 0;    PRM_type[prmovmmindergroen_05]   = TE_type;
    PRM_code[prmovmextragroen_08]    = "ovmextragroen_08";    PRM[prmovmextragroen_08]    = 0;    PRM_type[prmovmextragroen_08]    = TE_type;
    PRM_code[prmovmmindergroen_08]   = "ovmmindergroen_08";   PRM[prmovmmindergroen_08]   = 0;    PRM_type[prmovmmindergroen_08]   = TE_type;
    PRM_code[prmovmextragroen_09]    = "ovmextragroen_09";    PRM[prmovmextragroen_09]    = 0;    PRM_type[prmovmextragroen_09]    = TE_type;
    PRM_code[prmovmmindergroen_09]   = "ovmmindergroen_09";   PRM[prmovmmindergroen_09]   = 0;    PRM_type[prmovmmindergroen_09]   = TE_type;
    PRM_code[prmovmextragroen_11]    = "ovmextragroen_11";    PRM[prmovmextragroen_11]    = 0;    PRM_type[prmovmextragroen_11]    = TE_type;
    PRM_code[prmovmmindergroen_11]   = "ovmmindergroen_11";   PRM[prmovmmindergroen_11]   = 0;    PRM_type[prmovmmindergroen_11]   = TE_type;
    PRM_code[prmovmextragroen_61]    = "ovmextragroen_61";    PRM[prmovmextragroen_61]    = 0;    PRM_type[prmovmextragroen_61]    = TE_type;
    PRM_code[prmovmmindergroen_61]   = "ovmmindergroen_61";   PRM[prmovmmindergroen_61]   = 0;    PRM_type[prmovmmindergroen_61]   = TE_type;
    PRM_code[prmovmextragroen_62]    = "ovmextragroen_62";    PRM[prmovmextragroen_62]    = 0;    PRM_type[prmovmextragroen_62]    = TE_type;
    PRM_code[prmovmmindergroen_62]   = "ovmmindergroen_62";   PRM[prmovmmindergroen_62]   = 0;    PRM_type[prmovmmindergroen_62]   = TE_type;
    PRM_code[prmovmextragroen_67]    = "ovmextragroen_67";    PRM[prmovmextragroen_67]    = 0;    PRM_type[prmovmextragroen_67]    = TE_type;
    PRM_code[prmovmmindergroen_67]   = "ovmmindergroen_67";   PRM[prmovmmindergroen_67]   = 0;    PRM_type[prmovmmindergroen_67]   = TE_type;
    PRM_code[prmovmextragroen_68]    = "ovmextragroen_68";    PRM[prmovmextragroen_68]    = 0;    PRM_type[prmovmextragroen_68]    = TE_type;
    PRM_code[prmovmmindergroen_68]   = "ovmmindergroen_68";   PRM[prmovmmindergroen_68]   = 0;    PRM_type[prmovmmindergroen_68]   = TE_type;
    PRM_code[prmaltb02]              = "altb02";              PRM[prmaltb02]              = 15;                                               /* Alternatief per blok voor fase 02                                                                                              */
    PRM_code[prmaltb03]              = "altb03";              PRM[prmaltb03]              = 15;                                               /* Alternatief per blok voor fase 03                                                                                              */
    PRM_code[prmaltb05]              = "altb05";              PRM[prmaltb05]              = 15;                                               /* Alternatief per blok voor fase 05                                                                                              */
    PRM_code[prmaltb08]              = "altb08";              PRM[prmaltb08]              = 15;                                               /* Alternatief per blok voor fase 08                                                                                              */
    PRM_code[prmaltb09]              = "altb09";              PRM[prmaltb09]              = 15;                                               /* Alternatief per blok voor fase 09                                                                                              */
    PRM_code[prmaltb11]              = "altb11";              PRM[prmaltb11]              = 15;                                               /* Alternatief per blok voor fase 11                                                                                              */
    PRM_code[prmaltb21]              = "altb21";              PRM[prmaltb21]              = 1023;                                             /* Alternatief per blok voor fase 21                                                                                              */
    PRM_code[prmaltb22]              = "altb22";              PRM[prmaltb22]              = 15;                                               /* Alternatief per blok voor fase 22                                                                                              */
    PRM_code[prmaltb24]              = "altb24";              PRM[prmaltb24]              = 15;                                               /* Alternatief per blok voor fase 24                                                                                              */
    PRM_code[prmaltb26]              = "altb26";              PRM[prmaltb26]              = 1023;                                             /* Alternatief per blok voor fase 26                                                                                              */
    PRM_code[prmaltb28]              = "altb28";              PRM[prmaltb28]              = 15;                                               /* Alternatief per blok voor fase 28                                                                                              */
    PRM_code[prmaltb31]              = "altb31";              PRM[prmaltb31]              = 15;                                               /* Alternatief per blok voor fase 31                                                                                              */
    PRM_code[prmaltb32]              = "altb32";              PRM[prmaltb32]              = 15;                                               /* Alternatief per blok voor fase 32                                                                                              */
    PRM_code[prmaltb33]              = "altb33";              PRM[prmaltb33]              = 15;                                               /* Alternatief per blok voor fase 33                                                                                              */
    PRM_code[prmaltb34]              = "altb34";              PRM[prmaltb34]              = 15;                                               /* Alternatief per blok voor fase 34                                                                                              */
    PRM_code[prmaltb38]              = "altb38";              PRM[prmaltb38]              = 15;                                               /* Alternatief per blok voor fase 38                                                                                              */
    PRM_code[prmaltb61]              = "altb61";              PRM[prmaltb61]              = 15;                                               /* Alternatief per blok voor fase 61                                                                                              */
    PRM_code[prmaltb62]              = "altb62";              PRM[prmaltb62]              = 15;                                               /* Alternatief per blok voor fase 62                                                                                              */
    PRM_code[prmaltb67]              = "altb67";              PRM[prmaltb67]              = 15;                                               /* Alternatief per blok voor fase 67                                                                                              */
    PRM_code[prmaltb68]              = "altb68";              PRM[prmaltb68]              = 15;                                               /* Alternatief per blok voor fase 68                                                                                              */
    PRM_code[prmaltb84]              = "altb84";              PRM[prmaltb84]              = 15;                                               /* Alternatief per blok voor fase 84                                                                                              */
    PRM_code[prmaltb82]              = "altb82";              PRM[prmaltb82]              = 1023;                                             /* Alternatief per blok voor fase 82                                                                                              */
    PRM_code[prmaltb81]              = "altb81";              PRM[prmaltb81]              = 1023;                                             /* Alternatief per blok voor fase 81                                                                                              */
    PRM_code[prmda02_1a]             = "da02_1a";             PRM[prmda02_1a]             = 1;                                                /* Aanvraag functie voor detector 02_1a                                                                                           */
    PRM_code[prmda02_1b]             = "da02_1b";             PRM[prmda02_1b]             = 1;                                                /* Aanvraag functie voor detector 02_1b                                                                                           */
    PRM_code[prmda02_2a]             = "da02_2a";             PRM[prmda02_2a]             = 1;                                                /* Aanvraag functie voor detector 02_2a                                                                                           */
    PRM_code[prmda02_2b]             = "da02_2b";             PRM[prmda02_2b]             = 1;                                                /* Aanvraag functie voor detector 02_2b                                                                                           */
    PRM_code[prmda02_3a]             = "da02_3a";             PRM[prmda02_3a]             = 1;                                                /* Aanvraag functie voor detector 02_3a                                                                                           */
    PRM_code[prmda02_3b]             = "da02_3b";             PRM[prmda02_3b]             = 1;                                                /* Aanvraag functie voor detector 02_3b                                                                                           */
    PRM_code[prmda02_4a]             = "da02_4a";             PRM[prmda02_4a]             = 2;                                                /* Aanvraag functie voor detector 02_4a                                                                                           */
    PRM_code[prmda02_4b]             = "da02_4b";             PRM[prmda02_4b]             = 2;                                                /* Aanvraag functie voor detector 02_4b                                                                                           */
    PRM_code[prmda03_1]              = "da03_1";              PRM[prmda03_1]              = 1;                                                /* Aanvraag functie voor detector 03_1                                                                                            */
    PRM_code[prmda03_2]              = "da03_2";              PRM[prmda03_2]              = 1;                                                /* Aanvraag functie voor detector 03_2                                                                                            */
    PRM_code[prmda05_1]              = "da05_1";              PRM[prmda05_1]              = 1;                                                /* Aanvraag functie voor detector 05_1                                                                                            */
    PRM_code[prmda05_2]              = "da05_2";              PRM[prmda05_2]              = 1;                                                /* Aanvraag functie voor detector 05_2                                                                                            */
    PRM_code[prmda08_1a]             = "da08_1a";             PRM[prmda08_1a]             = 1;                                                /* Aanvraag functie voor detector 08_1a                                                                                           */
    PRM_code[prmda08_1b]             = "da08_1b";             PRM[prmda08_1b]             = 1;                                                /* Aanvraag functie voor detector 08_1b                                                                                           */
    PRM_code[prmda08_2a]             = "da08_2a";             PRM[prmda08_2a]             = 1;                                                /* Aanvraag functie voor detector 08_2a                                                                                           */
    PRM_code[prmda08_2b]             = "da08_2b";             PRM[prmda08_2b]             = 1;                                                /* Aanvraag functie voor detector 08_2b                                                                                           */
    PRM_code[prmda08_3a]             = "da08_3a";             PRM[prmda08_3a]             = 1;                                                /* Aanvraag functie voor detector 08_3a                                                                                           */
    PRM_code[prmda08_3b]             = "da08_3b";             PRM[prmda08_3b]             = 1;                                                /* Aanvraag functie voor detector 08_3b                                                                                           */
    PRM_code[prmda08_4a]             = "da08_4a";             PRM[prmda08_4a]             = 2;                                                /* Aanvraag functie voor detector 08_4a                                                                                           */
    PRM_code[prmda08_4b]             = "da08_4b";             PRM[prmda08_4b]             = 2;                                                /* Aanvraag functie voor detector 08_4b                                                                                           */
    PRM_code[prmda09_1]              = "da09_1";              PRM[prmda09_1]              = 1;                                                /* Aanvraag functie voor detector 09_1                                                                                            */
    PRM_code[prmda09_2]              = "da09_2";              PRM[prmda09_2]              = 1;                                                /* Aanvraag functie voor detector 09_2                                                                                            */
    PRM_code[prmda09_3]              = "da09_3";              PRM[prmda09_3]              = 1;                                                /* Aanvraag functie voor detector 09_3                                                                                            */
    PRM_code[prmda11_1]              = "da11_1";              PRM[prmda11_1]              = 1;                                                /* Aanvraag functie voor detector 11_1                                                                                            */
    PRM_code[prmda11_2]              = "da11_2";              PRM[prmda11_2]              = 1;                                                /* Aanvraag functie voor detector 11_2                                                                                            */
    PRM_code[prmda11_3]              = "da11_3";              PRM[prmda11_3]              = 1;                                                /* Aanvraag functie voor detector 11_3                                                                                            */
    PRM_code[prmda11_4]              = "da11_4";              PRM[prmda11_4]              = 2;                                                /* Aanvraag functie voor detector 11_4                                                                                            */
    PRM_code[prmda211]               = "da211";               PRM[prmda211]               = 1;                                                /* Aanvraag functie voor detector 211                                                                                             */
    PRM_code[prmdak21]               = "dak21";               PRM[prmdak21]               = 2;                                                /* Aanvraag functie voor detector k21                                                                                             */
    PRM_code[prmda22_1]              = "da22_1";              PRM[prmda22_1]              = 1;                                                /* Aanvraag functie voor detector 22_1                                                                                            */
    PRM_code[prmdak22]               = "dak22";               PRM[prmdak22]               = 2;                                                /* Aanvraag functie voor detector k22                                                                                             */
    PRM_code[prmda24_1]              = "da24_1";              PRM[prmda24_1]              = 1;                                                /* Aanvraag functie voor detector 24_1                                                                                            */
    PRM_code[prmda24_2]              = "da24_2";              PRM[prmda24_2]              = 0;                                                /* Aanvraag functie voor detector 24_2                                                                                            */
    PRM_code[prmda24_3]              = "da24_3";              PRM[prmda24_3]              = 0;                                                /* Aanvraag functie voor detector 24_3                                                                                            */
    PRM_code[prmdak24]               = "dak24";               PRM[prmdak24]               = 2;                                                /* Aanvraag functie voor detector k24                                                                                             */
    PRM_code[prmda261]               = "da261";               PRM[prmda261]               = 1;                                                /* Aanvraag functie voor detector 261                                                                                             */
    PRM_code[prmdak26]               = "dak26";               PRM[prmdak26]               = 2;                                                /* Aanvraag functie voor detector k26                                                                                             */
    PRM_code[prmda28_1]              = "da28_1";              PRM[prmda28_1]              = 1;                                                /* Aanvraag functie voor detector 28_1                                                                                            */
    PRM_code[prmda28_2]              = "da28_2";              PRM[prmda28_2]              = 2;                                                /* Aanvraag functie voor detector 28_2                                                                                            */
    PRM_code[prmdak28]               = "dak28";               PRM[prmdak28]               = 2;                                                /* Aanvraag functie voor detector k28                                                                                             */
    PRM_code[prmdak31a]              = "dak31a";              PRM[prmdak31a]              = 3;                                                /* Aanvraag functie voor detector k31a                                                                                            */
    PRM_code[prmdak31b]              = "dak31b";              PRM[prmdak31b]              = 3;                                                /* Aanvraag functie voor detector k31b                                                                                            */
    PRM_code[prmdak32a]              = "dak32a";              PRM[prmdak32a]              = 3;                                                /* Aanvraag functie voor detector k32a                                                                                            */
    PRM_code[prmdak32b]              = "dak32b";              PRM[prmdak32b]              = 3;                                                /* Aanvraag functie voor detector k32b                                                                                            */
    PRM_code[prmdak33a]              = "dak33a";              PRM[prmdak33a]              = 3;                                                /* Aanvraag functie voor detector k33a                                                                                            */
    PRM_code[prmdak33b]              = "dak33b";              PRM[prmdak33b]              = 3;                                                /* Aanvraag functie voor detector k33b                                                                                            */
    PRM_code[prmdak34a]              = "dak34a";              PRM[prmdak34a]              = 3;                                                /* Aanvraag functie voor detector k34a                                                                                            */
    PRM_code[prmdak34b]              = "dak34b";              PRM[prmdak34b]              = 3;                                                /* Aanvraag functie voor detector k34b                                                                                            */
    PRM_code[prmdak38a]              = "dak38a";              PRM[prmdak38a]              = 3;                                                /* Aanvraag functie voor detector k38a                                                                                            */
    PRM_code[prmdak38b]              = "dak38b";              PRM[prmdak38b]              = 3;                                                /* Aanvraag functie voor detector k38b                                                                                            */
    PRM_code[prmda61_1]              = "da61_1";              PRM[prmda61_1]              = 1;                                                /* Aanvraag functie voor detector 61_1                                                                                            */
    PRM_code[prmda61_2]              = "da61_2";              PRM[prmda61_2]              = 1;                                                /* Aanvraag functie voor detector 61_2                                                                                            */
    PRM_code[prmda62_1a]             = "da62_1a";             PRM[prmda62_1a]             = 1;                                                /* Aanvraag functie voor detector 62_1a                                                                                           */
    PRM_code[prmda62_1b]             = "da62_1b";             PRM[prmda62_1b]             = 1;                                                /* Aanvraag functie voor detector 62_1b                                                                                           */
    PRM_code[prmda62_2a]             = "da62_2a";             PRM[prmda62_2a]             = 1;                                                /* Aanvraag functie voor detector 62_2a                                                                                           */
    PRM_code[prmda62_2b]             = "da62_2b";             PRM[prmda62_2b]             = 1;                                                /* Aanvraag functie voor detector 62_2b                                                                                           */
    PRM_code[prmda67_1]              = "da67_1";              PRM[prmda67_1]              = 1;                                                /* Aanvraag functie voor detector 67_1                                                                                            */
    PRM_code[prmda67_2]              = "da67_2";              PRM[prmda67_2]              = 1;                                                /* Aanvraag functie voor detector 67_2                                                                                            */
    PRM_code[prmda68_1a]             = "da68_1a";             PRM[prmda68_1a]             = 1;                                                /* Aanvraag functie voor detector 68_1a                                                                                           */
    PRM_code[prmda68_1b]             = "da68_1b";             PRM[prmda68_1b]             = 1;                                                /* Aanvraag functie voor detector 68_1b                                                                                           */
    PRM_code[prmda68_2a]             = "da68_2a";             PRM[prmda68_2a]             = 1;                                                /* Aanvraag functie voor detector 68_2a                                                                                           */
    PRM_code[prmda68_2b]             = "da68_2b";             PRM[prmda68_2b]             = 1;                                                /* Aanvraag functie voor detector 68_2b                                                                                           */
    PRM_code[prmda68_9a]             = "da68_9a";             PRM[prmda68_9a]             = 0;                                                /* Aanvraag functie voor detector 68_9a                                                                                           */
    PRM_code[prmda68_9b]             = "da68_9b";             PRM[prmda68_9b]             = 0;                                                /* Aanvraag functie voor detector 68_9b                                                                                           */
    PRM_code[prmda84_1]              = "da84_1";              PRM[prmda84_1]              = 1;                                                /* Aanvraag functie voor detector 84_1                                                                                            */
    PRM_code[prmdak84]               = "dak84";               PRM[prmdak84]               = 2;                                                /* Aanvraag functie voor detector k84                                                                                             */
    PRM_code[prmda82_1]              = "da82_1";              PRM[prmda82_1]              = 1;                                                /* Aanvraag functie voor detector 82_1                                                                                            */
    PRM_code[prmdak82]               = "dak82";               PRM[prmdak82]               = 2;                                                /* Aanvraag functie voor detector k82                                                                                             */
    PRM_code[prmda81_1]              = "da81_1";              PRM[prmda81_1]              = 1;                                                /* Aanvraag functie voor detector 81_1                                                                                            */
    PRM_code[prmdak81]               = "dak81";               PRM[prmdak81]               = 2;                                                /* Aanvraag functie voor detector k81                                                                                             */
    PRM_code[prmmk02_1a]             = "mk02_1a";             PRM[prmmk02_1a]             = 1;                                                /* Meetkriterium type voor detector 02_1a                                                                                         */
    PRM_code[prmmk02_1b]             = "mk02_1b";             PRM[prmmk02_1b]             = 1;                                                /* Meetkriterium type voor detector 02_1b                                                                                         */
    PRM_code[prmmk02_2a]             = "mk02_2a";             PRM[prmmk02_2a]             = 3;                                                /* Meetkriterium type voor detector 02_2a                                                                                         */
    PRM_code[prmmk02_2b]             = "mk02_2b";             PRM[prmmk02_2b]             = 7;                                                /* Meetkriterium type voor detector 02_2b                                                                                         */
    PRM_code[prmmk02_3a]             = "mk02_3a";             PRM[prmmk02_3a]             = 3;                                                /* Meetkriterium type voor detector 02_3a                                                                                         */
    PRM_code[prmmk02_3b]             = "mk02_3b";             PRM[prmmk02_3b]             = 7;                                                /* Meetkriterium type voor detector 02_3b                                                                                         */
    PRM_code[prmmk02_4a]             = "mk02_4a";             PRM[prmmk02_4a]             = 3;                                                /* Meetkriterium type voor detector 02_4a                                                                                         */
    PRM_code[prmmk02_4b]             = "mk02_4b";             PRM[prmmk02_4b]             = 7;                                                /* Meetkriterium type voor detector 02_4b                                                                                         */
    PRM_code[prmmk03_1]              = "mk03_1";              PRM[prmmk03_1]              = 1;                                                /* Meetkriterium type voor detector 03_1                                                                                          */
    PRM_code[prmmk03_2]              = "mk03_2";              PRM[prmmk03_2]              = 3;                                                /* Meetkriterium type voor detector 03_2                                                                                          */
    PRM_code[prmmk05_1]              = "mk05_1";              PRM[prmmk05_1]              = 1;                                                /* Meetkriterium type voor detector 05_1                                                                                          */
    PRM_code[prmmk05_2]              = "mk05_2";              PRM[prmmk05_2]              = 3;                                                /* Meetkriterium type voor detector 05_2                                                                                          */
    PRM_code[prmmk08_1a]             = "mk08_1a";             PRM[prmmk08_1a]             = 1;                                                /* Meetkriterium type voor detector 08_1a                                                                                         */
    PRM_code[prmmk08_1b]             = "mk08_1b";             PRM[prmmk08_1b]             = 1;                                                /* Meetkriterium type voor detector 08_1b                                                                                         */
    PRM_code[prmmk08_2a]             = "mk08_2a";             PRM[prmmk08_2a]             = 3;                                                /* Meetkriterium type voor detector 08_2a                                                                                         */
    PRM_code[prmmk08_2b]             = "mk08_2b";             PRM[prmmk08_2b]             = 7;                                                /* Meetkriterium type voor detector 08_2b                                                                                         */
    PRM_code[prmmk08_3a]             = "mk08_3a";             PRM[prmmk08_3a]             = 3;                                                /* Meetkriterium type voor detector 08_3a                                                                                         */
    PRM_code[prmmk08_3b]             = "mk08_3b";             PRM[prmmk08_3b]             = 7;                                                /* Meetkriterium type voor detector 08_3b                                                                                         */
    PRM_code[prmmk08_4a]             = "mk08_4a";             PRM[prmmk08_4a]             = 3;                                                /* Meetkriterium type voor detector 08_4a                                                                                         */
    PRM_code[prmmk08_4b]             = "mk08_4b";             PRM[prmmk08_4b]             = 7;                                                /* Meetkriterium type voor detector 08_4b                                                                                         */
    PRM_code[prmmk09_1]              = "mk09_1";              PRM[prmmk09_1]              = 1;                                                /* Meetkriterium type voor detector 09_1                                                                                          */
    PRM_code[prmmk09_2]              = "mk09_2";              PRM[prmmk09_2]              = 3;                                                /* Meetkriterium type voor detector 09_2                                                                                          */
    PRM_code[prmmk09_3]              = "mk09_3";              PRM[prmmk09_3]              = 3;                                                /* Meetkriterium type voor detector 09_3                                                                                          */
    PRM_code[prmmk11_1]              = "mk11_1";              PRM[prmmk11_1]              = 1;                                                /* Meetkriterium type voor detector 11_1                                                                                          */
    PRM_code[prmmk11_2]              = "mk11_2";              PRM[prmmk11_2]              = 3;                                                /* Meetkriterium type voor detector 11_2                                                                                          */
    PRM_code[prmmk11_3]              = "mk11_3";              PRM[prmmk11_3]              = 3;                                                /* Meetkriterium type voor detector 11_3                                                                                          */
    PRM_code[prmmk11_4]              = "mk11_4";              PRM[prmmk11_4]              = 3;                                                /* Meetkriterium type voor detector 11_4                                                                                          */
    PRM_code[prmmk211]               = "mk211";               PRM[prmmk211]               = 1;                                                /* Meetkriterium type voor detector 211                                                                                           */
    PRM_code[prmmk22_1]              = "mk22_1";              PRM[prmmk22_1]              = 1;                                                /* Meetkriterium type voor detector 22_1                                                                                          */
    PRM_code[prmmk24_1]              = "mk24_1";              PRM[prmmk24_1]              = 1;                                                /* Meetkriterium type voor detector 24_1                                                                                          */
    PRM_code[prmmk24_2]              = "mk24_2";              PRM[prmmk24_2]              = 0;                                                /* Meetkriterium type voor detector 24_2                                                                                          */
    PRM_code[prmmk24_3]              = "mk24_3";              PRM[prmmk24_3]              = 0;                                                /* Meetkriterium type voor detector 24_3                                                                                          */
    PRM_code[prmmk261]               = "mk261";               PRM[prmmk261]               = 1;                                                /* Meetkriterium type voor detector 261                                                                                           */
    PRM_code[prmmk28_1]              = "mk28_1";              PRM[prmmk28_1]              = 1;                                                /* Meetkriterium type voor detector 28_1                                                                                          */
    PRM_code[prmmk28_2]              = "mk28_2";              PRM[prmmk28_2]              = 3;                                                /* Meetkriterium type voor detector 28_2                                                                                          */
    PRM_code[prmmk61_1]              = "mk61_1";              PRM[prmmk61_1]              = 1;                                                /* Meetkriterium type voor detector 61_1                                                                                          */
    PRM_code[prmmk61_2]              = "mk61_2";              PRM[prmmk61_2]              = 3;                                                /* Meetkriterium type voor detector 61_2                                                                                          */
    PRM_code[prmmk62_1a]             = "mk62_1a";             PRM[prmmk62_1a]             = 1;                                                /* Meetkriterium type voor detector 62_1a                                                                                         */
    PRM_code[prmmk62_1b]             = "mk62_1b";             PRM[prmmk62_1b]             = 1;                                                /* Meetkriterium type voor detector 62_1b                                                                                         */
    PRM_code[prmmk62_2a]             = "mk62_2a";             PRM[prmmk62_2a]             = 3;                                                /* Meetkriterium type voor detector 62_2a                                                                                         */
    PRM_code[prmmk62_2b]             = "mk62_2b";             PRM[prmmk62_2b]             = 7;                                                /* Meetkriterium type voor detector 62_2b                                                                                         */
    PRM_code[prmmk67_1]              = "mk67_1";              PRM[prmmk67_1]              = 1;                                                /* Meetkriterium type voor detector 67_1                                                                                          */
    PRM_code[prmmk67_2]              = "mk67_2";              PRM[prmmk67_2]              = 3;                                                /* Meetkriterium type voor detector 67_2                                                                                          */
    PRM_code[prmmk68_1a]             = "mk68_1a";             PRM[prmmk68_1a]             = 1;                                                /* Meetkriterium type voor detector 68_1a                                                                                         */
    PRM_code[prmmk68_1b]             = "mk68_1b";             PRM[prmmk68_1b]             = 1;                                                /* Meetkriterium type voor detector 68_1b                                                                                         */
    PRM_code[prmmk68_2a]             = "mk68_2a";             PRM[prmmk68_2a]             = 3;                                                /* Meetkriterium type voor detector 68_2a                                                                                         */
    PRM_code[prmmk68_2b]             = "mk68_2b";             PRM[prmmk68_2b]             = 7;                                                /* Meetkriterium type voor detector 68_2b                                                                                         */
    PRM_code[prmmk68_9a]             = "mk68_9a";             PRM[prmmk68_9a]             = 0;                                                /* Meetkriterium type voor detector 68_9a                                                                                         */
    PRM_code[prmmk68_9b]             = "mk68_9b";             PRM[prmmk68_9b]             = 4;                                                /* Meetkriterium type voor detector 68_9b                                                                                         */
    PRM_code[prmmk84_1]              = "mk84_1";              PRM[prmmk84_1]              = 1;                                                /* Meetkriterium type voor detector 84_1                                                                                          */
    PRM_code[prmmk82_1]              = "mk82_1";              PRM[prmmk82_1]              = 1;                                                /* Meetkriterium type voor detector 82_1                                                                                          */
    PRM_code[prmmk81_1]              = "mk81_1";              PRM[prmmk81_1]              = 1;                                                /* Meetkriterium type voor detector 81_1                                                                                          */
    PRM_code[prmperc02]              = "perc02";              PRM[prmperc02]              = 65;                                               /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc03]              = "perc03";              PRM[prmperc03]              = 65;                                               /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc05]              = "perc05";              PRM[prmperc05]              = 65;                                               /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc08]              = "perc08";              PRM[prmperc08]              = 65;                                               /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc09]              = "perc09";              PRM[prmperc09]              = 65;                                               /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc11]              = "perc11";              PRM[prmperc11]              = 65;                                               /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc61]              = "perc61";              PRM[prmperc61]              = 65;                                               /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc62]              = "perc62";              PRM[prmperc62]              = 65;                                               /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc67]              = "perc67";              PRM[prmperc67]              = 65;                                               /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc68]              = "perc68";              PRM[prmperc68]              = 65;                                               /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    PRM_code[prmfpercFile68af08]     = "fpercFile68af08";     PRM[prmfpercFile68af08]     = 50;                                               /* Doseerpercentage 08                                                                                                            */
    PRM_code[prmfpercFile68af11]     = "fpercFile68af11";     PRM[prmfpercFile68af11]     = 50;                                               /* Doseerpercentage 11                                                                                                            */
    PRM_code[prmtypema0261]          = "typema0261";          PRM[prmtypema0261]          = 2;                                                /* Type meeaanvraag van 02 naar 61                                                                                                */
    PRM_code[prmtypema0262]          = "typema0262";          PRM[prmtypema0262]          = 2;                                                /* Type meeaanvraag van 02 naar 62                                                                                                */
    PRM_code[prmtypema0521]          = "typema0521";          PRM[prmtypema0521]          = 1;                                                /* Type meeaanvraag van 05 naar 21                                                                                                */
    PRM_code[prmtypema0522]          = "typema0522";          PRM[prmtypema0522]          = 1;                                                /* Type meeaanvraag van 05 naar 22                                                                                                */
    PRM_code[prmtypema0532]          = "typema0532";          PRM[prmtypema0532]          = 1;                                                /* Type meeaanvraag van 05 naar 32                                                                                                */
    PRM_code[prmtypema0868]          = "typema0868";          PRM[prmtypema0868]          = 2;                                                /* Type meeaanvraag van 08 naar 68                                                                                                */
    PRM_code[prmtypema1126]          = "typema1126";          PRM[prmtypema1126]          = 1;                                                /* Type meeaanvraag van 11 naar 26                                                                                                */
    PRM_code[prmtypema2221]          = "typema2221";          PRM[prmtypema2221]          = 1;                                                /* Type meeaanvraag van 22 naar 21                                                                                                */
    PRM_code[prmtypema3122]          = "typema3122";          PRM[prmtypema3122]          = 2;                                                /* Type meeaanvraag van 31 naar 22                                                                                                */
    PRM_code[prmtypema3132]          = "typema3132";          PRM[prmtypema3132]          = 1;                                                /* Type meeaanvraag van 31 naar 32                                                                                                */
    PRM_code[prmtypema3222]          = "typema3222";          PRM[prmtypema3222]          = 2;                                                /* Type meeaanvraag van 32 naar 22                                                                                                */
    PRM_code[prmtypema3231]          = "typema3231";          PRM[prmtypema3231]          = 1;                                                /* Type meeaanvraag van 32 naar 31                                                                                                */
    PRM_code[prmtypema3324]          = "typema3324";          PRM[prmtypema3324]          = 2;                                                /* Type meeaanvraag van 33 naar 24                                                                                                */
    PRM_code[prmtypema3334]          = "typema3334";          PRM[prmtypema3334]          = 1;                                                /* Type meeaanvraag van 33 naar 34                                                                                                */
    PRM_code[prmtypema3384]          = "typema3384";          PRM[prmtypema3384]          = 2;                                                /* Type meeaanvraag van 33 naar 84                                                                                                */
    PRM_code[prmtypema3424]          = "typema3424";          PRM[prmtypema3424]          = 2;                                                /* Type meeaanvraag van 34 naar 24                                                                                                */
    PRM_code[prmtypema3433]          = "typema3433";          PRM[prmtypema3433]          = 1;                                                /* Type meeaanvraag van 34 naar 33                                                                                                */
    PRM_code[prmtypema3484]          = "typema3484";          PRM[prmtypema3484]          = 2;                                                /* Type meeaanvraag van 34 naar 84                                                                                                */
    PRM_code[prmtypema3828]          = "typema3828";          PRM[prmtypema3828]          = 2;                                                /* Type meeaanvraag van 38 naar 28                                                                                                */
    PRM_code[prmtypema8281]          = "typema8281";          PRM[prmtypema8281]          = 1;                                                /* Type meeaanvraag van 82 naar 81                                                                                                */
    PRM_code[prmmv02]                = "mv02";                PRM[prmmv02]                = 1;                                                /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv03]                = "mv03";                PRM[prmmv03]                = 1;                                                /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv05]                = "mv05";                PRM[prmmv05]                = 1;                                                /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv08]                = "mv08";                PRM[prmmv08]                = 1;                                                /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv09]                = "mv09";                PRM[prmmv09]                = 1;                                                /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv11]                = "mv11";                PRM[prmmv11]                = 1;                                                /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv21]                = "mv21";                PRM[prmmv21]                = 1;                                                /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv22]                = "mv22";                PRM[prmmv22]                = 1;                                                /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv24]                = "mv24";                PRM[prmmv24]                = 1;                                                /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv26]                = "mv26";                PRM[prmmv26]                = 1;                                                /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv28]                = "mv28";                PRM[prmmv28]                = 1;                                                /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv31]                = "mv31";                PRM[prmmv31]                = 4;                                                /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv32]                = "mv32";                PRM[prmmv32]                = 4;                                                /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv33]                = "mv33";                PRM[prmmv33]                = 4;                                                /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv34]                = "mv34";                PRM[prmmv34]                = 4;                                                /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv38]                = "mv38";                PRM[prmmv38]                = 4;                                                /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv61]                = "mv61";                PRM[prmmv61]                = 1;                                                /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv62]                = "mv62";                PRM[prmmv62]                = 1;                                                /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv67]                = "mv67";                PRM[prmmv67]                = 1;                                                /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv68]                = "mv68";                PRM[prmmv68]                = 1;                                                /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv84]                = "mv84";                PRM[prmmv84]                = 1;                                                /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv82]                = "mv82";                PRM[prmmv82]                = 1;                                                /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv81]                = "mv81";                PRM[prmmv81]                = 1;                                                /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmprml02]              = "prml02";              PRM[prmprml02]              = 1;                                                /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml03]              = "prml03";              PRM[prmprml03]              = 2;                                                /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml05]              = "prml05";              PRM[prmprml05]              = 8;                                                /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml08]              = "prml08";              PRM[prmprml08]              = 1;                                                /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml09]              = "prml09";              PRM[prmprml09]              = 4;                                                /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml11]              = "prml11";              PRM[prmprml11]              = 8;                                                /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml21]              = "prml21";              PRM[prmprml21]              = 4;                                                /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml22]              = "prml22";              PRM[prmprml22]              = 4;                                                /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml24]              = "prml24";              PRM[prmprml24]              = 1;                                                /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml26]              = "prml26";              PRM[prmprml26]              = 8;                                                /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml28]              = "prml28";              PRM[prmprml28]              = 2;                                                /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml31]              = "prml31";              PRM[prmprml31]              = 4;                                                /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml32]              = "prml32";              PRM[prmprml32]              = 4;                                                /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml33]              = "prml33";              PRM[prmprml33]              = 1;                                                /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml34]              = "prml34";              PRM[prmprml34]              = 1;                                                /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml38]              = "prml38";              PRM[prmprml38]              = 2;                                                /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml61]              = "prml61";              PRM[prmprml61]              = 1;                                                /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml62]              = "prml62";              PRM[prmprml62]              = 1;                                                /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml67]              = "prml67";              PRM[prmprml67]              = 8;                                                /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml68]              = "prml68";              PRM[prmprml68]              = 1;                                                /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml84]              = "prml84";              PRM[prmprml84]              = 1;                                                /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml82]              = "prml82";              PRM[prmprml82]              = 2;                                                /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmprml81]              = "prml81";              PRM[prmprml81]              = 2;                                                /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    PRM_code[prmxnl0262]             = "xnl0262";             PRM[prmxnl0262]             = 30;   PRM_type[prmxnl0262]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    PRM_code[prmxnl0868]             = "xnl0868";             PRM[prmxnl0868]             = 30;   PRM_type[prmxnl0868]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    PRM_code[prmxnl2221]             = "xnl2221";             PRM[prmxnl2221]             = 20;   PRM_type[prmxnl2221]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    PRM_code[prmxnl3132]             = "xnl3132";             PRM[prmxnl3132]             = 30;   PRM_type[prmxnl3132]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    PRM_code[prmxnl3231]             = "xnl3231";             PRM[prmxnl3231]             = 30;   PRM_type[prmxnl3231]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    PRM_code[prmxnl3334]             = "xnl3334";             PRM[prmxnl3334]             = 30;   PRM_type[prmxnl3334]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    PRM_code[prmxnl3433]             = "xnl3433";             PRM[prmxnl3433]             = 30;   PRM_type[prmxnl3433]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    PRM_code[prmxnl8281]             = "xnl8281";             PRM[prmxnl8281]             = 30;   PRM_type[prmxnl8281]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    PRM_code[prmOVtstpgrensvroeg]    = "OVtstpgrensvroeg";    PRM[prmOVtstpgrensvroeg]    = 60;   PRM_type[prmOVtstpgrensvroeg]    = TS_type; /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    PRM_code[prmOVtstpgrenslaat]     = "OVtstpgrenslaat";     PRM[prmOVtstpgrenslaat]     = 120;  PRM_type[prmOVtstpgrenslaat]     = TS_type; /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    PRM_code[prmovstipttevroeg02bus] = "ovstipttevroeg02bus"; PRM[prmovstipttevroeg02bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    PRM_code[prmovstiptoptijd02bus]  = "ovstiptoptijd02bus";  PRM[prmovstiptoptijd02bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    PRM_code[prmovstipttelaat02bus]  = "ovstipttelaat02bus";  PRM[prmovstipttelaat02bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    PRM_code[prmovstipttevroeg03bus] = "ovstipttevroeg03bus"; PRM[prmovstipttevroeg03bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    PRM_code[prmovstiptoptijd03bus]  = "ovstiptoptijd03bus";  PRM[prmovstiptoptijd03bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    PRM_code[prmovstipttelaat03bus]  = "ovstipttelaat03bus";  PRM[prmovstipttelaat03bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    PRM_code[prmovstipttevroeg05bus] = "ovstipttevroeg05bus"; PRM[prmovstipttevroeg05bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    PRM_code[prmovstiptoptijd05bus]  = "ovstiptoptijd05bus";  PRM[prmovstiptoptijd05bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    PRM_code[prmovstipttelaat05bus]  = "ovstipttelaat05bus";  PRM[prmovstipttelaat05bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    PRM_code[prmovstipttevroeg08bus] = "ovstipttevroeg08bus"; PRM[prmovstipttevroeg08bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    PRM_code[prmovstiptoptijd08bus]  = "ovstiptoptijd08bus";  PRM[prmovstiptoptijd08bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    PRM_code[prmovstipttelaat08bus]  = "ovstipttelaat08bus";  PRM[prmovstipttelaat08bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    PRM_code[prmovstipttevroeg09bus] = "ovstipttevroeg09bus"; PRM[prmovstipttevroeg09bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    PRM_code[prmovstiptoptijd09bus]  = "ovstiptoptijd09bus";  PRM[prmovstiptoptijd09bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    PRM_code[prmovstipttelaat09bus]  = "ovstipttelaat09bus";  PRM[prmovstipttelaat09bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    PRM_code[prmovstipttevroeg11bus] = "ovstipttevroeg11bus"; PRM[prmovstipttevroeg11bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    PRM_code[prmovstiptoptijd11bus]  = "ovstiptoptijd11bus";  PRM[prmovstiptoptijd11bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    PRM_code[prmovstipttelaat11bus]  = "ovstipttelaat11bus";  PRM[prmovstipttelaat11bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    PRM_code[prmovstipttevroeg61bus] = "ovstipttevroeg61bus"; PRM[prmovstipttevroeg61bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    PRM_code[prmovstiptoptijd61bus]  = "ovstiptoptijd61bus";  PRM[prmovstiptoptijd61bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    PRM_code[prmovstipttelaat61bus]  = "ovstipttelaat61bus";  PRM[prmovstipttelaat61bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    PRM_code[prmovstipttevroeg62bus] = "ovstipttevroeg62bus"; PRM[prmovstipttevroeg62bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    PRM_code[prmovstiptoptijd62bus]  = "ovstiptoptijd62bus";  PRM[prmovstiptoptijd62bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    PRM_code[prmovstipttelaat62bus]  = "ovstipttelaat62bus";  PRM[prmovstipttelaat62bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    PRM_code[prmovstipttevroeg67bus] = "ovstipttevroeg67bus"; PRM[prmovstipttevroeg67bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    PRM_code[prmovstiptoptijd67bus]  = "ovstiptoptijd67bus";  PRM[prmovstiptoptijd67bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    PRM_code[prmovstipttelaat67bus]  = "ovstipttelaat67bus";  PRM[prmovstipttelaat67bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    PRM_code[prmovstipttevroeg68bus] = "ovstipttevroeg68bus"; PRM[prmovstipttevroeg68bus] = 2;                                                /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    PRM_code[prmovstiptoptijd68bus]  = "ovstiptoptijd68bus";  PRM[prmovstiptoptijd68bus]  = 23;                                               /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    PRM_code[prmovstipttelaat68bus]  = "ovstipttelaat68bus";  PRM[prmovstipttelaat68bus]  = 123;                                              /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    PRM_code[prmmwta]                = "mwta";                PRM[prmmwta]                = 120;  PRM_type[prmmwta]                = TS_type; /* Maximale wachttijd autoverkeer                                                                                                 */
    PRM_code[prmmwtfts]              = "mwtfts";              PRM[prmmwtfts]              = 90;   PRM_type[prmmwtfts]              = TS_type; /* Maximale wachttijd fiets                                                                                                       */
    PRM_code[prmmwtvtg]              = "mwtvtg";              PRM[prmmwtvtg]              = 90;   PRM_type[prmmwtvtg]              = TS_type; /* Maximale wachttijd voetgangers                                                                                                 */
    PRM_code[prmpmgt02]              = "pmgt02";              PRM[prmpmgt02]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    PRM_code[prmognt02]              = "ognt02";              PRM[prmognt02]              = 60;   PRM_type[prmognt02]              = TE_type; /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    PRM_code[prmnofm02]              = "nofm02";              PRM[prmnofm02]              = 0;    PRM_type[prmnofm02]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    PRM_code[prmmgcov02]             = "mgcov02";             PRM[prmmgcov02]             = 0;    PRM_type[prmmgcov02]             = TE_type; /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov02]            = "pmgcov02";            PRM[prmpmgcov02]            = 0;                                                /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg02]             = "ohpmg02";             PRM[prmohpmg02]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    PRM_code[prmpmgt03]              = "pmgt03";              PRM[prmpmgt03]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    PRM_code[prmognt03]              = "ognt03";              PRM[prmognt03]              = 60;   PRM_type[prmognt03]              = TE_type; /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    PRM_code[prmnofm03]              = "nofm03";              PRM[prmnofm03]              = 0;    PRM_type[prmnofm03]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    PRM_code[prmmgcov03]             = "mgcov03";             PRM[prmmgcov03]             = 0;    PRM_type[prmmgcov03]             = TE_type; /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov03]            = "pmgcov03";            PRM[prmpmgcov03]            = 0;                                                /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg03]             = "ohpmg03";             PRM[prmohpmg03]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    PRM_code[prmpmgt05]              = "pmgt05";              PRM[prmpmgt05]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    PRM_code[prmognt05]              = "ognt05";              PRM[prmognt05]              = 60;   PRM_type[prmognt05]              = TE_type; /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    PRM_code[prmnofm05]              = "nofm05";              PRM[prmnofm05]              = 0;    PRM_type[prmnofm05]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    PRM_code[prmmgcov05]             = "mgcov05";             PRM[prmmgcov05]             = 0;    PRM_type[prmmgcov05]             = TE_type; /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov05]            = "pmgcov05";            PRM[prmpmgcov05]            = 0;                                                /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg05]             = "ohpmg05";             PRM[prmohpmg05]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    PRM_code[prmpmgt08]              = "pmgt08";              PRM[prmpmgt08]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    PRM_code[prmognt08]              = "ognt08";              PRM[prmognt08]              = 60;   PRM_type[prmognt08]              = TE_type; /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    PRM_code[prmnofm08]              = "nofm08";              PRM[prmnofm08]              = 0;    PRM_type[prmnofm08]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    PRM_code[prmmgcov08]             = "mgcov08";             PRM[prmmgcov08]             = 0;    PRM_type[prmmgcov08]             = TE_type; /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov08]            = "pmgcov08";            PRM[prmpmgcov08]            = 0;                                                /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg08]             = "ohpmg08";             PRM[prmohpmg08]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    PRM_code[prmpmgt09]              = "pmgt09";              PRM[prmpmgt09]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    PRM_code[prmognt09]              = "ognt09";              PRM[prmognt09]              = 60;   PRM_type[prmognt09]              = TE_type; /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    PRM_code[prmnofm09]              = "nofm09";              PRM[prmnofm09]              = 0;    PRM_type[prmnofm09]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    PRM_code[prmmgcov09]             = "mgcov09";             PRM[prmmgcov09]             = 0;    PRM_type[prmmgcov09]             = TE_type; /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov09]            = "pmgcov09";            PRM[prmpmgcov09]            = 0;                                                /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg09]             = "ohpmg09";             PRM[prmohpmg09]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    PRM_code[prmpmgt11]              = "pmgt11";              PRM[prmpmgt11]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    PRM_code[prmognt11]              = "ognt11";              PRM[prmognt11]              = 60;   PRM_type[prmognt11]              = TE_type; /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    PRM_code[prmnofm11]              = "nofm11";              PRM[prmnofm11]              = 0;    PRM_type[prmnofm11]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    PRM_code[prmmgcov11]             = "mgcov11";             PRM[prmmgcov11]             = 0;    PRM_type[prmmgcov11]             = TE_type; /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov11]            = "pmgcov11";            PRM[prmpmgcov11]            = 0;                                                /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg11]             = "ohpmg11";             PRM[prmohpmg11]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    PRM_code[prmpmgt21]              = "pmgt21";              PRM[prmpmgt21]              = 0;                                                /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    PRM_code[prmognt21]              = "ognt21";              PRM[prmognt21]              = 0;    PRM_type[prmognt21]              = TE_type; /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    PRM_code[prmnofm21]              = "nofm21";              PRM[prmnofm21]              = 0;    PRM_type[prmnofm21]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    PRM_code[prmmgcov21]             = "mgcov21";             PRM[prmmgcov21]             = 0;    PRM_type[prmmgcov21]             = TE_type; /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov21]            = "pmgcov21";            PRM[prmpmgcov21]            = 0;                                                /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg21]             = "ohpmg21";             PRM[prmohpmg21]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    PRM_code[prmpmgt22]              = "pmgt22";              PRM[prmpmgt22]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    PRM_code[prmognt22]              = "ognt22";              PRM[prmognt22]              = 60;   PRM_type[prmognt22]              = TE_type; /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    PRM_code[prmnofm22]              = "nofm22";              PRM[prmnofm22]              = 0;    PRM_type[prmnofm22]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    PRM_code[prmmgcov22]             = "mgcov22";             PRM[prmmgcov22]             = 0;    PRM_type[prmmgcov22]             = TE_type; /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov22]            = "pmgcov22";            PRM[prmpmgcov22]            = 0;                                                /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg22]             = "ohpmg22";             PRM[prmohpmg22]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    PRM_code[prmpmgt24]              = "pmgt24";              PRM[prmpmgt24]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    PRM_code[prmognt24]              = "ognt24";              PRM[prmognt24]              = 60;   PRM_type[prmognt24]              = TE_type; /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    PRM_code[prmnofm24]              = "nofm24";              PRM[prmnofm24]              = 0;    PRM_type[prmnofm24]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    PRM_code[prmmgcov24]             = "mgcov24";             PRM[prmmgcov24]             = 0;    PRM_type[prmmgcov24]             = TE_type; /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov24]            = "pmgcov24";            PRM[prmpmgcov24]            = 0;                                                /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg24]             = "ohpmg24";             PRM[prmohpmg24]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    PRM_code[prmpmgt26]              = "pmgt26";              PRM[prmpmgt26]              = 0;                                                /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    PRM_code[prmognt26]              = "ognt26";              PRM[prmognt26]              = 0;    PRM_type[prmognt26]              = TE_type; /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    PRM_code[prmnofm26]              = "nofm26";              PRM[prmnofm26]              = 0;    PRM_type[prmnofm26]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    PRM_code[prmmgcov26]             = "mgcov26";             PRM[prmmgcov26]             = 0;    PRM_type[prmmgcov26]             = TE_type; /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov26]            = "pmgcov26";            PRM[prmpmgcov26]            = 0;                                                /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg26]             = "ohpmg26";             PRM[prmohpmg26]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    PRM_code[prmpmgt28]              = "pmgt28";              PRM[prmpmgt28]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    PRM_code[prmognt28]              = "ognt28";              PRM[prmognt28]              = 60;   PRM_type[prmognt28]              = TE_type; /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    PRM_code[prmnofm28]              = "nofm28";              PRM[prmnofm28]              = 0;    PRM_type[prmnofm28]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    PRM_code[prmmgcov28]             = "mgcov28";             PRM[prmmgcov28]             = 0;    PRM_type[prmmgcov28]             = TE_type; /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov28]            = "pmgcov28";            PRM[prmpmgcov28]            = 0;                                                /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg28]             = "ohpmg28";             PRM[prmohpmg28]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    PRM_code[prmpmgt31]              = "pmgt31";              PRM[prmpmgt31]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    PRM_code[prmognt31]              = "ognt31";              PRM[prmognt31]              = 60;   PRM_type[prmognt31]              = TE_type; /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    PRM_code[prmpmgt32]              = "pmgt32";              PRM[prmpmgt32]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    PRM_code[prmognt32]              = "ognt32";              PRM[prmognt32]              = 60;   PRM_type[prmognt32]              = TE_type; /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    PRM_code[prmpmgt33]              = "pmgt33";              PRM[prmpmgt33]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    PRM_code[prmognt33]              = "ognt33";              PRM[prmognt33]              = 60;   PRM_type[prmognt33]              = TE_type; /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    PRM_code[prmpmgt34]              = "pmgt34";              PRM[prmpmgt34]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    PRM_code[prmognt34]              = "ognt34";              PRM[prmognt34]              = 60;   PRM_type[prmognt34]              = TE_type; /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    PRM_code[prmpmgt38]              = "pmgt38";              PRM[prmpmgt38]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    PRM_code[prmognt38]              = "ognt38";              PRM[prmognt38]              = 60;   PRM_type[prmognt38]              = TE_type; /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    PRM_code[prmpmgt61]              = "pmgt61";              PRM[prmpmgt61]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    PRM_code[prmognt61]              = "ognt61";              PRM[prmognt61]              = 60;   PRM_type[prmognt61]              = TE_type; /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    PRM_code[prmnofm61]              = "nofm61";              PRM[prmnofm61]              = 0;    PRM_type[prmnofm61]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    PRM_code[prmmgcov61]             = "mgcov61";             PRM[prmmgcov61]             = 0;    PRM_type[prmmgcov61]             = TE_type; /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov61]            = "pmgcov61";            PRM[prmpmgcov61]            = 0;                                                /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg61]             = "ohpmg61";             PRM[prmohpmg61]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    PRM_code[prmpmgt62]              = "pmgt62";              PRM[prmpmgt62]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    PRM_code[prmognt62]              = "ognt62";              PRM[prmognt62]              = 60;   PRM_type[prmognt62]              = TE_type; /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    PRM_code[prmnofm62]              = "nofm62";              PRM[prmnofm62]              = 0;    PRM_type[prmnofm62]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    PRM_code[prmmgcov62]             = "mgcov62";             PRM[prmmgcov62]             = 0;    PRM_type[prmmgcov62]             = TE_type; /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov62]            = "pmgcov62";            PRM[prmpmgcov62]            = 0;                                                /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg62]             = "ohpmg62";             PRM[prmohpmg62]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    PRM_code[prmpmgt67]              = "pmgt67";              PRM[prmpmgt67]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    PRM_code[prmognt67]              = "ognt67";              PRM[prmognt67]              = 60;   PRM_type[prmognt67]              = TE_type; /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    PRM_code[prmnofm67]              = "nofm67";              PRM[prmnofm67]              = 0;    PRM_type[prmnofm67]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    PRM_code[prmmgcov67]             = "mgcov67";             PRM[prmmgcov67]             = 0;    PRM_type[prmmgcov67]             = TE_type; /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov67]            = "pmgcov67";            PRM[prmpmgcov67]            = 0;                                                /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg67]             = "ohpmg67";             PRM[prmohpmg67]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    PRM_code[prmpmgt68]              = "pmgt68";              PRM[prmpmgt68]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    PRM_code[prmognt68]              = "ognt68";              PRM[prmognt68]              = 60;   PRM_type[prmognt68]              = TE_type; /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    PRM_code[prmnofm68]              = "nofm68";              PRM[prmnofm68]              = 0;    PRM_type[prmnofm68]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    PRM_code[prmmgcov68]             = "mgcov68";             PRM[prmmgcov68]             = 0;    PRM_type[prmmgcov68]             = TE_type; /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov68]            = "pmgcov68";            PRM[prmpmgcov68]            = 0;                                                /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg68]             = "ohpmg68";             PRM[prmohpmg68]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    PRM_code[prmpmgt82]              = "pmgt82";              PRM[prmpmgt82]              = 0;                                                /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    PRM_code[prmognt82]              = "ognt82";              PRM[prmognt82]              = 0;    PRM_type[prmognt82]              = TE_type; /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    PRM_code[prmnofm82]              = "nofm82";              PRM[prmnofm82]              = 0;    PRM_type[prmnofm82]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    PRM_code[prmmgcov82]             = "mgcov82";             PRM[prmmgcov82]             = 0;    PRM_type[prmmgcov82]             = TE_type; /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov82]            = "pmgcov82";            PRM[prmpmgcov82]            = 0;                                                /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg82]             = "ohpmg82";             PRM[prmohpmg82]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    PRM_code[prmpmgt84]              = "pmgt84";              PRM[prmpmgt84]              = 100;                                              /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    PRM_code[prmognt84]              = "ognt84";              PRM[prmognt84]              = 60;   PRM_type[prmognt84]              = TE_type; /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    PRM_code[prmnofm84]              = "nofm84";              PRM[prmnofm84]              = 0;    PRM_type[prmnofm84]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    PRM_code[prmmgcov84]             = "mgcov84";             PRM[prmmgcov84]             = 0;    PRM_type[prmmgcov84]             = TE_type; /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov84]            = "pmgcov84";            PRM[prmpmgcov84]            = 0;                                                /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg84]             = "ohpmg84";             PRM[prmohpmg84]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    PRM_code[prmpmgt81]              = "pmgt81";              PRM[prmpmgt81]              = 0;                                                /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    PRM_code[prmognt81]              = "ognt81";              PRM[prmognt81]              = 0;    PRM_type[prmognt81]              = TE_type; /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    PRM_code[prmnofm81]              = "nofm81";              PRM[prmnofm81]              = 0;    PRM_type[prmnofm81]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    PRM_code[prmmgcov81]             = "mgcov81";             PRM[prmmgcov81]             = 0;    PRM_type[prmmgcov81]             = TE_type; /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov81]            = "pmgcov81";            PRM[prmpmgcov81]            = 0;                                                /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg81]             = "ohpmg81";             PRM[prmohpmg81]             = 0;                                                /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    PRM_code[prmrto02bus]            = "rto02bus";            PRM[prmrto02bus]            = 140;  PRM_type[prmrto02bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    PRM_code[prmrtbg02bus]           = "rtbg02bus";           PRM[prmrtbg02bus]           = 100;  PRM_type[prmrtbg02bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    PRM_code[prmrtg02bus]            = "rtg02bus";            PRM[prmrtg02bus]            = 60;   PRM_type[prmrtg02bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    PRM_code[prmomx02bus]            = "omx02bus";            PRM[prmomx02bus]            = 150;  PRM_type[prmomx02bus]            = TE_type; /* Ondermaximum OV fase 02                                                                                                        */
    PRM_code[prmprio02bus]           = "prio02bus";           PRM[prmprio02bus]           = 123;                                              /* Prioriteitsinstelling OV fase 02                                                                                               */
    PRM_code[prmrto03bus]            = "rto03bus";            PRM[prmrto03bus]            = 140;  PRM_type[prmrto03bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    PRM_code[prmrtbg03bus]           = "rtbg03bus";           PRM[prmrtbg03bus]           = 100;  PRM_type[prmrtbg03bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    PRM_code[prmrtg03bus]            = "rtg03bus";            PRM[prmrtg03bus]            = 60;   PRM_type[prmrtg03bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    PRM_code[prmomx03bus]            = "omx03bus";            PRM[prmomx03bus]            = 150;  PRM_type[prmomx03bus]            = TE_type; /* Ondermaximum OV fase 03                                                                                                        */
    PRM_code[prmprio03bus]           = "prio03bus";           PRM[prmprio03bus]           = 123;                                              /* Prioriteitsinstelling OV fase 03                                                                                               */
    PRM_code[prmrto05bus]            = "rto05bus";            PRM[prmrto05bus]            = 140;  PRM_type[prmrto05bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    PRM_code[prmrtbg05bus]           = "rtbg05bus";           PRM[prmrtbg05bus]           = 100;  PRM_type[prmrtbg05bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    PRM_code[prmrtg05bus]            = "rtg05bus";            PRM[prmrtg05bus]            = 60;   PRM_type[prmrtg05bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    PRM_code[prmomx05bus]            = "omx05bus";            PRM[prmomx05bus]            = 150;  PRM_type[prmomx05bus]            = TE_type; /* Ondermaximum OV fase 05                                                                                                        */
    PRM_code[prmprio05bus]           = "prio05bus";           PRM[prmprio05bus]           = 123;                                              /* Prioriteitsinstelling OV fase 05                                                                                               */
    PRM_code[prmrto08bus]            = "rto08bus";            PRM[prmrto08bus]            = 140;  PRM_type[prmrto08bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    PRM_code[prmrtbg08bus]           = "rtbg08bus";           PRM[prmrtbg08bus]           = 100;  PRM_type[prmrtbg08bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    PRM_code[prmrtg08bus]            = "rtg08bus";            PRM[prmrtg08bus]            = 60;   PRM_type[prmrtg08bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    PRM_code[prmomx08bus]            = "omx08bus";            PRM[prmomx08bus]            = 150;  PRM_type[prmomx08bus]            = TE_type; /* Ondermaximum OV fase 08                                                                                                        */
    PRM_code[prmprio08bus]           = "prio08bus";           PRM[prmprio08bus]           = 123;                                              /* Prioriteitsinstelling OV fase 08                                                                                               */
    PRM_code[prmrto09bus]            = "rto09bus";            PRM[prmrto09bus]            = 140;  PRM_type[prmrto09bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    PRM_code[prmrtbg09bus]           = "rtbg09bus";           PRM[prmrtbg09bus]           = 100;  PRM_type[prmrtbg09bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    PRM_code[prmrtg09bus]            = "rtg09bus";            PRM[prmrtg09bus]            = 60;   PRM_type[prmrtg09bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    PRM_code[prmomx09bus]            = "omx09bus";            PRM[prmomx09bus]            = 150;  PRM_type[prmomx09bus]            = TE_type; /* Ondermaximum OV fase 09                                                                                                        */
    PRM_code[prmprio09bus]           = "prio09bus";           PRM[prmprio09bus]           = 123;                                              /* Prioriteitsinstelling OV fase 09                                                                                               */
    PRM_code[prmrto11bus]            = "rto11bus";            PRM[prmrto11bus]            = 140;  PRM_type[prmrto11bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    PRM_code[prmrtbg11bus]           = "rtbg11bus";           PRM[prmrtbg11bus]           = 100;  PRM_type[prmrtbg11bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    PRM_code[prmrtg11bus]            = "rtg11bus";            PRM[prmrtg11bus]            = 60;   PRM_type[prmrtg11bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    PRM_code[prmomx11bus]            = "omx11bus";            PRM[prmomx11bus]            = 150;  PRM_type[prmomx11bus]            = TE_type; /* Ondermaximum OV fase 11                                                                                                        */
    PRM_code[prmprio11bus]           = "prio11bus";           PRM[prmprio11bus]           = 123;                                              /* Prioriteitsinstelling OV fase 11                                                                                               */
    PRM_code[prmrto61bus]            = "rto61bus";            PRM[prmrto61bus]            = 140;  PRM_type[prmrto61bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    PRM_code[prmrtbg61bus]           = "rtbg61bus";           PRM[prmrtbg61bus]           = 100;  PRM_type[prmrtbg61bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    PRM_code[prmrtg61bus]            = "rtg61bus";            PRM[prmrtg61bus]            = 60;   PRM_type[prmrtg61bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    PRM_code[prmomx61bus]            = "omx61bus";            PRM[prmomx61bus]            = 150;  PRM_type[prmomx61bus]            = TE_type; /* Ondermaximum OV fase 61                                                                                                        */
    PRM_code[prmprio61bus]           = "prio61bus";           PRM[prmprio61bus]           = 123;                                              /* Prioriteitsinstelling OV fase 61                                                                                               */
    PRM_code[prmrto62bus]            = "rto62bus";            PRM[prmrto62bus]            = 140;  PRM_type[prmrto62bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    PRM_code[prmrtbg62bus]           = "rtbg62bus";           PRM[prmrtbg62bus]           = 100;  PRM_type[prmrtbg62bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    PRM_code[prmrtg62bus]            = "rtg62bus";            PRM[prmrtg62bus]            = 60;   PRM_type[prmrtg62bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    PRM_code[prmomx62bus]            = "omx62bus";            PRM[prmomx62bus]            = 150;  PRM_type[prmomx62bus]            = TE_type; /* Ondermaximum OV fase 62                                                                                                        */
    PRM_code[prmprio62bus]           = "prio62bus";           PRM[prmprio62bus]           = 123;                                              /* Prioriteitsinstelling OV fase 62                                                                                               */
    PRM_code[prmrto67bus]            = "rto67bus";            PRM[prmrto67bus]            = 140;  PRM_type[prmrto67bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    PRM_code[prmrtbg67bus]           = "rtbg67bus";           PRM[prmrtbg67bus]           = 100;  PRM_type[prmrtbg67bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    PRM_code[prmrtg67bus]            = "rtg67bus";            PRM[prmrtg67bus]            = 60;   PRM_type[prmrtg67bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    PRM_code[prmomx67bus]            = "omx67bus";            PRM[prmomx67bus]            = 150;  PRM_type[prmomx67bus]            = TE_type; /* Ondermaximum OV fase 67                                                                                                        */
    PRM_code[prmprio67bus]           = "prio67bus";           PRM[prmprio67bus]           = 123;                                              /* Prioriteitsinstelling OV fase 67                                                                                               */
    PRM_code[prmrto68bus]            = "rto68bus";            PRM[prmrto68bus]            = 140;  PRM_type[prmrto68bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    PRM_code[prmrtbg68bus]           = "rtbg68bus";           PRM[prmrtbg68bus]           = 100;  PRM_type[prmrtbg68bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    PRM_code[prmrtg68bus]            = "rtg68bus";            PRM[prmrtg68bus]            = 60;   PRM_type[prmrtg68bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    PRM_code[prmomx68bus]            = "omx68bus";            PRM[prmomx68bus]            = 150;  PRM_type[prmomx68bus]            = TE_type; /* Ondermaximum OV fase 68                                                                                                        */
    PRM_code[prmprio68bus]           = "prio68bus";           PRM[prmprio68bus]           = 123;                                              /* Prioriteitsinstelling OV fase 68                                                                                               */
    PRM_code[prmpriohd02]            = "priohd02";            PRM[prmpriohd02]            = 9005;                                             /* Prioriteitsinstelling HD fase 02                                                                                               */
    PRM_code[prmrtohd02]             = "rtohd02";             PRM[prmrtohd02]             = 0;    PRM_type[prmrtohd02]             = TE_type; /* Ongehinderde rijtijd HD fase 02                                                                                                */
    PRM_code[prmrtbghd02]            = "rtbghd02";            PRM[prmrtbghd02]            = 0;    PRM_type[prmrtbghd02]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    PRM_code[prmrtghd02]             = "rtghd02";             PRM[prmrtghd02]             = 0;    PRM_type[prmrtghd02]             = TE_type; /* Gehinderde rijtijd HD fase 02                                                                                                  */
    PRM_code[prmpriohd03]            = "priohd03";            PRM[prmpriohd03]            = 9005;                                             /* Prioriteitsinstelling HD fase 03                                                                                               */
    PRM_code[prmrtohd03]             = "rtohd03";             PRM[prmrtohd03]             = 0;    PRM_type[prmrtohd03]             = TE_type; /* Ongehinderde rijtijd HD fase 03                                                                                                */
    PRM_code[prmrtbghd03]            = "rtbghd03";            PRM[prmrtbghd03]            = 0;    PRM_type[prmrtbghd03]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    PRM_code[prmrtghd03]             = "rtghd03";             PRM[prmrtghd03]             = 0;    PRM_type[prmrtghd03]             = TE_type; /* Gehinderde rijtijd HD fase 03                                                                                                  */
    PRM_code[prmpriohd05]            = "priohd05";            PRM[prmpriohd05]            = 9005;                                             /* Prioriteitsinstelling HD fase 05                                                                                               */
    PRM_code[prmrtohd05]             = "rtohd05";             PRM[prmrtohd05]             = 0;    PRM_type[prmrtohd05]             = TE_type; /* Ongehinderde rijtijd HD fase 05                                                                                                */
    PRM_code[prmrtbghd05]            = "rtbghd05";            PRM[prmrtbghd05]            = 0;    PRM_type[prmrtbghd05]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    PRM_code[prmrtghd05]             = "rtghd05";             PRM[prmrtghd05]             = 0;    PRM_type[prmrtghd05]             = TE_type; /* Gehinderde rijtijd HD fase 05                                                                                                  */
    PRM_code[prmpriohd08]            = "priohd08";            PRM[prmpriohd08]            = 9005;                                             /* Prioriteitsinstelling HD fase 08                                                                                               */
    PRM_code[prmrtohd08]             = "rtohd08";             PRM[prmrtohd08]             = 0;    PRM_type[prmrtohd08]             = TE_type; /* Ongehinderde rijtijd HD fase 08                                                                                                */
    PRM_code[prmrtbghd08]            = "rtbghd08";            PRM[prmrtbghd08]            = 0;    PRM_type[prmrtbghd08]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    PRM_code[prmrtghd08]             = "rtghd08";             PRM[prmrtghd08]             = 0;    PRM_type[prmrtghd08]             = TE_type; /* Gehinderde rijtijd HD fase 08                                                                                                  */
    PRM_code[prmpriohd09]            = "priohd09";            PRM[prmpriohd09]            = 9005;                                             /* Prioriteitsinstelling HD fase 09                                                                                               */
    PRM_code[prmrtohd09]             = "rtohd09";             PRM[prmrtohd09]             = 0;    PRM_type[prmrtohd09]             = TE_type; /* Ongehinderde rijtijd HD fase 09                                                                                                */
    PRM_code[prmrtbghd09]            = "rtbghd09";            PRM[prmrtbghd09]            = 0;    PRM_type[prmrtbghd09]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    PRM_code[prmrtghd09]             = "rtghd09";             PRM[prmrtghd09]             = 0;    PRM_type[prmrtghd09]             = TE_type; /* Gehinderde rijtijd HD fase 09                                                                                                  */
    PRM_code[prmpriohd11]            = "priohd11";            PRM[prmpriohd11]            = 9005;                                             /* Prioriteitsinstelling HD fase 11                                                                                               */
    PRM_code[prmrtohd11]             = "rtohd11";             PRM[prmrtohd11]             = 0;    PRM_type[prmrtohd11]             = TE_type; /* Ongehinderde rijtijd HD fase 11                                                                                                */
    PRM_code[prmrtbghd11]            = "rtbghd11";            PRM[prmrtbghd11]            = 0;    PRM_type[prmrtbghd11]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    PRM_code[prmrtghd11]             = "rtghd11";             PRM[prmrtghd11]             = 0;    PRM_type[prmrtghd11]             = TE_type; /* Gehinderde rijtijd HD fase 11                                                                                                  */
    PRM_code[prmpriohd61]            = "priohd61";            PRM[prmpriohd61]            = 9005;                                             /* Prioriteitsinstelling HD fase 61                                                                                               */
    PRM_code[prmrtohd61]             = "rtohd61";             PRM[prmrtohd61]             = 0;    PRM_type[prmrtohd61]             = TE_type; /* Ongehinderde rijtijd HD fase 61                                                                                                */
    PRM_code[prmrtbghd61]            = "rtbghd61";            PRM[prmrtbghd61]            = 0;    PRM_type[prmrtbghd61]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    PRM_code[prmrtghd61]             = "rtghd61";             PRM[prmrtghd61]             = 0;    PRM_type[prmrtghd61]             = TE_type; /* Gehinderde rijtijd HD fase 61                                                                                                  */
    PRM_code[prmpriohd62]            = "priohd62";            PRM[prmpriohd62]            = 9005;                                             /* Prioriteitsinstelling HD fase 62                                                                                               */
    PRM_code[prmrtohd62]             = "rtohd62";             PRM[prmrtohd62]             = 0;    PRM_type[prmrtohd62]             = TE_type; /* Ongehinderde rijtijd HD fase 62                                                                                                */
    PRM_code[prmrtbghd62]            = "rtbghd62";            PRM[prmrtbghd62]            = 0;    PRM_type[prmrtbghd62]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    PRM_code[prmrtghd62]             = "rtghd62";             PRM[prmrtghd62]             = 0;    PRM_type[prmrtghd62]             = TE_type; /* Gehinderde rijtijd HD fase 62                                                                                                  */
    PRM_code[prmpriohd67]            = "priohd67";            PRM[prmpriohd67]            = 9005;                                             /* Prioriteitsinstelling HD fase 67                                                                                               */
    PRM_code[prmrtohd67]             = "rtohd67";             PRM[prmrtohd67]             = 0;    PRM_type[prmrtohd67]             = TE_type; /* Ongehinderde rijtijd HD fase 67                                                                                                */
    PRM_code[prmrtbghd67]            = "rtbghd67";            PRM[prmrtbghd67]            = 0;    PRM_type[prmrtbghd67]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    PRM_code[prmrtghd67]             = "rtghd67";             PRM[prmrtghd67]             = 0;    PRM_type[prmrtghd67]             = TE_type; /* Gehinderde rijtijd HD fase 67                                                                                                  */
    PRM_code[prmpriohd68]            = "priohd68";            PRM[prmpriohd68]            = 9005;                                             /* Prioriteitsinstelling HD fase 68                                                                                               */
    PRM_code[prmrtohd68]             = "rtohd68";             PRM[prmrtohd68]             = 0;    PRM_type[prmrtohd68]             = TE_type; /* Ongehinderde rijtijd HD fase 68                                                                                                */
    PRM_code[prmrtbghd68]            = "rtbghd68";            PRM[prmrtbghd68]            = 0;    PRM_type[prmrtbghd68]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    PRM_code[prmrtghd68]             = "rtghd68";             PRM[prmrtghd68]             = 0;    PRM_type[prmrtghd68]             = TE_type; /* Gehinderde rijtijd HD fase 68                                                                                                  */
    PRM_code[prmkarsg02]             = "karsg02";             PRM[prmkarsg02]             = 2;                                                /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg03]             = "karsg03";             PRM[prmkarsg03]             = 3;                                                /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg05]             = "karsg05";             PRM[prmkarsg05]             = 5;                                                /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg08]             = "karsg08";             PRM[prmkarsg08]             = 8;                                                /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg09]             = "karsg09";             PRM[prmkarsg09]             = 9;                                                /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg11]             = "karsg11";             PRM[prmkarsg11]             = 11;                                               /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg61]             = "karsg61";             PRM[prmkarsg61]             = 61;                                               /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg62]             = "karsg62";             PRM[prmkarsg62]             = 62;                                               /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg67]             = "karsg67";             PRM[prmkarsg67]             = 67;                                               /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg68]             = "karsg68";             PRM[prmkarsg68]             = 68;                                               /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsghd02]           = "karsghd02";           PRM[prmkarsghd02]           = 2;                                                /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd03]           = "karsghd03";           PRM[prmkarsghd03]           = 3;                                                /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd05]           = "karsghd05";           PRM[prmkarsghd05]           = 5;                                                /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd08]           = "karsghd08";           PRM[prmkarsghd08]           = 8;                                                /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd09]           = "karsghd09";           PRM[prmkarsghd09]           = 9;                                                /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd11]           = "karsghd11";           PRM[prmkarsghd11]           = 11;                                               /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd61]           = "karsghd61";           PRM[prmkarsghd61]           = 61;                                               /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd62]           = "karsghd62";           PRM[prmkarsghd62]           = 62;                                               /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd67]           = "karsghd67";           PRM[prmkarsghd67]           = 67;                                               /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd68]           = "karsghd68";           PRM[prmkarsghd68]           = 68;                                               /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    PRM_code[prmstkp1]               = "stkp1";               PRM[prmstkp1]               = 600;  PRM_type[prmstkp1]               = TI_type; /* Start klokperiode dag                                                                                                          */
    PRM_code[prmetkp1]               = "etkp1";               PRM[prmetkp1]               = 1900; PRM_type[prmetkp1]               = TI_type; /* Einde klokperiode dag                                                                                                          */
    PRM_code[prmdckp1]               = "dckp1";               PRM[prmdckp1]               = 8;                                                /* Dagsoort klokperiode dag                                                                                                       */
    PRM_code[prmstkp2]               = "stkp2";               PRM[prmstkp2]               = 700;  PRM_type[prmstkp2]               = TI_type; /* Start klokperiode ochtend                                                                                                      */
    PRM_code[prmetkp2]               = "etkp2";               PRM[prmetkp2]               = 930;  PRM_type[prmetkp2]               = TI_type; /* Einde klokperiode ochtend                                                                                                      */
    PRM_code[prmdckp2]               = "dckp2";               PRM[prmdckp2]               = 8;                                                /* Dagsoort klokperiode ochtend                                                                                                   */
    PRM_code[prmstkp3]               = "stkp3";               PRM[prmstkp3]               = 1530; PRM_type[prmstkp3]               = TI_type; /* Start klokperiode avond                                                                                                        */
    PRM_code[prmetkp3]               = "etkp3";               PRM[prmetkp3]               = 1830; PRM_type[prmetkp3]               = TI_type; /* Einde klokperiode avond                                                                                                        */
    PRM_code[prmdckp3]               = "dckp3";               PRM[prmdckp3]               = 8;                                                /* Dagsoort klokperiode avond                                                                                                     */
    PRM_code[prmstkp4]               = "stkp4";               PRM[prmstkp4]               = 1830; PRM_type[prmstkp4]               = TI_type; /* Start klokperiode koopavond                                                                                                    */
    PRM_code[prmetkp4]               = "etkp4";               PRM[prmetkp4]               = 2200; PRM_type[prmetkp4]               = TI_type; /* Einde klokperiode koopavond                                                                                                    */
    PRM_code[prmdckp4]               = "dckp4";               PRM[prmdckp4]               = 4;                                                /* Dagsoort klokperiode koopavond                                                                                                 */
    PRM_code[prmstkp5]               = "stkp5";               PRM[prmstkp5]               = 1030; PRM_type[prmstkp5]               = TI_type; /* Start klokperiode weekend                                                                                                      */
    PRM_code[prmetkp5]               = "etkp5";               PRM[prmetkp5]               = 1700; PRM_type[prmetkp5]               = TI_type; /* Einde klokperiode weekend                                                                                                      */
    PRM_code[prmdckp5]               = "dckp5";               PRM[prmdckp5]               = 9;                                                /* Dagsoort klokperiode weekend                                                                                                   */
    PRM_code[prmstkp6]               = "stkp6";               PRM[prmstkp6]               = 0;    PRM_type[prmstkp6]               = TI_type; /* Start klokperiode reserve                                                                                                      */
    PRM_code[prmetkp6]               = "etkp6";               PRM[prmetkp6]               = 0;    PRM_type[prmetkp6]               = TI_type; /* Einde klokperiode reserve                                                                                                      */
    PRM_code[prmdckp6]               = "dckp6";               PRM[prmdckp6]               = 10;                                               /* Dagsoort klokperiode reserve                                                                                                   */
    PRM_code[prmmg1_02]              = "mg1_02";              PRM[prmmg1_02]              = 200;  PRM_type[prmmg1_02]              = TE_type; /* Maximale groentijd MG1 02                                                                                                      */
    PRM_code[prmmg1_03]              = "mg1_03";              PRM[prmmg1_03]              = 150;  PRM_type[prmmg1_03]              = TE_type; /* Maximale groentijd MG1 03                                                                                                      */
    PRM_code[prmmg1_05]              = "mg1_05";              PRM[prmmg1_05]              = 250;  PRM_type[prmmg1_05]              = TE_type; /* Maximale groentijd MG1 05                                                                                                      */
    PRM_code[prmmg1_08]              = "mg1_08";              PRM[prmmg1_08]              = 200;  PRM_type[prmmg1_08]              = TE_type; /* Maximale groentijd MG1 08                                                                                                      */
    PRM_code[prmmg1_09]              = "mg1_09";              PRM[prmmg1_09]              = 150;  PRM_type[prmmg1_09]              = TE_type; /* Maximale groentijd MG1 09                                                                                                      */
    PRM_code[prmmg1_11]              = "mg1_11";              PRM[prmmg1_11]              = 150;  PRM_type[prmmg1_11]              = TE_type; /* Maximale groentijd MG1 11                                                                                                      */
    PRM_code[prmmg1_21]              = "mg1_21";              PRM[prmmg1_21]              = 150;  PRM_type[prmmg1_21]              = TE_type; /* Maximale groentijd MG1 21                                                                                                      */
    PRM_code[prmmg1_22]              = "mg1_22";              PRM[prmmg1_22]              = 150;  PRM_type[prmmg1_22]              = TE_type; /* Maximale groentijd MG1 22                                                                                                      */
    PRM_code[prmmg1_24]              = "mg1_24";              PRM[prmmg1_24]              = 150;  PRM_type[prmmg1_24]              = TE_type; /* Maximale groentijd MG1 24                                                                                                      */
    PRM_code[prmmg1_26]              = "mg1_26";              PRM[prmmg1_26]              = 150;  PRM_type[prmmg1_26]              = TE_type; /* Maximale groentijd MG1 26                                                                                                      */
    PRM_code[prmmg1_28]              = "mg1_28";              PRM[prmmg1_28]              = 150;  PRM_type[prmmg1_28]              = TE_type; /* Maximale groentijd MG1 28                                                                                                      */
    PRM_code[prmmg1_61]              = "mg1_61";              PRM[prmmg1_61]              = 50;   PRM_type[prmmg1_61]              = TE_type; /* Maximale groentijd MG1 61                                                                                                      */
    PRM_code[prmmg1_62]              = "mg1_62";              PRM[prmmg1_62]              = 50;   PRM_type[prmmg1_62]              = TE_type; /* Maximale groentijd MG1 62                                                                                                      */
    PRM_code[prmmg1_67]              = "mg1_67";              PRM[prmmg1_67]              = 50;   PRM_type[prmmg1_67]              = TE_type; /* Maximale groentijd MG1 67                                                                                                      */
    PRM_code[prmmg1_68]              = "mg1_68";              PRM[prmmg1_68]              = 50;   PRM_type[prmmg1_68]              = TE_type; /* Maximale groentijd MG1 68                                                                                                      */
    PRM_code[prmmg1_81]              = "mg1_81";              PRM[prmmg1_81]              = 150;  PRM_type[prmmg1_81]              = TE_type; /* Maximale groentijd MG1 81                                                                                                      */
    PRM_code[prmmg1_82]              = "mg1_82";              PRM[prmmg1_82]              = 150;  PRM_type[prmmg1_82]              = TE_type; /* Maximale groentijd MG1 82                                                                                                      */
    PRM_code[prmmg1_84]              = "mg1_84";              PRM[prmmg1_84]              = 150;  PRM_type[prmmg1_84]              = TE_type; /* Maximale groentijd MG1 84                                                                                                      */
    PRM_code[prmmg2_02]              = "mg2_02";              PRM[prmmg2_02]              = 200;  PRM_type[prmmg2_02]              = TE_type; /* Maximale groentijd MG2 02                                                                                                      */
    PRM_code[prmmg2_03]              = "mg2_03";              PRM[prmmg2_03]              = 150;  PRM_type[prmmg2_03]              = TE_type; /* Maximale groentijd MG2 03                                                                                                      */
    PRM_code[prmmg2_05]              = "mg2_05";              PRM[prmmg2_05]              = 250;  PRM_type[prmmg2_05]              = TE_type; /* Maximale groentijd MG2 05                                                                                                      */
    PRM_code[prmmg2_08]              = "mg2_08";              PRM[prmmg2_08]              = 200;  PRM_type[prmmg2_08]              = TE_type; /* Maximale groentijd MG2 08                                                                                                      */
    PRM_code[prmmg2_09]              = "mg2_09";              PRM[prmmg2_09]              = 150;  PRM_type[prmmg2_09]              = TE_type; /* Maximale groentijd MG2 09                                                                                                      */
    PRM_code[prmmg2_11]              = "mg2_11";              PRM[prmmg2_11]              = 150;  PRM_type[prmmg2_11]              = TE_type; /* Maximale groentijd MG2 11                                                                                                      */
    PRM_code[prmmg2_21]              = "mg2_21";              PRM[prmmg2_21]              = 150;  PRM_type[prmmg2_21]              = TE_type; /* Maximale groentijd MG2 21                                                                                                      */
    PRM_code[prmmg2_22]              = "mg2_22";              PRM[prmmg2_22]              = 150;  PRM_type[prmmg2_22]              = TE_type; /* Maximale groentijd MG2 22                                                                                                      */
    PRM_code[prmmg2_24]              = "mg2_24";              PRM[prmmg2_24]              = 150;  PRM_type[prmmg2_24]              = TE_type; /* Maximale groentijd MG2 24                                                                                                      */
    PRM_code[prmmg2_26]              = "mg2_26";              PRM[prmmg2_26]              = 150;  PRM_type[prmmg2_26]              = TE_type; /* Maximale groentijd MG2 26                                                                                                      */
    PRM_code[prmmg2_28]              = "mg2_28";              PRM[prmmg2_28]              = 150;  PRM_type[prmmg2_28]              = TE_type; /* Maximale groentijd MG2 28                                                                                                      */
    PRM_code[prmmg2_61]              = "mg2_61";              PRM[prmmg2_61]              = 50;   PRM_type[prmmg2_61]              = TE_type; /* Maximale groentijd MG2 61                                                                                                      */
    PRM_code[prmmg2_62]              = "mg2_62";              PRM[prmmg2_62]              = 50;   PRM_type[prmmg2_62]              = TE_type; /* Maximale groentijd MG2 62                                                                                                      */
    PRM_code[prmmg2_67]              = "mg2_67";              PRM[prmmg2_67]              = 50;   PRM_type[prmmg2_67]              = TE_type; /* Maximale groentijd MG2 67                                                                                                      */
    PRM_code[prmmg2_68]              = "mg2_68";              PRM[prmmg2_68]              = 50;   PRM_type[prmmg2_68]              = TE_type; /* Maximale groentijd MG2 68                                                                                                      */
    PRM_code[prmmg2_81]              = "mg2_81";              PRM[prmmg2_81]              = 150;  PRM_type[prmmg2_81]              = TE_type; /* Maximale groentijd MG2 81                                                                                                      */
    PRM_code[prmmg2_82]              = "mg2_82";              PRM[prmmg2_82]              = 150;  PRM_type[prmmg2_82]              = TE_type; /* Maximale groentijd MG2 82                                                                                                      */
    PRM_code[prmmg2_84]              = "mg2_84";              PRM[prmmg2_84]              = 150;  PRM_type[prmmg2_84]              = TE_type; /* Maximale groentijd MG2 84                                                                                                      */
    PRM_code[prmmg3_02]              = "mg3_02";              PRM[prmmg3_02]              = 200;  PRM_type[prmmg3_02]              = TE_type; /* Maximale groentijd MG3 02                                                                                                      */
    PRM_code[prmmg3_03]              = "mg3_03";              PRM[prmmg3_03]              = 150;  PRM_type[prmmg3_03]              = TE_type; /* Maximale groentijd MG3 03                                                                                                      */
    PRM_code[prmmg3_05]              = "mg3_05";              PRM[prmmg3_05]              = 250;  PRM_type[prmmg3_05]              = TE_type; /* Maximale groentijd MG3 05                                                                                                      */
    PRM_code[prmmg3_08]              = "mg3_08";              PRM[prmmg3_08]              = 200;  PRM_type[prmmg3_08]              = TE_type; /* Maximale groentijd MG3 08                                                                                                      */
    PRM_code[prmmg3_09]              = "mg3_09";              PRM[prmmg3_09]              = 150;  PRM_type[prmmg3_09]              = TE_type; /* Maximale groentijd MG3 09                                                                                                      */
    PRM_code[prmmg3_11]              = "mg3_11";              PRM[prmmg3_11]              = 150;  PRM_type[prmmg3_11]              = TE_type; /* Maximale groentijd MG3 11                                                                                                      */
    PRM_code[prmmg3_21]              = "mg3_21";              PRM[prmmg3_21]              = 150;  PRM_type[prmmg3_21]              = TE_type; /* Maximale groentijd MG3 21                                                                                                      */
    PRM_code[prmmg3_22]              = "mg3_22";              PRM[prmmg3_22]              = 150;  PRM_type[prmmg3_22]              = TE_type; /* Maximale groentijd MG3 22                                                                                                      */
    PRM_code[prmmg3_24]              = "mg3_24";              PRM[prmmg3_24]              = 150;  PRM_type[prmmg3_24]              = TE_type; /* Maximale groentijd MG3 24                                                                                                      */
    PRM_code[prmmg3_26]              = "mg3_26";              PRM[prmmg3_26]              = 150;  PRM_type[prmmg3_26]              = TE_type; /* Maximale groentijd MG3 26                                                                                                      */
    PRM_code[prmmg3_28]              = "mg3_28";              PRM[prmmg3_28]              = 150;  PRM_type[prmmg3_28]              = TE_type; /* Maximale groentijd MG3 28                                                                                                      */
    PRM_code[prmmg3_61]              = "mg3_61";              PRM[prmmg3_61]              = 50;   PRM_type[prmmg3_61]              = TE_type; /* Maximale groentijd MG3 61                                                                                                      */
    PRM_code[prmmg3_62]              = "mg3_62";              PRM[prmmg3_62]              = 50;   PRM_type[prmmg3_62]              = TE_type; /* Maximale groentijd MG3 62                                                                                                      */
    PRM_code[prmmg3_67]              = "mg3_67";              PRM[prmmg3_67]              = 50;   PRM_type[prmmg3_67]              = TE_type; /* Maximale groentijd MG3 67                                                                                                      */
    PRM_code[prmmg3_68]              = "mg3_68";              PRM[prmmg3_68]              = 50;   PRM_type[prmmg3_68]              = TE_type; /* Maximale groentijd MG3 68                                                                                                      */
    PRM_code[prmmg3_81]              = "mg3_81";              PRM[prmmg3_81]              = 150;  PRM_type[prmmg3_81]              = TE_type; /* Maximale groentijd MG3 81                                                                                                      */
    PRM_code[prmmg3_82]              = "mg3_82";              PRM[prmmg3_82]              = 150;  PRM_type[prmmg3_82]              = TE_type; /* Maximale groentijd MG3 82                                                                                                      */
    PRM_code[prmmg3_84]              = "mg3_84";              PRM[prmmg3_84]              = 150;  PRM_type[prmmg3_84]              = TE_type; /* Maximale groentijd MG3 84                                                                                                      */
    PRM_code[prmmg4_02]              = "mg4_02";              PRM[prmmg4_02]              = 300;  PRM_type[prmmg4_02]              = TE_type; /* Maximale groentijd MG4 02                                                                                                      */
    PRM_code[prmmg4_03]              = "mg4_03";              PRM[prmmg4_03]              = 150;  PRM_type[prmmg4_03]              = TE_type; /* Maximale groentijd MG4 03                                                                                                      */
    PRM_code[prmmg4_05]              = "mg4_05";              PRM[prmmg4_05]              = 300;  PRM_type[prmmg4_05]              = TE_type; /* Maximale groentijd MG4 05                                                                                                      */
    PRM_code[prmmg4_08]              = "mg4_08";              PRM[prmmg4_08]              = 250;  PRM_type[prmmg4_08]              = TE_type; /* Maximale groentijd MG4 08                                                                                                      */
    PRM_code[prmmg4_09]              = "mg4_09";              PRM[prmmg4_09]              = 200;  PRM_type[prmmg4_09]              = TE_type; /* Maximale groentijd MG4 09                                                                                                      */
    PRM_code[prmmg4_11]              = "mg4_11";              PRM[prmmg4_11]              = 250;  PRM_type[prmmg4_11]              = TE_type; /* Maximale groentijd MG4 11                                                                                                      */
    PRM_code[prmmg4_21]              = "mg4_21";              PRM[prmmg4_21]              = 150;  PRM_type[prmmg4_21]              = TE_type; /* Maximale groentijd MG4 21                                                                                                      */
    PRM_code[prmmg4_22]              = "mg4_22";              PRM[prmmg4_22]              = 150;  PRM_type[prmmg4_22]              = TE_type; /* Maximale groentijd MG4 22                                                                                                      */
    PRM_code[prmmg4_24]              = "mg4_24";              PRM[prmmg4_24]              = 150;  PRM_type[prmmg4_24]              = TE_type; /* Maximale groentijd MG4 24                                                                                                      */
    PRM_code[prmmg4_26]              = "mg4_26";              PRM[prmmg4_26]              = 150;  PRM_type[prmmg4_26]              = TE_type; /* Maximale groentijd MG4 26                                                                                                      */
    PRM_code[prmmg4_28]              = "mg4_28";              PRM[prmmg4_28]              = 150;  PRM_type[prmmg4_28]              = TE_type; /* Maximale groentijd MG4 28                                                                                                      */
    PRM_code[prmmg4_61]              = "mg4_61";              PRM[prmmg4_61]              = 50;   PRM_type[prmmg4_61]              = TE_type; /* Maximale groentijd MG4 61                                                                                                      */
    PRM_code[prmmg4_62]              = "mg4_62";              PRM[prmmg4_62]              = 50;   PRM_type[prmmg4_62]              = TE_type; /* Maximale groentijd MG4 62                                                                                                      */
    PRM_code[prmmg4_67]              = "mg4_67";              PRM[prmmg4_67]              = 50;   PRM_type[prmmg4_67]              = TE_type; /* Maximale groentijd MG4 67                                                                                                      */
    PRM_code[prmmg4_68]              = "mg4_68";              PRM[prmmg4_68]              = 50;   PRM_type[prmmg4_68]              = TE_type; /* Maximale groentijd MG4 68                                                                                                      */
    PRM_code[prmmg4_81]              = "mg4_81";              PRM[prmmg4_81]              = 150;  PRM_type[prmmg4_81]              = TE_type; /* Maximale groentijd MG4 81                                                                                                      */
    PRM_code[prmmg4_82]              = "mg4_82";              PRM[prmmg4_82]              = 150;  PRM_type[prmmg4_82]              = TE_type; /* Maximale groentijd MG4 82                                                                                                      */
    PRM_code[prmmg4_84]              = "mg4_84";              PRM[prmmg4_84]              = 150;  PRM_type[prmmg4_84]              = TE_type; /* Maximale groentijd MG4 84                                                                                                      */
    PRM_code[prmmg5_02]              = "mg5_02";              PRM[prmmg5_02]              = 300;  PRM_type[prmmg5_02]              = TE_type; /* Maximale groentijd MG5 02                                                                                                      */
    PRM_code[prmmg5_03]              = "mg5_03";              PRM[prmmg5_03]              = 150;  PRM_type[prmmg5_03]              = TE_type; /* Maximale groentijd MG5 03                                                                                                      */
    PRM_code[prmmg5_05]              = "mg5_05";              PRM[prmmg5_05]              = 300;  PRM_type[prmmg5_05]              = TE_type; /* Maximale groentijd MG5 05                                                                                                      */
    PRM_code[prmmg5_08]              = "mg5_08";              PRM[prmmg5_08]              = 250;  PRM_type[prmmg5_08]              = TE_type; /* Maximale groentijd MG5 08                                                                                                      */
    PRM_code[prmmg5_09]              = "mg5_09";              PRM[prmmg5_09]              = 200;  PRM_type[prmmg5_09]              = TE_type; /* Maximale groentijd MG5 09                                                                                                      */
    PRM_code[prmmg5_11]              = "mg5_11";              PRM[prmmg5_11]              = 250;  PRM_type[prmmg5_11]              = TE_type; /* Maximale groentijd MG5 11                                                                                                      */
    PRM_code[prmmg5_21]              = "mg5_21";              PRM[prmmg5_21]              = 150;  PRM_type[prmmg5_21]              = TE_type; /* Maximale groentijd MG5 21                                                                                                      */
    PRM_code[prmmg5_22]              = "mg5_22";              PRM[prmmg5_22]              = 150;  PRM_type[prmmg5_22]              = TE_type; /* Maximale groentijd MG5 22                                                                                                      */
    PRM_code[prmmg5_24]              = "mg5_24";              PRM[prmmg5_24]              = 150;  PRM_type[prmmg5_24]              = TE_type; /* Maximale groentijd MG5 24                                                                                                      */
    PRM_code[prmmg5_26]              = "mg5_26";              PRM[prmmg5_26]              = 150;  PRM_type[prmmg5_26]              = TE_type; /* Maximale groentijd MG5 26                                                                                                      */
    PRM_code[prmmg5_28]              = "mg5_28";              PRM[prmmg5_28]              = 150;  PRM_type[prmmg5_28]              = TE_type; /* Maximale groentijd MG5 28                                                                                                      */
    PRM_code[prmmg5_61]              = "mg5_61";              PRM[prmmg5_61]              = 50;   PRM_type[prmmg5_61]              = TE_type; /* Maximale groentijd MG5 61                                                                                                      */
    PRM_code[prmmg5_62]              = "mg5_62";              PRM[prmmg5_62]              = 50;   PRM_type[prmmg5_62]              = TE_type; /* Maximale groentijd MG5 62                                                                                                      */
    PRM_code[prmmg5_67]              = "mg5_67";              PRM[prmmg5_67]              = 50;   PRM_type[prmmg5_67]              = TE_type; /* Maximale groentijd MG5 67                                                                                                      */
    PRM_code[prmmg5_68]              = "mg5_68";              PRM[prmmg5_68]              = 50;   PRM_type[prmmg5_68]              = TE_type; /* Maximale groentijd MG5 68                                                                                                      */
    PRM_code[prmmg5_81]              = "mg5_81";              PRM[prmmg5_81]              = 150;  PRM_type[prmmg5_81]              = TE_type; /* Maximale groentijd MG5 81                                                                                                      */
    PRM_code[prmmg5_82]              = "mg5_82";              PRM[prmmg5_82]              = 150;  PRM_type[prmmg5_82]              = TE_type; /* Maximale groentijd MG5 82                                                                                                      */
    PRM_code[prmmg5_84]              = "mg5_84";              PRM[prmmg5_84]              = 150;  PRM_type[prmmg5_84]              = TE_type; /* Maximale groentijd MG5 84                                                                                                      */
    PRM_code[prmmg6_02]              = "mg6_02";              PRM[prmmg6_02]              = 300;  PRM_type[prmmg6_02]              = TE_type; /* Maximale groentijd MG6 02                                                                                                      */
    PRM_code[prmmg6_03]              = "mg6_03";              PRM[prmmg6_03]              = 150;  PRM_type[prmmg6_03]              = TE_type; /* Maximale groentijd MG6 03                                                                                                      */
    PRM_code[prmmg6_05]              = "mg6_05";              PRM[prmmg6_05]              = 300;  PRM_type[prmmg6_05]              = TE_type; /* Maximale groentijd MG6 05                                                                                                      */
    PRM_code[prmmg6_08]              = "mg6_08";              PRM[prmmg6_08]              = 250;  PRM_type[prmmg6_08]              = TE_type; /* Maximale groentijd MG6 08                                                                                                      */
    PRM_code[prmmg6_09]              = "mg6_09";              PRM[prmmg6_09]              = 200;  PRM_type[prmmg6_09]              = TE_type; /* Maximale groentijd MG6 09                                                                                                      */
    PRM_code[prmmg6_11]              = "mg6_11";              PRM[prmmg6_11]              = 250;  PRM_type[prmmg6_11]              = TE_type; /* Maximale groentijd MG6 11                                                                                                      */
    PRM_code[prmmg6_21]              = "mg6_21";              PRM[prmmg6_21]              = 150;  PRM_type[prmmg6_21]              = TE_type; /* Maximale groentijd MG6 21                                                                                                      */
    PRM_code[prmmg6_22]              = "mg6_22";              PRM[prmmg6_22]              = 150;  PRM_type[prmmg6_22]              = TE_type; /* Maximale groentijd MG6 22                                                                                                      */
    PRM_code[prmmg6_24]              = "mg6_24";              PRM[prmmg6_24]              = 150;  PRM_type[prmmg6_24]              = TE_type; /* Maximale groentijd MG6 24                                                                                                      */
    PRM_code[prmmg6_26]              = "mg6_26";              PRM[prmmg6_26]              = 150;  PRM_type[prmmg6_26]              = TE_type; /* Maximale groentijd MG6 26                                                                                                      */
    PRM_code[prmmg6_28]              = "mg6_28";              PRM[prmmg6_28]              = 150;  PRM_type[prmmg6_28]              = TE_type; /* Maximale groentijd MG6 28                                                                                                      */
    PRM_code[prmmg6_61]              = "mg6_61";              PRM[prmmg6_61]              = 50;   PRM_type[prmmg6_61]              = TE_type; /* Maximale groentijd MG6 61                                                                                                      */
    PRM_code[prmmg6_62]              = "mg6_62";              PRM[prmmg6_62]              = 50;   PRM_type[prmmg6_62]              = TE_type; /* Maximale groentijd MG6 62                                                                                                      */
    PRM_code[prmmg6_67]              = "mg6_67";              PRM[prmmg6_67]              = 50;   PRM_type[prmmg6_67]              = TE_type; /* Maximale groentijd MG6 67                                                                                                      */
    PRM_code[prmmg6_68]              = "mg6_68";              PRM[prmmg6_68]              = 50;   PRM_type[prmmg6_68]              = TE_type; /* Maximale groentijd MG6 68                                                                                                      */
    PRM_code[prmmg6_81]              = "mg6_81";              PRM[prmmg6_81]              = 150;  PRM_type[prmmg6_81]              = TE_type; /* Maximale groentijd MG6 81                                                                                                      */
    PRM_code[prmmg6_82]              = "mg6_82";              PRM[prmmg6_82]              = 150;  PRM_type[prmmg6_82]              = TE_type; /* Maximale groentijd MG6 82                                                                                                      */
    PRM_code[prmmg6_84]              = "mg6_84";              PRM[prmmg6_84]              = 150;  PRM_type[prmmg6_84]              = TE_type; /* Maximale groentijd MG6 84                                                                                                      */
    PRM_code[prmmg7_02]              = "mg7_02";              PRM[prmmg7_02]              = 300;  PRM_type[prmmg7_02]              = TE_type; /* Maximale groentijd MG7 02                                                                                                      */
    PRM_code[prmmg7_03]              = "mg7_03";              PRM[prmmg7_03]              = 150;  PRM_type[prmmg7_03]              = TE_type; /* Maximale groentijd MG7 03                                                                                                      */
    PRM_code[prmmg7_05]              = "mg7_05";              PRM[prmmg7_05]              = 300;  PRM_type[prmmg7_05]              = TE_type; /* Maximale groentijd MG7 05                                                                                                      */
    PRM_code[prmmg7_08]              = "mg7_08";              PRM[prmmg7_08]              = 250;  PRM_type[prmmg7_08]              = TE_type; /* Maximale groentijd MG7 08                                                                                                      */
    PRM_code[prmmg7_09]              = "mg7_09";              PRM[prmmg7_09]              = 200;  PRM_type[prmmg7_09]              = TE_type; /* Maximale groentijd MG7 09                                                                                                      */
    PRM_code[prmmg7_11]              = "mg7_11";              PRM[prmmg7_11]              = 250;  PRM_type[prmmg7_11]              = TE_type; /* Maximale groentijd MG7 11                                                                                                      */
    PRM_code[prmmg7_21]              = "mg7_21";              PRM[prmmg7_21]              = 150;  PRM_type[prmmg7_21]              = TE_type; /* Maximale groentijd MG7 21                                                                                                      */
    PRM_code[prmmg7_22]              = "mg7_22";              PRM[prmmg7_22]              = 150;  PRM_type[prmmg7_22]              = TE_type; /* Maximale groentijd MG7 22                                                                                                      */
    PRM_code[prmmg7_24]              = "mg7_24";              PRM[prmmg7_24]              = 150;  PRM_type[prmmg7_24]              = TE_type; /* Maximale groentijd MG7 24                                                                                                      */
    PRM_code[prmmg7_26]              = "mg7_26";              PRM[prmmg7_26]              = 150;  PRM_type[prmmg7_26]              = TE_type; /* Maximale groentijd MG7 26                                                                                                      */
    PRM_code[prmmg7_28]              = "mg7_28";              PRM[prmmg7_28]              = 150;  PRM_type[prmmg7_28]              = TE_type; /* Maximale groentijd MG7 28                                                                                                      */
    PRM_code[prmmg7_61]              = "mg7_61";              PRM[prmmg7_61]              = 50;   PRM_type[prmmg7_61]              = TE_type; /* Maximale groentijd MG7 61                                                                                                      */
    PRM_code[prmmg7_62]              = "mg7_62";              PRM[prmmg7_62]              = 50;   PRM_type[prmmg7_62]              = TE_type; /* Maximale groentijd MG7 62                                                                                                      */
    PRM_code[prmmg7_67]              = "mg7_67";              PRM[prmmg7_67]              = 50;   PRM_type[prmmg7_67]              = TE_type; /* Maximale groentijd MG7 67                                                                                                      */
    PRM_code[prmmg7_68]              = "mg7_68";              PRM[prmmg7_68]              = 50;   PRM_type[prmmg7_68]              = TE_type; /* Maximale groentijd MG7 68                                                                                                      */
    PRM_code[prmmg7_81]              = "mg7_81";              PRM[prmmg7_81]              = 150;  PRM_type[prmmg7_81]              = TE_type; /* Maximale groentijd MG7 81                                                                                                      */
    PRM_code[prmmg7_82]              = "mg7_82";              PRM[prmmg7_82]              = 150;  PRM_type[prmmg7_82]              = TE_type; /* Maximale groentijd MG7 82                                                                                                      */
    PRM_code[prmmg7_84]              = "mg7_84";              PRM[prmmg7_84]              = 150;  PRM_type[prmmg7_84]              = TE_type; /* Maximale groentijd MG7 84                                                                                                      */
    PRM_code[prmrisapproachid02]     = "risapproachid02";     PRM[prmrisapproachid02]     = 0;                                                /* Approach id voor fase 02                                                                                                       */
    PRM_code[prmrisapproachid03]     = "risapproachid03";     PRM[prmrisapproachid03]     = 0;                                                /* Approach id voor fase 03                                                                                                       */
    PRM_code[prmrisapproachid05]     = "risapproachid05";     PRM[prmrisapproachid05]     = 0;                                                /* Approach id voor fase 05                                                                                                       */
    PRM_code[prmrisapproachid08]     = "risapproachid08";     PRM[prmrisapproachid08]     = 0;                                                /* Approach id voor fase 08                                                                                                       */
    PRM_code[prmrisapproachid09]     = "risapproachid09";     PRM[prmrisapproachid09]     = 0;                                                /* Approach id voor fase 09                                                                                                       */
    PRM_code[prmrisapproachid11]     = "risapproachid11";     PRM[prmrisapproachid11]     = 0;                                                /* Approach id voor fase 11                                                                                                       */
    PRM_code[prmrisapproachid21]     = "risapproachid21";     PRM[prmrisapproachid21]     = 0;                                                /* Approach id voor fase 21                                                                                                       */
    PRM_code[prmrisapproachid22]     = "risapproachid22";     PRM[prmrisapproachid22]     = 0;                                                /* Approach id voor fase 22                                                                                                       */
    PRM_code[prmrisapproachid24]     = "risapproachid24";     PRM[prmrisapproachid24]     = 0;                                                /* Approach id voor fase 24                                                                                                       */
    PRM_code[prmrisapproachid26]     = "risapproachid26";     PRM[prmrisapproachid26]     = 0;                                                /* Approach id voor fase 26                                                                                                       */
    PRM_code[prmrisapproachid28]     = "risapproachid28";     PRM[prmrisapproachid28]     = 0;                                                /* Approach id voor fase 28                                                                                                       */
    PRM_code[prmrisapproachid31]     = "risapproachid31";     PRM[prmrisapproachid31]     = 0;                                                /* Approach id voor fase 31                                                                                                       */
    PRM_code[prmrisapproachid32]     = "risapproachid32";     PRM[prmrisapproachid32]     = 0;                                                /* Approach id voor fase 32                                                                                                       */
    PRM_code[prmrisapproachid33]     = "risapproachid33";     PRM[prmrisapproachid33]     = 0;                                                /* Approach id voor fase 33                                                                                                       */
    PRM_code[prmrisapproachid34]     = "risapproachid34";     PRM[prmrisapproachid34]     = 0;                                                /* Approach id voor fase 34                                                                                                       */
    PRM_code[prmrisapproachid38]     = "risapproachid38";     PRM[prmrisapproachid38]     = 0;                                                /* Approach id voor fase 38                                                                                                       */
    PRM_code[prmrisapproachid61]     = "risapproachid61";     PRM[prmrisapproachid61]     = 0;                                                /* Approach id voor fase 61                                                                                                       */
    PRM_code[prmrisapproachid62]     = "risapproachid62";     PRM[prmrisapproachid62]     = 0;                                                /* Approach id voor fase 62                                                                                                       */
    PRM_code[prmrisapproachid67]     = "risapproachid67";     PRM[prmrisapproachid67]     = 0;                                                /* Approach id voor fase 67                                                                                                       */
    PRM_code[prmrisapproachid68]     = "risapproachid68";     PRM[prmrisapproachid68]     = 0;                                                /* Approach id voor fase 68                                                                                                       */
    PRM_code[prmrisapproachid81]     = "risapproachid81";     PRM[prmrisapproachid81]     = 0;                                                /* Approach id voor fase 81                                                                                                       */
    PRM_code[prmrisapproachid84]     = "risapproachid84";     PRM[prmrisapproachid84]     = 0;                                                /* Approach id voor fase 84                                                                                                       */
    PRM_code[prmrisapproachid82]     = "risapproachid82";     PRM[prmrisapproachid82]     = 0;                                                /* Approach id voor fase 82                                                                                                       */
    PRM_code[prmrislaneid02_1]       = "rislaneid02_1";       PRM[prmrislaneid02_1]       = 1;                                                /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    PRM_code[prmrislaneid02_2]       = "rislaneid02_2";       PRM[prmrislaneid02_2]       = 2;                                                /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    PRM_code[prmrislaneid03_1]       = "rislaneid03_1";       PRM[prmrislaneid03_1]       = 3;                                                /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    PRM_code[prmrislaneid05_1]       = "rislaneid05_1";       PRM[prmrislaneid05_1]       = 4;                                                /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    PRM_code[prmrislaneid08_1]       = "rislaneid08_1";       PRM[prmrislaneid08_1]       = 5;                                                /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    PRM_code[prmrislaneid08_2]       = "rislaneid08_2";       PRM[prmrislaneid08_2]       = 6;                                                /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    PRM_code[prmrislaneid09_1]       = "rislaneid09_1";       PRM[prmrislaneid09_1]       = 7;                                                /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    PRM_code[prmrislaneid11_1]       = "rislaneid11_1";       PRM[prmrislaneid11_1]       = 8;                                                /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    PRM_code[prmrislaneid21_1]       = "rislaneid21_1";       PRM[prmrislaneid21_1]       = 9;                                                /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    PRM_code[prmrislaneid22_1]       = "rislaneid22_1";       PRM[prmrislaneid22_1]       = 10;                                               /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    PRM_code[prmrislaneid24_1]       = "rislaneid24_1";       PRM[prmrislaneid24_1]       = 11;                                               /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    PRM_code[prmrislaneid26_1]       = "rislaneid26_1";       PRM[prmrislaneid26_1]       = 12;                                               /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    PRM_code[prmrislaneid28_1]       = "rislaneid28_1";       PRM[prmrislaneid28_1]       = 13;                                               /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    PRM_code[prmrislaneid31_1]       = "rislaneid31_1";       PRM[prmrislaneid31_1]       = 14;                                               /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    PRM_code[prmrislaneid31_2]       = "rislaneid31_2";       PRM[prmrislaneid31_2]       = 15;                                               /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    PRM_code[prmrislaneid32_1]       = "rislaneid32_1";       PRM[prmrislaneid32_1]       = 16;                                               /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    PRM_code[prmrislaneid32_2]       = "rislaneid32_2";       PRM[prmrislaneid32_2]       = 17;                                               /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    PRM_code[prmrislaneid33_1]       = "rislaneid33_1";       PRM[prmrislaneid33_1]       = 18;                                               /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    PRM_code[prmrislaneid33_2]       = "rislaneid33_2";       PRM[prmrislaneid33_2]       = 19;                                               /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    PRM_code[prmrislaneid34_1]       = "rislaneid34_1";       PRM[prmrislaneid34_1]       = 20;                                               /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    PRM_code[prmrislaneid34_2]       = "rislaneid34_2";       PRM[prmrislaneid34_2]       = 21;                                               /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    PRM_code[prmrislaneid38_1]       = "rislaneid38_1";       PRM[prmrislaneid38_1]       = 22;                                               /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    PRM_code[prmrislaneid38_2]       = "rislaneid38_2";       PRM[prmrislaneid38_2]       = 23;                                               /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    PRM_code[prmrislaneid61_1]       = "rislaneid61_1";       PRM[prmrislaneid61_1]       = 24;                                               /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    PRM_code[prmrislaneid62_1]       = "rislaneid62_1";       PRM[prmrislaneid62_1]       = 25;                                               /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    PRM_code[prmrislaneid62_2]       = "rislaneid62_2";       PRM[prmrislaneid62_2]       = 26;                                               /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    PRM_code[prmrislaneid67_1]       = "rislaneid67_1";       PRM[prmrislaneid67_1]       = 27;                                               /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    PRM_code[prmrislaneid68_1]       = "rislaneid68_1";       PRM[prmrislaneid68_1]       = 28;                                               /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    PRM_code[prmrislaneid68_2]       = "rislaneid68_2";       PRM[prmrislaneid68_2]       = 29;                                               /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    PRM_code[prmrislaneid81_1]       = "rislaneid81_1";       PRM[prmrislaneid81_1]       = 0;                                                /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    PRM_code[prmrislaneid84_1]       = "rislaneid84_1";       PRM[prmrislaneid84_1]       = 30;                                               /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    PRM_code[prmrislaneid82_1]       = "rislaneid82_1";       PRM[prmrislaneid82_1]       = 0;                                                /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    PRM_code[prmrisastart02mveh1]    = "risastart02mveh1";    PRM[prmrisastart02mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    PRM_code[prmrisastart02mveh2]    = "risastart02mveh2";    PRM[prmrisastart02mveh2]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    PRM_code[prmrisastart03mveh1]    = "risastart03mveh1";    PRM[prmrisastart03mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    PRM_code[prmrisastart05mveh1]    = "risastart05mveh1";    PRM[prmrisastart05mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    PRM_code[prmrisastart08mveh1]    = "risastart08mveh1";    PRM[prmrisastart08mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    PRM_code[prmrisastart08mveh2]    = "risastart08mveh2";    PRM[prmrisastart08mveh2]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    PRM_code[prmrisastart09mveh1]    = "risastart09mveh1";    PRM[prmrisastart09mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    PRM_code[prmrisastart11mveh1]    = "risastart11mveh1";    PRM[prmrisastart11mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    PRM_code[prmrisastart21fts1]     = "risastart21fts1";     PRM[prmrisastart21fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    PRM_code[prmrisastart22fts1]     = "risastart22fts1";     PRM[prmrisastart22fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    PRM_code[prmrisastart24fts1]     = "risastart24fts1";     PRM[prmrisastart24fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    PRM_code[prmrisastart26fts1]     = "risastart26fts1";     PRM[prmrisastart26fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    PRM_code[prmrisastart28fts1]     = "risastart28fts1";     PRM[prmrisastart28fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    PRM_code[prmrisastart31vtg1]     = "risastart31vtg1";     PRM[prmrisastart31vtg1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    PRM_code[prmrisastart31vtg2]     = "risastart31vtg2";     PRM[prmrisastart31vtg2]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    PRM_code[prmrisastart81fts1]     = "risastart81fts1";     PRM[prmrisastart81fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    PRM_code[prmrisastart84fts1]     = "risastart84fts1";     PRM[prmrisastart84fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    PRM_code[prmrisastart82fts1]     = "risastart82fts1";     PRM[prmrisastart82fts1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    PRM_code[prmrisastart68mveh2]    = "risastart68mveh2";    PRM[prmrisastart68mveh2]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    PRM_code[prmrisastart68mveh1]    = "risastart68mveh1";    PRM[prmrisastart68mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    PRM_code[prmrisastart67mveh1]    = "risastart67mveh1";    PRM[prmrisastart67mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    PRM_code[prmrisastart62mveh2]    = "risastart62mveh2";    PRM[prmrisastart62mveh2]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    PRM_code[prmrisastart62mveh1]    = "risastart62mveh1";    PRM[prmrisastart62mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    PRM_code[prmrisastart61mveh1]    = "risastart61mveh1";    PRM[prmrisastart61mveh1]    = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    PRM_code[prmrisastart38vtg2]     = "risastart38vtg2";     PRM[prmrisastart38vtg2]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    PRM_code[prmrisastart38vtg1]     = "risastart38vtg1";     PRM[prmrisastart38vtg1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    PRM_code[prmrisastart34vtg2]     = "risastart34vtg2";     PRM[prmrisastart34vtg2]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    PRM_code[prmrisastart34vtg1]     = "risastart34vtg1";     PRM[prmrisastart34vtg1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    PRM_code[prmrisastart33vtg2]     = "risastart33vtg2";     PRM[prmrisastart33vtg2]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    PRM_code[prmrisastart33vtg1]     = "risastart33vtg1";     PRM[prmrisastart33vtg1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    PRM_code[prmrisastart32vtg2]     = "risastart32vtg2";     PRM[prmrisastart32vtg2]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    PRM_code[prmrisastart32vtg1]     = "risastart32vtg1";     PRM[prmrisastart32vtg1]     = 0;                                                /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    PRM_code[prmrisaend02mveh1]      = "risaend02mveh1";      PRM[prmrisaend02mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    PRM_code[prmrisaend02mveh2]      = "risaend02mveh2";      PRM[prmrisaend02mveh2]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    PRM_code[prmrisaend03mveh1]      = "risaend03mveh1";      PRM[prmrisaend03mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    PRM_code[prmrisaend05mveh1]      = "risaend05mveh1";      PRM[prmrisaend05mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    PRM_code[prmrisaend08mveh1]      = "risaend08mveh1";      PRM[prmrisaend08mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    PRM_code[prmrisaend08mveh2]      = "risaend08mveh2";      PRM[prmrisaend08mveh2]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    PRM_code[prmrisaend09mveh1]      = "risaend09mveh1";      PRM[prmrisaend09mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    PRM_code[prmrisaend11mveh1]      = "risaend11mveh1";      PRM[prmrisaend11mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    PRM_code[prmrisaend21fts1]       = "risaend21fts1";       PRM[prmrisaend21fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    PRM_code[prmrisaend22fts1]       = "risaend22fts1";       PRM[prmrisaend22fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    PRM_code[prmrisaend24fts1]       = "risaend24fts1";       PRM[prmrisaend24fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    PRM_code[prmrisaend26fts1]       = "risaend26fts1";       PRM[prmrisaend26fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    PRM_code[prmrisaend28fts1]       = "risaend28fts1";       PRM[prmrisaend28fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    PRM_code[prmrisaend31vtg1]       = "risaend31vtg1";       PRM[prmrisaend31vtg1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    PRM_code[prmrisaend31vtg2]       = "risaend31vtg2";       PRM[prmrisaend31vtg2]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    PRM_code[prmrisaend81fts1]       = "risaend81fts1";       PRM[prmrisaend81fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    PRM_code[prmrisaend84fts1]       = "risaend84fts1";       PRM[prmrisaend84fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    PRM_code[prmrisaend82fts1]       = "risaend82fts1";       PRM[prmrisaend82fts1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    PRM_code[prmrisaend68mveh2]      = "risaend68mveh2";      PRM[prmrisaend68mveh2]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    PRM_code[prmrisaend68mveh1]      = "risaend68mveh1";      PRM[prmrisaend68mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    PRM_code[prmrisaend67mveh1]      = "risaend67mveh1";      PRM[prmrisaend67mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    PRM_code[prmrisaend62mveh2]      = "risaend62mveh2";      PRM[prmrisaend62mveh2]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    PRM_code[prmrisaend62mveh1]      = "risaend62mveh1";      PRM[prmrisaend62mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    PRM_code[prmrisaend61mveh1]      = "risaend61mveh1";      PRM[prmrisaend61mveh1]      = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    PRM_code[prmrisaend38vtg2]       = "risaend38vtg2";       PRM[prmrisaend38vtg2]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    PRM_code[prmrisaend38vtg1]       = "risaend38vtg1";       PRM[prmrisaend38vtg1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    PRM_code[prmrisaend34vtg2]       = "risaend34vtg2";       PRM[prmrisaend34vtg2]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    PRM_code[prmrisaend34vtg1]       = "risaend34vtg1";       PRM[prmrisaend34vtg1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    PRM_code[prmrisaend33vtg2]       = "risaend33vtg2";       PRM[prmrisaend33vtg2]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    PRM_code[prmrisaend33vtg1]       = "risaend33vtg1";       PRM[prmrisaend33vtg1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    PRM_code[prmrisaend32vtg2]       = "risaend32vtg2";       PRM[prmrisaend32vtg2]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    PRM_code[prmrisaend32vtg1]       = "risaend32vtg1";       PRM[prmrisaend32vtg1]       = 0;                                                /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    PRM_code[prmrisvstart02mveh1]    = "risvstart02mveh1";    PRM[prmrisvstart02mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    PRM_code[prmrisvstart02mveh2]    = "risvstart02mveh2";    PRM[prmrisvstart02mveh2]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    PRM_code[prmrisvstart03mveh1]    = "risvstart03mveh1";    PRM[prmrisvstart03mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    PRM_code[prmrisvstart05mveh1]    = "risvstart05mveh1";    PRM[prmrisvstart05mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    PRM_code[prmrisvstart08mveh1]    = "risvstart08mveh1";    PRM[prmrisvstart08mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    PRM_code[prmrisvstart08mveh2]    = "risvstart08mveh2";    PRM[prmrisvstart08mveh2]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    PRM_code[prmrisvstart09mveh1]    = "risvstart09mveh1";    PRM[prmrisvstart09mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    PRM_code[prmrisvstart11mveh1]    = "risvstart11mveh1";    PRM[prmrisvstart11mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    PRM_code[prmrisvstart21fts1]     = "risvstart21fts1";     PRM[prmrisvstart21fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    PRM_code[prmrisvstart22fts1]     = "risvstart22fts1";     PRM[prmrisvstart22fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    PRM_code[prmrisvstart24fts1]     = "risvstart24fts1";     PRM[prmrisvstart24fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    PRM_code[prmrisvstart26fts1]     = "risvstart26fts1";     PRM[prmrisvstart26fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    PRM_code[prmrisvstart28fts1]     = "risvstart28fts1";     PRM[prmrisvstart28fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    PRM_code[prmrisvstart31vtg1]     = "risvstart31vtg1";     PRM[prmrisvstart31vtg1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    PRM_code[prmrisvstart31vtg2]     = "risvstart31vtg2";     PRM[prmrisvstart31vtg2]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    PRM_code[prmrisvstart81fts1]     = "risvstart81fts1";     PRM[prmrisvstart81fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    PRM_code[prmrisvstart84fts1]     = "risvstart84fts1";     PRM[prmrisvstart84fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    PRM_code[prmrisvstart82fts1]     = "risvstart82fts1";     PRM[prmrisvstart82fts1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    PRM_code[prmrisvstart68mveh2]    = "risvstart68mveh2";    PRM[prmrisvstart68mveh2]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    PRM_code[prmrisvstart68mveh1]    = "risvstart68mveh1";    PRM[prmrisvstart68mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    PRM_code[prmrisvstart67mveh1]    = "risvstart67mveh1";    PRM[prmrisvstart67mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    PRM_code[prmrisvstart62mveh2]    = "risvstart62mveh2";    PRM[prmrisvstart62mveh2]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    PRM_code[prmrisvstart62mveh1]    = "risvstart62mveh1";    PRM[prmrisvstart62mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    PRM_code[prmrisvstart61mveh1]    = "risvstart61mveh1";    PRM[prmrisvstart61mveh1]    = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    PRM_code[prmrisvstart38vtg2]     = "risvstart38vtg2";     PRM[prmrisvstart38vtg2]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    PRM_code[prmrisvstart38vtg1]     = "risvstart38vtg1";     PRM[prmrisvstart38vtg1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    PRM_code[prmrisvstart34vtg2]     = "risvstart34vtg2";     PRM[prmrisvstart34vtg2]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    PRM_code[prmrisvstart34vtg1]     = "risvstart34vtg1";     PRM[prmrisvstart34vtg1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    PRM_code[prmrisvstart33vtg2]     = "risvstart33vtg2";     PRM[prmrisvstart33vtg2]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    PRM_code[prmrisvstart33vtg1]     = "risvstart33vtg1";     PRM[prmrisvstart33vtg1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    PRM_code[prmrisvstart32vtg2]     = "risvstart32vtg2";     PRM[prmrisvstart32vtg2]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    PRM_code[prmrisvstart32vtg1]     = "risvstart32vtg1";     PRM[prmrisvstart32vtg1]     = 0;                                                /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    PRM_code[prmrisvend02mveh1]      = "risvend02mveh1";      PRM[prmrisvend02mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    PRM_code[prmrisvend02mveh2]      = "risvend02mveh2";      PRM[prmrisvend02mveh2]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    PRM_code[prmrisvend03mveh1]      = "risvend03mveh1";      PRM[prmrisvend03mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    PRM_code[prmrisvend05mveh1]      = "risvend05mveh1";      PRM[prmrisvend05mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    PRM_code[prmrisvend08mveh1]      = "risvend08mveh1";      PRM[prmrisvend08mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    PRM_code[prmrisvend08mveh2]      = "risvend08mveh2";      PRM[prmrisvend08mveh2]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    PRM_code[prmrisvend09mveh1]      = "risvend09mveh1";      PRM[prmrisvend09mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    PRM_code[prmrisvend11mveh1]      = "risvend11mveh1";      PRM[prmrisvend11mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    PRM_code[prmrisvend21fts1]       = "risvend21fts1";       PRM[prmrisvend21fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    PRM_code[prmrisvend22fts1]       = "risvend22fts1";       PRM[prmrisvend22fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    PRM_code[prmrisvend24fts1]       = "risvend24fts1";       PRM[prmrisvend24fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    PRM_code[prmrisvend26fts1]       = "risvend26fts1";       PRM[prmrisvend26fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    PRM_code[prmrisvend28fts1]       = "risvend28fts1";       PRM[prmrisvend28fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    PRM_code[prmrisvend31vtg1]       = "risvend31vtg1";       PRM[prmrisvend31vtg1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    PRM_code[prmrisvend31vtg2]       = "risvend31vtg2";       PRM[prmrisvend31vtg2]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    PRM_code[prmrisvend81fts1]       = "risvend81fts1";       PRM[prmrisvend81fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    PRM_code[prmrisvend84fts1]       = "risvend84fts1";       PRM[prmrisvend84fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    PRM_code[prmrisvend82fts1]       = "risvend82fts1";       PRM[prmrisvend82fts1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    PRM_code[prmrisvend68mveh2]      = "risvend68mveh2";      PRM[prmrisvend68mveh2]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    PRM_code[prmrisvend68mveh1]      = "risvend68mveh1";      PRM[prmrisvend68mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    PRM_code[prmrisvend67mveh1]      = "risvend67mveh1";      PRM[prmrisvend67mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    PRM_code[prmrisvend62mveh2]      = "risvend62mveh2";      PRM[prmrisvend62mveh2]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    PRM_code[prmrisvend62mveh1]      = "risvend62mveh1";      PRM[prmrisvend62mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    PRM_code[prmrisvend61mveh1]      = "risvend61mveh1";      PRM[prmrisvend61mveh1]      = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    PRM_code[prmrisvend38vtg2]       = "risvend38vtg2";       PRM[prmrisvend38vtg2]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    PRM_code[prmrisvend38vtg1]       = "risvend38vtg1";       PRM[prmrisvend38vtg1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    PRM_code[prmrisvend34vtg2]       = "risvend34vtg2";       PRM[prmrisvend34vtg2]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    PRM_code[prmrisvend34vtg1]       = "risvend34vtg1";       PRM[prmrisvend34vtg1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    PRM_code[prmrisvend33vtg2]       = "risvend33vtg2";       PRM[prmrisvend33vtg2]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    PRM_code[prmrisvend33vtg1]       = "risvend33vtg1";       PRM[prmrisvend33vtg1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    PRM_code[prmrisvend32vtg2]       = "risvend32vtg2";       PRM[prmrisvend32vtg2]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    PRM_code[prmrisvend32vtg1]       = "risvend32vtg1";       PRM[prmrisvend32vtg1]       = 0;                                                /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    PRM_code[prmmkrgd24_3]           = "mkrgd24_3";           PRM[prmmkrgd24_3]           = 3;                                                /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    PRM_code[prmrgv]                 = "rgv";                 PRM[prmrgv]                 = 2;                                                /* Type RoBuGrover                                                                                                                */
    PRM_code[prmmin_tcyclus]         = "min_tcyclus";         PRM[prmmin_tcyclus]         = 900;  PRM_type[prmmin_tcyclus]         = TE_type; /* Minimale cyclustijd                                                                                                            */
    PRM_code[prmmax_tcyclus]         = "max_tcyclus";         PRM[prmmax_tcyclus]         = 1500; PRM_type[prmmax_tcyclus]         = TE_type; /* Maximale cyclustijd                                                                                                            */
    PRM_code[prmtvg_omhoog]          = "tvg_omhoog";          PRM[prmtvg_omhoog]          = 50;   PRM_type[prmtvg_omhoog]          = TE_type; /* Hoeveelheid ophogen TVG                                                                                                        */
    PRM_code[prmtvg_omlaag]          = "tvg_omlaag";          PRM[prmtvg_omlaag]          = 20;   PRM_type[prmtvg_omlaag]          = TE_type; /* Hoeveelheid verlagen TVG                                                                                                       */
    PRM_code[prmtvg_verschil]        = "tvg_verschil";        PRM[prmtvg_verschil]        = 50;   PRM_type[prmtvg_verschil]        = TE_type; /* Parameter verschil                                                                                                             */
    PRM_code[prmtvg_npr_omlaag]      = "tvg_npr_omlaag";      PRM[prmtvg_npr_omlaag]      = 50;   PRM_type[prmtvg_npr_omlaag]      = TE_type; /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    PRM_code[prmmintvg_02]           = "mintvg_02";           PRM[prmmintvg_02]           = 100;  PRM_type[prmmintvg_02]           = TE_type; /* Minimale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmaxtvg_02]           = "maxtvg_02";           PRM[prmmaxtvg_02]           = 500;  PRM_type[prmmaxtvg_02]           = TE_type; /* Maximale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmintvg_03]           = "mintvg_03";           PRM[prmmintvg_03]           = 100;  PRM_type[prmmintvg_03]           = TE_type; /* Minimale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmaxtvg_03]           = "maxtvg_03";           PRM[prmmaxtvg_03]           = 500;  PRM_type[prmmaxtvg_03]           = TE_type; /* Maximale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmintvg_05]           = "mintvg_05";           PRM[prmmintvg_05]           = 100;  PRM_type[prmmintvg_05]           = TE_type; /* Minimale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmaxtvg_05]           = "maxtvg_05";           PRM[prmmaxtvg_05]           = 500;  PRM_type[prmmaxtvg_05]           = TE_type; /* Maximale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmintvg_08]           = "mintvg_08";           PRM[prmmintvg_08]           = 100;  PRM_type[prmmintvg_08]           = TE_type; /* Minimale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmaxtvg_08]           = "maxtvg_08";           PRM[prmmaxtvg_08]           = 500;  PRM_type[prmmaxtvg_08]           = TE_type; /* Maximale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmintvg_09]           = "mintvg_09";           PRM[prmmintvg_09]           = 100;  PRM_type[prmmintvg_09]           = TE_type; /* Minimale verlenggroentijd fase 09                                                                                              */
    PRM_code[prmmaxtvg_09]           = "maxtvg_09";           PRM[prmmaxtvg_09]           = 500;  PRM_type[prmmaxtvg_09]           = TE_type; /* Maximale verlenggroentijd fase 09                                                                                              */
    PRM_code[prmmintvg_11]           = "mintvg_11";           PRM[prmmintvg_11]           = 100;  PRM_type[prmmintvg_11]           = TE_type; /* Minimale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmaxtvg_11]           = "maxtvg_11";           PRM[prmmaxtvg_11]           = 500;  PRM_type[prmmaxtvg_11]           = TE_type; /* Maximale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmintvg_22]           = "mintvg_22";           PRM[prmmintvg_22]           = 40;   PRM_type[prmmintvg_22]           = TE_type; /* Minimale verlenggroentijd fase 22                                                                                              */
    PRM_code[prmmaxtvg_22]           = "maxtvg_22";           PRM[prmmaxtvg_22]           = 150;  PRM_type[prmmaxtvg_22]           = TE_type; /* Maximale verlenggroentijd fase 22                                                                                              */
    PRM_code[prmmintvg_28]           = "mintvg_28";           PRM[prmmintvg_28]           = 40;   PRM_type[prmmintvg_28]           = TE_type; /* Minimale verlenggroentijd fase 28                                                                                              */
    PRM_code[prmmaxtvg_28]           = "maxtvg_28";           PRM[prmmaxtvg_28]           = 150;  PRM_type[prmmaxtvg_28]           = TE_type; /* Maximale verlenggroentijd fase 28                                                                                              */
    PRM_code[prmmintvg_68]           = "mintvg_68";           PRM[prmmintvg_68]           = 100;  PRM_type[prmmintvg_68]           = TE_type; /* Minimale verlenggroentijd fase 68                                                                                              */
    PRM_code[prmmaxtvg_68]           = "maxtvg_68";           PRM[prmmaxtvg_68]           = 500;  PRM_type[prmmaxtvg_68]           = TE_type; /* Maximale verlenggroentijd fase 68                                                                                              */
    PRM_code[prmmaxtvgvlog]          = "maxtvgvlog";          PRM[prmmaxtvgvlog]          = 5;    PRM_type[prmmaxtvgvlog]          = CT_type; /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    PRM_code[prmmaxtfbvlog]          = "maxtfbvlog";          PRM[prmmaxtfbvlog]          = 90;   PRM_type[prmmaxtfbvlog]          = TS_type; /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    PRM_code[prmmlfpr02]             = "mlfpr02";             PRM[prmmlfpr02]             = 1;                                                /* Maximaal aantal modules vooruit fase 02                                                                                        */
    PRM_code[prmmlfpr03]             = "mlfpr03";             PRM[prmmlfpr03]             = 1;                                                /* Maximaal aantal modules vooruit fase 03                                                                                        */
    PRM_code[prmmlfpr05]             = "mlfpr05";             PRM[prmmlfpr05]             = 1;                                                /* Maximaal aantal modules vooruit fase 05                                                                                        */
    PRM_code[prmmlfpr08]             = "mlfpr08";             PRM[prmmlfpr08]             = 1;                                                /* Maximaal aantal modules vooruit fase 08                                                                                        */
    PRM_code[prmmlfpr09]             = "mlfpr09";             PRM[prmmlfpr09]             = 1;                                                /* Maximaal aantal modules vooruit fase 09                                                                                        */
    PRM_code[prmmlfpr11]             = "mlfpr11";             PRM[prmmlfpr11]             = 1;                                                /* Maximaal aantal modules vooruit fase 11                                                                                        */
    PRM_code[prmmlfpr21]             = "mlfpr21";             PRM[prmmlfpr21]             = 1;                                                /* Maximaal aantal modules vooruit fase 21                                                                                        */
    PRM_code[prmmlfpr22]             = "mlfpr22";             PRM[prmmlfpr22]             = 1;                                                /* Maximaal aantal modules vooruit fase 22                                                                                        */
    PRM_code[prmmlfpr24]             = "mlfpr24";             PRM[prmmlfpr24]             = 1;                                                /* Maximaal aantal modules vooruit fase 24                                                                                        */
    PRM_code[prmmlfpr26]             = "mlfpr26";             PRM[prmmlfpr26]             = 1;                                                /* Maximaal aantal modules vooruit fase 26                                                                                        */
    PRM_code[prmmlfpr28]             = "mlfpr28";             PRM[prmmlfpr28]             = 1;                                                /* Maximaal aantal modules vooruit fase 28                                                                                        */
    PRM_code[prmmlfpr31]             = "mlfpr31";             PRM[prmmlfpr31]             = 1;                                                /* Maximaal aantal modules vooruit fase 31                                                                                        */
    PRM_code[prmmlfpr32]             = "mlfpr32";             PRM[prmmlfpr32]             = 1;                                                /* Maximaal aantal modules vooruit fase 32                                                                                        */
    PRM_code[prmmlfpr33]             = "mlfpr33";             PRM[prmmlfpr33]             = 2;                                                /* Maximaal aantal modules vooruit fase 33                                                                                        */
    PRM_code[prmmlfpr34]             = "mlfpr34";             PRM[prmmlfpr34]             = 1;                                                /* Maximaal aantal modules vooruit fase 34                                                                                        */
    PRM_code[prmmlfpr38]             = "mlfpr38";             PRM[prmmlfpr38]             = 1;                                                /* Maximaal aantal modules vooruit fase 38                                                                                        */
    PRM_code[prmmlfpr61]             = "mlfpr61";             PRM[prmmlfpr61]             = 1;                                                /* Maximaal aantal modules vooruit fase 61                                                                                        */
    PRM_code[prmmlfpr62]             = "mlfpr62";             PRM[prmmlfpr62]             = 1;                                                /* Maximaal aantal modules vooruit fase 62                                                                                        */
    PRM_code[prmmlfpr67]             = "mlfpr67";             PRM[prmmlfpr67]             = 1;                                                /* Maximaal aantal modules vooruit fase 67                                                                                        */
    PRM_code[prmmlfpr68]             = "mlfpr68";             PRM[prmmlfpr68]             = 1;                                                /* Maximaal aantal modules vooruit fase 68                                                                                        */
    PRM_code[prmmlfpr82]             = "mlfpr82";             PRM[prmmlfpr82]             = 1;                                                /* Maximaal aantal modules vooruit fase 82                                                                                        */
    PRM_code[prmmlfpr84]             = "mlfpr84";             PRM[prmmlfpr84]             = 1;                                                /* Maximaal aantal modules vooruit fase 84                                                                                        */
    PRM_code[prmmlfpr81]             = "mlfpr81";             PRM[prmmlfpr81]             = 1;                                                /* Maximaal aantal modules vooruit fase 81                                                                                        */
    PRM_code[prmaltg02]              = "altg02";              PRM[prmaltg02]              = 60;   PRM_type[prmaltg02]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    PRM_code[prmaltp02]              = "altp02";              PRM[prmaltp02]              = 60;   PRM_type[prmaltp02]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    PRM_code[prmaltg03]              = "altg03";              PRM[prmaltg03]              = 60;   PRM_type[prmaltg03]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    PRM_code[prmaltp03]              = "altp03";              PRM[prmaltp03]              = 60;   PRM_type[prmaltp03]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    PRM_code[prmaltg05]              = "altg05";              PRM[prmaltg05]              = 60;   PRM_type[prmaltg05]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    PRM_code[prmaltp05]              = "altp05";              PRM[prmaltp05]              = 60;   PRM_type[prmaltp05]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    PRM_code[prmaltg08]              = "altg08";              PRM[prmaltg08]              = 60;   PRM_type[prmaltg08]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    PRM_code[prmaltp08]              = "altp08";              PRM[prmaltp08]              = 60;   PRM_type[prmaltp08]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    PRM_code[prmaltg09]              = "altg09";              PRM[prmaltg09]              = 60;   PRM_type[prmaltg09]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    PRM_code[prmaltp09]              = "altp09";              PRM[prmaltp09]              = 60;   PRM_type[prmaltp09]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    PRM_code[prmaltg11]              = "altg11";              PRM[prmaltg11]              = 60;   PRM_type[prmaltg11]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    PRM_code[prmaltp11]              = "altp11";              PRM[prmaltp11]              = 60;   PRM_type[prmaltp11]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    PRM_code[prmaltg21]              = "altg21";              PRM[prmaltg21]              = 60;   PRM_type[prmaltg21]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    PRM_code[prmaltp21]              = "altp21";              PRM[prmaltp21]              = 60;   PRM_type[prmaltp21]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    PRM_code[prmaltg22]              = "altg22";              PRM[prmaltg22]              = 60;   PRM_type[prmaltg22]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    PRM_code[prmaltp2232]            = "altp2232";            PRM[prmaltp2232]            = 60;   PRM_type[prmaltp2232]            = TE_type; /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    PRM_code[prmaltg24]              = "altg24";              PRM[prmaltg24]              = 60;   PRM_type[prmaltg24]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    PRM_code[prmaltp2434]            = "altp2434";            PRM[prmaltp2434]            = 60;   PRM_type[prmaltp2434]            = TE_type; /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    PRM_code[prmaltg26]              = "altg26";              PRM[prmaltg26]              = 60;   PRM_type[prmaltg26]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    PRM_code[prmaltp26]              = "altp26";              PRM[prmaltp26]              = 60;   PRM_type[prmaltp26]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    PRM_code[prmaltg28]              = "altg28";              PRM[prmaltg28]              = 60;   PRM_type[prmaltg28]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    PRM_code[prmaltp28]              = "altp28";              PRM[prmaltp28]              = 60;   PRM_type[prmaltp28]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    PRM_code[prmaltg31]              = "altg31";              PRM[prmaltg31]              = 60;   PRM_type[prmaltg31]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    PRM_code[prmaltp31]              = "altp31";              PRM[prmaltp31]              = 60;   PRM_type[prmaltp31]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    PRM_code[prmaltg32]              = "altg32";              PRM[prmaltg32]              = 60;   PRM_type[prmaltg32]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    PRM_code[prmaltg33]              = "altg33";              PRM[prmaltg33]              = 60;   PRM_type[prmaltg33]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    PRM_code[prmaltp3384]            = "altp3384";            PRM[prmaltp3384]            = 60;   PRM_type[prmaltp3384]            = TE_type; /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    PRM_code[prmaltg34]              = "altg34";              PRM[prmaltg34]              = 60;   PRM_type[prmaltg34]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    PRM_code[prmaltg38]              = "altg38";              PRM[prmaltg38]              = 60;   PRM_type[prmaltg38]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    PRM_code[prmaltp38]              = "altp38";              PRM[prmaltp38]              = 60;   PRM_type[prmaltp38]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    PRM_code[prmaltg61]              = "altg61";              PRM[prmaltg61]              = 60;   PRM_type[prmaltg61]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    PRM_code[prmaltp61]              = "altp61";              PRM[prmaltp61]              = 60;   PRM_type[prmaltp61]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    PRM_code[prmaltg62]              = "altg62";              PRM[prmaltg62]              = 60;   PRM_type[prmaltg62]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    PRM_code[prmaltp62]              = "altp62";              PRM[prmaltp62]              = 60;   PRM_type[prmaltp62]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    PRM_code[prmaltg67]              = "altg67";              PRM[prmaltg67]              = 60;   PRM_type[prmaltg67]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    PRM_code[prmaltp67]              = "altp67";              PRM[prmaltp67]              = 60;   PRM_type[prmaltp67]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    PRM_code[prmaltg68]              = "altg68";              PRM[prmaltg68]              = 60;   PRM_type[prmaltg68]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    PRM_code[prmaltp68]              = "altp68";              PRM[prmaltp68]              = 60;   PRM_type[prmaltp68]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    PRM_code[prmaltg82]              = "altg82";              PRM[prmaltg82]              = 60;   PRM_type[prmaltg82]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    PRM_code[prmaltp82]              = "altp82";              PRM[prmaltp82]              = 60;   PRM_type[prmaltp82]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    PRM_code[prmaltg84]              = "altg84";              PRM[prmaltg84]              = 60;   PRM_type[prmaltg84]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    PRM_code[prmaltg81]              = "altg81";              PRM[prmaltg81]              = 60;   PRM_type[prmaltg81]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    PRM_code[prmaltp81]              = "altp81";              PRM[prmaltp81]              = 60;   PRM_type[prmaltp81]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    PRM_code[prmtestdsivert]         = "testdsivert";         PRM[prmtestdsivert]         = 120;  PRM_type[prmtestdsivert]         = TS_type; /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    PRM_code[prmtestdsilyn]          = "testdsilyn";          PRM[prmtestdsilyn]          = 0;                                     /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    PRM_code[prmtestdsicat]          = "testdsicat";          PRM[prmtestdsicat]          = 10;                                    /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
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
    FC_type[fc84] = FTS_type;
    FC_type[fc82] = FTS_type;
    FC_type[fc81] = FTS_type;

/* Selectieve detectie */
/* ------------------- */
    DS_code[dsdummy] = "dsdummy";

/* modulen */
/* ------- */
    PRML[ML1][fc02] = PRIMAIR;
    PRML[ML1][fc02] = PRIMAIR;
    PRML[ML1][fc84] = PRIMAIR;
    PRML[ML1][fc68] = PRIMAIR;
    PRML[ML1][fc62] = PRIMAIR;
    PRML[ML1][fc61] = PRIMAIR;
    PRML[ML1][fc34] = PRIMAIR;
    PRML[ML1][fc33] = PRIMAIR;
    PRML[ML1][fc24] = PRIMAIR;
    PRML[ML1][fc08] = PRIMAIR;

    PRML[ML2][fc03] = PRIMAIR;
    PRML[ML2][fc28] = PRIMAIR;
    PRML[ML2][fc38] = PRIMAIR;
    PRML[ML2][fc81] = PRIMAIR;
    PRML[ML2][fc82] = PRIMAIR;

    PRML[ML3][fc09] = PRIMAIR;
    PRML[ML3][fc21] = PRIMAIR;
    PRML[ML3][fc32] = PRIMAIR;
    PRML[ML3][fc31] = PRIMAIR;
    PRML[ML3][fc22] = PRIMAIR;

    PRML[ML4][fc05] = PRIMAIR;
    PRML[ML4][fc11] = PRIMAIR;
    PRML[ML4][fc26] = PRIMAIR;
    PRML[ML4][fc67] = PRIMAIR;


#ifndef NO_VLOG
/* VLOG */
/* ---- */

    /* VLOG - logging */
    /* -------------- */
    LOGTYPE[LOGTYPE_DATI] = 1;
    LOGTYPE[LOGTYPE_DP] = 1;
    LOGTYPE[LOGTYPE_IS] = 15;
    LOGTYPE[LOGTYPE_FC] = 255;
    LOGTYPE[LOGTYPE_US] = 15;
    LOGTYPE[LOGTYPE_PS] = 3;
    LOGTYPE[LOGTYPE_DS] = 1;
#if !defined NO_VLOG_300
    LOGTYPE[LOGTYPE_MLX] = 1;
    LOGTYPE[LOGTYPE_OMG] = 1;
    LOGTYPE[LOGTYPE_CRC] = 1;
    LOGTYPE[LOGTYPE_CFG] = 1;
    LOGPRM[LOGPRM_EVENT] = 6;
#endif
    LOGPRM[LOGPRM_LOGKLOKSCH] = 1;
    LOGPRM[LOGPRM_VLOGMODE] = VLOGMODE_LOG_FILE_ASCII;

    /* VLOG - monitoring */
    /* ----------------- */
    MONTYPE[MONTYPE_DATI] = 1;
    MONTYPE[MONTYPE_DP] = 1;
    MONTYPE[MONTYPE_IS] = 1;
    MONTYPE[MONTYPE_FC] = 255;
    MONTYPE[MONTYPE_US] = 15;
    MONTYPE[MONTYPE_PS] = 3;
    MONTYPE[MONTYPE_DS] = 1;
#if !defined NO_VLOG_300
    MONTYPE[MONTYPE_MLX] = 1;
    MONTYPE[MONTYPE_OMG] = 1;
    MONTYPE[MONTYPE_CRC] = 3;
    MONTYPE[MONTYPE_CFG] = 1;
    MONPRM[MONPRM_EVENT] = 6;
#endif
    MONPRM[MONPRM_VLOGMODE] = VLOGMODE_MON_ASCII;
#endif /* NO_VLOG */

/* Typen ingangen */
/* -------------- */
    IS_type[d02_1a] = DKOP_type;
    IS_type[d02_1b] = DKOP_type;
    IS_type[d02_2a] = DLNG_type;
    IS_type[d02_2b] = DLNG_type;
    IS_type[d02_3a] = DLNG_type;
    IS_type[d02_3b] = DLNG_type;
    IS_type[d02_4a] = DVER_type;
    IS_type[d02_4b] = DVER_type;
    IS_type[d03_1] = DKOP_type;
    IS_type[d03_2] = DLNG_type;
    IS_type[d05_1] = DKOP_type;
    IS_type[d05_2] = DLNG_type;
    IS_type[d08_1a] = DKOP_type;
    IS_type[d08_1b] = DKOP_type;
    IS_type[d08_2a] = DLNG_type;
    IS_type[d08_2b] = DLNG_type;
    IS_type[d08_3a] = DLNG_type;
    IS_type[d08_3b] = DLNG_type;
    IS_type[d08_4a] = DVER_type;
    IS_type[d08_4b] = DVER_type;
    IS_type[d09_1] = DKOP_type;
    IS_type[d09_2] = DLNG_type;
    IS_type[d09_3] = DLNG_type;
    IS_type[d11_1] = DKOP_type;
    IS_type[d11_2] = DLNG_type;
    IS_type[d11_3] = DLNG_type;
    IS_type[d11_4] = DVER_type;
    IS_type[d211] = DKOP_type;
    IS_type[dk21] = DK_type;
    IS_type[d22_1] = DKOP_type;
    IS_type[dk22] = DK_type;
    IS_type[d24_1] = DKOP_type;
    IS_type[d24_2] = DVER_type;
    IS_type[d24_3] = DVER_type;
    IS_type[dk24] = DK_type;
    IS_type[d261] = DKOP_type;
    IS_type[dk26] = DK_type;
    IS_type[d28_1] = DKOP_type;
    IS_type[d28_2] = DVER_type;
    IS_type[dk28] = DK_type;
    IS_type[dk31a] = DK_type;
    IS_type[dk31b] = DK_type;
    IS_type[dk32a] = DK_type;
    IS_type[dk32b] = DK_type;
    IS_type[dk33a] = DK_type;
    IS_type[dk33b] = DK_type;
    IS_type[dk34a] = DK_type;
    IS_type[dk34b] = DK_type;
    IS_type[dk38a] = DK_type;
    IS_type[dk38b] = DK_type;
    IS_type[d61_1] = DKOP_type;
    IS_type[d61_2] = DLNG_type;
    IS_type[d62_1a] = DKOP_type;
    IS_type[d62_1b] = DKOP_type;
    IS_type[d62_2a] = DLNG_type;
    IS_type[d62_2b] = DLNG_type;
    IS_type[d67_1] = DKOP_type;
    IS_type[d67_2] = DLNG_type;
    IS_type[d68_1a] = DKOP_type;
    IS_type[d68_1b] = DKOP_type;
    IS_type[d68_2a] = DLNG_type;
    IS_type[d68_2b] = DLNG_type;
    IS_type[d68_9a] = DVER_type;
    IS_type[d68_9b] = DVER_type;
    IS_type[d84_1] = DKOP_type;
    IS_type[dk84] = DK_type;
    IS_type[d82_1] = DKOP_type;
    IS_type[dk82] = DK_type;
    IS_type[d81_1] = DKOP_type;
    IS_type[dk81] = DK_type;

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
    US_type[fc84] = FTS_type;
    US_type[fc82] = FTS_type;
    US_type[fc81] = FTS_type;

#ifdef VISSIM
    D_code[d02_1a] = "0211";
    D_code[d02_1b] = "0212";
    D_code[d02_2a] = "0221";
    D_code[d02_2b] = "0222";
    D_code[d02_3a] = "0231";
    D_code[d02_3b] = "0232";
    D_code[d02_4a] = "0241";
    D_code[d02_4b] = "0242";
    D_code[d03_1] = "0310";
    D_code[d03_2] = "0320";
    D_code[d05_1] = "0510";
    D_code[d05_2] = "0520";
    D_code[d08_1a] = "0811";
    D_code[d08_1b] = "0812";
    D_code[d08_2a] = "0821";
    D_code[d08_2b] = "0822";
    D_code[d08_3a] = "0831";
    D_code[d08_3b] = "0832";
    D_code[d08_4a] = "0841";
    D_code[d08_4b] = "0842";
    D_code[d09_1] = "0910";
    D_code[d09_2] = "0920";
    D_code[d09_3] = "0930";
    D_code[d11_1] = "1110";
    D_code[d11_2] = "1120";
    D_code[d11_3] = "1130";
    D_code[d11_4] = "1140";
    D_code[d211] = "211";
    D_code[dk21] = "212";
    D_code[d22_1] = "2210";
    D_code[dk22] = "2201";
    D_code[d24_1] = "2410";
    D_code[d24_2] = "2420";
    D_code[d24_3] = "2430";
    D_code[dk24] = "243";
    D_code[d261] = "261";
    D_code[dk26] = "262";
    D_code[d28_1] = "2810";
    D_code[d28_2] = "2820";
    D_code[dk28] = "2801";
    D_code[dk31a] = "3101";
    D_code[dk31b] = "3102";
    D_code[dk32a] = "3201";
    D_code[dk32b] = "3202";
    D_code[dk33a] = "3301";
    D_code[dk33b] = "3302";
    D_code[dk34a] = "3401";
    D_code[dk34b] = "3402";
    D_code[dk38a] = "3801";
    D_code[dk38b] = "3802";
    D_code[d61_1] = "6110";
    D_code[d61_2] = "6120";
    D_code[d62_1a] = "6211";
    D_code[d62_1b] = "6212";
    D_code[d62_2a] = "6221";
    D_code[d62_2b] = "6222";
    D_code[d67_1] = "6710";
    D_code[d67_2] = "6720";
    D_code[d68_1a] = "6811";
    D_code[d68_1b] = "6812";
    D_code[d68_2a] = "6821";
    D_code[d68_2b] = "6822";
    D_code[d68_9a] = "681";
    D_code[d68_9b] = "682";
    D_code[d84_1] = "8410";
    D_code[dk84] = "8401";
    D_code[d82_1] = "821";
    D_code[dk82] = "822";
    D_code[d81_1] = "811";
    D_code[dk81] = "812";
#endif

    Timings_Eventstate_Definition();

    #include "123456tab.add"
}
