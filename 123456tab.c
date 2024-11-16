/* REGEL INSTELLINGEN */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456tab.c
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   16-11-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable) ISG
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
    #include "category_definition.c"

    mulv FC_type[FCMAX];
    extern mulv FK_type[FCMAX][FCMAX];

#include "isgfunc.h" /* Interstartgroenfuncties */



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

    TGG_type    |= RO_type; /* Garantiegroentijden read-only */

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
   FC_code[fc02] = "02"; TRG_max[fc02] = 20; TRG_min[fc02] = 20; TGG_max[fc02] = 40; TGG_min[fc02] = 40; TFG_max[fc02] = 50; TGL_max[fc02] = 30; TGL_min[fc02] = 30; TMGL_max[fc02] = 30; TVGA_max[fc02] = 200;
   FC_code[fc03] = "03"; TRG_max[fc03] = 20; TRG_min[fc03] = 20; TGG_max[fc03] = 40; TGG_min[fc03] = 40; TFG_max[fc03] = 40; TGL_max[fc03] = 30; TGL_min[fc03] = 30; TMGL_max[fc03] = 30; TVGA_max[fc03] = 150;
   FC_code[fc05] = "05"; TRG_max[fc05] = 20; TRG_min[fc05] = 20; TGG_max[fc05] = 40; TGG_min[fc05] = 40; TFG_max[fc05] = 40; TGL_max[fc05] = 30; TGL_min[fc05] = 30; TMGL_max[fc05] = 30; TVGA_max[fc05] = 250;
   FC_code[fc08] = "08"; TRG_max[fc08] = 20; TRG_min[fc08] = 20; TGG_max[fc08] = 40; TGG_min[fc08] = 40; TFG_max[fc08] = 40; TGL_max[fc08] = 35; TGL_min[fc08] = 35; TMGL_max[fc08] = 35; TVGA_max[fc08] = 200;
   FC_code[fc09] = "09"; TRG_max[fc09] = 20; TRG_min[fc09] = 20; TGG_max[fc09] = 40; TGG_min[fc09] = 40; TFG_max[fc09] = 40; TGL_max[fc09] = 30; TGL_min[fc09] = 30; TMGL_max[fc09] = 30; TVGA_max[fc09] = 150;
   FC_code[fc11] = "11"; TRG_max[fc11] = 20; TRG_min[fc11] = 20; TGG_max[fc11] = 40; TGG_min[fc11] = 40; TFG_max[fc11] = 40; TGL_max[fc11] = 30; TGL_min[fc11] = 30; TMGL_max[fc11] = 30; TVGA_max[fc11] = 150;
   FC_code[fc21] = "21"; TRG_max[fc21] = 10; TRG_min[fc21] = 10; TGG_max[fc21] = 40; TGG_min[fc21] = 40; TFG_max[fc21] = 60; TGL_max[fc21] = 30; TGL_min[fc21] = 30; TMGL_max[fc21] = 30; TVGA_max[fc21] = 150;
   FC_code[fc22] = "22"; TRG_max[fc22] = 10; TRG_min[fc22] = 10; TGG_max[fc22] = 40; TGG_min[fc22] = 40; TFG_max[fc22] = 60; TGL_max[fc22] = 20; TGL_min[fc22] = 20; TMGL_max[fc22] = 20; TVGA_max[fc22] = 150;
   FC_code[fc24] = "24"; TRG_max[fc24] = 10; TRG_min[fc24] = 10; TGG_max[fc24] = 40; TGG_min[fc24] = 40; TFG_max[fc24] = 60; TGL_max[fc24] = 20; TGL_min[fc24] = 20; TMGL_max[fc24] = 20; TVGA_max[fc24] = 150;
   FC_code[fc26] = "26"; TRG_max[fc26] = 10; TRG_min[fc26] = 10; TGG_max[fc26] = 40; TGG_min[fc26] = 40; TFG_max[fc26] = 60; TGL_max[fc26] = 30; TGL_min[fc26] = 30; TMGL_max[fc26] = 30; TVGA_max[fc26] = 150;
   FC_code[fc28] = "28"; TRG_max[fc28] = 10; TRG_min[fc28] = 10; TGG_max[fc28] = 40; TGG_min[fc28] = 40; TFG_max[fc28] = 60; TGL_max[fc28] = 20; TGL_min[fc28] = 20; TMGL_max[fc28] = 20; TVGA_max[fc28] = 150;
   FC_code[fc31] = "31"; TRG_max[fc31] = 10; TRG_min[fc31] = 10; TGG_max[fc31] = 40; TGG_min[fc31] = 40; TFG_max[fc31] = 60; TGL_max[fc31] = 30; TGL_min[fc31] = 30; TMGL_max[fc31] = 30; TVGA_max[fc31] = NG;
   FC_code[fc32] = "32"; TRG_max[fc32] = 10; TRG_min[fc32] = 10; TGG_max[fc32] = 40; TGG_min[fc32] = 40; TFG_max[fc32] = 40; TGL_max[fc32] = 30; TGL_min[fc32] = 30; TMGL_max[fc32] = 30; TVGA_max[fc32] = NG;
   FC_code[fc33] = "33"; TRG_max[fc33] = 10; TRG_min[fc33] = 10; TGG_max[fc33] = 40; TGG_min[fc33] = 40; TFG_max[fc33] = 40; TGL_max[fc33] = 30; TGL_min[fc33] = 30; TMGL_max[fc33] = 30; TVGA_max[fc33] = NG;
   FC_code[fc34] = "34"; TRG_max[fc34] = 10; TRG_min[fc34] = 10; TGG_max[fc34] = 40; TGG_min[fc34] = 40; TFG_max[fc34] = 40; TGL_max[fc34] = 30; TGL_min[fc34] = 30; TMGL_max[fc34] = 30; TVGA_max[fc34] = NG;
   FC_code[fc38] = "38"; TRG_max[fc38] = 10; TRG_min[fc38] = 10; TGG_max[fc38] = 40; TGG_min[fc38] = 40; TFG_max[fc38] = 80; TGL_max[fc38] = 30; TGL_min[fc38] = 30; TMGL_max[fc38] = 30; TVGA_max[fc38] = NG;
   FC_code[fc61] = "61"; TRG_max[fc61] = 20; TRG_min[fc61] = 20; TGG_max[fc61] = 40; TGG_min[fc61] = 40; TFG_max[fc61] = 50; TGL_max[fc61] = 30; TGL_min[fc61] = 30; TMGL_max[fc61] = 30; TVGA_max[fc61] = 50;
   FC_code[fc62] = "62"; TRG_max[fc62] = 20; TRG_min[fc62] = 20; TGG_max[fc62] = 40; TGG_min[fc62] = 40; TFG_max[fc62] = 40; TGL_max[fc62] = 35; TGL_min[fc62] = 35; TMGL_max[fc62] = 35; TVGA_max[fc62] = 50;
   FC_code[fc67] = "67"; TRG_max[fc67] = 20; TRG_min[fc67] = 20; TGG_max[fc67] = 40; TGG_min[fc67] = 40; TFG_max[fc67] = 50; TGL_max[fc67] = 30; TGL_min[fc67] = 30; TMGL_max[fc67] = 30; TVGA_max[fc67] = 50;
   FC_code[fc68] = "68"; TRG_max[fc68] = 20; TRG_min[fc68] = 20; TGG_max[fc68] = 40; TGG_min[fc68] = 40; TFG_max[fc68] = 40; TGL_max[fc68] = 35; TGL_min[fc68] = 35; TMGL_max[fc68] = 35; TVGA_max[fc68] = 50;
   FC_code[fc81] = "81"; TRG_max[fc81] = 10; TRG_min[fc81] = 10; TGG_max[fc81] = 40; TGG_min[fc81] = 40; TFG_max[fc81] = 60; TGL_max[fc81] = 20; TGL_min[fc81] = 20; TMGL_max[fc81] = 20; TVGA_max[fc81] = 150;
   FC_code[fc82] = "82"; TRG_max[fc82] = 10; TRG_min[fc82] = 10; TGG_max[fc82] = 40; TGG_min[fc82] = 40; TFG_max[fc82] = 60; TGL_max[fc82] = 20; TGL_min[fc82] = 20; TMGL_max[fc82] = 20; TVGA_max[fc82] = 150;
   FC_code[fc84] = "84"; TRG_max[fc84] = 10; TRG_min[fc84] = 10; TGG_max[fc84] = 40; TGG_min[fc84] = 40; TFG_max[fc84] = 60; TGL_max[fc84] = 20; TGL_min[fc84] = 20; TMGL_max[fc84] = 20; TVGA_max[fc84] = 150;

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
    TIG_max[fc05][fc82] = 50;
    TIG_max[fc05][fc84] = 56;

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

    TIG_max[fc21][fc02] = 35;
    TIG_max[fc21][fc03] = 35;

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
    TIG_max[fc67][fc81] = 0;
    TIG_max[fc67][fc84] = 40;

    TIG_max[fc68][fc03] = 31;
    TIG_max[fc68][fc05] = 34;
    TIG_max[fc68][fc22] = 54;
    TIG_max[fc68][fc32] = 64;
    TIG_max[fc68][fc81] = 5;

    TIG_max[fc81][fc67] = 35;
    TIG_max[fc81][fc68] = 35;

    TIG_max[fc82][fc02] = 4;
    TIG_max[fc82][fc05] = 1;

    TIG_max[fc84][fc03] = 15;
    TIG_max[fc84][fc05] = 23;
    TIG_max[fc84][fc67] = 67;

    TIG_max[fc02][fc09] = FK;
    TIG_max[fc02][fc11] = FK;
    TIG_max[fc02][fc22] = FK;
    TIG_max[fc02][fc26] = FK;
    TIG_max[fc02][fc32] = FK;

    TIG_max[fc03][fc08] = FK;
    TIG_max[fc03][fc11] = FK;
    TIG_max[fc03][fc22] = FK;
    TIG_max[fc03][fc32] = FK;
    TIG_max[fc03][fc33] = FK;

    TIG_max[fc05][fc08] = FK;
    TIG_max[fc05][fc11] = FK;
    TIG_max[fc05][fc34] = FK;

    TIG_max[fc08][fc03] = FK;
    TIG_max[fc08][fc05] = FK;
    TIG_max[fc08][fc22] = FK;
    TIG_max[fc08][fc31] = FK;
    TIG_max[fc08][fc32] = FK;
    TIG_max[fc08][fc81] = FK;
    TIG_max[fc08][fc82] = FK;

    TIG_max[fc09][fc02] = FK;

    TIG_max[fc11][fc02] = FK;
    TIG_max[fc11][fc03] = FK;
    TIG_max[fc11][fc05] = FK;
    TIG_max[fc11][fc22] = FK;
    TIG_max[fc11][fc31] = FK;
    TIG_max[fc11][fc32] = FK;
    TIG_max[fc11][fc81] = FK;
    TIG_max[fc11][fc82] = FK;

    TIG_max[fc22][fc02] = FK;
    TIG_max[fc22][fc03] = FK;
    TIG_max[fc22][fc08] = FK;
    TIG_max[fc22][fc11] = FK;

    TIG_max[fc26][fc02] = FK;

    TIG_max[fc31][fc08] = FK;
    TIG_max[fc31][fc11] = FK;
    TIG_max[fc31][fc68] = FK;

    TIG_max[fc32][fc02] = FK;
    TIG_max[fc32][fc03] = FK;
    TIG_max[fc32][fc08] = FK;
    TIG_max[fc32][fc11] = FK;

    TIG_max[fc33][fc03] = FK;
    TIG_max[fc33][fc67] = FK;

    TIG_max[fc34][fc05] = FK;

    TIG_max[fc67][fc33] = FK;
    TIG_max[fc67][fc82] = FK;

    TIG_max[fc68][fc31] = FK;
    TIG_max[fc68][fc82] = FK;

    TIG_max[fc81][fc08] = FK;
    TIG_max[fc81][fc11] = FK;

    TIG_max[fc82][fc08] = FK;
    TIG_max[fc82][fc11] = FK;
    TIG_max[fc82][fc67] = FK;
    TIG_max[fc82][fc68] = FK;

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
    TIG_min[fc05][fc82] = 50;
    TIG_min[fc05][fc84] = 56;

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
    TIG_min[fc67][fc81] = 0;
    TIG_min[fc67][fc84] = 40;

    TIG_min[fc68][fc03] = 31;
    TIG_min[fc68][fc05] = 34;
    TIG_min[fc68][fc22] = 54;
    TIG_min[fc68][fc32] = 64;
    TIG_min[fc68][fc81] = 5;

    TIG_min[fc81][fc67] = 30;
    TIG_min[fc81][fc68] = 20;

    TIG_min[fc82][fc02] = 4;
    TIG_min[fc82][fc05] = 1;

    TIG_min[fc84][fc03] = 15;
    TIG_min[fc84][fc05] = 23;
    TIG_min[fc84][fc67] = 67;

    InitInterfunc();

    TNL_type[fc02][fc62] = TNL_EG;
    TNL_type[fc08][fc68] = TNL_EG;
    TNL_type[fc11][fc68] = TNL_EG;
    TNL_type[fc22][fc21] = TNL_ECV;
    TNL_type[fc31][fc32] = TNL_SG;
    TNL_type[fc32][fc31] = TNL_SG;
    TNL_type[fc33][fc34] = TNL_SG;
    TNL_type[fc34][fc33] = TNL_SG;
    TNL_type[fc82][fc81] = TNL_EG;

    FK_type[fc02][fc09] = FK_EG;
    FK_type[fc02][fc11] = FK_EG;
    FK_type[fc02][fc26] = FK_EG;

    FK_type[fc08][fc03] = FK_EG;
    FK_type[fc08][fc05] = FK_EG;
    FK_type[fc08][fc22] = FK_EG;
    FK_type[fc08][fc31] = FK_EG;
    FK_type[fc08][fc32] = FK_EG;
    FK_type[fc08][fc81] = FK_EG;
    FK_type[fc08][fc82] = FK_EG;

    FK_type[fc11][fc03] = FK_EG;
    FK_type[fc11][fc05] = FK_EG;
    FK_type[fc11][fc22] = FK_EG;
    FK_type[fc11][fc31] = FK_EG;
    FK_type[fc11][fc32] = FK_EG;
    FK_type[fc11][fc81] = FK_EG;
    FK_type[fc11][fc82] = FK_EG;

    FK_type[fc22][fc02] = FK_EVG;
    FK_type[fc22][fc03] = FK_EVG;

    FK_type[fc31][fc08] = FK_SG;
    FK_type[fc31][fc11] = FK_SG;
    FK_type[fc31][fc68] = FK_SG;

    FK_type[fc32][fc02] = FK_SG;
    FK_type[fc32][fc03] = FK_SG;

    FK_type[fc33][fc03] = FK_SG;
    FK_type[fc33][fc67] = FK_SG;

    FK_type[fc34][fc05] = FK_SG;

    FK_type[fc82][fc08] = FK_EG;
    FK_type[fc82][fc11] = FK_EG;
    FK_type[fc82][fc67] = FK_EG;
    FK_type[fc82][fc68] = FK_EG;


/* overige uitgangen */
/* ----------------- */
    US_code[ussegm1]          = "segm1";                                     /* Aansturing segmenten display                            */
    US_code[ussegm2]          = "segm2";                                     /* Aansturing segmenten display                            */
    US_code[ussegm3]          = "segm3";                                     /* Aansturing segmenten display                            */
    US_code[ussegm4]          = "segm4";                                     /* Aansturing segmenten display                            */
    US_code[ussegm5]          = "segm5";                                     /* Aansturing segmenten display                            */
    US_code[ussegm6]          = "segm6";                                     /* Aansturing segmenten display                            */
    US_code[ussegm7]          = "segm7";                                     /* Aansturing segmenten display                            */
    US_code[usML1]            = "ML1";                                       /* Verklikken actief zijn ML1                              */
    US_code[usML2]            = "ML2";                                       /* Verklikken actief zijn ML2                              */
    US_code[usML3]            = "ML3";                                       /* Verklikken actief zijn ML3                              */
    US_code[usML4]            = "ML4";                                       /* Verklikken actief zijn ML4                              */
    US_code[usincontrol]      = "incontrol";                                 /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt */
    US_code[usnocontrol]      = "nocontrol";                                 /* Verklikken of applicatie niet in staat is te regelen    */
    US_code[usFile68af]       = "File68af";                                  /* File ingreep File68af actief                            */
    US_code[usovtevroeg02bus] = "ovtevroeg02bus";                            /* Voorste OV voertuig bij 02 te vroeg Bus                 */
    US_code[usovoptijd02bus]  = "ovoptijd02bus";                             /* Voorste OV voertuig bij 02 op tijd Bus                  */
    US_code[usovtelaat02bus]  = "ovtelaat02bus";                             /* Voorste OV voertuig bij 02 te laat Bus                  */
    US_code[usovtevroeg03bus] = "ovtevroeg03bus";                            /* Voorste OV voertuig bij 03 te vroeg Bus                 */
    US_code[usovoptijd03bus]  = "ovoptijd03bus";                             /* Voorste OV voertuig bij 03 op tijd Bus                  */
    US_code[usovtelaat03bus]  = "ovtelaat03bus";                             /* Voorste OV voertuig bij 03 te laat Bus                  */
    US_code[usovtevroeg05bus] = "ovtevroeg05bus";                            /* Voorste OV voertuig bij 05 te vroeg Bus                 */
    US_code[usovoptijd05bus]  = "ovoptijd05bus";                             /* Voorste OV voertuig bij 05 op tijd Bus                  */
    US_code[usovtelaat05bus]  = "ovtelaat05bus";                             /* Voorste OV voertuig bij 05 te laat Bus                  */
    US_code[usovtevroeg08bus] = "ovtevroeg08bus";                            /* Voorste OV voertuig bij 08 te vroeg Bus                 */
    US_code[usovoptijd08bus]  = "ovoptijd08bus";                             /* Voorste OV voertuig bij 08 op tijd Bus                  */
    US_code[usovtelaat08bus]  = "ovtelaat08bus";                             /* Voorste OV voertuig bij 08 te laat Bus                  */
    US_code[usovtevroeg09bus] = "ovtevroeg09bus";                            /* Voorste OV voertuig bij 09 te vroeg Bus                 */
    US_code[usovoptijd09bus]  = "ovoptijd09bus";                             /* Voorste OV voertuig bij 09 op tijd Bus                  */
    US_code[usovtelaat09bus]  = "ovtelaat09bus";                             /* Voorste OV voertuig bij 09 te laat Bus                  */
    US_code[usovtevroeg11bus] = "ovtevroeg11bus";                            /* Voorste OV voertuig bij 11 te vroeg Bus                 */
    US_code[usovoptijd11bus]  = "ovoptijd11bus";                             /* Voorste OV voertuig bij 11 op tijd Bus                  */
    US_code[usovtelaat11bus]  = "ovtelaat11bus";                             /* Voorste OV voertuig bij 11 te laat Bus                  */
    US_code[usmaxwt]          = "maxwt";                                     /* Verklikken maximale wachttijd overschreden              */
    US_code[uskarmelding]     = "karmelding";                                /* Verklikken ontvangst melding KAR                        */
    US_code[uskarog]          = "karog";                                     /* Verklikken ondergedrag KAR                              */
    US_code[usovinm02bus]     = "ovinm02bus";                                /* Verklikken inmelding OV fase 02                         */
    US_code[usovinm03bus]     = "ovinm03bus";                                /* Verklikken inmelding OV fase 03                         */
    US_code[usovinm05bus]     = "ovinm05bus";                                /* Verklikken inmelding OV fase 05                         */
    US_code[usovinm08bus]     = "ovinm08bus";                                /* Verklikken inmelding OV fase 08                         */
    US_code[usovinm09bus]     = "ovinm09bus";                                /* Verklikken inmelding OV fase 09                         */
    US_code[usovinm11bus]     = "ovinm11bus";                                /* Verklikken inmelding OV fase 11                         */
    US_code[ushdinm02]        = "hdinm02";                                   /* Verklikken inmelding HD fase 02                         */
    US_code[ushdinm03]        = "hdinm03";                                   /* Verklikken inmelding HD fase 03                         */
    US_code[ushdinm05]        = "hdinm05";                                   /* Verklikken inmelding HD fase 05                         */
    US_code[ushdinm08]        = "hdinm08";                                   /* Verklikken inmelding HD fase 08                         */
    US_code[ushdinm09]        = "hdinm09";                                   /* Verklikken inmelding HD fase 09                         */
    US_code[ushdinm11]        = "hdinm11";                                   /* Verklikken inmelding HD fase 11                         */
    US_code[ushdinm61]        = "hdinm61";                                   /* Verklikken inmelding HD fase 61                         */
    US_code[ushdinm62]        = "hdinm62";                                   /* Verklikken inmelding HD fase 62                         */
    US_code[ushdinm67]        = "hdinm67";                                   /* Verklikken inmelding HD fase 67                         */
    US_code[ushdinm68]        = "hdinm68";                                   /* Verklikken inmelding HD fase 68                         */
    US_code[usperdef]         = "perdef";                                    /* Default periode actief                                  */
    US_code[usper1]           = "per1";                                      /* Periode Reserve actief                                  */
    US_code[usperoFietsprio1] = "peroFietsprio1";                            /* Periode actief                                          */
    US_code[usperoFietsprio2] = "peroFietsprio2";                            /* Periode actief                                          */
    US_code[usperoFietsprio3] = "peroFietsprio3";                            /* Periode actief                                          */
    US_code[usper2]           = "per2";                                      /* Periode Dag periode actief                              */
    US_code[usper3]           = "per3";                                      /* Periode Ochtendspits actief                             */
    US_code[usper4]           = "per4";                                      /* Periode Avondspits actief                               */
    US_code[usper5]           = "per5";                                      /* Periode Koopavond actief                                */
    US_code[usper6]           = "per6";                                      /* Periode Weekend actief                                  */
    US_code[usper7]           = "per7";                                      /* Periode Reserve actief                                  */
    US_code[usrgv]            = "rgv";                                       /* Verklikken actief zijn RoBuGrover                       */
    US_code[uswtv21]          = "wtv21";                                     /* Verklikken aansturing wachttijdvoorspeller fase 21      */
    US_code[uswtv22]          = "wtv22";                                     /* Verklikken aansturing wachttijdvoorspeller fase 22      */
    US_code[uswtv24]          = "wtv24";                                     /* Verklikken aansturing wachttijdvoorspeller fase 24      */
    US_code[uswtv26]          = "wtv26";                                     /* Verklikken aansturing wachttijdvoorspeller fase 26      */
    US_code[uswtv28]          = "wtv28";                                     /* Verklikken aansturing wachttijdvoorspeller fase 28      */
    US_code[uswtv81]          = "wtv81";                                     /* Verklikken aansturing wachttijdvoorspeller fase 81      */
    US_code[uswtv82]          = "wtv82";                                     /* Verklikken aansturing wachttijdvoorspeller fase 82      */
    US_code[uswtv84]          = "wtv84";                                     /* Verklikken aansturing wachttijdvoorspeller fase 84      */
    US_code[uswtk21]          = "wtk21";                                     /* Aansturing waitsignaal detector k21                     */
    US_code[uswtk22]          = "wtk22";                                     /* Aansturing waitsignaal detector k22                     */
    US_code[uswtk24]          = "wtk24";                                     /* Aansturing waitsignaal detector k24                     */
    US_code[uswtk26]          = "wtk26";                                     /* Aansturing waitsignaal detector k26                     */
    US_code[uswtk28]          = "wtk28";                                     /* Aansturing waitsignaal detector k28                     */
    US_code[uswtk31a]         = "wtk31a";                                    /* Aansturing waitsignaal detector k31a                    */
    US_code[uswtk31b]         = "wtk31b";                                    /* Aansturing waitsignaal detector k31b                    */
    US_code[uswtk32a]         = "wtk32a";                                    /* Aansturing waitsignaal detector k32a                    */
    US_code[uswtk32b]         = "wtk32b";                                    /* Aansturing waitsignaal detector k32b                    */
    US_code[uswtk33a]         = "wtk33a";                                    /* Aansturing waitsignaal detector k33a                    */
    US_code[uswtk33b]         = "wtk33b";                                    /* Aansturing waitsignaal detector k33b                    */
    US_code[uswtk34a]         = "wtk34a";                                    /* Aansturing waitsignaal detector k34a                    */
    US_code[uswtk34b]         = "wtk34b";                                    /* Aansturing waitsignaal detector k34b                    */
    US_code[uswtk38a]         = "wtk38a";                                    /* Aansturing waitsignaal detector k38a                    */
    US_code[uswtk38b]         = "wtk38b";                                    /* Aansturing waitsignaal detector k38b                    */
    US_code[uswtk81]          = "wtk81";                                     /* Aansturing waitsignaal detector k81                     */
    US_code[uswtk82]          = "wtk82";                                     /* Aansturing waitsignaal detector k82                     */
    US_code[uswtk84]          = "wtk84";                                     /* Aansturing waitsignaal detector k84                     */
    US_code[usisgtijd02]      = "isgtijd02";                                 /* Verklikken PRIO 02 tbv interfunc                        */
    US_code[usisgtijd03]      = "isgtijd03";                                 /* Verklikken PRIO 03 tbv interfunc                        */
    US_code[usisgtijd05]      = "isgtijd05";                                 /* Verklikken PRIO 05 tbv interfunc                        */
    US_code[usisgtijd08]      = "isgtijd08";                                 /* Verklikken PRIO 08 tbv interfunc                        */
    US_code[usisgtijd09]      = "isgtijd09";                                 /* Verklikken PRIO 09 tbv interfunc                        */
    US_code[usisgtijd11]      = "isgtijd11";                                 /* Verklikken PRIO 11 tbv interfunc                        */
    US_code[usisgtijd21]      = "isgtijd21";                                 /* Verklikken PRIO 21 tbv interfunc                        */
    US_code[usisgtijd22]      = "isgtijd22";                                 /* Verklikken PRIO 22 tbv interfunc                        */
    US_code[usisgtijd24]      = "isgtijd24";                                 /* Verklikken PRIO 24 tbv interfunc                        */
    US_code[usisgtijd26]      = "isgtijd26";                                 /* Verklikken PRIO 26 tbv interfunc                        */
    US_code[usisgtijd28]      = "isgtijd28";                                 /* Verklikken PRIO 28 tbv interfunc                        */
    US_code[usisgtijd31]      = "isgtijd31";                                 /* Verklikken PRIO 31 tbv interfunc                        */
    US_code[usisgtijd32]      = "isgtijd32";                                 /* Verklikken PRIO 32 tbv interfunc                        */
    US_code[usisgtijd33]      = "isgtijd33";                                 /* Verklikken PRIO 33 tbv interfunc                        */
    US_code[usisgtijd34]      = "isgtijd34";                                 /* Verklikken PRIO 34 tbv interfunc                        */
    US_code[usisgtijd38]      = "isgtijd38";                                 /* Verklikken PRIO 38 tbv interfunc                        */
    US_code[usisgtijd61]      = "isgtijd61";                                 /* Verklikken PRIO 61 tbv interfunc                        */
    US_code[usisgtijd62]      = "isgtijd62";                                 /* Verklikken PRIO 62 tbv interfunc                        */
    US_code[usisgtijd67]      = "isgtijd67";                                 /* Verklikken PRIO 67 tbv interfunc                        */
    US_code[usisgtijd68]      = "isgtijd68";                                 /* Verklikken PRIO 68 tbv interfunc                        */
    US_code[usisgtijd81]      = "isgtijd81";                                 /* Verklikken PRIO 81 tbv interfunc                        */
    US_code[usisgtijd82]      = "isgtijd82";                                 /* Verklikken PRIO 82 tbv interfunc                        */
    US_code[usisgtijd84]      = "isgtijd84";                                 /* Verklikken PRIO 84 tbv interfunc                        */

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
    D_code[d09_1]  = "09_1";  TDB_max[d09_1]  = 10; TDH_max[d09_1]  = 30;
                              TBG_max[d09_1]  = 20; TOG_max[d09_1]  = 360;
    D_code[d09_2]  = "09_2";  TDB_max[d09_2]  = 0;  TDH_max[d09_2]  = 10;
                              TBG_max[d09_2]  = 60; TOG_max[d09_2]  = 360;
    D_code[d09_3]  = "09_3";  TDB_max[d09_3]  = 0;  TDH_max[d09_3]  = 30;
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
    D_code[d81_1]  = "81_1";  TDB_max[d81_1]  = 15; TDH_max[d81_1]  = 30;
                              TBG_max[d81_1]  = 10; TOG_max[d81_1]  = 1440;
    D_code[dk81]   = "k81";   TBG_max[dk81]   = 10; TOG_max[dk81]   = 1440;
    D_code[d82_1]  = "82_1";  TDB_max[d82_1]  = 15; TDH_max[d82_1]  = 30;
                              TBG_max[d82_1]  = 10; TOG_max[d82_1]  = 1440;
    D_code[dk82]   = "k82";   TBG_max[dk82]   = 10; TOG_max[dk82]   = 1440;
    D_code[d84_1]  = "84_1";  TDB_max[d84_1]  = 15; TDH_max[d84_1]  = 30;
                              TBG_max[d84_1]  = 10; TOG_max[d84_1]  = 1440;
    D_code[dk84]   = "k84";   TBG_max[dk84]   = 10; TOG_max[dk84]   = 2880;
    D_code[dopt02] = "opt02"; TDB_max[dopt02] = 0;  TDH_max[dopt02] = 0;
                              TBG_max[dopt02] = 0;  TOG_max[dopt02] = 0;
    D_code[dopt05] = "opt05"; TDB_max[dopt05] = 0;  TDH_max[dopt05] = 0;
                              TBG_max[dopt05] = 0;  TOG_max[dopt05] = 0;
    D_code[dopt08] = "opt08"; TDB_max[dopt08] = 0;  TDH_max[dopt08] = 0;
                              TBG_max[dopt08] = 0;  TOG_max[dopt08] = 0;
    D_code[dopt11] = "opt11"; TDB_max[dopt11] = 0;  TDH_max[dopt11] = 0;
                              TBG_max[dopt11] = 0;  TOG_max[dopt11] = 0;
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
    TFL_max[d09_2] = 60;  CFL_max[d09_2] = 30;
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
    TFL_max[d81_1] = 60;  CFL_max[d81_1] = 45;
    TFL_max[dk81] = 60;   CFL_max[dk81] = 45;
    TFL_max[d82_1] = 60;  CFL_max[d82_1] = 45;
    TFL_max[dk82] = 60;   CFL_max[dk82] = 45;
    TFL_max[d84_1] = 60;  CFL_max[d84_1] = 45;
    TFL_max[dk84] = 60;   CFL_max[dk84] = 45;
    TFL_max[dopt02] = 0;  CFL_max[dopt02] = 0;
    TFL_max[dopt05] = 0;  CFL_max[dopt05] = 0;
    TFL_max[dopt08] = 0;  CFL_max[dopt08] = 0;
    TFL_max[dopt11] = 0;  CFL_max[dopt11] = 0;
#endif /* !defined NO_DDFLUTTER */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    D_code[ddummykarin02bus]  = "dummykarin02bus";  
    D_code[ddummykarin03bus]  = "dummykarin03bus";  
    D_code[ddummykarin05bus]  = "dummykarin05bus";  
    D_code[ddummykarin08bus]  = "dummykarin08bus";  
    D_code[ddummykarin09bus]  = "dummykarin09bus";  
    D_code[ddummykarin11bus]  = "dummykarin11bus";  
    D_code[ddummykaruit02bus] = "dummykaruit02bus"; 
    D_code[ddummykaruit03bus] = "dummykaruit03bus"; 
    D_code[ddummykaruit05bus] = "dummykaruit05bus"; 
    D_code[ddummykaruit08bus] = "dummykaruit08bus"; 
    D_code[ddummykaruit09bus] = "dummykaruit09bus"; 
    D_code[ddummykaruit11bus] = "dummykaruit11bus"; 
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
    H_code[hnla02_1a]          = "nla02_1a";                                       /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    H_code[hnla02_1b]          = "nla02_1b";                                       /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    H_code[hnla08_1a]          = "nla08_1a";                                       /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    H_code[hnla08_1b]          = "nla08_1b";                                       /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    H_code[hnla11_1]           = "nla11_1";                                        /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    H_code[hnla22_1]           = "nla22_1";                                        /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    H_code[hnlsg3132]          = "nlsg3132";                                       /* Hulpelement naloop SG van 31 naar 32                               */
    H_code[hnlak31a]           = "nlak31a";                                        /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    H_code[hnlsg3231]          = "nlsg3231";                                       /* Hulpelement naloop SG van 32 naar 31                               */
    H_code[hnlak32a]           = "nlak32a";                                        /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    H_code[hnlsg3334]          = "nlsg3334";                                       /* Hulpelement naloop SG van 33 naar 34                               */
    H_code[hnlak33a]           = "nlak33a";                                        /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    H_code[hnlsg3433]          = "nlsg3433";                                       /* Hulpelement naloop SG van 34 naar 33                               */
    H_code[hnlak34a]           = "nlak34a";                                        /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    H_code[hnla82_1]           = "nla82_1";                                        /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    H_code[hstp02bus]          = "stp02bus";                                       /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    H_code[hstp03bus]          = "stp03bus";                                       /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    H_code[hstp05bus]          = "stp05bus";                                       /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    H_code[hstp08bus]          = "stp08bus";                                       /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    H_code[hstp09bus]          = "stp09bus";                                       /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    H_code[hstp11bus]          = "stp11bus";                                       /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
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
    H_code[hhdin05ris]         = "hdin05ris";                                      /* HD inmelding 05                                                    */
    H_code[hhduit05ris]        = "hduit05ris";                                     /* HD uitmelding 05                                                   */
    H_code[hhd08]              = "hd08";                                           /* Bijhouden aanwezigheid HD fase 08                                  */
    H_code[hhdin08]            = "hdin08";                                         /* HD inmelding 08                                                    */
    H_code[hhduit08]           = "hduit08";                                        /* HD uitmelding 08                                                   */
    H_code[hhdin08kar]         = "hdin08kar";                                      /* HD inmelding 08                                                    */
    H_code[hhduit08kar]        = "hduit08kar";                                     /* HD uitmelding 08                                                   */
    H_code[hhdin08ris]         = "hdin08ris";                                      /* HD inmelding 08                                                    */
    H_code[hhduit08ris]        = "hduit08ris";                                     /* HD uitmelding 08                                                   */
    H_code[hhd09]              = "hd09";                                           /* Bijhouden aanwezigheid HD fase 09                                  */
    H_code[hhdin09]            = "hdin09";                                         /* HD inmelding 09                                                    */
    H_code[hhduit09]           = "hduit09";                                        /* HD uitmelding 09                                                   */
    H_code[hhdin09kar]         = "hdin09kar";                                      /* HD inmelding 09                                                    */
    H_code[hhduit09kar]        = "hduit09kar";                                     /* HD uitmelding 09                                                   */
    H_code[hhdin09ris]         = "hdin09ris";                                      /* HD inmelding 09                                                    */
    H_code[hhduit09ris]        = "hduit09ris";                                     /* HD uitmelding 09                                                   */
    H_code[hhd11]              = "hd11";                                           /* Bijhouden aanwezigheid HD fase 11                                  */
    H_code[hhdin11]            = "hdin11";                                         /* HD inmelding 11                                                    */
    H_code[hhduit11]           = "hduit11";                                        /* HD uitmelding 11                                                   */
    H_code[hhdin11kar]         = "hdin11kar";                                      /* HD inmelding 11                                                    */
    H_code[hhduit11kar]        = "hduit11kar";                                     /* HD uitmelding 11                                                   */
    H_code[hhdin11ris]         = "hdin11ris";                                      /* HD inmelding 11                                                    */
    H_code[hhduit11ris]        = "hduit11ris";                                     /* HD uitmelding 11                                                   */
    H_code[hhd61]              = "hd61";                                           /* Bijhouden aanwezigheid HD fase 61                                  */
    H_code[hhdin61]            = "hdin61";                                         /* HD inmelding 61                                                    */
    H_code[hhduit61]           = "hduit61";                                        /* HD uitmelding 61                                                   */
    H_code[hhdin61kar]         = "hdin61kar";                                      /* HD inmelding 61                                                    */
    H_code[hhduit61kar]        = "hduit61kar";                                     /* HD uitmelding 61                                                   */
    H_code[hhdin61ris]         = "hdin61ris";                                      /* HD inmelding 61                                                    */
    H_code[hhduit61ris]        = "hduit61ris";                                     /* HD uitmelding 61                                                   */
    H_code[hhd62]              = "hd62";                                           /* Bijhouden aanwezigheid HD fase 62                                  */
    H_code[hhdin62]            = "hdin62";                                         /* HD inmelding 62                                                    */
    H_code[hhduit62]           = "hduit62";                                        /* HD uitmelding 62                                                   */
    H_code[hhdin62kar]         = "hdin62kar";                                      /* HD inmelding 62                                                    */
    H_code[hhduit62kar]        = "hduit62kar";                                     /* HD uitmelding 62                                                   */
    H_code[hhdin62ris]         = "hdin62ris";                                      /* HD inmelding 62                                                    */
    H_code[hhduit62ris]        = "hduit62ris";                                     /* HD uitmelding 62                                                   */
    H_code[hhd67]              = "hd67";                                           /* Bijhouden aanwezigheid HD fase 67                                  */
    H_code[hhdin67]            = "hdin67";                                         /* HD inmelding 67                                                    */
    H_code[hhduit67]           = "hduit67";                                        /* HD uitmelding 67                                                   */
    H_code[hhdin67kar]         = "hdin67kar";                                      /* HD inmelding 67                                                    */
    H_code[hhduit67kar]        = "hduit67kar";                                     /* HD uitmelding 67                                                   */
    H_code[hhdin67ris]         = "hdin67ris";                                      /* HD inmelding 67                                                    */
    H_code[hhduit67ris]        = "hduit67ris";                                     /* HD uitmelding 67                                                   */
    H_code[hhd68]              = "hd68";                                           /* Bijhouden aanwezigheid HD fase 68                                  */
    H_code[hhdin68]            = "hdin68";                                         /* HD inmelding 68                                                    */
    H_code[hhduit68]           = "hduit68";                                        /* HD uitmelding 68                                                   */
    H_code[hhdin68kar]         = "hdin68kar";                                      /* HD inmelding 68                                                    */
    H_code[hhduit68kar]        = "hduit68kar";                                     /* HD uitmelding 68                                                   */
    H_code[hhdin68ris]         = "hdin68ris";                                      /* HD inmelding 68                                                    */
    H_code[hhduit68ris]        = "hduit68ris";                                     /* HD uitmelding 68                                                   */
    H_code[hperiodFietsprio1]  = "periodFietsprio1";                               /* Periode Fietsprio1 actief                                          */
    H_code[hperiodFietsprio2]  = "periodFietsprio2";                               /* Periode Fietsprio2 actief                                          */
    H_code[hperiodFietsprio3]  = "periodFietsprio3";                               /* Periode Fietsprio3 actief                                          */
    H_code[hrgvd24_3_d24_2]    = "rgvd24_3_d24_2";                                 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    H_code[hrgvact]            = "rgvact";                                         /* Bijhouden actief zijn RoBuGrover                                   */
    H_code[hprreal02]          = "prreal02";                                       /* Bijhouden primaire realisatie fase 02                              */
    H_code[hprreal03]          = "prreal03";                                       /* Bijhouden primaire realisatie fase 03                              */
    H_code[hprreal05]          = "prreal05";                                       /* Bijhouden primaire realisatie fase 05                              */
    H_code[hprreal08]          = "prreal08";                                       /* Bijhouden primaire realisatie fase 08                              */
    H_code[hprreal09]          = "prreal09";                                       /* Bijhouden primaire realisatie fase 09                              */
    H_code[hprreal11]          = "prreal11";                                       /* Bijhouden primaire realisatie fase 11                              */
    H_code[hwtv21]             = "wtv21";                                          /* Onthouden aansturing wachttijdvoorspeller fase 21                  */
    H_code[hwtv22]             = "wtv22";                                          /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    H_code[hwtv24]             = "wtv24";                                          /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    H_code[hwtv26]             = "wtv26";                                          /* Onthouden aansturing wachttijdvoorspeller fase 26                  */
    H_code[hwtv28]             = "wtv28";                                          /* Onthouden aansturing wachttijdvoorspeller fase 28                  */
    H_code[hwtv81]             = "wtv81";                                          /* Onthouden aansturing wachttijdvoorspeller fase 81                  */
    H_code[hwtv82]             = "wtv82";                                          /* Onthouden aansturing wachttijdvoorspeller fase 82                  */
    H_code[hwtv84]             = "wtv84";                                          /* Onthouden aansturing wachttijdvoorspeller fase 84                  */
    H_code[hlos31]             = "los31";                                          /* Toestaan los realiseren fase 31                                    */
    H_code[hlos32]             = "los32";                                          /* Toestaan los realiseren fase 32                                    */
    H_code[hlos33]             = "los33";                                          /* Toestaan los realiseren fase 33                                    */
    H_code[hlos34]             = "los34";                                          /* Toestaan los realiseren fase 34                                    */

/* geheugen elementen */
/* ------------------ */
    MM_code[mperiod]    = "period";                         /* Onthouden actieve periode                                                   */
    MM_code[mlcycl]     = "lcycl";                          /* Onthouden laatste cyclustijd                                                */
    MM_code[mmk03]      = "mk03";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    MM_code[mmk05]      = "mk05";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    MM_code[mmk08]      = "mk08";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    MM_code[mmk09]      = "mk09";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    MM_code[mmk11]      = "mk11";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    MM_code[mmk61]      = "mk61";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    MM_code[mmk62]      = "mk62";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    MM_code[mmk67]      = "mk67";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    MM_code[mmk68]      = "mk68";                           /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    MM_code[mfilemem08] = "filemem08";                      /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    MM_code[mfilemem11] = "filemem11";                      /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    MM_code[mstp02bus]  = "stp02bus";                       /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    MM_code[mstp03bus]  = "stp03bus";                       /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    MM_code[mstp05bus]  = "stp05bus";                       /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    MM_code[mstp08bus]  = "stp08bus";                       /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    MM_code[mstp09bus]  = "stp09bus";                       /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    MM_code[mstp11bus]  = "stp11bus";                       /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    MM_code[mwtv21]     = "wtv21";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 21                  */
    MM_code[mwtvm21]    = "wtvm21";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 21                 */
    MM_code[mwtv22]     = "wtv22";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 22                  */
    MM_code[mwtvm22]    = "wtvm22";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 22                 */
    MM_code[mwtv24]     = "wtv24";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    MM_code[mwtvm24]    = "wtvm24";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    MM_code[mwtv26]     = "wtv26";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 26                  */
    MM_code[mwtvm26]    = "wtvm26";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 26                 */
    MM_code[mwtv28]     = "wtv28";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 28                  */
    MM_code[mwtvm28]    = "wtvm28";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 28                 */
    MM_code[mwtv81]     = "wtv81";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 81                  */
    MM_code[mwtvm81]    = "wtvm81";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 81                 */
    MM_code[mwtv82]     = "wtv82";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 82                  */
    MM_code[mwtvm82]    = "wtvm82";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 82                 */
    MM_code[mwtv84]     = "wtv84";                          /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 84                  */
    MM_code[mwtvm84]    = "wtvm84";                         /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 84                 */
    MM_code[mar02]      = "ar02";                           /* Alternatieve ruimte fase 02                                                 */
    MM_code[mar03]      = "ar03";                           /* Alternatieve ruimte fase 03                                                 */
    MM_code[mar05]      = "ar05";                           /* Alternatieve ruimte fase 05                                                 */
    MM_code[mar08]      = "ar08";                           /* Alternatieve ruimte fase 08                                                 */
    MM_code[mar09]      = "ar09";                           /* Alternatieve ruimte fase 09                                                 */
    MM_code[mar11]      = "ar11";                           /* Alternatieve ruimte fase 11                                                 */
    MM_code[mar21]      = "ar21";                           /* Alternatieve ruimte fase 21                                                 */
    MM_code[mar22]      = "ar22";                           /* Alternatieve ruimte fase 22                                                 */
    MM_code[mar24]      = "ar24";                           /* Alternatieve ruimte fase 24                                                 */
    MM_code[mar26]      = "ar26";                           /* Alternatieve ruimte fase 26                                                 */
    MM_code[mar28]      = "ar28";                           /* Alternatieve ruimte fase 28                                                 */
    MM_code[mar31]      = "ar31";                           /* Alternatieve ruimte fase 31                                                 */
    MM_code[mar32]      = "ar32";                           /* Alternatieve ruimte fase 32                                                 */
    MM_code[mar33]      = "ar33";                           /* Alternatieve ruimte fase 33                                                 */
    MM_code[mar34]      = "ar34";                           /* Alternatieve ruimte fase 34                                                 */
    MM_code[mar38]      = "ar38";                           /* Alternatieve ruimte fase 38                                                 */
    MM_code[mar61]      = "ar61";                           /* Alternatieve ruimte fase 61                                                 */
    MM_code[mar62]      = "ar62";                           /* Alternatieve ruimte fase 62                                                 */
    MM_code[mar67]      = "ar67";                           /* Alternatieve ruimte fase 67                                                 */
    MM_code[mar68]      = "ar68";                           /* Alternatieve ruimte fase 68                                                 */
    MM_code[mar81]      = "ar81";                           /* Alternatieve ruimte fase 81                                                 */
    MM_code[mar82]      = "ar82";                           /* Alternatieve ruimte fase 82                                                 */
    MM_code[mar84]      = "ar84";                           /* Alternatieve ruimte fase 84                                                 */

/* tijd elementen */
/* -------------- */
    T_code[t08_1a_1]                   = "08_1a_1";                   T_max[t08_1a_1]                   = 0;    T_type[t08_1a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_1a                      */
    T_code[t08_1a_2]                   = "08_1a_2";                   T_max[t08_1a_2]                   = 0;    T_type[t08_1a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_1a                      */
    T_code[ttdh_08_1a_1]               = "tdh_08_1a_1";               T_max[ttdh_08_1a_1]               = 0;    T_type[ttdh_08_1a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_1a                         */
    T_code[ttdh_08_1a_2]               = "tdh_08_1a_2";               T_max[ttdh_08_1a_2]               = 0;    T_type[ttdh_08_1a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_1a                         */
    T_code[tmax_08_1a]                 = "max_08_1a";                 T_max[tmax_08_1a]                 = 80;   T_type[tmax_08_1a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a               */
    T_code[t08_1b_1]                   = "08_1b_1";                   T_max[t08_1b_1]                   = 0;    T_type[t08_1b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_1b                      */
    T_code[t08_1b_2]                   = "08_1b_2";                   T_max[t08_1b_2]                   = 0;    T_type[t08_1b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_1b                      */
    T_code[ttdh_08_1b_1]               = "tdh_08_1b_1";               T_max[ttdh_08_1b_1]               = 0;    T_type[ttdh_08_1b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_1b                         */
    T_code[ttdh_08_1b_2]               = "tdh_08_1b_2";               T_max[ttdh_08_1b_2]               = 0;    T_type[ttdh_08_1b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_1b                         */
    T_code[tmax_08_1b]                 = "max_08_1b";                 T_max[tmax_08_1b]                 = 80;   T_type[tmax_08_1b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b               */
    T_code[t08_2a_1]                   = "08_2a_1";                   T_max[t08_2a_1]                   = 0;    T_type[t08_2a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_2a                      */
    T_code[t08_2a_2]                   = "08_2a_2";                   T_max[t08_2a_2]                   = 0;    T_type[t08_2a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_2a                      */
    T_code[ttdh_08_2a_1]               = "tdh_08_2a_1";               T_max[ttdh_08_2a_1]               = 1;    T_type[ttdh_08_2a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_2a                         */
    T_code[ttdh_08_2a_2]               = "tdh_08_2a_2";               T_max[ttdh_08_2a_2]               = 1;    T_type[ttdh_08_2a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_2a                         */
    T_code[tmax_08_2a]                 = "max_08_2a";                 T_max[tmax_08_2a]                 = 100;  T_type[tmax_08_2a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a               */
    T_code[t08_2b_1]                   = "08_2b_1";                   T_max[t08_2b_1]                   = 0;    T_type[t08_2b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_2b                      */
    T_code[t08_2b_2]                   = "08_2b_2";                   T_max[t08_2b_2]                   = 0;    T_type[t08_2b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_2b                      */
    T_code[ttdh_08_2b_1]               = "tdh_08_2b_1";               T_max[ttdh_08_2b_1]               = 1;    T_type[ttdh_08_2b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_2b                         */
    T_code[ttdh_08_2b_2]               = "tdh_08_2b_2";               T_max[ttdh_08_2b_2]               = 1;    T_type[ttdh_08_2b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_2b                         */
    T_code[tmax_08_2b]                 = "max_08_2b";                 T_max[tmax_08_2b]                 = 100;  T_type[tmax_08_2b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b               */
    T_code[t08_3a_1]                   = "08_3a_1";                   T_max[t08_3a_1]                   = 100;  T_type[t08_3a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_3a                      */
    T_code[t08_3a_2]                   = "08_3a_2";                   T_max[t08_3a_2]                   = 220;  T_type[t08_3a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_3a                      */
    T_code[ttdh_08_3a_1]               = "tdh_08_3a_1";               T_max[ttdh_08_3a_1]               = 8;    T_type[ttdh_08_3a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_3a                         */
    T_code[ttdh_08_3a_2]               = "tdh_08_3a_2";               T_max[ttdh_08_3a_2]               = 0;    T_type[ttdh_08_3a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_3a                         */
    T_code[tmax_08_3a]                 = "max_08_3a";                 T_max[tmax_08_3a]                 = 0;    T_type[tmax_08_3a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a               */
    T_code[t08_3b_1]                   = "08_3b_1";                   T_max[t08_3b_1]                   = 100;  T_type[t08_3b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_3b                      */
    T_code[t08_3b_2]                   = "08_3b_2";                   T_max[t08_3b_2]                   = 220;  T_type[t08_3b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_3b                      */
    T_code[ttdh_08_3b_1]               = "tdh_08_3b_1";               T_max[ttdh_08_3b_1]               = 8;    T_type[ttdh_08_3b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_3b                         */
    T_code[ttdh_08_3b_2]               = "tdh_08_3b_2";               T_max[ttdh_08_3b_2]               = 0;    T_type[ttdh_08_3b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_3b                         */
    T_code[tmax_08_3b]                 = "max_08_3b";                 T_max[tmax_08_3b]                 = 0;    T_type[tmax_08_3b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b               */
    T_code[t08_4a_1]                   = "08_4a_1";                   T_max[t08_4a_1]                   = 0;    T_type[t08_4a_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_4a                      */
    T_code[t08_4a_2]                   = "08_4a_2";                   T_max[t08_4a_2]                   = 0;    T_type[t08_4a_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_4a                      */
    T_code[ttdh_08_4a_1]               = "tdh_08_4a_1";               T_max[ttdh_08_4a_1]               = 25;   T_type[ttdh_08_4a_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_4a                         */
    T_code[ttdh_08_4a_2]               = "tdh_08_4a_2";               T_max[ttdh_08_4a_2]               = 25;   T_type[ttdh_08_4a_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_4a                         */
    T_code[tmax_08_4a]                 = "max_08_4a";                 T_max[tmax_08_4a]                 = 0;    T_type[tmax_08_4a]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a               */
    T_code[t08_4b_1]                   = "08_4b_1";                   T_max[t08_4b_1]                   = 0;    T_type[t08_4b_1]                   = TE_type; /* Dynamische hiaattijden moment 1 voor detector 08_4b                      */
    T_code[t08_4b_2]                   = "08_4b_2";                   T_max[t08_4b_2]                   = 0;    T_type[t08_4b_2]                   = TE_type; /* Dynamische hiaattijden moment 2 voor detector 08_4b                      */
    T_code[ttdh_08_4b_1]               = "tdh_08_4b_1";               T_max[ttdh_08_4b_1]               = 2520; T_type[ttdh_08_4b_1]               = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 08_4b                         */
    T_code[ttdh_08_4b_2]               = "tdh_08_4b_2";               T_max[ttdh_08_4b_2]               = 25;   T_type[ttdh_08_4b_2]               = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 08_4b                         */
    T_code[tmax_08_4b]                 = "max_08_4b";                 T_max[tmax_08_4b]                 = 0;    T_type[tmax_08_4b]                 = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b               */
    T_code[t09_1_1]                    = "09_1_1";                    T_max[t09_1_1]                    = 0;    T_type[t09_1_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_1                       */
    T_code[t09_1_2]                    = "09_1_2";                    T_max[t09_1_2]                    = 0;    T_type[t09_1_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_1                       */
    T_code[ttdh_09_1_1]                = "tdh_09_1_1";                T_max[ttdh_09_1_1]                = 0;    T_type[ttdh_09_1_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_1                          */
    T_code[ttdh_09_1_2]                = "tdh_09_1_2";                T_max[ttdh_09_1_2]                = 0;    T_type[ttdh_09_1_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_1                          */
    T_code[tmax_09_1]                  = "max_09_1";                  T_max[tmax_09_1]                  = 0;    T_type[tmax_09_1]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                */
    T_code[t09_2_1]                    = "09_2_1";                    T_max[t09_2_1]                    = 0;    T_type[t09_2_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_2                       */
    T_code[t09_2_2]                    = "09_2_2";                    T_max[t09_2_2]                    = 0;    T_type[t09_2_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_2                       */
    T_code[ttdh_09_2_1]                = "tdh_09_2_1";                T_max[ttdh_09_2_1]                = 0;    T_type[ttdh_09_2_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_2                          */
    T_code[ttdh_09_2_2]                = "tdh_09_2_2";                T_max[ttdh_09_2_2]                = 0;    T_type[ttdh_09_2_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_2                          */
    T_code[tmax_09_2]                  = "max_09_2";                  T_max[tmax_09_2]                  = 0;    T_type[tmax_09_2]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                */
    T_code[t09_3_1]                    = "09_3_1";                    T_max[t09_3_1]                    = 0;    T_type[t09_3_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_3                       */
    T_code[t09_3_2]                    = "09_3_2";                    T_max[t09_3_2]                    = 0;    T_type[t09_3_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_3                       */
    T_code[ttdh_09_3_1]                = "tdh_09_3_1";                T_max[ttdh_09_3_1]                = 0;    T_type[ttdh_09_3_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_3                          */
    T_code[ttdh_09_3_2]                = "tdh_09_3_2";                T_max[ttdh_09_3_2]                = 0;    T_type[ttdh_09_3_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_3                          */
    T_code[tmax_09_3]                  = "max_09_3";                  T_max[tmax_09_3]                  = 0;    T_type[tmax_09_3]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                */
    T_code[t11_1_1]                    = "11_1_1";                    T_max[t11_1_1]                    = 0;    T_type[t11_1_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_1                       */
    T_code[t11_1_2]                    = "11_1_2";                    T_max[t11_1_2]                    = 0;    T_type[t11_1_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_1                       */
    T_code[ttdh_11_1_1]                = "tdh_11_1_1";                T_max[ttdh_11_1_1]                = 0;    T_type[ttdh_11_1_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_1                          */
    T_code[ttdh_11_1_2]                = "tdh_11_1_2";                T_max[ttdh_11_1_2]                = 0;    T_type[ttdh_11_1_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_1                          */
    T_code[tmax_11_1]                  = "max_11_1";                  T_max[tmax_11_1]                  = 80;   T_type[tmax_11_1]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                */
    T_code[t11_2_1]                    = "11_2_1";                    T_max[t11_2_1]                    = 0;    T_type[t11_2_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_2                       */
    T_code[t11_2_2]                    = "11_2_2";                    T_max[t11_2_2]                    = 0;    T_type[t11_2_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_2                       */
    T_code[ttdh_11_2_1]                = "tdh_11_2_1";                T_max[ttdh_11_2_1]                = 1;    T_type[ttdh_11_2_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_2                          */
    T_code[ttdh_11_2_2]                = "tdh_11_2_2";                T_max[ttdh_11_2_2]                = 1;    T_type[ttdh_11_2_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_2                          */
    T_code[tmax_11_2]                  = "max_11_2";                  T_max[tmax_11_2]                  = 100;  T_type[tmax_11_2]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                */
    T_code[t11_3_1]                    = "11_3_1";                    T_max[t11_3_1]                    = 100;  T_type[t11_3_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_3                       */
    T_code[t11_3_2]                    = "11_3_2";                    T_max[t11_3_2]                    = 220;  T_type[t11_3_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_3                       */
    T_code[ttdh_11_3_1]                = "tdh_11_3_1";                T_max[ttdh_11_3_1]                = 20;   T_type[ttdh_11_3_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_3                          */
    T_code[ttdh_11_3_2]                = "tdh_11_3_2";                T_max[ttdh_11_3_2]                = 8;    T_type[ttdh_11_3_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_3                          */
    T_code[tmax_11_3]                  = "max_11_3";                  T_max[tmax_11_3]                  = 0;    T_type[tmax_11_3]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                */
    T_code[t11_4_1]                    = "11_4_1";                    T_max[t11_4_1]                    = 0;    T_type[t11_4_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 11_4                       */
    T_code[t11_4_2]                    = "11_4_2";                    T_max[t11_4_2]                    = 0;    T_type[t11_4_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 11_4                       */
    T_code[ttdh_11_4_1]                = "tdh_11_4_1";                T_max[ttdh_11_4_1]                = 25;   T_type[ttdh_11_4_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 11_4                          */
    T_code[ttdh_11_4_2]                = "tdh_11_4_2";                T_max[ttdh_11_4_2]                = 25;   T_type[ttdh_11_4_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 11_4                          */
    T_code[tmax_11_4]                  = "max_11_4";                  T_max[tmax_11_4]                  = 0;    T_type[tmax_11_4]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                */
    T_code[tcycl]                      = "cycl";                      T_max[tcycl]                      = 999;  T_type[tcycl]                      = TS_type; /* Bijhouden actuele cyclustijd                                             */
    T_code[tav28_2]                    = "av28_2";                    T_max[tav28_2]                    = 50;   T_type[tav28_2]                    = TE_type; /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                  */
    T_code[tkm02]                      = "km02";                      T_max[tkm02]                      = 80;   T_type[tkm02]                      = TE_type; /* Kop maximum voor detector 02                                             */
    T_code[tkm03]                      = "km03";                      T_max[tkm03]                      = 80;   T_type[tkm03]                      = TE_type; /* Kop maximum voor detector 03                                             */
    T_code[tkm05]                      = "km05";                      T_max[tkm05]                      = 80;   T_type[tkm05]                      = TE_type; /* Kop maximum voor detector 05                                             */
    T_code[tkm08]                      = "km08";                      T_max[tkm08]                      = 80;   T_type[tkm08]                      = TE_type; /* Kop maximum voor detector 08                                             */
    T_code[tkm09]                      = "km09";                      T_max[tkm09]                      = 80;   T_type[tkm09]                      = TE_type; /* Kop maximum voor detector 09                                             */
    T_code[tkm11]                      = "km11";                      T_max[tkm11]                      = 80;   T_type[tkm11]                      = TE_type; /* Kop maximum voor detector 11                                             */
    T_code[tkm21]                      = "km21";                      T_max[tkm21]                      = 80;   T_type[tkm21]                      = TE_type; /* Kop maximum voor detector 21                                             */
    T_code[tkm22]                      = "km22";                      T_max[tkm22]                      = 60;   T_type[tkm22]                      = TE_type; /* Kop maximum voor detector 22                                             */
    T_code[tkm24]                      = "km24";                      T_max[tkm24]                      = 60;   T_type[tkm24]                      = TE_type; /* Kop maximum voor detector 24                                             */
    T_code[tkm26]                      = "km26";                      T_max[tkm26]                      = 80;   T_type[tkm26]                      = TE_type; /* Kop maximum voor detector 26                                             */
    T_code[tkm28]                      = "km28";                      T_max[tkm28]                      = 60;   T_type[tkm28]                      = TE_type; /* Kop maximum voor detector 28                                             */
    T_code[tkm61]                      = "km61";                      T_max[tkm61]                      = 80;   T_type[tkm61]                      = TE_type; /* Kop maximum voor detector 61                                             */
    T_code[tkm62]                      = "km62";                      T_max[tkm62]                      = 80;   T_type[tkm62]                      = TE_type; /* Kop maximum voor detector 62                                             */
    T_code[tkm67]                      = "km67";                      T_max[tkm67]                      = 80;   T_type[tkm67]                      = TE_type; /* Kop maximum voor detector 67                                             */
    T_code[tkm68]                      = "km68";                      T_max[tkm68]                      = 80;   T_type[tkm68]                      = TE_type; /* Kop maximum voor detector 68                                             */
    T_code[tkm81]                      = "km81";                      T_max[tkm81]                      = 80;   T_type[tkm81]                      = TE_type; /* Kop maximum voor detector 81                                             */
    T_code[tkm82]                      = "km82";                      T_max[tkm82]                      = 80;   T_type[tkm82]                      = TE_type; /* Kop maximum voor detector 82                                             */
    T_code[tkm84]                      = "km84";                      T_max[tkm84]                      = 60;   T_type[tkm84]                      = TE_type; /* Kop maximum voor detector 84                                             */
    T_code[thdvd02_1a]                 = "hdvd02_1a";                 T_max[thdvd02_1a]                 = 25;   T_type[thdvd02_1a]                 = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a               */
    T_code[thdvd02_1b]                 = "hdvd02_1b";                 T_max[thdvd02_1b]                 = 25;   T_type[thdvd02_1b]                 = TE_type; /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b               */
    T_code[tdstvert02]                 = "dstvert02";                 T_max[tdstvert02]                 = 100;  T_type[tdstvert02]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02      */
    T_code[thdvd03_1]                  = "hdvd03_1";                  T_max[thdvd03_1]                  = 25;   T_type[thdvd03_1]                  = TE_type; /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                */
    T_code[tdstvert03]                 = "dstvert03";                 T_max[tdstvert03]                 = 100;  T_type[tdstvert03]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03      */
    T_code[thdvd05_1]                  = "hdvd05_1";                  T_max[thdvd05_1]                  = 25;   T_type[thdvd05_1]                  = TE_type; /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                */
    T_code[tdstvert05]                 = "dstvert05";                 T_max[tdstvert05]                 = 100;  T_type[tdstvert05]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05      */
    T_code[thdvd08_1a]                 = "hdvd08_1a";                 T_max[thdvd08_1a]                 = 25;   T_type[thdvd08_1a]                 = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a               */
    T_code[thdvd08_1b]                 = "hdvd08_1b";                 T_max[thdvd08_1b]                 = 25;   T_type[thdvd08_1b]                 = TE_type; /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b               */
    T_code[tdstvert08]                 = "dstvert08";                 T_max[tdstvert08]                 = 100;  T_type[tdstvert08]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08      */
    T_code[thdvd09_1]                  = "hdvd09_1";                  T_max[thdvd09_1]                  = 25;   T_type[thdvd09_1]                  = TE_type; /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                */
    T_code[tdstvert09]                 = "dstvert09";                 T_max[tdstvert09]                 = 100;  T_type[tdstvert09]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09      */
    T_code[thdvd11_1]                  = "hdvd11_1";                  T_max[thdvd11_1]                  = 25;   T_type[thdvd11_1]                  = TE_type; /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                */
    T_code[tdstvert11]                 = "dstvert11";                 T_max[tdstvert11]                 = 100;  T_type[tdstvert11]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11      */
    T_code[tdstvert21]                 = "dstvert21";                 T_max[tdstvert21]                 = 100;  T_type[tdstvert21]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21      */
    T_code[thdvd22_1]                  = "hdvd22_1";                  T_max[thdvd22_1]                  = 35;   T_type[thdvd22_1]                  = TE_type; /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                */
    T_code[tdstvert22]                 = "dstvert22";                 T_max[tdstvert22]                 = 100;  T_type[tdstvert22]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22      */
    T_code[thdvd24_1]                  = "hdvd24_1";                  T_max[thdvd24_1]                  = 35;   T_type[thdvd24_1]                  = TE_type; /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                */
    T_code[tdstvert24]                 = "dstvert24";                 T_max[tdstvert24]                 = 100;  T_type[tdstvert24]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24      */
    T_code[tdstvert26]                 = "dstvert26";                 T_max[tdstvert26]                 = 100;  T_type[tdstvert26]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26      */
    T_code[thdvd28_1]                  = "hdvd28_1";                  T_max[thdvd28_1]                  = 35;   T_type[thdvd28_1]                  = TE_type; /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                */
    T_code[tdstvert28]                 = "dstvert28";                 T_max[tdstvert28]                 = 100;  T_type[tdstvert28]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28      */
    T_code[tdstvert31]                 = "dstvert31";                 T_max[tdstvert31]                 = 300;  T_type[tdstvert31]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31      */
    T_code[tdstvert32]                 = "dstvert32";                 T_max[tdstvert32]                 = 300;  T_type[tdstvert32]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32      */
    T_code[tdstvert33]                 = "dstvert33";                 T_max[tdstvert33]                 = 300;  T_type[tdstvert33]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33      */
    T_code[tdstvert34]                 = "dstvert34";                 T_max[tdstvert34]                 = 300;  T_type[tdstvert34]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34      */
    T_code[tdstvert38]                 = "dstvert38";                 T_max[tdstvert38]                 = 300;  T_type[tdstvert38]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38      */
    T_code[thdvd61_1]                  = "hdvd61_1";                  T_max[thdvd61_1]                  = 25;   T_type[thdvd61_1]                  = TE_type; /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                */
    T_code[tdstvert61]                 = "dstvert61";                 T_max[tdstvert61]                 = 100;  T_type[tdstvert61]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61      */
    T_code[thdvd62_1a]                 = "hdvd62_1a";                 T_max[thdvd62_1a]                 = 25;   T_type[thdvd62_1a]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a               */
    T_code[thdvd62_1b]                 = "hdvd62_1b";                 T_max[thdvd62_1b]                 = 25;   T_type[thdvd62_1b]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b               */
    T_code[tdstvert62]                 = "dstvert62";                 T_max[tdstvert62]                 = 100;  T_type[tdstvert62]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62      */
    T_code[thdvd67_1]                  = "hdvd67_1";                  T_max[thdvd67_1]                  = 25;   T_type[thdvd67_1]                  = TE_type; /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                */
    T_code[tdstvert67]                 = "dstvert67";                 T_max[tdstvert67]                 = 100;  T_type[tdstvert67]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67      */
    T_code[thdvd68_1a]                 = "hdvd68_1a";                 T_max[thdvd68_1a]                 = 25;   T_type[thdvd68_1a]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a               */
    T_code[thdvd68_1b]                 = "hdvd68_1b";                 T_max[thdvd68_1b]                 = 25;   T_type[thdvd68_1b]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b               */
    T_code[tdstvert68]                 = "dstvert68";                 T_max[tdstvert68]                 = 100;  T_type[tdstvert68]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68      */
    T_code[tdstvert81]                 = "dstvert81";                 T_max[tdstvert81]                 = 100;  T_type[tdstvert81]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81      */
    T_code[tdstvert82]                 = "dstvert82";                 T_max[tdstvert82]                 = 100;  T_type[tdstvert82]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82      */
    T_code[thdvd84_1]                  = "hdvd84_1";                  T_max[thdvd84_1]                  = 35;   T_type[thdvd84_1]                  = TE_type; /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                */
    T_code[tdstvert84]                 = "dstvert84";                 T_max[tdstvert84]                 = 100;  T_type[tdstvert84]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84      */
    T_code[tafvFile68af]               = "afvFile68af";               T_max[tafvFile68af]               = 600;  T_type[tafvFile68af]               = TE_type; /* Afval vertraging file File68af                                           */
    T_code[tafv68_9a]                  = "afv68_9a";                  T_max[tafv68_9a]                  = 35;   T_type[tafv68_9a]                  = TE_type; /* Afval vertraging file 68_9a                                              */
    T_code[tbz68_9a]                   = "bz68_9a";                   T_max[tbz68_9a]                   = 35;   T_type[tbz68_9a]                   = TE_type; /* Bezettijd file detector 68_9a                                            */
    T_code[trij68_9a]                  = "rij68_9a";                  T_max[trij68_9a]                  = 20;   T_type[trij68_9a]                  = TE_type; /* Rijtijd file detector 68_9a                                              */
    T_code[tafv68_9b]                  = "afv68_9b";                  T_max[tafv68_9b]                  = 35;   T_type[tafv68_9b]                  = TE_type; /* Afval vertraging file 68_9b                                              */
    T_code[tbz68_9b]                   = "bz68_9b";                   T_max[tbz68_9b]                   = 35;   T_type[tbz68_9b]                   = TE_type; /* Bezettijd file detector 68_9b                                            */
    T_code[trij68_9b]                  = "rij68_9b";                  T_max[trij68_9b]                  = 20;   T_type[trij68_9b]                  = TE_type; /* Rijtijd file detector 68_9b                                              */
    T_code[tafkmingroen08fileFile68af] = "afkmingroen08fileFile68af"; T_max[tafkmingroen08fileFile68af] = 100;  T_type[tafkmingroen08fileFile68af] = TE_type; /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep    */
    T_code[tafkmingroen11fileFile68af] = "afkmingroen11fileFile68af"; T_max[tafkmingroen11fileFile68af] = 100;  T_type[tafkmingroen11fileFile68af] = TE_type; /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep    */
    T_code[tminrood08fileFile68af]     = "minrood08fileFile68af";     T_max[tminrood08fileFile68af]     = 0;    T_type[tminrood08fileFile68af]     = TE_type; /* Minimale roodtijd bij fase 08 voor file ingreep                          */
    T_code[tminrood11fileFile68af]     = "minrood11fileFile68af";     T_max[tminrood11fileFile68af]     = 0;    T_type[tminrood11fileFile68af]     = TE_type; /* Minimale roodtijd bij fase 11 voor file ingreep                          */
    T_code[tmaxgroen08fileFile68af]    = "maxgroen08fileFile68af";    T_max[tmaxgroen08fileFile68af]    = 400;  T_type[tmaxgroen08fileFile68af]    = TE_type; /* Maximale groentijd bij fase 08 voor file ingreep                         */
    T_code[tmaxgroen11fileFile68af]    = "maxgroen11fileFile68af";    T_max[tmaxgroen11fileFile68af]    = 400;  T_type[tmaxgroen11fileFile68af]    = TE_type; /* Maximale groentijd bij fase 11 voor file ingreep                         */
    T_code[tnlfg0262]                  = "nlfg0262";                  T_max[tnlfg0262]                  = 50;   T_type[tnlfg0262]                  = TE_type; /* Naloop tijdens vastgroen van 02 naar 62                                  */
    T_code[tnlfgd0262]                 = "nlfgd0262";                 T_max[tnlfgd0262]                 = 60;   T_type[tnlfgd0262]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62             */
    T_code[tnleg0262]                  = "nleg0262";                  T_max[tnleg0262]                  = 50;   T_type[tnleg0262]                  = TE_type; /* Naloop op einde groen van 02 naar 62                                     */
    T_code[tnlegd0262]                 = "nlegd0262";                 T_max[tnlegd0262]                 = 60;   T_type[tnlegd0262]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 02 naar 62                */
    T_code[tvgnaloop0262]              = "vgnaloop0262";              T_max[tvgnaloop0262]              = 0;    T_type[tvgnaloop0262]              = TE_type; /* Timer naloop EG van 02 naar 62                                           */
    T_code[tnlfg0868]                  = "nlfg0868";                  T_max[tnlfg0868]                  = 60;   T_type[tnlfg0868]                  = TE_type; /* Naloop tijdens vastgroen van 08 naar 68                                  */
    T_code[tnlfgd0868]                 = "nlfgd0868";                 T_max[tnlfgd0868]                 = 60;   T_type[tnlfgd0868]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68             */
    T_code[tnleg0868]                  = "nleg0868";                  T_max[tnleg0868]                  = 60;   T_type[tnleg0868]                  = TE_type; /* Naloop op einde groen van 08 naar 68                                     */
    T_code[tnlegd0868]                 = "nlegd0868";                 T_max[tnlegd0868]                 = 70;   T_type[tnlegd0868]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 08 naar 68                */
    T_code[tvgnaloop0868]              = "vgnaloop0868";              T_max[tvgnaloop0868]              = 0;    T_type[tvgnaloop0868]              = TE_type; /* Timer naloop EG van 08 naar 68                                           */
    T_code[tnlfg1168]                  = "nlfg1168";                  T_max[tnlfg1168]                  = 40;   T_type[tnlfg1168]                  = TE_type; /* Naloop tijdens vastgroen van 11 naar 68                                  */
    T_code[tnlfgd1168]                 = "nlfgd1168";                 T_max[tnlfgd1168]                 = 50;   T_type[tnlfgd1168]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68             */
    T_code[tnleg1168]                  = "nleg1168";                  T_max[tnleg1168]                  = 50;   T_type[tnleg1168]                  = TE_type; /* Naloop op einde groen van 11 naar 68                                     */
    T_code[tnlegd1168]                 = "nlegd1168";                 T_max[tnlegd1168]                 = 60;   T_type[tnlegd1168]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 11 naar 68                */
    T_code[tvgnaloop1168]              = "vgnaloop1168";              T_max[tvgnaloop1168]              = 0;    T_type[tvgnaloop1168]              = TE_type; /* Timer naloop EG van 11 naar 68                                           */
    T_code[tnlfg2221]                  = "nlfg2221";                  T_max[tnlfg2221]                  = 30;   T_type[tnlfg2221]                  = TE_type; /* Naloop tijdens vastgroen van 22 naar 21                                  */
    T_code[tnlfgd2221]                 = "nlfgd2221";                 T_max[tnlfgd2221]                 = 30;   T_type[tnlfgd2221]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21             */
    T_code[tnlcv2221]                  = "nlcv2221";                  T_max[tnlcv2221]                  = 30;   T_type[tnlcv2221]                  = TE_type; /* Naloop tijdens cyclisch verlenggroen van 22 naar 21                      */
    T_code[tnlcvd2221]                 = "nlcvd2221";                 T_max[tnlcvd2221]                 = 30;   T_type[tnlcvd2221]                 = TE_type; /* Detectieafhankelijke naloop tijdens cyclisch verlenggroen van 22 naar 21 */
    T_code[tvgnaloop2221]              = "vgnaloop2221";              T_max[tvgnaloop2221]              = 0;    T_type[tvgnaloop2221]              = TE_type; /* Timer naloop EG van 22 naar 21                                           */
    T_code[tnlsgd3132]                 = "nlsgd3132";                 T_max[tnlsgd3132]                 = 125;  T_type[tnlsgd3132]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 31 naar 32                */
    T_code[tnlsgd3231]                 = "nlsgd3231";                 T_max[tnlsgd3231]                 = 115;  T_type[tnlsgd3231]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 32 naar 31                */
    T_code[tnlsgd3334]                 = "nlsgd3334";                 T_max[tnlsgd3334]                 = 80;   T_type[tnlsgd3334]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 33 naar 34                */
    T_code[tnlsgd3433]                 = "nlsgd3433";                 T_max[tnlsgd3433]                 = 95;   T_type[tnlsgd3433]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 34 naar 33                */
    T_code[tnlfg8281]                  = "nlfg8281";                  T_max[tnlfg8281]                  = 50;   T_type[tnlfg8281]                  = TE_type; /* Naloop tijdens vastgroen van 82 naar 81                                  */
    T_code[tnlfgd8281]                 = "nlfgd8281";                 T_max[tnlfgd8281]                 = 50;   T_type[tnlfgd8281]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81             */
    T_code[tnleg8281]                  = "nleg8281";                  T_max[tnleg8281]                  = 60;   T_type[tnleg8281]                  = TE_type; /* Naloop op einde groen van 82 naar 81                                     */
    T_code[tnlegd8281]                 = "nlegd8281";                 T_max[tnlegd8281]                 = 70;   T_type[tnlegd8281]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 82 naar 81                */
    T_code[tvgnaloop8281]              = "vgnaloop8281";              T_max[tvgnaloop8281]              = 0;    T_type[tvgnaloop8281]              = TE_type; /* Timer naloop EG van 82 naar 81                                           */
    T_code[tkarmelding]                = "karmelding";                T_max[tkarmelding]                = 15;   T_type[tkarmelding]                = TE_type; /* Duur verklikking ontvangst melding KAR                                   */
    T_code[tkarog]                     = "karog";                     T_max[tkarog]                     = 1440; T_type[tkarog]                     = TM_type; /* Ondergedrag KAR                                                          */
    T_code[tbtovg02bus]                = "btovg02bus";                T_max[tbtovg02bus]                = 0;    T_type[tbtovg02bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                    */
    T_code[trt02bus]                   = "rt02bus";                   T_max[trt02bus]                   = 0;    T_type[trt02bus]                   = TE_type; /* Actuele rijtijd prio fase 02                                             */
    T_code[tgb02bus]                   = "gb02bus";                   T_max[tgb02bus]                   = 300;  T_type[tgb02bus]                   = TE_type; /* Groenbewaking prioriteit fase 02                                         */
    T_code[tblk02bus]                  = "blk02bus";                  T_max[tblk02bus]                  = 0;    T_type[tblk02bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 02                               */
    T_code[tbtovg03bus]                = "btovg03bus";                T_max[tbtovg03bus]                = 0;    T_type[tbtovg03bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                    */
    T_code[trt03bus]                   = "rt03bus";                   T_max[trt03bus]                   = 0;    T_type[trt03bus]                   = TE_type; /* Actuele rijtijd prio fase 03                                             */
    T_code[tgb03bus]                   = "gb03bus";                   T_max[tgb03bus]                   = 300;  T_type[tgb03bus]                   = TE_type; /* Groenbewaking prioriteit fase 03                                         */
    T_code[tblk03bus]                  = "blk03bus";                  T_max[tblk03bus]                  = 0;    T_type[tblk03bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 03                               */
    T_code[tbtovg05bus]                = "btovg05bus";                T_max[tbtovg05bus]                = 0;    T_type[tbtovg05bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                    */
    T_code[trt05bus]                   = "rt05bus";                   T_max[trt05bus]                   = 0;    T_type[trt05bus]                   = TE_type; /* Actuele rijtijd prio fase 05                                             */
    T_code[tgb05bus]                   = "gb05bus";                   T_max[tgb05bus]                   = 300;  T_type[tgb05bus]                   = TE_type; /* Groenbewaking prioriteit fase 05                                         */
    T_code[tblk05bus]                  = "blk05bus";                  T_max[tblk05bus]                  = 0;    T_type[tblk05bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 05                               */
    T_code[tbtovg08bus]                = "btovg08bus";                T_max[tbtovg08bus]                = 0;    T_type[tbtovg08bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                    */
    T_code[trt08bus]                   = "rt08bus";                   T_max[trt08bus]                   = 0;    T_type[trt08bus]                   = TE_type; /* Actuele rijtijd prio fase 08                                             */
    T_code[tgb08bus]                   = "gb08bus";                   T_max[tgb08bus]                   = 300;  T_type[tgb08bus]                   = TE_type; /* Groenbewaking prioriteit fase 08                                         */
    T_code[tblk08bus]                  = "blk08bus";                  T_max[tblk08bus]                  = 0;    T_type[tblk08bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 08                               */
    T_code[tbtovg09bus]                = "btovg09bus";                T_max[tbtovg09bus]                = 0;    T_type[tbtovg09bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                    */
    T_code[trt09bus]                   = "rt09bus";                   T_max[trt09bus]                   = 0;    T_type[trt09bus]                   = TE_type; /* Actuele rijtijd prio fase 09                                             */
    T_code[tgb09bus]                   = "gb09bus";                   T_max[tgb09bus]                   = 300;  T_type[tgb09bus]                   = TE_type; /* Groenbewaking prioriteit fase 09                                         */
    T_code[tblk09bus]                  = "blk09bus";                  T_max[tblk09bus]                  = 0;    T_type[tblk09bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 09                               */
    T_code[tbtovg11bus]                = "btovg11bus";                T_max[tbtovg11bus]                = 0;    T_type[tbtovg11bus]                = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                    */
    T_code[trt11bus]                   = "rt11bus";                   T_max[trt11bus]                   = 0;    T_type[trt11bus]                   = TE_type; /* Actuele rijtijd prio fase 11                                             */
    T_code[tgb11bus]                   = "gb11bus";                   T_max[tgb11bus]                   = 300;  T_type[tgb11bus]                   = TE_type; /* Groenbewaking prioriteit fase 11                                         */
    T_code[tblk11bus]                  = "blk11bus";                  T_max[tblk11bus]                  = 0;    T_type[tblk11bus]                  = TE_type; /* Blokkeertijd na prioriteitsingreep fase 11                               */
    T_code[tgbhd02]                    = "gbhd02";                    T_max[tgbhd02]                    = 900;  T_type[tgbhd02]                    = TE_type; /* Groenbewaking HD fase 02                                                 */
    T_code[trthd02]                    = "rthd02";                    T_max[trthd02]                    = 0;    T_type[trthd02]                    = TE_type; /* Actuele rijtijd HD fase 02                                               */
    T_code[tbtovg02hd]                 = "btovg02hd";                 T_max[tbtovg02hd]                 = 0;    T_type[tbtovg02hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                    */
    T_code[thdin02kar]                 = "hdin02kar";                 T_max[thdin02kar]                 = 15;   T_type[thdin02kar]                 = TE_type; /* Anti jutter tijd inmelden HD 02 KAR                                      */
    T_code[thduit02kar]                = "hduit02kar";                T_max[thduit02kar]                = 15;   T_type[thduit02kar]                = TE_type; /* Anti jutter tijd uitmelden HD 02                                         */
    T_code[tgbhd03]                    = "gbhd03";                    T_max[tgbhd03]                    = 900;  T_type[tgbhd03]                    = TE_type; /* Groenbewaking HD fase 03                                                 */
    T_code[trthd03]                    = "rthd03";                    T_max[trthd03]                    = 0;    T_type[trthd03]                    = TE_type; /* Actuele rijtijd HD fase 03                                               */
    T_code[tbtovg03hd]                 = "btovg03hd";                 T_max[tbtovg03hd]                 = 0;    T_type[tbtovg03hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                    */
    T_code[thdin03kar]                 = "hdin03kar";                 T_max[thdin03kar]                 = 15;   T_type[thdin03kar]                 = TE_type; /* Anti jutter tijd inmelden HD 03 KAR                                      */
    T_code[thduit03kar]                = "hduit03kar";                T_max[thduit03kar]                = 15;   T_type[thduit03kar]                = TE_type; /* Anti jutter tijd uitmelden HD 03                                         */
    T_code[tgbhd05]                    = "gbhd05";                    T_max[tgbhd05]                    = 900;  T_type[tgbhd05]                    = TE_type; /* Groenbewaking HD fase 05                                                 */
    T_code[trthd05]                    = "rthd05";                    T_max[trthd05]                    = 0;    T_type[trthd05]                    = TE_type; /* Actuele rijtijd HD fase 05                                               */
    T_code[tbtovg05hd]                 = "btovg05hd";                 T_max[tbtovg05hd]                 = 0;    T_type[tbtovg05hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                    */
    T_code[thdin05kar]                 = "hdin05kar";                 T_max[thdin05kar]                 = 15;   T_type[thdin05kar]                 = TE_type; /* Anti jutter tijd inmelden HD 05 KAR                                      */
    T_code[thduit05kar]                = "hduit05kar";                T_max[thduit05kar]                = 15;   T_type[thduit05kar]                = TE_type; /* Anti jutter tijd uitmelden HD 05                                         */
    T_code[tgbhd08]                    = "gbhd08";                    T_max[tgbhd08]                    = 900;  T_type[tgbhd08]                    = TE_type; /* Groenbewaking HD fase 08                                                 */
    T_code[trthd08]                    = "rthd08";                    T_max[trthd08]                    = 0;    T_type[trthd08]                    = TE_type; /* Actuele rijtijd HD fase 08                                               */
    T_code[tbtovg08hd]                 = "btovg08hd";                 T_max[tbtovg08hd]                 = 0;    T_type[tbtovg08hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                    */
    T_code[thdin08kar]                 = "hdin08kar";                 T_max[thdin08kar]                 = 15;   T_type[thdin08kar]                 = TE_type; /* Anti jutter tijd inmelden HD 08 KAR                                      */
    T_code[thduit08kar]                = "hduit08kar";                T_max[thduit08kar]                = 15;   T_type[thduit08kar]                = TE_type; /* Anti jutter tijd uitmelden HD 08                                         */
    T_code[tgbhd09]                    = "gbhd09";                    T_max[tgbhd09]                    = 900;  T_type[tgbhd09]                    = TE_type; /* Groenbewaking HD fase 09                                                 */
    T_code[trthd09]                    = "rthd09";                    T_max[trthd09]                    = 0;    T_type[trthd09]                    = TE_type; /* Actuele rijtijd HD fase 09                                               */
    T_code[tbtovg09hd]                 = "btovg09hd";                 T_max[tbtovg09hd]                 = 0;    T_type[tbtovg09hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                    */
    T_code[thdin09kar]                 = "hdin09kar";                 T_max[thdin09kar]                 = 15;   T_type[thdin09kar]                 = TE_type; /* Anti jutter tijd inmelden HD 09 KAR                                      */
    T_code[thduit09kar]                = "hduit09kar";                T_max[thduit09kar]                = 15;   T_type[thduit09kar]                = TE_type; /* Anti jutter tijd uitmelden HD 09                                         */
    T_code[tgbhd11]                    = "gbhd11";                    T_max[tgbhd11]                    = 900;  T_type[tgbhd11]                    = TE_type; /* Groenbewaking HD fase 11                                                 */
    T_code[trthd11]                    = "rthd11";                    T_max[trthd11]                    = 0;    T_type[trthd11]                    = TE_type; /* Actuele rijtijd HD fase 11                                               */
    T_code[tbtovg11hd]                 = "btovg11hd";                 T_max[tbtovg11hd]                 = 0;    T_type[tbtovg11hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                    */
    T_code[thdin11kar]                 = "hdin11kar";                 T_max[thdin11kar]                 = 15;   T_type[thdin11kar]                 = TE_type; /* Anti jutter tijd inmelden HD 11 KAR                                      */
    T_code[thduit11kar]                = "hduit11kar";                T_max[thduit11kar]                = 15;   T_type[thduit11kar]                = TE_type; /* Anti jutter tijd uitmelden HD 11                                         */
    T_code[tgbhd61]                    = "gbhd61";                    T_max[tgbhd61]                    = 900;  T_type[tgbhd61]                    = TE_type; /* Groenbewaking HD fase 61                                                 */
    T_code[trthd61]                    = "rthd61";                    T_max[trthd61]                    = 0;    T_type[trthd61]                    = TE_type; /* Actuele rijtijd HD fase 61                                               */
    T_code[tbtovg61hd]                 = "btovg61hd";                 T_max[tbtovg61hd]                 = 0;    T_type[tbtovg61hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                    */
    T_code[thdin61kar]                 = "hdin61kar";                 T_max[thdin61kar]                 = 15;   T_type[thdin61kar]                 = TE_type; /* Anti jutter tijd inmelden HD 61 KAR                                      */
    T_code[thduit61kar]                = "hduit61kar";                T_max[thduit61kar]                = 15;   T_type[thduit61kar]                = TE_type; /* Anti jutter tijd uitmelden HD 61                                         */
    T_code[tgbhd62]                    = "gbhd62";                    T_max[tgbhd62]                    = 900;  T_type[tgbhd62]                    = TE_type; /* Groenbewaking HD fase 62                                                 */
    T_code[trthd62]                    = "rthd62";                    T_max[trthd62]                    = 0;    T_type[trthd62]                    = TE_type; /* Actuele rijtijd HD fase 62                                               */
    T_code[tbtovg62hd]                 = "btovg62hd";                 T_max[tbtovg62hd]                 = 0;    T_type[tbtovg62hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                    */
    T_code[thdin62kar]                 = "hdin62kar";                 T_max[thdin62kar]                 = 15;   T_type[thdin62kar]                 = TE_type; /* Anti jutter tijd inmelden HD 62 KAR                                      */
    T_code[thduit62kar]                = "hduit62kar";                T_max[thduit62kar]                = 15;   T_type[thduit62kar]                = TE_type; /* Anti jutter tijd uitmelden HD 62                                         */
    T_code[tgbhd67]                    = "gbhd67";                    T_max[tgbhd67]                    = 900;  T_type[tgbhd67]                    = TE_type; /* Groenbewaking HD fase 67                                                 */
    T_code[trthd67]                    = "rthd67";                    T_max[trthd67]                    = 0;    T_type[trthd67]                    = TE_type; /* Actuele rijtijd HD fase 67                                               */
    T_code[tbtovg67hd]                 = "btovg67hd";                 T_max[tbtovg67hd]                 = 0;    T_type[tbtovg67hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                    */
    T_code[thdin67kar]                 = "hdin67kar";                 T_max[thdin67kar]                 = 15;   T_type[thdin67kar]                 = TE_type; /* Anti jutter tijd inmelden HD 67 KAR                                      */
    T_code[thduit67kar]                = "hduit67kar";                T_max[thduit67kar]                = 15;   T_type[thduit67kar]                = TE_type; /* Anti jutter tijd uitmelden HD 67                                         */
    T_code[tgbhd68]                    = "gbhd68";                    T_max[tgbhd68]                    = 900;  T_type[tgbhd68]                    = TE_type; /* Groenbewaking HD fase 68                                                 */
    T_code[trthd68]                    = "rthd68";                    T_max[trthd68]                    = 0;    T_type[trthd68]                    = TE_type; /* Actuele rijtijd HD fase 68                                               */
    T_code[tbtovg68hd]                 = "btovg68hd";                 T_max[tbtovg68hd]                 = 0;    T_type[tbtovg68hd]                 = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                    */
    T_code[thdin68kar]                 = "hdin68kar";                 T_max[thdin68kar]                 = 15;   T_type[thdin68kar]                 = TE_type; /* Anti jutter tijd inmelden HD 68 KAR                                      */
    T_code[thduit68kar]                = "hduit68kar";                T_max[thduit68kar]                = 15;   T_type[thduit68kar]                = TE_type; /* Anti jutter tijd uitmelden HD 68                                         */
    T_code[trgad24_3]                  = "rgad24_3";                  T_max[trgad24_3]                  = 10;   T_type[trgad24_3]                  = TE_type; /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2            */
    T_code[trgavd24_3]                 = "rgavd24_3";                 T_max[trgavd24_3]                 = 60;   T_type[trgavd24_3]                 = TE_type; /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2        */
    T_code[trgrd24_3_d24_2]            = "rgrd24_3_d24_2";            T_max[trgrd24_3_d24_2]            = 10;   T_type[trgrd24_3_d24_2]            = TE_type; /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2            */
    T_code[trgvd24_3_d24_2]            = "rgvd24_3_d24_2";            T_max[trgvd24_3_d24_2]            = 50;   T_type[trgvd24_3_d24_2]            = TE_type; /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2          */
    T_code[tfd02_1a]                   = "fd02_1a";                   T_max[tfd02_1a]                   = 60;   T_type[tfd02_1a]                   = TE_type; /* File meting RoBuGrover fase 02 detector 02_1a                            */
    T_code[tfd02_1b]                   = "fd02_1b";                   T_max[tfd02_1b]                   = 60;   T_type[tfd02_1b]                   = TE_type; /* File meting RoBuGrover fase 02 detector 02_1b                            */
    T_code[thd02_2a]                   = "hd02_2a";                   T_max[thd02_2a]                   = 10;   T_type[thd02_2a]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_2a                           */
    T_code[thd02_2b]                   = "hd02_2b";                   T_max[thd02_2b]                   = 10;   T_type[thd02_2b]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_2b                           */
    T_code[thd02_3a]                   = "hd02_3a";                   T_max[thd02_3a]                   = 10;   T_type[thd02_3a]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_3a                           */
    T_code[thd02_3b]                   = "hd02_3b";                   T_max[thd02_3b]                   = 10;   T_type[thd02_3b]                   = TE_type; /* RoBuGrover hiaat meting fase 02 detector 02_3b                           */
    T_code[tfd03_1]                    = "fd03_1";                    T_max[tfd03_1]                    = 60;   T_type[tfd03_1]                    = TE_type; /* File meting RoBuGrover fase 03 detector 03_1                             */
    T_code[thd03_2]                    = "hd03_2";                    T_max[thd03_2]                    = 10;   T_type[thd03_2]                    = TE_type; /* RoBuGrover hiaat meting fase 03 detector 03_2                            */
    T_code[tfd05_1]                    = "fd05_1";                    T_max[tfd05_1]                    = 60;   T_type[tfd05_1]                    = TE_type; /* File meting RoBuGrover fase 05 detector 05_1                             */
    T_code[thd05_2]                    = "hd05_2";                    T_max[thd05_2]                    = 10;   T_type[thd05_2]                    = TE_type; /* RoBuGrover hiaat meting fase 05 detector 05_2                            */
    T_code[tfd08_1a]                   = "fd08_1a";                   T_max[tfd08_1a]                   = 60;   T_type[tfd08_1a]                   = TE_type; /* File meting RoBuGrover fase 08 detector 08_1a                            */
    T_code[tfd08_1b]                   = "fd08_1b";                   T_max[tfd08_1b]                   = 60;   T_type[tfd08_1b]                   = TE_type; /* File meting RoBuGrover fase 08 detector 08_1b                            */
    T_code[thd08_2a]                   = "hd08_2a";                   T_max[thd08_2a]                   = 10;   T_type[thd08_2a]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_2a                           */
    T_code[thd08_2b]                   = "hd08_2b";                   T_max[thd08_2b]                   = 10;   T_type[thd08_2b]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_2b                           */
    T_code[thd08_3a]                   = "hd08_3a";                   T_max[thd08_3a]                   = 10;   T_type[thd08_3a]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_3a                           */
    T_code[thd08_3b]                   = "hd08_3b";                   T_max[thd08_3b]                   = 10;   T_type[thd08_3b]                   = TE_type; /* RoBuGrover hiaat meting fase 08 detector 08_3b                           */
    T_code[tfd09_1]                    = "fd09_1";                    T_max[tfd09_1]                    = 60;   T_type[tfd09_1]                    = TE_type; /* File meting RoBuGrover fase 09 detector 09_1                             */
    T_code[thd09_2]                    = "hd09_2";                    T_max[thd09_2]                    = 10;   T_type[thd09_2]                    = TE_type; /* RoBuGrover hiaat meting fase 09 detector 09_2                            */
    T_code[tfd11_1]                    = "fd11_1";                    T_max[tfd11_1]                    = 60;   T_type[tfd11_1]                    = TE_type; /* File meting RoBuGrover fase 11 detector 11_1                             */
    T_code[thd11_2]                    = "hd11_2";                    T_max[thd11_2]                    = 10;   T_type[thd11_2]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_2                            */
    T_code[thd11_3]                    = "hd11_3";                    T_max[thd11_3]                    = 10;   T_type[thd11_3]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_3                            */
    T_code[tuitgestca02]               = "uitgestca02";               T_max[tuitgestca02]               = 100;  T_type[tuitgestca02]               = TE_type; /* Uitgestelde cyclische aanvraag fase 02                                   */
    T_code[tuitgestca03]               = "uitgestca03";               T_max[tuitgestca03]               = 100;  T_type[tuitgestca03]               = TE_type; /* Uitgestelde cyclische aanvraag fase 03                                   */
    T_code[tuitgestca05]               = "uitgestca05";               T_max[tuitgestca05]               = 100;  T_type[tuitgestca05]               = TE_type; /* Uitgestelde cyclische aanvraag fase 05                                   */
    T_code[tuitgestca08]               = "uitgestca08";               T_max[tuitgestca08]               = 100;  T_type[tuitgestca08]               = TE_type; /* Uitgestelde cyclische aanvraag fase 08                                   */
    T_code[tuitgestca09]               = "uitgestca09";               T_max[tuitgestca09]               = 100;  T_type[tuitgestca09]               = TE_type; /* Uitgestelde cyclische aanvraag fase 09                                   */
    T_code[tuitgestca11]               = "uitgestca11";               T_max[tuitgestca11]               = 100;  T_type[tuitgestca11]               = TE_type; /* Uitgestelde cyclische aanvraag fase 11                                   */
    T_code[tuitgestca21]               = "uitgestca21";               T_max[tuitgestca21]               = 100;  T_type[tuitgestca21]               = TE_type; /* Uitgestelde cyclische aanvraag fase 21                                   */
    T_code[tuitgestca22]               = "uitgestca22";               T_max[tuitgestca22]               = 100;  T_type[tuitgestca22]               = TE_type; /* Uitgestelde cyclische aanvraag fase 22                                   */
    T_code[tuitgestca24]               = "uitgestca24";               T_max[tuitgestca24]               = 100;  T_type[tuitgestca24]               = TE_type; /* Uitgestelde cyclische aanvraag fase 24                                   */
    T_code[tuitgestca26]               = "uitgestca26";               T_max[tuitgestca26]               = 100;  T_type[tuitgestca26]               = TE_type; /* Uitgestelde cyclische aanvraag fase 26                                   */
    T_code[tuitgestca28]               = "uitgestca28";               T_max[tuitgestca28]               = 100;  T_type[tuitgestca28]               = TE_type; /* Uitgestelde cyclische aanvraag fase 28                                   */
    T_code[tuitgestca31]               = "uitgestca31";               T_max[tuitgestca31]               = 300;  T_type[tuitgestca31]               = TE_type; /* Uitgestelde cyclische aanvraag fase 31                                   */
    T_code[tuitgestca32]               = "uitgestca32";               T_max[tuitgestca32]               = 300;  T_type[tuitgestca32]               = TE_type; /* Uitgestelde cyclische aanvraag fase 32                                   */
    T_code[tuitgestca33]               = "uitgestca33";               T_max[tuitgestca33]               = 300;  T_type[tuitgestca33]               = TE_type; /* Uitgestelde cyclische aanvraag fase 33                                   */
    T_code[tuitgestca34]               = "uitgestca34";               T_max[tuitgestca34]               = 300;  T_type[tuitgestca34]               = TE_type; /* Uitgestelde cyclische aanvraag fase 34                                   */
    T_code[tuitgestca38]               = "uitgestca38";               T_max[tuitgestca38]               = 300;  T_type[tuitgestca38]               = TE_type; /* Uitgestelde cyclische aanvraag fase 38                                   */
    T_code[tuitgestca61]               = "uitgestca61";               T_max[tuitgestca61]               = 100;  T_type[tuitgestca61]               = TE_type; /* Uitgestelde cyclische aanvraag fase 61                                   */
    T_code[tuitgestca62]               = "uitgestca62";               T_max[tuitgestca62]               = 100;  T_type[tuitgestca62]               = TE_type; /* Uitgestelde cyclische aanvraag fase 62                                   */
    T_code[tuitgestca67]               = "uitgestca67";               T_max[tuitgestca67]               = 100;  T_type[tuitgestca67]               = TE_type; /* Uitgestelde cyclische aanvraag fase 67                                   */
    T_code[tuitgestca68]               = "uitgestca68";               T_max[tuitgestca68]               = 100;  T_type[tuitgestca68]               = TE_type; /* Uitgestelde cyclische aanvraag fase 68                                   */
    T_code[tuitgestca81]               = "uitgestca81";               T_max[tuitgestca81]               = 100;  T_type[tuitgestca81]               = TE_type; /* Uitgestelde cyclische aanvraag fase 81                                   */
    T_code[tuitgestca82]               = "uitgestca82";               T_max[tuitgestca82]               = 100;  T_type[tuitgestca82]               = TE_type; /* Uitgestelde cyclische aanvraag fase 82                                   */
    T_code[tuitgestca84]               = "uitgestca84";               T_max[tuitgestca84]               = 100;  T_type[tuitgestca84]               = TE_type; /* Uitgestelde cyclische aanvraag fase 84                                   */
    T_code[twtv21]                     = "wtv21";                     T_max[twtv21]                     = 999;  T_type[twtv21]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 21                           */
    T_code[twtv22]                     = "wtv22";                     T_max[twtv22]                     = 999;  T_type[twtv22]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 22                           */
    T_code[twtv24]                     = "wtv24";                     T_max[twtv24]                     = 999;  T_type[twtv24]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 24                           */
    T_code[twtv26]                     = "wtv26";                     T_max[twtv26]                     = 999;  T_type[twtv26]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 26                           */
    T_code[twtv28]                     = "wtv28";                     T_max[twtv28]                     = 999;  T_type[twtv28]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 28                           */
    T_code[twtv81]                     = "wtv81";                     T_max[twtv81]                     = 999;  T_type[twtv81]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 81                           */
    T_code[twtv82]                     = "wtv82";                     T_max[twtv82]                     = 999;  T_type[twtv82]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 82                           */
    T_code[twtv84]                     = "wtv84";                     T_max[twtv84]                     = 999;  T_type[twtv84]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 84                           */
    T_code[tvs2205]                    = "vs2205";                    T_max[tvs2205]                    = 20;   T_type[tvs2205]                    = TE_type; /* Voorstarttijd fase 22 op fase 05                                         */
    T_code[tfo0522]                    = "fo0522";                    T_max[tfo0522]                    = 40;   T_type[tfo0522]                    = TE_type; /* Fictieve ontruimingstijd van 22 naar fase 05                             */
    T_code[tvs3205]                    = "vs3205";                    T_max[tvs3205]                    = 20;   T_type[tvs3205]                    = TE_type; /* Voorstarttijd fase 32 op fase 05                                         */
    T_code[tfo0532]                    = "fo0532";                    T_max[tfo0532]                    = 50;   T_type[tfo0532]                    = TE_type; /* Fictieve ontruimingstijd van 32 naar fase 05                             */
    T_code[tlr2611]                    = "lr2611";                    T_max[tlr2611]                    = 20;   T_type[tlr2611]                    = TE_type; /* Late release tijd fase 26 naar fase 11                                   */
    T_code[tfo2611]                    = "fo2611";                    T_max[tfo2611]                    = 20;   T_type[tfo2611]                    = TE_type; /* Fictieve ontruimingstijd van 26 naar fase 11                             */
    T_code[tinl3132]                   = "inl3132";                   T_max[tinl3132]                   = 9999; T_type[tinl3132]                   = TE_type; /* Inlooptijd fase 31                                                       */
    T_code[tinl3231]                   = "inl3231";                   T_max[tinl3231]                   = 9999; T_type[tinl3231]                   = TE_type; /* Inlooptijd fase 32                                                       */
    T_code[tinl3334]                   = "inl3334";                   T_max[tinl3334]                   = 9999; T_type[tinl3334]                   = TE_type; /* Inlooptijd fase 33                                                       */
    T_code[tinl3433]                   = "inl3433";                   T_max[tinl3433]                   = 9999; T_type[tinl3433]                   = TE_type; /* Inlooptijd fase 34                                                       */
    T_code[txnl0262]                   = "xnl0262";                   T_max[txnl0262]                   = 1;    T_type[txnl0262]                   = TE_type; /* Tegenhouden fase 02 tbv naloop naar fase 62                              */
    T_code[txnl0868]                   = "xnl0868";                   T_max[txnl0868]                   = 30;   T_type[txnl0868]                   = TE_type; /* Tegenhouden fase 08 tbv naloop naar fase 68                              */
    T_code[txnl1168]                   = "xnl1168";                   T_max[txnl1168]                   = 30;   T_type[txnl1168]                   = TE_type; /* Tegenhouden fase 11 tbv naloop naar fase 68                              */
    T_code[txnl2221]                   = "xnl2221";                   T_max[txnl2221]                   = 20;   T_type[txnl2221]                   = TE_type; /* Tegenhouden fase 22 tbv naloop naar fase 21                              */
    T_code[txnl3132]                   = "xnl3132";                   T_max[txnl3132]                   = 9999; T_type[txnl3132]                   = TE_type; /* Tegenhouden fase 31 tbv naloop naar fase 32                              */
    T_code[txnl3231]                   = "xnl3231";                   T_max[txnl3231]                   = 9999; T_type[txnl3231]                   = TE_type; /* Tegenhouden fase 32 tbv naloop naar fase 31                              */
    T_code[txnl3334]                   = "xnl3334";                   T_max[txnl3334]                   = 9999; T_type[txnl3334]                   = TE_type; /* Tegenhouden fase 33 tbv naloop naar fase 34                              */
    T_code[txnl3433]                   = "xnl3433";                   T_max[txnl3433]                   = 9999; T_type[txnl3433]                   = TE_type; /* Tegenhouden fase 34 tbv naloop naar fase 33                              */
    T_code[txnl8281]                   = "xnl8281";                   T_max[txnl8281]                   = 30;   T_type[txnl8281]                   = TE_type; /* Tegenhouden fase 82 tbv naloop naar fase 81                              */

/* teller elementen */
/* ---------------- */
    C_code[cvc02bus] = "vc02bus"; C_max[cvc02bus] = 999; C_type[cvc02bus] = CT_type; /* Bijhouden prio inmeldingen fase 02 type Bus */
    C_code[cvc03bus] = "vc03bus"; C_max[cvc03bus] = 999; C_type[cvc03bus] = CT_type; /* Bijhouden prio inmeldingen fase 03 type Bus */
    C_code[cvc05bus] = "vc05bus"; C_max[cvc05bus] = 999; C_type[cvc05bus] = CT_type; /* Bijhouden prio inmeldingen fase 05 type Bus */
    C_code[cvc08bus] = "vc08bus"; C_max[cvc08bus] = 999; C_type[cvc08bus] = CT_type; /* Bijhouden prio inmeldingen fase 08 type Bus */
    C_code[cvc09bus] = "vc09bus"; C_max[cvc09bus] = 999; C_type[cvc09bus] = CT_type; /* Bijhouden prio inmeldingen fase 09 type Bus */
    C_code[cvc11bus] = "vc11bus"; C_max[cvc11bus] = 999; C_type[cvc11bus] = CT_type; /* Bijhouden prio inmeldingen fase 11 type Bus */
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
    SCH_code[schdynhiaat08]            = "dynhiaat08";            SCH[schdynhiaat08]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 08                          */
    SCH_code[schopdrempelen08]         = "opdrempelen08";         SCH[schopdrempelen08]         = 1;                                        /* Opdrempelen toepassen voor fase 08                             */
    SCH_code[schedkop_08]              = "edkop_08";              SCH[schedkop_08]              = 1;                                        /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    SCH_code[schdynhiaat09]            = "dynhiaat09";            SCH[schdynhiaat09]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 09                          */
    SCH_code[schopdrempelen09]         = "opdrempelen09";         SCH[schopdrempelen09]         = 0;                                        /* Opdrempelen toepassen voor fase 09                             */
    SCH_code[schedkop_09]              = "edkop_09";              SCH[schedkop_09]              = 1;                                        /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    SCH_code[schdynhiaat11]            = "dynhiaat11";            SCH[schdynhiaat11]            = 1;                                        /* Toepassen dynamsich hiaat bij fase 11                          */
    SCH_code[schopdrempelen11]         = "opdrempelen11";         SCH[schopdrempelen11]         = 0;                                        /* Opdrempelen toepassen voor fase 11                             */
    SCH_code[schedkop_11]              = "edkop_11";              SCH[schedkop_11]              = 1;                                        /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    SCH_code[schcycl]                  = "cycl";                  SCH[schcycl]                  = 0;                                        /* Bijhouden actuele cyclustijd aan of uit                        */
    SCH_code[schcycl_reset]            = "cycl_reset";            SCH[schcycl_reset]            = 0;                                        /* Reset meting cyclustijd                                        */
    SCH_code[schdvakd02_1a]            = "dvakd02_1a";            SCH[schdvakd02_1a]            = 1;                                        /* Aanvraag fase 02 bij storing op detector 02_1a                 */
    SCH_code[schdvakd02_1b]            = "dvakd02_1b";            SCH[schdvakd02_1b]            = 1;                                        /* Aanvraag fase 02 bij storing op detector 02_1b                 */
    SCH_code[schdvakd03_1]             = "dvakd03_1";             SCH[schdvakd03_1]             = 1;                                        /* Aanvraag fase 03 bij storing op detector 03_1                  */
    SCH_code[schdvakdk31a]             = "dvakdk31a";             SCH[schdvakdk31a]             = 1;                                        /* Aanvraag fase 31 bij storing op detector k31a                  */
    SCH_code[schdvakdk31b]             = "dvakdk31b";             SCH[schdvakdk31b]             = 1;                                        /* Aanvraag fase 31 bij storing op detector k31b                  */
    SCH_code[schfileFile68af]          = "fileFile68af";          SCH[schfileFile68af]          = 1;                                        /* File ingreep File68af toepassen                                */
    SCH_code[schfiledoserenFile68af]   = "filedoserenFile68af";   SCH[schfiledoserenFile68af]   = 1;                                        /* Toepassen doseerpercentages voor fileingreep File68af          */
    SCH_code[schfileFile68afparstrook] = "fileFile68afparstrook"; SCH[schfileFile68afparstrook] = 1;                                        /* Parallele file meldingen per strook file ingreep File68af      */
    SCH_code[schbmfix]                 = "bmfix";                 SCH[schbmfix]                 = 1;                                        /* Bijkomen tijdens fixatie mogelijk                              */
    SCH_code[schgs2484]                = "gs2484";                SCH[schgs2484]                = 1;                                        /* Schakelbare gelijkstart van 84 naar 24                         */
    SCH_code[schma0262]                = "ma0262";                SCH[schma0262]                = 1;                                        /* Meeaanvraag van 02 naar 62 actief                              */
    SCH_code[schma0521]                = "ma0521";                SCH[schma0521]                = 0;                                        /* Meeaanvraag van 05 naar 21 actief                              */
    SCH_code[schma0522]                = "ma0522";                SCH[schma0522]                = 1;                                        /* Meeaanvraag van 05 naar 22 actief                              */
    SCH_code[schma0532]                = "ma0532";                SCH[schma0532]                = 1;                                        /* Meeaanvraag van 05 naar 32 actief                              */
    SCH_code[schma0868]                = "ma0868";                SCH[schma0868]                = 1;                                        /* Meeaanvraag van 08 naar 68 actief                              */
    SCH_code[schma1126]                = "ma1126";                SCH[schma1126]                = 1;                                        /* Meeaanvraag van 11 naar 26 actief                              */
    SCH_code[schma1168]                = "ma1168";                SCH[schma1168]                = 1;                                        /* Meeaanvraag van 11 naar 68 actief                              */
    SCH_code[schma2221]                = "ma2221";                SCH[schma2221]                = 1;                                        /* Meeaanvraag van 22 naar 21 actief                              */
    SCH_code[schma3122]                = "ma3122";                SCH[schma3122]                = 0;                                        /* Meeaanvraag van 31 naar 22 actief                              */
    SCH_code[schma3132]                = "ma3132";                SCH[schma3132]                = 1;                                        /* Meeaanvraag van 31 naar 32 actief                              */
    SCH_code[schma3222]                = "ma3222";                SCH[schma3222]                = 1;                                        /* Meeaanvraag van 32 naar 22 actief                              */
    SCH_code[schma3231]                = "ma3231";                SCH[schma3231]                = 1;                                        /* Meeaanvraag van 32 naar 31 actief                              */
    SCH_code[schma3324]                = "ma3324";                SCH[schma3324]                = 1;                                        /* Meeaanvraag van 33 naar 24 actief                              */
    SCH_code[schma3334]                = "ma3334";                SCH[schma3334]                = 1;                                        /* Meeaanvraag van 33 naar 34 actief                              */
    SCH_code[schma3384]                = "ma3384";                SCH[schma3384]                = 1;                                        /* Meeaanvraag van 33 naar 84 actief                              */
    SCH_code[schma3424]                = "ma3424";                SCH[schma3424]                = 1;                                        /* Meeaanvraag van 34 naar 24 actief                              */
    SCH_code[schma3433]                = "ma3433";                SCH[schma3433]                = 1;                                        /* Meeaanvraag van 34 naar 33 actief                              */
    SCH_code[schma3484]                = "ma3484";                SCH[schma3484]                = 1;                                        /* Meeaanvraag van 34 naar 84 actief                              */
    SCH_code[schma8281]                = "ma8281";                SCH[schma8281]                = 1;                                        /* Meeaanvraag van 82 naar 81 actief                              */
    SCH_code[schmv02]                  = "mv02";                  SCH[schmv02]                  = 1;                                        /* Meeverlengen fase 02                                           */
    SCH_code[schmv03]                  = "mv03";                  SCH[schmv03]                  = 1;                                        /* Meeverlengen fase 03                                           */
    SCH_code[schmv05]                  = "mv05";                  SCH[schmv05]                  = 1;                                        /* Meeverlengen fase 05                                           */
    SCH_code[schmv08]                  = "mv08";                  SCH[schmv08]                  = 1;                                        /* Meeverlengen fase 08                                           */
    SCH_code[schmv09]                  = "mv09";                  SCH[schmv09]                  = 1;                                        /* Meeverlengen fase 09                                           */
    SCH_code[schmv11]                  = "mv11";                  SCH[schmv11]                  = 1;                                        /* Meeverlengen fase 11                                           */
    SCH_code[schmv21]                  = "mv21";                  SCH[schmv21]                  = 1;                                        /* Meeverlengen fase 21                                           */
    SCH_code[schmv22]                  = "mv22";                  SCH[schmv22]                  = 1;                                        /* Meeverlengen fase 22                                           */
    SCH_code[schhardmv2205]            = "hardmv2205";            SCH[schhardmv2205]            = 1;                                        /* Hard meeverlengen fase 22 met fase 05                          */
    SCH_code[schmv24]                  = "mv24";                  SCH[schmv24]                  = 1;                                        /* Meeverlengen fase 24                                           */
    SCH_code[schmv26]                  = "mv26";                  SCH[schmv26]                  = 1;                                        /* Meeverlengen fase 26                                           */
    SCH_code[schhardmv2611]            = "hardmv2611";            SCH[schhardmv2611]            = 1;                                        /* Hard meeverlengen fase 26 met fase 11                          */
    SCH_code[schmv28]                  = "mv28";                  SCH[schmv28]                  = 1;                                        /* Meeverlengen fase 28                                           */
    SCH_code[schmv31]                  = "mv31";                  SCH[schmv31]                  = 1;                                        /* Meeverlengen fase 31                                           */
    SCH_code[schmv32]                  = "mv32";                  SCH[schmv32]                  = 1;                                        /* Meeverlengen fase 32                                           */
    SCH_code[schhardmv3205]            = "hardmv3205";            SCH[schhardmv3205]            = 1;                                        /* Hard meeverlengen fase 32 met fase 05                          */
    SCH_code[schmv33]                  = "mv33";                  SCH[schmv33]                  = 1;                                        /* Meeverlengen fase 33                                           */
    SCH_code[schmv34]                  = "mv34";                  SCH[schmv34]                  = 1;                                        /* Meeverlengen fase 34                                           */
    SCH_code[schmv38]                  = "mv38";                  SCH[schmv38]                  = 1;                                        /* Meeverlengen fase 38                                           */
    SCH_code[schmv61]                  = "mv61";                  SCH[schmv61]                  = 1;                                        /* Meeverlengen fase 61                                           */
    SCH_code[schmv62]                  = "mv62";                  SCH[schmv62]                  = 1;                                        /* Meeverlengen fase 62                                           */
    SCH_code[schmv67]                  = "mv67";                  SCH[schmv67]                  = 1;                                        /* Meeverlengen fase 67                                           */
    SCH_code[schmv68]                  = "mv68";                  SCH[schmv68]                  = 1;                                        /* Meeverlengen fase 68                                           */
    SCH_code[schmv81]                  = "mv81";                  SCH[schmv81]                  = 1;                                        /* Meeverlengen fase 81                                           */
    SCH_code[schmv82]                  = "mv82";                  SCH[schmv82]                  = 1;                                        /* Meeverlengen fase 82                                           */
    SCH_code[schmv84]                  = "mv84";                  SCH[schmv84]                  = 1;                                        /* Meeverlengen fase 84                                           */
    SCH_code[schmlprm]                 = "mlprm";                 SCH[schmlprm]                 = 0;                                        /* Toepassen parametriseerbare modulestructuur                    */
    SCH_code[schovstipt02bus]          = "ovstipt02bus";          SCH[schovstipt02bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    SCH_code[schovstipt03bus]          = "ovstipt03bus";          SCH[schovstipt03bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    SCH_code[schovstipt05bus]          = "ovstipt05bus";          SCH[schovstipt05bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    SCH_code[schovstipt08bus]          = "ovstipt08bus";          SCH[schovstipt08bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    SCH_code[schovstipt09bus]          = "ovstipt09bus";          SCH[schovstipt09bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    SCH_code[schovstipt11bus]          = "ovstipt11bus";          SCH[schovstipt11bus]          = 1;                                        /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
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
    SCH_code[schupinagbhd02]           = "upinagbhd02";           SCH[schupinagbhd02]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    SCH_code[schhdin02kar]             = "hdin02kar";             SCH[schhdin02kar]             = 1;                                        /* Inmelden 02 via KAR HD toestaan                                */
    SCH_code[schhduit02kar]            = "hduit02kar";            SCH[schhduit02kar]            = 1;                                        /* Uitmelden 02 via KAR HD toestaan                               */
    SCH_code[schchecksirene02]         = "checksirene02";         SCH[schchecksirene02]         = 0;                                        /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd03]           = "upinagbhd03";           SCH[schupinagbhd03]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    SCH_code[schhdin03kar]             = "hdin03kar";             SCH[schhdin03kar]             = 1;                                        /* Inmelden 03 via KAR HD toestaan                                */
    SCH_code[schhduit03kar]            = "hduit03kar";            SCH[schhduit03kar]            = 1;                                        /* Uitmelden 03 via KAR HD toestaan                               */
    SCH_code[schchecksirene03]         = "checksirene03";         SCH[schchecksirene03]         = 0;                                        /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    SCH_code[schupinagbhd05]           = "upinagbhd05";           SCH[schupinagbhd05]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    SCH_code[schhdin05kar]             = "hdin05kar";             SCH[schhdin05kar]             = 1;                                        /* Inmelden 05 via KAR HD toestaan                                */
    SCH_code[schhduit05kar]            = "hduit05kar";            SCH[schhduit05kar]            = 1;                                        /* Uitmelden 05 via KAR HD toestaan                               */
    SCH_code[schchecksirene05]         = "checksirene05";         SCH[schchecksirene05]         = 1;                                        /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin05ris]             = "hdin05ris";             SCH[schhdin05ris]             = 1;                                        /* Inmelden 05 via RIS HD toestaan                                */
    SCH_code[schhduit05ris]            = "hduit05ris";            SCH[schhduit05ris]            = 1;                                        /* Uitmelden 05 via RIS HD toestaan                               */
    SCH_code[schupinagbhd08]           = "upinagbhd08";           SCH[schupinagbhd08]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    SCH_code[schhdin08kar]             = "hdin08kar";             SCH[schhdin08kar]             = 1;                                        /* Inmelden 08 via KAR HD toestaan                                */
    SCH_code[schhduit08kar]            = "hduit08kar";            SCH[schhduit08kar]            = 1;                                        /* Uitmelden 08 via KAR HD toestaan                               */
    SCH_code[schchecksirene08]         = "checksirene08";         SCH[schchecksirene08]         = 1;                                        /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin08ris]             = "hdin08ris";             SCH[schhdin08ris]             = 1;                                        /* Inmelden 08 via RIS HD toestaan                                */
    SCH_code[schhduit08ris]            = "hduit08ris";            SCH[schhduit08ris]            = 1;                                        /* Uitmelden 08 via RIS HD toestaan                               */
    SCH_code[schupinagbhd09]           = "upinagbhd09";           SCH[schupinagbhd09]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    SCH_code[schhdin09kar]             = "hdin09kar";             SCH[schhdin09kar]             = 1;                                        /* Inmelden 09 via KAR HD toestaan                                */
    SCH_code[schhduit09kar]            = "hduit09kar";            SCH[schhduit09kar]            = 1;                                        /* Uitmelden 09 via KAR HD toestaan                               */
    SCH_code[schchecksirene09]         = "checksirene09";         SCH[schchecksirene09]         = 1;                                        /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin09ris]             = "hdin09ris";             SCH[schhdin09ris]             = 1;                                        /* Inmelden 09 via RIS HD toestaan                                */
    SCH_code[schhduit09ris]            = "hduit09ris";            SCH[schhduit09ris]            = 1;                                        /* Uitmelden 09 via RIS HD toestaan                               */
    SCH_code[schupinagbhd11]           = "upinagbhd11";           SCH[schupinagbhd11]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    SCH_code[schhdin11kar]             = "hdin11kar";             SCH[schhdin11kar]             = 1;                                        /* Inmelden 11 via KAR HD toestaan                                */
    SCH_code[schhduit11kar]            = "hduit11kar";            SCH[schhduit11kar]            = 1;                                        /* Uitmelden 11 via KAR HD toestaan                               */
    SCH_code[schchecksirene11]         = "checksirene11";         SCH[schchecksirene11]         = 1;                                        /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin11ris]             = "hdin11ris";             SCH[schhdin11ris]             = 1;                                        /* Inmelden 11 via RIS HD toestaan                                */
    SCH_code[schhduit11ris]            = "hduit11ris";            SCH[schhduit11ris]            = 1;                                        /* Uitmelden 11 via RIS HD toestaan                               */
    SCH_code[schupinagbhd61]           = "upinagbhd61";           SCH[schupinagbhd61]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    SCH_code[schhdin61kar]             = "hdin61kar";             SCH[schhdin61kar]             = 1;                                        /* Inmelden 61 via KAR HD toestaan                                */
    SCH_code[schhduit61kar]            = "hduit61kar";            SCH[schhduit61kar]            = 1;                                        /* Uitmelden 61 via KAR HD toestaan                               */
    SCH_code[schchecksirene61]         = "checksirene61";         SCH[schchecksirene61]         = 1;                                        /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin61ris]             = "hdin61ris";             SCH[schhdin61ris]             = 1;                                        /* Inmelden 61 via RIS HD toestaan                                */
    SCH_code[schhduit61ris]            = "hduit61ris";            SCH[schhduit61ris]            = 1;                                        /* Uitmelden 61 via RIS HD toestaan                               */
    SCH_code[schupinagbhd62]           = "upinagbhd62";           SCH[schupinagbhd62]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    SCH_code[schhdin62kar]             = "hdin62kar";             SCH[schhdin62kar]             = 1;                                        /* Inmelden 62 via KAR HD toestaan                                */
    SCH_code[schhduit62kar]            = "hduit62kar";            SCH[schhduit62kar]            = 1;                                        /* Uitmelden 62 via KAR HD toestaan                               */
    SCH_code[schchecksirene62]         = "checksirene62";         SCH[schchecksirene62]         = 1;                                        /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin62ris]             = "hdin62ris";             SCH[schhdin62ris]             = 1;                                        /* Inmelden 62 via RIS HD toestaan                                */
    SCH_code[schhduit62ris]            = "hduit62ris";            SCH[schhduit62ris]            = 1;                                        /* Uitmelden 62 via RIS HD toestaan                               */
    SCH_code[schupinagbhd67]           = "upinagbhd67";           SCH[schupinagbhd67]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    SCH_code[schhdin67kar]             = "hdin67kar";             SCH[schhdin67kar]             = 1;                                        /* Inmelden 67 via KAR HD toestaan                                */
    SCH_code[schhduit67kar]            = "hduit67kar";            SCH[schhduit67kar]            = 1;                                        /* Uitmelden 67 via KAR HD toestaan                               */
    SCH_code[schchecksirene67]         = "checksirene67";         SCH[schchecksirene67]         = 1;                                        /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin67ris]             = "hdin67ris";             SCH[schhdin67ris]             = 1;                                        /* Inmelden 67 via RIS HD toestaan                                */
    SCH_code[schhduit67ris]            = "hduit67ris";            SCH[schhduit67ris]            = 1;                                        /* Uitmelden 67 via RIS HD toestaan                               */
    SCH_code[schupinagbhd68]           = "upinagbhd68";           SCH[schupinagbhd68]           = 0;                                        /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    SCH_code[schhdin68kar]             = "hdin68kar";             SCH[schhdin68kar]             = 1;                                        /* Inmelden 68 via KAR HD toestaan                                */
    SCH_code[schhduit68kar]            = "hduit68kar";            SCH[schhduit68kar]            = 1;                                        /* Uitmelden 68 via KAR HD toestaan                               */
    SCH_code[schchecksirene68]         = "checksirene68";         SCH[schchecksirene68]         = 1;                                        /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    SCH_code[schhdin68ris]             = "hdin68ris";             SCH[schhdin68ris]             = 1;                                        /* Inmelden 68 via RIS HD toestaan                                */
    SCH_code[schhduit68ris]            = "hduit68ris";            SCH[schhduit68ris]            = 1;                                        /* Uitmelden 68 via RIS HD toestaan                               */
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
    SCH_code[schca81]                  = "ca81";                  SCH[schca81]                  = 0;                                        /* Cyclische aanvraag fase 81                                     */
    SCH_code[schca82]                  = "ca82";                  SCH[schca82]                  = 0;                                        /* Cyclische aanvraag fase 82                                     */
    SCH_code[schca84]                  = "ca84";                  SCH[schca84]                  = 0;                                        /* Cyclische aanvraag fase 84                                     */
    SCH_code[schaltg02]                = "altg02";                SCH[schaltg02]                = 1;                                        /* Alternatieve realisatie toestaan fase 02                       */
    SCH_code[schaltg03]                = "altg03";                SCH[schaltg03]                = 1;                                        /* Alternatieve realisatie toestaan fase 03                       */
    SCH_code[schaltg05]                = "altg05";                SCH[schaltg05]                = 1;                                        /* Alternatieve realisatie toestaan fase 05                       */
    SCH_code[schaltg08]                = "altg08";                SCH[schaltg08]                = 1;                                        /* Alternatieve realisatie toestaan fase 08                       */
    SCH_code[schaltg09]                = "altg09";                SCH[schaltg09]                = 1;                                        /* Alternatieve realisatie toestaan fase 09                       */
    SCH_code[schaltg11]                = "altg11";                SCH[schaltg11]                = 1;                                        /* Alternatieve realisatie toestaan fase 11                       */
    SCH_code[schaltg21]                = "altg21";                SCH[schaltg21]                = 1;                                        /* Alternatieve realisatie toestaan fase 21                       */
    SCH_code[schaltg22]                = "altg22";                SCH[schaltg22]                = 1;                                        /* Alternatieve realisatie toestaan fase 22                       */
    SCH_code[schaltg2484]              = "altg2484";              SCH[schaltg2484]              = 1;                                        /* Alternatieve realisatie toestaan fasen 24, 84                  */
    SCH_code[schaltg26]                = "altg26";                SCH[schaltg26]                = 1;                                        /* Alternatieve realisatie toestaan fase 26                       */
    SCH_code[schaltg28]                = "altg28";                SCH[schaltg28]                = 1;                                        /* Alternatieve realisatie toestaan fase 28                       */
    SCH_code[schaltg31]                = "altg31";                SCH[schaltg31]                = 1;                                        /* Alternatieve realisatie toestaan fase 31                       */
    SCH_code[schaltg32]                = "altg32";                SCH[schaltg32]                = 1;                                        /* Alternatieve realisatie toestaan fase 32                       */
    SCH_code[schaltg33]                = "altg33";                SCH[schaltg33]                = 1;                                        /* Alternatieve realisatie toestaan fase 33                       */
    SCH_code[schaltg34]                = "altg34";                SCH[schaltg34]                = 1;                                        /* Alternatieve realisatie toestaan fase 34                       */
    SCH_code[schaltg38]                = "altg38";                SCH[schaltg38]                = 1;                                        /* Alternatieve realisatie toestaan fase 38                       */
    SCH_code[schaltg61]                = "altg61";                SCH[schaltg61]                = 1;                                        /* Alternatieve realisatie toestaan fase 61                       */
    SCH_code[schaltg62]                = "altg62";                SCH[schaltg62]                = 1;                                        /* Alternatieve realisatie toestaan fase 62                       */
    SCH_code[schaltg67]                = "altg67";                SCH[schaltg67]                = 1;                                        /* Alternatieve realisatie toestaan fase 67                       */
    SCH_code[schaltg68]                = "altg68";                SCH[schaltg68]                = 1;                                        /* Alternatieve realisatie toestaan fase 68                       */
    SCH_code[schaltg81]                = "altg81";                SCH[schaltg81]                = 1;                                        /* Alternatieve realisatie toestaan fase 81                       */
    SCH_code[schaltg82]                = "altg82";                SCH[schaltg82]                = 1;                                        /* Alternatieve realisatie toestaan fase 82                       */
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
    SCH_code[schwg81]                  = "wg81";                  SCH[schwg81]                  = 0;                                        /* Wachtstand groen fase 81                                       */
    SCH_code[schwg82]                  = "wg82";                  SCH[schwg82]                  = 0;                                        /* Wachtstand groen fase 82                                       */
    SCH_code[schwg84]                  = "wg84";                  SCH[schwg84]                  = 0;                                        /* Wachtstand groen fase 84                                       */
    SCH_code[schwtv21]                 = "wtv21";                 SCH[schwtv21]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 21 aan of uit             */
    SCH_code[schwtv22]                 = "wtv22";                 SCH[schwtv22]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 22 aan of uit             */
    SCH_code[schwtv24]                 = "wtv24";                 SCH[schwtv24]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 24 aan of uit             */
    SCH_code[schwtv26]                 = "wtv26";                 SCH[schwtv26]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 26 aan of uit             */
    SCH_code[schwtv28]                 = "wtv28";                 SCH[schwtv28]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 28 aan of uit             */
    SCH_code[schwtv81]                 = "wtv81";                 SCH[schwtv81]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 81 aan of uit             */
    SCH_code[schwtv82]                 = "wtv82";                 SCH[schwtv82]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 82 aan of uit             */
    SCH_code[schwtv84]                 = "wtv84";                 SCH[schwtv84]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 84 aan of uit             */
    SCH_code[schwtvbusbijhd]           = "wtvbusbijhd";           SCH[schwtvbusbijhd]           = 0;                                        /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep       */
    SCH_code[schlos31_1]               = "los31_1";               SCH[schlos31_1]               = 0;                                        /* Wel/niet toestaan losse realisatie 31                          */
    SCH_code[schlos31_2]               = "los31_2";               SCH[schlos31_2]               = 0;                                        /* Wel/niet toestaan losse realisatie 31                          */
    SCH_code[schlos32_1]               = "los32_1";               SCH[schlos32_1]               = 0;                                        /* Wel/niet toestaan losse realisatie 32                          */
    SCH_code[schlos32_2]               = "los32_2";               SCH[schlos32_2]               = 0;                                        /* Wel/niet toestaan losse realisatie 32                          */
    SCH_code[schlos33_1]               = "los33_1";               SCH[schlos33_1]               = 0;                                        /* Wel/niet toestaan losse realisatie 33                          */
    SCH_code[schlos33_2]               = "los33_2";               SCH[schlos33_2]               = 0;                                        /* Wel/niet toestaan losse realisatie 33                          */
    SCH_code[schlos34_1]               = "los34_1";               SCH[schlos34_1]               = 0;                                        /* Wel/niet toestaan losse realisatie 34                          */
    SCH_code[schlos34_2]               = "los34_2";               SCH[schlos34_2]               = 0;                                        /* Wel/niet toestaan losse realisatie 34                          */
    SCH_code[schsneld02_1a]            = "sneld02_1a";            SCH[schsneld02_1a]            = 1;                                        /* Aanvraag snel voor detector 02_1a aan of uit                   */
    SCH_code[schsneld02_1b]            = "sneld02_1b";            SCH[schsneld02_1b]            = 1;                                        /* Aanvraag snel voor detector 02_1b aan of uit                   */
    SCH_code[schsneld03_1]             = "sneld03_1";             SCH[schsneld03_1]             = 1;                                        /* Aanvraag snel voor detector 03_1 aan of uit                    */
    SCH_code[schsneld05_1]             = "sneld05_1";             SCH[schsneld05_1]             = 1;                                        /* Aanvraag snel voor detector 05_1 aan of uit                    */
    SCH_code[schsneld08_1a]            = "sneld08_1a";            SCH[schsneld08_1a]            = 1;                                        /* Aanvraag snel voor detector 08_1a aan of uit                   */
    SCH_code[schsneld08_1b]            = "sneld08_1b";            SCH[schsneld08_1b]            = 1;                                        /* Aanvraag snel voor detector 08_1b aan of uit                   */
    SCH_code[schsneld09_1]             = "sneld09_1";             SCH[schsneld09_1]             = 1;                                        /* Aanvraag snel voor detector 09_1 aan of uit                    */
    SCH_code[schsneld11_1]             = "sneld11_1";             SCH[schsneld11_1]             = 1;                                        /* Aanvraag snel voor detector 11_1 aan of uit                    */
    SCH_code[schsneld211]              = "sneld211";              SCH[schsneld211]              = 0;                                        /* Aanvraag snel voor detector 211 aan of uit                     */
    SCH_code[schsneld22_1]             = "sneld22_1";             SCH[schsneld22_1]             = 0;                                        /* Aanvraag snel voor detector 22_1 aan of uit                    */
    SCH_code[schsneld24_1]             = "sneld24_1";             SCH[schsneld24_1]             = 0;                                        /* Aanvraag snel voor detector 24_1 aan of uit                    */
    SCH_code[schsneld261]              = "sneld261";              SCH[schsneld261]              = 0;                                        /* Aanvraag snel voor detector 261 aan of uit                     */
    SCH_code[schsneld28_1]             = "sneld28_1";             SCH[schsneld28_1]             = 0;                                        /* Aanvraag snel voor detector 28_1 aan of uit                    */
    SCH_code[schsneld61_1]             = "sneld61_1";             SCH[schsneld61_1]             = 1;                                        /* Aanvraag snel voor detector 61_1 aan of uit                    */
    SCH_code[schsneld62_1a]            = "sneld62_1a";            SCH[schsneld62_1a]            = 1;                                        /* Aanvraag snel voor detector 62_1a aan of uit                   */
    SCH_code[schsneld62_1b]            = "sneld62_1b";            SCH[schsneld62_1b]            = 1;                                        /* Aanvraag snel voor detector 62_1b aan of uit                   */
    SCH_code[schsneld67_1]             = "sneld67_1";             SCH[schsneld67_1]             = 1;                                        /* Aanvraag snel voor detector 67_1 aan of uit                    */
    SCH_code[schsneld68_1a]            = "sneld68_1a";            SCH[schsneld68_1a]            = 1;                                        /* Aanvraag snel voor detector 68_1a aan of uit                   */
    SCH_code[schsneld68_1b]            = "sneld68_1b";            SCH[schsneld68_1b]            = 1;                                        /* Aanvraag snel voor detector 68_1b aan of uit                   */
    SCH_code[schsneld81_1]             = "sneld81_1";             SCH[schsneld81_1]             = 0;                                        /* Aanvraag snel voor detector 81_1 aan of uit                    */
    SCH_code[schsneld82_1]             = "sneld82_1";             SCH[schsneld82_1]             = 0;                                        /* Aanvraag snel voor detector 82_1 aan of uit                    */
    SCH_code[schsneld84_1]             = "sneld84_1";             SCH[schsneld84_1]             = 0;                                        /* Aanvraag snel voor detector 84_1 aan of uit                    */

/* parameters */
/* ---------- */
    PRM_code[prmspringverleng_08_1a] = "springverleng_08_1a"; PRM[prmspringverleng_08_1a] = 2;                                                 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_1b] = "springverleng_08_1b"; PRM[prmspringverleng_08_1b] = 2;                                                 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_2a] = "springverleng_08_2a"; PRM[prmspringverleng_08_2a] = 24;                                                /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_2b] = "springverleng_08_2b"; PRM[prmspringverleng_08_2b] = 24;                                                /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_3a] = "springverleng_08_3a"; PRM[prmspringverleng_08_3a] = 9;                                                 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_3b] = "springverleng_08_3b"; PRM[prmspringverleng_08_3b] = 9;                                                 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_4a] = "springverleng_08_4a"; PRM[prmspringverleng_08_4a] = 0;                                                 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_4b] = "springverleng_08_4b"; PRM[prmspringverleng_08_4b] = 0;                                                 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_09_1]  = "springverleng_09_1";  PRM[prmspringverleng_09_1]  = 0;                                                 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_09_2]  = "springverleng_09_2";  PRM[prmspringverleng_09_2]  = 0;                                                 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_09_3]  = "springverleng_09_3";  PRM[prmspringverleng_09_3]  = 0;                                                 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_1]  = "springverleng_11_1";  PRM[prmspringverleng_11_1]  = 2;                                                 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_2]  = "springverleng_11_2";  PRM[prmspringverleng_11_2]  = 24;                                                /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_3]  = "springverleng_11_3";  PRM[prmspringverleng_11_3]  = 9;                                                 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_4]  = "springverleng_11_4";  PRM[prmspringverleng_11_4]  = 0;                                                 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    PRM_code[prmfb]                  = "fb";                  PRM[prmfb]                  = 240;   PRM_type[prmfb]                  = TS_type; /* Instelling fasebewaking                                                                                                        */
    PRM_code[prmxx]                  = "xx";                  PRM[prmxx]                  = 12;                                                /* Versiebeheer xx                                                                                                                */
    PRM_code[prmyy]                  = "yy";                  PRM[prmyy]                  = 4;                                                 /* Versiebeheer yy                                                                                                                */
    PRM_code[prmzz]                  = "zz";                  PRM[prmzz]                  = 0;                                                 /* Versiebeheer zz                                                                                                                */
    PRM_code[prmaltb02]              = "altb02";              PRM[prmaltb02]              = 15;                                                /* Alternatief per blok voor fase 02                                                                                              */
    PRM_code[prmaltb03]              = "altb03";              PRM[prmaltb03]              = 15;                                                /* Alternatief per blok voor fase 03                                                                                              */
    PRM_code[prmaltb05]              = "altb05";              PRM[prmaltb05]              = 15;                                                /* Alternatief per blok voor fase 05                                                                                              */
    PRM_code[prmaltb08]              = "altb08";              PRM[prmaltb08]              = 15;                                                /* Alternatief per blok voor fase 08                                                                                              */
    PRM_code[prmaltb09]              = "altb09";              PRM[prmaltb09]              = 15;                                                /* Alternatief per blok voor fase 09                                                                                              */
    PRM_code[prmaltb11]              = "altb11";              PRM[prmaltb11]              = 15;                                                /* Alternatief per blok voor fase 11                                                                                              */
    PRM_code[prmaltb21]              = "altb21";              PRM[prmaltb21]              = 1007;                                              /* Alternatief per blok voor fase 21                                                                                              */
    PRM_code[prmaltb22]              = "altb22";              PRM[prmaltb22]              = 15;                                                /* Alternatief per blok voor fase 22                                                                                              */
    PRM_code[prmaltb24]              = "altb24";              PRM[prmaltb24]              = 15;                                                /* Alternatief per blok voor fase 24                                                                                              */
    PRM_code[prmaltb26]              = "altb26";              PRM[prmaltb26]              = 1007;                                              /* Alternatief per blok voor fase 26                                                                                              */
    PRM_code[prmaltb28]              = "altb28";              PRM[prmaltb28]              = 15;                                                /* Alternatief per blok voor fase 28                                                                                              */
    PRM_code[prmaltb31]              = "altb31";              PRM[prmaltb31]              = 15;                                                /* Alternatief per blok voor fase 31                                                                                              */
    PRM_code[prmaltb32]              = "altb32";              PRM[prmaltb32]              = 15;                                                /* Alternatief per blok voor fase 32                                                                                              */
    PRM_code[prmaltb33]              = "altb33";              PRM[prmaltb33]              = 15;                                                /* Alternatief per blok voor fase 33                                                                                              */
    PRM_code[prmaltb34]              = "altb34";              PRM[prmaltb34]              = 15;                                                /* Alternatief per blok voor fase 34                                                                                              */
    PRM_code[prmaltb38]              = "altb38";              PRM[prmaltb38]              = 15;                                                /* Alternatief per blok voor fase 38                                                                                              */
    PRM_code[prmaltb61]              = "altb61";              PRM[prmaltb61]              = 15;                                                /* Alternatief per blok voor fase 61                                                                                              */
    PRM_code[prmaltb62]              = "altb62";              PRM[prmaltb62]              = 15;                                                /* Alternatief per blok voor fase 62                                                                                              */
    PRM_code[prmaltb67]              = "altb67";              PRM[prmaltb67]              = 15;                                                /* Alternatief per blok voor fase 67                                                                                              */
    PRM_code[prmaltb68]              = "altb68";              PRM[prmaltb68]              = 15;                                                /* Alternatief per blok voor fase 68                                                                                              */
    PRM_code[prmaltb81]              = "altb81";              PRM[prmaltb81]              = 1007;                                              /* Alternatief per blok voor fase 81                                                                                              */
    PRM_code[prmaltb82]              = "altb82";              PRM[prmaltb82]              = 1007;                                              /* Alternatief per blok voor fase 82                                                                                              */
    PRM_code[prmaltb84]              = "altb84";              PRM[prmaltb84]              = 15;                                                /* Alternatief per blok voor fase 84                                                                                              */
    PRM_code[prmda02_1a]             = "da02_1a";             PRM[prmda02_1a]             = 1;                                                 /* Aanvraag functie voor detector 02_1a                                                                                           */
    PRM_code[prmda02_1b]             = "da02_1b";             PRM[prmda02_1b]             = 1;                                                 /* Aanvraag functie voor detector 02_1b                                                                                           */
    PRM_code[prmda02_2a]             = "da02_2a";             PRM[prmda02_2a]             = 1;                                                 /* Aanvraag functie voor detector 02_2a                                                                                           */
    PRM_code[prmda02_2b]             = "da02_2b";             PRM[prmda02_2b]             = 1;                                                 /* Aanvraag functie voor detector 02_2b                                                                                           */
    PRM_code[prmda02_3a]             = "da02_3a";             PRM[prmda02_3a]             = 1;                                                 /* Aanvraag functie voor detector 02_3a                                                                                           */
    PRM_code[prmda02_3b]             = "da02_3b";             PRM[prmda02_3b]             = 1;                                                 /* Aanvraag functie voor detector 02_3b                                                                                           */
    PRM_code[prmda02_4a]             = "da02_4a";             PRM[prmda02_4a]             = 2;                                                 /* Aanvraag functie voor detector 02_4a                                                                                           */
    PRM_code[prmda02_4b]             = "da02_4b";             PRM[prmda02_4b]             = 2;                                                 /* Aanvraag functie voor detector 02_4b                                                                                           */
    PRM_code[prmda03_1]              = "da03_1";              PRM[prmda03_1]              = 1;                                                 /* Aanvraag functie voor detector 03_1                                                                                            */
    PRM_code[prmda03_2]              = "da03_2";              PRM[prmda03_2]              = 1;                                                 /* Aanvraag functie voor detector 03_2                                                                                            */
    PRM_code[prmda05_1]              = "da05_1";              PRM[prmda05_1]              = 1;                                                 /* Aanvraag functie voor detector 05_1                                                                                            */
    PRM_code[prmda05_2]              = "da05_2";              PRM[prmda05_2]              = 1;                                                 /* Aanvraag functie voor detector 05_2                                                                                            */
    PRM_code[prmda08_1a]             = "da08_1a";             PRM[prmda08_1a]             = 1;                                                 /* Aanvraag functie voor detector 08_1a                                                                                           */
    PRM_code[prmda08_1b]             = "da08_1b";             PRM[prmda08_1b]             = 1;                                                 /* Aanvraag functie voor detector 08_1b                                                                                           */
    PRM_code[prmda08_2a]             = "da08_2a";             PRM[prmda08_2a]             = 1;                                                 /* Aanvraag functie voor detector 08_2a                                                                                           */
    PRM_code[prmda08_2b]             = "da08_2b";             PRM[prmda08_2b]             = 1;                                                 /* Aanvraag functie voor detector 08_2b                                                                                           */
    PRM_code[prmda08_3a]             = "da08_3a";             PRM[prmda08_3a]             = 1;                                                 /* Aanvraag functie voor detector 08_3a                                                                                           */
    PRM_code[prmda08_3b]             = "da08_3b";             PRM[prmda08_3b]             = 1;                                                 /* Aanvraag functie voor detector 08_3b                                                                                           */
    PRM_code[prmda08_4a]             = "da08_4a";             PRM[prmda08_4a]             = 2;                                                 /* Aanvraag functie voor detector 08_4a                                                                                           */
    PRM_code[prmda08_4b]             = "da08_4b";             PRM[prmda08_4b]             = 2;                                                 /* Aanvraag functie voor detector 08_4b                                                                                           */
    PRM_code[prmda09_1]              = "da09_1";              PRM[prmda09_1]              = 1;                                                 /* Aanvraag functie voor detector 09_1                                                                                            */
    PRM_code[prmda09_2]              = "da09_2";              PRM[prmda09_2]              = 1;                                                 /* Aanvraag functie voor detector 09_2                                                                                            */
    PRM_code[prmda09_3]              = "da09_3";              PRM[prmda09_3]              = 0;                                                 /* Aanvraag functie voor detector 09_3                                                                                            */
    PRM_code[prmda11_1]              = "da11_1";              PRM[prmda11_1]              = 1;                                                 /* Aanvraag functie voor detector 11_1                                                                                            */
    PRM_code[prmda11_2]              = "da11_2";              PRM[prmda11_2]              = 1;                                                 /* Aanvraag functie voor detector 11_2                                                                                            */
    PRM_code[prmda11_3]              = "da11_3";              PRM[prmda11_3]              = 1;                                                 /* Aanvraag functie voor detector 11_3                                                                                            */
    PRM_code[prmda11_4]              = "da11_4";              PRM[prmda11_4]              = 2;                                                 /* Aanvraag functie voor detector 11_4                                                                                            */
    PRM_code[prmda211]               = "da211";               PRM[prmda211]               = 1;                                                 /* Aanvraag functie voor detector 211                                                                                             */
    PRM_code[prmdak21]               = "dak21";               PRM[prmdak21]               = 2;                                                 /* Aanvraag functie voor detector k21                                                                                             */
    PRM_code[prmda22_1]              = "da22_1";              PRM[prmda22_1]              = 1;                                                 /* Aanvraag functie voor detector 22_1                                                                                            */
    PRM_code[prmdak22]               = "dak22";               PRM[prmdak22]               = 2;                                                 /* Aanvraag functie voor detector k22                                                                                             */
    PRM_code[prmda24_1]              = "da24_1";              PRM[prmda24_1]              = 1;                                                 /* Aanvraag functie voor detector 24_1                                                                                            */
    PRM_code[prmda24_2]              = "da24_2";              PRM[prmda24_2]              = 0;                                                 /* Aanvraag functie voor detector 24_2                                                                                            */
    PRM_code[prmda24_3]              = "da24_3";              PRM[prmda24_3]              = 0;                                                 /* Aanvraag functie voor detector 24_3                                                                                            */
    PRM_code[prmdak24]               = "dak24";               PRM[prmdak24]               = 2;                                                 /* Aanvraag functie voor detector k24                                                                                             */
    PRM_code[prmda261]               = "da261";               PRM[prmda261]               = 1;                                                 /* Aanvraag functie voor detector 261                                                                                             */
    PRM_code[prmdak26]               = "dak26";               PRM[prmdak26]               = 2;                                                 /* Aanvraag functie voor detector k26                                                                                             */
    PRM_code[prmda28_1]              = "da28_1";              PRM[prmda28_1]              = 1;                                                 /* Aanvraag functie voor detector 28_1                                                                                            */
    PRM_code[prmda28_2]              = "da28_2";              PRM[prmda28_2]              = 2;                                                 /* Aanvraag functie voor detector 28_2                                                                                            */
    PRM_code[prmdak28]               = "dak28";               PRM[prmdak28]               = 2;                                                 /* Aanvraag functie voor detector k28                                                                                             */
    PRM_code[prmdak31a]              = "dak31a";              PRM[prmdak31a]              = 3;                                                 /* Aanvraag functie voor detector k31a                                                                                            */
    PRM_code[prmdak31b]              = "dak31b";              PRM[prmdak31b]              = 3;                                                 /* Aanvraag functie voor detector k31b                                                                                            */
    PRM_code[prmdak32a]              = "dak32a";              PRM[prmdak32a]              = 3;                                                 /* Aanvraag functie voor detector k32a                                                                                            */
    PRM_code[prmdak32b]              = "dak32b";              PRM[prmdak32b]              = 3;                                                 /* Aanvraag functie voor detector k32b                                                                                            */
    PRM_code[prmdak33a]              = "dak33a";              PRM[prmdak33a]              = 3;                                                 /* Aanvraag functie voor detector k33a                                                                                            */
    PRM_code[prmdak33b]              = "dak33b";              PRM[prmdak33b]              = 3;                                                 /* Aanvraag functie voor detector k33b                                                                                            */
    PRM_code[prmdak34a]              = "dak34a";              PRM[prmdak34a]              = 3;                                                 /* Aanvraag functie voor detector k34a                                                                                            */
    PRM_code[prmdak34b]              = "dak34b";              PRM[prmdak34b]              = 3;                                                 /* Aanvraag functie voor detector k34b                                                                                            */
    PRM_code[prmdak38a]              = "dak38a";              PRM[prmdak38a]              = 3;                                                 /* Aanvraag functie voor detector k38a                                                                                            */
    PRM_code[prmdak38b]              = "dak38b";              PRM[prmdak38b]              = 3;                                                 /* Aanvraag functie voor detector k38b                                                                                            */
    PRM_code[prmda61_1]              = "da61_1";              PRM[prmda61_1]              = 1;                                                 /* Aanvraag functie voor detector 61_1                                                                                            */
    PRM_code[prmda61_2]              = "da61_2";              PRM[prmda61_2]              = 1;                                                 /* Aanvraag functie voor detector 61_2                                                                                            */
    PRM_code[prmda62_1a]             = "da62_1a";             PRM[prmda62_1a]             = 1;                                                 /* Aanvraag functie voor detector 62_1a                                                                                           */
    PRM_code[prmda62_1b]             = "da62_1b";             PRM[prmda62_1b]             = 1;                                                 /* Aanvraag functie voor detector 62_1b                                                                                           */
    PRM_code[prmda62_2a]             = "da62_2a";             PRM[prmda62_2a]             = 1;                                                 /* Aanvraag functie voor detector 62_2a                                                                                           */
    PRM_code[prmda62_2b]             = "da62_2b";             PRM[prmda62_2b]             = 1;                                                 /* Aanvraag functie voor detector 62_2b                                                                                           */
    PRM_code[prmda67_1]              = "da67_1";              PRM[prmda67_1]              = 1;                                                 /* Aanvraag functie voor detector 67_1                                                                                            */
    PRM_code[prmda67_2]              = "da67_2";              PRM[prmda67_2]              = 1;                                                 /* Aanvraag functie voor detector 67_2                                                                                            */
    PRM_code[prmda68_1a]             = "da68_1a";             PRM[prmda68_1a]             = 1;                                                 /* Aanvraag functie voor detector 68_1a                                                                                           */
    PRM_code[prmda68_1b]             = "da68_1b";             PRM[prmda68_1b]             = 1;                                                 /* Aanvraag functie voor detector 68_1b                                                                                           */
    PRM_code[prmda68_2a]             = "da68_2a";             PRM[prmda68_2a]             = 1;                                                 /* Aanvraag functie voor detector 68_2a                                                                                           */
    PRM_code[prmda68_2b]             = "da68_2b";             PRM[prmda68_2b]             = 1;                                                 /* Aanvraag functie voor detector 68_2b                                                                                           */
    PRM_code[prmda68_9a]             = "da68_9a";             PRM[prmda68_9a]             = 0;                                                 /* Aanvraag functie voor detector 68_9a                                                                                           */
    PRM_code[prmda68_9b]             = "da68_9b";             PRM[prmda68_9b]             = 0;                                                 /* Aanvraag functie voor detector 68_9b                                                                                           */
    PRM_code[prmda81_1]              = "da81_1";              PRM[prmda81_1]              = 1;                                                 /* Aanvraag functie voor detector 81_1                                                                                            */
    PRM_code[prmdak81]               = "dak81";               PRM[prmdak81]               = 2;                                                 /* Aanvraag functie voor detector k81                                                                                             */
    PRM_code[prmda82_1]              = "da82_1";              PRM[prmda82_1]              = 1;                                                 /* Aanvraag functie voor detector 82_1                                                                                            */
    PRM_code[prmdak82]               = "dak82";               PRM[prmdak82]               = 2;                                                 /* Aanvraag functie voor detector k82                                                                                             */
    PRM_code[prmda84_1]              = "da84_1";              PRM[prmda84_1]              = 1;                                                 /* Aanvraag functie voor detector 84_1                                                                                            */
    PRM_code[prmdak84]               = "dak84";               PRM[prmdak84]               = 2;                                                 /* Aanvraag functie voor detector k84                                                                                             */
    PRM_code[prmmk02_1a]             = "mk02_1a";             PRM[prmmk02_1a]             = 1;                                                 /* Meetkriterium type voor detector 02_1a                                                                                         */
    PRM_code[prmmk02_1b]             = "mk02_1b";             PRM[prmmk02_1b]             = 1;                                                 /* Meetkriterium type voor detector 02_1b                                                                                         */
    PRM_code[prmmk02_2a]             = "mk02_2a";             PRM[prmmk02_2a]             = 3;                                                 /* Meetkriterium type voor detector 02_2a                                                                                         */
    PRM_code[prmmk02_2b]             = "mk02_2b";             PRM[prmmk02_2b]             = 3;                                                 /* Meetkriterium type voor detector 02_2b                                                                                         */
    PRM_code[prmmk02_3a]             = "mk02_3a";             PRM[prmmk02_3a]             = 3;                                                 /* Meetkriterium type voor detector 02_3a                                                                                         */
    PRM_code[prmmk02_3b]             = "mk02_3b";             PRM[prmmk02_3b]             = 3;                                                 /* Meetkriterium type voor detector 02_3b                                                                                         */
    PRM_code[prmmk02_4a]             = "mk02_4a";             PRM[prmmk02_4a]             = 3;                                                 /* Meetkriterium type voor detector 02_4a                                                                                         */
    PRM_code[prmmk02_4b]             = "mk02_4b";             PRM[prmmk02_4b]             = 3;                                                 /* Meetkriterium type voor detector 02_4b                                                                                         */
    PRM_code[prmmk03_1]              = "mk03_1";              PRM[prmmk03_1]              = 1;                                                 /* Meetkriterium type voor detector 03_1                                                                                          */
    PRM_code[prmmk03_2]              = "mk03_2";              PRM[prmmk03_2]              = 3;                                                 /* Meetkriterium type voor detector 03_2                                                                                          */
    PRM_code[prmmk05_1]              = "mk05_1";              PRM[prmmk05_1]              = 1;                                                 /* Meetkriterium type voor detector 05_1                                                                                          */
    PRM_code[prmmk05_2]              = "mk05_2";              PRM[prmmk05_2]              = 3;                                                 /* Meetkriterium type voor detector 05_2                                                                                          */
    PRM_code[prmmk08_1a]             = "mk08_1a";             PRM[prmmk08_1a]             = 1;                                                 /* Meetkriterium type voor detector 08_1a                                                                                         */
    PRM_code[prmmk08_1b]             = "mk08_1b";             PRM[prmmk08_1b]             = 1;                                                 /* Meetkriterium type voor detector 08_1b                                                                                         */
    PRM_code[prmmk08_2a]             = "mk08_2a";             PRM[prmmk08_2a]             = 3;                                                 /* Meetkriterium type voor detector 08_2a                                                                                         */
    PRM_code[prmmk08_2b]             = "mk08_2b";             PRM[prmmk08_2b]             = 7;                                                 /* Meetkriterium type voor detector 08_2b                                                                                         */
    PRM_code[prmmk08_3a]             = "mk08_3a";             PRM[prmmk08_3a]             = 3;                                                 /* Meetkriterium type voor detector 08_3a                                                                                         */
    PRM_code[prmmk08_3b]             = "mk08_3b";             PRM[prmmk08_3b]             = 7;                                                 /* Meetkriterium type voor detector 08_3b                                                                                         */
    PRM_code[prmmk08_4a]             = "mk08_4a";             PRM[prmmk08_4a]             = 3;                                                 /* Meetkriterium type voor detector 08_4a                                                                                         */
    PRM_code[prmmk08_4b]             = "mk08_4b";             PRM[prmmk08_4b]             = 7;                                                 /* Meetkriterium type voor detector 08_4b                                                                                         */
    PRM_code[prmmk09_1]              = "mk09_1";              PRM[prmmk09_1]              = 1;                                                 /* Meetkriterium type voor detector 09_1                                                                                          */
    PRM_code[prmmk09_2]              = "mk09_2";              PRM[prmmk09_2]              = 3;                                                 /* Meetkriterium type voor detector 09_2                                                                                          */
    PRM_code[prmmk09_3]              = "mk09_3";              PRM[prmmk09_3]              = 3;                                                 /* Meetkriterium type voor detector 09_3                                                                                          */
    PRM_code[prmmk11_1]              = "mk11_1";              PRM[prmmk11_1]              = 1;                                                 /* Meetkriterium type voor detector 11_1                                                                                          */
    PRM_code[prmmk11_2]              = "mk11_2";              PRM[prmmk11_2]              = 3;                                                 /* Meetkriterium type voor detector 11_2                                                                                          */
    PRM_code[prmmk11_3]              = "mk11_3";              PRM[prmmk11_3]              = 3;                                                 /* Meetkriterium type voor detector 11_3                                                                                          */
    PRM_code[prmmk11_4]              = "mk11_4";              PRM[prmmk11_4]              = 3;                                                 /* Meetkriterium type voor detector 11_4                                                                                          */
    PRM_code[prmmk211]               = "mk211";               PRM[prmmk211]               = 1;                                                 /* Meetkriterium type voor detector 211                                                                                           */
    PRM_code[prmmk22_1]              = "mk22_1";              PRM[prmmk22_1]              = 1;                                                 /* Meetkriterium type voor detector 22_1                                                                                          */
    PRM_code[prmmk24_1]              = "mk24_1";              PRM[prmmk24_1]              = 1;                                                 /* Meetkriterium type voor detector 24_1                                                                                          */
    PRM_code[prmmk24_2]              = "mk24_2";              PRM[prmmk24_2]              = 0;                                                 /* Meetkriterium type voor detector 24_2                                                                                          */
    PRM_code[prmmk24_3]              = "mk24_3";              PRM[prmmk24_3]              = 0;                                                 /* Meetkriterium type voor detector 24_3                                                                                          */
    PRM_code[prmmk261]               = "mk261";               PRM[prmmk261]               = 1;                                                 /* Meetkriterium type voor detector 261                                                                                           */
    PRM_code[prmmk28_1]              = "mk28_1";              PRM[prmmk28_1]              = 1;                                                 /* Meetkriterium type voor detector 28_1                                                                                          */
    PRM_code[prmmk28_2]              = "mk28_2";              PRM[prmmk28_2]              = 3;                                                 /* Meetkriterium type voor detector 28_2                                                                                          */
    PRM_code[prmmk61_1]              = "mk61_1";              PRM[prmmk61_1]              = 1;                                                 /* Meetkriterium type voor detector 61_1                                                                                          */
    PRM_code[prmmk61_2]              = "mk61_2";              PRM[prmmk61_2]              = 3;                                                 /* Meetkriterium type voor detector 61_2                                                                                          */
    PRM_code[prmmk62_1a]             = "mk62_1a";             PRM[prmmk62_1a]             = 1;                                                 /* Meetkriterium type voor detector 62_1a                                                                                         */
    PRM_code[prmmk62_1b]             = "mk62_1b";             PRM[prmmk62_1b]             = 1;                                                 /* Meetkriterium type voor detector 62_1b                                                                                         */
    PRM_code[prmmk62_2a]             = "mk62_2a";             PRM[prmmk62_2a]             = 3;                                                 /* Meetkriterium type voor detector 62_2a                                                                                         */
    PRM_code[prmmk62_2b]             = "mk62_2b";             PRM[prmmk62_2b]             = 7;                                                 /* Meetkriterium type voor detector 62_2b                                                                                         */
    PRM_code[prmmk67_1]              = "mk67_1";              PRM[prmmk67_1]              = 1;                                                 /* Meetkriterium type voor detector 67_1                                                                                          */
    PRM_code[prmmk67_2]              = "mk67_2";              PRM[prmmk67_2]              = 3;                                                 /* Meetkriterium type voor detector 67_2                                                                                          */
    PRM_code[prmmk68_1a]             = "mk68_1a";             PRM[prmmk68_1a]             = 1;                                                 /* Meetkriterium type voor detector 68_1a                                                                                         */
    PRM_code[prmmk68_1b]             = "mk68_1b";             PRM[prmmk68_1b]             = 1;                                                 /* Meetkriterium type voor detector 68_1b                                                                                         */
    PRM_code[prmmk68_2a]             = "mk68_2a";             PRM[prmmk68_2a]             = 3;                                                 /* Meetkriterium type voor detector 68_2a                                                                                         */
    PRM_code[prmmk68_2b]             = "mk68_2b";             PRM[prmmk68_2b]             = 7;                                                 /* Meetkriterium type voor detector 68_2b                                                                                         */
    PRM_code[prmmk68_9a]             = "mk68_9a";             PRM[prmmk68_9a]             = 0;                                                 /* Meetkriterium type voor detector 68_9a                                                                                         */
    PRM_code[prmmk68_9b]             = "mk68_9b";             PRM[prmmk68_9b]             = 4;                                                 /* Meetkriterium type voor detector 68_9b                                                                                         */
    PRM_code[prmmk81_1]              = "mk81_1";              PRM[prmmk81_1]              = 3;                                                 /* Meetkriterium type voor detector 81_1                                                                                          */
    PRM_code[prmmk82_1]              = "mk82_1";              PRM[prmmk82_1]              = 3;                                                 /* Meetkriterium type voor detector 82_1                                                                                          */
    PRM_code[prmmk84_1]              = "mk84_1";              PRM[prmmk84_1]              = 3;                                                 /* Meetkriterium type voor detector 84_1                                                                                          */
    PRM_code[prmperc03]              = "perc03";              PRM[prmperc03]              = 65;                                                /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc05]              = "perc05";              PRM[prmperc05]              = 65;                                                /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc08]              = "perc08";              PRM[prmperc08]              = 65;                                                /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc09]              = "perc09";              PRM[prmperc09]              = 65;                                                /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc11]              = "perc11";              PRM[prmperc11]              = 65;                                                /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc61]              = "perc61";              PRM[prmperc61]              = 65;                                                /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc62]              = "perc62";              PRM[prmperc62]              = 65;                                                /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc67]              = "perc67";              PRM[prmperc67]              = 65;                                                /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc68]              = "perc68";              PRM[prmperc68]              = 65;                                                /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    PRM_code[prmfpercFile68af08]     = "fpercFile68af08";     PRM[prmfpercFile68af08]     = 50;                                                /* Doseerpercentage 08                                                                                                            */
    PRM_code[prmfpercFile68af11]     = "fpercFile68af11";     PRM[prmfpercFile68af11]     = 50;                                                /* Doseerpercentage 11                                                                                                            */
    PRM_code[prmmv02]                = "mv02";                PRM[prmmv02]                = 2;                                                 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv03]                = "mv03";                PRM[prmmv03]                = 1;                                                 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv05]                = "mv05";                PRM[prmmv05]                = 1;                                                 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv08]                = "mv08";                PRM[prmmv08]                = 1;                                                 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv09]                = "mv09";                PRM[prmmv09]                = 1;                                                 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv11]                = "mv11";                PRM[prmmv11]                = 1;                                                 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv21]                = "mv21";                PRM[prmmv21]                = 1;                                                 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv22]                = "mv22";                PRM[prmmv22]                = 1;                                                 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv24]                = "mv24";                PRM[prmmv24]                = 1;                                                 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv26]                = "mv26";                PRM[prmmv26]                = 1;                                                 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv28]                = "mv28";                PRM[prmmv28]                = 1;                                                 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv31]                = "mv31";                PRM[prmmv31]                = 4;                                                 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv32]                = "mv32";                PRM[prmmv32]                = 4;                                                 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv33]                = "mv33";                PRM[prmmv33]                = 4;                                                 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv34]                = "mv34";                PRM[prmmv34]                = 4;                                                 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv38]                = "mv38";                PRM[prmmv38]                = 4;                                                 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv61]                = "mv61";                PRM[prmmv61]                = 1;                                                 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv62]                = "mv62";                PRM[prmmv62]                = 1;                                                 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv67]                = "mv67";                PRM[prmmv67]                = 1;                                                 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv68]                = "mv68";                PRM[prmmv68]                = 1;                                                 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv81]                = "mv81";                PRM[prmmv81]                = 1;                                                 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv82]                = "mv82";                PRM[prmmv82]                = 1;                                                 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv84]                = "mv84";                PRM[prmmv84]                = 1;                                                 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmprml02]              = "prml02";              PRM[prmprml02]              = 1;                                                 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml03]              = "prml03";              PRM[prmprml03]              = 2;                                                 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml05]              = "prml05";              PRM[prmprml05]              = 4;                                                 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml08]              = "prml08";              PRM[prmprml08]              = 1;                                                 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml09]              = "prml09";              PRM[prmprml09]              = 2;                                                 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml11]              = "prml11";              PRM[prmprml11]              = 8;                                                 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml21]              = "prml21";              PRM[prmprml21]              = 4;                                                 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml22]              = "prml22";              PRM[prmprml22]              = 4;                                                 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml24]              = "prml24";              PRM[prmprml24]              = 1;                                                 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml26]              = "prml26";              PRM[prmprml26]              = 8;                                                 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml28]              = "prml28";              PRM[prmprml28]              = 1;                                                 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml31]              = "prml31";              PRM[prmprml31]              = 4;                                                 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml32]              = "prml32";              PRM[prmprml32]              = 4;                                                 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml33]              = "prml33";              PRM[prmprml33]              = 1;                                                 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml34]              = "prml34";              PRM[prmprml34]              = 1;                                                 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml38]              = "prml38";              PRM[prmprml38]              = 1;                                                 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml61]              = "prml61";              PRM[prmprml61]              = 4;                                                 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml62]              = "prml62";              PRM[prmprml62]              = 1;                                                 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml67]              = "prml67";              PRM[prmprml67]              = 4;                                                 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml68]              = "prml68";              PRM[prmprml68]              = 1;                                                 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml81]              = "prml81";              PRM[prmprml81]              = 2;                                                 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml82]              = "prml82";              PRM[prmprml82]              = 2;                                                 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml84]              = "prml84";              PRM[prmprml84]              = 1;                                                 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmxnl0262]             = "xnl0262";             PRM[prmxnl0262]             = 1;     PRM_type[prmxnl0262]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    PRM_code[prmxnl0868]             = "xnl0868";             PRM[prmxnl0868]             = 30;    PRM_type[prmxnl0868]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    PRM_code[prmxnl1168]             = "xnl1168";             PRM[prmxnl1168]             = 30;    PRM_type[prmxnl1168]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    PRM_code[prmxnl2221]             = "xnl2221";             PRM[prmxnl2221]             = 20;    PRM_type[prmxnl2221]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    PRM_code[prmxnl3132]             = "xnl3132";             PRM[prmxnl3132]             = 9999;  PRM_type[prmxnl3132]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    PRM_code[prmxnl3231]             = "xnl3231";             PRM[prmxnl3231]             = 9999;  PRM_type[prmxnl3231]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    PRM_code[prmxnl3334]             = "xnl3334";             PRM[prmxnl3334]             = 9999;  PRM_type[prmxnl3334]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    PRM_code[prmxnl3433]             = "xnl3433";             PRM[prmxnl3433]             = 9999;  PRM_type[prmxnl3433]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    PRM_code[prmxnl8281]             = "xnl8281";             PRM[prmxnl8281]             = 30;    PRM_type[prmxnl8281]             = TE_type; /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    PRM_code[prmOVtstpgrensvroeg]    = "OVtstpgrensvroeg";    PRM[prmOVtstpgrensvroeg]    = 60;    PRM_type[prmOVtstpgrensvroeg]    = TS_type; /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    PRM_code[prmOVtstpgrenslaat]     = "OVtstpgrenslaat";     PRM[prmOVtstpgrenslaat]     = 120;   PRM_type[prmOVtstpgrenslaat]     = TS_type; /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    PRM_code[prmovstipttevroeg02bus] = "ovstipttevroeg02bus"; PRM[prmovstipttevroeg02bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    PRM_code[prmovstiptoptijd02bus]  = "ovstiptoptijd02bus";  PRM[prmovstiptoptijd02bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    PRM_code[prmovstipttelaat02bus]  = "ovstipttelaat02bus";  PRM[prmovstipttelaat02bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    PRM_code[prmovstipttevroeg03bus] = "ovstipttevroeg03bus"; PRM[prmovstipttevroeg03bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    PRM_code[prmovstiptoptijd03bus]  = "ovstiptoptijd03bus";  PRM[prmovstiptoptijd03bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    PRM_code[prmovstipttelaat03bus]  = "ovstipttelaat03bus";  PRM[prmovstipttelaat03bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    PRM_code[prmovstipttevroeg05bus] = "ovstipttevroeg05bus"; PRM[prmovstipttevroeg05bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    PRM_code[prmovstiptoptijd05bus]  = "ovstiptoptijd05bus";  PRM[prmovstiptoptijd05bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    PRM_code[prmovstipttelaat05bus]  = "ovstipttelaat05bus";  PRM[prmovstipttelaat05bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    PRM_code[prmovstipttevroeg08bus] = "ovstipttevroeg08bus"; PRM[prmovstipttevroeg08bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    PRM_code[prmovstiptoptijd08bus]  = "ovstiptoptijd08bus";  PRM[prmovstiptoptijd08bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    PRM_code[prmovstipttelaat08bus]  = "ovstipttelaat08bus";  PRM[prmovstipttelaat08bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    PRM_code[prmovstipttevroeg09bus] = "ovstipttevroeg09bus"; PRM[prmovstipttevroeg09bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    PRM_code[prmovstiptoptijd09bus]  = "ovstiptoptijd09bus";  PRM[prmovstiptoptijd09bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    PRM_code[prmovstipttelaat09bus]  = "ovstipttelaat09bus";  PRM[prmovstipttelaat09bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    PRM_code[prmovstipttevroeg11bus] = "ovstipttevroeg11bus"; PRM[prmovstipttevroeg11bus] = 2;                                                 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    PRM_code[prmovstiptoptijd11bus]  = "ovstiptoptijd11bus";  PRM[prmovstiptoptijd11bus]  = 23;                                                /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    PRM_code[prmovstipttelaat11bus]  = "ovstipttelaat11bus";  PRM[prmovstipttelaat11bus]  = 123;                                               /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    PRM_code[prmmwta]                = "mwta";                PRM[prmmwta]                = 120;   PRM_type[prmmwta]                = TS_type; /* Maximale wachttijd autoverkeer                                                                                                 */
    PRM_code[prmmwtfts]              = "mwtfts";              PRM[prmmwtfts]              = 90;    PRM_type[prmmwtfts]              = TS_type; /* Maximale wachttijd fiets                                                                                                       */
    PRM_code[prmmwtvtg]              = "mwtvtg";              PRM[prmmwtvtg]              = 90;    PRM_type[prmmwtvtg]              = TS_type; /* Maximale wachttijd voetgangers                                                                                                 */
    PRM_code[prmpmgt02]              = "pmgt02";              PRM[prmpmgt02]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    PRM_code[prmognt02]              = "ognt02";              PRM[prmognt02]              = 0;     PRM_type[prmognt02]              = TE_type; /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    PRM_code[prmnofm02]              = "nofm02";              PRM[prmnofm02]              = 0;     PRM_type[prmnofm02]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    PRM_code[prmmgcov02]             = "mgcov02";             PRM[prmmgcov02]             = 0;     PRM_type[prmmgcov02]             = TE_type; /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov02]            = "pmgcov02";            PRM[prmpmgcov02]            = 0;                                                 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg02]             = "ohpmg02";             PRM[prmohpmg02]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    PRM_code[prmpmgt03]              = "pmgt03";              PRM[prmpmgt03]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    PRM_code[prmognt03]              = "ognt03";              PRM[prmognt03]              = 0;     PRM_type[prmognt03]              = TE_type; /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    PRM_code[prmnofm03]              = "nofm03";              PRM[prmnofm03]              = 0;     PRM_type[prmnofm03]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    PRM_code[prmmgcov03]             = "mgcov03";             PRM[prmmgcov03]             = 0;     PRM_type[prmmgcov03]             = TE_type; /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov03]            = "pmgcov03";            PRM[prmpmgcov03]            = 0;                                                 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg03]             = "ohpmg03";             PRM[prmohpmg03]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    PRM_code[prmpmgt05]              = "pmgt05";              PRM[prmpmgt05]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    PRM_code[prmognt05]              = "ognt05";              PRM[prmognt05]              = 0;     PRM_type[prmognt05]              = TE_type; /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    PRM_code[prmnofm05]              = "nofm05";              PRM[prmnofm05]              = 0;     PRM_type[prmnofm05]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    PRM_code[prmmgcov05]             = "mgcov05";             PRM[prmmgcov05]             = 0;     PRM_type[prmmgcov05]             = TE_type; /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov05]            = "pmgcov05";            PRM[prmpmgcov05]            = 0;                                                 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg05]             = "ohpmg05";             PRM[prmohpmg05]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    PRM_code[prmpmgt08]              = "pmgt08";              PRM[prmpmgt08]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    PRM_code[prmognt08]              = "ognt08";              PRM[prmognt08]              = 0;     PRM_type[prmognt08]              = TE_type; /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    PRM_code[prmnofm08]              = "nofm08";              PRM[prmnofm08]              = 0;     PRM_type[prmnofm08]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    PRM_code[prmmgcov08]             = "mgcov08";             PRM[prmmgcov08]             = 0;     PRM_type[prmmgcov08]             = TE_type; /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov08]            = "pmgcov08";            PRM[prmpmgcov08]            = 0;                                                 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg08]             = "ohpmg08";             PRM[prmohpmg08]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    PRM_code[prmpmgt09]              = "pmgt09";              PRM[prmpmgt09]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    PRM_code[prmognt09]              = "ognt09";              PRM[prmognt09]              = 0;     PRM_type[prmognt09]              = TE_type; /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    PRM_code[prmnofm09]              = "nofm09";              PRM[prmnofm09]              = 0;     PRM_type[prmnofm09]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    PRM_code[prmmgcov09]             = "mgcov09";             PRM[prmmgcov09]             = 0;     PRM_type[prmmgcov09]             = TE_type; /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov09]            = "pmgcov09";            PRM[prmpmgcov09]            = 0;                                                 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg09]             = "ohpmg09";             PRM[prmohpmg09]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    PRM_code[prmpmgt11]              = "pmgt11";              PRM[prmpmgt11]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    PRM_code[prmognt11]              = "ognt11";              PRM[prmognt11]              = 0;     PRM_type[prmognt11]              = TE_type; /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    PRM_code[prmnofm11]              = "nofm11";              PRM[prmnofm11]              = 0;     PRM_type[prmnofm11]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    PRM_code[prmmgcov11]             = "mgcov11";             PRM[prmmgcov11]             = 0;     PRM_type[prmmgcov11]             = TE_type; /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov11]            = "pmgcov11";            PRM[prmpmgcov11]            = 0;                                                 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg11]             = "ohpmg11";             PRM[prmohpmg11]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    PRM_code[prmpmgt21]              = "pmgt21";              PRM[prmpmgt21]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    PRM_code[prmognt21]              = "ognt21";              PRM[prmognt21]              = 0;     PRM_type[prmognt21]              = TE_type; /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    PRM_code[prmnofm21]              = "nofm21";              PRM[prmnofm21]              = 0;     PRM_type[prmnofm21]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    PRM_code[prmmgcov21]             = "mgcov21";             PRM[prmmgcov21]             = 0;     PRM_type[prmmgcov21]             = TE_type; /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov21]            = "pmgcov21";            PRM[prmpmgcov21]            = 0;                                                 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg21]             = "ohpmg21";             PRM[prmohpmg21]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    PRM_code[prmpmgt24]              = "pmgt24";              PRM[prmpmgt24]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    PRM_code[prmognt24]              = "ognt24";              PRM[prmognt24]              = 0;     PRM_type[prmognt24]              = TE_type; /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    PRM_code[prmnofm24]              = "nofm24";              PRM[prmnofm24]              = 0;     PRM_type[prmnofm24]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    PRM_code[prmmgcov24]             = "mgcov24";             PRM[prmmgcov24]             = 0;     PRM_type[prmmgcov24]             = TE_type; /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov24]            = "pmgcov24";            PRM[prmpmgcov24]            = 0;                                                 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg24]             = "ohpmg24";             PRM[prmohpmg24]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    PRM_code[prmpmgt26]              = "pmgt26";              PRM[prmpmgt26]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    PRM_code[prmognt26]              = "ognt26";              PRM[prmognt26]              = 0;     PRM_type[prmognt26]              = TE_type; /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    PRM_code[prmnofm26]              = "nofm26";              PRM[prmnofm26]              = 0;     PRM_type[prmnofm26]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    PRM_code[prmmgcov26]             = "mgcov26";             PRM[prmmgcov26]             = 0;     PRM_type[prmmgcov26]             = TE_type; /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov26]            = "pmgcov26";            PRM[prmpmgcov26]            = 0;                                                 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg26]             = "ohpmg26";             PRM[prmohpmg26]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    PRM_code[prmpmgt28]              = "pmgt28";              PRM[prmpmgt28]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    PRM_code[prmognt28]              = "ognt28";              PRM[prmognt28]              = 0;     PRM_type[prmognt28]              = TE_type; /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    PRM_code[prmnofm28]              = "nofm28";              PRM[prmnofm28]              = 0;     PRM_type[prmnofm28]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    PRM_code[prmmgcov28]             = "mgcov28";             PRM[prmmgcov28]             = 0;     PRM_type[prmmgcov28]             = TE_type; /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov28]            = "pmgcov28";            PRM[prmpmgcov28]            = 0;                                                 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg28]             = "ohpmg28";             PRM[prmohpmg28]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    PRM_code[prmpmgt31]              = "pmgt31";              PRM[prmpmgt31]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    PRM_code[prmognt31]              = "ognt31";              PRM[prmognt31]              = 0;     PRM_type[prmognt31]              = TE_type; /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    PRM_code[prmpmgt33]              = "pmgt33";              PRM[prmpmgt33]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    PRM_code[prmognt33]              = "ognt33";              PRM[prmognt33]              = 0;     PRM_type[prmognt33]              = TE_type; /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    PRM_code[prmpmgt34]              = "pmgt34";              PRM[prmpmgt34]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    PRM_code[prmognt34]              = "ognt34";              PRM[prmognt34]              = 0;     PRM_type[prmognt34]              = TE_type; /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    PRM_code[prmpmgt38]              = "pmgt38";              PRM[prmpmgt38]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    PRM_code[prmognt38]              = "ognt38";              PRM[prmognt38]              = 0;     PRM_type[prmognt38]              = TE_type; /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    PRM_code[prmpmgt61]              = "pmgt61";              PRM[prmpmgt61]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    PRM_code[prmognt61]              = "ognt61";              PRM[prmognt61]              = 0;     PRM_type[prmognt61]              = TE_type; /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    PRM_code[prmnofm61]              = "nofm61";              PRM[prmnofm61]              = 0;     PRM_type[prmnofm61]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    PRM_code[prmmgcov61]             = "mgcov61";             PRM[prmmgcov61]             = 0;     PRM_type[prmmgcov61]             = TE_type; /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov61]            = "pmgcov61";            PRM[prmpmgcov61]            = 0;                                                 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg61]             = "ohpmg61";             PRM[prmohpmg61]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    PRM_code[prmpmgt62]              = "pmgt62";              PRM[prmpmgt62]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    PRM_code[prmognt62]              = "ognt62";              PRM[prmognt62]              = 0;     PRM_type[prmognt62]              = TE_type; /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    PRM_code[prmnofm62]              = "nofm62";              PRM[prmnofm62]              = 0;     PRM_type[prmnofm62]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    PRM_code[prmmgcov62]             = "mgcov62";             PRM[prmmgcov62]             = 0;     PRM_type[prmmgcov62]             = TE_type; /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov62]            = "pmgcov62";            PRM[prmpmgcov62]            = 0;                                                 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg62]             = "ohpmg62";             PRM[prmohpmg62]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    PRM_code[prmpmgt67]              = "pmgt67";              PRM[prmpmgt67]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    PRM_code[prmognt67]              = "ognt67";              PRM[prmognt67]              = 0;     PRM_type[prmognt67]              = TE_type; /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    PRM_code[prmnofm67]              = "nofm67";              PRM[prmnofm67]              = 0;     PRM_type[prmnofm67]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    PRM_code[prmmgcov67]             = "mgcov67";             PRM[prmmgcov67]             = 0;     PRM_type[prmmgcov67]             = TE_type; /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov67]            = "pmgcov67";            PRM[prmpmgcov67]            = 0;                                                 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg67]             = "ohpmg67";             PRM[prmohpmg67]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    PRM_code[prmpmgt68]              = "pmgt68";              PRM[prmpmgt68]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    PRM_code[prmognt68]              = "ognt68";              PRM[prmognt68]              = 0;     PRM_type[prmognt68]              = TE_type; /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    PRM_code[prmnofm68]              = "nofm68";              PRM[prmnofm68]              = 0;     PRM_type[prmnofm68]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    PRM_code[prmmgcov68]             = "mgcov68";             PRM[prmmgcov68]             = 0;     PRM_type[prmmgcov68]             = TE_type; /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov68]            = "pmgcov68";            PRM[prmpmgcov68]            = 0;                                                 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg68]             = "ohpmg68";             PRM[prmohpmg68]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    PRM_code[prmpmgt82]              = "pmgt82";              PRM[prmpmgt82]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    PRM_code[prmognt82]              = "ognt82";              PRM[prmognt82]              = 0;     PRM_type[prmognt82]              = TE_type; /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    PRM_code[prmnofm82]              = "nofm82";              PRM[prmnofm82]              = 0;     PRM_type[prmnofm82]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    PRM_code[prmmgcov82]             = "mgcov82";             PRM[prmmgcov82]             = 0;     PRM_type[prmmgcov82]             = TE_type; /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov82]            = "pmgcov82";            PRM[prmpmgcov82]            = 0;                                                 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg82]             = "ohpmg82";             PRM[prmohpmg82]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    PRM_code[prmpmgt84]              = "pmgt84";              PRM[prmpmgt84]              = 0;                                                 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    PRM_code[prmognt84]              = "ognt84";              PRM[prmognt84]              = 0;     PRM_type[prmognt84]              = TE_type; /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    PRM_code[prmnofm84]              = "nofm84";              PRM[prmnofm84]              = 0;     PRM_type[prmnofm84]              = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    PRM_code[prmmgcov84]             = "mgcov84";             PRM[prmmgcov84]             = 0;     PRM_type[prmmgcov84]             = TE_type; /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov84]            = "pmgcov84";            PRM[prmpmgcov84]            = 0;                                                 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg84]             = "ohpmg84";             PRM[prmohpmg84]             = 0;                                                 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    PRM_code[prmrto02bus]            = "rto02bus";            PRM[prmrto02bus]            = 140;   PRM_type[prmrto02bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    PRM_code[prmrtbg02bus]           = "rtbg02bus";           PRM[prmrtbg02bus]           = 100;   PRM_type[prmrtbg02bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    PRM_code[prmrtg02bus]            = "rtg02bus";            PRM[prmrtg02bus]            = 60;    PRM_type[prmrtg02bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    PRM_code[prmomx02bus]            = "omx02bus";            PRM[prmomx02bus]            = 150;   PRM_type[prmomx02bus]            = TE_type; /* Ondermaximum OV fase 02                                                                                                        */
    PRM_code[prmvtgcat02bus]         = "vtgcat02bus";         PRM[prmvtgcat02bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    PRM_code[prmprio02bus]           = "prio02bus";           PRM[prmprio02bus]           = 123;                                               /* Prioriteitsinstelling OV fase 02                                                                                               */
    PRM_code[prmrto03bus]            = "rto03bus";            PRM[prmrto03bus]            = 140;   PRM_type[prmrto03bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    PRM_code[prmrtbg03bus]           = "rtbg03bus";           PRM[prmrtbg03bus]           = 100;   PRM_type[prmrtbg03bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    PRM_code[prmrtg03bus]            = "rtg03bus";            PRM[prmrtg03bus]            = 60;    PRM_type[prmrtg03bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    PRM_code[prmomx03bus]            = "omx03bus";            PRM[prmomx03bus]            = 150;   PRM_type[prmomx03bus]            = TE_type; /* Ondermaximum OV fase 03                                                                                                        */
    PRM_code[prmvtgcat03bus]         = "vtgcat03bus";         PRM[prmvtgcat03bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    PRM_code[prmprio03bus]           = "prio03bus";           PRM[prmprio03bus]           = 123;                                               /* Prioriteitsinstelling OV fase 03                                                                                               */
    PRM_code[prmrto05bus]            = "rto05bus";            PRM[prmrto05bus]            = 140;   PRM_type[prmrto05bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    PRM_code[prmrtbg05bus]           = "rtbg05bus";           PRM[prmrtbg05bus]           = 100;   PRM_type[prmrtbg05bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    PRM_code[prmrtg05bus]            = "rtg05bus";            PRM[prmrtg05bus]            = 60;    PRM_type[prmrtg05bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    PRM_code[prmomx05bus]            = "omx05bus";            PRM[prmomx05bus]            = 150;   PRM_type[prmomx05bus]            = TE_type; /* Ondermaximum OV fase 05                                                                                                        */
    PRM_code[prmvtgcat05bus]         = "vtgcat05bus";         PRM[prmvtgcat05bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    PRM_code[prmprio05bus]           = "prio05bus";           PRM[prmprio05bus]           = 123;                                               /* Prioriteitsinstelling OV fase 05                                                                                               */
    PRM_code[prmrto08bus]            = "rto08bus";            PRM[prmrto08bus]            = 140;   PRM_type[prmrto08bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    PRM_code[prmrtbg08bus]           = "rtbg08bus";           PRM[prmrtbg08bus]           = 100;   PRM_type[prmrtbg08bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    PRM_code[prmrtg08bus]            = "rtg08bus";            PRM[prmrtg08bus]            = 60;    PRM_type[prmrtg08bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    PRM_code[prmomx08bus]            = "omx08bus";            PRM[prmomx08bus]            = 150;   PRM_type[prmomx08bus]            = TE_type; /* Ondermaximum OV fase 08                                                                                                        */
    PRM_code[prmvtgcat08bus]         = "vtgcat08bus";         PRM[prmvtgcat08bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    PRM_code[prmprio08bus]           = "prio08bus";           PRM[prmprio08bus]           = 123;                                               /* Prioriteitsinstelling OV fase 08                                                                                               */
    PRM_code[prmrto09bus]            = "rto09bus";            PRM[prmrto09bus]            = 140;   PRM_type[prmrto09bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    PRM_code[prmrtbg09bus]           = "rtbg09bus";           PRM[prmrtbg09bus]           = 100;   PRM_type[prmrtbg09bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    PRM_code[prmrtg09bus]            = "rtg09bus";            PRM[prmrtg09bus]            = 60;    PRM_type[prmrtg09bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    PRM_code[prmomx09bus]            = "omx09bus";            PRM[prmomx09bus]            = 150;   PRM_type[prmomx09bus]            = TE_type; /* Ondermaximum OV fase 09                                                                                                        */
    PRM_code[prmvtgcat09bus]         = "vtgcat09bus";         PRM[prmvtgcat09bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    PRM_code[prmprio09bus]           = "prio09bus";           PRM[prmprio09bus]           = 123;                                               /* Prioriteitsinstelling OV fase 09                                                                                               */
    PRM_code[prmrto11bus]            = "rto11bus";            PRM[prmrto11bus]            = 140;   PRM_type[prmrto11bus]            = TE_type; /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    PRM_code[prmrtbg11bus]           = "rtbg11bus";           PRM[prmrtbg11bus]           = 100;   PRM_type[prmrtbg11bus]           = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    PRM_code[prmrtg11bus]            = "rtg11bus";            PRM[prmrtg11bus]            = 60;    PRM_type[prmrtg11bus]            = TE_type; /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    PRM_code[prmomx11bus]            = "omx11bus";            PRM[prmomx11bus]            = 150;   PRM_type[prmomx11bus]            = TE_type; /* Ondermaximum OV fase 11                                                                                                        */
    PRM_code[prmvtgcat11bus]         = "vtgcat11bus";         PRM[prmvtgcat11bus]         = 1;                                                 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    PRM_code[prmprio11bus]           = "prio11bus";           PRM[prmprio11bus]           = 123;                                               /* Prioriteitsinstelling OV fase 11                                                                                               */
    PRM_code[prmpriohd02]            = "priohd02";            PRM[prmpriohd02]            = 9005;                                              /* Prioriteitsinstelling HD fase 02                                                                                               */
    PRM_code[prmrtohd02]             = "rtohd02";             PRM[prmrtohd02]             = 0;     PRM_type[prmrtohd02]             = TE_type; /* Ongehinderde rijtijd HD fase 02                                                                                                */
    PRM_code[prmrtbghd02]            = "rtbghd02";            PRM[prmrtbghd02]            = 0;     PRM_type[prmrtbghd02]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    PRM_code[prmrtghd02]             = "rtghd02";             PRM[prmrtghd02]             = 0;     PRM_type[prmrtghd02]             = TE_type; /* Gehinderde rijtijd HD fase 02                                                                                                  */
    PRM_code[prmpriohd03]            = "priohd03";            PRM[prmpriohd03]            = 9005;                                              /* Prioriteitsinstelling HD fase 03                                                                                               */
    PRM_code[prmrtohd03]             = "rtohd03";             PRM[prmrtohd03]             = 0;     PRM_type[prmrtohd03]             = TE_type; /* Ongehinderde rijtijd HD fase 03                                                                                                */
    PRM_code[prmrtbghd03]            = "rtbghd03";            PRM[prmrtbghd03]            = 0;     PRM_type[prmrtbghd03]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    PRM_code[prmrtghd03]             = "rtghd03";             PRM[prmrtghd03]             = 0;     PRM_type[prmrtghd03]             = TE_type; /* Gehinderde rijtijd HD fase 03                                                                                                  */
    PRM_code[prmpriohd05]            = "priohd05";            PRM[prmpriohd05]            = 9005;                                              /* Prioriteitsinstelling HD fase 05                                                                                               */
    PRM_code[prmrtohd05]             = "rtohd05";             PRM[prmrtohd05]             = 0;     PRM_type[prmrtohd05]             = TE_type; /* Ongehinderde rijtijd HD fase 05                                                                                                */
    PRM_code[prmrtbghd05]            = "rtbghd05";            PRM[prmrtbghd05]            = 0;     PRM_type[prmrtbghd05]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    PRM_code[prmrtghd05]             = "rtghd05";             PRM[prmrtghd05]             = 0;     PRM_type[prmrtghd05]             = TE_type; /* Gehinderde rijtijd HD fase 05                                                                                                  */
    PRM_code[prmrisstart05hd]        = "risstart05hd";        PRM[prmrisstart05hd]        = 0;                                                
    PRM_code[prmrisend05hd]          = "risend05hd";          PRM[prmrisend05hd]          = 0;                                                
    PRM_code[prmriseta05hd]          = "riseta05hd";          PRM[prmriseta05hd]          = 900;                                              
    PRM_code[prmrisrole05hd]         = "risrole05hd";         PRM[prmrisrole05hd]         = 64;                                               
    PRM_code[prmrissubrole05hd]      = "rissubrole05hd";      PRM[prmrissubrole05hd]      = 32;                                               
    PRM_code[prmrisimportance05hd]   = "risimportance05hd";   PRM[prmrisimportance05hd]   = 16384;                                            
    PRM_code[prmrisstationtype05hd]  = "risstationtype05hd";  PRM[prmrisstationtype05hd]  = 1024;                                             
    PRM_code[prmrisapproachid05hd]   = "risapproachid05hd";   PRM[prmrisapproachid05hd]   = 2;                                                
    PRM_code[prmrislaneid05hd_1]     = "rislaneid05hd_1";     PRM[prmrislaneid05hd_1]     = 4;                                                
    PRM_code[prmpriohd08]            = "priohd08";            PRM[prmpriohd08]            = 9005;                                              /* Prioriteitsinstelling HD fase 08                                                                                               */
    PRM_code[prmrtohd08]             = "rtohd08";             PRM[prmrtohd08]             = 0;     PRM_type[prmrtohd08]             = TE_type; /* Ongehinderde rijtijd HD fase 08                                                                                                */
    PRM_code[prmrtbghd08]            = "rtbghd08";            PRM[prmrtbghd08]            = 0;     PRM_type[prmrtbghd08]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    PRM_code[prmrtghd08]             = "rtghd08";             PRM[prmrtghd08]             = 0;     PRM_type[prmrtghd08]             = TE_type; /* Gehinderde rijtijd HD fase 08                                                                                                  */
    PRM_code[prmrisstart08hd]        = "risstart08hd";        PRM[prmrisstart08hd]        = 0;                                                
    PRM_code[prmrisend08hd]          = "risend08hd";          PRM[prmrisend08hd]          = 0;                                                
    PRM_code[prmriseta08hd]          = "riseta08hd";          PRM[prmriseta08hd]          = 900;                                              
    PRM_code[prmrisrole08hd]         = "risrole08hd";         PRM[prmrisrole08hd]         = 64;                                               
    PRM_code[prmrissubrole08hd]      = "rissubrole08hd";      PRM[prmrissubrole08hd]      = 32;                                               
    PRM_code[prmrisimportance08hd]   = "risimportance08hd";   PRM[prmrisimportance08hd]   = 16384;                                            
    PRM_code[prmrisstationtype08hd]  = "risstationtype08hd";  PRM[prmrisstationtype08hd]  = 1024;                                             
    PRM_code[prmrisapproachid08hd]   = "risapproachid08hd";   PRM[prmrisapproachid08hd]   = 3;                                                
    PRM_code[prmrislaneid08hd_1]     = "rislaneid08hd_1";     PRM[prmrislaneid08hd_1]     = 5;                                                
    PRM_code[prmrislaneid08hd_2]     = "rislaneid08hd_2";     PRM[prmrislaneid08hd_2]     = 6;                                                
    PRM_code[prmpriohd09]            = "priohd09";            PRM[prmpriohd09]            = 9005;                                              /* Prioriteitsinstelling HD fase 09                                                                                               */
    PRM_code[prmrtohd09]             = "rtohd09";             PRM[prmrtohd09]             = 0;     PRM_type[prmrtohd09]             = TE_type; /* Ongehinderde rijtijd HD fase 09                                                                                                */
    PRM_code[prmrtbghd09]            = "rtbghd09";            PRM[prmrtbghd09]            = 0;     PRM_type[prmrtbghd09]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    PRM_code[prmrtghd09]             = "rtghd09";             PRM[prmrtghd09]             = 0;     PRM_type[prmrtghd09]             = TE_type; /* Gehinderde rijtijd HD fase 09                                                                                                  */
    PRM_code[prmrisstart09hd]        = "risstart09hd";        PRM[prmrisstart09hd]        = 0;                                                
    PRM_code[prmrisend09hd]          = "risend09hd";          PRM[prmrisend09hd]          = 0;                                                
    PRM_code[prmriseta09hd]          = "riseta09hd";          PRM[prmriseta09hd]          = 900;                                              
    PRM_code[prmrisrole09hd]         = "risrole09hd";         PRM[prmrisrole09hd]         = 64;                                               
    PRM_code[prmrissubrole09hd]      = "rissubrole09hd";      PRM[prmrissubrole09hd]      = 32;                                               
    PRM_code[prmrisimportance09hd]   = "risimportance09hd";   PRM[prmrisimportance09hd]   = 16384;                                            
    PRM_code[prmrisstationtype09hd]  = "risstationtype09hd";  PRM[prmrisstationtype09hd]  = 1024;                                             
    PRM_code[prmrisapproachid09hd]   = "risapproachid09hd";   PRM[prmrisapproachid09hd]   = 3;                                                
    PRM_code[prmrislaneid09hd_1]     = "rislaneid09hd_1";     PRM[prmrislaneid09hd_1]     = 7;                                                
    PRM_code[prmpriohd11]            = "priohd11";            PRM[prmpriohd11]            = 9005;                                              /* Prioriteitsinstelling HD fase 11                                                                                               */
    PRM_code[prmrtohd11]             = "rtohd11";             PRM[prmrtohd11]             = 0;     PRM_type[prmrtohd11]             = TE_type; /* Ongehinderde rijtijd HD fase 11                                                                                                */
    PRM_code[prmrtbghd11]            = "rtbghd11";            PRM[prmrtbghd11]            = 0;     PRM_type[prmrtbghd11]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    PRM_code[prmrtghd11]             = "rtghd11";             PRM[prmrtghd11]             = 0;     PRM_type[prmrtghd11]             = TE_type; /* Gehinderde rijtijd HD fase 11                                                                                                  */
    PRM_code[prmrisstart11hd]        = "risstart11hd";        PRM[prmrisstart11hd]        = 0;                                                
    PRM_code[prmrisend11hd]          = "risend11hd";          PRM[prmrisend11hd]          = 0;                                                
    PRM_code[prmriseta11hd]          = "riseta11hd";          PRM[prmriseta11hd]          = 900;                                              
    PRM_code[prmrisrole11hd]         = "risrole11hd";         PRM[prmrisrole11hd]         = 64;                                               
    PRM_code[prmrissubrole11hd]      = "rissubrole11hd";      PRM[prmrissubrole11hd]      = 32;                                               
    PRM_code[prmrisimportance11hd]   = "risimportance11hd";   PRM[prmrisimportance11hd]   = 16384;                                            
    PRM_code[prmrisstationtype11hd]  = "risstationtype11hd";  PRM[prmrisstationtype11hd]  = 1024;                                             
    PRM_code[prmrisapproachid11hd]   = "risapproachid11hd";   PRM[prmrisapproachid11hd]   = 4;                                                
    PRM_code[prmrislaneid11hd_1]     = "rislaneid11hd_1";     PRM[prmrislaneid11hd_1]     = 8;                                                
    PRM_code[prmpriohd61]            = "priohd61";            PRM[prmpriohd61]            = 9005;                                              /* Prioriteitsinstelling HD fase 61                                                                                               */
    PRM_code[prmrtohd61]             = "rtohd61";             PRM[prmrtohd61]             = 0;     PRM_type[prmrtohd61]             = TE_type; /* Ongehinderde rijtijd HD fase 61                                                                                                */
    PRM_code[prmrtbghd61]            = "rtbghd61";            PRM[prmrtbghd61]            = 0;     PRM_type[prmrtbghd61]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    PRM_code[prmrtghd61]             = "rtghd61";             PRM[prmrtghd61]             = 0;     PRM_type[prmrtghd61]             = TE_type; /* Gehinderde rijtijd HD fase 61                                                                                                  */
    PRM_code[prmrisstart61hd]        = "risstart61hd";        PRM[prmrisstart61hd]        = 0;                                                
    PRM_code[prmrisend61hd]          = "risend61hd";          PRM[prmrisend61hd]          = 0;                                                
    PRM_code[prmriseta61hd]          = "riseta61hd";          PRM[prmriseta61hd]          = 900;                                              
    PRM_code[prmrisrole61hd]         = "risrole61hd";         PRM[prmrisrole61hd]         = 64;                                               
    PRM_code[prmrissubrole61hd]      = "rissubrole61hd";      PRM[prmrissubrole61hd]      = 32;                                               
    PRM_code[prmrisimportance61hd]   = "risimportance61hd";   PRM[prmrisimportance61hd]   = 16384;                                            
    PRM_code[prmrisstationtype61hd]  = "risstationtype61hd";  PRM[prmrisstationtype61hd]  = 1024;                                             
    PRM_code[prmrisapproachid61hd]   = "risapproachid61hd";   PRM[prmrisapproachid61hd]   = 9;                                                
    PRM_code[prmrislaneid61hd_1]     = "rislaneid61hd_1";     PRM[prmrislaneid61hd_1]     = 25;                                               
    PRM_code[prmpriohd62]            = "priohd62";            PRM[prmpriohd62]            = 9005;                                              /* Prioriteitsinstelling HD fase 62                                                                                               */
    PRM_code[prmrtohd62]             = "rtohd62";             PRM[prmrtohd62]             = 0;     PRM_type[prmrtohd62]             = TE_type; /* Ongehinderde rijtijd HD fase 62                                                                                                */
    PRM_code[prmrtbghd62]            = "rtbghd62";            PRM[prmrtbghd62]            = 0;     PRM_type[prmrtbghd62]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    PRM_code[prmrtghd62]             = "rtghd62";             PRM[prmrtghd62]             = 0;     PRM_type[prmrtghd62]             = TE_type; /* Gehinderde rijtijd HD fase 62                                                                                                  */
    PRM_code[prmrisstart62hd]        = "risstart62hd";        PRM[prmrisstart62hd]        = 0;                                                
    PRM_code[prmrisend62hd]          = "risend62hd";          PRM[prmrisend62hd]          = 0;                                                
    PRM_code[prmriseta62hd]          = "riseta62hd";          PRM[prmriseta62hd]          = 900;                                              
    PRM_code[prmrisrole62hd]         = "risrole62hd";         PRM[prmrisrole62hd]         = 64;                                               
    PRM_code[prmrissubrole62hd]      = "rissubrole62hd";      PRM[prmrissubrole62hd]      = 32;                                               
    PRM_code[prmrisimportance62hd]   = "risimportance62hd";   PRM[prmrisimportance62hd]   = 16384;                                            
    PRM_code[prmrisstationtype62hd]  = "risstationtype62hd";  PRM[prmrisstationtype62hd]  = 1024;                                             
    PRM_code[prmrisapproachid62hd]   = "risapproachid62hd";   PRM[prmrisapproachid62hd]   = 9;                                                
    PRM_code[prmrislaneid62hd_1]     = "rislaneid62hd_1";     PRM[prmrislaneid62hd_1]     = 26;                                               
    PRM_code[prmrislaneid62hd_2]     = "rislaneid62hd_2";     PRM[prmrislaneid62hd_2]     = 27;                                               
    PRM_code[prmpriohd67]            = "priohd67";            PRM[prmpriohd67]            = 9005;                                              /* Prioriteitsinstelling HD fase 67                                                                                               */
    PRM_code[prmrtohd67]             = "rtohd67";             PRM[prmrtohd67]             = 0;     PRM_type[prmrtohd67]             = TE_type; /* Ongehinderde rijtijd HD fase 67                                                                                                */
    PRM_code[prmrtbghd67]            = "rtbghd67";            PRM[prmrtbghd67]            = 0;     PRM_type[prmrtbghd67]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    PRM_code[prmrtghd67]             = "rtghd67";             PRM[prmrtghd67]             = 0;     PRM_type[prmrtghd67]             = TE_type; /* Gehinderde rijtijd HD fase 67                                                                                                  */
    PRM_code[prmrisstart67hd]        = "risstart67hd";        PRM[prmrisstart67hd]        = 0;                                                
    PRM_code[prmrisend67hd]          = "risend67hd";          PRM[prmrisend67hd]          = 0;                                                
    PRM_code[prmriseta67hd]          = "riseta67hd";          PRM[prmriseta67hd]          = 900;                                              
    PRM_code[prmrisrole67hd]         = "risrole67hd";         PRM[prmrisrole67hd]         = 64;                                               
    PRM_code[prmrissubrole67hd]      = "rissubrole67hd";      PRM[prmrissubrole67hd]      = 32;                                               
    PRM_code[prmrisimportance67hd]   = "risimportance67hd";   PRM[prmrisimportance67hd]   = 16384;                                            
    PRM_code[prmrisstationtype67hd]  = "risstationtype67hd";  PRM[prmrisstationtype67hd]  = 1024;                                             
    PRM_code[prmrisapproachid67hd]   = "risapproachid67hd";   PRM[prmrisapproachid67hd]   = 10;                                               
    PRM_code[prmrislaneid67hd_1]     = "rislaneid67hd_1";     PRM[prmrislaneid67hd_1]     = 28;                                               
    PRM_code[prmpriohd68]            = "priohd68";            PRM[prmpriohd68]            = 9005;                                              /* Prioriteitsinstelling HD fase 68                                                                                               */
    PRM_code[prmrtohd68]             = "rtohd68";             PRM[prmrtohd68]             = 0;     PRM_type[prmrtohd68]             = TE_type; /* Ongehinderde rijtijd HD fase 68                                                                                                */
    PRM_code[prmrtbghd68]            = "rtbghd68";            PRM[prmrtbghd68]            = 0;     PRM_type[prmrtbghd68]            = TE_type; /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    PRM_code[prmrtghd68]             = "rtghd68";             PRM[prmrtghd68]             = 0;     PRM_type[prmrtghd68]             = TE_type; /* Gehinderde rijtijd HD fase 68                                                                                                  */
    PRM_code[prmrisstart68hd]        = "risstart68hd";        PRM[prmrisstart68hd]        = 0;                                                
    PRM_code[prmrisend68hd]          = "risend68hd";          PRM[prmrisend68hd]          = 0;                                                
    PRM_code[prmriseta68hd]          = "riseta68hd";          PRM[prmriseta68hd]          = 900;                                              
    PRM_code[prmrisrole68hd]         = "risrole68hd";         PRM[prmrisrole68hd]         = 64;                                               
    PRM_code[prmrissubrole68hd]      = "rissubrole68hd";      PRM[prmrissubrole68hd]      = 32;                                               
    PRM_code[prmrisimportance68hd]   = "risimportance68hd";   PRM[prmrisimportance68hd]   = 16384;                                            
    PRM_code[prmrisstationtype68hd]  = "risstationtype68hd";  PRM[prmrisstationtype68hd]  = 1024;                                             
    PRM_code[prmrisapproachid68hd]   = "risapproachid68hd";   PRM[prmrisapproachid68hd]   = 10;                                               
    PRM_code[prmrislaneid68hd_1]     = "rislaneid68hd_1";     PRM[prmrislaneid68hd_1]     = 29;                                               
    PRM_code[prmrislaneid68hd_2]     = "rislaneid68hd_2";     PRM[prmrislaneid68hd_2]     = 30;                                               
    PRM_code[prmstkp1]               = "stkp1";               PRM[prmstkp1]               = 0;     PRM_type[prmstkp1]               = TI_type; /* Start klokperiode nacht                                                                                                        */
    PRM_code[prmetkp1]               = "etkp1";               PRM[prmetkp1]               = 0;     PRM_type[prmetkp1]               = TI_type; /* Einde klokperiode nacht                                                                                                        */
    PRM_code[prmdckp1]               = "dckp1";               PRM[prmdckp1]               = 10;                                                /* Dagsoort klokperiode nacht                                                                                                     */
    PRM_code[prmstkp2]               = "stkp2";               PRM[prmstkp2]               = 600;   PRM_type[prmstkp2]               = TI_type; /* Start klokperiode dag                                                                                                          */
    PRM_code[prmetkp2]               = "etkp2";               PRM[prmetkp2]               = 1900;  PRM_type[prmetkp2]               = TI_type; /* Einde klokperiode dag                                                                                                          */
    PRM_code[prmdckp2]               = "dckp2";               PRM[prmdckp2]               = 8;                                                 /* Dagsoort klokperiode dag                                                                                                       */
    PRM_code[prmstkp3]               = "stkp3";               PRM[prmstkp3]               = 700;   PRM_type[prmstkp3]               = TI_type; /* Start klokperiode ochtend                                                                                                      */
    PRM_code[prmetkp3]               = "etkp3";               PRM[prmetkp3]               = 930;   PRM_type[prmetkp3]               = TI_type; /* Einde klokperiode ochtend                                                                                                      */
    PRM_code[prmdckp3]               = "dckp3";               PRM[prmdckp3]               = 8;                                                 /* Dagsoort klokperiode ochtend                                                                                                   */
    PRM_code[prmstkp4]               = "stkp4";               PRM[prmstkp4]               = 1530;  PRM_type[prmstkp4]               = TI_type; /* Start klokperiode avond                                                                                                        */
    PRM_code[prmetkp4]               = "etkp4";               PRM[prmetkp4]               = 1830;  PRM_type[prmetkp4]               = TI_type; /* Einde klokperiode avond                                                                                                        */
    PRM_code[prmdckp4]               = "dckp4";               PRM[prmdckp4]               = 8;                                                 /* Dagsoort klokperiode avond                                                                                                     */
    PRM_code[prmstkp5]               = "stkp5";               PRM[prmstkp5]               = 1830;  PRM_type[prmstkp5]               = TI_type; /* Start klokperiode koopavond                                                                                                    */
    PRM_code[prmetkp5]               = "etkp5";               PRM[prmetkp5]               = 2200;  PRM_type[prmetkp5]               = TI_type; /* Einde klokperiode koopavond                                                                                                    */
    PRM_code[prmdckp5]               = "dckp5";               PRM[prmdckp5]               = 4;                                                 /* Dagsoort klokperiode koopavond                                                                                                 */
    PRM_code[prmstkp6]               = "stkp6";               PRM[prmstkp6]               = 1030;  PRM_type[prmstkp6]               = TI_type; /* Start klokperiode weekend                                                                                                      */
    PRM_code[prmetkp6]               = "etkp6";               PRM[prmetkp6]               = 1700;  PRM_type[prmetkp6]               = TI_type; /* Einde klokperiode weekend                                                                                                      */
    PRM_code[prmdckp6]               = "dckp6";               PRM[prmdckp6]               = 9;                                                 /* Dagsoort klokperiode weekend                                                                                                   */
    PRM_code[prmstkp7]               = "stkp7";               PRM[prmstkp7]               = 0;     PRM_type[prmstkp7]               = TI_type; /* Start klokperiode reserve                                                                                                      */
    PRM_code[prmetkp7]               = "etkp7";               PRM[prmetkp7]               = 0;     PRM_type[prmetkp7]               = TI_type; /* Einde klokperiode reserve                                                                                                      */
    PRM_code[prmdckp7]               = "dckp7";               PRM[prmdckp7]               = 10;                                                /* Dagsoort klokperiode reserve                                                                                                   */
    PRM_code[prmstkpoFietsprio1]     = "stkpoFietsprio1";     PRM[prmstkpoFietsprio1]     = 0;     PRM_type[prmstkpoFietsprio1]     = TI_type; /* Start klokperiode Fietsprio1                                                                                                   */
    PRM_code[prmetkpoFietsprio1]     = "etkpoFietsprio1";     PRM[prmetkpoFietsprio1]     = 2400;  PRM_type[prmetkpoFietsprio1]     = TI_type; /* Einde klokperiode Fietsprio1                                                                                                   */
    PRM_code[prmdckpoFietsprio1]     = "dckpoFietsprio1";     PRM[prmdckpoFietsprio1]     = 10;                                                /* Dagsoort klokperiode Fietsprio1                                                                                                */
    PRM_code[prmstkpoFietsprio2]     = "stkpoFietsprio2";     PRM[prmstkpoFietsprio2]     = 0;     PRM_type[prmstkpoFietsprio2]     = TI_type; /* Start klokperiode Fietsprio2                                                                                                   */
    PRM_code[prmetkpoFietsprio2]     = "etkpoFietsprio2";     PRM[prmetkpoFietsprio2]     = 0;     PRM_type[prmetkpoFietsprio2]     = TI_type; /* Einde klokperiode Fietsprio2                                                                                                   */
    PRM_code[prmdckpoFietsprio2]     = "dckpoFietsprio2";     PRM[prmdckpoFietsprio2]     = 10;                                                /* Dagsoort klokperiode Fietsprio2                                                                                                */
    PRM_code[prmstkpoFietsprio3]     = "stkpoFietsprio3";     PRM[prmstkpoFietsprio3]     = 0;     PRM_type[prmstkpoFietsprio3]     = TI_type; /* Start klokperiode Fietsprio3                                                                                                   */
    PRM_code[prmetkpoFietsprio3]     = "etkpoFietsprio3";     PRM[prmetkpoFietsprio3]     = 0;     PRM_type[prmetkpoFietsprio3]     = TI_type; /* Einde klokperiode Fietsprio3                                                                                                   */
    PRM_code[prmdckpoFietsprio3]     = "dckpoFietsprio3";     PRM[prmdckpoFietsprio3]     = 10;                                                /* Dagsoort klokperiode Fietsprio3                                                                                                */
    PRM_code[prmvg1_02]              = "vg1_02";              PRM[prmvg1_02]              = 200;   PRM_type[prmvg1_02]              = TE_type; /* Verlenggroentijd VG1 02                                                                                                        */
    PRM_code[prmvg1_03]              = "vg1_03";              PRM[prmvg1_03]              = 150;   PRM_type[prmvg1_03]              = TE_type; /* Verlenggroentijd VG1 03                                                                                                        */
    PRM_code[prmvg1_05]              = "vg1_05";              PRM[prmvg1_05]              = 250;   PRM_type[prmvg1_05]              = TE_type; /* Verlenggroentijd VG1 05                                                                                                        */
    PRM_code[prmvg1_08]              = "vg1_08";              PRM[prmvg1_08]              = 200;   PRM_type[prmvg1_08]              = TE_type; /* Verlenggroentijd VG1 08                                                                                                        */
    PRM_code[prmvg1_09]              = "vg1_09";              PRM[prmvg1_09]              = 150;   PRM_type[prmvg1_09]              = TE_type; /* Verlenggroentijd VG1 09                                                                                                        */
    PRM_code[prmvg1_11]              = "vg1_11";              PRM[prmvg1_11]              = 150;   PRM_type[prmvg1_11]              = TE_type; /* Verlenggroentijd VG1 11                                                                                                        */
    PRM_code[prmvg1_21]              = "vg1_21";              PRM[prmvg1_21]              = 150;   PRM_type[prmvg1_21]              = TE_type; /* Verlenggroentijd VG1 21                                                                                                        */
    PRM_code[prmvg1_22]              = "vg1_22";              PRM[prmvg1_22]              = 150;   PRM_type[prmvg1_22]              = TE_type; /* Verlenggroentijd VG1 22                                                                                                        */
    PRM_code[prmvg1_24]              = "vg1_24";              PRM[prmvg1_24]              = 150;   PRM_type[prmvg1_24]              = TE_type; /* Verlenggroentijd VG1 24                                                                                                        */
    PRM_code[prmvg1_26]              = "vg1_26";              PRM[prmvg1_26]              = 150;   PRM_type[prmvg1_26]              = TE_type; /* Verlenggroentijd VG1 26                                                                                                        */
    PRM_code[prmvg1_28]              = "vg1_28";              PRM[prmvg1_28]              = 150;   PRM_type[prmvg1_28]              = TE_type; /* Verlenggroentijd VG1 28                                                                                                        */
    PRM_code[prmvg1_61]              = "vg1_61";              PRM[prmvg1_61]              = 50;    PRM_type[prmvg1_61]              = TE_type; /* Verlenggroentijd VG1 61                                                                                                        */
    PRM_code[prmvg1_62]              = "vg1_62";              PRM[prmvg1_62]              = 50;    PRM_type[prmvg1_62]              = TE_type; /* Verlenggroentijd VG1 62                                                                                                        */
    PRM_code[prmvg1_67]              = "vg1_67";              PRM[prmvg1_67]              = 50;    PRM_type[prmvg1_67]              = TE_type; /* Verlenggroentijd VG1 67                                                                                                        */
    PRM_code[prmvg1_68]              = "vg1_68";              PRM[prmvg1_68]              = 50;    PRM_type[prmvg1_68]              = TE_type; /* Verlenggroentijd VG1 68                                                                                                        */
    PRM_code[prmvg1_81]              = "vg1_81";              PRM[prmvg1_81]              = 150;   PRM_type[prmvg1_81]              = TE_type; /* Verlenggroentijd VG1 81                                                                                                        */
    PRM_code[prmvg1_82]              = "vg1_82";              PRM[prmvg1_82]              = 150;   PRM_type[prmvg1_82]              = TE_type; /* Verlenggroentijd VG1 82                                                                                                        */
    PRM_code[prmvg1_84]              = "vg1_84";              PRM[prmvg1_84]              = 150;   PRM_type[prmvg1_84]              = TE_type; /* Verlenggroentijd VG1 84                                                                                                        */
    PRM_code[prmvg2_02]              = "vg2_02";              PRM[prmvg2_02]              = 200;   PRM_type[prmvg2_02]              = TE_type; /* Verlenggroentijd VG2 02                                                                                                        */
    PRM_code[prmvg2_03]              = "vg2_03";              PRM[prmvg2_03]              = 150;   PRM_type[prmvg2_03]              = TE_type; /* Verlenggroentijd VG2 03                                                                                                        */
    PRM_code[prmvg2_05]              = "vg2_05";              PRM[prmvg2_05]              = 250;   PRM_type[prmvg2_05]              = TE_type; /* Verlenggroentijd VG2 05                                                                                                        */
    PRM_code[prmvg2_08]              = "vg2_08";              PRM[prmvg2_08]              = 200;   PRM_type[prmvg2_08]              = TE_type; /* Verlenggroentijd VG2 08                                                                                                        */
    PRM_code[prmvg2_09]              = "vg2_09";              PRM[prmvg2_09]              = 150;   PRM_type[prmvg2_09]              = TE_type; /* Verlenggroentijd VG2 09                                                                                                        */
    PRM_code[prmvg2_11]              = "vg2_11";              PRM[prmvg2_11]              = 150;   PRM_type[prmvg2_11]              = TE_type; /* Verlenggroentijd VG2 11                                                                                                        */
    PRM_code[prmvg2_21]              = "vg2_21";              PRM[prmvg2_21]              = 150;   PRM_type[prmvg2_21]              = TE_type; /* Verlenggroentijd VG2 21                                                                                                        */
    PRM_code[prmvg2_22]              = "vg2_22";              PRM[prmvg2_22]              = 150;   PRM_type[prmvg2_22]              = TE_type; /* Verlenggroentijd VG2 22                                                                                                        */
    PRM_code[prmvg2_24]              = "vg2_24";              PRM[prmvg2_24]              = 150;   PRM_type[prmvg2_24]              = TE_type; /* Verlenggroentijd VG2 24                                                                                                        */
    PRM_code[prmvg2_26]              = "vg2_26";              PRM[prmvg2_26]              = 150;   PRM_type[prmvg2_26]              = TE_type; /* Verlenggroentijd VG2 26                                                                                                        */
    PRM_code[prmvg2_28]              = "vg2_28";              PRM[prmvg2_28]              = 150;   PRM_type[prmvg2_28]              = TE_type; /* Verlenggroentijd VG2 28                                                                                                        */
    PRM_code[prmvg2_61]              = "vg2_61";              PRM[prmvg2_61]              = 50;    PRM_type[prmvg2_61]              = TE_type; /* Verlenggroentijd VG2 61                                                                                                        */
    PRM_code[prmvg2_62]              = "vg2_62";              PRM[prmvg2_62]              = 50;    PRM_type[prmvg2_62]              = TE_type; /* Verlenggroentijd VG2 62                                                                                                        */
    PRM_code[prmvg2_67]              = "vg2_67";              PRM[prmvg2_67]              = 50;    PRM_type[prmvg2_67]              = TE_type; /* Verlenggroentijd VG2 67                                                                                                        */
    PRM_code[prmvg2_68]              = "vg2_68";              PRM[prmvg2_68]              = 50;    PRM_type[prmvg2_68]              = TE_type; /* Verlenggroentijd VG2 68                                                                                                        */
    PRM_code[prmvg2_81]              = "vg2_81";              PRM[prmvg2_81]              = 150;   PRM_type[prmvg2_81]              = TE_type; /* Verlenggroentijd VG2 81                                                                                                        */
    PRM_code[prmvg2_82]              = "vg2_82";              PRM[prmvg2_82]              = 150;   PRM_type[prmvg2_82]              = TE_type; /* Verlenggroentijd VG2 82                                                                                                        */
    PRM_code[prmvg2_84]              = "vg2_84";              PRM[prmvg2_84]              = 150;   PRM_type[prmvg2_84]              = TE_type; /* Verlenggroentijd VG2 84                                                                                                        */
    PRM_code[prmvg3_02]              = "vg3_02";              PRM[prmvg3_02]              = 200;   PRM_type[prmvg3_02]              = TE_type; /* Verlenggroentijd VG3 02                                                                                                        */
    PRM_code[prmvg3_03]              = "vg3_03";              PRM[prmvg3_03]              = 150;   PRM_type[prmvg3_03]              = TE_type; /* Verlenggroentijd VG3 03                                                                                                        */
    PRM_code[prmvg3_05]              = "vg3_05";              PRM[prmvg3_05]              = 250;   PRM_type[prmvg3_05]              = TE_type; /* Verlenggroentijd VG3 05                                                                                                        */
    PRM_code[prmvg3_08]              = "vg3_08";              PRM[prmvg3_08]              = 200;   PRM_type[prmvg3_08]              = TE_type; /* Verlenggroentijd VG3 08                                                                                                        */
    PRM_code[prmvg3_09]              = "vg3_09";              PRM[prmvg3_09]              = 150;   PRM_type[prmvg3_09]              = TE_type; /* Verlenggroentijd VG3 09                                                                                                        */
    PRM_code[prmvg3_11]              = "vg3_11";              PRM[prmvg3_11]              = 150;   PRM_type[prmvg3_11]              = TE_type; /* Verlenggroentijd VG3 11                                                                                                        */
    PRM_code[prmvg3_21]              = "vg3_21";              PRM[prmvg3_21]              = 150;   PRM_type[prmvg3_21]              = TE_type; /* Verlenggroentijd VG3 21                                                                                                        */
    PRM_code[prmvg3_22]              = "vg3_22";              PRM[prmvg3_22]              = 150;   PRM_type[prmvg3_22]              = TE_type; /* Verlenggroentijd VG3 22                                                                                                        */
    PRM_code[prmvg3_24]              = "vg3_24";              PRM[prmvg3_24]              = 150;   PRM_type[prmvg3_24]              = TE_type; /* Verlenggroentijd VG3 24                                                                                                        */
    PRM_code[prmvg3_26]              = "vg3_26";              PRM[prmvg3_26]              = 150;   PRM_type[prmvg3_26]              = TE_type; /* Verlenggroentijd VG3 26                                                                                                        */
    PRM_code[prmvg3_28]              = "vg3_28";              PRM[prmvg3_28]              = 150;   PRM_type[prmvg3_28]              = TE_type; /* Verlenggroentijd VG3 28                                                                                                        */
    PRM_code[prmvg3_61]              = "vg3_61";              PRM[prmvg3_61]              = 50;    PRM_type[prmvg3_61]              = TE_type; /* Verlenggroentijd VG3 61                                                                                                        */
    PRM_code[prmvg3_62]              = "vg3_62";              PRM[prmvg3_62]              = 50;    PRM_type[prmvg3_62]              = TE_type; /* Verlenggroentijd VG3 62                                                                                                        */
    PRM_code[prmvg3_67]              = "vg3_67";              PRM[prmvg3_67]              = 50;    PRM_type[prmvg3_67]              = TE_type; /* Verlenggroentijd VG3 67                                                                                                        */
    PRM_code[prmvg3_68]              = "vg3_68";              PRM[prmvg3_68]              = 50;    PRM_type[prmvg3_68]              = TE_type; /* Verlenggroentijd VG3 68                                                                                                        */
    PRM_code[prmvg3_81]              = "vg3_81";              PRM[prmvg3_81]              = 150;   PRM_type[prmvg3_81]              = TE_type; /* Verlenggroentijd VG3 81                                                                                                        */
    PRM_code[prmvg3_82]              = "vg3_82";              PRM[prmvg3_82]              = 150;   PRM_type[prmvg3_82]              = TE_type; /* Verlenggroentijd VG3 82                                                                                                        */
    PRM_code[prmvg3_84]              = "vg3_84";              PRM[prmvg3_84]              = 150;   PRM_type[prmvg3_84]              = TE_type; /* Verlenggroentijd VG3 84                                                                                                        */
    PRM_code[prmvg4_02]              = "vg4_02";              PRM[prmvg4_02]              = 300;   PRM_type[prmvg4_02]              = TE_type; /* Verlenggroentijd VG4 02                                                                                                        */
    PRM_code[prmvg4_03]              = "vg4_03";              PRM[prmvg4_03]              = 150;   PRM_type[prmvg4_03]              = TE_type; /* Verlenggroentijd VG4 03                                                                                                        */
    PRM_code[prmvg4_05]              = "vg4_05";              PRM[prmvg4_05]              = 300;   PRM_type[prmvg4_05]              = TE_type; /* Verlenggroentijd VG4 05                                                                                                        */
    PRM_code[prmvg4_08]              = "vg4_08";              PRM[prmvg4_08]              = 250;   PRM_type[prmvg4_08]              = TE_type; /* Verlenggroentijd VG4 08                                                                                                        */
    PRM_code[prmvg4_09]              = "vg4_09";              PRM[prmvg4_09]              = 200;   PRM_type[prmvg4_09]              = TE_type; /* Verlenggroentijd VG4 09                                                                                                        */
    PRM_code[prmvg4_11]              = "vg4_11";              PRM[prmvg4_11]              = 250;   PRM_type[prmvg4_11]              = TE_type; /* Verlenggroentijd VG4 11                                                                                                        */
    PRM_code[prmvg4_21]              = "vg4_21";              PRM[prmvg4_21]              = 150;   PRM_type[prmvg4_21]              = TE_type; /* Verlenggroentijd VG4 21                                                                                                        */
    PRM_code[prmvg4_22]              = "vg4_22";              PRM[prmvg4_22]              = 150;   PRM_type[prmvg4_22]              = TE_type; /* Verlenggroentijd VG4 22                                                                                                        */
    PRM_code[prmvg4_24]              = "vg4_24";              PRM[prmvg4_24]              = 150;   PRM_type[prmvg4_24]              = TE_type; /* Verlenggroentijd VG4 24                                                                                                        */
    PRM_code[prmvg4_26]              = "vg4_26";              PRM[prmvg4_26]              = 150;   PRM_type[prmvg4_26]              = TE_type; /* Verlenggroentijd VG4 26                                                                                                        */
    PRM_code[prmvg4_28]              = "vg4_28";              PRM[prmvg4_28]              = 150;   PRM_type[prmvg4_28]              = TE_type; /* Verlenggroentijd VG4 28                                                                                                        */
    PRM_code[prmvg4_61]              = "vg4_61";              PRM[prmvg4_61]              = 50;    PRM_type[prmvg4_61]              = TE_type; /* Verlenggroentijd VG4 61                                                                                                        */
    PRM_code[prmvg4_62]              = "vg4_62";              PRM[prmvg4_62]              = 50;    PRM_type[prmvg4_62]              = TE_type; /* Verlenggroentijd VG4 62                                                                                                        */
    PRM_code[prmvg4_67]              = "vg4_67";              PRM[prmvg4_67]              = 50;    PRM_type[prmvg4_67]              = TE_type; /* Verlenggroentijd VG4 67                                                                                                        */
    PRM_code[prmvg4_68]              = "vg4_68";              PRM[prmvg4_68]              = 50;    PRM_type[prmvg4_68]              = TE_type; /* Verlenggroentijd VG4 68                                                                                                        */
    PRM_code[prmvg4_81]              = "vg4_81";              PRM[prmvg4_81]              = 150;   PRM_type[prmvg4_81]              = TE_type; /* Verlenggroentijd VG4 81                                                                                                        */
    PRM_code[prmvg4_82]              = "vg4_82";              PRM[prmvg4_82]              = 150;   PRM_type[prmvg4_82]              = TE_type; /* Verlenggroentijd VG4 82                                                                                                        */
    PRM_code[prmvg4_84]              = "vg4_84";              PRM[prmvg4_84]              = 150;   PRM_type[prmvg4_84]              = TE_type; /* Verlenggroentijd VG4 84                                                                                                        */
    PRM_code[prmvg5_02]              = "vg5_02";              PRM[prmvg5_02]              = 300;   PRM_type[prmvg5_02]              = TE_type; /* Verlenggroentijd VG5 02                                                                                                        */
    PRM_code[prmvg5_03]              = "vg5_03";              PRM[prmvg5_03]              = 150;   PRM_type[prmvg5_03]              = TE_type; /* Verlenggroentijd VG5 03                                                                                                        */
    PRM_code[prmvg5_05]              = "vg5_05";              PRM[prmvg5_05]              = 300;   PRM_type[prmvg5_05]              = TE_type; /* Verlenggroentijd VG5 05                                                                                                        */
    PRM_code[prmvg5_08]              = "vg5_08";              PRM[prmvg5_08]              = 250;   PRM_type[prmvg5_08]              = TE_type; /* Verlenggroentijd VG5 08                                                                                                        */
    PRM_code[prmvg5_09]              = "vg5_09";              PRM[prmvg5_09]              = 200;   PRM_type[prmvg5_09]              = TE_type; /* Verlenggroentijd VG5 09                                                                                                        */
    PRM_code[prmvg5_11]              = "vg5_11";              PRM[prmvg5_11]              = 250;   PRM_type[prmvg5_11]              = TE_type; /* Verlenggroentijd VG5 11                                                                                                        */
    PRM_code[prmvg5_21]              = "vg5_21";              PRM[prmvg5_21]              = 150;   PRM_type[prmvg5_21]              = TE_type; /* Verlenggroentijd VG5 21                                                                                                        */
    PRM_code[prmvg5_22]              = "vg5_22";              PRM[prmvg5_22]              = 150;   PRM_type[prmvg5_22]              = TE_type; /* Verlenggroentijd VG5 22                                                                                                        */
    PRM_code[prmvg5_24]              = "vg5_24";              PRM[prmvg5_24]              = 150;   PRM_type[prmvg5_24]              = TE_type; /* Verlenggroentijd VG5 24                                                                                                        */
    PRM_code[prmvg5_26]              = "vg5_26";              PRM[prmvg5_26]              = 150;   PRM_type[prmvg5_26]              = TE_type; /* Verlenggroentijd VG5 26                                                                                                        */
    PRM_code[prmvg5_28]              = "vg5_28";              PRM[prmvg5_28]              = 150;   PRM_type[prmvg5_28]              = TE_type; /* Verlenggroentijd VG5 28                                                                                                        */
    PRM_code[prmvg5_61]              = "vg5_61";              PRM[prmvg5_61]              = 50;    PRM_type[prmvg5_61]              = TE_type; /* Verlenggroentijd VG5 61                                                                                                        */
    PRM_code[prmvg5_62]              = "vg5_62";              PRM[prmvg5_62]              = 50;    PRM_type[prmvg5_62]              = TE_type; /* Verlenggroentijd VG5 62                                                                                                        */
    PRM_code[prmvg5_67]              = "vg5_67";              PRM[prmvg5_67]              = 50;    PRM_type[prmvg5_67]              = TE_type; /* Verlenggroentijd VG5 67                                                                                                        */
    PRM_code[prmvg5_68]              = "vg5_68";              PRM[prmvg5_68]              = 50;    PRM_type[prmvg5_68]              = TE_type; /* Verlenggroentijd VG5 68                                                                                                        */
    PRM_code[prmvg5_81]              = "vg5_81";              PRM[prmvg5_81]              = 150;   PRM_type[prmvg5_81]              = TE_type; /* Verlenggroentijd VG5 81                                                                                                        */
    PRM_code[prmvg5_82]              = "vg5_82";              PRM[prmvg5_82]              = 150;   PRM_type[prmvg5_82]              = TE_type; /* Verlenggroentijd VG5 82                                                                                                        */
    PRM_code[prmvg5_84]              = "vg5_84";              PRM[prmvg5_84]              = 150;   PRM_type[prmvg5_84]              = TE_type; /* Verlenggroentijd VG5 84                                                                                                        */
    PRM_code[prmvg6_02]              = "vg6_02";              PRM[prmvg6_02]              = 300;   PRM_type[prmvg6_02]              = TE_type; /* Verlenggroentijd VG6 02                                                                                                        */
    PRM_code[prmvg6_03]              = "vg6_03";              PRM[prmvg6_03]              = 150;   PRM_type[prmvg6_03]              = TE_type; /* Verlenggroentijd VG6 03                                                                                                        */
    PRM_code[prmvg6_05]              = "vg6_05";              PRM[prmvg6_05]              = 300;   PRM_type[prmvg6_05]              = TE_type; /* Verlenggroentijd VG6 05                                                                                                        */
    PRM_code[prmvg6_08]              = "vg6_08";              PRM[prmvg6_08]              = 250;   PRM_type[prmvg6_08]              = TE_type; /* Verlenggroentijd VG6 08                                                                                                        */
    PRM_code[prmvg6_09]              = "vg6_09";              PRM[prmvg6_09]              = 200;   PRM_type[prmvg6_09]              = TE_type; /* Verlenggroentijd VG6 09                                                                                                        */
    PRM_code[prmvg6_11]              = "vg6_11";              PRM[prmvg6_11]              = 250;   PRM_type[prmvg6_11]              = TE_type; /* Verlenggroentijd VG6 11                                                                                                        */
    PRM_code[prmvg6_21]              = "vg6_21";              PRM[prmvg6_21]              = 150;   PRM_type[prmvg6_21]              = TE_type; /* Verlenggroentijd VG6 21                                                                                                        */
    PRM_code[prmvg6_22]              = "vg6_22";              PRM[prmvg6_22]              = 150;   PRM_type[prmvg6_22]              = TE_type; /* Verlenggroentijd VG6 22                                                                                                        */
    PRM_code[prmvg6_24]              = "vg6_24";              PRM[prmvg6_24]              = 150;   PRM_type[prmvg6_24]              = TE_type; /* Verlenggroentijd VG6 24                                                                                                        */
    PRM_code[prmvg6_26]              = "vg6_26";              PRM[prmvg6_26]              = 150;   PRM_type[prmvg6_26]              = TE_type; /* Verlenggroentijd VG6 26                                                                                                        */
    PRM_code[prmvg6_28]              = "vg6_28";              PRM[prmvg6_28]              = 150;   PRM_type[prmvg6_28]              = TE_type; /* Verlenggroentijd VG6 28                                                                                                        */
    PRM_code[prmvg6_61]              = "vg6_61";              PRM[prmvg6_61]              = 50;    PRM_type[prmvg6_61]              = TE_type; /* Verlenggroentijd VG6 61                                                                                                        */
    PRM_code[prmvg6_62]              = "vg6_62";              PRM[prmvg6_62]              = 50;    PRM_type[prmvg6_62]              = TE_type; /* Verlenggroentijd VG6 62                                                                                                        */
    PRM_code[prmvg6_67]              = "vg6_67";              PRM[prmvg6_67]              = 50;    PRM_type[prmvg6_67]              = TE_type; /* Verlenggroentijd VG6 67                                                                                                        */
    PRM_code[prmvg6_68]              = "vg6_68";              PRM[prmvg6_68]              = 50;    PRM_type[prmvg6_68]              = TE_type; /* Verlenggroentijd VG6 68                                                                                                        */
    PRM_code[prmvg6_81]              = "vg6_81";              PRM[prmvg6_81]              = 150;   PRM_type[prmvg6_81]              = TE_type; /* Verlenggroentijd VG6 81                                                                                                        */
    PRM_code[prmvg6_82]              = "vg6_82";              PRM[prmvg6_82]              = 150;   PRM_type[prmvg6_82]              = TE_type; /* Verlenggroentijd VG6 82                                                                                                        */
    PRM_code[prmvg6_84]              = "vg6_84";              PRM[prmvg6_84]              = 150;   PRM_type[prmvg6_84]              = TE_type; /* Verlenggroentijd VG6 84                                                                                                        */
    PRM_code[prmvg7_02]              = "vg7_02";              PRM[prmvg7_02]              = 300;   PRM_type[prmvg7_02]              = TE_type; /* Verlenggroentijd VG7 02                                                                                                        */
    PRM_code[prmvg7_03]              = "vg7_03";              PRM[prmvg7_03]              = 150;   PRM_type[prmvg7_03]              = TE_type; /* Verlenggroentijd VG7 03                                                                                                        */
    PRM_code[prmvg7_05]              = "vg7_05";              PRM[prmvg7_05]              = 300;   PRM_type[prmvg7_05]              = TE_type; /* Verlenggroentijd VG7 05                                                                                                        */
    PRM_code[prmvg7_08]              = "vg7_08";              PRM[prmvg7_08]              = 250;   PRM_type[prmvg7_08]              = TE_type; /* Verlenggroentijd VG7 08                                                                                                        */
    PRM_code[prmvg7_09]              = "vg7_09";              PRM[prmvg7_09]              = 200;   PRM_type[prmvg7_09]              = TE_type; /* Verlenggroentijd VG7 09                                                                                                        */
    PRM_code[prmvg7_11]              = "vg7_11";              PRM[prmvg7_11]              = 250;   PRM_type[prmvg7_11]              = TE_type; /* Verlenggroentijd VG7 11                                                                                                        */
    PRM_code[prmvg7_21]              = "vg7_21";              PRM[prmvg7_21]              = 150;   PRM_type[prmvg7_21]              = TE_type; /* Verlenggroentijd VG7 21                                                                                                        */
    PRM_code[prmvg7_22]              = "vg7_22";              PRM[prmvg7_22]              = 150;   PRM_type[prmvg7_22]              = TE_type; /* Verlenggroentijd VG7 22                                                                                                        */
    PRM_code[prmvg7_24]              = "vg7_24";              PRM[prmvg7_24]              = 150;   PRM_type[prmvg7_24]              = TE_type; /* Verlenggroentijd VG7 24                                                                                                        */
    PRM_code[prmvg7_26]              = "vg7_26";              PRM[prmvg7_26]              = 150;   PRM_type[prmvg7_26]              = TE_type; /* Verlenggroentijd VG7 26                                                                                                        */
    PRM_code[prmvg7_28]              = "vg7_28";              PRM[prmvg7_28]              = 150;   PRM_type[prmvg7_28]              = TE_type; /* Verlenggroentijd VG7 28                                                                                                        */
    PRM_code[prmvg7_61]              = "vg7_61";              PRM[prmvg7_61]              = 50;    PRM_type[prmvg7_61]              = TE_type; /* Verlenggroentijd VG7 61                                                                                                        */
    PRM_code[prmvg7_62]              = "vg7_62";              PRM[prmvg7_62]              = 50;    PRM_type[prmvg7_62]              = TE_type; /* Verlenggroentijd VG7 62                                                                                                        */
    PRM_code[prmvg7_67]              = "vg7_67";              PRM[prmvg7_67]              = 50;    PRM_type[prmvg7_67]              = TE_type; /* Verlenggroentijd VG7 67                                                                                                        */
    PRM_code[prmvg7_68]              = "vg7_68";              PRM[prmvg7_68]              = 50;    PRM_type[prmvg7_68]              = TE_type; /* Verlenggroentijd VG7 68                                                                                                        */
    PRM_code[prmvg7_81]              = "vg7_81";              PRM[prmvg7_81]              = 150;   PRM_type[prmvg7_81]              = TE_type; /* Verlenggroentijd VG7 81                                                                                                        */
    PRM_code[prmvg7_82]              = "vg7_82";              PRM[prmvg7_82]              = 150;   PRM_type[prmvg7_82]              = TE_type; /* Verlenggroentijd VG7 82                                                                                                        */
    PRM_code[prmvg7_84]              = "vg7_84";              PRM[prmvg7_84]              = 150;   PRM_type[prmvg7_84]              = TE_type; /* Verlenggroentijd VG7 84                                                                                                        */
    PRM_code[prmmkrgd24_3]           = "mkrgd24_3";           PRM[prmmkrgd24_3]           = 3;                                                 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    PRM_code[prmrgv]                 = "rgv";                 PRM[prmrgv]                 = 1;                                                 /* Type RoBuGrover                                                                                                                */
    PRM_code[prmmin_tcyclus]         = "min_tcyclus";         PRM[prmmin_tcyclus]         = 900;   PRM_type[prmmin_tcyclus]         = TE_type; /* Minimale cyclustijd                                                                                                            */
    PRM_code[prmmax_tcyclus]         = "max_tcyclus";         PRM[prmmax_tcyclus]         = 1500;  PRM_type[prmmax_tcyclus]         = TE_type; /* Maximale cyclustijd                                                                                                            */
    PRM_code[prmtvg_omhoog]          = "tvg_omhoog";          PRM[prmtvg_omhoog]          = 50;    PRM_type[prmtvg_omhoog]          = TE_type; /* Hoeveelheid ophogen TVG                                                                                                        */
    PRM_code[prmtvg_omlaag]          = "tvg_omlaag";          PRM[prmtvg_omlaag]          = 20;    PRM_type[prmtvg_omlaag]          = TE_type; /* Hoeveelheid verlagen TVG                                                                                                       */
    PRM_code[prmtvg_verschil]        = "tvg_verschil";        PRM[prmtvg_verschil]        = 50;    PRM_type[prmtvg_verschil]        = TE_type; /* Parameter verschil                                                                                                             */
    PRM_code[prmtvg_npr_omlaag]      = "tvg_npr_omlaag";      PRM[prmtvg_npr_omlaag]      = 50;    PRM_type[prmtvg_npr_omlaag]      = TE_type; /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    PRM_code[prmmintvg_02]           = "mintvg_02";           PRM[prmmintvg_02]           = 100;   PRM_type[prmmintvg_02]           = TE_type; /* Minimale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmaxtvg_02]           = "maxtvg_02";           PRM[prmmaxtvg_02]           = 500;   PRM_type[prmmaxtvg_02]           = TE_type; /* Maximale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmintvg_03]           = "mintvg_03";           PRM[prmmintvg_03]           = 100;   PRM_type[prmmintvg_03]           = TE_type; /* Minimale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmaxtvg_03]           = "maxtvg_03";           PRM[prmmaxtvg_03]           = 500;   PRM_type[prmmaxtvg_03]           = TE_type; /* Maximale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmintvg_05]           = "mintvg_05";           PRM[prmmintvg_05]           = 100;   PRM_type[prmmintvg_05]           = TE_type; /* Minimale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmaxtvg_05]           = "maxtvg_05";           PRM[prmmaxtvg_05]           = 500;   PRM_type[prmmaxtvg_05]           = TE_type; /* Maximale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmintvg_08]           = "mintvg_08";           PRM[prmmintvg_08]           = 100;   PRM_type[prmmintvg_08]           = TE_type; /* Minimale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmaxtvg_08]           = "maxtvg_08";           PRM[prmmaxtvg_08]           = 500;   PRM_type[prmmaxtvg_08]           = TE_type; /* Maximale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmintvg_09]           = "mintvg_09";           PRM[prmmintvg_09]           = 100;   PRM_type[prmmintvg_09]           = TE_type; /* Minimale verlenggroentijd fase 09                                                                                              */
    PRM_code[prmmaxtvg_09]           = "maxtvg_09";           PRM[prmmaxtvg_09]           = 500;   PRM_type[prmmaxtvg_09]           = TE_type; /* Maximale verlenggroentijd fase 09                                                                                              */
    PRM_code[prmmintvg_11]           = "mintvg_11";           PRM[prmmintvg_11]           = 100;   PRM_type[prmmintvg_11]           = TE_type; /* Minimale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmaxtvg_11]           = "maxtvg_11";           PRM[prmmaxtvg_11]           = 500;   PRM_type[prmmaxtvg_11]           = TE_type; /* Maximale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmaxtvgvlog]          = "maxtvgvlog";          PRM[prmmaxtvgvlog]          = 5;     PRM_type[prmmaxtvgvlog]          = CT_type; /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    PRM_code[prmmaxtfbvlog]          = "maxtfbvlog";          PRM[prmmaxtfbvlog]          = 90;    PRM_type[prmmaxtfbvlog]          = TS_type; /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    PRM_code[prmmlfpr02]             = "mlfpr02";             PRM[prmmlfpr02]             = 3;                                                 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    PRM_code[prmmlfpr03]             = "mlfpr03";             PRM[prmmlfpr03]             = 3;                                                 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    PRM_code[prmmlfpr05]             = "mlfpr05";             PRM[prmmlfpr05]             = 3;                                                 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    PRM_code[prmmlfpr08]             = "mlfpr08";             PRM[prmmlfpr08]             = 3;                                                 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    PRM_code[prmmlfpr09]             = "mlfpr09";             PRM[prmmlfpr09]             = 3;                                                 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    PRM_code[prmmlfpr11]             = "mlfpr11";             PRM[prmmlfpr11]             = 3;                                                 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    PRM_code[prmmlfpr21]             = "mlfpr21";             PRM[prmmlfpr21]             = 3;                                                 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    PRM_code[prmmlfpr22]             = "mlfpr22";             PRM[prmmlfpr22]             = 3;                                                 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    PRM_code[prmmlfpr24]             = "mlfpr24";             PRM[prmmlfpr24]             = 3;                                                 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    PRM_code[prmmlfpr26]             = "mlfpr26";             PRM[prmmlfpr26]             = 3;                                                 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    PRM_code[prmmlfpr28]             = "mlfpr28";             PRM[prmmlfpr28]             = 3;                                                 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    PRM_code[prmmlfpr31]             = "mlfpr31";             PRM[prmmlfpr31]             = 3;                                                 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    PRM_code[prmmlfpr32]             = "mlfpr32";             PRM[prmmlfpr32]             = 3;                                                 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    PRM_code[prmmlfpr33]             = "mlfpr33";             PRM[prmmlfpr33]             = 3;                                                 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    PRM_code[prmmlfpr34]             = "mlfpr34";             PRM[prmmlfpr34]             = 3;                                                 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    PRM_code[prmmlfpr38]             = "mlfpr38";             PRM[prmmlfpr38]             = 3;                                                 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    PRM_code[prmmlfpr61]             = "mlfpr61";             PRM[prmmlfpr61]             = 3;                                                 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    PRM_code[prmmlfpr62]             = "mlfpr62";             PRM[prmmlfpr62]             = 3;                                                 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    PRM_code[prmmlfpr67]             = "mlfpr67";             PRM[prmmlfpr67]             = 3;                                                 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    PRM_code[prmmlfpr68]             = "mlfpr68";             PRM[prmmlfpr68]             = 3;                                                 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    PRM_code[prmmlfpr81]             = "mlfpr81";             PRM[prmmlfpr81]             = 3;                                                 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    PRM_code[prmmlfpr82]             = "mlfpr82";             PRM[prmmlfpr82]             = 3;                                                 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    PRM_code[prmmlfpr84]             = "mlfpr84";             PRM[prmmlfpr84]             = 3;                                                 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    PRM_code[prmaltg02]              = "altg02";              PRM[prmaltg02]              = 60;    PRM_type[prmaltg02]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    PRM_code[prmaltp02]              = "altp02";              PRM[prmaltp02]              = 60;    PRM_type[prmaltp02]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    PRM_code[prmaltg03]              = "altg03";              PRM[prmaltg03]              = 60;    PRM_type[prmaltg03]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    PRM_code[prmaltp03]              = "altp03";              PRM[prmaltp03]              = 60;    PRM_type[prmaltp03]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    PRM_code[prmaltg05]              = "altg05";              PRM[prmaltg05]              = 60;    PRM_type[prmaltg05]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    PRM_code[prmaltp05]              = "altp05";              PRM[prmaltp05]              = 60;    PRM_type[prmaltp05]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    PRM_code[prmaltg08]              = "altg08";              PRM[prmaltg08]              = 60;    PRM_type[prmaltg08]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    PRM_code[prmaltp08]              = "altp08";              PRM[prmaltp08]              = 60;    PRM_type[prmaltp08]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    PRM_code[prmaltg09]              = "altg09";              PRM[prmaltg09]              = 60;    PRM_type[prmaltg09]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    PRM_code[prmaltp09]              = "altp09";              PRM[prmaltp09]              = 60;    PRM_type[prmaltp09]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    PRM_code[prmaltg11]              = "altg11";              PRM[prmaltg11]              = 60;    PRM_type[prmaltg11]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    PRM_code[prmaltp11]              = "altp11";              PRM[prmaltp11]              = 60;    PRM_type[prmaltp11]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    PRM_code[prmaltg21]              = "altg21";              PRM[prmaltg21]              = 60;    PRM_type[prmaltg21]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    PRM_code[prmaltp21]              = "altp21";              PRM[prmaltp21]              = 60;    PRM_type[prmaltp21]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    PRM_code[prmaltg22]              = "altg22";              PRM[prmaltg22]              = 60;    PRM_type[prmaltg22]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    PRM_code[prmaltp22]              = "altp22";              PRM[prmaltp22]              = 60;    PRM_type[prmaltp22]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    PRM_code[prmaltg24]              = "altg24";              PRM[prmaltg24]              = 60;    PRM_type[prmaltg24]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    PRM_code[prmaltp2484]            = "altp2484";            PRM[prmaltp2484]            = 60;    PRM_type[prmaltp2484]            = TE_type; /* Minimale ruimte tbv alternatieve realisatie fasen 24, 84                                                                       */
    PRM_code[prmaltg26]              = "altg26";              PRM[prmaltg26]              = 60;    PRM_type[prmaltg26]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    PRM_code[prmaltp26]              = "altp26";              PRM[prmaltp26]              = 60;    PRM_type[prmaltp26]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    PRM_code[prmaltg28]              = "altg28";              PRM[prmaltg28]              = 60;    PRM_type[prmaltg28]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    PRM_code[prmaltp28]              = "altp28";              PRM[prmaltp28]              = 60;    PRM_type[prmaltp28]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    PRM_code[prmaltg31]              = "altg31";              PRM[prmaltg31]              = 60;    PRM_type[prmaltg31]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    PRM_code[prmaltp31]              = "altp31";              PRM[prmaltp31]              = 60;    PRM_type[prmaltp31]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    PRM_code[prmaltg32]              = "altg32";              PRM[prmaltg32]              = 60;    PRM_type[prmaltg32]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    PRM_code[prmaltp32]              = "altp32";              PRM[prmaltp32]              = 60;    PRM_type[prmaltp32]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    PRM_code[prmaltg33]              = "altg33";              PRM[prmaltg33]              = 60;    PRM_type[prmaltg33]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    PRM_code[prmaltp33]              = "altp33";              PRM[prmaltp33]              = 60;    PRM_type[prmaltp33]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    PRM_code[prmaltg34]              = "altg34";              PRM[prmaltg34]              = 60;    PRM_type[prmaltg34]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    PRM_code[prmaltp34]              = "altp34";              PRM[prmaltp34]              = 60;    PRM_type[prmaltp34]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    PRM_code[prmaltg38]              = "altg38";              PRM[prmaltg38]              = 60;    PRM_type[prmaltg38]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    PRM_code[prmaltp38]              = "altp38";              PRM[prmaltp38]              = 60;    PRM_type[prmaltp38]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    PRM_code[prmaltg61]              = "altg61";              PRM[prmaltg61]              = 60;    PRM_type[prmaltg61]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    PRM_code[prmaltp61]              = "altp61";              PRM[prmaltp61]              = 60;    PRM_type[prmaltp61]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    PRM_code[prmaltg62]              = "altg62";              PRM[prmaltg62]              = 60;    PRM_type[prmaltg62]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    PRM_code[prmaltp62]              = "altp62";              PRM[prmaltp62]              = 60;    PRM_type[prmaltp62]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    PRM_code[prmaltg67]              = "altg67";              PRM[prmaltg67]              = 60;    PRM_type[prmaltg67]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    PRM_code[prmaltp67]              = "altp67";              PRM[prmaltp67]              = 60;    PRM_type[prmaltp67]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    PRM_code[prmaltg68]              = "altg68";              PRM[prmaltg68]              = 60;    PRM_type[prmaltg68]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    PRM_code[prmaltp68]              = "altp68";              PRM[prmaltp68]              = 60;    PRM_type[prmaltp68]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    PRM_code[prmaltg81]              = "altg81";              PRM[prmaltg81]              = 60;    PRM_type[prmaltg81]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    PRM_code[prmaltp81]              = "altp81";              PRM[prmaltp81]              = 60;    PRM_type[prmaltp81]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    PRM_code[prmaltg82]              = "altg82";              PRM[prmaltg82]              = 60;    PRM_type[prmaltg82]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    PRM_code[prmaltp82]              = "altp82";              PRM[prmaltp82]              = 60;    PRM_type[prmaltp82]              = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    PRM_code[prmaltg84]              = "altg84";              PRM[prmaltg84]              = 60;    PRM_type[prmaltg84]              = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    PRM_code[prmminwtv]              = "minwtv";              PRM[prmminwtv]              = 2;     PRM_type[prmminwtv]              = TE_type; /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    PRM_code[prmwtvnhaltmax]         = "wtvnhaltmax";         PRM[prmwtvnhaltmax]         = 21;                                                /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    PRM_code[prmwtvnhaltmin]         = "wtvnhaltmin";         PRM[prmwtvnhaltmin]         = 5;                                                 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    PRM_code[prmtestdsivert]         = "testdsivert";         PRM[prmtestdsivert]         = 120;   PRM_type[prmtestdsivert]         = TS_type; /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    PRM_code[prmtestdsilyn]          = "testdsilyn";          PRM[prmtestdsilyn]          = 0;                                      /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    PRM_code[prmtestdsicat]          = "testdsicat";          PRM[prmtestdsicat]          = 10;                                     /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
#endif

/* instellingen categorieën */
/* ------------------------ */
    C_cat[cvc02bus] = CAT_Prioriteren; C_subcat[cvc02bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvc03bus] = CAT_Prioriteren; C_subcat[cvc03bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvc05bus] = CAT_Prioriteren; C_subcat[cvc05bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvc08bus] = CAT_Prioriteren; C_subcat[cvc08bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvc09bus] = CAT_Prioriteren; C_subcat[cvc09bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvc11bus] = CAT_Prioriteren; C_subcat[cvc11bus] = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd02] = CAT_Prioriteren; C_subcat[cvchd02]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd03] = CAT_Prioriteren; C_subcat[cvchd03]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd05] = CAT_Prioriteren; C_subcat[cvchd05]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd08] = CAT_Prioriteren; C_subcat[cvchd08]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd09] = CAT_Prioriteren; C_subcat[cvchd09]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd11] = CAT_Prioriteren; C_subcat[cvchd11]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd61] = CAT_Prioriteren; C_subcat[cvchd61]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd62] = CAT_Prioriteren; C_subcat[cvchd62]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd67] = CAT_Prioriteren; C_subcat[cvchd67]  = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd68] = CAT_Prioriteren; C_subcat[cvchd68]  = SUBCAT_OpenbaarVervoer;
    SCH_cat[schdynhiaat08]         = CAT_Basisfuncties;    SCH_subcat[schdynhiaat08]            = SUBCAT_Verlengen;
    SCH_cat[schopdrempelen08]      = CAT_Basisfuncties;    SCH_subcat[schopdrempelen08]         = SUBCAT_Verlengen;
    SCH_cat[schedkop_08]           = CAT_Basisfuncties;    SCH_subcat[schedkop_08]              = SUBCAT_Verlengen;
    SCH_cat[schdynhiaat09]         = CAT_Basisfuncties;    SCH_subcat[schdynhiaat09]            = SUBCAT_Verlengen;
    SCH_cat[schopdrempelen09]      = CAT_Basisfuncties;    SCH_subcat[schopdrempelen09]         = SUBCAT_Verlengen;
    SCH_cat[schedkop_09]           = CAT_Basisfuncties;    SCH_subcat[schedkop_09]              = SUBCAT_Verlengen;
    SCH_cat[schdynhiaat11]         = CAT_Basisfuncties;    SCH_subcat[schdynhiaat11]            = SUBCAT_Verlengen;
    SCH_cat[schopdrempelen11]      = CAT_Basisfuncties;    SCH_subcat[schopdrempelen11]         = SUBCAT_Verlengen;
    SCH_cat[schedkop_11]           = CAT_Basisfuncties;    SCH_subcat[schedkop_11]              = SUBCAT_Verlengen;
    SCH_cat[schcycl]               = CAT_TestenLoggen;     SCH_subcat[schcycl]                  = SUBCAT_Loggen;
    SCH_cat[schcycl_reset]         = CAT_TestenLoggen;     SCH_subcat[schcycl_reset]            = SUBCAT_Loggen;
    SCH_cat[schdvakd02_1a]         = CAT_Detectie;         SCH_subcat[schdvakd02_1a]            = SUBCAT_VervangendeMaatregelen;
    SCH_cat[schdvakd02_1b]         = CAT_Detectie;         SCH_subcat[schdvakd02_1b]            = SUBCAT_VervangendeMaatregelen;
    SCH_cat[schdvakd03_1]          = CAT_Detectie;         SCH_subcat[schdvakd03_1]             = SUBCAT_VervangendeMaatregelen;
    SCH_cat[schdvakdk31a]          = CAT_Detectie;         SCH_subcat[schdvakdk31a]             = SUBCAT_VervangendeMaatregelen;
    SCH_cat[schdvakdk31b]          = CAT_Detectie;         SCH_subcat[schdvakdk31b]             = SUBCAT_VervangendeMaatregelen;
    SCH_cat[schfileFile68af]       = CAT_SpecialeIngrepen; SCH_subcat[schfileFile68af]          = SUBCAT_File;
    SCH_cat[schfiledoserenFile68af] = CAT_SpecialeIngrepen; SCH_subcat[schfiledoserenFile68af]   = SUBCAT_File;
    SCH_cat[schfileFile68afparstrook] = CAT_SpecialeIngrepen; SCH_subcat[schfileFile68afparstrook] = SUBCAT_File;
    SCH_cat[schbmfix]              = CAT_SpecialeIngrepen; SCH_subcat[schbmfix]                 = SUBCAT_Fixatie;
    SCH_cat[schgs2484]             = CAT_Basisfuncties;    SCH_subcat[schgs2484]                = SUBCAT_Deelconflicten;
    SCH_cat[schma0262]             = CAT_Basisfuncties;    SCH_subcat[schma0262]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0521]             = CAT_Basisfuncties;    SCH_subcat[schma0521]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0522]             = CAT_Basisfuncties;    SCH_subcat[schma0522]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0532]             = CAT_Basisfuncties;    SCH_subcat[schma0532]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0868]             = CAT_Basisfuncties;    SCH_subcat[schma0868]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma1126]             = CAT_Basisfuncties;    SCH_subcat[schma1126]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma1168]             = CAT_Basisfuncties;    SCH_subcat[schma1168]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma2221]             = CAT_Basisfuncties;    SCH_subcat[schma2221]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3122]             = CAT_Basisfuncties;    SCH_subcat[schma3122]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3132]             = CAT_Basisfuncties;    SCH_subcat[schma3132]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3222]             = CAT_Basisfuncties;    SCH_subcat[schma3222]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3231]             = CAT_Basisfuncties;    SCH_subcat[schma3231]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3324]             = CAT_Basisfuncties;    SCH_subcat[schma3324]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3334]             = CAT_Basisfuncties;    SCH_subcat[schma3334]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3384]             = CAT_Basisfuncties;    SCH_subcat[schma3384]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3424]             = CAT_Basisfuncties;    SCH_subcat[schma3424]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3433]             = CAT_Basisfuncties;    SCH_subcat[schma3433]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma3484]             = CAT_Basisfuncties;    SCH_subcat[schma3484]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma8281]             = CAT_Basisfuncties;    SCH_subcat[schma8281]                = SUBCAT_Meeaanvraag;
    SCH_cat[schmv02]               = CAT_Basisfuncties;    SCH_subcat[schmv02]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv03]               = CAT_Basisfuncties;    SCH_subcat[schmv03]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv05]               = CAT_Basisfuncties;    SCH_subcat[schmv05]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv08]               = CAT_Basisfuncties;    SCH_subcat[schmv08]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv09]               = CAT_Basisfuncties;    SCH_subcat[schmv09]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv11]               = CAT_Basisfuncties;    SCH_subcat[schmv11]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv21]               = CAT_Basisfuncties;    SCH_subcat[schmv21]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv22]               = CAT_Basisfuncties;    SCH_subcat[schmv22]                  = SUBCAT_Meeverlengen;
    SCH_cat[schhardmv2205]         = CAT_Basisfuncties;    SCH_subcat[schhardmv2205]            = SUBCAT_Meeverlengen;
    SCH_cat[schmv24]               = CAT_Basisfuncties;    SCH_subcat[schmv24]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv26]               = CAT_Basisfuncties;    SCH_subcat[schmv26]                  = SUBCAT_Meeverlengen;
    SCH_cat[schhardmv2611]         = CAT_Basisfuncties;    SCH_subcat[schhardmv2611]            = SUBCAT_Meeverlengen;
    SCH_cat[schmv28]               = CAT_Basisfuncties;    SCH_subcat[schmv28]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv31]               = CAT_Basisfuncties;    SCH_subcat[schmv31]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv32]               = CAT_Basisfuncties;    SCH_subcat[schmv32]                  = SUBCAT_Meeverlengen;
    SCH_cat[schhardmv3205]         = CAT_Basisfuncties;    SCH_subcat[schhardmv3205]            = SUBCAT_Meeverlengen;
    SCH_cat[schmv33]               = CAT_Basisfuncties;    SCH_subcat[schmv33]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv34]               = CAT_Basisfuncties;    SCH_subcat[schmv34]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv38]               = CAT_Basisfuncties;    SCH_subcat[schmv38]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv61]               = CAT_Basisfuncties;    SCH_subcat[schmv61]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv62]               = CAT_Basisfuncties;    SCH_subcat[schmv62]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv67]               = CAT_Basisfuncties;    SCH_subcat[schmv67]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv68]               = CAT_Basisfuncties;    SCH_subcat[schmv68]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv81]               = CAT_Basisfuncties;    SCH_subcat[schmv81]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv82]               = CAT_Basisfuncties;    SCH_subcat[schmv82]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmv84]               = CAT_Basisfuncties;    SCH_subcat[schmv84]                  = SUBCAT_Meeverlengen;
    SCH_cat[schmlprm]              = CAT_Module;           SCH_subcat[schmlprm]                 = SUBCAT_Plantijden;
    SCH_cat[schovstipt02bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt02bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt03bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt03bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt05bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt05bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt08bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt08bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt09bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt09bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt11bus]       = CAT_Prioriteren;      SCH_subcat[schovstipt11bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schcheckdstype]        = CAT_Prioriteren;      SCH_subcat[schcheckdstype]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin02buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin02buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit02buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit02buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb02bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb02bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin03buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin03buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit03buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit03buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb03bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb03bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin05buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin05buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit05buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit05buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb05bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb05bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin08buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin08buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit08buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit08buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb08bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb08bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin09buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin09buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit09buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit09buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb09bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb09bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin11buskar]     = CAT_Prioriteren;      SCH_subcat[schprioin11buskar]        = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit11buskar]    = CAT_Prioriteren;      SCH_subcat[schpriouit11buskar]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagb11bus]       = CAT_Prioriteren;      SCH_subcat[schupinagb11bus]          = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd02]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd02]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin02kar]          = CAT_Prioriteren;      SCH_subcat[schhdin02kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit02kar]         = CAT_Prioriteren;      SCH_subcat[schhduit02kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene02]      = CAT_Prioriteren;      SCH_subcat[schchecksirene02]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd03]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd03]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin03kar]          = CAT_Prioriteren;      SCH_subcat[schhdin03kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit03kar]         = CAT_Prioriteren;      SCH_subcat[schhduit03kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene03]      = CAT_Prioriteren;      SCH_subcat[schchecksirene03]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd05]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd05]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin05kar]          = CAT_Prioriteren;      SCH_subcat[schhdin05kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit05kar]         = CAT_Prioriteren;      SCH_subcat[schhduit05kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene05]      = CAT_Prioriteren;      SCH_subcat[schchecksirene05]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin05ris]          = CAT_Prioriteren;      SCH_subcat[schhdin05ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit05ris]         = CAT_Prioriteren;      SCH_subcat[schhduit05ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd08]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd08]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin08kar]          = CAT_Prioriteren;      SCH_subcat[schhdin08kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit08kar]         = CAT_Prioriteren;      SCH_subcat[schhduit08kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene08]      = CAT_Prioriteren;      SCH_subcat[schchecksirene08]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin08ris]          = CAT_Prioriteren;      SCH_subcat[schhdin08ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit08ris]         = CAT_Prioriteren;      SCH_subcat[schhduit08ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd09]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd09]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin09kar]          = CAT_Prioriteren;      SCH_subcat[schhdin09kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit09kar]         = CAT_Prioriteren;      SCH_subcat[schhduit09kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene09]      = CAT_Prioriteren;      SCH_subcat[schchecksirene09]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin09ris]          = CAT_Prioriteren;      SCH_subcat[schhdin09ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit09ris]         = CAT_Prioriteren;      SCH_subcat[schhduit09ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd11]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd11]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin11kar]          = CAT_Prioriteren;      SCH_subcat[schhdin11kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit11kar]         = CAT_Prioriteren;      SCH_subcat[schhduit11kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene11]      = CAT_Prioriteren;      SCH_subcat[schchecksirene11]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin11ris]          = CAT_Prioriteren;      SCH_subcat[schhdin11ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit11ris]         = CAT_Prioriteren;      SCH_subcat[schhduit11ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd61]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd61]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin61kar]          = CAT_Prioriteren;      SCH_subcat[schhdin61kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit61kar]         = CAT_Prioriteren;      SCH_subcat[schhduit61kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene61]      = CAT_Prioriteren;      SCH_subcat[schchecksirene61]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin61ris]          = CAT_Prioriteren;      SCH_subcat[schhdin61ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit61ris]         = CAT_Prioriteren;      SCH_subcat[schhduit61ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd62]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd62]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin62kar]          = CAT_Prioriteren;      SCH_subcat[schhdin62kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit62kar]         = CAT_Prioriteren;      SCH_subcat[schhduit62kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene62]      = CAT_Prioriteren;      SCH_subcat[schchecksirene62]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin62ris]          = CAT_Prioriteren;      SCH_subcat[schhdin62ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit62ris]         = CAT_Prioriteren;      SCH_subcat[schhduit62ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd67]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd67]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin67kar]          = CAT_Prioriteren;      SCH_subcat[schhdin67kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit67kar]         = CAT_Prioriteren;      SCH_subcat[schhduit67kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene67]      = CAT_Prioriteren;      SCH_subcat[schchecksirene67]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin67ris]          = CAT_Prioriteren;      SCH_subcat[schhdin67ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit67ris]         = CAT_Prioriteren;      SCH_subcat[schhduit67ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schupinagbhd68]        = CAT_Prioriteren;      SCH_subcat[schupinagbhd68]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin68kar]          = CAT_Prioriteren;      SCH_subcat[schhdin68kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit68kar]         = CAT_Prioriteren;      SCH_subcat[schhduit68kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene68]      = CAT_Prioriteren;      SCH_subcat[schchecksirene68]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin68ris]          = CAT_Prioriteren;      SCH_subcat[schhdin68ris]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit68ris]         = CAT_Prioriteren;      SCH_subcat[schhduit68ris]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schrgadd24_3]          = CAT_Basisfuncties;    SCH_subcat[schrgadd24_3]             = SUBCAT_Verlengen;
    SCH_cat[schrgv]                = CAT_Signaalgroep;     SCH_subcat[schrgv]                   = SUBCAT_MaximumGroentijden;
    SCH_cat[schrgv_snel]           = CAT_Signaalgroep;     SCH_subcat[schrgv_snel]              = SUBCAT_MaximumGroentijden;
    SCH_cat[schca02]               = CAT_Basisfuncties;    SCH_subcat[schca02]                  = SUBCAT_Aanvraag;
    SCH_cat[schca03]               = CAT_Basisfuncties;    SCH_subcat[schca03]                  = SUBCAT_Aanvraag;
    SCH_cat[schca05]               = CAT_Basisfuncties;    SCH_subcat[schca05]                  = SUBCAT_Aanvraag;
    SCH_cat[schca08]               = CAT_Basisfuncties;    SCH_subcat[schca08]                  = SUBCAT_Aanvraag;
    SCH_cat[schca09]               = CAT_Basisfuncties;    SCH_subcat[schca09]                  = SUBCAT_Aanvraag;
    SCH_cat[schca11]               = CAT_Basisfuncties;    SCH_subcat[schca11]                  = SUBCAT_Aanvraag;
    SCH_cat[schca21]               = CAT_Basisfuncties;    SCH_subcat[schca21]                  = SUBCAT_Aanvraag;
    SCH_cat[schca22]               = CAT_Basisfuncties;    SCH_subcat[schca22]                  = SUBCAT_Aanvraag;
    SCH_cat[schca24]               = CAT_Basisfuncties;    SCH_subcat[schca24]                  = SUBCAT_Aanvraag;
    SCH_cat[schca26]               = CAT_Basisfuncties;    SCH_subcat[schca26]                  = SUBCAT_Aanvraag;
    SCH_cat[schca28]               = CAT_Basisfuncties;    SCH_subcat[schca28]                  = SUBCAT_Aanvraag;
    SCH_cat[schca31]               = CAT_Basisfuncties;    SCH_subcat[schca31]                  = SUBCAT_Aanvraag;
    SCH_cat[schca32]               = CAT_Basisfuncties;    SCH_subcat[schca32]                  = SUBCAT_Aanvraag;
    SCH_cat[schca33]               = CAT_Basisfuncties;    SCH_subcat[schca33]                  = SUBCAT_Aanvraag;
    SCH_cat[schca34]               = CAT_Basisfuncties;    SCH_subcat[schca34]                  = SUBCAT_Aanvraag;
    SCH_cat[schca38]               = CAT_Basisfuncties;    SCH_subcat[schca38]                  = SUBCAT_Aanvraag;
    SCH_cat[schca61]               = CAT_Basisfuncties;    SCH_subcat[schca61]                  = SUBCAT_Aanvraag;
    SCH_cat[schca62]               = CAT_Basisfuncties;    SCH_subcat[schca62]                  = SUBCAT_Aanvraag;
    SCH_cat[schca67]               = CAT_Basisfuncties;    SCH_subcat[schca67]                  = SUBCAT_Aanvraag;
    SCH_cat[schca68]               = CAT_Basisfuncties;    SCH_subcat[schca68]                  = SUBCAT_Aanvraag;
    SCH_cat[schca81]               = CAT_Basisfuncties;    SCH_subcat[schca81]                  = SUBCAT_Aanvraag;
    SCH_cat[schca82]               = CAT_Basisfuncties;    SCH_subcat[schca82]                  = SUBCAT_Aanvraag;
    SCH_cat[schca84]               = CAT_Basisfuncties;    SCH_subcat[schca84]                  = SUBCAT_Aanvraag;
    SCH_cat[schaltg02]             = CAT_Module;           SCH_subcat[schaltg02]                = SUBCAT_Plantijden;
    SCH_cat[schaltg03]             = CAT_Module;           SCH_subcat[schaltg03]                = SUBCAT_Plantijden;
    SCH_cat[schaltg05]             = CAT_Module;           SCH_subcat[schaltg05]                = SUBCAT_Plantijden;
    SCH_cat[schaltg08]             = CAT_Module;           SCH_subcat[schaltg08]                = SUBCAT_Plantijden;
    SCH_cat[schaltg09]             = CAT_Module;           SCH_subcat[schaltg09]                = SUBCAT_Plantijden;
    SCH_cat[schaltg11]             = CAT_Module;           SCH_subcat[schaltg11]                = SUBCAT_Plantijden;
    SCH_cat[schaltg21]             = CAT_Module;           SCH_subcat[schaltg21]                = SUBCAT_Plantijden;
    SCH_cat[schaltg22]             = CAT_Module;           SCH_subcat[schaltg22]                = SUBCAT_Plantijden;
    SCH_cat[schaltg2484]           = CAT_Module;           SCH_subcat[schaltg2484]              = SUBCAT_Plantijden;
    SCH_cat[schaltg26]             = CAT_Module;           SCH_subcat[schaltg26]                = SUBCAT_Plantijden;
    SCH_cat[schaltg28]             = CAT_Module;           SCH_subcat[schaltg28]                = SUBCAT_Plantijden;
    SCH_cat[schaltg31]             = CAT_Module;           SCH_subcat[schaltg31]                = SUBCAT_Plantijden;
    SCH_cat[schaltg32]             = CAT_Module;           SCH_subcat[schaltg32]                = SUBCAT_Plantijden;
    SCH_cat[schaltg33]             = CAT_Module;           SCH_subcat[schaltg33]                = SUBCAT_Plantijden;
    SCH_cat[schaltg34]             = CAT_Module;           SCH_subcat[schaltg34]                = SUBCAT_Plantijden;
    SCH_cat[schaltg38]             = CAT_Module;           SCH_subcat[schaltg38]                = SUBCAT_Plantijden;
    SCH_cat[schaltg61]             = CAT_Module;           SCH_subcat[schaltg61]                = SUBCAT_Plantijden;
    SCH_cat[schaltg62]             = CAT_Module;           SCH_subcat[schaltg62]                = SUBCAT_Plantijden;
    SCH_cat[schaltg67]             = CAT_Module;           SCH_subcat[schaltg67]                = SUBCAT_Plantijden;
    SCH_cat[schaltg68]             = CAT_Module;           SCH_subcat[schaltg68]                = SUBCAT_Plantijden;
    SCH_cat[schaltg81]             = CAT_Module;           SCH_subcat[schaltg81]                = SUBCAT_Plantijden;
    SCH_cat[schaltg82]             = CAT_Module;           SCH_subcat[schaltg82]                = SUBCAT_Plantijden;
    SCH_cat[schwg02]               = CAT_Basisfuncties;    SCH_subcat[schwg02]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg03]               = CAT_Basisfuncties;    SCH_subcat[schwg03]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg05]               = CAT_Basisfuncties;    SCH_subcat[schwg05]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg08]               = CAT_Basisfuncties;    SCH_subcat[schwg08]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg09]               = CAT_Basisfuncties;    SCH_subcat[schwg09]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg11]               = CAT_Basisfuncties;    SCH_subcat[schwg11]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg21]               = CAT_Basisfuncties;    SCH_subcat[schwg21]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg22]               = CAT_Basisfuncties;    SCH_subcat[schwg22]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg24]               = CAT_Basisfuncties;    SCH_subcat[schwg24]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg26]               = CAT_Basisfuncties;    SCH_subcat[schwg26]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg28]               = CAT_Basisfuncties;    SCH_subcat[schwg28]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg31]               = CAT_Basisfuncties;    SCH_subcat[schwg31]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg32]               = CAT_Basisfuncties;    SCH_subcat[schwg32]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg33]               = CAT_Basisfuncties;    SCH_subcat[schwg33]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg34]               = CAT_Basisfuncties;    SCH_subcat[schwg34]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg38]               = CAT_Basisfuncties;    SCH_subcat[schwg38]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg61]               = CAT_Basisfuncties;    SCH_subcat[schwg61]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg62]               = CAT_Basisfuncties;    SCH_subcat[schwg62]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg67]               = CAT_Basisfuncties;    SCH_subcat[schwg67]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg68]               = CAT_Basisfuncties;    SCH_subcat[schwg68]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg81]               = CAT_Basisfuncties;    SCH_subcat[schwg81]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg82]               = CAT_Basisfuncties;    SCH_subcat[schwg82]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwg84]               = CAT_Basisfuncties;    SCH_subcat[schwg84]                  = SUBCAT_Wachtgroen;
    SCH_cat[schwtv21]              = CAT_Informeren;       SCH_subcat[schwtv21]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv22]              = CAT_Informeren;       SCH_subcat[schwtv22]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv24]              = CAT_Informeren;       SCH_subcat[schwtv24]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv26]              = CAT_Informeren;       SCH_subcat[schwtv26]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv28]              = CAT_Informeren;       SCH_subcat[schwtv28]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv81]              = CAT_Informeren;       SCH_subcat[schwtv81]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv82]              = CAT_Informeren;       SCH_subcat[schwtv82]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtv84]              = CAT_Informeren;       SCH_subcat[schwtv84]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtvbusbijhd]        = CAT_Informeren;       SCH_subcat[schwtvbusbijhd]           = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schsneld02_1a]         = CAT_Signaalgroep;     SCH_subcat[schsneld02_1a]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld02_1b]         = CAT_Signaalgroep;     SCH_subcat[schsneld02_1b]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld03_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld03_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld05_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld05_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld08_1a]         = CAT_Signaalgroep;     SCH_subcat[schsneld08_1a]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld08_1b]         = CAT_Signaalgroep;     SCH_subcat[schsneld08_1b]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld09_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld09_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld11_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld11_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld211]           = CAT_Signaalgroep;     SCH_subcat[schsneld211]              = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld22_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld22_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld24_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld24_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld261]           = CAT_Signaalgroep;     SCH_subcat[schsneld261]              = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld28_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld28_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld61_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld61_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld62_1a]         = CAT_Signaalgroep;     SCH_subcat[schsneld62_1a]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld62_1b]         = CAT_Signaalgroep;     SCH_subcat[schsneld62_1b]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld67_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld67_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld68_1a]         = CAT_Signaalgroep;     SCH_subcat[schsneld68_1a]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld68_1b]         = CAT_Signaalgroep;     SCH_subcat[schsneld68_1b]            = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld81_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld81_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld82_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld82_1]             = SUBCAT_MaximumGroentijden;
    SCH_cat[schsneld84_1]          = CAT_Signaalgroep;     SCH_subcat[schsneld84_1]             = SUBCAT_MaximumGroentijden;
    T_cat[t08_1a_1]                = CAT_Basisfuncties;    T_subcat[t08_1a_1]                   = SUBCAT_Verlengen;
    T_cat[t08_1a_2]                = CAT_Basisfuncties;    T_subcat[t08_1a_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_1a_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_1a_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_1a_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_1a_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_1a]              = CAT_Basisfuncties;    T_subcat[tmax_08_1a]                 = SUBCAT_Verlengen;
    T_cat[t08_1b_1]                = CAT_Basisfuncties;    T_subcat[t08_1b_1]                   = SUBCAT_Verlengen;
    T_cat[t08_1b_2]                = CAT_Basisfuncties;    T_subcat[t08_1b_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_1b_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_1b_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_1b_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_1b_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_1b]              = CAT_Basisfuncties;    T_subcat[tmax_08_1b]                 = SUBCAT_Verlengen;
    T_cat[t08_2a_1]                = CAT_Basisfuncties;    T_subcat[t08_2a_1]                   = SUBCAT_Verlengen;
    T_cat[t08_2a_2]                = CAT_Basisfuncties;    T_subcat[t08_2a_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_2a_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_2a_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_2a_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_2a_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_2a]              = CAT_Basisfuncties;    T_subcat[tmax_08_2a]                 = SUBCAT_Verlengen;
    T_cat[t08_2b_1]                = CAT_Basisfuncties;    T_subcat[t08_2b_1]                   = SUBCAT_Verlengen;
    T_cat[t08_2b_2]                = CAT_Basisfuncties;    T_subcat[t08_2b_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_2b_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_2b_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_2b_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_2b_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_2b]              = CAT_Basisfuncties;    T_subcat[tmax_08_2b]                 = SUBCAT_Verlengen;
    T_cat[t08_3a_1]                = CAT_Basisfuncties;    T_subcat[t08_3a_1]                   = SUBCAT_Verlengen;
    T_cat[t08_3a_2]                = CAT_Basisfuncties;    T_subcat[t08_3a_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_3a_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_3a_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_3a_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_3a_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_3a]              = CAT_Basisfuncties;    T_subcat[tmax_08_3a]                 = SUBCAT_Verlengen;
    T_cat[t08_3b_1]                = CAT_Basisfuncties;    T_subcat[t08_3b_1]                   = SUBCAT_Verlengen;
    T_cat[t08_3b_2]                = CAT_Basisfuncties;    T_subcat[t08_3b_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_3b_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_3b_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_3b_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_3b_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_3b]              = CAT_Basisfuncties;    T_subcat[tmax_08_3b]                 = SUBCAT_Verlengen;
    T_cat[t08_4a_1]                = CAT_Basisfuncties;    T_subcat[t08_4a_1]                   = SUBCAT_Verlengen;
    T_cat[t08_4a_2]                = CAT_Basisfuncties;    T_subcat[t08_4a_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_4a_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_4a_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_4a_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_4a_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_4a]              = CAT_Basisfuncties;    T_subcat[tmax_08_4a]                 = SUBCAT_Verlengen;
    T_cat[t08_4b_1]                = CAT_Basisfuncties;    T_subcat[t08_4b_1]                   = SUBCAT_Verlengen;
    T_cat[t08_4b_2]                = CAT_Basisfuncties;    T_subcat[t08_4b_2]                   = SUBCAT_Verlengen;
    T_cat[ttdh_08_4b_1]            = CAT_Basisfuncties;    T_subcat[ttdh_08_4b_1]               = SUBCAT_Verlengen;
    T_cat[ttdh_08_4b_2]            = CAT_Basisfuncties;    T_subcat[ttdh_08_4b_2]               = SUBCAT_Verlengen;
    T_cat[tmax_08_4b]              = CAT_Basisfuncties;    T_subcat[tmax_08_4b]                 = SUBCAT_Verlengen;
    T_cat[t09_1_1]                 = CAT_Basisfuncties;    T_subcat[t09_1_1]                    = SUBCAT_Verlengen;
    T_cat[t09_1_2]                 = CAT_Basisfuncties;    T_subcat[t09_1_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_09_1_1]             = CAT_Basisfuncties;    T_subcat[ttdh_09_1_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_09_1_2]             = CAT_Basisfuncties;    T_subcat[ttdh_09_1_2]                = SUBCAT_Verlengen;
    T_cat[tmax_09_1]               = CAT_Basisfuncties;    T_subcat[tmax_09_1]                  = SUBCAT_Verlengen;
    T_cat[t09_2_1]                 = CAT_Basisfuncties;    T_subcat[t09_2_1]                    = SUBCAT_Verlengen;
    T_cat[t09_2_2]                 = CAT_Basisfuncties;    T_subcat[t09_2_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_09_2_1]             = CAT_Basisfuncties;    T_subcat[ttdh_09_2_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_09_2_2]             = CAT_Basisfuncties;    T_subcat[ttdh_09_2_2]                = SUBCAT_Verlengen;
    T_cat[tmax_09_2]               = CAT_Basisfuncties;    T_subcat[tmax_09_2]                  = SUBCAT_Verlengen;
    T_cat[t09_3_1]                 = CAT_Basisfuncties;    T_subcat[t09_3_1]                    = SUBCAT_Verlengen;
    T_cat[t09_3_2]                 = CAT_Basisfuncties;    T_subcat[t09_3_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_09_3_1]             = CAT_Basisfuncties;    T_subcat[ttdh_09_3_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_09_3_2]             = CAT_Basisfuncties;    T_subcat[ttdh_09_3_2]                = SUBCAT_Verlengen;
    T_cat[tmax_09_3]               = CAT_Basisfuncties;    T_subcat[tmax_09_3]                  = SUBCAT_Verlengen;
    T_cat[t11_1_1]                 = CAT_Basisfuncties;    T_subcat[t11_1_1]                    = SUBCAT_Verlengen;
    T_cat[t11_1_2]                 = CAT_Basisfuncties;    T_subcat[t11_1_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_11_1_1]             = CAT_Basisfuncties;    T_subcat[ttdh_11_1_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_11_1_2]             = CAT_Basisfuncties;    T_subcat[ttdh_11_1_2]                = SUBCAT_Verlengen;
    T_cat[tmax_11_1]               = CAT_Basisfuncties;    T_subcat[tmax_11_1]                  = SUBCAT_Verlengen;
    T_cat[t11_2_1]                 = CAT_Basisfuncties;    T_subcat[t11_2_1]                    = SUBCAT_Verlengen;
    T_cat[t11_2_2]                 = CAT_Basisfuncties;    T_subcat[t11_2_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_11_2_1]             = CAT_Basisfuncties;    T_subcat[ttdh_11_2_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_11_2_2]             = CAT_Basisfuncties;    T_subcat[ttdh_11_2_2]                = SUBCAT_Verlengen;
    T_cat[tmax_11_2]               = CAT_Basisfuncties;    T_subcat[tmax_11_2]                  = SUBCAT_Verlengen;
    T_cat[t11_3_1]                 = CAT_Basisfuncties;    T_subcat[t11_3_1]                    = SUBCAT_Verlengen;
    T_cat[t11_3_2]                 = CAT_Basisfuncties;    T_subcat[t11_3_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_11_3_1]             = CAT_Basisfuncties;    T_subcat[ttdh_11_3_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_11_3_2]             = CAT_Basisfuncties;    T_subcat[ttdh_11_3_2]                = SUBCAT_Verlengen;
    T_cat[tmax_11_3]               = CAT_Basisfuncties;    T_subcat[tmax_11_3]                  = SUBCAT_Verlengen;
    T_cat[t11_4_1]                 = CAT_Basisfuncties;    T_subcat[t11_4_1]                    = SUBCAT_Verlengen;
    T_cat[t11_4_2]                 = CAT_Basisfuncties;    T_subcat[t11_4_2]                    = SUBCAT_Verlengen;
    T_cat[ttdh_11_4_1]             = CAT_Basisfuncties;    T_subcat[ttdh_11_4_1]                = SUBCAT_Verlengen;
    T_cat[ttdh_11_4_2]             = CAT_Basisfuncties;    T_subcat[ttdh_11_4_2]                = SUBCAT_Verlengen;
    T_cat[tmax_11_4]               = CAT_Basisfuncties;    T_subcat[tmax_11_4]                  = SUBCAT_Verlengen;
    T_cat[tcycl]                   = CAT_TestenLoggen;     T_subcat[tcycl]                      = SUBCAT_Loggen;
    T_cat[tav28_2]                 = CAT_Basisfuncties;    T_subcat[tav28_2]                    = SUBCAT_Aanvraag;
    T_cat[tkm02]                   = CAT_Basisfuncties;    T_subcat[tkm02]                      = SUBCAT_Verlengen;
    T_cat[tkm03]                   = CAT_Basisfuncties;    T_subcat[tkm03]                      = SUBCAT_Verlengen;
    T_cat[tkm05]                   = CAT_Basisfuncties;    T_subcat[tkm05]                      = SUBCAT_Verlengen;
    T_cat[tkm08]                   = CAT_Basisfuncties;    T_subcat[tkm08]                      = SUBCAT_Verlengen;
    T_cat[tkm09]                   = CAT_Basisfuncties;    T_subcat[tkm09]                      = SUBCAT_Verlengen;
    T_cat[tkm11]                   = CAT_Basisfuncties;    T_subcat[tkm11]                      = SUBCAT_Verlengen;
    T_cat[tkm21]                   = CAT_Basisfuncties;    T_subcat[tkm21]                      = SUBCAT_Verlengen;
    T_cat[tkm22]                   = CAT_Basisfuncties;    T_subcat[tkm22]                      = SUBCAT_Verlengen;
    T_cat[tkm24]                   = CAT_Basisfuncties;    T_subcat[tkm24]                      = SUBCAT_Verlengen;
    T_cat[tkm26]                   = CAT_Basisfuncties;    T_subcat[tkm26]                      = SUBCAT_Verlengen;
    T_cat[tkm28]                   = CAT_Basisfuncties;    T_subcat[tkm28]                      = SUBCAT_Verlengen;
    T_cat[tkm61]                   = CAT_Basisfuncties;    T_subcat[tkm61]                      = SUBCAT_Verlengen;
    T_cat[tkm62]                   = CAT_Basisfuncties;    T_subcat[tkm62]                      = SUBCAT_Verlengen;
    T_cat[tkm67]                   = CAT_Basisfuncties;    T_subcat[tkm67]                      = SUBCAT_Verlengen;
    T_cat[tkm68]                   = CAT_Basisfuncties;    T_subcat[tkm68]                      = SUBCAT_Verlengen;
    T_cat[tkm81]                   = CAT_Basisfuncties;    T_subcat[tkm81]                      = SUBCAT_Verlengen;
    T_cat[tkm82]                   = CAT_Basisfuncties;    T_subcat[tkm82]                      = SUBCAT_Verlengen;
    T_cat[tkm84]                   = CAT_Basisfuncties;    T_subcat[tkm84]                      = SUBCAT_Verlengen;
    T_cat[thdvd02_1a]              = CAT_Detectie;         T_subcat[thdvd02_1a]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd02_1b]              = CAT_Detectie;         T_subcat[thdvd02_1b]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert02]              = CAT_Detectie;         T_subcat[tdstvert02]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd03_1]               = CAT_Detectie;         T_subcat[thdvd03_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert03]              = CAT_Detectie;         T_subcat[tdstvert03]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd05_1]               = CAT_Detectie;         T_subcat[thdvd05_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert05]              = CAT_Detectie;         T_subcat[tdstvert05]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd08_1a]              = CAT_Detectie;         T_subcat[thdvd08_1a]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd08_1b]              = CAT_Detectie;         T_subcat[thdvd08_1b]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert08]              = CAT_Detectie;         T_subcat[tdstvert08]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd09_1]               = CAT_Detectie;         T_subcat[thdvd09_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert09]              = CAT_Detectie;         T_subcat[tdstvert09]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd11_1]               = CAT_Detectie;         T_subcat[thdvd11_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert11]              = CAT_Detectie;         T_subcat[tdstvert11]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert21]              = CAT_Detectie;         T_subcat[tdstvert21]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd22_1]               = CAT_Detectie;         T_subcat[thdvd22_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert22]              = CAT_Detectie;         T_subcat[tdstvert22]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd24_1]               = CAT_Detectie;         T_subcat[thdvd24_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert24]              = CAT_Detectie;         T_subcat[tdstvert24]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert26]              = CAT_Detectie;         T_subcat[tdstvert26]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd28_1]               = CAT_Detectie;         T_subcat[thdvd28_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert28]              = CAT_Detectie;         T_subcat[tdstvert28]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert31]              = CAT_Detectie;         T_subcat[tdstvert31]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert32]              = CAT_Detectie;         T_subcat[tdstvert32]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert33]              = CAT_Detectie;         T_subcat[tdstvert33]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert34]              = CAT_Detectie;         T_subcat[tdstvert34]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert38]              = CAT_Detectie;         T_subcat[tdstvert38]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd61_1]               = CAT_Detectie;         T_subcat[thdvd61_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert61]              = CAT_Detectie;         T_subcat[tdstvert61]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd62_1a]              = CAT_Detectie;         T_subcat[thdvd62_1a]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd62_1b]              = CAT_Detectie;         T_subcat[thdvd62_1b]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert62]              = CAT_Detectie;         T_subcat[tdstvert62]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd67_1]               = CAT_Detectie;         T_subcat[thdvd67_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert67]              = CAT_Detectie;         T_subcat[tdstvert67]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd68_1a]              = CAT_Detectie;         T_subcat[thdvd68_1a]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd68_1b]              = CAT_Detectie;         T_subcat[thdvd68_1b]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert68]              = CAT_Detectie;         T_subcat[tdstvert68]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert81]              = CAT_Detectie;         T_subcat[tdstvert81]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert82]              = CAT_Detectie;         T_subcat[tdstvert82]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[thdvd84_1]               = CAT_Detectie;         T_subcat[thdvd84_1]                  = SUBCAT_VervangendeMaatregelen;
    T_cat[tdstvert84]              = CAT_Detectie;         T_subcat[tdstvert84]                 = SUBCAT_VervangendeMaatregelen;
    T_cat[tafvFile68af]            = CAT_SpecialeIngrepen; T_subcat[tafvFile68af]               = SUBCAT_File;
    T_cat[tafv68_9a]               = CAT_SpecialeIngrepen; T_subcat[tafv68_9a]                  = SUBCAT_File;
    T_cat[tbz68_9a]                = CAT_SpecialeIngrepen; T_subcat[tbz68_9a]                   = SUBCAT_File;
    T_cat[trij68_9a]               = CAT_SpecialeIngrepen; T_subcat[trij68_9a]                  = SUBCAT_File;
    T_cat[tafv68_9b]               = CAT_SpecialeIngrepen; T_subcat[tafv68_9b]                  = SUBCAT_File;
    T_cat[tbz68_9b]                = CAT_SpecialeIngrepen; T_subcat[tbz68_9b]                   = SUBCAT_File;
    T_cat[trij68_9b]               = CAT_SpecialeIngrepen; T_subcat[trij68_9b]                  = SUBCAT_File;
    T_cat[tafkmingroen08fileFile68af] = CAT_SpecialeIngrepen; T_subcat[tafkmingroen08fileFile68af] = SUBCAT_File;
    T_cat[tafkmingroen11fileFile68af] = CAT_SpecialeIngrepen; T_subcat[tafkmingroen11fileFile68af] = SUBCAT_File;
    T_cat[tminrood08fileFile68af]  = CAT_SpecialeIngrepen; T_subcat[tminrood08fileFile68af]     = SUBCAT_File;
    T_cat[tminrood11fileFile68af]  = CAT_SpecialeIngrepen; T_subcat[tminrood11fileFile68af]     = SUBCAT_File;
    T_cat[tmaxgroen08fileFile68af] = CAT_SpecialeIngrepen; T_subcat[tmaxgroen08fileFile68af]    = SUBCAT_File;
    T_cat[tmaxgroen11fileFile68af] = CAT_SpecialeIngrepen; T_subcat[tmaxgroen11fileFile68af]    = SUBCAT_File;
    T_cat[tnlfg0262]               = CAT_Basisfuncties;    T_subcat[tnlfg0262]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlfgd0262]              = CAT_Basisfuncties;    T_subcat[tnlfgd0262]                 = SUBCAT_HardeKoppeling;
    T_cat[tnleg0262]               = CAT_Basisfuncties;    T_subcat[tnleg0262]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlegd0262]              = CAT_Basisfuncties;    T_subcat[tnlegd0262]                 = SUBCAT_HardeKoppeling;
    T_cat[tvgnaloop0262]           = CAT_Basisfuncties;    T_subcat[tvgnaloop0262]              = SUBCAT_HardeKoppeling;
    T_cat[tnlfg0868]               = CAT_Basisfuncties;    T_subcat[tnlfg0868]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlfgd0868]              = CAT_Basisfuncties;    T_subcat[tnlfgd0868]                 = SUBCAT_HardeKoppeling;
    T_cat[tnleg0868]               = CAT_Basisfuncties;    T_subcat[tnleg0868]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlegd0868]              = CAT_Basisfuncties;    T_subcat[tnlegd0868]                 = SUBCAT_HardeKoppeling;
    T_cat[tvgnaloop0868]           = CAT_Basisfuncties;    T_subcat[tvgnaloop0868]              = SUBCAT_HardeKoppeling;
    T_cat[tnlfg1168]               = CAT_Basisfuncties;    T_subcat[tnlfg1168]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlfgd1168]              = CAT_Basisfuncties;    T_subcat[tnlfgd1168]                 = SUBCAT_HardeKoppeling;
    T_cat[tnleg1168]               = CAT_Basisfuncties;    T_subcat[tnleg1168]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlegd1168]              = CAT_Basisfuncties;    T_subcat[tnlegd1168]                 = SUBCAT_HardeKoppeling;
    T_cat[tvgnaloop1168]           = CAT_Basisfuncties;    T_subcat[tvgnaloop1168]              = SUBCAT_HardeKoppeling;
    T_cat[tnlfg2221]               = CAT_Basisfuncties;    T_subcat[tnlfg2221]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlfgd2221]              = CAT_Basisfuncties;    T_subcat[tnlfgd2221]                 = SUBCAT_HardeKoppeling;
    T_cat[tnlcv2221]               = CAT_Basisfuncties;    T_subcat[tnlcv2221]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlcvd2221]              = CAT_Basisfuncties;    T_subcat[tnlcvd2221]                 = SUBCAT_HardeKoppeling;
    T_cat[tvgnaloop2221]           = CAT_Basisfuncties;    T_subcat[tvgnaloop2221]              = SUBCAT_HardeKoppeling;
    T_cat[tnlsgd3132]              = CAT_Basisfuncties;    T_subcat[tnlsgd3132]                 = SUBCAT_HardeKoppeling;
    T_cat[tnlsgd3231]              = CAT_Basisfuncties;    T_subcat[tnlsgd3231]                 = SUBCAT_HardeKoppeling;
    T_cat[tnlsgd3334]              = CAT_Basisfuncties;    T_subcat[tnlsgd3334]                 = SUBCAT_HardeKoppeling;
    T_cat[tnlsgd3433]              = CAT_Basisfuncties;    T_subcat[tnlsgd3433]                 = SUBCAT_HardeKoppeling;
    T_cat[tnlfg8281]               = CAT_Basisfuncties;    T_subcat[tnlfg8281]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlfgd8281]              = CAT_Basisfuncties;    T_subcat[tnlfgd8281]                 = SUBCAT_HardeKoppeling;
    T_cat[tnleg8281]               = CAT_Basisfuncties;    T_subcat[tnleg8281]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlegd8281]              = CAT_Basisfuncties;    T_subcat[tnlegd8281]                 = SUBCAT_HardeKoppeling;
    T_cat[tvgnaloop8281]           = CAT_Basisfuncties;    T_subcat[tvgnaloop8281]              = SUBCAT_HardeKoppeling;
    T_cat[tkarmelding]             = CAT_Prioriteren;      T_subcat[tkarmelding]                = SUBCAT_OpenbaarVervoer;
    T_cat[tkarog]                  = CAT_Prioriteren;      T_subcat[tkarog]                     = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg02bus]             = CAT_Prioriteren;      T_subcat[tbtovg02bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt02bus]                = CAT_Prioriteren;      T_subcat[trt02bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb02bus]                = CAT_Prioriteren;      T_subcat[tgb02bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk02bus]               = CAT_Prioriteren;      T_subcat[tblk02bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg03bus]             = CAT_Prioriteren;      T_subcat[tbtovg03bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt03bus]                = CAT_Prioriteren;      T_subcat[trt03bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb03bus]                = CAT_Prioriteren;      T_subcat[tgb03bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk03bus]               = CAT_Prioriteren;      T_subcat[tblk03bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg05bus]             = CAT_Prioriteren;      T_subcat[tbtovg05bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt05bus]                = CAT_Prioriteren;      T_subcat[trt05bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb05bus]                = CAT_Prioriteren;      T_subcat[tgb05bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk05bus]               = CAT_Prioriteren;      T_subcat[tblk05bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg08bus]             = CAT_Prioriteren;      T_subcat[tbtovg08bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt08bus]                = CAT_Prioriteren;      T_subcat[trt08bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb08bus]                = CAT_Prioriteren;      T_subcat[tgb08bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk08bus]               = CAT_Prioriteren;      T_subcat[tblk08bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg09bus]             = CAT_Prioriteren;      T_subcat[tbtovg09bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt09bus]                = CAT_Prioriteren;      T_subcat[trt09bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb09bus]                = CAT_Prioriteren;      T_subcat[tgb09bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk09bus]               = CAT_Prioriteren;      T_subcat[tblk09bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg11bus]             = CAT_Prioriteren;      T_subcat[tbtovg11bus]                = SUBCAT_OpenbaarVervoer;
    T_cat[trt11bus]                = CAT_Prioriteren;      T_subcat[trt11bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tgb11bus]                = CAT_Prioriteren;      T_subcat[tgb11bus]                   = SUBCAT_OpenbaarVervoer;
    T_cat[tblk11bus]               = CAT_Prioriteren;      T_subcat[tblk11bus]                  = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd02]                 = CAT_Prioriteren;      T_subcat[tgbhd02]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd02]                 = CAT_Prioriteren;      T_subcat[trthd02]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg02hd]              = CAT_Prioriteren;      T_subcat[tbtovg02hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin02kar]              = CAT_Prioriteren;      T_subcat[thdin02kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit02kar]             = CAT_Prioriteren;      T_subcat[thduit02kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd03]                 = CAT_Prioriteren;      T_subcat[tgbhd03]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd03]                 = CAT_Prioriteren;      T_subcat[trthd03]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg03hd]              = CAT_Prioriteren;      T_subcat[tbtovg03hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin03kar]              = CAT_Prioriteren;      T_subcat[thdin03kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit03kar]             = CAT_Prioriteren;      T_subcat[thduit03kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd05]                 = CAT_Prioriteren;      T_subcat[tgbhd05]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd05]                 = CAT_Prioriteren;      T_subcat[trthd05]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg05hd]              = CAT_Prioriteren;      T_subcat[tbtovg05hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin05kar]              = CAT_Prioriteren;      T_subcat[thdin05kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit05kar]             = CAT_Prioriteren;      T_subcat[thduit05kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd08]                 = CAT_Prioriteren;      T_subcat[tgbhd08]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd08]                 = CAT_Prioriteren;      T_subcat[trthd08]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg08hd]              = CAT_Prioriteren;      T_subcat[tbtovg08hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin08kar]              = CAT_Prioriteren;      T_subcat[thdin08kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit08kar]             = CAT_Prioriteren;      T_subcat[thduit08kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd09]                 = CAT_Prioriteren;      T_subcat[tgbhd09]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd09]                 = CAT_Prioriteren;      T_subcat[trthd09]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg09hd]              = CAT_Prioriteren;      T_subcat[tbtovg09hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin09kar]              = CAT_Prioriteren;      T_subcat[thdin09kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit09kar]             = CAT_Prioriteren;      T_subcat[thduit09kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd11]                 = CAT_Prioriteren;      T_subcat[tgbhd11]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd11]                 = CAT_Prioriteren;      T_subcat[trthd11]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg11hd]              = CAT_Prioriteren;      T_subcat[tbtovg11hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin11kar]              = CAT_Prioriteren;      T_subcat[thdin11kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit11kar]             = CAT_Prioriteren;      T_subcat[thduit11kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd61]                 = CAT_Prioriteren;      T_subcat[tgbhd61]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd61]                 = CAT_Prioriteren;      T_subcat[trthd61]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg61hd]              = CAT_Prioriteren;      T_subcat[tbtovg61hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin61kar]              = CAT_Prioriteren;      T_subcat[thdin61kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit61kar]             = CAT_Prioriteren;      T_subcat[thduit61kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd62]                 = CAT_Prioriteren;      T_subcat[tgbhd62]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd62]                 = CAT_Prioriteren;      T_subcat[trthd62]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg62hd]              = CAT_Prioriteren;      T_subcat[tbtovg62hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin62kar]              = CAT_Prioriteren;      T_subcat[thdin62kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit62kar]             = CAT_Prioriteren;      T_subcat[thduit62kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd67]                 = CAT_Prioriteren;      T_subcat[tgbhd67]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd67]                 = CAT_Prioriteren;      T_subcat[trthd67]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg67hd]              = CAT_Prioriteren;      T_subcat[tbtovg67hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin67kar]              = CAT_Prioriteren;      T_subcat[thdin67kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit67kar]             = CAT_Prioriteren;      T_subcat[thduit67kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgbhd68]                 = CAT_Prioriteren;      T_subcat[tgbhd68]                    = SUBCAT_OpenbaarVervoer;
    T_cat[trthd68]                 = CAT_Prioriteren;      T_subcat[trthd68]                    = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg68hd]              = CAT_Prioriteren;      T_subcat[tbtovg68hd]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thdin68kar]              = CAT_Prioriteren;      T_subcat[thdin68kar]                 = SUBCAT_OpenbaarVervoer;
    T_cat[thduit68kar]             = CAT_Prioriteren;      T_subcat[thduit68kar]                = SUBCAT_OpenbaarVervoer;
    T_cat[trgad24_3]               = CAT_Basisfuncties;    T_subcat[trgad24_3]                  = SUBCAT_Aanvraag;
    T_cat[trgavd24_3]              = CAT_Basisfuncties;    T_subcat[trgavd24_3]                 = SUBCAT_Aanvraag;
    T_cat[trgrd24_3_d24_2]         = CAT_Basisfuncties;    T_subcat[trgrd24_3_d24_2]            = SUBCAT_Verlengen;
    T_cat[trgvd24_3_d24_2]         = CAT_Basisfuncties;    T_subcat[trgvd24_3_d24_2]            = SUBCAT_Verlengen;
    T_cat[tuitgestca02]            = CAT_Basisfuncties;    T_subcat[tuitgestca02]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca03]            = CAT_Basisfuncties;    T_subcat[tuitgestca03]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca05]            = CAT_Basisfuncties;    T_subcat[tuitgestca05]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca08]            = CAT_Basisfuncties;    T_subcat[tuitgestca08]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca09]            = CAT_Basisfuncties;    T_subcat[tuitgestca09]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca11]            = CAT_Basisfuncties;    T_subcat[tuitgestca11]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca21]            = CAT_Basisfuncties;    T_subcat[tuitgestca21]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca22]            = CAT_Basisfuncties;    T_subcat[tuitgestca22]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca24]            = CAT_Basisfuncties;    T_subcat[tuitgestca24]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca26]            = CAT_Basisfuncties;    T_subcat[tuitgestca26]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca28]            = CAT_Basisfuncties;    T_subcat[tuitgestca28]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca31]            = CAT_Basisfuncties;    T_subcat[tuitgestca31]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca32]            = CAT_Basisfuncties;    T_subcat[tuitgestca32]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca33]            = CAT_Basisfuncties;    T_subcat[tuitgestca33]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca34]            = CAT_Basisfuncties;    T_subcat[tuitgestca34]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca38]            = CAT_Basisfuncties;    T_subcat[tuitgestca38]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca61]            = CAT_Basisfuncties;    T_subcat[tuitgestca61]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca62]            = CAT_Basisfuncties;    T_subcat[tuitgestca62]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca67]            = CAT_Basisfuncties;    T_subcat[tuitgestca67]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca68]            = CAT_Basisfuncties;    T_subcat[tuitgestca68]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca81]            = CAT_Basisfuncties;    T_subcat[tuitgestca81]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca82]            = CAT_Basisfuncties;    T_subcat[tuitgestca82]               = SUBCAT_Aanvraag;
    T_cat[tuitgestca84]            = CAT_Basisfuncties;    T_subcat[tuitgestca84]               = SUBCAT_Aanvraag;
    T_cat[twtv21]                  = CAT_Informeren;       T_subcat[twtv21]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv22]                  = CAT_Informeren;       T_subcat[twtv22]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv24]                  = CAT_Informeren;       T_subcat[twtv24]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv26]                  = CAT_Informeren;       T_subcat[twtv26]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv28]                  = CAT_Informeren;       T_subcat[twtv28]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv81]                  = CAT_Informeren;       T_subcat[twtv81]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv82]                  = CAT_Informeren;       T_subcat[twtv82]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[twtv84]                  = CAT_Informeren;       T_subcat[twtv84]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[tvs2205]                 = CAT_Basisfuncties;    T_subcat[tvs2205]                    = SUBCAT_Deelconflicten;
    T_cat[tfo0522]                 = CAT_Basisfuncties;    T_subcat[tfo0522]                    = SUBCAT_Deelconflicten;
    T_cat[tvs3205]                 = CAT_Basisfuncties;    T_subcat[tvs3205]                    = SUBCAT_Deelconflicten;
    T_cat[tfo0532]                 = CAT_Basisfuncties;    T_subcat[tfo0532]                    = SUBCAT_Deelconflicten;
    T_cat[tlr2611]                 = CAT_Basisfuncties;    T_subcat[tlr2611]                    = SUBCAT_Deelconflicten;
    T_cat[tfo2611]                 = CAT_Basisfuncties;    T_subcat[tfo2611]                    = SUBCAT_Deelconflicten;
    T_cat[txnl0262]                = CAT_Basisfuncties;    T_subcat[txnl0262]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl0868]                = CAT_Basisfuncties;    T_subcat[txnl0868]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl1168]                = CAT_Basisfuncties;    T_subcat[txnl1168]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl2221]                = CAT_Basisfuncties;    T_subcat[txnl2221]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl3132]                = CAT_Basisfuncties;    T_subcat[txnl3132]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl3231]                = CAT_Basisfuncties;    T_subcat[txnl3231]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl3334]                = CAT_Basisfuncties;    T_subcat[txnl3334]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl3433]                = CAT_Basisfuncties;    T_subcat[txnl3433]                   = SUBCAT_HardeKoppeling;
    T_cat[txnl8281]                = CAT_Basisfuncties;    T_subcat[txnl8281]                   = SUBCAT_HardeKoppeling;
    PRM_cat[prmspringverleng_08_1a] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_1a] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_1b] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_1b] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_2a] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_2a] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_2b] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_2b] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_3a] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_3a] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_3b] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_3b] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_4a] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_4a] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_4b] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_4b] = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_1] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_1]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_2] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_2]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_3] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_3]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_1] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_1]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_2] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_2]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_3] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_3]  = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_4] = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_4]  = SUBCAT_Verlengen;
    PRM_cat[prmfb]               = CAT_SpecialeIngrepen; PRM_subcat[prmfb]                  = SUBCAT_Fasebewaking;
    PRM_cat[prmxx]               = CAT_TestenLoggen;     PRM_subcat[prmxx]                  = SUBCAT_Loggen;
    PRM_cat[prmyy]               = CAT_TestenLoggen;     PRM_subcat[prmyy]                  = SUBCAT_Loggen;
    PRM_cat[prmzz]               = CAT_TestenLoggen;     PRM_subcat[prmzz]                  = SUBCAT_Loggen;
    PRM_cat[prmaltb02]           = CAT_Basisfuncties;    PRM_subcat[prmaltb02]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb03]           = CAT_Basisfuncties;    PRM_subcat[prmaltb03]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb05]           = CAT_Basisfuncties;    PRM_subcat[prmaltb05]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb08]           = CAT_Basisfuncties;    PRM_subcat[prmaltb08]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb09]           = CAT_Basisfuncties;    PRM_subcat[prmaltb09]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb11]           = CAT_Basisfuncties;    PRM_subcat[prmaltb11]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb21]           = CAT_Basisfuncties;    PRM_subcat[prmaltb21]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb22]           = CAT_Basisfuncties;    PRM_subcat[prmaltb22]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb24]           = CAT_Basisfuncties;    PRM_subcat[prmaltb24]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb26]           = CAT_Basisfuncties;    PRM_subcat[prmaltb26]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb28]           = CAT_Basisfuncties;    PRM_subcat[prmaltb28]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb31]           = CAT_Basisfuncties;    PRM_subcat[prmaltb31]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb32]           = CAT_Basisfuncties;    PRM_subcat[prmaltb32]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb33]           = CAT_Basisfuncties;    PRM_subcat[prmaltb33]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb34]           = CAT_Basisfuncties;    PRM_subcat[prmaltb34]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb38]           = CAT_Basisfuncties;    PRM_subcat[prmaltb38]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb61]           = CAT_Basisfuncties;    PRM_subcat[prmaltb61]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb62]           = CAT_Basisfuncties;    PRM_subcat[prmaltb62]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb67]           = CAT_Basisfuncties;    PRM_subcat[prmaltb67]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb68]           = CAT_Basisfuncties;    PRM_subcat[prmaltb68]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb81]           = CAT_Basisfuncties;    PRM_subcat[prmaltb81]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb82]           = CAT_Basisfuncties;    PRM_subcat[prmaltb82]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb84]           = CAT_Basisfuncties;    PRM_subcat[prmaltb84]              = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmda02_1a]          = CAT_Basisfuncties;    PRM_subcat[prmda02_1a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_1b]          = CAT_Basisfuncties;    PRM_subcat[prmda02_1b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_2a]          = CAT_Basisfuncties;    PRM_subcat[prmda02_2a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_2b]          = CAT_Basisfuncties;    PRM_subcat[prmda02_2b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_3a]          = CAT_Basisfuncties;    PRM_subcat[prmda02_3a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_3b]          = CAT_Basisfuncties;    PRM_subcat[prmda02_3b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_4a]          = CAT_Basisfuncties;    PRM_subcat[prmda02_4a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda02_4b]          = CAT_Basisfuncties;    PRM_subcat[prmda02_4b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda03_1]           = CAT_Basisfuncties;    PRM_subcat[prmda03_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda03_2]           = CAT_Basisfuncties;    PRM_subcat[prmda03_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda05_1]           = CAT_Basisfuncties;    PRM_subcat[prmda05_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda05_2]           = CAT_Basisfuncties;    PRM_subcat[prmda05_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda08_1a]          = CAT_Basisfuncties;    PRM_subcat[prmda08_1a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_1b]          = CAT_Basisfuncties;    PRM_subcat[prmda08_1b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_2a]          = CAT_Basisfuncties;    PRM_subcat[prmda08_2a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_2b]          = CAT_Basisfuncties;    PRM_subcat[prmda08_2b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_3a]          = CAT_Basisfuncties;    PRM_subcat[prmda08_3a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_3b]          = CAT_Basisfuncties;    PRM_subcat[prmda08_3b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_4a]          = CAT_Basisfuncties;    PRM_subcat[prmda08_4a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda08_4b]          = CAT_Basisfuncties;    PRM_subcat[prmda08_4b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda09_1]           = CAT_Basisfuncties;    PRM_subcat[prmda09_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda09_2]           = CAT_Basisfuncties;    PRM_subcat[prmda09_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda09_3]           = CAT_Basisfuncties;    PRM_subcat[prmda09_3]              = SUBCAT_Aanvraag;
    PRM_cat[prmda11_1]           = CAT_Basisfuncties;    PRM_subcat[prmda11_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda11_2]           = CAT_Basisfuncties;    PRM_subcat[prmda11_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda11_3]           = CAT_Basisfuncties;    PRM_subcat[prmda11_3]              = SUBCAT_Aanvraag;
    PRM_cat[prmda11_4]           = CAT_Basisfuncties;    PRM_subcat[prmda11_4]              = SUBCAT_Aanvraag;
    PRM_cat[prmda211]            = CAT_Basisfuncties;    PRM_subcat[prmda211]               = SUBCAT_Aanvraag;
    PRM_cat[prmdak21]            = CAT_Basisfuncties;    PRM_subcat[prmdak21]               = SUBCAT_Aanvraag;
    PRM_cat[prmda22_1]           = CAT_Basisfuncties;    PRM_subcat[prmda22_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak22]            = CAT_Basisfuncties;    PRM_subcat[prmdak22]               = SUBCAT_Aanvraag;
    PRM_cat[prmda24_1]           = CAT_Basisfuncties;    PRM_subcat[prmda24_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda24_2]           = CAT_Basisfuncties;    PRM_subcat[prmda24_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda24_3]           = CAT_Basisfuncties;    PRM_subcat[prmda24_3]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak24]            = CAT_Basisfuncties;    PRM_subcat[prmdak24]               = SUBCAT_Aanvraag;
    PRM_cat[prmda261]            = CAT_Basisfuncties;    PRM_subcat[prmda261]               = SUBCAT_Aanvraag;
    PRM_cat[prmdak26]            = CAT_Basisfuncties;    PRM_subcat[prmdak26]               = SUBCAT_Aanvraag;
    PRM_cat[prmda28_1]           = CAT_Basisfuncties;    PRM_subcat[prmda28_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda28_2]           = CAT_Basisfuncties;    PRM_subcat[prmda28_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak28]            = CAT_Basisfuncties;    PRM_subcat[prmdak28]               = SUBCAT_Aanvraag;
    PRM_cat[prmdak31a]           = CAT_Basisfuncties;    PRM_subcat[prmdak31a]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak31b]           = CAT_Basisfuncties;    PRM_subcat[prmdak31b]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak32a]           = CAT_Basisfuncties;    PRM_subcat[prmdak32a]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak32b]           = CAT_Basisfuncties;    PRM_subcat[prmdak32b]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak33a]           = CAT_Basisfuncties;    PRM_subcat[prmdak33a]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak33b]           = CAT_Basisfuncties;    PRM_subcat[prmdak33b]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak34a]           = CAT_Basisfuncties;    PRM_subcat[prmdak34a]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak34b]           = CAT_Basisfuncties;    PRM_subcat[prmdak34b]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak38a]           = CAT_Basisfuncties;    PRM_subcat[prmdak38a]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak38b]           = CAT_Basisfuncties;    PRM_subcat[prmdak38b]              = SUBCAT_Aanvraag;
    PRM_cat[prmda61_1]           = CAT_Basisfuncties;    PRM_subcat[prmda61_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda61_2]           = CAT_Basisfuncties;    PRM_subcat[prmda61_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda62_1a]          = CAT_Basisfuncties;    PRM_subcat[prmda62_1a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda62_1b]          = CAT_Basisfuncties;    PRM_subcat[prmda62_1b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda62_2a]          = CAT_Basisfuncties;    PRM_subcat[prmda62_2a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda62_2b]          = CAT_Basisfuncties;    PRM_subcat[prmda62_2b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda67_1]           = CAT_Basisfuncties;    PRM_subcat[prmda67_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmda67_2]           = CAT_Basisfuncties;    PRM_subcat[prmda67_2]              = SUBCAT_Aanvraag;
    PRM_cat[prmda68_1a]          = CAT_Basisfuncties;    PRM_subcat[prmda68_1a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda68_1b]          = CAT_Basisfuncties;    PRM_subcat[prmda68_1b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda68_2a]          = CAT_Basisfuncties;    PRM_subcat[prmda68_2a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda68_2b]          = CAT_Basisfuncties;    PRM_subcat[prmda68_2b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda68_9a]          = CAT_Basisfuncties;    PRM_subcat[prmda68_9a]             = SUBCAT_Aanvraag;
    PRM_cat[prmda68_9b]          = CAT_Basisfuncties;    PRM_subcat[prmda68_9b]             = SUBCAT_Aanvraag;
    PRM_cat[prmda81_1]           = CAT_Basisfuncties;    PRM_subcat[prmda81_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak81]            = CAT_Basisfuncties;    PRM_subcat[prmdak81]               = SUBCAT_Aanvraag;
    PRM_cat[prmda82_1]           = CAT_Basisfuncties;    PRM_subcat[prmda82_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak82]            = CAT_Basisfuncties;    PRM_subcat[prmdak82]               = SUBCAT_Aanvraag;
    PRM_cat[prmda84_1]           = CAT_Basisfuncties;    PRM_subcat[prmda84_1]              = SUBCAT_Aanvraag;
    PRM_cat[prmdak84]            = CAT_Basisfuncties;    PRM_subcat[prmdak84]               = SUBCAT_Aanvraag;
    PRM_cat[prmmk02_1a]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_1a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_1b]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_1b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_2a]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_2a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_2b]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_2b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_3a]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_3a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_3b]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_3b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_4a]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_4a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk02_4b]          = CAT_Basisfuncties;    PRM_subcat[prmmk02_4b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk03_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk03_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk03_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk03_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk05_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk05_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk05_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk05_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk08_1a]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_1a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_1b]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_1b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_2a]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_2a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_2b]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_2b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_3a]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_3a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_3b]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_3b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_4a]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_4a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk08_4b]          = CAT_Basisfuncties;    PRM_subcat[prmmk08_4b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk09_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk09_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk09_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk09_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk09_3]           = CAT_Basisfuncties;    PRM_subcat[prmmk09_3]              = SUBCAT_Verlengen;
    PRM_cat[prmmk11_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk11_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk11_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk11_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk11_3]           = CAT_Basisfuncties;    PRM_subcat[prmmk11_3]              = SUBCAT_Verlengen;
    PRM_cat[prmmk11_4]           = CAT_Basisfuncties;    PRM_subcat[prmmk11_4]              = SUBCAT_Verlengen;
    PRM_cat[prmmk211]            = CAT_Basisfuncties;    PRM_subcat[prmmk211]               = SUBCAT_Verlengen;
    PRM_cat[prmmk22_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk22_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk24_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk24_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk24_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk24_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk24_3]           = CAT_Basisfuncties;    PRM_subcat[prmmk24_3]              = SUBCAT_Verlengen;
    PRM_cat[prmmk261]            = CAT_Basisfuncties;    PRM_subcat[prmmk261]               = SUBCAT_Verlengen;
    PRM_cat[prmmk28_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk28_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk28_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk28_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk61_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk61_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk61_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk61_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk62_1a]          = CAT_Basisfuncties;    PRM_subcat[prmmk62_1a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk62_1b]          = CAT_Basisfuncties;    PRM_subcat[prmmk62_1b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk62_2a]          = CAT_Basisfuncties;    PRM_subcat[prmmk62_2a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk62_2b]          = CAT_Basisfuncties;    PRM_subcat[prmmk62_2b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk67_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk67_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk67_2]           = CAT_Basisfuncties;    PRM_subcat[prmmk67_2]              = SUBCAT_Verlengen;
    PRM_cat[prmmk68_1a]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_1a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk68_1b]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_1b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk68_2a]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_2a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk68_2b]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_2b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk68_9a]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_9a]             = SUBCAT_Verlengen;
    PRM_cat[prmmk68_9b]          = CAT_Basisfuncties;    PRM_subcat[prmmk68_9b]             = SUBCAT_Verlengen;
    PRM_cat[prmmk81_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk81_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk82_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk82_1]              = SUBCAT_Verlengen;
    PRM_cat[prmmk84_1]           = CAT_Basisfuncties;    PRM_subcat[prmmk84_1]              = SUBCAT_Verlengen;
    PRM_cat[prmperc03]           = CAT_Detectie;         PRM_subcat[prmperc03]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc05]           = CAT_Detectie;         PRM_subcat[prmperc05]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc08]           = CAT_Detectie;         PRM_subcat[prmperc08]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc09]           = CAT_Detectie;         PRM_subcat[prmperc09]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc11]           = CAT_Detectie;         PRM_subcat[prmperc11]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc61]           = CAT_Detectie;         PRM_subcat[prmperc61]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc62]           = CAT_Detectie;         PRM_subcat[prmperc62]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc67]           = CAT_Detectie;         PRM_subcat[prmperc67]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc68]           = CAT_Detectie;         PRM_subcat[prmperc68]              = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmfpercFile68af08]  = CAT_SpecialeIngrepen; PRM_subcat[prmfpercFile68af08]     = SUBCAT_File;
    PRM_cat[prmfpercFile68af11]  = CAT_SpecialeIngrepen; PRM_subcat[prmfpercFile68af11]     = SUBCAT_File;
    PRM_cat[prmmv02]             = CAT_Basisfuncties;    PRM_subcat[prmmv02]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv03]             = CAT_Basisfuncties;    PRM_subcat[prmmv03]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv05]             = CAT_Basisfuncties;    PRM_subcat[prmmv05]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv08]             = CAT_Basisfuncties;    PRM_subcat[prmmv08]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv09]             = CAT_Basisfuncties;    PRM_subcat[prmmv09]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv11]             = CAT_Basisfuncties;    PRM_subcat[prmmv11]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv21]             = CAT_Basisfuncties;    PRM_subcat[prmmv21]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv22]             = CAT_Basisfuncties;    PRM_subcat[prmmv22]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv24]             = CAT_Basisfuncties;    PRM_subcat[prmmv24]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv26]             = CAT_Basisfuncties;    PRM_subcat[prmmv26]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv28]             = CAT_Basisfuncties;    PRM_subcat[prmmv28]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv31]             = CAT_Basisfuncties;    PRM_subcat[prmmv31]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv32]             = CAT_Basisfuncties;    PRM_subcat[prmmv32]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv33]             = CAT_Basisfuncties;    PRM_subcat[prmmv33]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv34]             = CAT_Basisfuncties;    PRM_subcat[prmmv34]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv38]             = CAT_Basisfuncties;    PRM_subcat[prmmv38]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv61]             = CAT_Basisfuncties;    PRM_subcat[prmmv61]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv62]             = CAT_Basisfuncties;    PRM_subcat[prmmv62]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv67]             = CAT_Basisfuncties;    PRM_subcat[prmmv67]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv68]             = CAT_Basisfuncties;    PRM_subcat[prmmv68]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv81]             = CAT_Basisfuncties;    PRM_subcat[prmmv81]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv82]             = CAT_Basisfuncties;    PRM_subcat[prmmv82]                = SUBCAT_Meeverlengen;
    PRM_cat[prmmv84]             = CAT_Basisfuncties;    PRM_subcat[prmmv84]                = SUBCAT_Meeverlengen;
    PRM_cat[prmprml02]           = CAT_Module;           PRM_subcat[prmprml02]              = SUBCAT_Plantijden;
    PRM_cat[prmprml03]           = CAT_Module;           PRM_subcat[prmprml03]              = SUBCAT_Plantijden;
    PRM_cat[prmprml05]           = CAT_Module;           PRM_subcat[prmprml05]              = SUBCAT_Plantijden;
    PRM_cat[prmprml08]           = CAT_Module;           PRM_subcat[prmprml08]              = SUBCAT_Plantijden;
    PRM_cat[prmprml09]           = CAT_Module;           PRM_subcat[prmprml09]              = SUBCAT_Plantijden;
    PRM_cat[prmprml11]           = CAT_Module;           PRM_subcat[prmprml11]              = SUBCAT_Plantijden;
    PRM_cat[prmprml21]           = CAT_Module;           PRM_subcat[prmprml21]              = SUBCAT_Plantijden;
    PRM_cat[prmprml22]           = CAT_Module;           PRM_subcat[prmprml22]              = SUBCAT_Plantijden;
    PRM_cat[prmprml24]           = CAT_Module;           PRM_subcat[prmprml24]              = SUBCAT_Plantijden;
    PRM_cat[prmprml26]           = CAT_Module;           PRM_subcat[prmprml26]              = SUBCAT_Plantijden;
    PRM_cat[prmprml28]           = CAT_Module;           PRM_subcat[prmprml28]              = SUBCAT_Plantijden;
    PRM_cat[prmprml31]           = CAT_Module;           PRM_subcat[prmprml31]              = SUBCAT_Plantijden;
    PRM_cat[prmprml32]           = CAT_Module;           PRM_subcat[prmprml32]              = SUBCAT_Plantijden;
    PRM_cat[prmprml33]           = CAT_Module;           PRM_subcat[prmprml33]              = SUBCAT_Plantijden;
    PRM_cat[prmprml34]           = CAT_Module;           PRM_subcat[prmprml34]              = SUBCAT_Plantijden;
    PRM_cat[prmprml38]           = CAT_Module;           PRM_subcat[prmprml38]              = SUBCAT_Plantijden;
    PRM_cat[prmprml61]           = CAT_Module;           PRM_subcat[prmprml61]              = SUBCAT_Plantijden;
    PRM_cat[prmprml62]           = CAT_Module;           PRM_subcat[prmprml62]              = SUBCAT_Plantijden;
    PRM_cat[prmprml67]           = CAT_Module;           PRM_subcat[prmprml67]              = SUBCAT_Plantijden;
    PRM_cat[prmprml68]           = CAT_Module;           PRM_subcat[prmprml68]              = SUBCAT_Plantijden;
    PRM_cat[prmprml81]           = CAT_Module;           PRM_subcat[prmprml81]              = SUBCAT_Plantijden;
    PRM_cat[prmprml82]           = CAT_Module;           PRM_subcat[prmprml82]              = SUBCAT_Plantijden;
    PRM_cat[prmprml84]           = CAT_Module;           PRM_subcat[prmprml84]              = SUBCAT_Plantijden;
    PRM_cat[prmxnl0262]          = CAT_Basisfuncties;    PRM_subcat[prmxnl0262]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl0868]          = CAT_Basisfuncties;    PRM_subcat[prmxnl0868]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl1168]          = CAT_Basisfuncties;    PRM_subcat[prmxnl1168]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl2221]          = CAT_Basisfuncties;    PRM_subcat[prmxnl2221]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl3132]          = CAT_Basisfuncties;    PRM_subcat[prmxnl3132]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl3231]          = CAT_Basisfuncties;    PRM_subcat[prmxnl3231]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl3334]          = CAT_Basisfuncties;    PRM_subcat[prmxnl3334]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl3433]          = CAT_Basisfuncties;    PRM_subcat[prmxnl3433]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmxnl8281]          = CAT_Basisfuncties;    PRM_subcat[prmxnl8281]             = SUBCAT_HardeKoppeling;
    PRM_cat[prmOVtstpgrensvroeg] = CAT_Prioriteren;      PRM_subcat[prmOVtstpgrensvroeg]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmOVtstpgrenslaat]  = CAT_Prioriteren;      PRM_subcat[prmOVtstpgrenslaat]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg02bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg02bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd02bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd02bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat02bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat02bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg03bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg03bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd03bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd03bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat03bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat03bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg05bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg05bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd05bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd05bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat05bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat05bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg08bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg08bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd08bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd08bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat08bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat08bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg09bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg09bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd09bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd09bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat09bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat09bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg11bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg11bus] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd11bus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd11bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat11bus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat11bus]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwta]             = CAT_Prioriteren;      PRM_subcat[prmmwta]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwtfts]           = CAT_Prioriteren;      PRM_subcat[prmmwtfts]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwtvtg]           = CAT_Prioriteren;      PRM_subcat[prmmwtvtg]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt02]           = CAT_Prioriteren;      PRM_subcat[prmpmgt02]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt02]           = CAT_Prioriteren;      PRM_subcat[prmognt02]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm02]           = CAT_Prioriteren;      PRM_subcat[prmnofm02]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov02]          = CAT_Prioriteren;      PRM_subcat[prmmgcov02]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov02]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov02]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg02]          = CAT_Prioriteren;      PRM_subcat[prmohpmg02]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt03]           = CAT_Prioriteren;      PRM_subcat[prmpmgt03]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt03]           = CAT_Prioriteren;      PRM_subcat[prmognt03]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm03]           = CAT_Prioriteren;      PRM_subcat[prmnofm03]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov03]          = CAT_Prioriteren;      PRM_subcat[prmmgcov03]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov03]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov03]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg03]          = CAT_Prioriteren;      PRM_subcat[prmohpmg03]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt05]           = CAT_Prioriteren;      PRM_subcat[prmpmgt05]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt05]           = CAT_Prioriteren;      PRM_subcat[prmognt05]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm05]           = CAT_Prioriteren;      PRM_subcat[prmnofm05]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov05]          = CAT_Prioriteren;      PRM_subcat[prmmgcov05]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov05]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov05]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg05]          = CAT_Prioriteren;      PRM_subcat[prmohpmg05]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt08]           = CAT_Prioriteren;      PRM_subcat[prmpmgt08]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt08]           = CAT_Prioriteren;      PRM_subcat[prmognt08]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm08]           = CAT_Prioriteren;      PRM_subcat[prmnofm08]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov08]          = CAT_Prioriteren;      PRM_subcat[prmmgcov08]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov08]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov08]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg08]          = CAT_Prioriteren;      PRM_subcat[prmohpmg08]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt09]           = CAT_Prioriteren;      PRM_subcat[prmpmgt09]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt09]           = CAT_Prioriteren;      PRM_subcat[prmognt09]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm09]           = CAT_Prioriteren;      PRM_subcat[prmnofm09]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov09]          = CAT_Prioriteren;      PRM_subcat[prmmgcov09]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov09]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov09]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg09]          = CAT_Prioriteren;      PRM_subcat[prmohpmg09]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt11]           = CAT_Prioriteren;      PRM_subcat[prmpmgt11]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt11]           = CAT_Prioriteren;      PRM_subcat[prmognt11]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm11]           = CAT_Prioriteren;      PRM_subcat[prmnofm11]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov11]          = CAT_Prioriteren;      PRM_subcat[prmmgcov11]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov11]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov11]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg11]          = CAT_Prioriteren;      PRM_subcat[prmohpmg11]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt21]           = CAT_Prioriteren;      PRM_subcat[prmpmgt21]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt21]           = CAT_Prioriteren;      PRM_subcat[prmognt21]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm21]           = CAT_Prioriteren;      PRM_subcat[prmnofm21]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov21]          = CAT_Prioriteren;      PRM_subcat[prmmgcov21]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov21]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov21]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg21]          = CAT_Prioriteren;      PRM_subcat[prmohpmg21]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt24]           = CAT_Prioriteren;      PRM_subcat[prmpmgt24]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt24]           = CAT_Prioriteren;      PRM_subcat[prmognt24]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm24]           = CAT_Prioriteren;      PRM_subcat[prmnofm24]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov24]          = CAT_Prioriteren;      PRM_subcat[prmmgcov24]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov24]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov24]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg24]          = CAT_Prioriteren;      PRM_subcat[prmohpmg24]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt26]           = CAT_Prioriteren;      PRM_subcat[prmpmgt26]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt26]           = CAT_Prioriteren;      PRM_subcat[prmognt26]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm26]           = CAT_Prioriteren;      PRM_subcat[prmnofm26]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov26]          = CAT_Prioriteren;      PRM_subcat[prmmgcov26]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov26]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov26]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg26]          = CAT_Prioriteren;      PRM_subcat[prmohpmg26]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt28]           = CAT_Prioriteren;      PRM_subcat[prmpmgt28]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt28]           = CAT_Prioriteren;      PRM_subcat[prmognt28]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm28]           = CAT_Prioriteren;      PRM_subcat[prmnofm28]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov28]          = CAT_Prioriteren;      PRM_subcat[prmmgcov28]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov28]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov28]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg28]          = CAT_Prioriteren;      PRM_subcat[prmohpmg28]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt31]           = CAT_Prioriteren;      PRM_subcat[prmpmgt31]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt31]           = CAT_Prioriteren;      PRM_subcat[prmognt31]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt33]           = CAT_Prioriteren;      PRM_subcat[prmpmgt33]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt33]           = CAT_Prioriteren;      PRM_subcat[prmognt33]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt34]           = CAT_Prioriteren;      PRM_subcat[prmpmgt34]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt34]           = CAT_Prioriteren;      PRM_subcat[prmognt34]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt38]           = CAT_Prioriteren;      PRM_subcat[prmpmgt38]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt38]           = CAT_Prioriteren;      PRM_subcat[prmognt38]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt61]           = CAT_Prioriteren;      PRM_subcat[prmpmgt61]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt61]           = CAT_Prioriteren;      PRM_subcat[prmognt61]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm61]           = CAT_Prioriteren;      PRM_subcat[prmnofm61]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov61]          = CAT_Prioriteren;      PRM_subcat[prmmgcov61]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov61]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov61]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg61]          = CAT_Prioriteren;      PRM_subcat[prmohpmg61]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt62]           = CAT_Prioriteren;      PRM_subcat[prmpmgt62]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt62]           = CAT_Prioriteren;      PRM_subcat[prmognt62]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm62]           = CAT_Prioriteren;      PRM_subcat[prmnofm62]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov62]          = CAT_Prioriteren;      PRM_subcat[prmmgcov62]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov62]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov62]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg62]          = CAT_Prioriteren;      PRM_subcat[prmohpmg62]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt67]           = CAT_Prioriteren;      PRM_subcat[prmpmgt67]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt67]           = CAT_Prioriteren;      PRM_subcat[prmognt67]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm67]           = CAT_Prioriteren;      PRM_subcat[prmnofm67]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov67]          = CAT_Prioriteren;      PRM_subcat[prmmgcov67]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov67]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov67]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg67]          = CAT_Prioriteren;      PRM_subcat[prmohpmg67]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt68]           = CAT_Prioriteren;      PRM_subcat[prmpmgt68]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt68]           = CAT_Prioriteren;      PRM_subcat[prmognt68]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm68]           = CAT_Prioriteren;      PRM_subcat[prmnofm68]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov68]          = CAT_Prioriteren;      PRM_subcat[prmmgcov68]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov68]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov68]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg68]          = CAT_Prioriteren;      PRM_subcat[prmohpmg68]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt82]           = CAT_Prioriteren;      PRM_subcat[prmpmgt82]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt82]           = CAT_Prioriteren;      PRM_subcat[prmognt82]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm82]           = CAT_Prioriteren;      PRM_subcat[prmnofm82]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov82]          = CAT_Prioriteren;      PRM_subcat[prmmgcov82]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov82]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov82]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg82]          = CAT_Prioriteren;      PRM_subcat[prmohpmg82]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt84]           = CAT_Prioriteren;      PRM_subcat[prmpmgt84]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt84]           = CAT_Prioriteren;      PRM_subcat[prmognt84]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm84]           = CAT_Prioriteren;      PRM_subcat[prmnofm84]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov84]          = CAT_Prioriteren;      PRM_subcat[prmmgcov84]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov84]         = CAT_Prioriteren;      PRM_subcat[prmpmgcov84]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg84]          = CAT_Prioriteren;      PRM_subcat[prmohpmg84]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto02bus]         = CAT_Prioriteren;      PRM_subcat[prmrto02bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg02bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg02bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg02bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg02bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx02bus]         = CAT_Prioriteren;      PRM_subcat[prmomx02bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat02bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat02bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio02bus]        = CAT_Prioriteren;      PRM_subcat[prmprio02bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto03bus]         = CAT_Prioriteren;      PRM_subcat[prmrto03bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg03bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg03bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg03bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg03bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx03bus]         = CAT_Prioriteren;      PRM_subcat[prmomx03bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat03bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat03bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio03bus]        = CAT_Prioriteren;      PRM_subcat[prmprio03bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto05bus]         = CAT_Prioriteren;      PRM_subcat[prmrto05bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg05bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg05bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg05bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg05bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx05bus]         = CAT_Prioriteren;      PRM_subcat[prmomx05bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat05bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat05bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio05bus]        = CAT_Prioriteren;      PRM_subcat[prmprio05bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto08bus]         = CAT_Prioriteren;      PRM_subcat[prmrto08bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg08bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg08bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg08bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg08bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx08bus]         = CAT_Prioriteren;      PRM_subcat[prmomx08bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat08bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat08bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio08bus]        = CAT_Prioriteren;      PRM_subcat[prmprio08bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto09bus]         = CAT_Prioriteren;      PRM_subcat[prmrto09bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg09bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg09bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg09bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg09bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx09bus]         = CAT_Prioriteren;      PRM_subcat[prmomx09bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat09bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat09bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio09bus]        = CAT_Prioriteren;      PRM_subcat[prmprio09bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto11bus]         = CAT_Prioriteren;      PRM_subcat[prmrto11bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg11bus]        = CAT_Prioriteren;      PRM_subcat[prmrtbg11bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg11bus]         = CAT_Prioriteren;      PRM_subcat[prmrtg11bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx11bus]         = CAT_Prioriteren;      PRM_subcat[prmomx11bus]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat11bus]      = CAT_Prioriteren;      PRM_subcat[prmvtgcat11bus]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio11bus]        = CAT_Prioriteren;      PRM_subcat[prmprio11bus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd02]         = CAT_Prioriteren;      PRM_subcat[prmpriohd02]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd02]          = CAT_Prioriteren;      PRM_subcat[prmrtohd02]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd02]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd02]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd02]          = CAT_Prioriteren;      PRM_subcat[prmrtghd02]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd03]         = CAT_Prioriteren;      PRM_subcat[prmpriohd03]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd03]          = CAT_Prioriteren;      PRM_subcat[prmrtohd03]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd03]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd03]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd03]          = CAT_Prioriteren;      PRM_subcat[prmrtghd03]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd05]         = CAT_Prioriteren;      PRM_subcat[prmpriohd05]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd05]          = CAT_Prioriteren;      PRM_subcat[prmrtohd05]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd05]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd05]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd05]          = CAT_Prioriteren;      PRM_subcat[prmrtghd05]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart05hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart05hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend05hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend05hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta05hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta05hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole05hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole05hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole05hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole05hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance05hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance05hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype05hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype05hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid05hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid05hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid05hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid05hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd08]         = CAT_Prioriteren;      PRM_subcat[prmpriohd08]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd08]          = CAT_Prioriteren;      PRM_subcat[prmrtohd08]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd08]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd08]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd08]          = CAT_Prioriteren;      PRM_subcat[prmrtghd08]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart08hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart08hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend08hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend08hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta08hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta08hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole08hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole08hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole08hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole08hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance08hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance08hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype08hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype08hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid08hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid08hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid08hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid08hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid08hd_2]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid08hd_2]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd09]         = CAT_Prioriteren;      PRM_subcat[prmpriohd09]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd09]          = CAT_Prioriteren;      PRM_subcat[prmrtohd09]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd09]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd09]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd09]          = CAT_Prioriteren;      PRM_subcat[prmrtghd09]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart09hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart09hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend09hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend09hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta09hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta09hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole09hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole09hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole09hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole09hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance09hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance09hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype09hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype09hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid09hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid09hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid09hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid09hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd11]         = CAT_Prioriteren;      PRM_subcat[prmpriohd11]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd11]          = CAT_Prioriteren;      PRM_subcat[prmrtohd11]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd11]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd11]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd11]          = CAT_Prioriteren;      PRM_subcat[prmrtghd11]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart11hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart11hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend11hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend11hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta11hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta11hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole11hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole11hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole11hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole11hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance11hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance11hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype11hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype11hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid11hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid11hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid11hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid11hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd61]         = CAT_Prioriteren;      PRM_subcat[prmpriohd61]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd61]          = CAT_Prioriteren;      PRM_subcat[prmrtohd61]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd61]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd61]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd61]          = CAT_Prioriteren;      PRM_subcat[prmrtghd61]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart61hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart61hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend61hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend61hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta61hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta61hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole61hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole61hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole61hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole61hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance61hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance61hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype61hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype61hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid61hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid61hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid61hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid61hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd62]         = CAT_Prioriteren;      PRM_subcat[prmpriohd62]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd62]          = CAT_Prioriteren;      PRM_subcat[prmrtohd62]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd62]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd62]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd62]          = CAT_Prioriteren;      PRM_subcat[prmrtghd62]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart62hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart62hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend62hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend62hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta62hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta62hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole62hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole62hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole62hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole62hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance62hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance62hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype62hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype62hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid62hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid62hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid62hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid62hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid62hd_2]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid62hd_2]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd67]         = CAT_Prioriteren;      PRM_subcat[prmpriohd67]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd67]          = CAT_Prioriteren;      PRM_subcat[prmrtohd67]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd67]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd67]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd67]          = CAT_Prioriteren;      PRM_subcat[prmrtghd67]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart67hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart67hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend67hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend67hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta67hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta67hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole67hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole67hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole67hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole67hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance67hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance67hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype67hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype67hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid67hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid67hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid67hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid67hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd68]         = CAT_Prioriteren;      PRM_subcat[prmpriohd68]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd68]          = CAT_Prioriteren;      PRM_subcat[prmrtohd68]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd68]         = CAT_Prioriteren;      PRM_subcat[prmrtbghd68]            = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd68]          = CAT_Prioriteren;      PRM_subcat[prmrtghd68]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstart68hd]     = CAT_Prioriteren;      PRM_subcat[prmrisstart68hd]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisend68hd]       = CAT_Prioriteren;      PRM_subcat[prmrisend68hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmriseta68hd]       = CAT_Prioriteren;      PRM_subcat[prmriseta68hd]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisrole68hd]      = CAT_Prioriteren;      PRM_subcat[prmrisrole68hd]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrissubrole68hd]   = CAT_Prioriteren;      PRM_subcat[prmrissubrole68hd]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisimportance68hd] = CAT_Prioriteren;      PRM_subcat[prmrisimportance68hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisstationtype68hd] = CAT_Prioriteren;      PRM_subcat[prmrisstationtype68hd]  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrisapproachid68hd] = CAT_Prioriteren;      PRM_subcat[prmrisapproachid68hd]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid68hd_1]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid68hd_1]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrislaneid68hd_2]  = CAT_Prioriteren;      PRM_subcat[prmrislaneid68hd_2]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvg1_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg1_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg2_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg3_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg4_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg5_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg6_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_02]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_02]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_03]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_03]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_05]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_05]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_08]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_08]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_09]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_09]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_11]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_11]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_21]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_21]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_22]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_22]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_24]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_24]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_26]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_26]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_28]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_28]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_61]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_61]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_62]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_62]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_67]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_67]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_68]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_68]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_81]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_81]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_82]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_82]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_84]           = CAT_Basisfuncties;    PRM_subcat[prmvg7_84]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmkrgd24_3]        = CAT_Basisfuncties;    PRM_subcat[prmmkrgd24_3]           = SUBCAT_Verlengen;
    PRM_cat[prmrgv]              = CAT_Signaalgroep;     PRM_subcat[prmrgv]                 = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmin_tcyclus]      = CAT_Signaalgroep;     PRM_subcat[prmmin_tcyclus]         = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmax_tcyclus]      = CAT_Signaalgroep;     PRM_subcat[prmmax_tcyclus]         = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_omhoog]       = CAT_Signaalgroep;     PRM_subcat[prmtvg_omhoog]          = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_omlaag]       = CAT_Signaalgroep;     PRM_subcat[prmtvg_omlaag]          = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_verschil]     = CAT_Signaalgroep;     PRM_subcat[prmtvg_verschil]        = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_npr_omlaag]   = CAT_Signaalgroep;     PRM_subcat[prmtvg_npr_omlaag]      = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_02]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_02]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_02]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_02]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_03]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_03]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_03]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_03]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_05]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_05]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_05]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_05]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_08]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_08]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_08]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_08]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_09]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_09]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_09]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_09]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_11]        = CAT_Signaalgroep;     PRM_subcat[prmmintvg_11]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_11]        = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_11]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvgvlog]       = CAT_TestenLoggen;     PRM_subcat[prmmaxtvgvlog]          = SUBCAT_Loggen;
    PRM_cat[prmmaxtfbvlog]       = CAT_TestenLoggen;     PRM_subcat[prmmaxtfbvlog]          = SUBCAT_Loggen;
    PRM_cat[prmmlfpr02]          = CAT_Module;           PRM_subcat[prmmlfpr02]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr03]          = CAT_Module;           PRM_subcat[prmmlfpr03]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr05]          = CAT_Module;           PRM_subcat[prmmlfpr05]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr08]          = CAT_Module;           PRM_subcat[prmmlfpr08]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr09]          = CAT_Module;           PRM_subcat[prmmlfpr09]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr11]          = CAT_Module;           PRM_subcat[prmmlfpr11]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr21]          = CAT_Module;           PRM_subcat[prmmlfpr21]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr22]          = CAT_Module;           PRM_subcat[prmmlfpr22]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr24]          = CAT_Module;           PRM_subcat[prmmlfpr24]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr26]          = CAT_Module;           PRM_subcat[prmmlfpr26]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr28]          = CAT_Module;           PRM_subcat[prmmlfpr28]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr31]          = CAT_Module;           PRM_subcat[prmmlfpr31]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr32]          = CAT_Module;           PRM_subcat[prmmlfpr32]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr33]          = CAT_Module;           PRM_subcat[prmmlfpr33]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr34]          = CAT_Module;           PRM_subcat[prmmlfpr34]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr38]          = CAT_Module;           PRM_subcat[prmmlfpr38]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr61]          = CAT_Module;           PRM_subcat[prmmlfpr61]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr62]          = CAT_Module;           PRM_subcat[prmmlfpr62]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr67]          = CAT_Module;           PRM_subcat[prmmlfpr67]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr68]          = CAT_Module;           PRM_subcat[prmmlfpr68]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr81]          = CAT_Module;           PRM_subcat[prmmlfpr81]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr82]          = CAT_Module;           PRM_subcat[prmmlfpr82]             = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr84]          = CAT_Module;           PRM_subcat[prmmlfpr84]             = SUBCAT_Plantijden;
    PRM_cat[prmaltg02]           = CAT_Module;           PRM_subcat[prmaltg02]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp02]           = CAT_Module;           PRM_subcat[prmaltp02]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg03]           = CAT_Module;           PRM_subcat[prmaltg03]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp03]           = CAT_Module;           PRM_subcat[prmaltp03]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg05]           = CAT_Module;           PRM_subcat[prmaltg05]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp05]           = CAT_Module;           PRM_subcat[prmaltp05]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg08]           = CAT_Module;           PRM_subcat[prmaltg08]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp08]           = CAT_Module;           PRM_subcat[prmaltp08]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg09]           = CAT_Module;           PRM_subcat[prmaltg09]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp09]           = CAT_Module;           PRM_subcat[prmaltp09]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg11]           = CAT_Module;           PRM_subcat[prmaltg11]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp11]           = CAT_Module;           PRM_subcat[prmaltp11]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg21]           = CAT_Module;           PRM_subcat[prmaltg21]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp21]           = CAT_Module;           PRM_subcat[prmaltp21]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg22]           = CAT_Module;           PRM_subcat[prmaltg22]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp22]           = CAT_Module;           PRM_subcat[prmaltp22]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg24]           = CAT_Module;           PRM_subcat[prmaltg24]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp2484]         = CAT_Module;           PRM_subcat[prmaltp2484]            = SUBCAT_Plantijden;
    PRM_cat[prmaltg26]           = CAT_Module;           PRM_subcat[prmaltg26]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp26]           = CAT_Module;           PRM_subcat[prmaltp26]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg28]           = CAT_Module;           PRM_subcat[prmaltg28]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp28]           = CAT_Module;           PRM_subcat[prmaltp28]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg31]           = CAT_Module;           PRM_subcat[prmaltg31]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp31]           = CAT_Module;           PRM_subcat[prmaltp31]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg32]           = CAT_Module;           PRM_subcat[prmaltg32]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp32]           = CAT_Module;           PRM_subcat[prmaltp32]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg33]           = CAT_Module;           PRM_subcat[prmaltg33]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp33]           = CAT_Module;           PRM_subcat[prmaltp33]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg34]           = CAT_Module;           PRM_subcat[prmaltg34]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp34]           = CAT_Module;           PRM_subcat[prmaltp34]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg38]           = CAT_Module;           PRM_subcat[prmaltg38]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp38]           = CAT_Module;           PRM_subcat[prmaltp38]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg61]           = CAT_Module;           PRM_subcat[prmaltg61]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp61]           = CAT_Module;           PRM_subcat[prmaltp61]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg62]           = CAT_Module;           PRM_subcat[prmaltg62]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp62]           = CAT_Module;           PRM_subcat[prmaltp62]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg67]           = CAT_Module;           PRM_subcat[prmaltg67]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp67]           = CAT_Module;           PRM_subcat[prmaltp67]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg68]           = CAT_Module;           PRM_subcat[prmaltg68]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp68]           = CAT_Module;           PRM_subcat[prmaltp68]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg81]           = CAT_Module;           PRM_subcat[prmaltg81]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp81]           = CAT_Module;           PRM_subcat[prmaltp81]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg82]           = CAT_Module;           PRM_subcat[prmaltg82]              = SUBCAT_Plantijden;
    PRM_cat[prmaltp82]           = CAT_Module;           PRM_subcat[prmaltp82]              = SUBCAT_Plantijden;
    PRM_cat[prmaltg84]           = CAT_Module;           PRM_subcat[prmaltg84]              = SUBCAT_Plantijden;
    PRM_cat[prmminwtv]           = CAT_Informeren;       PRM_subcat[prmminwtv]              = SUBCAT_Wachttijdvoorspeller;
    PRM_cat[prmwtvnhaltmax]      = CAT_Informeren;       PRM_subcat[prmwtvnhaltmax]         = SUBCAT_Wachttijdvoorspeller;
    PRM_cat[prmwtvnhaltmin]      = CAT_Informeren;       PRM_subcat[prmwtvnhaltmin]         = SUBCAT_Wachttijdvoorspeller;
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    PRM_cat[prmtestdsivert]      = CAT_Prioriteren;      PRM_subcat[prmtestdsivert]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmtestdsilyn]       = CAT_Prioriteren;      PRM_subcat[prmtestdsilyn]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmtestdsicat]       = CAT_Prioriteren;      PRM_subcat[prmtestdsicat]          = SUBCAT_OpenbaarVervoer;
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
    PRML[ML3][fc67] = PRIMAIR;

    PRML[ML4][fc11] = PRIMAIR;
    PRML[ML4][fc26] = PRIMAIR;


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
    IS_type[d09_3] = DVER_type;
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
    IS_type[d81_1] = DKOP_type;
    IS_type[dk81] = DK_type;
    IS_type[d82_1] = DKOP_type;
    IS_type[dk82] = DK_type;
    IS_type[d84_1] = DKOP_type;
    IS_type[dk84] = DK_type;
#ifndef NO_CVN_50
    IS_type[dopt02] = DSI_type;
    IS_type[dopt05] = DSI_type;
    IS_type[dopt08] = DSI_type;
    IS_type[dopt11] = DSI_type;
#else
    IS_type[dopt02] = DS_type;
    IS_type[dopt05] = DS_type;
    IS_type[dopt08] = DS_type;
    IS_type[dopt11] = DS_type;
#endif

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

    /* Multivalente ingangen */
#if !defined NO_VLOG_300
    US_type[uswtv21] = USM_type;
    US_type[uswtv22] = USM_type;
    US_type[uswtv24] = USM_type;
    US_type[uswtv26] = USM_type;
    US_type[uswtv28] = USM_type;
    US_type[uswtv81] = USM_type;
    US_type[uswtv82] = USM_type;
    US_type[uswtv84] = USM_type;
    US_type[usisgtijd02] = USM_type;
    US_type[usisgtijd03] = USM_type;
    US_type[usisgtijd05] = USM_type;
    US_type[usisgtijd08] = USM_type;
    US_type[usisgtijd09] = USM_type;
    US_type[usisgtijd11] = USM_type;
    US_type[usisgtijd21] = USM_type;
    US_type[usisgtijd22] = USM_type;
    US_type[usisgtijd24] = USM_type;
    US_type[usisgtijd26] = USM_type;
    US_type[usisgtijd28] = USM_type;
    US_type[usisgtijd31] = USM_type;
    US_type[usisgtijd32] = USM_type;
    US_type[usisgtijd33] = USM_type;
    US_type[usisgtijd34] = USM_type;
    US_type[usisgtijd38] = USM_type;
    US_type[usisgtijd61] = USM_type;
    US_type[usisgtijd62] = USM_type;
    US_type[usisgtijd67] = USM_type;
    US_type[usisgtijd68] = USM_type;
    US_type[usisgtijd81] = USM_type;
    US_type[usisgtijd82] = USM_type;
    US_type[usisgtijd84] = USM_type;
#endif /* NO_VLOG_300 */

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
    D_code[d09_1] = "091";
    D_code[d09_2] = "092";
    D_code[d09_3] = "093";
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
    D_code[d81_1] = "811";
    D_code[dk81] = "812";
    D_code[d82_1] = "821";
    D_code[dk82] = "822";
    D_code[d84_1] = "8410";
    D_code[dk84] = "8401";
#endif

    #include "123456tab.add"
}
