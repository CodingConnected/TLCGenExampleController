/* REGEL INSTELLINGEN */
/* ------------------ */

/* Definieer functie tbv tijden halfstar */
void signaalplan_instellingen(void);

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456tab.c
      CCOL:   12.0
    TLCGEN:   12.4.0.18
   CCOLGEN:   12.4.0.18
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
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
    #include "tx_synch.h"
    #include "plevar.h"
    #include "halfstar.h"
    #include "category_definition.c"

    mulv FC_type[FCMAX];
    extern mulv FK_type[FCMAX][FCMAX];

    #include "starvar.h" /* Variabelen t.b.v. star regelen */

#include "isgfunc.h" /* Interstartgroenfuncties */

#ifdef SUMO
    typedef struct sumoDetStruct {
    	char SumoNamen[3][32];
    	char Selectief;
    } SUMODET;
    SUMODET SUMODetectors[DPMAX];
    int SUMOIds[44];
    int isumo;
#endif /* #ifdef SUMO */


extern mulv itvgmaxprm[]; /* fasecycli met max. verlenggroen parameter (gedeclareerd in reg.c) */


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
        MONFC_def   = 1023;
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
    TNL_type[fc22][fc21] = TNL_EG;
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

    FK_type[fc22][fc02] = FK_EG;
    FK_type[fc22][fc03] = FK_EG;

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
    US_code[ussegm1]              = "segm1";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm2]              = "segm2";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm3]              = "segm3";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm4]              = "segm4";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm5]              = "segm5";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm6]              = "segm6";                                             /* Aansturing segmenten display                                                */
    US_code[ussegm7]              = "segm7";                                             /* Aansturing segmenten display                                                */
    US_code[usML1]                = "ML1";                                               /* Verklikken actief zijn ML1                                                  */
    US_code[usML2]                = "ML2";                                               /* Verklikken actief zijn ML2                                                  */
    US_code[usML3]                = "ML3";                                               /* Verklikken actief zijn ML3                                                  */
    US_code[usML4]                = "ML4";                                               /* Verklikken actief zijn ML4                                                  */
    US_code[usML5]                = "ML5";                                               /* Verklikken actief zijn ML5                                                  */
    US_code[usincontrol]          = "incontrol";                                         /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt                     */
    US_code[usnocontrol]          = "nocontrol";                                         /* Verklikken of applicatie niet in staat is te regelen                        */
    US_code[usFile68af]           = "File68af";                                          /* File ingreep File68af actief                                                */
    US_code[usplact]              = "plact";                                             /* Signaalplan regelen actief                                                  */
    US_code[uskpact]              = "kpact";                                             /* Koppeling signaalplan regelen actief                                        */
    US_code[usmlact]              = "mlact";                                             /* Module regelen actief                                                       */
    US_code[usmlpl]               = "mlpl";                                              /* ML tijdens VA of PL tijdens halfstar bedrijf                                */
    US_code[ustxtimer]            = "txtimer";                                           /* TX_timer tijdens halfstar bedrijf                                           */
    US_code[usklok]               = "klok";                                              /* Programma door klok bepaald                                                 */
    US_code[ushand]               = "hand";                                              /* Aansturing handmatig aangepast                                              */
    US_code[usPL1]                = "PL1";                                               /* Plan PL1 actief                                                             */
    US_code[usPL2]                = "PL2";                                               /* Plan PL2 actief                                                             */
    US_code[usPL3]                = "PL3";                                               /* Plan PL3 actief                                                             */
    US_code[usmaster]             = "master";                                            /* Master bepaalt aansturing                                                   */
    US_code[usslave]              = "slave";                                             /* Slave bepaalt aansturing                                                    */
    US_code[usin654321leven]      = "in654321leven";                                     /* levenssignaal 654321 in                                                     */
    US_code[usin654321kpuls]      = "in654321kpuls";                                     /* koppelpuls 654321 in                                                        */
    US_code[usin654321pervar]     = "in654321pervar";                                    /* Periode VA regelen 654321 in                                                */
    US_code[usin654321perarh]     = "in654321perarh";                                    /* Periode alternatieven voor hoofdrichtingen 654321 in                        */
    US_code[usin654321PL1]        = "in654321PL1";                                       /* Plan PL1 actief 654321 in                                                   */
    US_code[usin654321PL2]        = "in654321PL2";                                       /* Plan PL2 actief 654321 in                                                   */
    US_code[usin654321PL3]        = "in654321PL3";                                       /* Plan PL3 actief 654321 in                                                   */
    US_code[usuit654321leven]     = "uit654321leven";                                    /* levenssignaal 654321 uit                                                    */
    US_code[usuit654321syncok]    = "uit654321syncok";                                   /* synchroon 654321 uit                                                        */
    US_code[usuit654321txsok]     = "uit654321txsok";                                    /* txs ok 654321 uit                                                           */
    US_code[usovtevroeg02karbus]  = "ovtevroeg02karbus";                                 /* Voorste OV voertuig bij 02 te vroeg Bus                                     */
    US_code[usovoptijd02karbus]   = "ovoptijd02karbus";                                  /* Voorste OV voertuig bij 02 op tijd Bus                                      */
    US_code[usovtelaat02karbus]   = "ovtelaat02karbus";                                  /* Voorste OV voertuig bij 02 te laat Bus                                      */
    US_code[usovtevroeg03karbus]  = "ovtevroeg03karbus";                                 /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    US_code[usovoptijd03karbus]   = "ovoptijd03karbus";                                  /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    US_code[usovtelaat03karbus]   = "ovtelaat03karbus";                                  /* Voorste OV voertuig bij 03 te laat Bus                                      */
    US_code[usovtevroeg05karbus]  = "ovtevroeg05karbus";                                 /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    US_code[usovoptijd05karbus]   = "ovoptijd05karbus";                                  /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    US_code[usovtelaat05karbus]   = "ovtelaat05karbus";                                  /* Voorste OV voertuig bij 05 te laat Bus                                      */
    US_code[usovtevroeg08karbus]  = "ovtevroeg08karbus";                                 /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    US_code[usovoptijd08karbus]   = "ovoptijd08karbus";                                  /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    US_code[usovtelaat08karbus]   = "ovtelaat08karbus";                                  /* Voorste OV voertuig bij 08 te laat Bus                                      */
    US_code[usovtevroeg09karbus]  = "ovtevroeg09karbus";                                 /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    US_code[usovoptijd09karbus]   = "ovoptijd09karbus";                                  /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    US_code[usovtelaat09karbus]   = "ovtelaat09karbus";                                  /* Voorste OV voertuig bij 09 te laat Bus                                      */
    US_code[usovtevroeg11karbus]  = "ovtevroeg11karbus";                                 /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    US_code[usovoptijd11karbus]   = "ovoptijd11karbus";                                  /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    US_code[usovtelaat11karbus]   = "ovtelaat11karbus";                                  /* Voorste OV voertuig bij 11 te laat Bus                                      */
    US_code[usovtevroeg61karbus]  = "ovtevroeg61karbus";                                 /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    US_code[usovoptijd61karbus]   = "ovoptijd61karbus";                                  /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    US_code[usovtelaat61karbus]   = "ovtelaat61karbus";                                  /* Voorste OV voertuig bij 61 te laat Bus                                      */
    US_code[usovtevroeg62karbus]  = "ovtevroeg62karbus";                                 /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    US_code[usovoptijd62karbus]   = "ovoptijd62karbus";                                  /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    US_code[usovtelaat62karbus]   = "ovtelaat62karbus";                                  /* Voorste OV voertuig bij 62 te laat Bus                                      */
    US_code[usovtevroeg67karbus]  = "ovtevroeg67karbus";                                 /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    US_code[usovoptijd67karbus]   = "ovoptijd67karbus";                                  /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    US_code[usovtelaat67karbus]   = "ovtelaat67karbus";                                  /* Voorste OV voertuig bij 67 te laat Bus                                      */
    US_code[usovtevroeg68karbus]  = "ovtevroeg68karbus";                                 /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    US_code[usovoptijd68karbus]   = "ovoptijd68karbus";                                  /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    US_code[usovtelaat68karbus]   = "ovtelaat68karbus";                                  /* Voorste OV voertuig bij 68 te laat Bus                                      */
    US_code[usmaxwt]              = "maxwt";                                             /* Verklikken maximale wachttijd overschreden                                  */
    US_code[uskarmelding]         = "karmelding";                                        /* Verklikken ontvangst melding KAR                                            */
    US_code[uskarog]              = "karog";                                             /* Verklikken ondergedrag KAR                                                  */
    US_code[usovinm02karbus]      = "ovinm02karbus";                                     /* Verklikken inmelding OV fase 02                                             */
    US_code[usovinm03karbus]      = "ovinm03karbus";                                     /* Verklikken inmelding OV fase 03                                             */
    US_code[usovinm05karbus]      = "ovinm05karbus";                                     /* Verklikken inmelding OV fase 05                                             */
    US_code[usovinm08karbus]      = "ovinm08karbus";                                     /* Verklikken inmelding OV fase 08                                             */
    US_code[usovinm09karbus]      = "ovinm09karbus";                                     /* Verklikken inmelding OV fase 09                                             */
    US_code[usovinm11karbus]      = "ovinm11karbus";                                     /* Verklikken inmelding OV fase 11                                             */
    US_code[usovinm22fiets]       = "ovinm22fiets";                                      /* Verklikken inmelding OV fase 22                                             */
    US_code[usovinm28fiets]       = "ovinm28fiets";                                      /* Verklikken inmelding OV fase 28                                             */
    US_code[usovinm61karbus]      = "ovinm61karbus";                                     /* Verklikken inmelding OV fase 61                                             */
    US_code[usovinm62karbus]      = "ovinm62karbus";                                     /* Verklikken inmelding OV fase 62                                             */
    US_code[usovinm67karbus]      = "ovinm67karbus";                                     /* Verklikken inmelding OV fase 67                                             */
    US_code[usovinm68karbus]      = "ovinm68karbus";                                     /* Verklikken inmelding OV fase 68                                             */
    US_code[ushdinm02]            = "hdinm02";                                           /* Verklikken inmelding HD fase 02                                             */
    US_code[ushdinm03]            = "hdinm03";                                           /* Verklikken inmelding HD fase 03                                             */
    US_code[ushdinm05]            = "hdinm05";                                           /* Verklikken inmelding HD fase 05                                             */
    US_code[ushdinm08]            = "hdinm08";                                           /* Verklikken inmelding HD fase 08                                             */
    US_code[ushdinm09]            = "hdinm09";                                           /* Verklikken inmelding HD fase 09                                             */
    US_code[ushdinm11]            = "hdinm11";                                           /* Verklikken inmelding HD fase 11                                             */
    US_code[ushdinm61]            = "hdinm61";                                           /* Verklikken inmelding HD fase 61                                             */
    US_code[ushdinm62]            = "hdinm62";                                           /* Verklikken inmelding HD fase 62                                             */
    US_code[ushdinm67]            = "hdinm67";                                           /* Verklikken inmelding HD fase 67                                             */
    US_code[ushdinm68]            = "hdinm68";                                           /* Verklikken inmelding HD fase 68                                             */
    US_code[uspelinKOP02]         = "pelinKOP02";                                        /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    US_code[usper1]               = "per1";                                              /* Periode Reserve actief                                                      */
    US_code[usperoFietsprio1]     = "peroFietsprio1";                                    /* Periode actief                                                              */
    US_code[usperoFietsprio2]     = "peroFietsprio2";                                    /* Periode actief                                                              */
    US_code[usperDaluren_werkdag] = "perDaluren_werkdag";                                /* Periode actief                                                              */
    US_code[usperDaluren_weekend] = "perDaluren_weekend";                                /* Periode actief                                                              */
    US_code[usperOerdag_werkdag]  = "perOerdag_werkdag";                                 /* Periode actief                                                              */
    US_code[usper2]               = "per2";                                              /* Periode Dag periode actief                                                  */
    US_code[usper3]               = "per3";                                              /* Periode Ochtendspits actief                                                 */
    US_code[usper4]               = "per4";                                              /* Periode Avondspits actief                                                   */
    US_code[usper5]               = "per5";                                              /* Periode Koopavond actief                                                    */
    US_code[usper6]               = "per6";                                              /* Periode Weekend actief                                                      */
    US_code[usper7]               = "per7";                                              /* Periode Reserve actief                                                      */
    US_code[usptp_ptp123456oke]   = "ptp_ptp123456oke";                                  /* Verklikken PTP oke ptp123456                                                */
    US_code[usptp_ptp123456err]   = "ptp_ptp123456err";                                  /* Verklikken PTP error ptp123456                                              */
    US_code[usrgv]                = "rgv";                                               /* Verklikken actief zijn RoBuGrover                                           */
    US_code[uswtv24]              = "wtv24";                                             /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    US_code[uswtk21]              = "wtk21";                                             /* Aansturing waitsignaal detector k21                                         */
    US_code[uswtk22]              = "wtk22";                                             /* Aansturing waitsignaal detector k22                                         */
    US_code[uswtk24]              = "wtk24";                                             /* Aansturing waitsignaal detector k24                                         */
    US_code[uswtk26]              = "wtk26";                                             /* Aansturing waitsignaal detector k26                                         */
    US_code[uswtk28]              = "wtk28";                                             /* Aansturing waitsignaal detector k28                                         */
    US_code[uswtk31a]             = "wtk31a";                                            /* Aansturing waitsignaal detector k31a                                        */
    US_code[uswtk31b]             = "wtk31b";                                            /* Aansturing waitsignaal detector k31b                                        */
    US_code[uswtk32a]             = "wtk32a";                                            /* Aansturing waitsignaal detector k32a                                        */
    US_code[uswtk32b]             = "wtk32b";                                            /* Aansturing waitsignaal detector k32b                                        */
    US_code[uswtk33a]             = "wtk33a";                                            /* Aansturing waitsignaal detector k33a                                        */
    US_code[uswtk33b]             = "wtk33b";                                            /* Aansturing waitsignaal detector k33b                                        */
    US_code[uswtk34a]             = "wtk34a";                                            /* Aansturing waitsignaal detector k34a                                        */
    US_code[uswtk34b]             = "wtk34b";                                            /* Aansturing waitsignaal detector k34b                                        */
    US_code[uswtk38a]             = "wtk38a";                                            /* Aansturing waitsignaal detector k38a                                        */
    US_code[uswtk38b]             = "wtk38b";                                            /* Aansturing waitsignaal detector k38b                                        */
    US_code[uswtk81]              = "wtk81";                                             /* Aansturing waitsignaal detector k81                                         */
    US_code[uswtk82]              = "wtk82";                                             /* Aansturing waitsignaal detector k82                                         */
    US_code[uswtk84]              = "wtk84";                                             /* Aansturing waitsignaal detector k84                                         */
    US_code[usstarprogwissel]     = "starprogwissel";                                    /* Verklikken actief zijn wisselen naar star programma                         */
    US_code[usstar01]             = "star01";                                            /* Star programma star01 actief                                                */
    US_code[usstar02]             = "star02";                                            /* Star programma star02 actief                                                */
    US_code[usisgtijd02]          = "isgtijd02";                                         /* Verklikken PRIO 02 tbv interfunc                                            */
    US_code[usisgtijd03]          = "isgtijd03";                                         /* Verklikken PRIO 03 tbv interfunc                                            */
    US_code[usisgtijd05]          = "isgtijd05";                                         /* Verklikken PRIO 05 tbv interfunc                                            */
    US_code[usisgtijd08]          = "isgtijd08";                                         /* Verklikken PRIO 08 tbv interfunc                                            */
    US_code[usisgtijd09]          = "isgtijd09";                                         /* Verklikken PRIO 09 tbv interfunc                                            */
    US_code[usisgtijd11]          = "isgtijd11";                                         /* Verklikken PRIO 11 tbv interfunc                                            */
    US_code[usisgtijd21]          = "isgtijd21";                                         /* Verklikken PRIO 21 tbv interfunc                                            */
    US_code[usisgtijd22]          = "isgtijd22";                                         /* Verklikken PRIO 22 tbv interfunc                                            */
    US_code[usisgtijd24]          = "isgtijd24";                                         /* Verklikken PRIO 24 tbv interfunc                                            */
    US_code[usisgtijd26]          = "isgtijd26";                                         /* Verklikken PRIO 26 tbv interfunc                                            */
    US_code[usisgtijd28]          = "isgtijd28";                                         /* Verklikken PRIO 28 tbv interfunc                                            */
    US_code[usisgtijd31]          = "isgtijd31";                                         /* Verklikken PRIO 31 tbv interfunc                                            */
    US_code[usisgtijd32]          = "isgtijd32";                                         /* Verklikken PRIO 32 tbv interfunc                                            */
    US_code[usisgtijd33]          = "isgtijd33";                                         /* Verklikken PRIO 33 tbv interfunc                                            */
    US_code[usisgtijd34]          = "isgtijd34";                                         /* Verklikken PRIO 34 tbv interfunc                                            */
    US_code[usisgtijd38]          = "isgtijd38";                                         /* Verklikken PRIO 38 tbv interfunc                                            */
    US_code[usisgtijd61]          = "isgtijd61";                                         /* Verklikken PRIO 61 tbv interfunc                                            */
    US_code[usisgtijd62]          = "isgtijd62";                                         /* Verklikken PRIO 62 tbv interfunc                                            */
    US_code[usisgtijd67]          = "isgtijd67";                                         /* Verklikken PRIO 67 tbv interfunc                                            */
    US_code[usisgtijd68]          = "isgtijd68";                                         /* Verklikken PRIO 68 tbv interfunc                                            */
    US_code[usisgtijd81]          = "isgtijd81";                                         /* Verklikken PRIO 81 tbv interfunc                                            */
    US_code[usisgtijd82]          = "isgtijd82";                                         /* Verklikken PRIO 82 tbv interfunc                                            */
    US_code[usisgtijd84]          = "isgtijd84";                                         /* Verklikken PRIO 84 tbv interfunc                                            */

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
    D_code[ddummykarin02karbus]  = "dummykarin02karbus";  
    D_code[ddummykarin03karbus]  = "dummykarin03karbus";  
    D_code[ddummykarin05karbus]  = "dummykarin05karbus";  
    D_code[ddummykarin08karbus]  = "dummykarin08karbus";  
    D_code[ddummykarin09karbus]  = "dummykarin09karbus";  
    D_code[ddummykarin11karbus]  = "dummykarin11karbus";  
    D_code[ddummykarin61karbus]  = "dummykarin61karbus";  
    D_code[ddummykarin62karbus]  = "dummykarin62karbus";  
    D_code[ddummykarin67karbus]  = "dummykarin67karbus";  
    D_code[ddummykarin68karbus]  = "dummykarin68karbus";  
    D_code[ddummykaruit02karbus] = "dummykaruit02karbus"; 
    D_code[ddummykaruit03karbus] = "dummykaruit03karbus"; 
    D_code[ddummykaruit05karbus] = "dummykaruit05karbus"; 
    D_code[ddummykaruit08karbus] = "dummykaruit08karbus"; 
    D_code[ddummykaruit09karbus] = "dummykaruit09karbus"; 
    D_code[ddummykaruit11karbus] = "dummykaruit11karbus"; 
    D_code[ddummykaruit61karbus] = "dummykaruit61karbus"; 
    D_code[ddummykaruit62karbus] = "dummykaruit62karbus"; 
    D_code[ddummykaruit67karbus] = "dummykaruit67karbus"; 
    D_code[ddummykaruit68karbus] = "dummykaruit68karbus"; 
    D_code[ddummyhdkarin02]      = "dummyhdkarin02";      
    D_code[ddummyhdkaruit02]     = "dummyhdkaruit02";     
    D_code[ddummyhdkarin03]      = "dummyhdkarin03";      
    D_code[ddummyhdkaruit03]     = "dummyhdkaruit03";     
    D_code[ddummyhdkarin05]      = "dummyhdkarin05";      
    D_code[ddummyhdkaruit05]     = "dummyhdkaruit05";     
    D_code[ddummyhdkarin08]      = "dummyhdkarin08";      
    D_code[ddummyhdkaruit08]     = "dummyhdkaruit08";     
    D_code[ddummyhdkarin09]      = "dummyhdkarin09";      
    D_code[ddummyhdkaruit09]     = "dummyhdkaruit09";     
    D_code[ddummyhdkarin11]      = "dummyhdkarin11";      
    D_code[ddummyhdkaruit11]     = "dummyhdkaruit11";     
    D_code[ddummyhdkarin61]      = "dummyhdkarin61";      
    D_code[ddummyhdkaruit61]     = "dummyhdkaruit61";     
    D_code[ddummyhdkarin62]      = "dummyhdkarin62";      
    D_code[ddummyhdkaruit62]     = "dummyhdkaruit62";     
    D_code[ddummyhdkarin67]      = "dummyhdkarin67";      
    D_code[ddummyhdkaruit67]     = "dummyhdkaruit67";     
    D_code[ddummyhdkarin68]      = "dummyhdkarin68";      
    D_code[ddummyhdkaruit68]     = "dummyhdkaruit68";     
#endif

/* overige ingangen */
/* ---------------- */
    IS_code[isfix] = "fix";                 /* Fixatie regeling */

/* hulp elementen */
/* -------------- */
    H_code[hopdrempelen08]       = "opdrempelen08";                                      /* Opdrempelen toepassen voor fase 08                                 */
    H_code[hgeendynhiaat08]      = "geendynhiaat08";                                     /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    H_code[hverleng_08_1a]       = "verleng_08_1a";                                      /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    H_code[hverleng_08_1b]       = "verleng_08_1b";                                      /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    H_code[hverleng_08_2a]       = "verleng_08_2a";                                      /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    H_code[hverleng_08_2b]       = "verleng_08_2b";                                      /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    H_code[hverleng_08_3a]       = "verleng_08_3a";                                      /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    H_code[hverleng_08_3b]       = "verleng_08_3b";                                      /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    H_code[hverleng_08_4a]       = "verleng_08_4a";                                      /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    H_code[hverleng_08_4b]       = "verleng_08_4b";                                      /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    H_code[hopdrempelen09]       = "opdrempelen09";                                      /* Opdrempelen toepassen voor fase 09                                 */
    H_code[hgeendynhiaat09]      = "geendynhiaat09";                                     /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    H_code[hverleng_09_1]        = "verleng_09_1";                                       /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    H_code[hverleng_09_2]        = "verleng_09_2";                                       /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    H_code[hverleng_09_3]        = "verleng_09_3";                                       /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    H_code[hopdrempelen11]       = "opdrempelen11";                                      /* Opdrempelen toepassen voor fase 11                                 */
    H_code[hgeendynhiaat11]      = "geendynhiaat11";                                     /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    H_code[hverleng_11_1]        = "verleng_11_1";                                       /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    H_code[hverleng_11_2]        = "verleng_11_2";                                       /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    H_code[hverleng_11_3]        = "verleng_11_3";                                       /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    H_code[hverleng_11_4]        = "verleng_11_4";                                       /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    H_code[hmadk31a]             = "madk31a";                                            /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    H_code[hmadk31b]             = "madk31b";                                            /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    H_code[hmadk32a]             = "madk32a";                                            /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    H_code[hmadk32b]             = "madk32b";                                            /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    H_code[hmadk33a]             = "madk33a";                                            /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    H_code[hmadk33b]             = "madk33b";                                            /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    H_code[hmadk34a]             = "madk34a";                                            /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    H_code[hmadk34b]             = "madk34b";                                            /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    H_code[hfileFile68af]        = "fileFile68af";                                       /* File File68af actief                                               */
    H_code[hfile68_9a]           = "file68_9a";                                          /* File 68_9a actief                                                  */
    H_code[hfile68_9b]           = "file68_9b";                                          /* File 68_9b actief                                                  */
    H_code[hafk08fileFile68af]   = "afk08fileFile68af";                                  /* Onthouden afkappen fase 08 bij start file ingreep                  */
    H_code[hafk11fileFile68af]   = "afk11fileFile68af";                                  /* Onthouden afkappen fase 11 bij start file ingreep                  */
    H_code[hfixatietegenh]       = "fixatietegenh";                                      /* Fixatie tegenhouden                                                */
    H_code[hplhd]                = "plhd";                                               /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    H_code[hplact]               = "plact";                                              /* Halfstar actief                                                    */
    H_code[hkpact]               = "kpact";                                              /* Koppeling tbv halfstar actief                                      */
    H_code[hmlact]               = "mlact";                                              /* Module regelen actief                                              */
    H_code[hpervar]              = "pervar";                                             /* Periode VA regelen                                                 */
    H_code[hperarh]              = "perarh";                                             /* Alternatieven voor hoofdrichtingen periode                         */
    H_code[homschtegenh]         = "omschtegenh";                                        /* Bijhouden of omschakelen is toegestaan                             */
    H_code[hleven]               = "leven";                                              /* Bijhouden actief zijn levensignaal                                 */
    H_code[hnleg0262]            = "nleg0262";                                           /* Hulpelement naloop EG van 02 naar 62                               */
    H_code[hnla02_1a]            = "nla02_1a";                                           /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    H_code[hnla02_1b]            = "nla02_1b";                                           /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    H_code[hnleg0868]            = "nleg0868";                                           /* Hulpelement naloop EG van 08 naar 68                               */
    H_code[hnla08_1a]            = "nla08_1a";                                           /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    H_code[hnla08_1b]            = "nla08_1b";                                           /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    H_code[hnleg1168]            = "nleg1168";                                           /* Hulpelement naloop EG van 11 naar 68                               */
    H_code[hnla11_1]             = "nla11_1";                                            /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    H_code[hnleg2221]            = "nleg2221";                                           /* Hulpelement naloop EG van 22 naar 21                               */
    H_code[hnla22_1]             = "nla22_1";                                            /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    H_code[hnlsg3132]            = "nlsg3132";                                           /* Hulpelement naloop SG van 31 naar 32                               */
    H_code[hnlak31a]             = "nlak31a";                                            /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    H_code[hnlsg3231]            = "nlsg3231";                                           /* Hulpelement naloop SG van 32 naar 31                               */
    H_code[hnlak32a]             = "nlak32a";                                            /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    H_code[hnlsg3334]            = "nlsg3334";                                           /* Hulpelement naloop SG van 33 naar 34                               */
    H_code[hnlak33a]             = "nlak33a";                                            /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    H_code[hnlsg3433]            = "nlsg3433";                                           /* Hulpelement naloop SG van 34 naar 33                               */
    H_code[hnlak34a]             = "nlak34a";                                            /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    H_code[hnleg8281]            = "nleg8281";                                           /* Hulpelement naloop EG van 82 naar 81                               */
    H_code[hnla82_1]             = "nla82_1";                                            /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    H_code[hstp02karbus]         = "stp02karbus";                                        /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    H_code[hstp03karbus]         = "stp03karbus";                                        /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    H_code[hstp05karbus]         = "stp05karbus";                                        /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    H_code[hstp08karbus]         = "stp08karbus";                                        /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    H_code[hstp09karbus]         = "stp09karbus";                                        /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    H_code[hstp11karbus]         = "stp11karbus";                                        /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    H_code[hstp61karbus]         = "stp61karbus";                                        /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    H_code[hstp62karbus]         = "stp62karbus";                                        /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    H_code[hstp67karbus]         = "stp67karbus";                                        /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    H_code[hstp68karbus]         = "stp68karbus";                                        /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    H_code[hprio02karbus]        = "prio02karbus";                                       /* Bijhouden actief zijn prioriteit fase 02                           */
    H_code[hprioin02karbus]      = "prioin02karbus";                                     /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02karbus]     = "priouit02karbus";                                    /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprioin02karbuskar]   = "prioin02karbuskar";                                  /* Prioriteit inmelding fase 02 Bus                                   */
    H_code[hpriouit02karbuskar]  = "priouit02karbuskar";                                 /* Prioriteit uitmelding 02 Bus                                       */
    H_code[hprio03karbus]        = "prio03karbus";                                       /* Bijhouden actief zijn prioriteit fase 03                           */
    H_code[hprioin03karbus]      = "prioin03karbus";                                     /* Prioriteit inmelding fase 03 Bus                                   */
    H_code[hpriouit03karbus]     = "priouit03karbus";                                    /* Prioriteit uitmelding 03 Bus                                       */
    H_code[hprioin03karbuskar]   = "prioin03karbuskar";                                  /* Prioriteit inmelding fase 03 Bus                                   */
    H_code[hpriouit03karbuskar]  = "priouit03karbuskar";                                 /* Prioriteit uitmelding 03 Bus                                       */
    H_code[hprio05karbus]        = "prio05karbus";                                       /* Bijhouden actief zijn prioriteit fase 05                           */
    H_code[hprioin05karbus]      = "prioin05karbus";                                     /* Prioriteit inmelding fase 05 Bus                                   */
    H_code[hpriouit05karbus]     = "priouit05karbus";                                    /* Prioriteit uitmelding 05 Bus                                       */
    H_code[hprioin05karbuskar]   = "prioin05karbuskar";                                  /* Prioriteit inmelding fase 05 Bus                                   */
    H_code[hpriouit05karbuskar]  = "priouit05karbuskar";                                 /* Prioriteit uitmelding 05 Bus                                       */
    H_code[hprio08karbus]        = "prio08karbus";                                       /* Bijhouden actief zijn prioriteit fase 08                           */
    H_code[hprioin08karbus]      = "prioin08karbus";                                     /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08karbus]     = "priouit08karbus";                                    /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprioin08karbuskar]   = "prioin08karbuskar";                                  /* Prioriteit inmelding fase 08 Bus                                   */
    H_code[hpriouit08karbuskar]  = "priouit08karbuskar";                                 /* Prioriteit uitmelding 08 Bus                                       */
    H_code[hprio09karbus]        = "prio09karbus";                                       /* Bijhouden actief zijn prioriteit fase 09                           */
    H_code[hprioin09karbus]      = "prioin09karbus";                                     /* Prioriteit inmelding fase 09 Bus                                   */
    H_code[hpriouit09karbus]     = "priouit09karbus";                                    /* Prioriteit uitmelding 09 Bus                                       */
    H_code[hprioin09karbuskar]   = "prioin09karbuskar";                                  /* Prioriteit inmelding fase 09 Bus                                   */
    H_code[hpriouit09karbuskar]  = "priouit09karbuskar";                                 /* Prioriteit uitmelding 09 Bus                                       */
    H_code[hprio11karbus]        = "prio11karbus";                                       /* Bijhouden actief zijn prioriteit fase 11                           */
    H_code[hprioin11karbus]      = "prioin11karbus";                                     /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11karbus]     = "priouit11karbus";                                    /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprioin11karbuskar]   = "prioin11karbuskar";                                  /* Prioriteit inmelding fase 11 Bus                                   */
    H_code[hpriouit11karbuskar]  = "priouit11karbuskar";                                 /* Prioriteit uitmelding 11 Bus                                       */
    H_code[hprio22fiets]         = "prio22fiets";                                        /* Bijhouden actief zijn prioriteit fase 22                           */
    H_code[hprioin22fiets]       = "prioin22fiets";                                      /* Prioriteit inmelding fase 22 Fiets                                 */
    H_code[hpriouit22fiets]      = "priouit22fiets";                                     /* Prioriteit uitmelding 22 Fiets                                     */
    H_code[hprioin22fietsfiets]  = "prioin22fietsfiets";                                 /* Prioriteit inmelding fase 22 Fiets                                 */
    H_code[hpriouit22fietsfiets] = "priouit22fietsfiets";                                /* Prioriteit uitmelding 22 Fiets                                     */
    H_code[hprio28fiets]         = "prio28fiets";                                        /* Bijhouden actief zijn prioriteit fase 28                           */
    H_code[hprioin28fiets]       = "prioin28fiets";                                      /* Prioriteit inmelding fase 28 Fiets                                 */
    H_code[hpriouit28fiets]      = "priouit28fiets";                                     /* Prioriteit uitmelding 28 Fiets                                     */
    H_code[hprioin28fietsfiets]  = "prioin28fietsfiets";                                 /* Prioriteit inmelding fase 28 Fiets                                 */
    H_code[hpriouit28fietsfiets] = "priouit28fietsfiets";                                /* Prioriteit uitmelding 28 Fiets                                     */
    H_code[hprio61karbus]        = "prio61karbus";                                       /* Bijhouden actief zijn prioriteit fase 61                           */
    H_code[hprioin61karbus]      = "prioin61karbus";                                     /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61karbus]     = "priouit61karbus";                                    /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprioin61karbuskar]   = "prioin61karbuskar";                                  /* Prioriteit inmelding fase 61 Bus                                   */
    H_code[hpriouit61karbuskar]  = "priouit61karbuskar";                                 /* Prioriteit uitmelding 61 Bus                                       */
    H_code[hprio62karbus]        = "prio62karbus";                                       /* Bijhouden actief zijn prioriteit fase 62                           */
    H_code[hprioin62karbus]      = "prioin62karbus";                                     /* Prioriteit inmelding fase 62 Bus                                   */
    H_code[hpriouit62karbus]     = "priouit62karbus";                                    /* Prioriteit uitmelding 62 Bus                                       */
    H_code[hprioin62karbuskar]   = "prioin62karbuskar";                                  /* Prioriteit inmelding fase 62 Bus                                   */
    H_code[hpriouit62karbuskar]  = "priouit62karbuskar";                                 /* Prioriteit uitmelding 62 Bus                                       */
    H_code[hprio67karbus]        = "prio67karbus";                                       /* Bijhouden actief zijn prioriteit fase 67                           */
    H_code[hprioin67karbus]      = "prioin67karbus";                                     /* Prioriteit inmelding fase 67 Bus                                   */
    H_code[hpriouit67karbus]     = "priouit67karbus";                                    /* Prioriteit uitmelding 67 Bus                                       */
    H_code[hprioin67karbuskar]   = "prioin67karbuskar";                                  /* Prioriteit inmelding fase 67 Bus                                   */
    H_code[hpriouit67karbuskar]  = "priouit67karbuskar";                                 /* Prioriteit uitmelding 67 Bus                                       */
    H_code[hprio68karbus]        = "prio68karbus";                                       /* Bijhouden actief zijn prioriteit fase 68                           */
    H_code[hprioin68karbus]      = "prioin68karbus";                                     /* Prioriteit inmelding fase 68 Bus                                   */
    H_code[hpriouit68karbus]     = "priouit68karbus";                                    /* Prioriteit uitmelding 68 Bus                                       */
    H_code[hprioin68karbuskar]   = "prioin68karbuskar";                                  /* Prioriteit inmelding fase 68 Bus                                   */
    H_code[hpriouit68karbuskar]  = "priouit68karbuskar";                                 /* Prioriteit uitmelding 68 Bus                                       */
    H_code[hhd02]                = "hd02";                                               /* Bijhouden aanwezigheid HD fase 02                                  */
    H_code[hhdin02]              = "hdin02";                                             /* HD inmelding 02                                                    */
    H_code[hhduit02]             = "hduit02";                                            /* HD uitmelding 02                                                   */
    H_code[hhdin02kar]           = "hdin02kar";                                          /* HD inmelding 02                                                    */
    H_code[hhduit02kar]          = "hduit02kar";                                         /* HD uitmelding 02                                                   */
    H_code[hhd03]                = "hd03";                                               /* Bijhouden aanwezigheid HD fase 03                                  */
    H_code[hhdin03]              = "hdin03";                                             /* HD inmelding 03                                                    */
    H_code[hhduit03]             = "hduit03";                                            /* HD uitmelding 03                                                   */
    H_code[hhdin03kar]           = "hdin03kar";                                          /* HD inmelding 03                                                    */
    H_code[hhduit03kar]          = "hduit03kar";                                         /* HD uitmelding 03                                                   */
    H_code[hhd05]                = "hd05";                                               /* Bijhouden aanwezigheid HD fase 05                                  */
    H_code[hhdin05]              = "hdin05";                                             /* HD inmelding 05                                                    */
    H_code[hhduit05]             = "hduit05";                                            /* HD uitmelding 05                                                   */
    H_code[hhdin05kar]           = "hdin05kar";                                          /* HD inmelding 05                                                    */
    H_code[hhduit05kar]          = "hduit05kar";                                         /* HD uitmelding 05                                                   */
    H_code[hhd08]                = "hd08";                                               /* Bijhouden aanwezigheid HD fase 08                                  */
    H_code[hhdin08]              = "hdin08";                                             /* HD inmelding 08                                                    */
    H_code[hhduit08]             = "hduit08";                                            /* HD uitmelding 08                                                   */
    H_code[hhdin08kar]           = "hdin08kar";                                          /* HD inmelding 08                                                    */
    H_code[hhduit08kar]          = "hduit08kar";                                         /* HD uitmelding 08                                                   */
    H_code[hhd09]                = "hd09";                                               /* Bijhouden aanwezigheid HD fase 09                                  */
    H_code[hhdin09]              = "hdin09";                                             /* HD inmelding 09                                                    */
    H_code[hhduit09]             = "hduit09";                                            /* HD uitmelding 09                                                   */
    H_code[hhdin09kar]           = "hdin09kar";                                          /* HD inmelding 09                                                    */
    H_code[hhduit09kar]          = "hduit09kar";                                         /* HD uitmelding 09                                                   */
    H_code[hhd11]                = "hd11";                                               /* Bijhouden aanwezigheid HD fase 11                                  */
    H_code[hhdin11]              = "hdin11";                                             /* HD inmelding 11                                                    */
    H_code[hhduit11]             = "hduit11";                                            /* HD uitmelding 11                                                   */
    H_code[hhdin11kar]           = "hdin11kar";                                          /* HD inmelding 11                                                    */
    H_code[hhduit11kar]          = "hduit11kar";                                         /* HD uitmelding 11                                                   */
    H_code[hhd61]                = "hd61";                                               /* Bijhouden aanwezigheid HD fase 61                                  */
    H_code[hhdin61]              = "hdin61";                                             /* HD inmelding 61                                                    */
    H_code[hhduit61]             = "hduit61";                                            /* HD uitmelding 61                                                   */
    H_code[hhdin61kar]           = "hdin61kar";                                          /* HD inmelding 61                                                    */
    H_code[hhduit61kar]          = "hduit61kar";                                         /* HD uitmelding 61                                                   */
    H_code[hhd62]                = "hd62";                                               /* Bijhouden aanwezigheid HD fase 62                                  */
    H_code[hhdin62]              = "hdin62";                                             /* HD inmelding 62                                                    */
    H_code[hhduit62]             = "hduit62";                                            /* HD uitmelding 62                                                   */
    H_code[hhdin62kar]           = "hdin62kar";                                          /* HD inmelding 62                                                    */
    H_code[hhduit62kar]          = "hduit62kar";                                         /* HD uitmelding 62                                                   */
    H_code[hhd67]                = "hd67";                                               /* Bijhouden aanwezigheid HD fase 67                                  */
    H_code[hhdin67]              = "hdin67";                                             /* HD inmelding 67                                                    */
    H_code[hhduit67]             = "hduit67";                                            /* HD uitmelding 67                                                   */
    H_code[hhdin67kar]           = "hdin67kar";                                          /* HD inmelding 67                                                    */
    H_code[hhduit67kar]          = "hduit67kar";                                         /* HD uitmelding 67                                                   */
    H_code[hhd68]                = "hd68";                                               /* Bijhouden aanwezigheid HD fase 68                                  */
    H_code[hhdin68]              = "hdin68";                                             /* HD inmelding 68                                                    */
    H_code[hhduit68]             = "hduit68";                                            /* HD uitmelding 68                                                   */
    H_code[hhdin68kar]           = "hdin68kar";                                          /* HD inmelding 68                                                    */
    H_code[hhduit68kar]          = "hduit68kar";                                         /* HD uitmelding 68                                                   */
    H_code[hpelinKOP02]          = "pelinKOP02";                                         /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    H_code[hpeltegenhKOP02]      = "peltegenhKOP02";                                     /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    H_code[hpkud68_1aKOP68_uit]  = "pkud68_1aKOP68_uit";                                 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    H_code[hpkud68_1bKOP68_uit]  = "pkud68_1bKOP68_uit";                                 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    H_code[hperiodFietsprio1]    = "periodFietsprio1";                                   /* Periode Fietsprio1 actief                                          */
    H_code[hperiodFietsprio2]    = "periodFietsprio2";                                   /* Periode Fietsprio2 actief                                          */
    H_code[hptp123456iks01]      = "ptp123456iks01";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks02]      = "ptp123456iks02";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks03]      = "ptp123456iks03";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks04]      = "ptp123456iks04";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks05]      = "ptp123456iks05";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks06]      = "ptp123456iks06";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks07]      = "ptp123456iks07";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks08]      = "ptp123456iks08";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks09]      = "ptp123456iks09";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks10]      = "ptp123456iks10";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks11]      = "ptp123456iks11";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks12]      = "ptp123456iks12";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks13]      = "ptp123456iks13";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks14]      = "ptp123456iks14";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks15]      = "ptp123456iks15";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456iks16]      = "ptp123456iks16";                                     /* Inkomende PTP signalen van kruising ptp123456                      */
    H_code[hptp123456uks01]      = "ptp123456uks01";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks02]      = "ptp123456uks02";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks03]      = "ptp123456uks03";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks04]      = "ptp123456uks04";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks05]      = "ptp123456uks05";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks06]      = "ptp123456uks06";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks07]      = "ptp123456uks07";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks08]      = "ptp123456uks08";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks09]      = "ptp123456uks09";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks10]      = "ptp123456uks10";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks11]      = "ptp123456uks11";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks12]      = "ptp123456uks12";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks13]      = "ptp123456uks13";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks14]      = "ptp123456uks14";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks15]      = "ptp123456uks15";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp123456uks16]      = "ptp123456uks16";                                     /* Uitgaande PTP signalen naar ptp123456                              */
    H_code[hptp_ptp123456oke]    = "ptp_ptp123456oke";                                   /* Onthouden PTP oke ptp123456                                        */
    H_code[hptp_ptp123456err]    = "ptp_ptp123456err";                                   /* Onthouden PTP error ptp123456                                      */
    H_code[hptp_ptp123456err0]   = "ptp_ptp123456err0";                                  /* Onthouden PTP error 0 ptp123456                                    */
    H_code[hptp_ptp123456err1]   = "ptp_ptp123456err1";                                  /* Onthouden PTP error 1 ptp123456                                    */
    H_code[hptp_ptp123456err2]   = "ptp_ptp123456err2";                                  /* Onthouden PTP error 2 ptp123456                                    */
    H_code[hrgvd24_3_d24_2]      = "rgvd24_3_d24_2";                                     /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    H_code[hrgvact]              = "rgvact";                                             /* Bijhouden actief zijn RoBuGrover                                   */
    H_code[hprreal02]            = "prreal02";                                           /* Bijhouden primaire realisatie fase 02                              */
    H_code[hprreal03]            = "prreal03";                                           /* Bijhouden primaire realisatie fase 03                              */
    H_code[hprreal05]            = "prreal05";                                           /* Bijhouden primaire realisatie fase 05                              */
    H_code[hprreal08]            = "prreal08";                                           /* Bijhouden primaire realisatie fase 08                              */
    H_code[hprreal11]            = "prreal11";                                           /* Bijhouden primaire realisatie fase 11                              */
    H_code[hprreal22]            = "prreal22";                                           /* Bijhouden primaire realisatie fase 22                              */
    H_code[hprreal28]            = "prreal28";                                           /* Bijhouden primaire realisatie fase 28                              */
    H_code[hschoolingreepdk31a]  = "schoolingreepdk31a";                                 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31a */
    H_code[hschoolingreepdk31b]  = "schoolingreepdk31b";                                 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31b */
    H_code[hschoolingreepdk32a]  = "schoolingreepdk32a";                                 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32a */
    H_code[hschoolingreepdk32b]  = "schoolingreepdk32b";                                 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32b */
    H_code[hschoolingreepdk33a]  = "schoolingreepdk33a";                                 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    H_code[hschoolingreepdk33b]  = "schoolingreepdk33b";                                 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    H_code[hschoolingreepdk34a]  = "schoolingreepdk34a";                                 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    H_code[hschoolingreepdk34b]  = "schoolingreepdk34b";                                 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    H_code[hsiexgr31]            = "siexgr31";                                           /* Onthouden actief zijn senioreningreep bij fase 31                  */
    H_code[hsiexgr32]            = "siexgr32";                                           /* Onthouden actief zijn senioreningreep bij fase 32                  */
    H_code[hsiexgr33]            = "siexgr33";                                           /* Onthouden actief zijn senioreningreep bij fase 33                  */
    H_code[hsiexgr34]            = "siexgr34";                                           /* Onthouden actief zijn senioreningreep bij fase 34                  */
    H_code[hwtv24]               = "wtv24";                                              /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    H_code[hlos31]               = "los31";                                              /* Toestaan los realiseren fase 31 (naloop naar)                      */
    H_code[hlos32]               = "los32";                                              /* Toestaan los realiseren fase 32 (naloop naar)                      */
    H_code[hlos33]               = "los33";                                              /* Toestaan los realiseren fase 33 (naloop naar)                      */
    H_code[hlos34]               = "los34";                                              /* Toestaan los realiseren fase 34 (naloop naar)                      */

/* geheugen elementen */
/* ------------------ */
    MM_code[mperiod]         = "period";                                   /* Onthouden actieve periode                                                   */
    MM_code[mlcycl]          = "lcycl";                                    /* Onthouden laatste cyclustijd                                                */
    MM_code[mmk03]           = "mk03";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    MM_code[mmk05]           = "mk05";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    MM_code[mmk08]           = "mk08";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    MM_code[mmk09]           = "mk09";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    MM_code[mmk11]           = "mk11";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    MM_code[mmk61]           = "mk61";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    MM_code[mmk62]           = "mk62";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    MM_code[mmk67]           = "mk67";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    MM_code[mmk68]           = "mk68";                                     /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    MM_code[mfilemem08]      = "filemem08";                                /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    MM_code[mfilemem11]      = "filemem11";                                /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    MM_code[mleven]          = "leven";                                    /* Bijhouden actief zijn levensignaal                                          */
    MM_code[mklok]           = "klok";                                     /* Halfstar of VA obv klokperioden                                             */
    MM_code[mhand]           = "hand";                                     /* Halstar of VA handmatig bepaald                                             */
    MM_code[mmaster]         = "master";                                   /* Halstar of VA bepaald door master                                           */
    MM_code[mslave]          = "slave";                                    /* Halstar of VA bepaald door slave                                            */
    MM_code[mleven654321]    = "leven654321";                              /* Bijhouden actief zijn levensignaal                                          */
    MM_code[mstp02karbus]    = "stp02karbus";                              /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    MM_code[mstp03karbus]    = "stp03karbus";                              /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    MM_code[mstp05karbus]    = "stp05karbus";                              /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    MM_code[mstp08karbus]    = "stp08karbus";                              /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    MM_code[mstp09karbus]    = "stp09karbus";                              /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    MM_code[mstp11karbus]    = "stp11karbus";                              /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    MM_code[mstp61karbus]    = "stp61karbus";                              /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    MM_code[mstp62karbus]    = "stp62karbus";                              /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    MM_code[mstp67karbus]    = "stp67karbus";                              /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    MM_code[mstp68karbus]    = "stp68karbus";                              /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    MM_code[mpelvtgKOP02]    = "pelvtgKOP02";                              /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02     */
    MM_code[mpelinKOP02]     = "pelinKOP02";                               /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02       */
    MM_code[mperiodstar]     = "periodstar";                               /* Onthouden actieve periode star regelen                                      */
    MM_code[mwtv24]          = "wtv24";                                    /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    MM_code[mwtvm24]         = "wtvm24";                                   /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    MM_code[mstarprog]       = "starprog";                                 /* Onthouden actief star programma                                             */
    MM_code[mstarprogwens]   = "starprogwens";                             /* Onthouden gewenst star programma                                            */
    MM_code[mstarprogwissel] = "starprogwissel";                           /* Onthouden actief zijn wisselen naar star programma                          */
    MM_code[mwijzpb]         = "wijzpb";                                   /* Wijziging aan PB doorgeven                                                  */
    MM_code[mfci]            = "fci";                                      /* Index fc met gewijzigde TVG_max[]                                           */
    MM_code[mar02]           = "ar02";                                     /* Alternatieve ruimte fase 02                                                 */
    MM_code[mar03]           = "ar03";                                     /* Alternatieve ruimte fase 03                                                 */
    MM_code[mar05]           = "ar05";                                     /* Alternatieve ruimte fase 05                                                 */
    MM_code[mar08]           = "ar08";                                     /* Alternatieve ruimte fase 08                                                 */
    MM_code[mar09]           = "ar09";                                     /* Alternatieve ruimte fase 09                                                 */
    MM_code[mar11]           = "ar11";                                     /* Alternatieve ruimte fase 11                                                 */
    MM_code[mar21]           = "ar21";                                     /* Alternatieve ruimte fase 21                                                 */
    MM_code[mar22]           = "ar22";                                     /* Alternatieve ruimte fase 22                                                 */
    MM_code[mar24]           = "ar24";                                     /* Alternatieve ruimte fase 24                                                 */
    MM_code[mar26]           = "ar26";                                     /* Alternatieve ruimte fase 26                                                 */
    MM_code[mar28]           = "ar28";                                     /* Alternatieve ruimte fase 28                                                 */
    MM_code[mar31]           = "ar31";                                     /* Alternatieve ruimte fase 31                                                 */
    MM_code[mar32]           = "ar32";                                     /* Alternatieve ruimte fase 32                                                 */
    MM_code[mar33]           = "ar33";                                     /* Alternatieve ruimte fase 33                                                 */
    MM_code[mar34]           = "ar34";                                     /* Alternatieve ruimte fase 34                                                 */
    MM_code[mar38]           = "ar38";                                     /* Alternatieve ruimte fase 38                                                 */
    MM_code[mar61]           = "ar61";                                     /* Alternatieve ruimte fase 61                                                 */
    MM_code[mar62]           = "ar62";                                     /* Alternatieve ruimte fase 62                                                 */
    MM_code[mar67]           = "ar67";                                     /* Alternatieve ruimte fase 67                                                 */
    MM_code[mar68]           = "ar68";                                     /* Alternatieve ruimte fase 68                                                 */
    MM_code[mar81]           = "ar81";                                     /* Alternatieve ruimte fase 81                                                 */
    MM_code[mar82]           = "ar82";                                     /* Alternatieve ruimte fase 82                                                 */
    MM_code[mar84]           = "ar84";                                     /* Alternatieve ruimte fase 84                                                 */

/* tijd elementen */
/* -------------- */
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
    T_code[tmax_09_1]                  = "max_09_1";                  T_max[tmax_09_1]                  = 0;    T_type[tmax_09_1]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    T_code[t09_2_1]                    = "09_2_1";                    T_max[t09_2_1]                    = 0;    T_type[t09_2_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    T_code[t09_2_2]                    = "09_2_2";                    T_max[t09_2_2]                    = 0;    T_type[t09_2_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    T_code[ttdh_09_2_1]                = "tdh_09_2_1";                T_max[ttdh_09_2_1]                = 0;    T_type[ttdh_09_2_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    T_code[ttdh_09_2_2]                = "tdh_09_2_2";                T_max[ttdh_09_2_2]                = 0;    T_type[ttdh_09_2_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    T_code[tmax_09_2]                  = "max_09_2";                  T_max[tmax_09_2]                  = 0;    T_type[tmax_09_2]                  = TE_type; /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    T_code[t09_3_1]                    = "09_3_1";                    T_max[t09_3_1]                    = 0;    T_type[t09_3_1]                    = TE_type; /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    T_code[t09_3_2]                    = "09_3_2";                    T_max[t09_3_2]                    = 0;    T_type[t09_3_2]                    = TE_type; /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    T_code[ttdh_09_3_1]                = "tdh_09_3_1";                T_max[ttdh_09_3_1]                = 0;    T_type[ttdh_09_3_1]                = TE_type; /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    T_code[ttdh_09_3_2]                = "tdh_09_3_2";                T_max[ttdh_09_3_2]                = 0;    T_type[ttdh_09_3_2]                = TE_type; /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
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
    T_code[tcycl]                      = "cycl";                      T_max[tcycl]                      = 999;  T_type[tcycl]                      = TS_type; /* Bijhouden actuele cyclustijd                                                             */
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
    T_code[tkm81]                      = "km81";                      T_max[tkm81]                      = 80;   T_type[tkm81]                      = TE_type; /* Kop maximum voor detector 81                                                             */
    T_code[tkm82]                      = "km82";                      T_max[tkm82]                      = 80;   T_type[tkm82]                      = TE_type; /* Kop maximum voor detector 82                                                             */
    T_code[tkm84]                      = "km84";                      T_max[tkm84]                      = 60;   T_type[tkm84]                      = TE_type; /* Kop maximum voor detector 84                                                             */
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
    T_code[tdstvert21]                 = "dstvert21";                 T_max[tdstvert21]                 = 100;  T_type[tdstvert21]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    T_code[thdvd22_1]                  = "hdvd22_1";                  T_max[thdvd22_1]                  = 35;   T_type[thdvd22_1]                  = TE_type; /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    T_code[tdstvert22]                 = "dstvert22";                 T_max[tdstvert22]                 = 100;  T_type[tdstvert22]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    T_code[thdvd24_1]                  = "hdvd24_1";                  T_max[thdvd24_1]                  = 35;   T_type[thdvd24_1]                  = TE_type; /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    T_code[tdstvert24]                 = "dstvert24";                 T_max[tdstvert24]                 = 100;  T_type[tdstvert24]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    T_code[tdstvert26]                 = "dstvert26";                 T_max[tdstvert26]                 = 100;  T_type[tdstvert26]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    T_code[thdvd28_1]                  = "hdvd28_1";                  T_max[thdvd28_1]                  = 35;   T_type[thdvd28_1]                  = TE_type; /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    T_code[tdstvert28]                 = "dstvert28";                 T_max[tdstvert28]                 = 100;  T_type[tdstvert28]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    T_code[tdstvert31]                 = "dstvert31";                 T_max[tdstvert31]                 = 300;  T_type[tdstvert31]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    T_code[tdstvert32]                 = "dstvert32";                 T_max[tdstvert32]                 = 300;  T_type[tdstvert32]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    T_code[tdstvert33]                 = "dstvert33";                 T_max[tdstvert33]                 = 300;  T_type[tdstvert33]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    T_code[tdstvert34]                 = "dstvert34";                 T_max[tdstvert34]                 = 300;  T_type[tdstvert34]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    T_code[tdstvert38]                 = "dstvert38";                 T_max[tdstvert38]                 = 300;  T_type[tdstvert38]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    T_code[thdvd61_1]                  = "hdvd61_1";                  T_max[thdvd61_1]                  = 25;   T_type[thdvd61_1]                  = TE_type; /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    T_code[tdstvert61]                 = "dstvert61";                 T_max[tdstvert61]                 = 100;  T_type[tdstvert61]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    T_code[thdvd62_1a]                 = "hdvd62_1a";                 T_max[thdvd62_1a]                 = 25;   T_type[thdvd62_1a]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    T_code[thdvd62_1b]                 = "hdvd62_1b";                 T_max[thdvd62_1b]                 = 25;   T_type[thdvd62_1b]                 = TE_type; /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    T_code[tdstvert62]                 = "dstvert62";                 T_max[tdstvert62]                 = 100;  T_type[tdstvert62]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    T_code[thdvd67_1]                  = "hdvd67_1";                  T_max[thdvd67_1]                  = 25;   T_type[thdvd67_1]                  = TE_type; /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    T_code[tdstvert67]                 = "dstvert67";                 T_max[tdstvert67]                 = 100;  T_type[tdstvert67]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    T_code[thdvd68_1a]                 = "hdvd68_1a";                 T_max[thdvd68_1a]                 = 25;   T_type[thdvd68_1a]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    T_code[thdvd68_1b]                 = "hdvd68_1b";                 T_max[thdvd68_1b]                 = 25;   T_type[thdvd68_1b]                 = TE_type; /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    T_code[tdstvert68]                 = "dstvert68";                 T_max[tdstvert68]                 = 100;  T_type[tdstvert68]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    T_code[tdstvert81]                 = "dstvert81";                 T_max[tdstvert81]                 = 100;  T_type[tdstvert81]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    T_code[tdstvert82]                 = "dstvert82";                 T_max[tdstvert82]                 = 100;  T_type[tdstvert82]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    T_code[thdvd84_1]                  = "hdvd84_1";                  T_max[thdvd84_1]                  = 35;   T_type[thdvd84_1]                  = TE_type; /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    T_code[tdstvert84]                 = "dstvert84";                 T_max[tdstvert84]                 = 100;  T_type[tdstvert84]                 = TE_type; /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
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
    T_code[tmaxgroen08fileFile68af]    = "maxgroen08fileFile68af";    T_max[tmaxgroen08fileFile68af]    = 400;  T_type[tmaxgroen08fileFile68af]    = TE_type; /* Maximale groentijd bij fase 08 voor file ingreep                                         */
    T_code[tmaxgroen11fileFile68af]    = "maxgroen11fileFile68af";    T_max[tmaxgroen11fileFile68af]    = 400;  T_type[tmaxgroen11fileFile68af]    = TE_type; /* Maximale groentijd bij fase 11 voor file ingreep                                         */
    T_code[tleven]                     = "leven";                     T_max[tleven]                     = 10;   T_type[tleven]                     = TE_type; /* Frequentie verstuurd levenssignaal                                                       */
    T_code[toffset]                    = "offset";                    T_max[toffset]                    = 0;    T_type[toffset]                    = TS_type; /* Offset in slave                                                                          */
    T_code[txmarge]                    = "xmarge";                    T_max[txmarge]                    = 2;    T_type[txmarge]                    = TS_type; /* Toegestane marge by sync halfstar                                                        */
    T_code[tleven654321]               = "leven654321";               T_max[tleven654321]               = 30;   T_type[tleven654321]               = TE_type; /* Frequentie verstuurd levenssignaal                                                       */
    T_code[tnlfg0262]                  = "nlfg0262";                  T_max[tnlfg0262]                  = 50;   T_type[tnlfg0262]                  = TE_type; /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    T_code[tnlfgd0262]                 = "nlfgd0262";                 T_max[tnlfgd0262]                 = 60;   T_type[tnlfgd0262]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                             */
    T_code[tnleg0262]                  = "nleg0262";                  T_max[tnleg0262]                  = 50;   T_type[tnleg0262]                  = TE_type; /* Naloop op einde groen van 02 naar 62                                                     */
    T_code[tnlegd0262]                 = "nlegd0262";                 T_max[tnlegd0262]                 = 60;   T_type[tnlegd0262]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 02 naar 62                                */
    T_code[tvgnaloop0262]              = "vgnaloop0262";              T_max[tvgnaloop0262]              = 0;    T_type[tvgnaloop0262]              = TE_type; /* Timer naloop EG van 02 naar 62                                                           */
    T_code[tnlfg0868]                  = "nlfg0868";                  T_max[tnlfg0868]                  = 60;   T_type[tnlfg0868]                  = TE_type; /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    T_code[tnlfgd0868]                 = "nlfgd0868";                 T_max[tnlfgd0868]                 = 60;   T_type[tnlfgd0868]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    T_code[tnleg0868]                  = "nleg0868";                  T_max[tnleg0868]                  = 60;   T_type[tnleg0868]                  = TE_type; /* Naloop op einde groen van 08 naar 68                                                     */
    T_code[tnlegd0868]                 = "nlegd0868";                 T_max[tnlegd0868]                 = 70;   T_type[tnlegd0868]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    T_code[tvgnaloop0868]              = "vgnaloop0868";              T_max[tvgnaloop0868]              = 0;    T_type[tvgnaloop0868]              = TE_type; /* Timer naloop EG van 08 naar 68                                                           */
    T_code[tnlfg1168]                  = "nlfg1168";                  T_max[tnlfg1168]                  = 40;   T_type[tnlfg1168]                  = TE_type; /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    T_code[tnlfgd1168]                 = "nlfgd1168";                 T_max[tnlfgd1168]                 = 50;   T_type[tnlfgd1168]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    T_code[tnleg1168]                  = "nleg1168";                  T_max[tnleg1168]                  = 50;   T_type[tnleg1168]                  = TE_type; /* Naloop op einde groen van 11 naar 68                                                     */
    T_code[tnlegd1168]                 = "nlegd1168";                 T_max[tnlegd1168]                 = 60;   T_type[tnlegd1168]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    T_code[tvgnaloop1168]              = "vgnaloop1168";              T_max[tvgnaloop1168]              = 0;    T_type[tvgnaloop1168]              = TE_type; /* Timer naloop EG van 11 naar 68                                                           */
    T_code[tnlfg2221]                  = "nlfg2221";                  T_max[tnlfg2221]                  = 30;   T_type[tnlfg2221]                  = TE_type; /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    T_code[tnlfgd2221]                 = "nlfgd2221";                 T_max[tnlfgd2221]                 = 40;   T_type[tnlfgd2221]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    T_code[tnleg2221]                  = "nleg2221";                  T_max[tnleg2221]                  = 40;   T_type[tnleg2221]                  = TE_type; /* Naloop op einde groen van 22 naar 21                                                     */
    T_code[tnlegd2221]                 = "nlegd2221";                 T_max[tnlegd2221]                 = 50;   T_type[tnlegd2221]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    T_code[tvgnaloop2221]              = "vgnaloop2221";              T_max[tvgnaloop2221]              = 0;    T_type[tvgnaloop2221]              = TE_type; /* Timer naloop EG van 22 naar 21                                                           */
    T_code[tnlsgd3132]                 = "nlsgd3132";                 T_max[tnlsgd3132]                 = 125;  T_type[tnlsgd3132]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    T_code[tnlsgd3231]                 = "nlsgd3231";                 T_max[tnlsgd3231]                 = 115;  T_type[tnlsgd3231]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    T_code[tnlsgd3334]                 = "nlsgd3334";                 T_max[tnlsgd3334]                 = 80;   T_type[tnlsgd3334]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    T_code[tnlsgd3433]                 = "nlsgd3433";                 T_max[tnlsgd3433]                 = 95;   T_type[tnlsgd3433]                 = TE_type; /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    T_code[tnlfg8281]                  = "nlfg8281";                  T_max[tnlfg8281]                  = 50;   T_type[tnlfg8281]                  = TE_type; /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    T_code[tnlfgd8281]                 = "nlfgd8281";                 T_max[tnlfgd8281]                 = 50;   T_type[tnlfgd8281]                 = TE_type; /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    T_code[tnleg8281]                  = "nleg8281";                  T_max[tnleg8281]                  = 60;   T_type[tnleg8281]                  = TE_type; /* Naloop op einde groen van 82 naar 81                                                     */
    T_code[tnlegd8281]                 = "nlegd8281";                 T_max[tnlegd8281]                 = 70;   T_type[tnlegd8281]                 = TE_type; /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    T_code[tvgnaloop8281]              = "vgnaloop8281";              T_max[tvgnaloop8281]              = 0;    T_type[tvgnaloop8281]              = TE_type; /* Timer naloop EG van 82 naar 81                                                           */
    T_code[tkarmelding]                = "karmelding";                T_max[tkarmelding]                = 15;   T_type[tkarmelding]                = TE_type; /* Duur verklikking ontvangst melding KAR                                                   */
    T_code[tkarog]                     = "karog";                     T_max[tkarog]                     = 1440; T_type[tkarog]                     = TM_type; /* Ondergedrag KAR                                                                          */
    T_code[tprioin02karbuskar]         = "prioin02karbuskar";         T_max[tprioin02karbuskar]         = 15;   T_type[tprioin02karbuskar]         = TE_type; /* Anti jutter tijd inmelden 02 Bus                                                         */
    T_code[tpriouit02karbuskar]        = "priouit02karbuskar";        T_max[tpriouit02karbuskar]        = 15;   T_type[tpriouit02karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 02                                                            */
    T_code[tprioin02karbus]            = "prioin02karbus";            T_max[tprioin02karbus]            = 15;   T_type[tprioin02karbus]            = TE_type; /* Anti jutter tijd inmelden 02 Bus                                                         */
    T_code[tpriouit02karbus]           = "priouit02karbus";           T_max[tpriouit02karbus]           = 15;   T_type[tpriouit02karbus]           = TE_type; /* Anti jutter tijd uitmelden 02                                                            */
    T_code[tbtovg02karbus]             = "btovg02karbus";             T_max[tbtovg02karbus]             = 0;    T_type[tbtovg02karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    T_code[trt02karbus]                = "rt02karbus";                T_max[trt02karbus]                = 0;    T_type[trt02karbus]                = TE_type; /* Actuele rijtijd prio fase 02                                                             */
    T_code[tgb02karbus]                = "gb02karbus";                T_max[tgb02karbus]                = 300;  T_type[tgb02karbus]                = TE_type; /* Groenbewaking prioriteit fase 02                                                         */
    T_code[tblk02karbus]               = "blk02karbus";               T_max[tblk02karbus]               = 0;    T_type[tblk02karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    T_code[tprioin03karbuskar]         = "prioin03karbuskar";         T_max[tprioin03karbuskar]         = 15;   T_type[tprioin03karbuskar]         = TE_type; /* Anti jutter tijd inmelden 03 Bus                                                         */
    T_code[tpriouit03karbuskar]        = "priouit03karbuskar";        T_max[tpriouit03karbuskar]        = 15;   T_type[tpriouit03karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 03                                                            */
    T_code[tprioin03karbus]            = "prioin03karbus";            T_max[tprioin03karbus]            = 15;   T_type[tprioin03karbus]            = TE_type; /* Anti jutter tijd inmelden 03 Bus                                                         */
    T_code[tpriouit03karbus]           = "priouit03karbus";           T_max[tpriouit03karbus]           = 15;   T_type[tpriouit03karbus]           = TE_type; /* Anti jutter tijd uitmelden 03                                                            */
    T_code[tbtovg03karbus]             = "btovg03karbus";             T_max[tbtovg03karbus]             = 0;    T_type[tbtovg03karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    T_code[trt03karbus]                = "rt03karbus";                T_max[trt03karbus]                = 0;    T_type[trt03karbus]                = TE_type; /* Actuele rijtijd prio fase 03                                                             */
    T_code[tgb03karbus]                = "gb03karbus";                T_max[tgb03karbus]                = 300;  T_type[tgb03karbus]                = TE_type; /* Groenbewaking prioriteit fase 03                                                         */
    T_code[tblk03karbus]               = "blk03karbus";               T_max[tblk03karbus]               = 0;    T_type[tblk03karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    T_code[tprioin05karbuskar]         = "prioin05karbuskar";         T_max[tprioin05karbuskar]         = 15;   T_type[tprioin05karbuskar]         = TE_type; /* Anti jutter tijd inmelden 05 Bus                                                         */
    T_code[tpriouit05karbuskar]        = "priouit05karbuskar";        T_max[tpriouit05karbuskar]        = 15;   T_type[tpriouit05karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 05                                                            */
    T_code[tprioin05karbus]            = "prioin05karbus";            T_max[tprioin05karbus]            = 15;   T_type[tprioin05karbus]            = TE_type; /* Anti jutter tijd inmelden 05 Bus                                                         */
    T_code[tpriouit05karbus]           = "priouit05karbus";           T_max[tpriouit05karbus]           = 15;   T_type[tpriouit05karbus]           = TE_type; /* Anti jutter tijd uitmelden 05                                                            */
    T_code[tbtovg05karbus]             = "btovg05karbus";             T_max[tbtovg05karbus]             = 0;    T_type[tbtovg05karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    T_code[trt05karbus]                = "rt05karbus";                T_max[trt05karbus]                = 0;    T_type[trt05karbus]                = TE_type; /* Actuele rijtijd prio fase 05                                                             */
    T_code[tgb05karbus]                = "gb05karbus";                T_max[tgb05karbus]                = 300;  T_type[tgb05karbus]                = TE_type; /* Groenbewaking prioriteit fase 05                                                         */
    T_code[tblk05karbus]               = "blk05karbus";               T_max[tblk05karbus]               = 0;    T_type[tblk05karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    T_code[tprioin08karbuskar]         = "prioin08karbuskar";         T_max[tprioin08karbuskar]         = 15;   T_type[tprioin08karbuskar]         = TE_type; /* Anti jutter tijd inmelden 08 Bus                                                         */
    T_code[tpriouit08karbuskar]        = "priouit08karbuskar";        T_max[tpriouit08karbuskar]        = 15;   T_type[tpriouit08karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 08                                                            */
    T_code[tprioin08karbus]            = "prioin08karbus";            T_max[tprioin08karbus]            = 15;   T_type[tprioin08karbus]            = TE_type; /* Anti jutter tijd inmelden 08 Bus                                                         */
    T_code[tpriouit08karbus]           = "priouit08karbus";           T_max[tpriouit08karbus]           = 15;   T_type[tpriouit08karbus]           = TE_type; /* Anti jutter tijd uitmelden 08                                                            */
    T_code[tbtovg08karbus]             = "btovg08karbus";             T_max[tbtovg08karbus]             = 0;    T_type[tbtovg08karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    T_code[trt08karbus]                = "rt08karbus";                T_max[trt08karbus]                = 0;    T_type[trt08karbus]                = TE_type; /* Actuele rijtijd prio fase 08                                                             */
    T_code[tgb08karbus]                = "gb08karbus";                T_max[tgb08karbus]                = 300;  T_type[tgb08karbus]                = TE_type; /* Groenbewaking prioriteit fase 08                                                         */
    T_code[tblk08karbus]               = "blk08karbus";               T_max[tblk08karbus]               = 0;    T_type[tblk08karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    T_code[tprioin09karbuskar]         = "prioin09karbuskar";         T_max[tprioin09karbuskar]         = 15;   T_type[tprioin09karbuskar]         = TE_type; /* Anti jutter tijd inmelden 09 Bus                                                         */
    T_code[tpriouit09karbuskar]        = "priouit09karbuskar";        T_max[tpriouit09karbuskar]        = 15;   T_type[tpriouit09karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 09                                                            */
    T_code[tprioin09karbus]            = "prioin09karbus";            T_max[tprioin09karbus]            = 15;   T_type[tprioin09karbus]            = TE_type; /* Anti jutter tijd inmelden 09 Bus                                                         */
    T_code[tpriouit09karbus]           = "priouit09karbus";           T_max[tpriouit09karbus]           = 15;   T_type[tpriouit09karbus]           = TE_type; /* Anti jutter tijd uitmelden 09                                                            */
    T_code[tbtovg09karbus]             = "btovg09karbus";             T_max[tbtovg09karbus]             = 0;    T_type[tbtovg09karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    T_code[trt09karbus]                = "rt09karbus";                T_max[trt09karbus]                = 0;    T_type[trt09karbus]                = TE_type; /* Actuele rijtijd prio fase 09                                                             */
    T_code[tgb09karbus]                = "gb09karbus";                T_max[tgb09karbus]                = 300;  T_type[tgb09karbus]                = TE_type; /* Groenbewaking prioriteit fase 09                                                         */
    T_code[tblk09karbus]               = "blk09karbus";               T_max[tblk09karbus]               = 0;    T_type[tblk09karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    T_code[tprioin11karbuskar]         = "prioin11karbuskar";         T_max[tprioin11karbuskar]         = 15;   T_type[tprioin11karbuskar]         = TE_type; /* Anti jutter tijd inmelden 11 Bus                                                         */
    T_code[tpriouit11karbuskar]        = "priouit11karbuskar";        T_max[tpriouit11karbuskar]        = 15;   T_type[tpriouit11karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 11                                                            */
    T_code[tprioin11karbus]            = "prioin11karbus";            T_max[tprioin11karbus]            = 15;   T_type[tprioin11karbus]            = TE_type; /* Anti jutter tijd inmelden 11 Bus                                                         */
    T_code[tpriouit11karbus]           = "priouit11karbus";           T_max[tpriouit11karbus]           = 15;   T_type[tpriouit11karbus]           = TE_type; /* Anti jutter tijd uitmelden 11                                                            */
    T_code[tbtovg11karbus]             = "btovg11karbus";             T_max[tbtovg11karbus]             = 0;    T_type[tbtovg11karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    T_code[trt11karbus]                = "rt11karbus";                T_max[trt11karbus]                = 0;    T_type[trt11karbus]                = TE_type; /* Actuele rijtijd prio fase 11                                                             */
    T_code[tgb11karbus]                = "gb11karbus";                T_max[tgb11karbus]                = 300;  T_type[tgb11karbus]                = TE_type; /* Groenbewaking prioriteit fase 11                                                         */
    T_code[tblk11karbus]               = "blk11karbus";               T_max[tblk11karbus]               = 0;    T_type[tblk11karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    T_code[tbtovg22fiets]              = "btovg22fiets";              T_max[tbtovg22fiets]              = 0;    T_type[tbtovg22fiets]              = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    T_code[trt22fiets]                 = "rt22fiets";                 T_max[trt22fiets]                 = 0;    T_type[trt22fiets]                 = TE_type; /* Actuele rijtijd prio fase 22                                                             */
    T_code[tgb22fiets]                 = "gb22fiets";                 T_max[tgb22fiets]                 = 100;  T_type[tgb22fiets]                 = TE_type; /* Groenbewaking prioriteit fase 22                                                         */
    T_code[tblk22fiets]                = "blk22fiets";                T_max[tblk22fiets]                = 0;    T_type[tblk22fiets]                = TE_type; /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    T_code[tbtovg28fiets]              = "btovg28fiets";              T_max[tbtovg28fiets]              = 0;    T_type[tbtovg28fiets]              = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    T_code[trt28fiets]                 = "rt28fiets";                 T_max[trt28fiets]                 = 0;    T_type[trt28fiets]                 = TE_type; /* Actuele rijtijd prio fase 28                                                             */
    T_code[tgb28fiets]                 = "gb28fiets";                 T_max[tgb28fiets]                 = 100;  T_type[tgb28fiets]                 = TE_type; /* Groenbewaking prioriteit fase 28                                                         */
    T_code[tblk28fiets]                = "blk28fiets";                T_max[tblk28fiets]                = 0;    T_type[tblk28fiets]                = TE_type; /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    T_code[tprioin61karbuskar]         = "prioin61karbuskar";         T_max[tprioin61karbuskar]         = 15;   T_type[tprioin61karbuskar]         = TE_type; /* Anti jutter tijd inmelden 61 Bus                                                         */
    T_code[tpriouit61karbuskar]        = "priouit61karbuskar";        T_max[tpriouit61karbuskar]        = 15;   T_type[tpriouit61karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 61                                                            */
    T_code[tprioin61karbus]            = "prioin61karbus";            T_max[tprioin61karbus]            = 15;   T_type[tprioin61karbus]            = TE_type; /* Anti jutter tijd inmelden 61 Bus                                                         */
    T_code[tpriouit61karbus]           = "priouit61karbus";           T_max[tpriouit61karbus]           = 15;   T_type[tpriouit61karbus]           = TE_type; /* Anti jutter tijd uitmelden 61                                                            */
    T_code[tbtovg61karbus]             = "btovg61karbus";             T_max[tbtovg61karbus]             = 0;    T_type[tbtovg61karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    T_code[trt61karbus]                = "rt61karbus";                T_max[trt61karbus]                = 0;    T_type[trt61karbus]                = TE_type; /* Actuele rijtijd prio fase 61                                                             */
    T_code[tgb61karbus]                = "gb61karbus";                T_max[tgb61karbus]                = 300;  T_type[tgb61karbus]                = TE_type; /* Groenbewaking prioriteit fase 61                                                         */
    T_code[tblk61karbus]               = "blk61karbus";               T_max[tblk61karbus]               = 0;    T_type[tblk61karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    T_code[tprioin62karbuskar]         = "prioin62karbuskar";         T_max[tprioin62karbuskar]         = 15;   T_type[tprioin62karbuskar]         = TE_type; /* Anti jutter tijd inmelden 62 Bus                                                         */
    T_code[tpriouit62karbuskar]        = "priouit62karbuskar";        T_max[tpriouit62karbuskar]        = 15;   T_type[tpriouit62karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 62                                                            */
    T_code[tprioin62karbus]            = "prioin62karbus";            T_max[tprioin62karbus]            = 15;   T_type[tprioin62karbus]            = TE_type; /* Anti jutter tijd inmelden 62 Bus                                                         */
    T_code[tpriouit62karbus]           = "priouit62karbus";           T_max[tpriouit62karbus]           = 15;   T_type[tpriouit62karbus]           = TE_type; /* Anti jutter tijd uitmelden 62                                                            */
    T_code[tbtovg62karbus]             = "btovg62karbus";             T_max[tbtovg62karbus]             = 0;    T_type[tbtovg62karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    T_code[trt62karbus]                = "rt62karbus";                T_max[trt62karbus]                = 0;    T_type[trt62karbus]                = TE_type; /* Actuele rijtijd prio fase 62                                                             */
    T_code[tgb62karbus]                = "gb62karbus";                T_max[tgb62karbus]                = 300;  T_type[tgb62karbus]                = TE_type; /* Groenbewaking prioriteit fase 62                                                         */
    T_code[tblk62karbus]               = "blk62karbus";               T_max[tblk62karbus]               = 0;    T_type[tblk62karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    T_code[tprioin67karbuskar]         = "prioin67karbuskar";         T_max[tprioin67karbuskar]         = 15;   T_type[tprioin67karbuskar]         = TE_type; /* Anti jutter tijd inmelden 67 Bus                                                         */
    T_code[tpriouit67karbuskar]        = "priouit67karbuskar";        T_max[tpriouit67karbuskar]        = 15;   T_type[tpriouit67karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 67                                                            */
    T_code[tprioin67karbus]            = "prioin67karbus";            T_max[tprioin67karbus]            = 15;   T_type[tprioin67karbus]            = TE_type; /* Anti jutter tijd inmelden 67 Bus                                                         */
    T_code[tpriouit67karbus]           = "priouit67karbus";           T_max[tpriouit67karbus]           = 15;   T_type[tpriouit67karbus]           = TE_type; /* Anti jutter tijd uitmelden 67                                                            */
    T_code[tbtovg67karbus]             = "btovg67karbus";             T_max[tbtovg67karbus]             = 0;    T_type[tbtovg67karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    T_code[trt67karbus]                = "rt67karbus";                T_max[trt67karbus]                = 0;    T_type[trt67karbus]                = TE_type; /* Actuele rijtijd prio fase 67                                                             */
    T_code[tgb67karbus]                = "gb67karbus";                T_max[tgb67karbus]                = 300;  T_type[tgb67karbus]                = TE_type; /* Groenbewaking prioriteit fase 67                                                         */
    T_code[tblk67karbus]               = "blk67karbus";               T_max[tblk67karbus]               = 0;    T_type[tblk67karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    T_code[tprioin68karbuskar]         = "prioin68karbuskar";         T_max[tprioin68karbuskar]         = 15;   T_type[tprioin68karbuskar]         = TE_type; /* Anti jutter tijd inmelden 68 Bus                                                         */
    T_code[tpriouit68karbuskar]        = "priouit68karbuskar";        T_max[tpriouit68karbuskar]        = 15;   T_type[tpriouit68karbuskar]        = TE_type; /* Anti jutter tijd uitmelden 68                                                            */
    T_code[tprioin68karbus]            = "prioin68karbus";            T_max[tprioin68karbus]            = 15;   T_type[tprioin68karbus]            = TE_type; /* Anti jutter tijd inmelden 68 Bus                                                         */
    T_code[tpriouit68karbus]           = "priouit68karbus";           T_max[tpriouit68karbus]           = 15;   T_type[tpriouit68karbus]           = TE_type; /* Anti jutter tijd uitmelden 68                                                            */
    T_code[tbtovg68karbus]             = "btovg68karbus";             T_max[tbtovg68karbus]             = 0;    T_type[tbtovg68karbus]             = TE_type; /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    T_code[trt68karbus]                = "rt68karbus";                T_max[trt68karbus]                = 0;    T_type[trt68karbus]                = TE_type; /* Actuele rijtijd prio fase 68                                                             */
    T_code[tgb68karbus]                = "gb68karbus";                T_max[tgb68karbus]                = 300;  T_type[tgb68karbus]                = TE_type; /* Groenbewaking prioriteit fase 68                                                         */
    T_code[tblk68karbus]               = "blk68karbus";               T_max[tblk68karbus]               = 0;    T_type[tblk68karbus]               = TE_type; /* Blokkeertijd na prioriteitsingreep fase 68                                               */
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
    T_code[tpelmeetKOP02]              = "pelmeetKOP02";              T_max[tpelmeetKOP02]              = 100;  T_type[tpelmeetKOP02]              = TE_type; /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    T_code[tpelmaxhiaatKOP02]          = "pelmaxhiaatKOP02";          T_max[tpelmaxhiaatKOP02]          = 50;   T_type[tpelmaxhiaatKOP02]          = TE_type; /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    T_code[tpelrwKOP02]                = "pelrwKOP02";                T_max[tpelrwKOP02]                = 100;  T_type[tpelrwKOP02]                = TE_type; /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    T_code[tpelrwmaxKOP02]             = "pelrwmaxKOP02";             T_max[tpelrwmaxKOP02]             = 400;  T_type[tpelrwmaxKOP02]             = TE_type; /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    T_code[tpelstartrwKOP02]           = "pelstartrwKOP02";           T_max[tpelstartrwKOP02]           = 150;  T_type[tpelstartrwKOP02]           = TE_type; /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    T_code[tpelaKOP02]                 = "pelaKOP02";                 T_max[tpelaKOP02]                 = 200;  T_type[tpelaKOP02]                 = TE_type; /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
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
    T_code[tfd11_1]                    = "fd11_1";                    T_max[tfd11_1]                    = 60;   T_type[tfd11_1]                    = TE_type; /* File meting RoBuGrover fase 11 detector 11_1                                             */
    T_code[thd11_2]                    = "hd11_2";                    T_max[thd11_2]                    = 10;   T_type[thd11_2]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    T_code[thd11_3]                    = "hd11_3";                    T_max[thd11_3]                    = 10;   T_type[thd11_3]                    = TE_type; /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    T_code[tfd22_1]                    = "fd22_1";                    T_max[tfd22_1]                    = 60;   T_type[tfd22_1]                    = TE_type; /* File meting RoBuGrover fase 22 detector 22_1                                             */
    T_code[thd22_1]                    = "hd22_1";                    T_max[thd22_1]                    = 10;   T_type[thd22_1]                    = TE_type; /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    T_code[tfd28_1]                    = "fd28_1";                    T_max[tfd28_1]                    = 60;   T_type[tfd28_1]                    = TE_type; /* File meting RoBuGrover fase 28 detector 28_1                                             */
    T_code[thd28_1]                    = "hd28_1";                    T_max[thd28_1]                    = 10;   T_type[thd28_1]                    = TE_type; /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    T_code[tschoolingreepmaxg31]       = "schoolingreepmaxg31";       T_max[tschoolingreepmaxg31]       = 500;  T_type[tschoolingreepmaxg31]       = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 31                        */
    T_code[tdbsidk31a]                 = "dbsidk31a";                 T_max[tdbsidk31a]                 = 60;   T_type[tdbsidk31a]                 = TE_type; /* Bezettijd detector k31a t.b.v. schoolingreep                                             */
    T_code[tdbsidk31b]                 = "dbsidk31b";                 T_max[tdbsidk31b]                 = 60;   T_type[tdbsidk31b]                 = TE_type; /* Bezettijd detector k31b t.b.v. schoolingreep                                             */
    T_code[tschoolingreepmaxg32]       = "schoolingreepmaxg32";       T_max[tschoolingreepmaxg32]       = 500;  T_type[tschoolingreepmaxg32]       = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 32                        */
    T_code[tdbsidk32a]                 = "dbsidk32a";                 T_max[tdbsidk32a]                 = 60;   T_type[tdbsidk32a]                 = TE_type; /* Bezettijd detector k32a t.b.v. schoolingreep                                             */
    T_code[tdbsidk32b]                 = "dbsidk32b";                 T_max[tdbsidk32b]                 = 60;   T_type[tdbsidk32b]                 = TE_type; /* Bezettijd detector k32b t.b.v. schoolingreep                                             */
    T_code[tschoolingreepmaxg33]       = "schoolingreepmaxg33";       T_max[tschoolingreepmaxg33]       = 500;  T_type[tschoolingreepmaxg33]       = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    T_code[tdbsidk33a]                 = "dbsidk33a";                 T_max[tdbsidk33a]                 = 60;   T_type[tdbsidk33a]                 = TE_type; /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    T_code[tdbsidk33b]                 = "dbsidk33b";                 T_max[tdbsidk33b]                 = 60;   T_type[tdbsidk33b]                 = TE_type; /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    T_code[tschoolingreepmaxg34]       = "schoolingreepmaxg34";       T_max[tschoolingreepmaxg34]       = 500;  T_type[tschoolingreepmaxg34]       = TE_type; /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    T_code[tdbsidk34a]                 = "dbsidk34a";                 T_max[tdbsidk34a]                 = 60;   T_type[tdbsidk34a]                 = TE_type; /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    T_code[tdbsidk34b]                 = "dbsidk34b";                 T_max[tdbsidk34b]                 = 60;   T_type[tdbsidk34b]                 = TE_type; /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    T_code[tsiexgr31]                  = "siexgr31";                  T_max[tsiexgr31]                  = 999;  T_type[tsiexgr31]                  = TE_type; /* Meten duur extra groen bij senioreningreep op fase 31                                    */
    T_code[tdbsiexgrdk31a]             = "dbsiexgrdk31a";             T_max[tdbsiexgrdk31a]             = 30;   T_type[tdbsiexgrdk31a]             = TE_type; /* Bezettijd detector k31a t.b.v. Senioreningreep                                           */
    T_code[tdbsiexgrdk31b]             = "dbsiexgrdk31b";             T_max[tdbsiexgrdk31b]             = 30;   T_type[tdbsiexgrdk31b]             = TE_type; /* Bezettijd detector k31b t.b.v. Senioreningreep                                           */
    T_code[tsiexgr32]                  = "siexgr32";                  T_max[tsiexgr32]                  = 999;  T_type[tsiexgr32]                  = TE_type; /* Meten duur extra groen bij senioreningreep op fase 32                                    */
    T_code[tdbsiexgrdk32a]             = "dbsiexgrdk32a";             T_max[tdbsiexgrdk32a]             = 30;   T_type[tdbsiexgrdk32a]             = TE_type; /* Bezettijd detector k32a t.b.v. Senioreningreep                                           */
    T_code[tdbsiexgrdk32b]             = "dbsiexgrdk32b";             T_max[tdbsiexgrdk32b]             = 30;   T_type[tdbsiexgrdk32b]             = TE_type; /* Bezettijd detector k32b t.b.v. Senioreningreep                                           */
    T_code[tsiexgr33]                  = "siexgr33";                  T_max[tsiexgr33]                  = 999;  T_type[tsiexgr33]                  = TE_type; /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    T_code[tdbsiexgrdk33a]             = "dbsiexgrdk33a";             T_max[tdbsiexgrdk33a]             = 30;   T_type[tdbsiexgrdk33a]             = TE_type; /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    T_code[tdbsiexgrdk33b]             = "dbsiexgrdk33b";             T_max[tdbsiexgrdk33b]             = 30;   T_type[tdbsiexgrdk33b]             = TE_type; /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    T_code[tsiexgr34]                  = "siexgr34";                  T_max[tsiexgr34]                  = 999;  T_type[tsiexgr34]                  = TE_type; /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    T_code[tdbsiexgrdk34a]             = "dbsiexgrdk34a";             T_max[tdbsiexgrdk34a]             = 30;   T_type[tdbsiexgrdk34a]             = TE_type; /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    T_code[tdbsiexgrdk34b]             = "dbsiexgrdk34b";             T_max[tdbsiexgrdk34b]             = 30;   T_type[tdbsiexgrdk34b]             = TE_type; /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    T_code[tvamax62]                   = "vamax62";                   T_max[tvamax62]                   = 100;  T_type[tvamax62]                   = TE_type; /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    T_code[tva6209_d62_1a]             = "va6209_d62_1a";             T_max[tva6209_d62_1a]             = 0;    T_type[tva6209_d62_1a]             = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                       */
    T_code[tva6211_d62_1a]             = "va6211_d62_1a";             T_max[tva6211_d62_1a]             = 10;   T_type[tva6211_d62_1a]             = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                       */
    T_code[tva6226_d62_1a]             = "va6226_d62_1a";             T_max[tva6226_d62_1a]             = 20;   T_type[tva6226_d62_1a]             = TE_type; /* Tijdsduur VA ontruimen van 62 naar                                                       */
    T_code[tuitgestca02]               = "uitgestca02";               T_max[tuitgestca02]               = 100;  T_type[tuitgestca02]               = TE_type; /* Uitgestelde cyclische aanvraag fase 02                                                   */
    T_code[tuitgestca03]               = "uitgestca03";               T_max[tuitgestca03]               = 100;  T_type[tuitgestca03]               = TE_type; /* Uitgestelde cyclische aanvraag fase 03                                                   */
    T_code[tuitgestca05]               = "uitgestca05";               T_max[tuitgestca05]               = 100;  T_type[tuitgestca05]               = TE_type; /* Uitgestelde cyclische aanvraag fase 05                                                   */
    T_code[tuitgestca08]               = "uitgestca08";               T_max[tuitgestca08]               = 100;  T_type[tuitgestca08]               = TE_type; /* Uitgestelde cyclische aanvraag fase 08                                                   */
    T_code[tuitgestca09]               = "uitgestca09";               T_max[tuitgestca09]               = 100;  T_type[tuitgestca09]               = TE_type; /* Uitgestelde cyclische aanvraag fase 09                                                   */
    T_code[tuitgestca11]               = "uitgestca11";               T_max[tuitgestca11]               = 100;  T_type[tuitgestca11]               = TE_type; /* Uitgestelde cyclische aanvraag fase 11                                                   */
    T_code[tuitgestca21]               = "uitgestca21";               T_max[tuitgestca21]               = 100;  T_type[tuitgestca21]               = TE_type; /* Uitgestelde cyclische aanvraag fase 21                                                   */
    T_code[tuitgestca22]               = "uitgestca22";               T_max[tuitgestca22]               = 100;  T_type[tuitgestca22]               = TE_type; /* Uitgestelde cyclische aanvraag fase 22                                                   */
    T_code[tuitgestca24]               = "uitgestca24";               T_max[tuitgestca24]               = 100;  T_type[tuitgestca24]               = TE_type; /* Uitgestelde cyclische aanvraag fase 24                                                   */
    T_code[tuitgestca26]               = "uitgestca26";               T_max[tuitgestca26]               = 100;  T_type[tuitgestca26]               = TE_type; /* Uitgestelde cyclische aanvraag fase 26                                                   */
    T_code[tuitgestca28]               = "uitgestca28";               T_max[tuitgestca28]               = 100;  T_type[tuitgestca28]               = TE_type; /* Uitgestelde cyclische aanvraag fase 28                                                   */
    T_code[tuitgestca31]               = "uitgestca31";               T_max[tuitgestca31]               = 300;  T_type[tuitgestca31]               = TE_type; /* Uitgestelde cyclische aanvraag fase 31                                                   */
    T_code[tuitgestca32]               = "uitgestca32";               T_max[tuitgestca32]               = 300;  T_type[tuitgestca32]               = TE_type; /* Uitgestelde cyclische aanvraag fase 32                                                   */
    T_code[tuitgestca33]               = "uitgestca33";               T_max[tuitgestca33]               = 300;  T_type[tuitgestca33]               = TE_type; /* Uitgestelde cyclische aanvraag fase 33                                                   */
    T_code[tuitgestca34]               = "uitgestca34";               T_max[tuitgestca34]               = 300;  T_type[tuitgestca34]               = TE_type; /* Uitgestelde cyclische aanvraag fase 34                                                   */
    T_code[tuitgestca38]               = "uitgestca38";               T_max[tuitgestca38]               = 300;  T_type[tuitgestca38]               = TE_type; /* Uitgestelde cyclische aanvraag fase 38                                                   */
    T_code[tuitgestca61]               = "uitgestca61";               T_max[tuitgestca61]               = 100;  T_type[tuitgestca61]               = TE_type; /* Uitgestelde cyclische aanvraag fase 61                                                   */
    T_code[tuitgestca62]               = "uitgestca62";               T_max[tuitgestca62]               = 100;  T_type[tuitgestca62]               = TE_type; /* Uitgestelde cyclische aanvraag fase 62                                                   */
    T_code[tuitgestca67]               = "uitgestca67";               T_max[tuitgestca67]               = 100;  T_type[tuitgestca67]               = TE_type; /* Uitgestelde cyclische aanvraag fase 67                                                   */
    T_code[tuitgestca68]               = "uitgestca68";               T_max[tuitgestca68]               = 100;  T_type[tuitgestca68]               = TE_type; /* Uitgestelde cyclische aanvraag fase 68                                                   */
    T_code[tuitgestca81]               = "uitgestca81";               T_max[tuitgestca81]               = 100;  T_type[tuitgestca81]               = TE_type; /* Uitgestelde cyclische aanvraag fase 81                                                   */
    T_code[tuitgestca82]               = "uitgestca82";               T_max[tuitgestca82]               = 100;  T_type[tuitgestca82]               = TE_type; /* Uitgestelde cyclische aanvraag fase 82                                                   */
    T_code[tuitgestca84]               = "uitgestca84";               T_max[tuitgestca84]               = 100;  T_type[tuitgestca84]               = TE_type; /* Uitgestelde cyclische aanvraag fase 84                                                   */
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
    T_code[twtv24]                     = "wtv24";                     T_max[twtv24]                     = 999;  T_type[twtv24]                     = TE_type; /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    T_code[tvs2205]                    = "vs2205";                    T_max[tvs2205]                    = 20;   T_type[tvs2205]                    = TE_type; /* Voorstarttijd fase 22 op fase 05                                                         */
    T_code[tfo0522]                    = "fo0522";                    T_max[tfo0522]                    = 40;   T_type[tfo0522]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 05                              */
    T_code[tvs2232]                    = "vs2232";                    T_max[tvs2232]                    = 0;    T_type[tvs2232]                    = TE_type; /* Voorstarttijd fase 22 op fase 32                                                         */
    T_code[tfo3222]                    = "fo3222";                    T_max[tfo3222]                    = 0;    T_type[tfo3222]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 32                              */
    T_code[tvs2434]                    = "vs2434";                    T_max[tvs2434]                    = 0;    T_type[tvs2434]                    = TE_type; /* Voorstarttijd fase 24 op fase 34                                                         */
    T_code[tfo3424]                    = "fo3424";                    T_max[tfo3424]                    = 0;    T_type[tfo3424]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 24 naar fase 34                              */
    T_code[tvs2838]                    = "vs2838";                    T_max[tvs2838]                    = 0;    T_type[tvs2838]                    = TE_type; /* Voorstarttijd fase 28 op fase 38                                                         */
    T_code[tfo3828]                    = "fo3828";                    T_max[tfo3828]                    = 0;    T_type[tfo3828]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 28 naar fase 38                              */
    T_code[tvs3205]                    = "vs3205";                    T_max[tvs3205]                    = 20;   T_type[tvs3205]                    = TE_type; /* Voorstarttijd fase 32 op fase 05                                                         */
    T_code[tfo0532]                    = "fo0532";                    T_max[tfo0532]                    = 50;   T_type[tfo0532]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 32 naar fase 05                              */
    T_code[tvs8433]                    = "vs8433";                    T_max[tvs8433]                    = 0;    T_type[tvs8433]                    = TE_type; /* Voorstarttijd fase 84 op fase 33                                                         */
    T_code[tfo3384]                    = "fo3384";                    T_max[tfo3384]                    = 0;    T_type[tfo3384]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 84 naar fase 33                              */
    T_code[tlr2611]                    = "lr2611";                    T_max[tlr2611]                    = 10;   T_type[tlr2611]                    = TE_type; /* Late release tijd fase 26 naar fase 11                                                   */
    T_code[tfo2611]                    = "fo2611";                    T_max[tfo2611]                    = 30;   T_type[tfo2611]                    = TE_type; /* Fictieve ontruimingstijd/intergroentijd van 26 naar fase 11                              */
    T_code[txnl0262]                   = "xnl0262";                   T_max[txnl0262]                   = 30;   T_type[txnl0262]                   = TE_type; /* Tegenhouden fase 02 tbv naloop naar fase 62                                              */
    T_code[txnl0868]                   = "xnl0868";                   T_max[txnl0868]                   = 30;   T_type[txnl0868]                   = TE_type; /* Tegenhouden fase 08 tbv naloop naar fase 68                                              */
    T_code[txnl1168]                   = "xnl1168";                   T_max[txnl1168]                   = 30;   T_type[txnl1168]                   = TE_type; /* Tegenhouden fase 11 tbv naloop naar fase 68                                              */
    T_code[txnl2221]                   = "xnl2221";                   T_max[txnl2221]                   = 30;   T_type[txnl2221]                   = TE_type; /* Tegenhouden fase 22 tbv naloop naar fase 21                                              */
    T_code[txnl3132]                   = "xnl3132";                   T_max[txnl3132]                   = 31;   T_type[txnl3132]                   = TE_type; /* Tegenhouden fase 31 tbv naloop naar fase 32                                              */
    T_code[txnl3231]                   = "xnl3231";                   T_max[txnl3231]                   = 32;   T_type[txnl3231]                   = TE_type; /* Tegenhouden fase 32 tbv naloop naar fase 31                                              */
    T_code[txnl3334]                   = "xnl3334";                   T_max[txnl3334]                   = 33;   T_type[txnl3334]                   = TE_type; /* Tegenhouden fase 33 tbv naloop naar fase 34                                              */
    T_code[txnl3433]                   = "xnl3433";                   T_max[txnl3433]                   = 34;   T_type[txnl3433]                   = TE_type; /* Tegenhouden fase 34 tbv naloop naar fase 33                                              */
    T_code[txnl8281]                   = "xnl8281";                   T_max[txnl8281]                   = 30;   T_type[txnl8281]                   = TE_type; /* Tegenhouden fase 82 tbv naloop naar fase 81                                              */

/* teller elementen */
/* ---------------- */
    C_code[cvchst02karbus]      = "vchst02karbus";      C_max[cvchst02karbus]      = 999; C_type[cvchst02karbus]      = CT_type; /* OV inmeldingen fase 02 tijdens halfstar regelen Bus   */
    C_code[cvchst03karbus]      = "vchst03karbus";      C_max[cvchst03karbus]      = 999; C_type[cvchst03karbus]      = CT_type; /* OV inmeldingen fase 03 tijdens halfstar regelen Bus   */
    C_code[cvchst05karbus]      = "vchst05karbus";      C_max[cvchst05karbus]      = 999; C_type[cvchst05karbus]      = CT_type; /* OV inmeldingen fase 05 tijdens halfstar regelen Bus   */
    C_code[cvchst08karbus]      = "vchst08karbus";      C_max[cvchst08karbus]      = 999; C_type[cvchst08karbus]      = CT_type; /* OV inmeldingen fase 08 tijdens halfstar regelen Bus   */
    C_code[cvchst09karbus]      = "vchst09karbus";      C_max[cvchst09karbus]      = 999; C_type[cvchst09karbus]      = CT_type; /* OV inmeldingen fase 09 tijdens halfstar regelen Bus   */
    C_code[cvchst11karbus]      = "vchst11karbus";      C_max[cvchst11karbus]      = 999; C_type[cvchst11karbus]      = CT_type; /* OV inmeldingen fase 11 tijdens halfstar regelen Bus   */
    C_code[cvchst22fiets]       = "vchst22fiets";       C_max[cvchst22fiets]       = 999; C_type[cvchst22fiets]       = CT_type; /* OV inmeldingen fase 22 tijdens halfstar regelen Fiets */
    C_code[cvchst28fiets]       = "vchst28fiets";       C_max[cvchst28fiets]       = 999; C_type[cvchst28fiets]       = CT_type; /* OV inmeldingen fase 28 tijdens halfstar regelen Fiets */
    C_code[cvchst61karbus]      = "vchst61karbus";      C_max[cvchst61karbus]      = 999; C_type[cvchst61karbus]      = CT_type; /* OV inmeldingen fase 61 tijdens halfstar regelen Bus   */
    C_code[cvchst62karbus]      = "vchst62karbus";      C_max[cvchst62karbus]      = 999; C_type[cvchst62karbus]      = CT_type; /* OV inmeldingen fase 62 tijdens halfstar regelen Bus   */
    C_code[cvchst67karbus]      = "vchst67karbus";      C_max[cvchst67karbus]      = 999; C_type[cvchst67karbus]      = CT_type; /* OV inmeldingen fase 67 tijdens halfstar regelen Bus   */
    C_code[cvchst68karbus]      = "vchst68karbus";      C_max[cvchst68karbus]      = 999; C_type[cvchst68karbus]      = CT_type; /* OV inmeldingen fase 68 tijdens halfstar regelen Bus   */
    C_code[cvc02karbus]         = "vc02karbus";         C_max[cvc02karbus]         = 999; C_type[cvc02karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 02 type Bus           */
    C_code[cvc03karbus]         = "vc03karbus";         C_max[cvc03karbus]         = 999; C_type[cvc03karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 03 type Bus           */
    C_code[cvc05karbus]         = "vc05karbus";         C_max[cvc05karbus]         = 999; C_type[cvc05karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 05 type Bus           */
    C_code[cvc08karbus]         = "vc08karbus";         C_max[cvc08karbus]         = 999; C_type[cvc08karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 08 type Bus           */
    C_code[cvc09karbus]         = "vc09karbus";         C_max[cvc09karbus]         = 999; C_type[cvc09karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 09 type Bus           */
    C_code[cvc11karbus]         = "vc11karbus";         C_max[cvc11karbus]         = 999; C_type[cvc11karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 11 type Bus           */
    C_code[cftscyc22fietsfiets] = "ftscyc22fietsfiets"; C_max[cftscyc22fietsfiets] = 999;                                        /* Bijhouden realisaties tbv peloton prio voor fase 22   */
    C_code[cvc22fiets]          = "vc22fiets";          C_max[cvc22fiets]          = 999; C_type[cvc22fiets]          = CT_type; /* Bijhouden prio inmeldingen fase 22 type Fiets         */
    C_code[cftscyc28fietsfiets] = "ftscyc28fietsfiets"; C_max[cftscyc28fietsfiets] = 999;                                        /* Bijhouden realisaties tbv peloton prio voor fase 28   */
    C_code[cvc28fiets]          = "vc28fiets";          C_max[cvc28fiets]          = 999; C_type[cvc28fiets]          = CT_type; /* Bijhouden prio inmeldingen fase 28 type Fiets         */
    C_code[cvc61karbus]         = "vc61karbus";         C_max[cvc61karbus]         = 999; C_type[cvc61karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 61 type Bus           */
    C_code[cvc62karbus]         = "vc62karbus";         C_max[cvc62karbus]         = 999; C_type[cvc62karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 62 type Bus           */
    C_code[cvc67karbus]         = "vc67karbus";         C_max[cvc67karbus]         = 999; C_type[cvc67karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 67 type Bus           */
    C_code[cvc68karbus]         = "vc68karbus";         C_max[cvc68karbus]         = 999; C_type[cvc68karbus]         = CT_type; /* Bijhouden prio inmeldingen fase 68 type Bus           */
    C_code[cvchd02]             = "vchd02";             C_max[cvchd02]             = 999; C_type[cvchd02]             = CT_type; /* Bijhouden prio inmeldingen fase 02                    */
    C_code[cvchd03]             = "vchd03";             C_max[cvchd03]             = 999; C_type[cvchd03]             = CT_type; /* Bijhouden prio inmeldingen fase 03                    */
    C_code[cvchd05]             = "vchd05";             C_max[cvchd05]             = 999; C_type[cvchd05]             = CT_type; /* Bijhouden prio inmeldingen fase 05                    */
    C_code[cvchd08]             = "vchd08";             C_max[cvchd08]             = 999; C_type[cvchd08]             = CT_type; /* Bijhouden prio inmeldingen fase 08                    */
    C_code[cvchd09]             = "vchd09";             C_max[cvchd09]             = 999; C_type[cvchd09]             = CT_type; /* Bijhouden prio inmeldingen fase 09                    */
    C_code[cvchd11]             = "vchd11";             C_max[cvchd11]             = 999; C_type[cvchd11]             = CT_type; /* Bijhouden prio inmeldingen fase 11                    */
    C_code[cvchd61]             = "vchd61";             C_max[cvchd61]             = 999; C_type[cvchd61]             = CT_type; /* Bijhouden prio inmeldingen fase 61                    */
    C_code[cvchd62]             = "vchd62";             C_max[cvchd62]             = 999; C_type[cvchd62]             = CT_type; /* Bijhouden prio inmeldingen fase 62                    */
    C_code[cvchd67]             = "vchd67";             C_max[cvchd67]             = 999; C_type[cvchd67]             = CT_type; /* Bijhouden prio inmeldingen fase 67                    */
    C_code[cvchd68]             = "vchd68";             C_max[cvchd68]             = 999; C_type[cvchd68]             = CT_type; /* Bijhouden prio inmeldingen fase 68                    */

/* schakelaars */
/* ----------- */
    SCH_code[schdynhiaat08]            = "dynhiaat08";            SCH[schdynhiaat08]            = 1;                                        /* Toepassen dynamisch hiaat bij fase 08                                */
    SCH_code[schopdrempelen08]         = "opdrempelen08";         SCH[schopdrempelen08]         = 1;                                        /* Opdrempelen toepassen voor fase 08                                   */
    SCH_code[schedkop_08]              = "edkop_08";              SCH[schedkop_08]              = 1;                                        /* Start timers dynamische hiaat fase 08 op einde detectie koplus       */
    SCH_code[schdynhiaat09]            = "dynhiaat09";            SCH[schdynhiaat09]            = 1;                                        /* Toepassen dynamisch hiaat bij fase 09                                */
    SCH_code[schopdrempelen09]         = "opdrempelen09";         SCH[schopdrempelen09]         = 0;                                        /* Opdrempelen toepassen voor fase 09                                   */
    SCH_code[schedkop_09]              = "edkop_09";              SCH[schedkop_09]              = 1;                                        /* Start timers dynamische hiaat fase 09 op einde detectie koplus       */
    SCH_code[schdynhiaat11]            = "dynhiaat11";            SCH[schdynhiaat11]            = 1;                                        /* Toepassen dynamisch hiaat bij fase 11                                */
    SCH_code[schopdrempelen11]         = "opdrempelen11";         SCH[schopdrempelen11]         = 0;                                        /* Opdrempelen toepassen voor fase 11                                   */
    SCH_code[schedkop_11]              = "edkop_11";              SCH[schedkop_11]              = 1;                                        /* Start timers dynamische hiaat fase 11 op einde detectie koplus       */
    SCH_code[schtypeuswt]              = "typeuswt";              SCH[schtypeuswt]              = 1;                                        /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag    */
    SCH_code[schcycl]                  = "cycl";                  SCH[schcycl]                  = 0;                                        /* Bijhouden actuele cyclustijd aan of uit                              */
    SCH_code[schcycl_reset]            = "cycl_reset";            SCH[schcycl_reset]            = 0;                                        /* Reset meting cyclustijd                                              */
    SCH_code[schdvakd02_1a]            = "dvakd02_1a";            SCH[schdvakd02_1a]            = 1;                                        /* Aanvraag fase 02 bij storing op detector 02_1a                       */
    SCH_code[schdvakd02_1b]            = "dvakd02_1b";            SCH[schdvakd02_1b]            = 1;                                        /* Aanvraag fase 02 bij storing op detector 02_1b                       */
    SCH_code[schdvakd03_1]             = "dvakd03_1";             SCH[schdvakd03_1]             = 1;                                        /* Aanvraag fase 03 bij storing op detector 03_1                        */
    SCH_code[schdvakdk31a]             = "dvakdk31a";             SCH[schdvakdk31a]             = 1;                                        /* Aanvraag fase 31 bij storing op detector k31a                        */
    SCH_code[schdvakdk31b]             = "dvakdk31b";             SCH[schdvakdk31b]             = 1;                                        /* Aanvraag fase 31 bij storing op detector k31b                        */
    SCH_code[schfileFile68af]          = "fileFile68af";          SCH[schfileFile68af]          = 1;                                        /* File ingreep File68af toepassen                                      */
    SCH_code[schfiledoserenFile68af]   = "filedoserenFile68af";   SCH[schfiledoserenFile68af]   = 1;                                        /* Toepassen doseerpercentages voor fileingreep File68af                */
    SCH_code[schfileFile68afparstrook] = "fileFile68afparstrook"; SCH[schfileFile68afparstrook] = 1;                                        /* Parallele file meldingen per strook file ingreep File68af            */
    SCH_code[schbmfix]                 = "bmfix";                 SCH[schbmfix]                 = 1;                                        /* Bijkomen tijdens fixatie mogelijk                                    */
    SCH_code[schaltghst02]             = "altghst02";             SCH[schaltghst02]             = 0;                                        /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst03]             = "altghst03";             SCH[schaltghst03]             = 1;                                        /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst05]             = "altghst05";             SCH[schaltghst05]             = 1;                                        /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst08]             = "altghst08";             SCH[schaltghst08]             = 0;                                        /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst09]             = "altghst09";             SCH[schaltghst09]             = 1;                                        /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst11]             = "altghst11";             SCH[schaltghst11]             = 1;                                        /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst21]             = "altghst21";             SCH[schaltghst21]             = 1;                                        /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst22]             = "altghst22";             SCH[schaltghst22]             = 1;                                        /* Alternatief realiseren fase 22 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst24]             = "altghst24";             SCH[schaltghst24]             = 1;                                        /* Alternatief realiseren fase 24 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst26]             = "altghst26";             SCH[schaltghst26]             = 0;                                        /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst28]             = "altghst28";             SCH[schaltghst28]             = 0;                                        /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst31]             = "altghst31";             SCH[schaltghst31]             = 0;                                        /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst32]             = "altghst32";             SCH[schaltghst32]             = 0;                                        /* Alternatief realiseren fase 32 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst88]             = "altghst88";             SCH[schaltghst88]             = 1;                                        /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst84]             = "altghst84";             SCH[schaltghst84]             = 0;                                        /* Alternatief realiseren fase 84 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst82]             = "altghst82";             SCH[schaltghst82]             = 0;                                        /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst81]             = "altghst81";             SCH[schaltghst81]             = 1;                                        /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst68]             = "altghst68";             SCH[schaltghst68]             = 0;                                        /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst67]             = "altghst67";             SCH[schaltghst67]             = 0;                                        /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst62]             = "altghst62";             SCH[schaltghst62]             = 0;                                        /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst61]             = "altghst61";             SCH[schaltghst61]             = 0;                                        /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst38]             = "altghst38";             SCH[schaltghst38]             = 1;                                        /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst34]             = "altghst34";             SCH[schaltghst34]             = 0;                                        /* Alternatief realiseren fase 34 toestaan tijdens halfstar regelen     */
    SCH_code[schaltghst33]             = "altghst33";             SCH[schaltghst33]             = 0;                                        /* Alternatief realiseren fase 33 toestaan tijdens halfstar regelen     */
    SCH_code[schtegenov02]             = "tegenov02";             SCH[schtegenov02]             = 0;                                        /* Tegenhouden hoofdrichting 02 bij OV ingreep                          */
    SCH_code[schafkwgov02]             = "afkwgov02";             SCH[schafkwgov02]             = 0;                                        /* Afkappen WG hoofdrichting 02 bij OV ingreep                          */
    SCH_code[schafkvgov02]             = "afkvgov02";             SCH[schafkvgov02]             = 0;                                        /* Afkappen VG hoofdrichting 02 bij OV ingreep                          */
    SCH_code[schtegenov08]             = "tegenov08";             SCH[schtegenov08]             = 0;                                        /* Tegenhouden hoofdrichting 08 bij OV ingreep                          */
    SCH_code[schafkwgov08]             = "afkwgov08";             SCH[schafkwgov08]             = 0;                                        /* Afkappen WG hoofdrichting 08 bij OV ingreep                          */
    SCH_code[schafkvgov08]             = "afkvgov08";             SCH[schafkvgov08]             = 0;                                        /* Afkappen VG hoofdrichting 08 bij OV ingreep                          */
    SCH_code[schinst]                  = "inst";                  SCH[schinst]                  = 0;                                        /* Eenmalig instellen signaalplannen na wijziging                       */
    SCH_code[schslavebep]              = "slavebep";              SCH[schslavebep]              = 0;                                        /* Slave bepaald PL aansturing                                          */
    SCH_code[schvaml]                  = "vaml";                  SCH[schvaml]                  = 1;                                        /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)         */
    SCH_code[schvar]                   = "var";                   SCH[schvar]                   = 0;                                        /* VA regelen aan of uit                                                */
    SCH_code[scharh]                   = "arh";                   SCH[scharh]                   = 0;                                        /* Toestaan alternatieven voor hoofdrichtingen                          */
    SCH_code[schpervardef]             = "pervardef";             SCH[schpervardef]             = 1;                                        /* VA regelen periode default                                           */
    SCH_code[schpervar1]               = "pervar1";               SCH[schpervar1]               = 1;                                        /* VA regelen periode nacht                                             */
    SCH_code[schpervar2]               = "pervar2";               SCH[schpervar2]               = 1;                                        /* VA regelen periode dag                                               */
    SCH_code[schpervar3]               = "pervar3";               SCH[schpervar3]               = 1;                                        /* VA regelen periode ochtend                                           */
    SCH_code[schpervar4]               = "pervar4";               SCH[schpervar4]               = 1;                                        /* VA regelen periode avond                                             */
    SCH_code[schpervar5]               = "pervar5";               SCH[schpervar5]               = 1;                                        /* VA regelen periode koopavond                                         */
    SCH_code[schpervar6]               = "pervar6";               SCH[schpervar6]               = 1;                                        /* VA regelen periode weekend                                           */
    SCH_code[schpervar7]               = "pervar7";               SCH[schpervar7]               = 1;                                        /* VA regelen periode reserve                                           */
    SCH_code[schperarhdef]             = "perarhdef";             SCH[schperarhdef]             = 0;                                        /* Alternatieven voor hoofdrichtingen periode default                   */
    SCH_code[schperarh1]               = "perarh1";               SCH[schperarh1]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode nacht                     */
    SCH_code[schperarh2]               = "perarh2";               SCH[schperarh2]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode dag                       */
    SCH_code[schperarh3]               = "perarh3";               SCH[schperarh3]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode ochtend                   */
    SCH_code[schperarh4]               = "perarh4";               SCH[schperarh4]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode avond                     */
    SCH_code[schperarh5]               = "perarh5";               SCH[schperarh5]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode koopavond                 */
    SCH_code[schperarh6]               = "perarh6";               SCH[schperarh6]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode weekend                   */
    SCH_code[schperarh7]               = "perarh7";               SCH[schperarh7]               = 0;                                        /* Alternatieven voor hoofdrichtingen periode reserve                   */
    SCH_code[schovpriople]             = "ovpriople";             SCH[schovpriople]             = 0;                                        /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf               */
    SCH_code[schma0261]                = "ma0261";                SCH[schma0261]                = 0;                                        /* Meeaanvraag van 02 naar 61 actief                                    */
    SCH_code[schma0262]                = "ma0262";                SCH[schma0262]                = 1;                                        /* Meeaanvraag van 02 naar 62 actief                                    */
    SCH_code[schma0521]                = "ma0521";                SCH[schma0521]                = 0;                                        /* Meeaanvraag van 05 naar 21 actief                                    */
    SCH_code[schma0522]                = "ma0522";                SCH[schma0522]                = 1;                                        /* Meeaanvraag van 05 naar 22 actief                                    */
    SCH_code[schma0532]                = "ma0532";                SCH[schma0532]                = 1;                                        /* Meeaanvraag van 05 naar 32 actief                                    */
    SCH_code[schma0868]                = "ma0868";                SCH[schma0868]                = 1;                                        /* Meeaanvraag van 08 naar 68 actief                                    */
    SCH_code[schma1126]                = "ma1126";                SCH[schma1126]                = 1;                                        /* Meeaanvraag van 11 naar 26 actief                                    */
    SCH_code[schma1168]                = "ma1168";                SCH[schma1168]                = 1;                                        /* Meeaanvraag van 11 naar 68 actief                                    */
    SCH_code[schma2221]                = "ma2221";                SCH[schma2221]                = 1;                                        /* Meeaanvraag van 22 naar 21 actief                                    */
    SCH_code[schma2611]                = "ma2611";                SCH[schma2611]                = 1;                                        /* Meeaanvraag van 26 naar 11 actief                                    */
    SCH_code[schma3122]                = "ma3122";                SCH[schma3122]                = 1;                                        /* Meeaanvraag van 31 naar 22 actief                                    */
    SCH_code[schma3132]                = "ma3132";                SCH[schma3132]                = 1;                                        /* Meeaanvraag van 31 naar 32 actief                                    */
    SCH_code[schma3222]                = "ma3222";                SCH[schma3222]                = 1;                                        /* Meeaanvraag van 32 naar 22 actief                                    */
    SCH_code[schma3231]                = "ma3231";                SCH[schma3231]                = 1;                                        /* Meeaanvraag van 32 naar 31 actief                                    */
    SCH_code[schma3324]                = "ma3324";                SCH[schma3324]                = 1;                                        /* Meeaanvraag van 33 naar 24 actief                                    */
    SCH_code[schma3334]                = "ma3334";                SCH[schma3334]                = 1;                                        /* Meeaanvraag van 33 naar 34 actief                                    */
    SCH_code[schma3384]                = "ma3384";                SCH[schma3384]                = 1;                                        /* Meeaanvraag van 33 naar 84 actief                                    */
    SCH_code[schma3424]                = "ma3424";                SCH[schma3424]                = 1;                                        /* Meeaanvraag van 34 naar 24 actief                                    */
    SCH_code[schma3433]                = "ma3433";                SCH[schma3433]                = 1;                                        /* Meeaanvraag van 34 naar 33 actief                                    */
    SCH_code[schma3484]                = "ma3484";                SCH[schma3484]                = 1;                                        /* Meeaanvraag van 34 naar 84 actief                                    */
    SCH_code[schma3828]                = "ma3828";                SCH[schma3828]                = 1;                                        /* Meeaanvraag van 38 naar 28 actief                                    */
    SCH_code[schma8281]                = "ma8281";                SCH[schma8281]                = 1;                                        /* Meeaanvraag van 82 naar 81 actief                                    */
    SCH_code[schmv02]                  = "mv02";                  SCH[schmv02]                  = 1;                                        /* Meeverlengen fase 02                                                 */
    SCH_code[schmv03]                  = "mv03";                  SCH[schmv03]                  = 1;                                        /* Meeverlengen fase 03                                                 */
    SCH_code[schmv05]                  = "mv05";                  SCH[schmv05]                  = 1;                                        /* Meeverlengen fase 05                                                 */
    SCH_code[schmv08]                  = "mv08";                  SCH[schmv08]                  = 1;                                        /* Meeverlengen fase 08                                                 */
    SCH_code[schmv09]                  = "mv09";                  SCH[schmv09]                  = 1;                                        /* Meeverlengen fase 09                                                 */
    SCH_code[schmv11]                  = "mv11";                  SCH[schmv11]                  = 1;                                        /* Meeverlengen fase 11                                                 */
    SCH_code[schmv21]                  = "mv21";                  SCH[schmv21]                  = 1;                                        /* Meeverlengen fase 21                                                 */
    SCH_code[schmv22]                  = "mv22";                  SCH[schmv22]                  = 1;                                        /* Meeverlengen fase 22                                                 */
    SCH_code[schhardmv2205]            = "hardmv2205";            SCH[schhardmv2205]            = 0;                                        /* Hard meeverlengen fase 22 met fase 05                                */
    SCH_code[schmv24]                  = "mv24";                  SCH[schmv24]                  = 1;                                        /* Meeverlengen fase 24                                                 */
    SCH_code[schmv26]                  = "mv26";                  SCH[schmv26]                  = 1;                                        /* Meeverlengen fase 26                                                 */
    SCH_code[schhardmv2611]            = "hardmv2611";            SCH[schhardmv2611]            = 0;                                        /* Hard meeverlengen fase 26 met fase 11                                */
    SCH_code[schmv28]                  = "mv28";                  SCH[schmv28]                  = 1;                                        /* Meeverlengen fase 28                                                 */
    SCH_code[schmv31]                  = "mv31";                  SCH[schmv31]                  = 0;                                        /* Meeverlengen fase 31                                                 */
    SCH_code[schmv32]                  = "mv32";                  SCH[schmv32]                  = 0;                                        /* Meeverlengen fase 32                                                 */
    SCH_code[schhardmv3205]            = "hardmv3205";            SCH[schhardmv3205]            = 0;                                        /* Hard meeverlengen fase 32 met fase 05                                */
    SCH_code[schmv33]                  = "mv33";                  SCH[schmv33]                  = 0;                                        /* Meeverlengen fase 33                                                 */
    SCH_code[schmv34]                  = "mv34";                  SCH[schmv34]                  = 0;                                        /* Meeverlengen fase 34                                                 */
    SCH_code[schmv38]                  = "mv38";                  SCH[schmv38]                  = 0;                                        /* Meeverlengen fase 38                                                 */
    SCH_code[schmv61]                  = "mv61";                  SCH[schmv61]                  = 0;                                        /* Meeverlengen fase 61                                                 */
    SCH_code[schmv62]                  = "mv62";                  SCH[schmv62]                  = 0;                                        /* Meeverlengen fase 62                                                 */
    SCH_code[schmv67]                  = "mv67";                  SCH[schmv67]                  = 1;                                        /* Meeverlengen fase 67                                                 */
    SCH_code[schmv68]                  = "mv68";                  SCH[schmv68]                  = 0;                                        /* Meeverlengen fase 68                                                 */
    SCH_code[schmv81]                  = "mv81";                  SCH[schmv81]                  = 1;                                        /* Meeverlengen fase 81                                                 */
    SCH_code[schmv82]                  = "mv82";                  SCH[schmv82]                  = 1;                                        /* Meeverlengen fase 82                                                 */
    SCH_code[schmv84]                  = "mv84";                  SCH[schmv84]                  = 1;                                        /* Meeverlengen fase 84                                                 */
    SCH_code[schmlprm]                 = "mlprm";                 SCH[schmlprm]                 = 0;                                        /* Toepassen parametriseerbare modulestructuur                          */
    SCH_code[schovstipt02karbus]       = "ovstipt02karbus";       SCH[schovstipt02karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 02 Bus                         */
    SCH_code[schovstipt03karbus]       = "ovstipt03karbus";       SCH[schovstipt03karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 03 Bus                         */
    SCH_code[schovstipt05karbus]       = "ovstipt05karbus";       SCH[schovstipt05karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 05 Bus                         */
    SCH_code[schovstipt08karbus]       = "ovstipt08karbus";       SCH[schovstipt08karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 08 Bus                         */
    SCH_code[schovstipt09karbus]       = "ovstipt09karbus";       SCH[schovstipt09karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 09 Bus                         */
    SCH_code[schovstipt11karbus]       = "ovstipt11karbus";       SCH[schovstipt11karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 11 Bus                         */
    SCH_code[schovstipt61karbus]       = "ovstipt61karbus";       SCH[schovstipt61karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 61 Bus                         */
    SCH_code[schovstipt62karbus]       = "ovstipt62karbus";       SCH[schovstipt62karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 62 Bus                         */
    SCH_code[schovstipt67karbus]       = "ovstipt67karbus";       SCH[schovstipt67karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 67 Bus                         */
    SCH_code[schovstipt68karbus]       = "ovstipt68karbus";       SCH[schovstipt68karbus]       = 0;                                        /* Geconditioneerde prioteit voor OV bij 68 Bus                         */
    SCH_code[schcovuber]               = "covuber";               SCH[schcovuber]               = 1;                                        /* Weergeven wijzigingen PRIO_teller via CIF_UBER                       */
    SCH_code[schcheckdstype]           = "checkdstype";           SCH[schcheckdstype]           = 1;                                        /* Check type DSI bericht bij VECOM                                     */
    SCH_code[schprioin02karbuskar]     = "prioin02karbuskar";     SCH[schprioin02karbuskar]     = 1;                                        /* Inmelden 02 via Bus toestaan                                         */
    SCH_code[schpriouit02karbuskar]    = "priouit02karbuskar";    SCH[schpriouit02karbuskar]    = 1;                                        /* Uitmelden 02 via Bus toestaan                                        */
    SCH_code[schprioin03karbuskar]     = "prioin03karbuskar";     SCH[schprioin03karbuskar]     = 1;                                        /* Inmelden 03 via Bus toestaan                                         */
    SCH_code[schpriouit03karbuskar]    = "priouit03karbuskar";    SCH[schpriouit03karbuskar]    = 1;                                        /* Uitmelden 03 via Bus toestaan                                        */
    SCH_code[schprioin05karbuskar]     = "prioin05karbuskar";     SCH[schprioin05karbuskar]     = 1;                                        /* Inmelden 05 via Bus toestaan                                         */
    SCH_code[schpriouit05karbuskar]    = "priouit05karbuskar";    SCH[schpriouit05karbuskar]    = 1;                                        /* Uitmelden 05 via Bus toestaan                                        */
    SCH_code[schprioin08karbuskar]     = "prioin08karbuskar";     SCH[schprioin08karbuskar]     = 1;                                        /* Inmelden 08 via Bus toestaan                                         */
    SCH_code[schpriouit08karbuskar]    = "priouit08karbuskar";    SCH[schpriouit08karbuskar]    = 1;                                        /* Uitmelden 08 via Bus toestaan                                        */
    SCH_code[schprioin09karbuskar]     = "prioin09karbuskar";     SCH[schprioin09karbuskar]     = 1;                                        /* Inmelden 09 via Bus toestaan                                         */
    SCH_code[schpriouit09karbuskar]    = "priouit09karbuskar";    SCH[schpriouit09karbuskar]    = 1;                                        /* Uitmelden 09 via Bus toestaan                                        */
    SCH_code[schprioin11karbuskar]     = "prioin11karbuskar";     SCH[schprioin11karbuskar]     = 1;                                        /* Inmelden 11 via Bus toestaan                                         */
    SCH_code[schpriouit11karbuskar]    = "priouit11karbuskar";    SCH[schpriouit11karbuskar]    = 1;                                        /* Uitmelden 11 via Bus toestaan                                        */
    SCH_code[schprioin22fietsfiets]    = "prioin22fietsfiets";    SCH[schprioin22fietsfiets]    = 1;                                        /* Inmelden 22 via Fiets toestaan                                       */
    SCH_code[schpriouit22fietsfiets]   = "priouit22fietsfiets";   SCH[schpriouit22fietsfiets]   = 1;                                        /* Uitmelden 22 via Fiets toestaan                                      */
    SCH_code[schprioin28fietsfiets]    = "prioin28fietsfiets";    SCH[schprioin28fietsfiets]    = 1;                                        /* Inmelden 28 via Fiets toestaan                                       */
    SCH_code[schpriouit28fietsfiets]   = "priouit28fietsfiets";   SCH[schpriouit28fietsfiets]   = 1;                                        /* Uitmelden 28 via Fiets toestaan                                      */
    SCH_code[schprioin61karbuskar]     = "prioin61karbuskar";     SCH[schprioin61karbuskar]     = 1;                                        /* Inmelden 61 via Bus toestaan                                         */
    SCH_code[schpriouit61karbuskar]    = "priouit61karbuskar";    SCH[schpriouit61karbuskar]    = 1;                                        /* Uitmelden 61 via Bus toestaan                                        */
    SCH_code[schprioin62karbuskar]     = "prioin62karbuskar";     SCH[schprioin62karbuskar]     = 1;                                        /* Inmelden 62 via Bus toestaan                                         */
    SCH_code[schpriouit62karbuskar]    = "priouit62karbuskar";    SCH[schpriouit62karbuskar]    = 1;                                        /* Uitmelden 62 via Bus toestaan                                        */
    SCH_code[schprioin67karbuskar]     = "prioin67karbuskar";     SCH[schprioin67karbuskar]     = 1;                                        /* Inmelden 67 via Bus toestaan                                         */
    SCH_code[schpriouit67karbuskar]    = "priouit67karbuskar";    SCH[schpriouit67karbuskar]    = 1;                                        /* Uitmelden 67 via Bus toestaan                                        */
    SCH_code[schprioin68karbuskar]     = "prioin68karbuskar";     SCH[schprioin68karbuskar]     = 1;                                        /* Inmelden 68 via Bus toestaan                                         */
    SCH_code[schpriouit68karbuskar]    = "priouit68karbuskar";    SCH[schpriouit68karbuskar]    = 1;                                        /* Uitmelden 68 via Bus toestaan                                        */
    SCH_code[schhdin02kar]             = "hdin02kar";             SCH[schhdin02kar]             = 1;                                        /* Inmelden 02 via KAR HD toestaan                                      */
    SCH_code[schhduit02kar]            = "hduit02kar";            SCH[schhduit02kar]            = 1;                                        /* Uitmelden 02 via KAR HD toestaan                                     */
    SCH_code[schchecksirene02]         = "checksirene02";         SCH[schchecksirene02]         = 1;                                        /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin03kar]             = "hdin03kar";             SCH[schhdin03kar]             = 1;                                        /* Inmelden 03 via KAR HD toestaan                                      */
    SCH_code[schhduit03kar]            = "hduit03kar";            SCH[schhduit03kar]            = 1;                                        /* Uitmelden 03 via KAR HD toestaan                                     */
    SCH_code[schchecksirene03]         = "checksirene03";         SCH[schchecksirene03]         = 1;                                        /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin05kar]             = "hdin05kar";             SCH[schhdin05kar]             = 1;                                        /* Inmelden 05 via KAR HD toestaan                                      */
    SCH_code[schhduit05kar]            = "hduit05kar";            SCH[schhduit05kar]            = 1;                                        /* Uitmelden 05 via KAR HD toestaan                                     */
    SCH_code[schchecksirene05]         = "checksirene05";         SCH[schchecksirene05]         = 1;                                        /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin08kar]             = "hdin08kar";             SCH[schhdin08kar]             = 1;                                        /* Inmelden 08 via KAR HD toestaan                                      */
    SCH_code[schhduit08kar]            = "hduit08kar";            SCH[schhduit08kar]            = 1;                                        /* Uitmelden 08 via KAR HD toestaan                                     */
    SCH_code[schchecksirene08]         = "checksirene08";         SCH[schchecksirene08]         = 1;                                        /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin09kar]             = "hdin09kar";             SCH[schhdin09kar]             = 1;                                        /* Inmelden 09 via KAR HD toestaan                                      */
    SCH_code[schhduit09kar]            = "hduit09kar";            SCH[schhduit09kar]            = 1;                                        /* Uitmelden 09 via KAR HD toestaan                                     */
    SCH_code[schchecksirene09]         = "checksirene09";         SCH[schchecksirene09]         = 1;                                        /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin11kar]             = "hdin11kar";             SCH[schhdin11kar]             = 1;                                        /* Inmelden 11 via KAR HD toestaan                                      */
    SCH_code[schhduit11kar]            = "hduit11kar";            SCH[schhduit11kar]            = 1;                                        /* Uitmelden 11 via KAR HD toestaan                                     */
    SCH_code[schchecksirene11]         = "checksirene11";         SCH[schchecksirene11]         = 1;                                        /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin61kar]             = "hdin61kar";             SCH[schhdin61kar]             = 1;                                        /* Inmelden 61 via KAR HD toestaan                                      */
    SCH_code[schhduit61kar]            = "hduit61kar";            SCH[schhduit61kar]            = 1;                                        /* Uitmelden 61 via KAR HD toestaan                                     */
    SCH_code[schchecksirene61]         = "checksirene61";         SCH[schchecksirene61]         = 1;                                        /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin62kar]             = "hdin62kar";             SCH[schhdin62kar]             = 1;                                        /* Inmelden 62 via KAR HD toestaan                                      */
    SCH_code[schhduit62kar]            = "hduit62kar";            SCH[schhduit62kar]            = 1;                                        /* Uitmelden 62 via KAR HD toestaan                                     */
    SCH_code[schchecksirene62]         = "checksirene62";         SCH[schchecksirene62]         = 1;                                        /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin67kar]             = "hdin67kar";             SCH[schhdin67kar]             = 1;                                        /* Inmelden 67 via KAR HD toestaan                                      */
    SCH_code[schhduit67kar]            = "hduit67kar";            SCH[schhduit67kar]            = 1;                                        /* Uitmelden 67 via KAR HD toestaan                                     */
    SCH_code[schchecksirene67]         = "checksirene67";         SCH[schchecksirene67]         = 1;                                        /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR               */
    SCH_code[schhdin68kar]             = "hdin68kar";             SCH[schhdin68kar]             = 1;                                        /* Inmelden 68 via KAR HD toestaan                                      */
    SCH_code[schhduit68kar]            = "hduit68kar";            SCH[schhduit68kar]            = 1;                                        /* Uitmelden 68 via KAR HD toestaan                                     */
    SCH_code[schchecksirene68]         = "checksirene68";         SCH[schchecksirene68]         = 1;                                        /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR               */
    SCH_code[schpelrwKOP02]            = "pelrwKOP02";            SCH[schpelrwKOP02]            = 1;                                        /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02 */
    SCH_code[schpelmkKOP02]            = "pelmkKOP02";            SCH[schpelmkKOP02]            = 1;                                        /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02     */
    SCH_code[schpelaKOP02]             = "pelaKOP02";             SCH[schpelaKOP02]             = 1;                                        /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02          */
    SCH_code[schpkuKOP68_uit68]        = "pkuKOP68_uit68";        SCH[schpkuKOP68_uit68]        = 1;                                        /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit */
    SCH_code[schrgadd24_3]             = "rgadd24_3";             SCH[schrgadd24_3]             = 1;                                        /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2           */
    SCH_code[schrgad24_3]              = "rgad24_3";              SCH[schrgad24_3]              = 1;                                        /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2        */
    SCH_code[schrgvd24_3]              = "rgvd24_3";              SCH[schrgvd24_3]              = 1;                                        /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2        */
    SCH_code[schrgv]                   = "rgv";                   SCH[schrgv]                   = 0;                                        /* RoBuGrover aan of uit                                                */
    SCH_code[schrgv_snel]              = "rgv_snel";              SCH[schrgv_snel]              = 0;                                        /* RoBuGrover versneld ophogen of verlagen                              */
    SCH_code[schschoolingreep31]       = "schoolingreep31";       SCH[schschoolingreep31]       = 1;                                        /* Schoolingreep aan of uit voor fase 31                                */
    SCH_code[schschoolingreep32]       = "schoolingreep32";       SCH[schschoolingreep32]       = 1;                                        /* Schoolingreep aan of uit voor fase 32                                */
    SCH_code[schschoolingreep33]       = "schoolingreep33";       SCH[schschoolingreep33]       = 0;                                        /* Schoolingreep aan of uit voor fase 33                                */
    SCH_code[schschoolingreep34]       = "schoolingreep34";       SCH[schschoolingreep34]       = 0;                                        /* Schoolingreep aan of uit voor fase 34                                */
    SCH_code[schsi31]                  = "si31";                  SCH[schsi31]                  = 1;                                        /* Senioreningreep aan of uit voor fase 31                              */
    SCH_code[schsi32]                  = "si32";                  SCH[schsi32]                  = 1;                                        /* Senioreningreep aan of uit voor fase 32                              */
    SCH_code[schsi33]                  = "si33";                  SCH[schsi33]                  = 0;                                        /* Senioreningreep aan of uit voor fase 33                              */
    SCH_code[schsi34]                  = "si34";                  SCH[schsi34]                  = 0;                                        /* Senioreningreep aan of uit voor fase 34                              */
    SCH_code[schca02]                  = "ca02";                  SCH[schca02]                  = 0;                                        /* Cyclische aanvraag fase 02                                           */
    SCH_code[schca03]                  = "ca03";                  SCH[schca03]                  = 0;                                        /* Cyclische aanvraag fase 03                                           */
    SCH_code[schca05]                  = "ca05";                  SCH[schca05]                  = 0;                                        /* Cyclische aanvraag fase 05                                           */
    SCH_code[schca08]                  = "ca08";                  SCH[schca08]                  = 0;                                        /* Cyclische aanvraag fase 08                                           */
    SCH_code[schca09]                  = "ca09";                  SCH[schca09]                  = 0;                                        /* Cyclische aanvraag fase 09                                           */
    SCH_code[schca11]                  = "ca11";                  SCH[schca11]                  = 0;                                        /* Cyclische aanvraag fase 11                                           */
    SCH_code[schca21]                  = "ca21";                  SCH[schca21]                  = 0;                                        /* Cyclische aanvraag fase 21                                           */
    SCH_code[schca22]                  = "ca22";                  SCH[schca22]                  = 0;                                        /* Cyclische aanvraag fase 22                                           */
    SCH_code[schca24]                  = "ca24";                  SCH[schca24]                  = 0;                                        /* Cyclische aanvraag fase 24                                           */
    SCH_code[schca26]                  = "ca26";                  SCH[schca26]                  = 0;                                        /* Cyclische aanvraag fase 26                                           */
    SCH_code[schca28]                  = "ca28";                  SCH[schca28]                  = 0;                                        /* Cyclische aanvraag fase 28                                           */
    SCH_code[schca31]                  = "ca31";                  SCH[schca31]                  = 0;                                        /* Cyclische aanvraag fase 31                                           */
    SCH_code[schca32]                  = "ca32";                  SCH[schca32]                  = 0;                                        /* Cyclische aanvraag fase 32                                           */
    SCH_code[schca33]                  = "ca33";                  SCH[schca33]                  = 0;                                        /* Cyclische aanvraag fase 33                                           */
    SCH_code[schca34]                  = "ca34";                  SCH[schca34]                  = 0;                                        /* Cyclische aanvraag fase 34                                           */
    SCH_code[schca38]                  = "ca38";                  SCH[schca38]                  = 0;                                        /* Cyclische aanvraag fase 38                                           */
    SCH_code[schca61]                  = "ca61";                  SCH[schca61]                  = 0;                                        /* Cyclische aanvraag fase 61                                           */
    SCH_code[schca62]                  = "ca62";                  SCH[schca62]                  = 0;                                        /* Cyclische aanvraag fase 62                                           */
    SCH_code[schca67]                  = "ca67";                  SCH[schca67]                  = 0;                                        /* Cyclische aanvraag fase 67                                           */
    SCH_code[schca68]                  = "ca68";                  SCH[schca68]                  = 0;                                        /* Cyclische aanvraag fase 68                                           */
    SCH_code[schca81]                  = "ca81";                  SCH[schca81]                  = 0;                                        /* Cyclische aanvraag fase 81                                           */
    SCH_code[schca82]                  = "ca82";                  SCH[schca82]                  = 0;                                        /* Cyclische aanvraag fase 82                                           */
    SCH_code[schca84]                  = "ca84";                  SCH[schca84]                  = 0;                                        /* Cyclische aanvraag fase 84                                           */
    SCH_code[schvg02_4a]               = "vg02_4a";               SCH[schvg02_4a]               = 0;                                        /* Veiligheidsgroen detector 02_4a fase 02                              */
    SCH_code[schvg02_4b]               = "vg02_4b";               SCH[schvg02_4b]               = 0;                                        /* Veiligheidsgroen detector 02_4b fase 02                              */
    SCH_code[schvg08_4a]               = "vg08_4a";               SCH[schvg08_4a]               = 0;                                        /* Veiligheidsgroen detector 08_4a fase 08                              */
    SCH_code[schvg08_4b]               = "vg08_4b";               SCH[schvg08_4b]               = 0;                                        /* Veiligheidsgroen detector 08_4b fase 08                              */
    SCH_code[schvg11_4]                = "vg11_4";                SCH[schvg11_4]                = 0;                                        /* Veiligheidsgroen detector 11_4 fase 11                               */
    SCH_code[schaltg02]                = "altg02";                SCH[schaltg02]                = 1;                                        /* Alternatieve realisatie toestaan fase 02                             */
    SCH_code[schaltg03]                = "altg03";                SCH[schaltg03]                = 1;                                        /* Alternatieve realisatie toestaan fase 03                             */
    SCH_code[schaltg05]                = "altg05";                SCH[schaltg05]                = 1;                                        /* Alternatieve realisatie toestaan fase 05                             */
    SCH_code[schaltg08]                = "altg08";                SCH[schaltg08]                = 1;                                        /* Alternatieve realisatie toestaan fase 08                             */
    SCH_code[schaltg09]                = "altg09";                SCH[schaltg09]                = 1;                                        /* Alternatieve realisatie toestaan fase 09                             */
    SCH_code[schaltg11]                = "altg11";                SCH[schaltg11]                = 1;                                        /* Alternatieve realisatie toestaan fase 11                             */
    SCH_code[schaltg21]                = "altg21";                SCH[schaltg21]                = 1;                                        /* Alternatieve realisatie toestaan fase 21                             */
    SCH_code[schaltg22]                = "altg22";                SCH[schaltg22]                = 1;                                        /* Alternatieve realisatie toestaan fase 22                             */
    SCH_code[schaltg24]                = "altg24";                SCH[schaltg24]                = 1;                                        /* Alternatieve realisatie toestaan fase 24                             */
    SCH_code[schaltg26]                = "altg26";                SCH[schaltg26]                = 1;                                        /* Alternatieve realisatie toestaan fase 26                             */
    SCH_code[schaltg28]                = "altg28";                SCH[schaltg28]                = 1;                                        /* Alternatieve realisatie toestaan fase 28                             */
    SCH_code[schaltg31]                = "altg31";                SCH[schaltg31]                = 1;                                        /* Alternatieve realisatie toestaan fase 31                             */
    SCH_code[schaltg32]                = "altg32";                SCH[schaltg32]                = 1;                                        /* Alternatieve realisatie toestaan fase 32                             */
    SCH_code[schaltg33]                = "altg33";                SCH[schaltg33]                = 1;                                        /* Alternatieve realisatie toestaan fase 33                             */
    SCH_code[schaltg34]                = "altg34";                SCH[schaltg34]                = 1;                                        /* Alternatieve realisatie toestaan fase 34                             */
    SCH_code[schaltg38]                = "altg38";                SCH[schaltg38]                = 1;                                        /* Alternatieve realisatie toestaan fase 38                             */
    SCH_code[schaltg61]                = "altg61";                SCH[schaltg61]                = 1;                                        /* Alternatieve realisatie toestaan fase 61                             */
    SCH_code[schaltg62]                = "altg62";                SCH[schaltg62]                = 1;                                        /* Alternatieve realisatie toestaan fase 62                             */
    SCH_code[schaltg67]                = "altg67";                SCH[schaltg67]                = 1;                                        /* Alternatieve realisatie toestaan fase 67                             */
    SCH_code[schaltg68]                = "altg68";                SCH[schaltg68]                = 1;                                        /* Alternatieve realisatie toestaan fase 68                             */
    SCH_code[schaltg81]                = "altg81";                SCH[schaltg81]                = 1;                                        /* Alternatieve realisatie toestaan fase 81                             */
    SCH_code[schaltg82]                = "altg82";                SCH[schaltg82]                = 1;                                        /* Alternatieve realisatie toestaan fase 82                             */
    SCH_code[schaltg84]                = "altg84";                SCH[schaltg84]                = 1;                                        /* Alternatieve realisatie toestaan fase 84                             */
    SCH_code[schwg02]                  = "wg02";                  SCH[schwg02]                  = 1;                                        /* Wachtstand groen fase 02                                             */
    SCH_code[schwg03]                  = "wg03";                  SCH[schwg03]                  = 0;                                        /* Wachtstand groen fase 03                                             */
    SCH_code[schwg05]                  = "wg05";                  SCH[schwg05]                  = 0;                                        /* Wachtstand groen fase 05                                             */
    SCH_code[schwg08]                  = "wg08";                  SCH[schwg08]                  = 1;                                        /* Wachtstand groen fase 08                                             */
    SCH_code[schwg09]                  = "wg09";                  SCH[schwg09]                  = 0;                                        /* Wachtstand groen fase 09                                             */
    SCH_code[schwg11]                  = "wg11";                  SCH[schwg11]                  = 0;                                        /* Wachtstand groen fase 11                                             */
    SCH_code[schwg21]                  = "wg21";                  SCH[schwg21]                  = 0;                                        /* Wachtstand groen fase 21                                             */
    SCH_code[schwg22]                  = "wg22";                  SCH[schwg22]                  = 0;                                        /* Wachtstand groen fase 22                                             */
    SCH_code[schwg24]                  = "wg24";                  SCH[schwg24]                  = 0;                                        /* Wachtstand groen fase 24                                             */
    SCH_code[schwg26]                  = "wg26";                  SCH[schwg26]                  = 0;                                        /* Wachtstand groen fase 26                                             */
    SCH_code[schwg28]                  = "wg28";                  SCH[schwg28]                  = 0;                                        /* Wachtstand groen fase 28                                             */
    SCH_code[schwg31]                  = "wg31";                  SCH[schwg31]                  = 0;                                        /* Wachtstand groen fase 31                                             */
    SCH_code[schwg32]                  = "wg32";                  SCH[schwg32]                  = 0;                                        /* Wachtstand groen fase 32                                             */
    SCH_code[schwg33]                  = "wg33";                  SCH[schwg33]                  = 0;                                        /* Wachtstand groen fase 33                                             */
    SCH_code[schwg34]                  = "wg34";                  SCH[schwg34]                  = 0;                                        /* Wachtstand groen fase 34                                             */
    SCH_code[schwg38]                  = "wg38";                  SCH[schwg38]                  = 0;                                        /* Wachtstand groen fase 38                                             */
    SCH_code[schwg61]                  = "wg61";                  SCH[schwg61]                  = 0;                                        /* Wachtstand groen fase 61                                             */
    SCH_code[schwg62]                  = "wg62";                  SCH[schwg62]                  = 1;                                        /* Wachtstand groen fase 62                                             */
    SCH_code[schwg67]                  = "wg67";                  SCH[schwg67]                  = 0;                                        /* Wachtstand groen fase 67                                             */
    SCH_code[schwg68]                  = "wg68";                  SCH[schwg68]                  = 1;                                        /* Wachtstand groen fase 68                                             */
    SCH_code[schwg81]                  = "wg81";                  SCH[schwg81]                  = 0;                                        /* Wachtstand groen fase 81                                             */
    SCH_code[schwg82]                  = "wg82";                  SCH[schwg82]                  = 0;                                        /* Wachtstand groen fase 82                                             */
    SCH_code[schwg84]                  = "wg84";                  SCH[schwg84]                  = 0;                                        /* Wachtstand groen fase 84                                             */
    SCH_code[schwtv24]                 = "wtv24";                 SCH[schwtv24]                 = 1;                                        /* Aansturing wachttijdvoorspeller fase 24 aan of uit                   */
    SCH_code[schwtvbusbijhd]           = "wtvbusbijhd";           SCH[schwtvbusbijhd]           = 0;                                        /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep             */
    SCH_code[schstar]                  = "star";                  SCH[schstar]                  = 0;                                        /* Inschakelen star programma                                           */
    SCH_code[schisgdebug]              = "isgdebug";              SCH[schisgdebug]              = 0;                                        /* Debug aan/uit voor ISG func (testomgeving)                           */
    SCH_code[schlos0262]               = "los0262";               SCH[schlos0262]               = 0;                                        /* Wel/niet toestaan losse realisatie 02                                */
    SCH_code[schlosgeennla0262_2]      = "losgeennla0262_2";      SCH[schlosgeennla0262_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 02                                */
    SCH_code[schlos0868]               = "los0868";               SCH[schlos0868]               = 0;                                        /* Wel/niet toestaan losse realisatie 08                                */
    SCH_code[schlosgeennla0868_2]      = "losgeennla0868_2";      SCH[schlosgeennla0868_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 08                                */
    SCH_code[schlos1168]               = "los1168";               SCH[schlos1168]               = 0;                                        /* Wel/niet toestaan losse realisatie 11                                */
    SCH_code[schlosgeennla1168_2]      = "losgeennla1168_2";      SCH[schlosgeennla1168_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 11                                */
    SCH_code[schlos2221]               = "los2221";               SCH[schlos2221]               = 0;                                        /* Wel/niet toestaan losse realisatie 22                                */
    SCH_code[schlosgeennla2221_2]      = "losgeennla2221_2";      SCH[schlosgeennla2221_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 22                                */
    SCH_code[schlos3132]               = "los3132";               SCH[schlos3132]               = 0;                                        /* Wel/niet toestaan losse realisatie 31                                */
    SCH_code[schlosgeennla3132_2]      = "losgeennla3132_2";      SCH[schlosgeennla3132_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 31                                */
    SCH_code[schlos3231]               = "los3231";               SCH[schlos3231]               = 0;                                        /* Wel/niet toestaan losse realisatie 32                                */
    SCH_code[schlosgeennla3231_2]      = "losgeennla3231_2";      SCH[schlosgeennla3231_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 32                                */
    SCH_code[schlos3334]               = "los3334";               SCH[schlos3334]               = 0;                                        /* Wel/niet toestaan losse realisatie 33                                */
    SCH_code[schlosgeennla3334_2]      = "losgeennla3334_2";      SCH[schlosgeennla3334_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 33                                */
    SCH_code[schlos3433]               = "los3433";               SCH[schlos3433]               = 0;                                        /* Wel/niet toestaan losse realisatie 34                                */
    SCH_code[schlosgeennla3433_2]      = "losgeennla3433_2";      SCH[schlosgeennla3433_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 34                                */
    SCH_code[schlos8281]               = "los8281";               SCH[schlos8281]               = 0;                                        /* Wel/niet toestaan losse realisatie 82                                */
    SCH_code[schlosgeennla8281_2]      = "losgeennla8281_2";      SCH[schlosgeennla8281_2]      = 0;                                        /* Wel/niet toestaan losse realisatie 82                                */
    SCH_code[schsneld02_1a]            = "sneld02_1a";            SCH[schsneld02_1a]            = 1;                                        /* Aanvraag snel voor detector 02_1a aan of uit                         */
    SCH_code[schsneld02_1b]            = "sneld02_1b";            SCH[schsneld02_1b]            = 1;                                        /* Aanvraag snel voor detector 02_1b aan of uit                         */
    SCH_code[schsneld03_1]             = "sneld03_1";             SCH[schsneld03_1]             = 1;                                        /* Aanvraag snel voor detector 03_1 aan of uit                          */
    SCH_code[schsneld05_1]             = "sneld05_1";             SCH[schsneld05_1]             = 1;                                        /* Aanvraag snel voor detector 05_1 aan of uit                          */
    SCH_code[schsneld08_1a]            = "sneld08_1a";            SCH[schsneld08_1a]            = 1;                                        /* Aanvraag snel voor detector 08_1a aan of uit                         */
    SCH_code[schsneld08_1b]            = "sneld08_1b";            SCH[schsneld08_1b]            = 1;                                        /* Aanvraag snel voor detector 08_1b aan of uit                         */
    SCH_code[schsneld09_1]             = "sneld09_1";             SCH[schsneld09_1]             = 1;                                        /* Aanvraag snel voor detector 09_1 aan of uit                          */
    SCH_code[schsneld11_1]             = "sneld11_1";             SCH[schsneld11_1]             = 1;                                        /* Aanvraag snel voor detector 11_1 aan of uit                          */
    SCH_code[schsneld211]              = "sneld211";              SCH[schsneld211]              = 0;                                        /* Aanvraag snel voor detector 211 aan of uit                           */
    SCH_code[schsneld22_1]             = "sneld22_1";             SCH[schsneld22_1]             = 0;                                        /* Aanvraag snel voor detector 22_1 aan of uit                          */
    SCH_code[schsneld24_1]             = "sneld24_1";             SCH[schsneld24_1]             = 0;                                        /* Aanvraag snel voor detector 24_1 aan of uit                          */
    SCH_code[schsneld261]              = "sneld261";              SCH[schsneld261]              = 0;                                        /* Aanvraag snel voor detector 261 aan of uit                           */
    SCH_code[schsneld28_1]             = "sneld28_1";             SCH[schsneld28_1]             = 0;                                        /* Aanvraag snel voor detector 28_1 aan of uit                          */
    SCH_code[schsneld61_1]             = "sneld61_1";             SCH[schsneld61_1]             = 1;                                        /* Aanvraag snel voor detector 61_1 aan of uit                          */
    SCH_code[schsneld62_1a]            = "sneld62_1a";            SCH[schsneld62_1a]            = 1;                                        /* Aanvraag snel voor detector 62_1a aan of uit                         */
    SCH_code[schsneld62_1b]            = "sneld62_1b";            SCH[schsneld62_1b]            = 1;                                        /* Aanvraag snel voor detector 62_1b aan of uit                         */
    SCH_code[schsneld67_1]             = "sneld67_1";             SCH[schsneld67_1]             = 1;                                        /* Aanvraag snel voor detector 67_1 aan of uit                          */
    SCH_code[schsneld68_1a]            = "sneld68_1a";            SCH[schsneld68_1a]            = 1;                                        /* Aanvraag snel voor detector 68_1a aan of uit                         */
    SCH_code[schsneld68_1b]            = "sneld68_1b";            SCH[schsneld68_1b]            = 1;                                        /* Aanvraag snel voor detector 68_1b aan of uit                         */
    SCH_code[schsneld81_1]             = "sneld81_1";             SCH[schsneld81_1]             = 0;                                        /* Aanvraag snel voor detector 81_1 aan of uit                          */
    SCH_code[schsneld82_1]             = "sneld82_1";             SCH[schsneld82_1]             = 0;                                        /* Aanvraag snel voor detector 82_1 aan of uit                          */
    SCH_code[schsneld84_1]             = "sneld84_1";             SCH[schsneld84_1]             = 0;                                        /* Aanvraag snel voor detector 84_1 aan of uit                          */

/* parameters */
/* ---------- */
    PRM_code[prmspringverleng_08_1a]      = "springverleng_08_1a";      PRM[prmspringverleng_08_1a]      = 2;                                                       /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_1b]      = "springverleng_08_1b";      PRM[prmspringverleng_08_1b]      = 2;                                                       /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_2a]      = "springverleng_08_2a";      PRM[prmspringverleng_08_2a]      = 24;                                                      /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_2b]      = "springverleng_08_2b";      PRM[prmspringverleng_08_2b]      = 24;                                                      /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_3a]      = "springverleng_08_3a";      PRM[prmspringverleng_08_3a]      = 9;                                                       /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_3b]      = "springverleng_08_3b";      PRM[prmspringverleng_08_3b]      = 9;                                                       /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_4a]      = "springverleng_08_4a";      PRM[prmspringverleng_08_4a]      = 0;                                                       /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_08_4b]      = "springverleng_08_4b";      PRM[prmspringverleng_08_4b]      = 0;                                                       /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    PRM_code[prmspringverleng_09_1]       = "springverleng_09_1";       PRM[prmspringverleng_09_1]       = 0;                                                       /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_09_2]       = "springverleng_09_2";       PRM[prmspringverleng_09_2]       = 0;                                                       /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_09_3]       = "springverleng_09_3";       PRM[prmspringverleng_09_3]       = 0;                                                       /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_1]       = "springverleng_11_1";       PRM[prmspringverleng_11_1]       = 2;                                                       /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_2]       = "springverleng_11_2";       PRM[prmspringverleng_11_2]       = 24;                                                      /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_3]       = "springverleng_11_3";       PRM[prmspringverleng_11_3]       = 9;                                                       /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    PRM_code[prmspringverleng_11_4]       = "springverleng_11_4";       PRM[prmspringverleng_11_4]       = 0;                                                       /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    PRM_code[prmfb]                       = "fb";                       PRM[prmfb]                       = 300;   PRM_type[prmfb]                       = TS_type; /* Instelling fasebewaking                                                                                                        */
    PRM_code[prmxx]                       = "xx";                       PRM[prmxx]                       = 4;                                                       /* Versiebeheer xx                                                                                                                */
    PRM_code[prmyy]                       = "yy";                       PRM[prmyy]                       = 0;                                                       /* Versiebeheer yy                                                                                                                */
    PRM_code[prmzz]                       = "zz";                       PRM[prmzz]                       = 18;                                                      /* Versiebeheer zz                                                                                                                */
    PRM_code[prmovmextragroen_02]         = "ovmextragroen_02";         PRM[prmovmextragroen_02]         = 0;     PRM_type[prmovmextragroen_02]         = TE_type;
    PRM_code[prmovmmindergroen_02]        = "ovmmindergroen_02";        PRM[prmovmmindergroen_02]        = 0;     PRM_type[prmovmmindergroen_02]        = TE_type;
    PRM_code[prmovmextragroen_03]         = "ovmextragroen_03";         PRM[prmovmextragroen_03]         = 0;     PRM_type[prmovmextragroen_03]         = TE_type;
    PRM_code[prmovmmindergroen_03]        = "ovmmindergroen_03";        PRM[prmovmmindergroen_03]        = 0;     PRM_type[prmovmmindergroen_03]        = TE_type;
    PRM_code[prmovmextragroen_05]         = "ovmextragroen_05";         PRM[prmovmextragroen_05]         = 0;     PRM_type[prmovmextragroen_05]         = TE_type;
    PRM_code[prmovmmindergroen_05]        = "ovmmindergroen_05";        PRM[prmovmmindergroen_05]        = 0;     PRM_type[prmovmmindergroen_05]        = TE_type;
    PRM_code[prmovmextragroen_08]         = "ovmextragroen_08";         PRM[prmovmextragroen_08]         = 0;     PRM_type[prmovmextragroen_08]         = TE_type;
    PRM_code[prmovmmindergroen_08]        = "ovmmindergroen_08";        PRM[prmovmmindergroen_08]        = 0;     PRM_type[prmovmmindergroen_08]        = TE_type;
    PRM_code[prmovmextragroen_09]         = "ovmextragroen_09";         PRM[prmovmextragroen_09]         = 0;     PRM_type[prmovmextragroen_09]         = TE_type;
    PRM_code[prmovmmindergroen_09]        = "ovmmindergroen_09";        PRM[prmovmmindergroen_09]        = 0;     PRM_type[prmovmmindergroen_09]        = TE_type;
    PRM_code[prmovmextragroen_11]         = "ovmextragroen_11";         PRM[prmovmextragroen_11]         = 0;     PRM_type[prmovmextragroen_11]         = TE_type;
    PRM_code[prmovmmindergroen_11]        = "ovmmindergroen_11";        PRM[prmovmmindergroen_11]        = 0;     PRM_type[prmovmmindergroen_11]        = TE_type;
    PRM_code[prmovmextragroen_61]         = "ovmextragroen_61";         PRM[prmovmextragroen_61]         = 0;     PRM_type[prmovmextragroen_61]         = TE_type;
    PRM_code[prmovmmindergroen_61]        = "ovmmindergroen_61";        PRM[prmovmmindergroen_61]        = 0;     PRM_type[prmovmmindergroen_61]        = TE_type;
    PRM_code[prmovmextragroen_62]         = "ovmextragroen_62";         PRM[prmovmextragroen_62]         = 0;     PRM_type[prmovmextragroen_62]         = TE_type;
    PRM_code[prmovmmindergroen_62]        = "ovmmindergroen_62";        PRM[prmovmmindergroen_62]        = 0;     PRM_type[prmovmmindergroen_62]        = TE_type;
    PRM_code[prmovmextragroen_67]         = "ovmextragroen_67";         PRM[prmovmextragroen_67]         = 0;     PRM_type[prmovmextragroen_67]         = TE_type;
    PRM_code[prmovmmindergroen_67]        = "ovmmindergroen_67";        PRM[prmovmmindergroen_67]        = 0;     PRM_type[prmovmmindergroen_67]        = TE_type;
    PRM_code[prmovmextragroen_68]         = "ovmextragroen_68";         PRM[prmovmextragroen_68]         = 0;     PRM_type[prmovmextragroen_68]         = TE_type;
    PRM_code[prmovmmindergroen_68]        = "ovmmindergroen_68";        PRM[prmovmmindergroen_68]        = 0;     PRM_type[prmovmmindergroen_68]        = TE_type;
    PRM_code[prmaltb02]                   = "altb02";                   PRM[prmaltb02]                   = 31;                                                      /* Alternatief per blok voor fase 02                                                                                              */
    PRM_code[prmaltb03]                   = "altb03";                   PRM[prmaltb03]                   = 31;                                                      /* Alternatief per blok voor fase 03                                                                                              */
    PRM_code[prmaltb05]                   = "altb05";                   PRM[prmaltb05]                   = 31;                                                      /* Alternatief per blok voor fase 05                                                                                              */
    PRM_code[prmaltb08]                   = "altb08";                   PRM[prmaltb08]                   = 31;                                                      /* Alternatief per blok voor fase 08                                                                                              */
    PRM_code[prmaltb09]                   = "altb09";                   PRM[prmaltb09]                   = 31;                                                      /* Alternatief per blok voor fase 09                                                                                              */
    PRM_code[prmaltb11]                   = "altb11";                   PRM[prmaltb11]                   = 31;                                                      /* Alternatief per blok voor fase 11                                                                                              */
    PRM_code[prmaltb21]                   = "altb21";                   PRM[prmaltb21]                   = 31;                                                      /* Alternatief per blok voor fase 21                                                                                              */
    PRM_code[prmaltb22]                   = "altb22";                   PRM[prmaltb22]                   = 31;                                                      /* Alternatief per blok voor fase 22                                                                                              */
    PRM_code[prmaltb24]                   = "altb24";                   PRM[prmaltb24]                   = 31;                                                      /* Alternatief per blok voor fase 24                                                                                              */
    PRM_code[prmaltb26]                   = "altb26";                   PRM[prmaltb26]                   = 31;                                                      /* Alternatief per blok voor fase 26                                                                                              */
    PRM_code[prmaltb28]                   = "altb28";                   PRM[prmaltb28]                   = 31;                                                      /* Alternatief per blok voor fase 28                                                                                              */
    PRM_code[prmaltb31]                   = "altb31";                   PRM[prmaltb31]                   = 31;                                                      /* Alternatief per blok voor fase 31                                                                                              */
    PRM_code[prmaltb32]                   = "altb32";                   PRM[prmaltb32]                   = 31;                                                      /* Alternatief per blok voor fase 32                                                                                              */
    PRM_code[prmaltb33]                   = "altb33";                   PRM[prmaltb33]                   = 31;                                                      /* Alternatief per blok voor fase 33                                                                                              */
    PRM_code[prmaltb34]                   = "altb34";                   PRM[prmaltb34]                   = 31;                                                      /* Alternatief per blok voor fase 34                                                                                              */
    PRM_code[prmaltb38]                   = "altb38";                   PRM[prmaltb38]                   = 31;                                                      /* Alternatief per blok voor fase 38                                                                                              */
    PRM_code[prmaltb61]                   = "altb61";                   PRM[prmaltb61]                   = 31;                                                      /* Alternatief per blok voor fase 61                                                                                              */
    PRM_code[prmaltb62]                   = "altb62";                   PRM[prmaltb62]                   = 31;                                                      /* Alternatief per blok voor fase 62                                                                                              */
    PRM_code[prmaltb67]                   = "altb67";                   PRM[prmaltb67]                   = 31;                                                      /* Alternatief per blok voor fase 67                                                                                              */
    PRM_code[prmaltb68]                   = "altb68";                   PRM[prmaltb68]                   = 31;                                                      /* Alternatief per blok voor fase 68                                                                                              */
    PRM_code[prmaltb81]                   = "altb81";                   PRM[prmaltb81]                   = 31;                                                      /* Alternatief per blok voor fase 81                                                                                              */
    PRM_code[prmaltb82]                   = "altb82";                   PRM[prmaltb82]                   = 31;                                                      /* Alternatief per blok voor fase 82                                                                                              */
    PRM_code[prmaltb84]                   = "altb84";                   PRM[prmaltb84]                   = 31;                                                      /* Alternatief per blok voor fase 84                                                                                              */
    PRM_code[prmda02_1a]                  = "da02_1a";                  PRM[prmda02_1a]                  = 1;                                                       /* Aanvraag functie voor detector 02_1a                                                                                           */
    PRM_code[prmda02_1b]                  = "da02_1b";                  PRM[prmda02_1b]                  = 1;                                                       /* Aanvraag functie voor detector 02_1b                                                                                           */
    PRM_code[prmda02_2a]                  = "da02_2a";                  PRM[prmda02_2a]                  = 1;                                                       /* Aanvraag functie voor detector 02_2a                                                                                           */
    PRM_code[prmda02_2b]                  = "da02_2b";                  PRM[prmda02_2b]                  = 1;                                                       /* Aanvraag functie voor detector 02_2b                                                                                           */
    PRM_code[prmda02_3a]                  = "da02_3a";                  PRM[prmda02_3a]                  = 1;                                                       /* Aanvraag functie voor detector 02_3a                                                                                           */
    PRM_code[prmda02_3b]                  = "da02_3b";                  PRM[prmda02_3b]                  = 1;                                                       /* Aanvraag functie voor detector 02_3b                                                                                           */
    PRM_code[prmda02_4a]                  = "da02_4a";                  PRM[prmda02_4a]                  = 2;                                                       /* Aanvraag functie voor detector 02_4a                                                                                           */
    PRM_code[prmda02_4b]                  = "da02_4b";                  PRM[prmda02_4b]                  = 2;                                                       /* Aanvraag functie voor detector 02_4b                                                                                           */
    PRM_code[prmda03_1]                   = "da03_1";                   PRM[prmda03_1]                   = 1;                                                       /* Aanvraag functie voor detector 03_1                                                                                            */
    PRM_code[prmda03_2]                   = "da03_2";                   PRM[prmda03_2]                   = 1;                                                       /* Aanvraag functie voor detector 03_2                                                                                            */
    PRM_code[prmda05_1]                   = "da05_1";                   PRM[prmda05_1]                   = 1;                                                       /* Aanvraag functie voor detector 05_1                                                                                            */
    PRM_code[prmda05_2]                   = "da05_2";                   PRM[prmda05_2]                   = 1;                                                       /* Aanvraag functie voor detector 05_2                                                                                            */
    PRM_code[prmda08_1a]                  = "da08_1a";                  PRM[prmda08_1a]                  = 1;                                                       /* Aanvraag functie voor detector 08_1a                                                                                           */
    PRM_code[prmda08_1b]                  = "da08_1b";                  PRM[prmda08_1b]                  = 1;                                                       /* Aanvraag functie voor detector 08_1b                                                                                           */
    PRM_code[prmda08_2a]                  = "da08_2a";                  PRM[prmda08_2a]                  = 1;                                                       /* Aanvraag functie voor detector 08_2a                                                                                           */
    PRM_code[prmda08_2b]                  = "da08_2b";                  PRM[prmda08_2b]                  = 1;                                                       /* Aanvraag functie voor detector 08_2b                                                                                           */
    PRM_code[prmda08_3a]                  = "da08_3a";                  PRM[prmda08_3a]                  = 1;                                                       /* Aanvraag functie voor detector 08_3a                                                                                           */
    PRM_code[prmda08_3b]                  = "da08_3b";                  PRM[prmda08_3b]                  = 1;                                                       /* Aanvraag functie voor detector 08_3b                                                                                           */
    PRM_code[prmda08_4a]                  = "da08_4a";                  PRM[prmda08_4a]                  = 2;                                                       /* Aanvraag functie voor detector 08_4a                                                                                           */
    PRM_code[prmda08_4b]                  = "da08_4b";                  PRM[prmda08_4b]                  = 2;                                                       /* Aanvraag functie voor detector 08_4b                                                                                           */
    PRM_code[prmda09_1]                   = "da09_1";                   PRM[prmda09_1]                   = 1;                                                       /* Aanvraag functie voor detector 09_1                                                                                            */
    PRM_code[prmda09_2]                   = "da09_2";                   PRM[prmda09_2]                   = 1;                                                       /* Aanvraag functie voor detector 09_2                                                                                            */
    PRM_code[prmda09_3]                   = "da09_3";                   PRM[prmda09_3]                   = 0;                                                       /* Aanvraag functie voor detector 09_3                                                                                            */
    PRM_code[prmda11_1]                   = "da11_1";                   PRM[prmda11_1]                   = 1;                                                       /* Aanvraag functie voor detector 11_1                                                                                            */
    PRM_code[prmda11_2]                   = "da11_2";                   PRM[prmda11_2]                   = 1;                                                       /* Aanvraag functie voor detector 11_2                                                                                            */
    PRM_code[prmda11_3]                   = "da11_3";                   PRM[prmda11_3]                   = 1;                                                       /* Aanvraag functie voor detector 11_3                                                                                            */
    PRM_code[prmda11_4]                   = "da11_4";                   PRM[prmda11_4]                   = 2;                                                       /* Aanvraag functie voor detector 11_4                                                                                            */
    PRM_code[prmda211]                    = "da211";                    PRM[prmda211]                    = 1;                                                       /* Aanvraag functie voor detector 211                                                                                             */
    PRM_code[prmdak21]                    = "dak21";                    PRM[prmdak21]                    = 2;                                                       /* Aanvraag functie voor detector k21                                                                                             */
    PRM_code[prmda22_1]                   = "da22_1";                   PRM[prmda22_1]                   = 1;                                                       /* Aanvraag functie voor detector 22_1                                                                                            */
    PRM_code[prmdak22]                    = "dak22";                    PRM[prmdak22]                    = 2;                                                       /* Aanvraag functie voor detector k22                                                                                             */
    PRM_code[prmda24_1]                   = "da24_1";                   PRM[prmda24_1]                   = 1;                                                       /* Aanvraag functie voor detector 24_1                                                                                            */
    PRM_code[prmda24_2]                   = "da24_2";                   PRM[prmda24_2]                   = 0;                                                       /* Aanvraag functie voor detector 24_2                                                                                            */
    PRM_code[prmda24_3]                   = "da24_3";                   PRM[prmda24_3]                   = 0;                                                       /* Aanvraag functie voor detector 24_3                                                                                            */
    PRM_code[prmdak24]                    = "dak24";                    PRM[prmdak24]                    = 2;                                                       /* Aanvraag functie voor detector k24                                                                                             */
    PRM_code[prmda261]                    = "da261";                    PRM[prmda261]                    = 1;                                                       /* Aanvraag functie voor detector 261                                                                                             */
    PRM_code[prmdak26]                    = "dak26";                    PRM[prmdak26]                    = 2;                                                       /* Aanvraag functie voor detector k26                                                                                             */
    PRM_code[prmda28_1]                   = "da28_1";                   PRM[prmda28_1]                   = 1;                                                       /* Aanvraag functie voor detector 28_1                                                                                            */
    PRM_code[prmda28_2]                   = "da28_2";                   PRM[prmda28_2]                   = 2;                                                       /* Aanvraag functie voor detector 28_2                                                                                            */
    PRM_code[prmdak28]                    = "dak28";                    PRM[prmdak28]                    = 2;                                                       /* Aanvraag functie voor detector k28                                                                                             */
    PRM_code[prmdak31a]                   = "dak31a";                   PRM[prmdak31a]                   = 3;                                                       /* Aanvraag functie voor detector k31a                                                                                            */
    PRM_code[prmdak31b]                   = "dak31b";                   PRM[prmdak31b]                   = 3;                                                       /* Aanvraag functie voor detector k31b                                                                                            */
    PRM_code[prmdak32a]                   = "dak32a";                   PRM[prmdak32a]                   = 3;                                                       /* Aanvraag functie voor detector k32a                                                                                            */
    PRM_code[prmdak32b]                   = "dak32b";                   PRM[prmdak32b]                   = 3;                                                       /* Aanvraag functie voor detector k32b                                                                                            */
    PRM_code[prmdak33a]                   = "dak33a";                   PRM[prmdak33a]                   = 3;                                                       /* Aanvraag functie voor detector k33a                                                                                            */
    PRM_code[prmdak33b]                   = "dak33b";                   PRM[prmdak33b]                   = 3;                                                       /* Aanvraag functie voor detector k33b                                                                                            */
    PRM_code[prmdak34a]                   = "dak34a";                   PRM[prmdak34a]                   = 3;                                                       /* Aanvraag functie voor detector k34a                                                                                            */
    PRM_code[prmdak34b]                   = "dak34b";                   PRM[prmdak34b]                   = 3;                                                       /* Aanvraag functie voor detector k34b                                                                                            */
    PRM_code[prmdak38a]                   = "dak38a";                   PRM[prmdak38a]                   = 3;                                                       /* Aanvraag functie voor detector k38a                                                                                            */
    PRM_code[prmdak38b]                   = "dak38b";                   PRM[prmdak38b]                   = 3;                                                       /* Aanvraag functie voor detector k38b                                                                                            */
    PRM_code[prmda61_1]                   = "da61_1";                   PRM[prmda61_1]                   = 1;                                                       /* Aanvraag functie voor detector 61_1                                                                                            */
    PRM_code[prmda61_2]                   = "da61_2";                   PRM[prmda61_2]                   = 1;                                                       /* Aanvraag functie voor detector 61_2                                                                                            */
    PRM_code[prmda62_1a]                  = "da62_1a";                  PRM[prmda62_1a]                  = 1;                                                       /* Aanvraag functie voor detector 62_1a                                                                                           */
    PRM_code[prmda62_1b]                  = "da62_1b";                  PRM[prmda62_1b]                  = 1;                                                       /* Aanvraag functie voor detector 62_1b                                                                                           */
    PRM_code[prmda62_2a]                  = "da62_2a";                  PRM[prmda62_2a]                  = 1;                                                       /* Aanvraag functie voor detector 62_2a                                                                                           */
    PRM_code[prmda62_2b]                  = "da62_2b";                  PRM[prmda62_2b]                  = 1;                                                       /* Aanvraag functie voor detector 62_2b                                                                                           */
    PRM_code[prmda67_1]                   = "da67_1";                   PRM[prmda67_1]                   = 1;                                                       /* Aanvraag functie voor detector 67_1                                                                                            */
    PRM_code[prmda67_2]                   = "da67_2";                   PRM[prmda67_2]                   = 1;                                                       /* Aanvraag functie voor detector 67_2                                                                                            */
    PRM_code[prmda68_1a]                  = "da68_1a";                  PRM[prmda68_1a]                  = 1;                                                       /* Aanvraag functie voor detector 68_1a                                                                                           */
    PRM_code[prmda68_1b]                  = "da68_1b";                  PRM[prmda68_1b]                  = 1;                                                       /* Aanvraag functie voor detector 68_1b                                                                                           */
    PRM_code[prmda68_2a]                  = "da68_2a";                  PRM[prmda68_2a]                  = 1;                                                       /* Aanvraag functie voor detector 68_2a                                                                                           */
    PRM_code[prmda68_2b]                  = "da68_2b";                  PRM[prmda68_2b]                  = 1;                                                       /* Aanvraag functie voor detector 68_2b                                                                                           */
    PRM_code[prmda68_9a]                  = "da68_9a";                  PRM[prmda68_9a]                  = 0;                                                       /* Aanvraag functie voor detector 68_9a                                                                                           */
    PRM_code[prmda68_9b]                  = "da68_9b";                  PRM[prmda68_9b]                  = 0;                                                       /* Aanvraag functie voor detector 68_9b                                                                                           */
    PRM_code[prmda81_1]                   = "da81_1";                   PRM[prmda81_1]                   = 1;                                                       /* Aanvraag functie voor detector 81_1                                                                                            */
    PRM_code[prmdak81]                    = "dak81";                    PRM[prmdak81]                    = 2;                                                       /* Aanvraag functie voor detector k81                                                                                             */
    PRM_code[prmda82_1]                   = "da82_1";                   PRM[prmda82_1]                   = 1;                                                       /* Aanvraag functie voor detector 82_1                                                                                            */
    PRM_code[prmdak82]                    = "dak82";                    PRM[prmdak82]                    = 2;                                                       /* Aanvraag functie voor detector k82                                                                                             */
    PRM_code[prmda84_1]                   = "da84_1";                   PRM[prmda84_1]                   = 1;                                                       /* Aanvraag functie voor detector 84_1                                                                                            */
    PRM_code[prmdak84]                    = "dak84";                    PRM[prmdak84]                    = 2;                                                       /* Aanvraag functie voor detector k84                                                                                             */
    PRM_code[prmmk02_1a]                  = "mk02_1a";                  PRM[prmmk02_1a]                  = 1;                                                       /* Meetkriterium type voor detector 02_1a                                                                                         */
    PRM_code[prmmk02_1b]                  = "mk02_1b";                  PRM[prmmk02_1b]                  = 1;                                                       /* Meetkriterium type voor detector 02_1b                                                                                         */
    PRM_code[prmmk02_2a]                  = "mk02_2a";                  PRM[prmmk02_2a]                  = 3;                                                       /* Meetkriterium type voor detector 02_2a                                                                                         */
    PRM_code[prmmk02_2b]                  = "mk02_2b";                  PRM[prmmk02_2b]                  = 3;                                                       /* Meetkriterium type voor detector 02_2b                                                                                         */
    PRM_code[prmmk02_3a]                  = "mk02_3a";                  PRM[prmmk02_3a]                  = 3;                                                       /* Meetkriterium type voor detector 02_3a                                                                                         */
    PRM_code[prmmk02_3b]                  = "mk02_3b";                  PRM[prmmk02_3b]                  = 3;                                                       /* Meetkriterium type voor detector 02_3b                                                                                         */
    PRM_code[prmmk02_4a]                  = "mk02_4a";                  PRM[prmmk02_4a]                  = 3;                                                       /* Meetkriterium type voor detector 02_4a                                                                                         */
    PRM_code[prmmk02_4b]                  = "mk02_4b";                  PRM[prmmk02_4b]                  = 3;                                                       /* Meetkriterium type voor detector 02_4b                                                                                         */
    PRM_code[prmmk03_1]                   = "mk03_1";                   PRM[prmmk03_1]                   = 1;                                                       /* Meetkriterium type voor detector 03_1                                                                                          */
    PRM_code[prmmk03_2]                   = "mk03_2";                   PRM[prmmk03_2]                   = 3;                                                       /* Meetkriterium type voor detector 03_2                                                                                          */
    PRM_code[prmmk05_1]                   = "mk05_1";                   PRM[prmmk05_1]                   = 1;                                                       /* Meetkriterium type voor detector 05_1                                                                                          */
    PRM_code[prmmk05_2]                   = "mk05_2";                   PRM[prmmk05_2]                   = 3;                                                       /* Meetkriterium type voor detector 05_2                                                                                          */
    PRM_code[prmmk08_1a]                  = "mk08_1a";                  PRM[prmmk08_1a]                  = 1;                                                       /* Meetkriterium type voor detector 08_1a                                                                                         */
    PRM_code[prmmk08_1b]                  = "mk08_1b";                  PRM[prmmk08_1b]                  = 1;                                                       /* Meetkriterium type voor detector 08_1b                                                                                         */
    PRM_code[prmmk08_2a]                  = "mk08_2a";                  PRM[prmmk08_2a]                  = 3;                                                       /* Meetkriterium type voor detector 08_2a                                                                                         */
    PRM_code[prmmk08_2b]                  = "mk08_2b";                  PRM[prmmk08_2b]                  = 7;                                                       /* Meetkriterium type voor detector 08_2b                                                                                         */
    PRM_code[prmmk08_3a]                  = "mk08_3a";                  PRM[prmmk08_3a]                  = 3;                                                       /* Meetkriterium type voor detector 08_3a                                                                                         */
    PRM_code[prmmk08_3b]                  = "mk08_3b";                  PRM[prmmk08_3b]                  = 7;                                                       /* Meetkriterium type voor detector 08_3b                                                                                         */
    PRM_code[prmmk08_4a]                  = "mk08_4a";                  PRM[prmmk08_4a]                  = 3;                                                       /* Meetkriterium type voor detector 08_4a                                                                                         */
    PRM_code[prmmk08_4b]                  = "mk08_4b";                  PRM[prmmk08_4b]                  = 7;                                                       /* Meetkriterium type voor detector 08_4b                                                                                         */
    PRM_code[prmmk09_1]                   = "mk09_1";                   PRM[prmmk09_1]                   = 1;                                                       /* Meetkriterium type voor detector 09_1                                                                                          */
    PRM_code[prmmk09_2]                   = "mk09_2";                   PRM[prmmk09_2]                   = 3;                                                       /* Meetkriterium type voor detector 09_2                                                                                          */
    PRM_code[prmmk09_3]                   = "mk09_3";                   PRM[prmmk09_3]                   = 3;                                                       /* Meetkriterium type voor detector 09_3                                                                                          */
    PRM_code[prmmk11_1]                   = "mk11_1";                   PRM[prmmk11_1]                   = 1;                                                       /* Meetkriterium type voor detector 11_1                                                                                          */
    PRM_code[prmmk11_2]                   = "mk11_2";                   PRM[prmmk11_2]                   = 3;                                                       /* Meetkriterium type voor detector 11_2                                                                                          */
    PRM_code[prmmk11_3]                   = "mk11_3";                   PRM[prmmk11_3]                   = 3;                                                       /* Meetkriterium type voor detector 11_3                                                                                          */
    PRM_code[prmmk11_4]                   = "mk11_4";                   PRM[prmmk11_4]                   = 3;                                                       /* Meetkriterium type voor detector 11_4                                                                                          */
    PRM_code[prmmk211]                    = "mk211";                    PRM[prmmk211]                    = 1;                                                       /* Meetkriterium type voor detector 211                                                                                           */
    PRM_code[prmmk22_1]                   = "mk22_1";                   PRM[prmmk22_1]                   = 1;                                                       /* Meetkriterium type voor detector 22_1                                                                                          */
    PRM_code[prmmk24_1]                   = "mk24_1";                   PRM[prmmk24_1]                   = 1;                                                       /* Meetkriterium type voor detector 24_1                                                                                          */
    PRM_code[prmmk24_2]                   = "mk24_2";                   PRM[prmmk24_2]                   = 0;                                                       /* Meetkriterium type voor detector 24_2                                                                                          */
    PRM_code[prmmk24_3]                   = "mk24_3";                   PRM[prmmk24_3]                   = 0;                                                       /* Meetkriterium type voor detector 24_3                                                                                          */
    PRM_code[prmmk261]                    = "mk261";                    PRM[prmmk261]                    = 1;                                                       /* Meetkriterium type voor detector 261                                                                                           */
    PRM_code[prmmk28_1]                   = "mk28_1";                   PRM[prmmk28_1]                   = 1;                                                       /* Meetkriterium type voor detector 28_1                                                                                          */
    PRM_code[prmmk28_2]                   = "mk28_2";                   PRM[prmmk28_2]                   = 3;                                                       /* Meetkriterium type voor detector 28_2                                                                                          */
    PRM_code[prmmk61_1]                   = "mk61_1";                   PRM[prmmk61_1]                   = 1;                                                       /* Meetkriterium type voor detector 61_1                                                                                          */
    PRM_code[prmmk61_2]                   = "mk61_2";                   PRM[prmmk61_2]                   = 3;                                                       /* Meetkriterium type voor detector 61_2                                                                                          */
    PRM_code[prmmk62_1a]                  = "mk62_1a";                  PRM[prmmk62_1a]                  = 1;                                                       /* Meetkriterium type voor detector 62_1a                                                                                         */
    PRM_code[prmmk62_1b]                  = "mk62_1b";                  PRM[prmmk62_1b]                  = 1;                                                       /* Meetkriterium type voor detector 62_1b                                                                                         */
    PRM_code[prmmk62_2a]                  = "mk62_2a";                  PRM[prmmk62_2a]                  = 3;                                                       /* Meetkriterium type voor detector 62_2a                                                                                         */
    PRM_code[prmmk62_2b]                  = "mk62_2b";                  PRM[prmmk62_2b]                  = 7;                                                       /* Meetkriterium type voor detector 62_2b                                                                                         */
    PRM_code[prmmk67_1]                   = "mk67_1";                   PRM[prmmk67_1]                   = 1;                                                       /* Meetkriterium type voor detector 67_1                                                                                          */
    PRM_code[prmmk67_2]                   = "mk67_2";                   PRM[prmmk67_2]                   = 3;                                                       /* Meetkriterium type voor detector 67_2                                                                                          */
    PRM_code[prmmk68_1a]                  = "mk68_1a";                  PRM[prmmk68_1a]                  = 1;                                                       /* Meetkriterium type voor detector 68_1a                                                                                         */
    PRM_code[prmmk68_1b]                  = "mk68_1b";                  PRM[prmmk68_1b]                  = 1;                                                       /* Meetkriterium type voor detector 68_1b                                                                                         */
    PRM_code[prmmk68_2a]                  = "mk68_2a";                  PRM[prmmk68_2a]                  = 3;                                                       /* Meetkriterium type voor detector 68_2a                                                                                         */
    PRM_code[prmmk68_2b]                  = "mk68_2b";                  PRM[prmmk68_2b]                  = 7;                                                       /* Meetkriterium type voor detector 68_2b                                                                                         */
    PRM_code[prmmk68_9a]                  = "mk68_9a";                  PRM[prmmk68_9a]                  = 0;                                                       /* Meetkriterium type voor detector 68_9a                                                                                         */
    PRM_code[prmmk68_9b]                  = "mk68_9b";                  PRM[prmmk68_9b]                  = 4;                                                       /* Meetkriterium type voor detector 68_9b                                                                                         */
    PRM_code[prmmk81_1]                   = "mk81_1";                   PRM[prmmk81_1]                   = 3;                                                       /* Meetkriterium type voor detector 81_1                                                                                          */
    PRM_code[prmmk82_1]                   = "mk82_1";                   PRM[prmmk82_1]                   = 3;                                                       /* Meetkriterium type voor detector 82_1                                                                                          */
    PRM_code[prmmk84_1]                   = "mk84_1";                   PRM[prmmk84_1]                   = 3;                                                       /* Meetkriterium type voor detector 84_1                                                                                          */
    PRM_code[prmperc03]                   = "perc03";                   PRM[prmperc03]                   = 65;                                                      /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc05]                   = "perc05";                   PRM[prmperc05]                   = 65;                                                      /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc08]                   = "perc08";                   PRM[prmperc08]                   = 65;                                                      /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc09]                   = "perc09";                   PRM[prmperc09]                   = 65;                                                      /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc11]                   = "perc11";                   PRM[prmperc11]                   = 65;                                                      /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc61]                   = "perc61";                   PRM[prmperc61]                   = 65;                                                      /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc62]                   = "perc62";                   PRM[prmperc62]                   = 65;                                                      /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc67]                   = "perc67";                   PRM[prmperc67]                   = 65;                                                      /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    PRM_code[prmperc68]                   = "perc68";                   PRM[prmperc68]                   = 65;                                                      /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    PRM_code[prmfpercFile68af08]          = "fpercFile68af08";          PRM[prmfpercFile68af08]          = 50;                                                      /* Doseerpercentage 08                                                                                                            */
    PRM_code[prmfpercFile68af11]          = "fpercFile68af11";          PRM[prmfpercFile68af11]          = 50;                                                      /* Doseerpercentage 11                                                                                                            */
    PRM_code[prmaltphst02]                = "altphst02";                PRM[prmaltphst02]                = 0;     PRM_type[prmaltphst02]                = TE_type; /* Alternatieve ruimte fase 02 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst03]                = "altphst03";                PRM[prmaltphst03]                = 0;     PRM_type[prmaltphst03]                = TE_type; /* Alternatieve ruimte fase 03 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst05]                = "altphst05";                PRM[prmaltphst05]                = 0;     PRM_type[prmaltphst05]                = TE_type; /* Alternatieve ruimte fase 05 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst08]                = "altphst08";                PRM[prmaltphst08]                = 0;     PRM_type[prmaltphst08]                = TE_type; /* Alternatieve ruimte fase 08 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst09]                = "altphst09";                PRM[prmaltphst09]                = 0;     PRM_type[prmaltphst09]                = TE_type; /* Alternatieve ruimte fase 09 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst11]                = "altphst11";                PRM[prmaltphst11]                = 0;     PRM_type[prmaltphst11]                = TE_type; /* Alternatieve ruimte fase 11 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst21]                = "altphst21";                PRM[prmaltphst21]                = 0;     PRM_type[prmaltphst21]                = TE_type; /* Alternatieve ruimte fase 21 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst22]                = "altphst22";                PRM[prmaltphst22]                = 0;     PRM_type[prmaltphst22]                = TE_type; /* Alternatieve ruimte fase 22 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst24]                = "altphst24";                PRM[prmaltphst24]                = 0;     PRM_type[prmaltphst24]                = TE_type; /* Alternatieve ruimte fase 24 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst26]                = "altphst26";                PRM[prmaltphst26]                = 0;     PRM_type[prmaltphst26]                = TE_type; /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst28]                = "altphst28";                PRM[prmaltphst28]                = 0;     PRM_type[prmaltphst28]                = TE_type; /* Alternatieve ruimte fase 28 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst31]                = "altphst31";                PRM[prmaltphst31]                = 0;     PRM_type[prmaltphst31]                = TE_type; /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst32]                = "altphst32";                PRM[prmaltphst32]                = 0;     PRM_type[prmaltphst32]                = TE_type; /* Alternatieve ruimte fase 32 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst88]                = "altphst88";                PRM[prmaltphst88]                = 0;     PRM_type[prmaltphst88]                = TE_type; /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst84]                = "altphst84";                PRM[prmaltphst84]                = 0;     PRM_type[prmaltphst84]                = TE_type; /* Alternatieve ruimte fase 84 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst82]                = "altphst82";                PRM[prmaltphst82]                = 0;     PRM_type[prmaltphst82]                = TE_type; /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst81]                = "altphst81";                PRM[prmaltphst81]                = 0;     PRM_type[prmaltphst81]                = TE_type; /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst68]                = "altphst68";                PRM[prmaltphst68]                = 0;     PRM_type[prmaltphst68]                = TE_type; /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst67]                = "altphst67";                PRM[prmaltphst67]                = 0;     PRM_type[prmaltphst67]                = TE_type; /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst62]                = "altphst62";                PRM[prmaltphst62]                = 0;     PRM_type[prmaltphst62]                = TE_type; /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst61]                = "altphst61";                PRM[prmaltphst61]                = 0;     PRM_type[prmaltphst61]                = TE_type; /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst38]                = "altphst38";                PRM[prmaltphst38]                = 0;     PRM_type[prmaltphst38]                = TE_type; /* Alternatieve ruimte fase 38 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst34]                = "altphst34";                PRM[prmaltphst34]                = 0;     PRM_type[prmaltphst34]                = TE_type; /* Alternatieve ruimte fase 34 tijdens halfstar regelen                                                                           */
    PRM_code[prmaltphst33]                = "altphst33";                PRM[prmaltphst33]                = 0;     PRM_type[prmaltphst33]                = TE_type; /* Alternatieve ruimte fase 33 tijdens halfstar regelen                                                                           */
    PRM_code[prmpriohst02karbus]          = "priohst02karbus";          PRM[prmpriohst02karbus]          = 0;                                                       /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst03karbus]          = "priohst03karbus";          PRM[prmpriohst03karbus]          = 0;                                                       /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst05karbus]          = "priohst05karbus";          PRM[prmpriohst05karbus]          = 0;                                                       /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst08karbus]          = "priohst08karbus";          PRM[prmpriohst08karbus]          = 0;                                                       /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst09karbus]          = "priohst09karbus";          PRM[prmpriohst09karbus]          = 0;                                                       /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst11karbus]          = "priohst11karbus";          PRM[prmpriohst11karbus]          = 0;                                                       /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst22fiets]           = "priohst22fiets";           PRM[prmpriohst22fiets]           = 0;                                                       /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    PRM_code[prmpriohst28fiets]           = "priohst28fiets";           PRM[prmpriohst28fiets]           = 0;                                                       /* Prioriteit fase 28 tijdens halfstar regelen Fiets                                                                              */
    PRM_code[prmpriohst61karbus]          = "priohst61karbus";          PRM[prmpriohst61karbus]          = 0;                                                       /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst62karbus]          = "priohst62karbus";          PRM[prmpriohst62karbus]          = 0;                                                       /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst67karbus]          = "priohst67karbus";          PRM[prmpriohst67karbus]          = 0;                                                       /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmpriohst68karbus]          = "priohst68karbus";          PRM[prmpriohst68karbus]          = 0;                                                       /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    PRM_code[prmnatxdhst02karbus]         = "natxdhst02karbus";         PRM[prmnatxdhst02karbus]         = 0;     PRM_type[prmnatxdhst02karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    PRM_code[prmnatxdhst03karbus]         = "natxdhst03karbus";         PRM[prmnatxdhst03karbus]         = 0;     PRM_type[prmnatxdhst03karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    PRM_code[prmnatxdhst05karbus]         = "natxdhst05karbus";         PRM[prmnatxdhst05karbus]         = 0;     PRM_type[prmnatxdhst05karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    PRM_code[prmnatxdhst08karbus]         = "natxdhst08karbus";         PRM[prmnatxdhst08karbus]         = 0;     PRM_type[prmnatxdhst08karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    PRM_code[prmnatxdhst09karbus]         = "natxdhst09karbus";         PRM[prmnatxdhst09karbus]         = 0;     PRM_type[prmnatxdhst09karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    PRM_code[prmnatxdhst11karbus]         = "natxdhst11karbus";         PRM[prmnatxdhst11karbus]         = 0;     PRM_type[prmnatxdhst11karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    PRM_code[prmnatxdhst22fiets]          = "natxdhst22fiets";          PRM[prmnatxdhst22fiets]          = 0;     PRM_type[prmnatxdhst22fiets]          = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    PRM_code[prmnatxdhst28fiets]          = "natxdhst28fiets";          PRM[prmnatxdhst28fiets]          = 0;     PRM_type[prmnatxdhst28fiets]          = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    PRM_code[prmnatxdhst61karbus]         = "natxdhst61karbus";         PRM[prmnatxdhst61karbus]         = 0;     PRM_type[prmnatxdhst61karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    PRM_code[prmnatxdhst62karbus]         = "natxdhst62karbus";         PRM[prmnatxdhst62karbus]         = 0;     PRM_type[prmnatxdhst62karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    PRM_code[prmnatxdhst67karbus]         = "natxdhst67karbus";         PRM[prmnatxdhst67karbus]         = 0;     PRM_type[prmnatxdhst67karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    PRM_code[prmnatxdhst68karbus]         = "natxdhst68karbus";         PRM[prmnatxdhst68karbus]         = 0;     PRM_type[prmnatxdhst68karbus]         = TE_type; /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    PRM_code[prmtxA1PL3_28]               = "txA1PL3_28";               PRM[prmtxA1PL3_28]               = 0;                                                       /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    PRM_code[prmtxB1PL3_28]               = "txB1PL3_28";               PRM[prmtxB1PL3_28]               = 29;                                                      /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    PRM_code[prmtxC1PL3_28]               = "txC1PL3_28";               PRM[prmtxC1PL3_28]               = 0;                                                       /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    PRM_code[prmtxD1PL3_28]               = "txD1PL3_28";               PRM[prmtxD1PL3_28]               = 42;                                                      /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    PRM_code[prmtxE1PL3_28]               = "txE1PL3_28";               PRM[prmtxE1PL3_28]               = 0;                                                       /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    PRM_code[prmtxA2PL3_28]               = "txA2PL3_28";               PRM[prmtxA2PL3_28]               = 0;                                                       /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    PRM_code[prmtxB2PL3_28]               = "txB2PL3_28";               PRM[prmtxB2PL3_28]               = 101;                                                     /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    PRM_code[prmtxC2PL3_28]               = "txC2PL3_28";               PRM[prmtxC2PL3_28]               = 0;                                                       /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    PRM_code[prmtxD2PL3_28]               = "txD2PL3_28";               PRM[prmtxD2PL3_28]               = 119;                                                     /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    PRM_code[prmtxE2PL3_28]               = "txE2PL3_28";               PRM[prmtxE2PL3_28]               = 0;                                                       /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    PRM_code[prmtxA1PL3_38]               = "txA1PL3_38";               PRM[prmtxA1PL3_38]               = 0;                                                       /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    PRM_code[prmtxB1PL3_38]               = "txB1PL3_38";               PRM[prmtxB1PL3_38]               = 31;                                                      /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    PRM_code[prmtxC1PL3_38]               = "txC1PL3_38";               PRM[prmtxC1PL3_38]               = 0;                                                       /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    PRM_code[prmtxD1PL3_38]               = "txD1PL3_38";               PRM[prmtxD1PL3_38]               = 39;                                                      /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    PRM_code[prmtxE1PL3_38]               = "txE1PL3_38";               PRM[prmtxE1PL3_38]               = 0;                                                       /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    PRM_code[prmtxA2PL3_38]               = "txA2PL3_38";               PRM[prmtxA2PL3_38]               = 0;                                                       /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    PRM_code[prmtxB2PL3_38]               = "txB2PL3_38";               PRM[prmtxB2PL3_38]               = 102;                                                     /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    PRM_code[prmtxC2PL3_38]               = "txC2PL3_38";               PRM[prmtxC2PL3_38]               = 0;                                                       /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    PRM_code[prmtxD2PL3_38]               = "txD2PL3_38";               PRM[prmtxD2PL3_38]               = 110;                                                     /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    PRM_code[prmtxE2PL3_38]               = "txE2PL3_38";               PRM[prmtxE2PL3_38]               = 0;                                                       /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    PRM_code[prmtxA1PL3_61]               = "txA1PL3_61";               PRM[prmtxA1PL3_61]               = 0;                                                       /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    PRM_code[prmtxB1PL3_61]               = "txB1PL3_61";               PRM[prmtxB1PL3_61]               = 4;                                                       /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    PRM_code[prmtxC1PL3_61]               = "txC1PL3_61";               PRM[prmtxC1PL3_61]               = 0;                                                       /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    PRM_code[prmtxD1PL3_61]               = "txD1PL3_61";               PRM[prmtxD1PL3_61]               = 22;                                                      /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    PRM_code[prmtxE1PL3_61]               = "txE1PL3_61";               PRM[prmtxE1PL3_61]               = 0;                                                       /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    PRM_code[prmtxA2PL3_61]               = "txA2PL3_61";               PRM[prmtxA2PL3_61]               = 0;                                                       /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    PRM_code[prmtxB2PL3_61]               = "txB2PL3_61";               PRM[prmtxB2PL3_61]               = 80;                                                      /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    PRM_code[prmtxC2PL3_61]               = "txC2PL3_61";               PRM[prmtxC2PL3_61]               = 0;                                                       /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    PRM_code[prmtxD2PL3_61]               = "txD2PL3_61";               PRM[prmtxD2PL3_61]               = 93;                                                      /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    PRM_code[prmtxE2PL3_61]               = "txE2PL3_61";               PRM[prmtxE2PL3_61]               = 0;                                                       /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    PRM_code[prmrstotxa]                  = "rstotxa";                  PRM[prmrstotxa]                  = 50;    PRM_type[prmrstotxa]                  = TE_type; /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    PRM_code[prmvolgmasterpl]             = "volgmasterpl";             PRM[prmvolgmasterpl]             = 65535;                                                   /* Per plan (bitwise) instellen wel of niet volgen master                                                                         */
    PRM_code[prmplxperdef]                = "plxperdef";                PRM[prmplxperdef]                = 1;                                                       /* Plan voor periode default                                                                                                      */
    PRM_code[prmplxper1]                  = "plxper1";                  PRM[prmplxper1]                  = 3;                                                       /* Plan voor periode nacht                                                                                                        */
    PRM_code[prmplxper2]                  = "plxper2";                  PRM[prmplxper2]                  = 3;                                                       /* Plan voor periode dag                                                                                                          */
    PRM_code[prmplxper3]                  = "plxper3";                  PRM[prmplxper3]                  = 1;                                                       /* Plan voor periode ochtend                                                                                                      */
    PRM_code[prmplxper4]                  = "plxper4";                  PRM[prmplxper4]                  = 2;                                                       /* Plan voor periode avond                                                                                                        */
    PRM_code[prmplxper5]                  = "plxper5";                  PRM[prmplxper5]                  = 2;                                                       /* Plan voor periode koopavond                                                                                                    */
    PRM_code[prmplxper6]                  = "plxper6";                  PRM[prmplxper6]                  = 3;                                                       /* Plan voor periode weekend                                                                                                      */
    PRM_code[prmplxper7]                  = "plxper7";                  PRM[prmplxper7]                  = 3;                                                       /* Plan voor periode reserve                                                                                                      */
    PRM_code[prmtypema0261]               = "typema0261";               PRM[prmtypema0261]               = 2;                                                       /* Type meeaanvraag van 02 naar 61                                                                                                */
    PRM_code[prmtypema0262]               = "typema0262";               PRM[prmtypema0262]               = 4;                                                       /* Type meeaanvraag van 02 naar 62                                                                                                */
    PRM_code[prmtypema0521]               = "typema0521";               PRM[prmtypema0521]               = 4;                                                       /* Type meeaanvraag van 05 naar 21                                                                                                */
    PRM_code[prmtypema0522]               = "typema0522";               PRM[prmtypema0522]               = 1;                                                       /* Type meeaanvraag van 05 naar 22                                                                                                */
    PRM_code[prmtypema0532]               = "typema0532";               PRM[prmtypema0532]               = 1;                                                       /* Type meeaanvraag van 05 naar 32                                                                                                */
    PRM_code[prmtypema0868]               = "typema0868";               PRM[prmtypema0868]               = 4;                                                       /* Type meeaanvraag van 08 naar 68                                                                                                */
    PRM_code[prmtypema1126]               = "typema1126";               PRM[prmtypema1126]               = 2;                                                       /* Type meeaanvraag van 11 naar 26                                                                                                */
    PRM_code[prmtypema1168]               = "typema1168";               PRM[prmtypema1168]               = 4;                                                       /* Type meeaanvraag van 11 naar 68                                                                                                */
    PRM_code[prmtypema2221]               = "typema2221";               PRM[prmtypema2221]               = 4;                                                       /* Type meeaanvraag van 22 naar 21                                                                                                */
    PRM_code[prmtypema2611]               = "typema2611";               PRM[prmtypema2611]               = 2;                                                       /* Type meeaanvraag van 26 naar 11                                                                                                */
    PRM_code[prmtypema3122]               = "typema3122";               PRM[prmtypema3122]               = 2;                                                       /* Type meeaanvraag van 31 naar 22                                                                                                */
    PRM_code[prmtypema3132]               = "typema3132";               PRM[prmtypema3132]               = 4;                                                       /* Type meeaanvraag van 31 naar 32                                                                                                */
    PRM_code[prmtypema3222]               = "typema3222";               PRM[prmtypema3222]               = 2;                                                       /* Type meeaanvraag van 32 naar 22                                                                                                */
    PRM_code[prmtypema3231]               = "typema3231";               PRM[prmtypema3231]               = 4;                                                       /* Type meeaanvraag van 32 naar 31                                                                                                */
    PRM_code[prmtypema3324]               = "typema3324";               PRM[prmtypema3324]               = 2;                                                       /* Type meeaanvraag van 33 naar 24                                                                                                */
    PRM_code[prmtypema3334]               = "typema3334";               PRM[prmtypema3334]               = 4;                                                       /* Type meeaanvraag van 33 naar 34                                                                                                */
    PRM_code[prmtypema3384]               = "typema3384";               PRM[prmtypema3384]               = 2;                                                       /* Type meeaanvraag van 33 naar 84                                                                                                */
    PRM_code[prmtypema3424]               = "typema3424";               PRM[prmtypema3424]               = 2;                                                       /* Type meeaanvraag van 34 naar 24                                                                                                */
    PRM_code[prmtypema3433]               = "typema3433";               PRM[prmtypema3433]               = 4;                                                       /* Type meeaanvraag van 34 naar 33                                                                                                */
    PRM_code[prmtypema3484]               = "typema3484";               PRM[prmtypema3484]               = 2;                                                       /* Type meeaanvraag van 34 naar 84                                                                                                */
    PRM_code[prmtypema3828]               = "typema3828";               PRM[prmtypema3828]               = 2;                                                       /* Type meeaanvraag van 38 naar 28                                                                                                */
    PRM_code[prmtypema8281]               = "typema8281";               PRM[prmtypema8281]               = 4;                                                       /* Type meeaanvraag van 82 naar 81                                                                                                */
    PRM_code[prmmv02]                     = "mv02";                     PRM[prmmv02]                     = 1;                                                       /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv03]                     = "mv03";                     PRM[prmmv03]                     = 1;                                                       /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv05]                     = "mv05";                     PRM[prmmv05]                     = 1;                                                       /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv08]                     = "mv08";                     PRM[prmmv08]                     = 1;                                                       /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv09]                     = "mv09";                     PRM[prmmv09]                     = 1;                                                       /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv11]                     = "mv11";                     PRM[prmmv11]                     = 1;                                                       /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv21]                     = "mv21";                     PRM[prmmv21]                     = 1;                                                       /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv22]                     = "mv22";                     PRM[prmmv22]                     = 9;                                                       /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmvverschil22]             = "mvverschil22";             PRM[prmmvverschil22]             = 0;     PRM_type[prmmvverschil22]             = TE_type; /* Tijd dat fase 22 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    PRM_code[prmmv24]                     = "mv24";                     PRM[prmmv24]                     = 1;                                                       /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv26]                     = "mv26";                     PRM[prmmv26]                     = 1;                                                       /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv28]                     = "mv28";                     PRM[prmmv28]                     = 1;                                                       /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv31]                     = "mv31";                     PRM[prmmv31]                     = 4;                                                       /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv32]                     = "mv32";                     PRM[prmmv32]                     = 4;                                                       /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv33]                     = "mv33";                     PRM[prmmv33]                     = 4;                                                       /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv34]                     = "mv34";                     PRM[prmmv34]                     = 4;                                                       /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv38]                     = "mv38";                     PRM[prmmv38]                     = 4;                                                       /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv61]                     = "mv61";                     PRM[prmmv61]                     = 1;                                                       /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv62]                     = "mv62";                     PRM[prmmv62]                     = 1;                                                       /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv67]                     = "mv67";                     PRM[prmmv67]                     = 1;                                                       /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv68]                     = "mv68";                     PRM[prmmv68]                     = 1;                                                       /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv81]                     = "mv81";                     PRM[prmmv81]                     = 1;                                                       /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmv82]                     = "mv82";                     PRM[prmmv82]                     = 9;                                                       /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmmvverschil82]             = "mvverschil82";             PRM[prmmvverschil82]             = 0;     PRM_type[prmmvverschil82]             = TE_type; /* Tijd dat fase 82 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    PRM_code[prmmv84]                     = "mv84";                     PRM[prmmv84]                     = 1;                                                       /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    PRM_code[prmprml02]                   = "prml02";                   PRM[prmprml02]                   = 1;                                                       /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml03]                   = "prml03";                   PRM[prmprml03]                   = 2;                                                       /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml05]                   = "prml05";                   PRM[prmprml05]                   = 4;                                                       /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml08]                   = "prml08";                   PRM[prmprml08]                   = 1;                                                       /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml09]                   = "prml09";                   PRM[prmprml09]                   = 2;                                                       /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml11]                   = "prml11";                   PRM[prmprml11]                   = 8;                                                       /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml21]                   = "prml21";                   PRM[prmprml21]                   = 4;                                                       /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml22]                   = "prml22";                   PRM[prmprml22]                   = 4;                                                       /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml24]                   = "prml24";                   PRM[prmprml24]                   = 1;                                                       /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml26]                   = "prml26";                   PRM[prmprml26]                   = 8;                                                       /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml28]                   = "prml28";                   PRM[prmprml28]                   = 1;                                                       /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml31]                   = "prml31";                   PRM[prmprml31]                   = 4;                                                       /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml32]                   = "prml32";                   PRM[prmprml32]                   = 4;                                                       /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml33]                   = "prml33";                   PRM[prmprml33]                   = 1;                                                       /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml34]                   = "prml34";                   PRM[prmprml34]                   = 1;                                                       /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml38]                   = "prml38";                   PRM[prmprml38]                   = 1;                                                       /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml61]                   = "prml61";                   PRM[prmprml61]                   = 4;                                                       /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml62]                   = "prml62";                   PRM[prmprml62]                   = 1;                                                       /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml67]                   = "prml67";                   PRM[prmprml67]                   = 4;                                                       /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml68]                   = "prml68";                   PRM[prmprml68]                   = 1;                                                       /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml81]                   = "prml81";                   PRM[prmprml81]                   = 2;                                                       /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml82]                   = "prml82";                   PRM[prmprml82]                   = 2;                                                       /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmprml84]                   = "prml84";                   PRM[prmprml84]                   = 1;                                                       /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    PRM_code[prmOVtstpgrensvroeg]         = "OVtstpgrensvroeg";         PRM[prmOVtstpgrensvroeg]         = 60;    PRM_type[prmOVtstpgrensvroeg]         = TS_type; /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    PRM_code[prmOVtstpgrenslaat]          = "OVtstpgrenslaat";          PRM[prmOVtstpgrenslaat]          = 120;   PRM_type[prmOVtstpgrenslaat]          = TS_type; /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    PRM_code[prmovstipttevroeg02karbus]   = "ovstipttevroeg02karbus";   PRM[prmovstipttevroeg02karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    PRM_code[prmovstiptoptijd02karbus]    = "ovstiptoptijd02karbus";    PRM[prmovstiptoptijd02karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    PRM_code[prmovstipttelaat02karbus]    = "ovstipttelaat02karbus";    PRM[prmovstipttelaat02karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    PRM_code[prmovstipttevroeg03karbus]   = "ovstipttevroeg03karbus";   PRM[prmovstipttevroeg03karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    PRM_code[prmovstiptoptijd03karbus]    = "ovstiptoptijd03karbus";    PRM[prmovstiptoptijd03karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    PRM_code[prmovstipttelaat03karbus]    = "ovstipttelaat03karbus";    PRM[prmovstipttelaat03karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    PRM_code[prmovstipttevroeg05karbus]   = "ovstipttevroeg05karbus";   PRM[prmovstipttevroeg05karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    PRM_code[prmovstiptoptijd05karbus]    = "ovstiptoptijd05karbus";    PRM[prmovstiptoptijd05karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    PRM_code[prmovstipttelaat05karbus]    = "ovstipttelaat05karbus";    PRM[prmovstipttelaat05karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    PRM_code[prmovstipttevroeg08karbus]   = "ovstipttevroeg08karbus";   PRM[prmovstipttevroeg08karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    PRM_code[prmovstiptoptijd08karbus]    = "ovstiptoptijd08karbus";    PRM[prmovstiptoptijd08karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    PRM_code[prmovstipttelaat08karbus]    = "ovstipttelaat08karbus";    PRM[prmovstipttelaat08karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    PRM_code[prmovstipttevroeg09karbus]   = "ovstipttevroeg09karbus";   PRM[prmovstipttevroeg09karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    PRM_code[prmovstiptoptijd09karbus]    = "ovstiptoptijd09karbus";    PRM[prmovstiptoptijd09karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    PRM_code[prmovstipttelaat09karbus]    = "ovstipttelaat09karbus";    PRM[prmovstipttelaat09karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    PRM_code[prmovstipttevroeg11karbus]   = "ovstipttevroeg11karbus";   PRM[prmovstipttevroeg11karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    PRM_code[prmovstiptoptijd11karbus]    = "ovstiptoptijd11karbus";    PRM[prmovstiptoptijd11karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    PRM_code[prmovstipttelaat11karbus]    = "ovstipttelaat11karbus";    PRM[prmovstipttelaat11karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    PRM_code[prmovstipttevroeg61karbus]   = "ovstipttevroeg61karbus";   PRM[prmovstipttevroeg61karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    PRM_code[prmovstiptoptijd61karbus]    = "ovstiptoptijd61karbus";    PRM[prmovstiptoptijd61karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    PRM_code[prmovstipttelaat61karbus]    = "ovstipttelaat61karbus";    PRM[prmovstipttelaat61karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    PRM_code[prmovstipttevroeg62karbus]   = "ovstipttevroeg62karbus";   PRM[prmovstipttevroeg62karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    PRM_code[prmovstiptoptijd62karbus]    = "ovstiptoptijd62karbus";    PRM[prmovstiptoptijd62karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    PRM_code[prmovstipttelaat62karbus]    = "ovstipttelaat62karbus";    PRM[prmovstipttelaat62karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    PRM_code[prmovstipttevroeg67karbus]   = "ovstipttevroeg67karbus";   PRM[prmovstipttevroeg67karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    PRM_code[prmovstiptoptijd67karbus]    = "ovstiptoptijd67karbus";    PRM[prmovstiptoptijd67karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    PRM_code[prmovstipttelaat67karbus]    = "ovstipttelaat67karbus";    PRM[prmovstipttelaat67karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    PRM_code[prmovstipttevroeg68karbus]   = "ovstipttevroeg68karbus";   PRM[prmovstipttevroeg68karbus]   = 2;                                                       /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    PRM_code[prmovstiptoptijd68karbus]    = "ovstiptoptijd68karbus";    PRM[prmovstiptoptijd68karbus]    = 23;                                                      /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    PRM_code[prmovstipttelaat68karbus]    = "ovstipttelaat68karbus";    PRM[prmovstipttelaat68karbus]    = 123;                                                     /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    PRM_code[prmmwta]                     = "mwta";                     PRM[prmmwta]                     = 120;   PRM_type[prmmwta]                     = TS_type; /* Maximale wachttijd autoverkeer                                                                                                 */
    PRM_code[prmmwtfts]                   = "mwtfts";                   PRM[prmmwtfts]                   = 90;    PRM_type[prmmwtfts]                   = TS_type; /* Maximale wachttijd fiets                                                                                                       */
    PRM_code[prmmwtvtg]                   = "mwtvtg";                   PRM[prmmwtvtg]                   = 90;    PRM_type[prmmwtvtg]                   = TS_type; /* Maximale wachttijd voetgangers                                                                                                 */
    PRM_code[prmpmgt02]                   = "pmgt02";                   PRM[prmpmgt02]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    PRM_code[prmognt02]                   = "ognt02";                   PRM[prmognt02]                   = 60;    PRM_type[prmognt02]                   = TE_type; /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    PRM_code[prmnofm02]                   = "nofm02";                   PRM[prmnofm02]                   = 0;     PRM_type[prmnofm02]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    PRM_code[prmmgcov02]                  = "mgcov02";                  PRM[prmmgcov02]                  = 0;     PRM_type[prmmgcov02]                  = TE_type; /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov02]                 = "pmgcov02";                 PRM[prmpmgcov02]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg02]                  = "ohpmg02";                  PRM[prmohpmg02]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    PRM_code[prmpmgt03]                   = "pmgt03";                   PRM[prmpmgt03]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    PRM_code[prmognt03]                   = "ognt03";                   PRM[prmognt03]                   = 60;    PRM_type[prmognt03]                   = TE_type; /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    PRM_code[prmnofm03]                   = "nofm03";                   PRM[prmnofm03]                   = 0;     PRM_type[prmnofm03]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    PRM_code[prmmgcov03]                  = "mgcov03";                  PRM[prmmgcov03]                  = 0;     PRM_type[prmmgcov03]                  = TE_type; /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov03]                 = "pmgcov03";                 PRM[prmpmgcov03]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg03]                  = "ohpmg03";                  PRM[prmohpmg03]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    PRM_code[prmpmgt05]                   = "pmgt05";                   PRM[prmpmgt05]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    PRM_code[prmognt05]                   = "ognt05";                   PRM[prmognt05]                   = 60;    PRM_type[prmognt05]                   = TE_type; /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    PRM_code[prmnofm05]                   = "nofm05";                   PRM[prmnofm05]                   = 0;     PRM_type[prmnofm05]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    PRM_code[prmmgcov05]                  = "mgcov05";                  PRM[prmmgcov05]                  = 0;     PRM_type[prmmgcov05]                  = TE_type; /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov05]                 = "pmgcov05";                 PRM[prmpmgcov05]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg05]                  = "ohpmg05";                  PRM[prmohpmg05]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    PRM_code[prmpmgt08]                   = "pmgt08";                   PRM[prmpmgt08]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    PRM_code[prmognt08]                   = "ognt08";                   PRM[prmognt08]                   = 60;    PRM_type[prmognt08]                   = TE_type; /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    PRM_code[prmnofm08]                   = "nofm08";                   PRM[prmnofm08]                   = 0;     PRM_type[prmnofm08]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    PRM_code[prmmgcov08]                  = "mgcov08";                  PRM[prmmgcov08]                  = 0;     PRM_type[prmmgcov08]                  = TE_type; /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov08]                 = "pmgcov08";                 PRM[prmpmgcov08]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg08]                  = "ohpmg08";                  PRM[prmohpmg08]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    PRM_code[prmpmgt09]                   = "pmgt09";                   PRM[prmpmgt09]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    PRM_code[prmognt09]                   = "ognt09";                   PRM[prmognt09]                   = 60;    PRM_type[prmognt09]                   = TE_type; /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    PRM_code[prmnofm09]                   = "nofm09";                   PRM[prmnofm09]                   = 0;     PRM_type[prmnofm09]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    PRM_code[prmmgcov09]                  = "mgcov09";                  PRM[prmmgcov09]                  = 0;     PRM_type[prmmgcov09]                  = TE_type; /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov09]                 = "pmgcov09";                 PRM[prmpmgcov09]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg09]                  = "ohpmg09";                  PRM[prmohpmg09]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    PRM_code[prmpmgt11]                   = "pmgt11";                   PRM[prmpmgt11]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    PRM_code[prmognt11]                   = "ognt11";                   PRM[prmognt11]                   = 60;    PRM_type[prmognt11]                   = TE_type; /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    PRM_code[prmnofm11]                   = "nofm11";                   PRM[prmnofm11]                   = 0;     PRM_type[prmnofm11]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    PRM_code[prmmgcov11]                  = "mgcov11";                  PRM[prmmgcov11]                  = 0;     PRM_type[prmmgcov11]                  = TE_type; /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov11]                 = "pmgcov11";                 PRM[prmpmgcov11]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg11]                  = "ohpmg11";                  PRM[prmohpmg11]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    PRM_code[prmpmgt21]                   = "pmgt21";                   PRM[prmpmgt21]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    PRM_code[prmognt21]                   = "ognt21";                   PRM[prmognt21]                   = 60;    PRM_type[prmognt21]                   = TE_type; /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    PRM_code[prmnofm21]                   = "nofm21";                   PRM[prmnofm21]                   = 0;     PRM_type[prmnofm21]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    PRM_code[prmmgcov21]                  = "mgcov21";                  PRM[prmmgcov21]                  = 0;     PRM_type[prmmgcov21]                  = TE_type; /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov21]                 = "pmgcov21";                 PRM[prmpmgcov21]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg21]                  = "ohpmg21";                  PRM[prmohpmg21]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    PRM_code[prmpmgt22]                   = "pmgt22";                   PRM[prmpmgt22]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    PRM_code[prmognt22]                   = "ognt22";                   PRM[prmognt22]                   = 60;    PRM_type[prmognt22]                   = TE_type; /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    PRM_code[prmnofm22]                   = "nofm22";                   PRM[prmnofm22]                   = 0;     PRM_type[prmnofm22]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    PRM_code[prmmgcov22]                  = "mgcov22";                  PRM[prmmgcov22]                  = 0;     PRM_type[prmmgcov22]                  = TE_type; /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov22]                 = "pmgcov22";                 PRM[prmpmgcov22]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg22]                  = "ohpmg22";                  PRM[prmohpmg22]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    PRM_code[prmpmgt24]                   = "pmgt24";                   PRM[prmpmgt24]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    PRM_code[prmognt24]                   = "ognt24";                   PRM[prmognt24]                   = 60;    PRM_type[prmognt24]                   = TE_type; /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    PRM_code[prmnofm24]                   = "nofm24";                   PRM[prmnofm24]                   = 0;     PRM_type[prmnofm24]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    PRM_code[prmmgcov24]                  = "mgcov24";                  PRM[prmmgcov24]                  = 0;     PRM_type[prmmgcov24]                  = TE_type; /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov24]                 = "pmgcov24";                 PRM[prmpmgcov24]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg24]                  = "ohpmg24";                  PRM[prmohpmg24]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    PRM_code[prmpmgt26]                   = "pmgt26";                   PRM[prmpmgt26]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    PRM_code[prmognt26]                   = "ognt26";                   PRM[prmognt26]                   = 60;    PRM_type[prmognt26]                   = TE_type; /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    PRM_code[prmnofm26]                   = "nofm26";                   PRM[prmnofm26]                   = 0;     PRM_type[prmnofm26]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    PRM_code[prmmgcov26]                  = "mgcov26";                  PRM[prmmgcov26]                  = 0;     PRM_type[prmmgcov26]                  = TE_type; /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov26]                 = "pmgcov26";                 PRM[prmpmgcov26]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg26]                  = "ohpmg26";                  PRM[prmohpmg26]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    PRM_code[prmpmgt28]                   = "pmgt28";                   PRM[prmpmgt28]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    PRM_code[prmognt28]                   = "ognt28";                   PRM[prmognt28]                   = 60;    PRM_type[prmognt28]                   = TE_type; /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    PRM_code[prmnofm28]                   = "nofm28";                   PRM[prmnofm28]                   = 0;     PRM_type[prmnofm28]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    PRM_code[prmmgcov28]                  = "mgcov28";                  PRM[prmmgcov28]                  = 0;     PRM_type[prmmgcov28]                  = TE_type; /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov28]                 = "pmgcov28";                 PRM[prmpmgcov28]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg28]                  = "ohpmg28";                  PRM[prmohpmg28]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    PRM_code[prmpmgt31]                   = "pmgt31";                   PRM[prmpmgt31]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    PRM_code[prmognt31]                   = "ognt31";                   PRM[prmognt31]                   = 60;    PRM_type[prmognt31]                   = TE_type; /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    PRM_code[prmpmgt32]                   = "pmgt32";                   PRM[prmpmgt32]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    PRM_code[prmognt32]                   = "ognt32";                   PRM[prmognt32]                   = 60;    PRM_type[prmognt32]                   = TE_type; /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    PRM_code[prmpmgt33]                   = "pmgt33";                   PRM[prmpmgt33]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    PRM_code[prmognt33]                   = "ognt33";                   PRM[prmognt33]                   = 60;    PRM_type[prmognt33]                   = TE_type; /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    PRM_code[prmpmgt34]                   = "pmgt34";                   PRM[prmpmgt34]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    PRM_code[prmognt34]                   = "ognt34";                   PRM[prmognt34]                   = 60;    PRM_type[prmognt34]                   = TE_type; /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    PRM_code[prmpmgt38]                   = "pmgt38";                   PRM[prmpmgt38]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    PRM_code[prmognt38]                   = "ognt38";                   PRM[prmognt38]                   = 60;    PRM_type[prmognt38]                   = TE_type; /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    PRM_code[prmpmgt61]                   = "pmgt61";                   PRM[prmpmgt61]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    PRM_code[prmognt61]                   = "ognt61";                   PRM[prmognt61]                   = 60;    PRM_type[prmognt61]                   = TE_type; /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    PRM_code[prmnofm61]                   = "nofm61";                   PRM[prmnofm61]                   = 0;     PRM_type[prmnofm61]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    PRM_code[prmmgcov61]                  = "mgcov61";                  PRM[prmmgcov61]                  = 0;     PRM_type[prmmgcov61]                  = TE_type; /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov61]                 = "pmgcov61";                 PRM[prmpmgcov61]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg61]                  = "ohpmg61";                  PRM[prmohpmg61]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    PRM_code[prmpmgt62]                   = "pmgt62";                   PRM[prmpmgt62]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    PRM_code[prmognt62]                   = "ognt62";                   PRM[prmognt62]                   = 60;    PRM_type[prmognt62]                   = TE_type; /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    PRM_code[prmnofm62]                   = "nofm62";                   PRM[prmnofm62]                   = 0;     PRM_type[prmnofm62]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    PRM_code[prmmgcov62]                  = "mgcov62";                  PRM[prmmgcov62]                  = 0;     PRM_type[prmmgcov62]                  = TE_type; /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov62]                 = "pmgcov62";                 PRM[prmpmgcov62]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg62]                  = "ohpmg62";                  PRM[prmohpmg62]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    PRM_code[prmpmgt67]                   = "pmgt67";                   PRM[prmpmgt67]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    PRM_code[prmognt67]                   = "ognt67";                   PRM[prmognt67]                   = 60;    PRM_type[prmognt67]                   = TE_type; /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    PRM_code[prmnofm67]                   = "nofm67";                   PRM[prmnofm67]                   = 0;     PRM_type[prmnofm67]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    PRM_code[prmmgcov67]                  = "mgcov67";                  PRM[prmmgcov67]                  = 0;     PRM_type[prmmgcov67]                  = TE_type; /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov67]                 = "pmgcov67";                 PRM[prmpmgcov67]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg67]                  = "ohpmg67";                  PRM[prmohpmg67]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    PRM_code[prmpmgt68]                   = "pmgt68";                   PRM[prmpmgt68]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    PRM_code[prmognt68]                   = "ognt68";                   PRM[prmognt68]                   = 60;    PRM_type[prmognt68]                   = TE_type; /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    PRM_code[prmnofm68]                   = "nofm68";                   PRM[prmnofm68]                   = 0;     PRM_type[prmnofm68]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    PRM_code[prmmgcov68]                  = "mgcov68";                  PRM[prmmgcov68]                  = 0;     PRM_type[prmmgcov68]                  = TE_type; /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov68]                 = "pmgcov68";                 PRM[prmpmgcov68]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg68]                  = "ohpmg68";                  PRM[prmohpmg68]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    PRM_code[prmpmgt81]                   = "pmgt81";                   PRM[prmpmgt81]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    PRM_code[prmognt81]                   = "ognt81";                   PRM[prmognt81]                   = 60;    PRM_type[prmognt81]                   = TE_type; /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    PRM_code[prmnofm81]                   = "nofm81";                   PRM[prmnofm81]                   = 0;     PRM_type[prmnofm81]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    PRM_code[prmmgcov81]                  = "mgcov81";                  PRM[prmmgcov81]                  = 0;     PRM_type[prmmgcov81]                  = TE_type; /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov81]                 = "pmgcov81";                 PRM[prmpmgcov81]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg81]                  = "ohpmg81";                  PRM[prmohpmg81]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    PRM_code[prmpmgt82]                   = "pmgt82";                   PRM[prmpmgt82]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    PRM_code[prmognt82]                   = "ognt82";                   PRM[prmognt82]                   = 60;    PRM_type[prmognt82]                   = TE_type; /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    PRM_code[prmnofm82]                   = "nofm82";                   PRM[prmnofm82]                   = 0;     PRM_type[prmnofm82]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    PRM_code[prmmgcov82]                  = "mgcov82";                  PRM[prmmgcov82]                  = 0;     PRM_type[prmmgcov82]                  = TE_type; /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov82]                 = "pmgcov82";                 PRM[prmpmgcov82]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg82]                  = "ohpmg82";                  PRM[prmohpmg82]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    PRM_code[prmpmgt84]                   = "pmgt84";                   PRM[prmpmgt84]                   = 0;                                                       /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    PRM_code[prmognt84]                   = "ognt84";                   PRM[prmognt84]                   = 60;    PRM_type[prmognt84]                   = TE_type; /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    PRM_code[prmnofm84]                   = "nofm84";                   PRM[prmnofm84]                   = 0;     PRM_type[prmnofm84]                   = TE_type; /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    PRM_code[prmmgcov84]                  = "mgcov84";                  PRM[prmmgcov84]                  = 0;     PRM_type[prmmgcov84]                  = TE_type; /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    PRM_code[prmpmgcov84]                 = "pmgcov84";                 PRM[prmpmgcov84]                 = 0;                                                       /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    PRM_code[prmohpmg84]                  = "ohpmg84";                  PRM[prmohpmg84]                  = 0;                                                       /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    PRM_code[prmrto02karbus]              = "rto02karbus";              PRM[prmrto02karbus]              = 140;   PRM_type[prmrto02karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    PRM_code[prmrtbg02karbus]             = "rtbg02karbus";             PRM[prmrtbg02karbus]             = 100;   PRM_type[prmrtbg02karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    PRM_code[prmrtg02karbus]              = "rtg02karbus";              PRM[prmrtg02karbus]              = 60;    PRM_type[prmrtg02karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    PRM_code[prmomx02karbus]              = "omx02karbus";              PRM[prmomx02karbus]              = 150;   PRM_type[prmomx02karbus]              = TE_type; /* Ondermaximum OV fase 02                                                                                                        */
    PRM_code[prmupinagb02karbus]          = "upinagb02karbus";          PRM[prmupinagb02karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    PRM_code[prmvtgcat02karbus]           = "vtgcat02karbus";           PRM[prmvtgcat02karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    PRM_code[prmprio02karbus]             = "prio02karbus";             PRM[prmprio02karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 02                                                                                               */
    PRM_code[prmrto03karbus]              = "rto03karbus";              PRM[prmrto03karbus]              = 140;   PRM_type[prmrto03karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    PRM_code[prmrtbg03karbus]             = "rtbg03karbus";             PRM[prmrtbg03karbus]             = 100;   PRM_type[prmrtbg03karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    PRM_code[prmrtg03karbus]              = "rtg03karbus";              PRM[prmrtg03karbus]              = 60;    PRM_type[prmrtg03karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    PRM_code[prmomx03karbus]              = "omx03karbus";              PRM[prmomx03karbus]              = 150;   PRM_type[prmomx03karbus]              = TE_type; /* Ondermaximum OV fase 03                                                                                                        */
    PRM_code[prmupinagb03karbus]          = "upinagb03karbus";          PRM[prmupinagb03karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    PRM_code[prmvtgcat03karbus]           = "vtgcat03karbus";           PRM[prmvtgcat03karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    PRM_code[prmprio03karbus]             = "prio03karbus";             PRM[prmprio03karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 03                                                                                               */
    PRM_code[prmrto05karbus]              = "rto05karbus";              PRM[prmrto05karbus]              = 140;   PRM_type[prmrto05karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    PRM_code[prmrtbg05karbus]             = "rtbg05karbus";             PRM[prmrtbg05karbus]             = 100;   PRM_type[prmrtbg05karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    PRM_code[prmrtg05karbus]              = "rtg05karbus";              PRM[prmrtg05karbus]              = 60;    PRM_type[prmrtg05karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    PRM_code[prmomx05karbus]              = "omx05karbus";              PRM[prmomx05karbus]              = 150;   PRM_type[prmomx05karbus]              = TE_type; /* Ondermaximum OV fase 05                                                                                                        */
    PRM_code[prmupinagb05karbus]          = "upinagb05karbus";          PRM[prmupinagb05karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    PRM_code[prmvtgcat05karbus]           = "vtgcat05karbus";           PRM[prmvtgcat05karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    PRM_code[prmprio05karbus]             = "prio05karbus";             PRM[prmprio05karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 05                                                                                               */
    PRM_code[prmrto08karbus]              = "rto08karbus";              PRM[prmrto08karbus]              = 140;   PRM_type[prmrto08karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    PRM_code[prmrtbg08karbus]             = "rtbg08karbus";             PRM[prmrtbg08karbus]             = 100;   PRM_type[prmrtbg08karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    PRM_code[prmrtg08karbus]              = "rtg08karbus";              PRM[prmrtg08karbus]              = 60;    PRM_type[prmrtg08karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    PRM_code[prmomx08karbus]              = "omx08karbus";              PRM[prmomx08karbus]              = 150;   PRM_type[prmomx08karbus]              = TE_type; /* Ondermaximum OV fase 08                                                                                                        */
    PRM_code[prmupinagb08karbus]          = "upinagb08karbus";          PRM[prmupinagb08karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    PRM_code[prmvtgcat08karbus]           = "vtgcat08karbus";           PRM[prmvtgcat08karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    PRM_code[prmprio08karbus]             = "prio08karbus";             PRM[prmprio08karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 08                                                                                               */
    PRM_code[prmrto09karbus]              = "rto09karbus";              PRM[prmrto09karbus]              = 140;   PRM_type[prmrto09karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    PRM_code[prmrtbg09karbus]             = "rtbg09karbus";             PRM[prmrtbg09karbus]             = 100;   PRM_type[prmrtbg09karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    PRM_code[prmrtg09karbus]              = "rtg09karbus";              PRM[prmrtg09karbus]              = 60;    PRM_type[prmrtg09karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    PRM_code[prmomx09karbus]              = "omx09karbus";              PRM[prmomx09karbus]              = 150;   PRM_type[prmomx09karbus]              = TE_type; /* Ondermaximum OV fase 09                                                                                                        */
    PRM_code[prmupinagb09karbus]          = "upinagb09karbus";          PRM[prmupinagb09karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    PRM_code[prmvtgcat09karbus]           = "vtgcat09karbus";           PRM[prmvtgcat09karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    PRM_code[prmprio09karbus]             = "prio09karbus";             PRM[prmprio09karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 09                                                                                               */
    PRM_code[prmrto11karbus]              = "rto11karbus";              PRM[prmrto11karbus]              = 140;   PRM_type[prmrto11karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    PRM_code[prmrtbg11karbus]             = "rtbg11karbus";             PRM[prmrtbg11karbus]             = 100;   PRM_type[prmrtbg11karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    PRM_code[prmrtg11karbus]              = "rtg11karbus";              PRM[prmrtg11karbus]              = 60;    PRM_type[prmrtg11karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    PRM_code[prmomx11karbus]              = "omx11karbus";              PRM[prmomx11karbus]              = 150;   PRM_type[prmomx11karbus]              = TE_type; /* Ondermaximum OV fase 11                                                                                                        */
    PRM_code[prmupinagb11karbus]          = "upinagb11karbus";          PRM[prmupinagb11karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    PRM_code[prmvtgcat11karbus]           = "vtgcat11karbus";           PRM[prmvtgcat11karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    PRM_code[prmprio11karbus]             = "prio11karbus";             PRM[prmprio11karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 11                                                                                               */
    PRM_code[prmftsblok22fietsfiets]      = "ftsblok22fietsfiets";      PRM[prmftsblok22fietsfiets]      = 1023;                                                    /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    PRM_code[prmftsmaxpercyc22fietsfiets] = "ftsmaxpercyc22fietsfiets"; PRM[prmftsmaxpercyc22fietsfiets] = 1;                                                       /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    PRM_code[prmftsminwt22fietsfiets]     = "ftsminwt22fietsfiets";     PRM[prmftsminwt22fietsfiets]     = 45;    PRM_type[prmftsminwt22fietsfiets]     = TS_type; /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    PRM_code[prmrto22fiets]               = "rto22fiets";               PRM[prmrto22fiets]               = 0;     PRM_type[prmrto22fiets]               = TE_type; /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    PRM_code[prmrtbg22fiets]              = "rtbg22fiets";              PRM[prmrtbg22fiets]              = 0;     PRM_type[prmrtbg22fiets]              = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    PRM_code[prmrtg22fiets]               = "rtg22fiets";               PRM[prmrtg22fiets]               = 0;     PRM_type[prmrtg22fiets]               = TE_type; /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    PRM_code[prmomx22fiets]               = "omx22fiets";               PRM[prmomx22fiets]               = 0;     PRM_type[prmomx22fiets]               = TE_type; /* Ondermaximum OV fase 22                                                                                                        */
    PRM_code[prmupinagb22fiets]           = "upinagb22fiets";           PRM[prmupinagb22fiets]           = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    PRM_code[prmprio22fiets]              = "prio22fiets";              PRM[prmprio22fiets]              = 123;                                                     /* Prioriteitsinstelling OV fase 22                                                                                               */
    PRM_code[prmftsblok28fietsfiets]      = "ftsblok28fietsfiets";      PRM[prmftsblok28fietsfiets]      = 1023;                                                    /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    PRM_code[prmftsmaxpercyc28fietsfiets] = "ftsmaxpercyc28fietsfiets"; PRM[prmftsmaxpercyc28fietsfiets] = 1;                                                       /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    PRM_code[prmftsminwt28fietsfiets]     = "ftsminwt28fietsfiets";     PRM[prmftsminwt28fietsfiets]     = 45;    PRM_type[prmftsminwt28fietsfiets]     = TS_type; /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    PRM_code[prmrto28fiets]               = "rto28fiets";               PRM[prmrto28fiets]               = 0;     PRM_type[prmrto28fiets]               = TE_type; /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    PRM_code[prmrtbg28fiets]              = "rtbg28fiets";              PRM[prmrtbg28fiets]              = 0;     PRM_type[prmrtbg28fiets]              = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    PRM_code[prmrtg28fiets]               = "rtg28fiets";               PRM[prmrtg28fiets]               = 0;     PRM_type[prmrtg28fiets]               = TE_type; /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    PRM_code[prmomx28fiets]               = "omx28fiets";               PRM[prmomx28fiets]               = 0;     PRM_type[prmomx28fiets]               = TE_type; /* Ondermaximum OV fase 28                                                                                                        */
    PRM_code[prmupinagb28fiets]           = "upinagb28fiets";           PRM[prmupinagb28fiets]           = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    PRM_code[prmprio28fiets]              = "prio28fiets";              PRM[prmprio28fiets]              = 123;                                                     /* Prioriteitsinstelling OV fase 28                                                                                               */
    PRM_code[prmrto61karbus]              = "rto61karbus";              PRM[prmrto61karbus]              = 140;   PRM_type[prmrto61karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    PRM_code[prmrtbg61karbus]             = "rtbg61karbus";             PRM[prmrtbg61karbus]             = 100;   PRM_type[prmrtbg61karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    PRM_code[prmrtg61karbus]              = "rtg61karbus";              PRM[prmrtg61karbus]              = 60;    PRM_type[prmrtg61karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    PRM_code[prmomx61karbus]              = "omx61karbus";              PRM[prmomx61karbus]              = 150;   PRM_type[prmomx61karbus]              = TE_type; /* Ondermaximum OV fase 61                                                                                                        */
    PRM_code[prmupinagb61karbus]          = "upinagb61karbus";          PRM[prmupinagb61karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    PRM_code[prmvtgcat61karbus]           = "vtgcat61karbus";           PRM[prmvtgcat61karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    PRM_code[prmprio61karbus]             = "prio61karbus";             PRM[prmprio61karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 61                                                                                               */
    PRM_code[prmrto62karbus]              = "rto62karbus";              PRM[prmrto62karbus]              = 140;   PRM_type[prmrto62karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    PRM_code[prmrtbg62karbus]             = "rtbg62karbus";             PRM[prmrtbg62karbus]             = 100;   PRM_type[prmrtbg62karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    PRM_code[prmrtg62karbus]              = "rtg62karbus";              PRM[prmrtg62karbus]              = 60;    PRM_type[prmrtg62karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    PRM_code[prmomx62karbus]              = "omx62karbus";              PRM[prmomx62karbus]              = 150;   PRM_type[prmomx62karbus]              = TE_type; /* Ondermaximum OV fase 62                                                                                                        */
    PRM_code[prmupinagb62karbus]          = "upinagb62karbus";          PRM[prmupinagb62karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    PRM_code[prmvtgcat62karbus]           = "vtgcat62karbus";           PRM[prmvtgcat62karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    PRM_code[prmprio62karbus]             = "prio62karbus";             PRM[prmprio62karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 62                                                                                               */
    PRM_code[prmrto67karbus]              = "rto67karbus";              PRM[prmrto67karbus]              = 140;   PRM_type[prmrto67karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    PRM_code[prmrtbg67karbus]             = "rtbg67karbus";             PRM[prmrtbg67karbus]             = 100;   PRM_type[prmrtbg67karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    PRM_code[prmrtg67karbus]              = "rtg67karbus";              PRM[prmrtg67karbus]              = 60;    PRM_type[prmrtg67karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    PRM_code[prmomx67karbus]              = "omx67karbus";              PRM[prmomx67karbus]              = 150;   PRM_type[prmomx67karbus]              = TE_type; /* Ondermaximum OV fase 67                                                                                                        */
    PRM_code[prmupinagb67karbus]          = "upinagb67karbus";          PRM[prmupinagb67karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    PRM_code[prmvtgcat67karbus]           = "vtgcat67karbus";           PRM[prmvtgcat67karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    PRM_code[prmprio67karbus]             = "prio67karbus";             PRM[prmprio67karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 67                                                                                               */
    PRM_code[prmrto68karbus]              = "rto68karbus";              PRM[prmrto68karbus]              = 140;   PRM_type[prmrto68karbus]              = TE_type; /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    PRM_code[prmrtbg68karbus]             = "rtbg68karbus";             PRM[prmrtbg68karbus]             = 100;   PRM_type[prmrtbg68karbus]             = TE_type; /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    PRM_code[prmrtg68karbus]              = "rtg68karbus";              PRM[prmrtg68karbus]              = 60;    PRM_type[prmrtg68karbus]              = TE_type; /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    PRM_code[prmomx68karbus]              = "omx68karbus";              PRM[prmomx68karbus]              = 150;   PRM_type[prmomx68karbus]              = TE_type; /* Ondermaximum OV fase 68                                                                                                        */
    PRM_code[prmupinagb68karbus]          = "upinagb68karbus";          PRM[prmupinagb68karbus]          = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    PRM_code[prmvtgcat68karbus]           = "vtgcat68karbus";           PRM[prmvtgcat68karbus]           = 1;                                                       /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    PRM_code[prmprio68karbus]             = "prio68karbus";             PRM[prmprio68karbus]             = 123;                                                     /* Prioriteitsinstelling OV fase 68                                                                                               */
    PRM_code[prmpriohd02]                 = "priohd02";                 PRM[prmpriohd02]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 02                                                                                               */
    PRM_code[prmrtohd02]                  = "rtohd02";                  PRM[prmrtohd02]                  = 0;     PRM_type[prmrtohd02]                  = TE_type; /* Ongehinderde rijtijd HD fase 02                                                                                                */
    PRM_code[prmrtbghd02]                 = "rtbghd02";                 PRM[prmrtbghd02]                 = 0;     PRM_type[prmrtbghd02]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    PRM_code[prmrtghd02]                  = "rtghd02";                  PRM[prmrtghd02]                  = 0;     PRM_type[prmrtghd02]                  = TE_type; /* Gehinderde rijtijd HD fase 02                                                                                                  */
    PRM_code[prmupinagbhd02]              = "upinagbhd02";              PRM[prmupinagbhd02]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    PRM_code[prmpriohd03]                 = "priohd03";                 PRM[prmpriohd03]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 03                                                                                               */
    PRM_code[prmrtohd03]                  = "rtohd03";                  PRM[prmrtohd03]                  = 0;     PRM_type[prmrtohd03]                  = TE_type; /* Ongehinderde rijtijd HD fase 03                                                                                                */
    PRM_code[prmrtbghd03]                 = "rtbghd03";                 PRM[prmrtbghd03]                 = 0;     PRM_type[prmrtbghd03]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    PRM_code[prmrtghd03]                  = "rtghd03";                  PRM[prmrtghd03]                  = 0;     PRM_type[prmrtghd03]                  = TE_type; /* Gehinderde rijtijd HD fase 03                                                                                                  */
    PRM_code[prmupinagbhd03]              = "upinagbhd03";              PRM[prmupinagbhd03]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    PRM_code[prmpriohd05]                 = "priohd05";                 PRM[prmpriohd05]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 05                                                                                               */
    PRM_code[prmrtohd05]                  = "rtohd05";                  PRM[prmrtohd05]                  = 0;     PRM_type[prmrtohd05]                  = TE_type; /* Ongehinderde rijtijd HD fase 05                                                                                                */
    PRM_code[prmrtbghd05]                 = "rtbghd05";                 PRM[prmrtbghd05]                 = 0;     PRM_type[prmrtbghd05]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    PRM_code[prmrtghd05]                  = "rtghd05";                  PRM[prmrtghd05]                  = 0;     PRM_type[prmrtghd05]                  = TE_type; /* Gehinderde rijtijd HD fase 05                                                                                                  */
    PRM_code[prmupinagbhd05]              = "upinagbhd05";              PRM[prmupinagbhd05]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    PRM_code[prmpriohd08]                 = "priohd08";                 PRM[prmpriohd08]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 08                                                                                               */
    PRM_code[prmrtohd08]                  = "rtohd08";                  PRM[prmrtohd08]                  = 0;     PRM_type[prmrtohd08]                  = TE_type; /* Ongehinderde rijtijd HD fase 08                                                                                                */
    PRM_code[prmrtbghd08]                 = "rtbghd08";                 PRM[prmrtbghd08]                 = 0;     PRM_type[prmrtbghd08]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    PRM_code[prmrtghd08]                  = "rtghd08";                  PRM[prmrtghd08]                  = 0;     PRM_type[prmrtghd08]                  = TE_type; /* Gehinderde rijtijd HD fase 08                                                                                                  */
    PRM_code[prmupinagbhd08]              = "upinagbhd08";              PRM[prmupinagbhd08]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    PRM_code[prmpriohd09]                 = "priohd09";                 PRM[prmpriohd09]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 09                                                                                               */
    PRM_code[prmrtohd09]                  = "rtohd09";                  PRM[prmrtohd09]                  = 0;     PRM_type[prmrtohd09]                  = TE_type; /* Ongehinderde rijtijd HD fase 09                                                                                                */
    PRM_code[prmrtbghd09]                 = "rtbghd09";                 PRM[prmrtbghd09]                 = 0;     PRM_type[prmrtbghd09]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    PRM_code[prmrtghd09]                  = "rtghd09";                  PRM[prmrtghd09]                  = 0;     PRM_type[prmrtghd09]                  = TE_type; /* Gehinderde rijtijd HD fase 09                                                                                                  */
    PRM_code[prmupinagbhd09]              = "upinagbhd09";              PRM[prmupinagbhd09]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    PRM_code[prmpriohd11]                 = "priohd11";                 PRM[prmpriohd11]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 11                                                                                               */
    PRM_code[prmrtohd11]                  = "rtohd11";                  PRM[prmrtohd11]                  = 0;     PRM_type[prmrtohd11]                  = TE_type; /* Ongehinderde rijtijd HD fase 11                                                                                                */
    PRM_code[prmrtbghd11]                 = "rtbghd11";                 PRM[prmrtbghd11]                 = 0;     PRM_type[prmrtbghd11]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    PRM_code[prmrtghd11]                  = "rtghd11";                  PRM[prmrtghd11]                  = 0;     PRM_type[prmrtghd11]                  = TE_type; /* Gehinderde rijtijd HD fase 11                                                                                                  */
    PRM_code[prmupinagbhd11]              = "upinagbhd11";              PRM[prmupinagbhd11]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    PRM_code[prmpriohd61]                 = "priohd61";                 PRM[prmpriohd61]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 61                                                                                               */
    PRM_code[prmrtohd61]                  = "rtohd61";                  PRM[prmrtohd61]                  = 0;     PRM_type[prmrtohd61]                  = TE_type; /* Ongehinderde rijtijd HD fase 61                                                                                                */
    PRM_code[prmrtbghd61]                 = "rtbghd61";                 PRM[prmrtbghd61]                 = 0;     PRM_type[prmrtbghd61]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    PRM_code[prmrtghd61]                  = "rtghd61";                  PRM[prmrtghd61]                  = 0;     PRM_type[prmrtghd61]                  = TE_type; /* Gehinderde rijtijd HD fase 61                                                                                                  */
    PRM_code[prmupinagbhd61]              = "upinagbhd61";              PRM[prmupinagbhd61]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    PRM_code[prmpriohd62]                 = "priohd62";                 PRM[prmpriohd62]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 62                                                                                               */
    PRM_code[prmrtohd62]                  = "rtohd62";                  PRM[prmrtohd62]                  = 0;     PRM_type[prmrtohd62]                  = TE_type; /* Ongehinderde rijtijd HD fase 62                                                                                                */
    PRM_code[prmrtbghd62]                 = "rtbghd62";                 PRM[prmrtbghd62]                 = 0;     PRM_type[prmrtbghd62]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    PRM_code[prmrtghd62]                  = "rtghd62";                  PRM[prmrtghd62]                  = 0;     PRM_type[prmrtghd62]                  = TE_type; /* Gehinderde rijtijd HD fase 62                                                                                                  */
    PRM_code[prmupinagbhd62]              = "upinagbhd62";              PRM[prmupinagbhd62]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    PRM_code[prmpriohd67]                 = "priohd67";                 PRM[prmpriohd67]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 67                                                                                               */
    PRM_code[prmrtohd67]                  = "rtohd67";                  PRM[prmrtohd67]                  = 0;     PRM_type[prmrtohd67]                  = TE_type; /* Ongehinderde rijtijd HD fase 67                                                                                                */
    PRM_code[prmrtbghd67]                 = "rtbghd67";                 PRM[prmrtbghd67]                 = 0;     PRM_type[prmrtbghd67]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    PRM_code[prmrtghd67]                  = "rtghd67";                  PRM[prmrtghd67]                  = 0;     PRM_type[prmrtghd67]                  = TE_type; /* Gehinderde rijtijd HD fase 67                                                                                                  */
    PRM_code[prmupinagbhd67]              = "upinagbhd67";              PRM[prmupinagbhd67]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    PRM_code[prmpriohd68]                 = "priohd68";                 PRM[prmpriohd68]                 = 9005;                                                    /* Prioriteitsinstelling HD fase 68                                                                                               */
    PRM_code[prmrtohd68]                  = "rtohd68";                  PRM[prmrtohd68]                  = 0;     PRM_type[prmrtohd68]                  = TE_type; /* Ongehinderde rijtijd HD fase 68                                                                                                */
    PRM_code[prmrtbghd68]                 = "rtbghd68";                 PRM[prmrtbghd68]                 = 0;     PRM_type[prmrtbghd68]                 = TE_type; /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    PRM_code[prmrtghd68]                  = "rtghd68";                  PRM[prmrtghd68]                  = 0;     PRM_type[prmrtghd68]                  = TE_type; /* Gehinderde rijtijd HD fase 68                                                                                                  */
    PRM_code[prmupinagbhd68]              = "upinagbhd68";              PRM[prmupinagbhd68]              = 0;                                                       /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    PRM_code[prmkarsg02]                  = "karsg02";                  PRM[prmkarsg02]                  = 2;                                                       /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg03]                  = "karsg03";                  PRM[prmkarsg03]                  = 3;                                                       /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg05]                  = "karsg05";                  PRM[prmkarsg05]                  = 5;                                                       /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg08]                  = "karsg08";                  PRM[prmkarsg08]                  = 8;                                                       /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg09]                  = "karsg09";                  PRM[prmkarsg09]                  = 9;                                                       /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg11]                  = "karsg11";                  PRM[prmkarsg11]                  = 11;                                                      /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg61]                  = "karsg61";                  PRM[prmkarsg61]                  = 61;                                                      /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg62]                  = "karsg62";                  PRM[prmkarsg62]                  = 62;                                                      /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg67]                  = "karsg67";                  PRM[prmkarsg67]                  = 67;                                                      /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsg68]                  = "karsg68";                  PRM[prmkarsg68]                  = 68;                                                      /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    PRM_code[prmkarsghd02]                = "karsghd02";                PRM[prmkarsghd02]                = 2;                                                       /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd03]                = "karsghd03";                PRM[prmkarsghd03]                = 3;                                                       /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd05]                = "karsghd05";                PRM[prmkarsghd05]                = 5;                                                       /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd08]                = "karsghd08";                PRM[prmkarsghd08]                = 8;                                                       /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd09]                = "karsghd09";                PRM[prmkarsghd09]                = 9;                                                       /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd11]                = "karsghd11";                PRM[prmkarsghd11]                = 11;                                                      /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd61]                = "karsghd61";                PRM[prmkarsghd61]                = 61;                                                      /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd62]                = "karsghd62";                PRM[prmkarsghd62]                = 62;                                                      /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd67]                = "karsghd67";                PRM[prmkarsghd67]                = 67;                                                      /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    PRM_code[prmkarsghd68]                = "karsghd68";                PRM[prmkarsghd68]                = 68;                                                      /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    PRM_code[prmpelgrensKOP02]            = "pelgrensKOP02";            PRM[prmpelgrensKOP02]            = 8;                                                       /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    PRM_code[prmstkp1]                    = "stkp1";                    PRM[prmstkp1]                    = 0;     PRM_type[prmstkp1]                    = TI_type; /* Start klokperiode nacht                                                                                                        */
    PRM_code[prmetkp1]                    = "etkp1";                    PRM[prmetkp1]                    = 0;     PRM_type[prmetkp1]                    = TI_type; /* Einde klokperiode nacht                                                                                                        */
    PRM_code[prmdckp1]                    = "dckp1";                    PRM[prmdckp1]                    = 10;                                                      /* Dagsoort klokperiode nacht                                                                                                     */
    PRM_code[prmstkp2]                    = "stkp2";                    PRM[prmstkp2]                    = 600;   PRM_type[prmstkp2]                    = TI_type; /* Start klokperiode dag                                                                                                          */
    PRM_code[prmetkp2]                    = "etkp2";                    PRM[prmetkp2]                    = 1900;  PRM_type[prmetkp2]                    = TI_type; /* Einde klokperiode dag                                                                                                          */
    PRM_code[prmdckp2]                    = "dckp2";                    PRM[prmdckp2]                    = 8;                                                       /* Dagsoort klokperiode dag                                                                                                       */
    PRM_code[prmstkp3]                    = "stkp3";                    PRM[prmstkp3]                    = 700;   PRM_type[prmstkp3]                    = TI_type; /* Start klokperiode ochtend                                                                                                      */
    PRM_code[prmetkp3]                    = "etkp3";                    PRM[prmetkp3]                    = 930;   PRM_type[prmetkp3]                    = TI_type; /* Einde klokperiode ochtend                                                                                                      */
    PRM_code[prmdckp3]                    = "dckp3";                    PRM[prmdckp3]                    = 8;                                                       /* Dagsoort klokperiode ochtend                                                                                                   */
    PRM_code[prmstkp4]                    = "stkp4";                    PRM[prmstkp4]                    = 1530;  PRM_type[prmstkp4]                    = TI_type; /* Start klokperiode avond                                                                                                        */
    PRM_code[prmetkp4]                    = "etkp4";                    PRM[prmetkp4]                    = 1830;  PRM_type[prmetkp4]                    = TI_type; /* Einde klokperiode avond                                                                                                        */
    PRM_code[prmdckp4]                    = "dckp4";                    PRM[prmdckp4]                    = 8;                                                       /* Dagsoort klokperiode avond                                                                                                     */
    PRM_code[prmstkp5]                    = "stkp5";                    PRM[prmstkp5]                    = 1830;  PRM_type[prmstkp5]                    = TI_type; /* Start klokperiode koopavond                                                                                                    */
    PRM_code[prmetkp5]                    = "etkp5";                    PRM[prmetkp5]                    = 2200;  PRM_type[prmetkp5]                    = TI_type; /* Einde klokperiode koopavond                                                                                                    */
    PRM_code[prmdckp5]                    = "dckp5";                    PRM[prmdckp5]                    = 4;                                                       /* Dagsoort klokperiode koopavond                                                                                                 */
    PRM_code[prmstkp6]                    = "stkp6";                    PRM[prmstkp6]                    = 1030;  PRM_type[prmstkp6]                    = TI_type; /* Start klokperiode weekend                                                                                                      */
    PRM_code[prmetkp6]                    = "etkp6";                    PRM[prmetkp6]                    = 1700;  PRM_type[prmetkp6]                    = TI_type; /* Einde klokperiode weekend                                                                                                      */
    PRM_code[prmdckp6]                    = "dckp6";                    PRM[prmdckp6]                    = 9;                                                       /* Dagsoort klokperiode weekend                                                                                                   */
    PRM_code[prmstkp7]                    = "stkp7";                    PRM[prmstkp7]                    = 0;     PRM_type[prmstkp7]                    = TI_type; /* Start klokperiode reserve                                                                                                      */
    PRM_code[prmetkp7]                    = "etkp7";                    PRM[prmetkp7]                    = 0;     PRM_type[prmetkp7]                    = TI_type; /* Einde klokperiode reserve                                                                                                      */
    PRM_code[prmdckp7]                    = "dckp7";                    PRM[prmdckp7]                    = 10;                                                      /* Dagsoort klokperiode reserve                                                                                                   */
    PRM_code[prmstkpoFietsprio1]          = "stkpoFietsprio1";          PRM[prmstkpoFietsprio1]          = 0;     PRM_type[prmstkpoFietsprio1]          = TI_type; /* Start klokperiode Fietsprio1                                                                                                   */
    PRM_code[prmetkpoFietsprio1]          = "etkpoFietsprio1";          PRM[prmetkpoFietsprio1]          = 2400;  PRM_type[prmetkpoFietsprio1]          = TI_type; /* Einde klokperiode Fietsprio1                                                                                                   */
    PRM_code[prmdckpoFietsprio1]          = "dckpoFietsprio1";          PRM[prmdckpoFietsprio1]          = 10;                                                      /* Dagsoort klokperiode Fietsprio1                                                                                                */
    PRM_code[prmstkpoFietsprio2]          = "stkpoFietsprio2";          PRM[prmstkpoFietsprio2]          = 0;     PRM_type[prmstkpoFietsprio2]          = TI_type; /* Start klokperiode Fietsprio2                                                                                                   */
    PRM_code[prmetkpoFietsprio2]          = "etkpoFietsprio2";          PRM[prmetkpoFietsprio2]          = 0;     PRM_type[prmetkpoFietsprio2]          = TI_type; /* Einde klokperiode Fietsprio2                                                                                                   */
    PRM_code[prmdckpoFietsprio2]          = "dckpoFietsprio2";          PRM[prmdckpoFietsprio2]          = 10;                                                      /* Dagsoort klokperiode Fietsprio2                                                                                                */
    PRM_code[prmstkpDaluren_werkdag]      = "stkpDaluren_werkdag";      PRM[prmstkpDaluren_werkdag]      = 1900;  PRM_type[prmstkpDaluren_werkdag]      = TI_type; /* Start klokperiode Daluren_werkdag                                                                                              */
    PRM_code[prmetkpDaluren_werkdag]      = "etkpDaluren_werkdag";      PRM[prmetkpDaluren_werkdag]      = 700;   PRM_type[prmetkpDaluren_werkdag]      = TI_type; /* Einde klokperiode Daluren_werkdag                                                                                              */
    PRM_code[prmdckpDaluren_werkdag]      = "dckpDaluren_werkdag";      PRM[prmdckpDaluren_werkdag]      = 8;                                                       /* Dagsoort klokperiode Daluren_werkdag                                                                                           */
    PRM_code[prmstkpDaluren_weekend]      = "stkpDaluren_weekend";      PRM[prmstkpDaluren_weekend]      = 0;     PRM_type[prmstkpDaluren_weekend]      = TI_type; /* Start klokperiode Daluren_weekend                                                                                              */
    PRM_code[prmetkpDaluren_weekend]      = "etkpDaluren_weekend";      PRM[prmetkpDaluren_weekend]      = 0;     PRM_type[prmetkpDaluren_weekend]      = TI_type; /* Einde klokperiode Daluren_weekend                                                                                              */
    PRM_code[prmdckpDaluren_weekend]      = "dckpDaluren_weekend";      PRM[prmdckpDaluren_weekend]      = 9;                                                       /* Dagsoort klokperiode Daluren_weekend                                                                                           */
    PRM_code[prmstkpOerdag_werkdag]       = "stkpOerdag_werkdag";       PRM[prmstkpOerdag_werkdag]       = 700;   PRM_type[prmstkpOerdag_werkdag]       = TI_type; /* Start klokperiode Oerdag_werkdag                                                                                               */
    PRM_code[prmetkpOerdag_werkdag]       = "etkpOerdag_werkdag";       PRM[prmetkpOerdag_werkdag]       = 1900;  PRM_type[prmetkpOerdag_werkdag]       = TI_type; /* Einde klokperiode Oerdag_werkdag                                                                                               */
    PRM_code[prmdckpOerdag_werkdag]       = "dckpOerdag_werkdag";       PRM[prmdckpOerdag_werkdag]       = 8;                                                       /* Dagsoort klokperiode Oerdag_werkdag                                                                                            */
    PRM_code[prmvg1_02]                   = "vg1_02";                   PRM[prmvg1_02]                   = 200;   PRM_type[prmvg1_02]                   = TE_type; /* Verlenggroentijd VG1 02                                                                                                        */
    PRM_code[prmvg1_03]                   = "vg1_03";                   PRM[prmvg1_03]                   = 150;   PRM_type[prmvg1_03]                   = TE_type; /* Verlenggroentijd VG1 03                                                                                                        */
    PRM_code[prmvg1_05]                   = "vg1_05";                   PRM[prmvg1_05]                   = 250;   PRM_type[prmvg1_05]                   = TE_type; /* Verlenggroentijd VG1 05                                                                                                        */
    PRM_code[prmvg1_08]                   = "vg1_08";                   PRM[prmvg1_08]                   = 200;   PRM_type[prmvg1_08]                   = TE_type; /* Verlenggroentijd VG1 08                                                                                                        */
    PRM_code[prmvg1_09]                   = "vg1_09";                   PRM[prmvg1_09]                   = 150;   PRM_type[prmvg1_09]                   = TE_type; /* Verlenggroentijd VG1 09                                                                                                        */
    PRM_code[prmvg1_11]                   = "vg1_11";                   PRM[prmvg1_11]                   = 150;   PRM_type[prmvg1_11]                   = TE_type; /* Verlenggroentijd VG1 11                                                                                                        */
    PRM_code[prmvg1_21]                   = "vg1_21";                   PRM[prmvg1_21]                   = 150;   PRM_type[prmvg1_21]                   = TE_type; /* Verlenggroentijd VG1 21                                                                                                        */
    PRM_code[prmvg1_22]                   = "vg1_22";                   PRM[prmvg1_22]                   = 150;   PRM_type[prmvg1_22]                   = TE_type; /* Verlenggroentijd VG1 22                                                                                                        */
    PRM_code[prmvg1_24]                   = "vg1_24";                   PRM[prmvg1_24]                   = 150;   PRM_type[prmvg1_24]                   = TE_type; /* Verlenggroentijd VG1 24                                                                                                        */
    PRM_code[prmvg1_26]                   = "vg1_26";                   PRM[prmvg1_26]                   = 150;   PRM_type[prmvg1_26]                   = TE_type; /* Verlenggroentijd VG1 26                                                                                                        */
    PRM_code[prmvg1_28]                   = "vg1_28";                   PRM[prmvg1_28]                   = 150;   PRM_type[prmvg1_28]                   = TE_type; /* Verlenggroentijd VG1 28                                                                                                        */
    PRM_code[prmvg1_61]                   = "vg1_61";                   PRM[prmvg1_61]                   = 50;    PRM_type[prmvg1_61]                   = TE_type; /* Verlenggroentijd VG1 61                                                                                                        */
    PRM_code[prmvg1_62]                   = "vg1_62";                   PRM[prmvg1_62]                   = 50;    PRM_type[prmvg1_62]                   = TE_type; /* Verlenggroentijd VG1 62                                                                                                        */
    PRM_code[prmvg1_67]                   = "vg1_67";                   PRM[prmvg1_67]                   = 50;    PRM_type[prmvg1_67]                   = TE_type; /* Verlenggroentijd VG1 67                                                                                                        */
    PRM_code[prmvg1_68]                   = "vg1_68";                   PRM[prmvg1_68]                   = 50;    PRM_type[prmvg1_68]                   = TE_type; /* Verlenggroentijd VG1 68                                                                                                        */
    PRM_code[prmvg1_81]                   = "vg1_81";                   PRM[prmvg1_81]                   = 150;   PRM_type[prmvg1_81]                   = TE_type; /* Verlenggroentijd VG1 81                                                                                                        */
    PRM_code[prmvg1_82]                   = "vg1_82";                   PRM[prmvg1_82]                   = 150;   PRM_type[prmvg1_82]                   = TE_type; /* Verlenggroentijd VG1 82                                                                                                        */
    PRM_code[prmvg1_84]                   = "vg1_84";                   PRM[prmvg1_84]                   = 150;   PRM_type[prmvg1_84]                   = TE_type; /* Verlenggroentijd VG1 84                                                                                                        */
    PRM_code[prmvg2_02]                   = "vg2_02";                   PRM[prmvg2_02]                   = 200;   PRM_type[prmvg2_02]                   = TE_type; /* Verlenggroentijd VG2 02                                                                                                        */
    PRM_code[prmvg2_03]                   = "vg2_03";                   PRM[prmvg2_03]                   = 150;   PRM_type[prmvg2_03]                   = TE_type; /* Verlenggroentijd VG2 03                                                                                                        */
    PRM_code[prmvg2_05]                   = "vg2_05";                   PRM[prmvg2_05]                   = 250;   PRM_type[prmvg2_05]                   = TE_type; /* Verlenggroentijd VG2 05                                                                                                        */
    PRM_code[prmvg2_08]                   = "vg2_08";                   PRM[prmvg2_08]                   = 200;   PRM_type[prmvg2_08]                   = TE_type; /* Verlenggroentijd VG2 08                                                                                                        */
    PRM_code[prmvg2_09]                   = "vg2_09";                   PRM[prmvg2_09]                   = 150;   PRM_type[prmvg2_09]                   = TE_type; /* Verlenggroentijd VG2 09                                                                                                        */
    PRM_code[prmvg2_11]                   = "vg2_11";                   PRM[prmvg2_11]                   = 150;   PRM_type[prmvg2_11]                   = TE_type; /* Verlenggroentijd VG2 11                                                                                                        */
    PRM_code[prmvg2_21]                   = "vg2_21";                   PRM[prmvg2_21]                   = 150;   PRM_type[prmvg2_21]                   = TE_type; /* Verlenggroentijd VG2 21                                                                                                        */
    PRM_code[prmvg2_22]                   = "vg2_22";                   PRM[prmvg2_22]                   = 150;   PRM_type[prmvg2_22]                   = TE_type; /* Verlenggroentijd VG2 22                                                                                                        */
    PRM_code[prmvg2_24]                   = "vg2_24";                   PRM[prmvg2_24]                   = 150;   PRM_type[prmvg2_24]                   = TE_type; /* Verlenggroentijd VG2 24                                                                                                        */
    PRM_code[prmvg2_26]                   = "vg2_26";                   PRM[prmvg2_26]                   = 150;   PRM_type[prmvg2_26]                   = TE_type; /* Verlenggroentijd VG2 26                                                                                                        */
    PRM_code[prmvg2_28]                   = "vg2_28";                   PRM[prmvg2_28]                   = 150;   PRM_type[prmvg2_28]                   = TE_type; /* Verlenggroentijd VG2 28                                                                                                        */
    PRM_code[prmvg2_61]                   = "vg2_61";                   PRM[prmvg2_61]                   = 50;    PRM_type[prmvg2_61]                   = TE_type; /* Verlenggroentijd VG2 61                                                                                                        */
    PRM_code[prmvg2_62]                   = "vg2_62";                   PRM[prmvg2_62]                   = 50;    PRM_type[prmvg2_62]                   = TE_type; /* Verlenggroentijd VG2 62                                                                                                        */
    PRM_code[prmvg2_67]                   = "vg2_67";                   PRM[prmvg2_67]                   = 50;    PRM_type[prmvg2_67]                   = TE_type; /* Verlenggroentijd VG2 67                                                                                                        */
    PRM_code[prmvg2_68]                   = "vg2_68";                   PRM[prmvg2_68]                   = 50;    PRM_type[prmvg2_68]                   = TE_type; /* Verlenggroentijd VG2 68                                                                                                        */
    PRM_code[prmvg2_81]                   = "vg2_81";                   PRM[prmvg2_81]                   = 150;   PRM_type[prmvg2_81]                   = TE_type; /* Verlenggroentijd VG2 81                                                                                                        */
    PRM_code[prmvg2_82]                   = "vg2_82";                   PRM[prmvg2_82]                   = 150;   PRM_type[prmvg2_82]                   = TE_type; /* Verlenggroentijd VG2 82                                                                                                        */
    PRM_code[prmvg2_84]                   = "vg2_84";                   PRM[prmvg2_84]                   = 150;   PRM_type[prmvg2_84]                   = TE_type; /* Verlenggroentijd VG2 84                                                                                                        */
    PRM_code[prmvg3_02]                   = "vg3_02";                   PRM[prmvg3_02]                   = 200;   PRM_type[prmvg3_02]                   = TE_type; /* Verlenggroentijd VG3 02                                                                                                        */
    PRM_code[prmvg3_03]                   = "vg3_03";                   PRM[prmvg3_03]                   = 150;   PRM_type[prmvg3_03]                   = TE_type; /* Verlenggroentijd VG3 03                                                                                                        */
    PRM_code[prmvg3_05]                   = "vg3_05";                   PRM[prmvg3_05]                   = 250;   PRM_type[prmvg3_05]                   = TE_type; /* Verlenggroentijd VG3 05                                                                                                        */
    PRM_code[prmvg3_08]                   = "vg3_08";                   PRM[prmvg3_08]                   = 200;   PRM_type[prmvg3_08]                   = TE_type; /* Verlenggroentijd VG3 08                                                                                                        */
    PRM_code[prmvg3_09]                   = "vg3_09";                   PRM[prmvg3_09]                   = 150;   PRM_type[prmvg3_09]                   = TE_type; /* Verlenggroentijd VG3 09                                                                                                        */
    PRM_code[prmvg3_11]                   = "vg3_11";                   PRM[prmvg3_11]                   = 150;   PRM_type[prmvg3_11]                   = TE_type; /* Verlenggroentijd VG3 11                                                                                                        */
    PRM_code[prmvg3_21]                   = "vg3_21";                   PRM[prmvg3_21]                   = 150;   PRM_type[prmvg3_21]                   = TE_type; /* Verlenggroentijd VG3 21                                                                                                        */
    PRM_code[prmvg3_22]                   = "vg3_22";                   PRM[prmvg3_22]                   = 150;   PRM_type[prmvg3_22]                   = TE_type; /* Verlenggroentijd VG3 22                                                                                                        */
    PRM_code[prmvg3_24]                   = "vg3_24";                   PRM[prmvg3_24]                   = 150;   PRM_type[prmvg3_24]                   = TE_type; /* Verlenggroentijd VG3 24                                                                                                        */
    PRM_code[prmvg3_26]                   = "vg3_26";                   PRM[prmvg3_26]                   = 150;   PRM_type[prmvg3_26]                   = TE_type; /* Verlenggroentijd VG3 26                                                                                                        */
    PRM_code[prmvg3_28]                   = "vg3_28";                   PRM[prmvg3_28]                   = 150;   PRM_type[prmvg3_28]                   = TE_type; /* Verlenggroentijd VG3 28                                                                                                        */
    PRM_code[prmvg3_61]                   = "vg3_61";                   PRM[prmvg3_61]                   = 50;    PRM_type[prmvg3_61]                   = TE_type; /* Verlenggroentijd VG3 61                                                                                                        */
    PRM_code[prmvg3_62]                   = "vg3_62";                   PRM[prmvg3_62]                   = 50;    PRM_type[prmvg3_62]                   = TE_type; /* Verlenggroentijd VG3 62                                                                                                        */
    PRM_code[prmvg3_67]                   = "vg3_67";                   PRM[prmvg3_67]                   = 50;    PRM_type[prmvg3_67]                   = TE_type; /* Verlenggroentijd VG3 67                                                                                                        */
    PRM_code[prmvg3_68]                   = "vg3_68";                   PRM[prmvg3_68]                   = 50;    PRM_type[prmvg3_68]                   = TE_type; /* Verlenggroentijd VG3 68                                                                                                        */
    PRM_code[prmvg3_81]                   = "vg3_81";                   PRM[prmvg3_81]                   = 150;   PRM_type[prmvg3_81]                   = TE_type; /* Verlenggroentijd VG3 81                                                                                                        */
    PRM_code[prmvg3_82]                   = "vg3_82";                   PRM[prmvg3_82]                   = 150;   PRM_type[prmvg3_82]                   = TE_type; /* Verlenggroentijd VG3 82                                                                                                        */
    PRM_code[prmvg3_84]                   = "vg3_84";                   PRM[prmvg3_84]                   = 150;   PRM_type[prmvg3_84]                   = TE_type; /* Verlenggroentijd VG3 84                                                                                                        */
    PRM_code[prmvg4_02]                   = "vg4_02";                   PRM[prmvg4_02]                   = 300;   PRM_type[prmvg4_02]                   = TE_type; /* Verlenggroentijd VG4 02                                                                                                        */
    PRM_code[prmvg4_03]                   = "vg4_03";                   PRM[prmvg4_03]                   = 150;   PRM_type[prmvg4_03]                   = TE_type; /* Verlenggroentijd VG4 03                                                                                                        */
    PRM_code[prmvg4_05]                   = "vg4_05";                   PRM[prmvg4_05]                   = 300;   PRM_type[prmvg4_05]                   = TE_type; /* Verlenggroentijd VG4 05                                                                                                        */
    PRM_code[prmvg4_08]                   = "vg4_08";                   PRM[prmvg4_08]                   = 250;   PRM_type[prmvg4_08]                   = TE_type; /* Verlenggroentijd VG4 08                                                                                                        */
    PRM_code[prmvg4_09]                   = "vg4_09";                   PRM[prmvg4_09]                   = 200;   PRM_type[prmvg4_09]                   = TE_type; /* Verlenggroentijd VG4 09                                                                                                        */
    PRM_code[prmvg4_11]                   = "vg4_11";                   PRM[prmvg4_11]                   = 250;   PRM_type[prmvg4_11]                   = TE_type; /* Verlenggroentijd VG4 11                                                                                                        */
    PRM_code[prmvg4_21]                   = "vg4_21";                   PRM[prmvg4_21]                   = 150;   PRM_type[prmvg4_21]                   = TE_type; /* Verlenggroentijd VG4 21                                                                                                        */
    PRM_code[prmvg4_22]                   = "vg4_22";                   PRM[prmvg4_22]                   = 150;   PRM_type[prmvg4_22]                   = TE_type; /* Verlenggroentijd VG4 22                                                                                                        */
    PRM_code[prmvg4_24]                   = "vg4_24";                   PRM[prmvg4_24]                   = 150;   PRM_type[prmvg4_24]                   = TE_type; /* Verlenggroentijd VG4 24                                                                                                        */
    PRM_code[prmvg4_26]                   = "vg4_26";                   PRM[prmvg4_26]                   = 150;   PRM_type[prmvg4_26]                   = TE_type; /* Verlenggroentijd VG4 26                                                                                                        */
    PRM_code[prmvg4_28]                   = "vg4_28";                   PRM[prmvg4_28]                   = 150;   PRM_type[prmvg4_28]                   = TE_type; /* Verlenggroentijd VG4 28                                                                                                        */
    PRM_code[prmvg4_61]                   = "vg4_61";                   PRM[prmvg4_61]                   = 50;    PRM_type[prmvg4_61]                   = TE_type; /* Verlenggroentijd VG4 61                                                                                                        */
    PRM_code[prmvg4_62]                   = "vg4_62";                   PRM[prmvg4_62]                   = 50;    PRM_type[prmvg4_62]                   = TE_type; /* Verlenggroentijd VG4 62                                                                                                        */
    PRM_code[prmvg4_67]                   = "vg4_67";                   PRM[prmvg4_67]                   = 50;    PRM_type[prmvg4_67]                   = TE_type; /* Verlenggroentijd VG4 67                                                                                                        */
    PRM_code[prmvg4_68]                   = "vg4_68";                   PRM[prmvg4_68]                   = 50;    PRM_type[prmvg4_68]                   = TE_type; /* Verlenggroentijd VG4 68                                                                                                        */
    PRM_code[prmvg4_81]                   = "vg4_81";                   PRM[prmvg4_81]                   = 150;   PRM_type[prmvg4_81]                   = TE_type; /* Verlenggroentijd VG4 81                                                                                                        */
    PRM_code[prmvg4_82]                   = "vg4_82";                   PRM[prmvg4_82]                   = 150;   PRM_type[prmvg4_82]                   = TE_type; /* Verlenggroentijd VG4 82                                                                                                        */
    PRM_code[prmvg4_84]                   = "vg4_84";                   PRM[prmvg4_84]                   = 150;   PRM_type[prmvg4_84]                   = TE_type; /* Verlenggroentijd VG4 84                                                                                                        */
    PRM_code[prmvg5_02]                   = "vg5_02";                   PRM[prmvg5_02]                   = 300;   PRM_type[prmvg5_02]                   = TE_type; /* Verlenggroentijd VG5 02                                                                                                        */
    PRM_code[prmvg5_03]                   = "vg5_03";                   PRM[prmvg5_03]                   = 150;   PRM_type[prmvg5_03]                   = TE_type; /* Verlenggroentijd VG5 03                                                                                                        */
    PRM_code[prmvg5_05]                   = "vg5_05";                   PRM[prmvg5_05]                   = 300;   PRM_type[prmvg5_05]                   = TE_type; /* Verlenggroentijd VG5 05                                                                                                        */
    PRM_code[prmvg5_08]                   = "vg5_08";                   PRM[prmvg5_08]                   = 250;   PRM_type[prmvg5_08]                   = TE_type; /* Verlenggroentijd VG5 08                                                                                                        */
    PRM_code[prmvg5_09]                   = "vg5_09";                   PRM[prmvg5_09]                   = 200;   PRM_type[prmvg5_09]                   = TE_type; /* Verlenggroentijd VG5 09                                                                                                        */
    PRM_code[prmvg5_11]                   = "vg5_11";                   PRM[prmvg5_11]                   = 250;   PRM_type[prmvg5_11]                   = TE_type; /* Verlenggroentijd VG5 11                                                                                                        */
    PRM_code[prmvg5_21]                   = "vg5_21";                   PRM[prmvg5_21]                   = 150;   PRM_type[prmvg5_21]                   = TE_type; /* Verlenggroentijd VG5 21                                                                                                        */
    PRM_code[prmvg5_22]                   = "vg5_22";                   PRM[prmvg5_22]                   = 150;   PRM_type[prmvg5_22]                   = TE_type; /* Verlenggroentijd VG5 22                                                                                                        */
    PRM_code[prmvg5_24]                   = "vg5_24";                   PRM[prmvg5_24]                   = 150;   PRM_type[prmvg5_24]                   = TE_type; /* Verlenggroentijd VG5 24                                                                                                        */
    PRM_code[prmvg5_26]                   = "vg5_26";                   PRM[prmvg5_26]                   = 150;   PRM_type[prmvg5_26]                   = TE_type; /* Verlenggroentijd VG5 26                                                                                                        */
    PRM_code[prmvg5_28]                   = "vg5_28";                   PRM[prmvg5_28]                   = 150;   PRM_type[prmvg5_28]                   = TE_type; /* Verlenggroentijd VG5 28                                                                                                        */
    PRM_code[prmvg5_61]                   = "vg5_61";                   PRM[prmvg5_61]                   = 50;    PRM_type[prmvg5_61]                   = TE_type; /* Verlenggroentijd VG5 61                                                                                                        */
    PRM_code[prmvg5_62]                   = "vg5_62";                   PRM[prmvg5_62]                   = 50;    PRM_type[prmvg5_62]                   = TE_type; /* Verlenggroentijd VG5 62                                                                                                        */
    PRM_code[prmvg5_67]                   = "vg5_67";                   PRM[prmvg5_67]                   = 50;    PRM_type[prmvg5_67]                   = TE_type; /* Verlenggroentijd VG5 67                                                                                                        */
    PRM_code[prmvg5_68]                   = "vg5_68";                   PRM[prmvg5_68]                   = 50;    PRM_type[prmvg5_68]                   = TE_type; /* Verlenggroentijd VG5 68                                                                                                        */
    PRM_code[prmvg5_81]                   = "vg5_81";                   PRM[prmvg5_81]                   = 150;   PRM_type[prmvg5_81]                   = TE_type; /* Verlenggroentijd VG5 81                                                                                                        */
    PRM_code[prmvg5_82]                   = "vg5_82";                   PRM[prmvg5_82]                   = 150;   PRM_type[prmvg5_82]                   = TE_type; /* Verlenggroentijd VG5 82                                                                                                        */
    PRM_code[prmvg5_84]                   = "vg5_84";                   PRM[prmvg5_84]                   = 150;   PRM_type[prmvg5_84]                   = TE_type; /* Verlenggroentijd VG5 84                                                                                                        */
    PRM_code[prmvg6_02]                   = "vg6_02";                   PRM[prmvg6_02]                   = 300;   PRM_type[prmvg6_02]                   = TE_type; /* Verlenggroentijd VG6 02                                                                                                        */
    PRM_code[prmvg6_03]                   = "vg6_03";                   PRM[prmvg6_03]                   = 150;   PRM_type[prmvg6_03]                   = TE_type; /* Verlenggroentijd VG6 03                                                                                                        */
    PRM_code[prmvg6_05]                   = "vg6_05";                   PRM[prmvg6_05]                   = 300;   PRM_type[prmvg6_05]                   = TE_type; /* Verlenggroentijd VG6 05                                                                                                        */
    PRM_code[prmvg6_08]                   = "vg6_08";                   PRM[prmvg6_08]                   = 250;   PRM_type[prmvg6_08]                   = TE_type; /* Verlenggroentijd VG6 08                                                                                                        */
    PRM_code[prmvg6_09]                   = "vg6_09";                   PRM[prmvg6_09]                   = 200;   PRM_type[prmvg6_09]                   = TE_type; /* Verlenggroentijd VG6 09                                                                                                        */
    PRM_code[prmvg6_11]                   = "vg6_11";                   PRM[prmvg6_11]                   = 250;   PRM_type[prmvg6_11]                   = TE_type; /* Verlenggroentijd VG6 11                                                                                                        */
    PRM_code[prmvg6_21]                   = "vg6_21";                   PRM[prmvg6_21]                   = 150;   PRM_type[prmvg6_21]                   = TE_type; /* Verlenggroentijd VG6 21                                                                                                        */
    PRM_code[prmvg6_22]                   = "vg6_22";                   PRM[prmvg6_22]                   = 150;   PRM_type[prmvg6_22]                   = TE_type; /* Verlenggroentijd VG6 22                                                                                                        */
    PRM_code[prmvg6_24]                   = "vg6_24";                   PRM[prmvg6_24]                   = 150;   PRM_type[prmvg6_24]                   = TE_type; /* Verlenggroentijd VG6 24                                                                                                        */
    PRM_code[prmvg6_26]                   = "vg6_26";                   PRM[prmvg6_26]                   = 150;   PRM_type[prmvg6_26]                   = TE_type; /* Verlenggroentijd VG6 26                                                                                                        */
    PRM_code[prmvg6_28]                   = "vg6_28";                   PRM[prmvg6_28]                   = 150;   PRM_type[prmvg6_28]                   = TE_type; /* Verlenggroentijd VG6 28                                                                                                        */
    PRM_code[prmvg6_61]                   = "vg6_61";                   PRM[prmvg6_61]                   = 50;    PRM_type[prmvg6_61]                   = TE_type; /* Verlenggroentijd VG6 61                                                                                                        */
    PRM_code[prmvg6_62]                   = "vg6_62";                   PRM[prmvg6_62]                   = 50;    PRM_type[prmvg6_62]                   = TE_type; /* Verlenggroentijd VG6 62                                                                                                        */
    PRM_code[prmvg6_67]                   = "vg6_67";                   PRM[prmvg6_67]                   = 50;    PRM_type[prmvg6_67]                   = TE_type; /* Verlenggroentijd VG6 67                                                                                                        */
    PRM_code[prmvg6_68]                   = "vg6_68";                   PRM[prmvg6_68]                   = 50;    PRM_type[prmvg6_68]                   = TE_type; /* Verlenggroentijd VG6 68                                                                                                        */
    PRM_code[prmvg6_81]                   = "vg6_81";                   PRM[prmvg6_81]                   = 150;   PRM_type[prmvg6_81]                   = TE_type; /* Verlenggroentijd VG6 81                                                                                                        */
    PRM_code[prmvg6_82]                   = "vg6_82";                   PRM[prmvg6_82]                   = 150;   PRM_type[prmvg6_82]                   = TE_type; /* Verlenggroentijd VG6 82                                                                                                        */
    PRM_code[prmvg6_84]                   = "vg6_84";                   PRM[prmvg6_84]                   = 150;   PRM_type[prmvg6_84]                   = TE_type; /* Verlenggroentijd VG6 84                                                                                                        */
    PRM_code[prmvg7_02]                   = "vg7_02";                   PRM[prmvg7_02]                   = 300;   PRM_type[prmvg7_02]                   = TE_type; /* Verlenggroentijd VG7 02                                                                                                        */
    PRM_code[prmvg7_03]                   = "vg7_03";                   PRM[prmvg7_03]                   = 150;   PRM_type[prmvg7_03]                   = TE_type; /* Verlenggroentijd VG7 03                                                                                                        */
    PRM_code[prmvg7_05]                   = "vg7_05";                   PRM[prmvg7_05]                   = 300;   PRM_type[prmvg7_05]                   = TE_type; /* Verlenggroentijd VG7 05                                                                                                        */
    PRM_code[prmvg7_08]                   = "vg7_08";                   PRM[prmvg7_08]                   = 250;   PRM_type[prmvg7_08]                   = TE_type; /* Verlenggroentijd VG7 08                                                                                                        */
    PRM_code[prmvg7_09]                   = "vg7_09";                   PRM[prmvg7_09]                   = 200;   PRM_type[prmvg7_09]                   = TE_type; /* Verlenggroentijd VG7 09                                                                                                        */
    PRM_code[prmvg7_11]                   = "vg7_11";                   PRM[prmvg7_11]                   = 250;   PRM_type[prmvg7_11]                   = TE_type; /* Verlenggroentijd VG7 11                                                                                                        */
    PRM_code[prmvg7_21]                   = "vg7_21";                   PRM[prmvg7_21]                   = 150;   PRM_type[prmvg7_21]                   = TE_type; /* Verlenggroentijd VG7 21                                                                                                        */
    PRM_code[prmvg7_22]                   = "vg7_22";                   PRM[prmvg7_22]                   = 150;   PRM_type[prmvg7_22]                   = TE_type; /* Verlenggroentijd VG7 22                                                                                                        */
    PRM_code[prmvg7_24]                   = "vg7_24";                   PRM[prmvg7_24]                   = 150;   PRM_type[prmvg7_24]                   = TE_type; /* Verlenggroentijd VG7 24                                                                                                        */
    PRM_code[prmvg7_26]                   = "vg7_26";                   PRM[prmvg7_26]                   = 150;   PRM_type[prmvg7_26]                   = TE_type; /* Verlenggroentijd VG7 26                                                                                                        */
    PRM_code[prmvg7_28]                   = "vg7_28";                   PRM[prmvg7_28]                   = 150;   PRM_type[prmvg7_28]                   = TE_type; /* Verlenggroentijd VG7 28                                                                                                        */
    PRM_code[prmvg7_61]                   = "vg7_61";                   PRM[prmvg7_61]                   = 50;    PRM_type[prmvg7_61]                   = TE_type; /* Verlenggroentijd VG7 61                                                                                                        */
    PRM_code[prmvg7_62]                   = "vg7_62";                   PRM[prmvg7_62]                   = 50;    PRM_type[prmvg7_62]                   = TE_type; /* Verlenggroentijd VG7 62                                                                                                        */
    PRM_code[prmvg7_67]                   = "vg7_67";                   PRM[prmvg7_67]                   = 50;    PRM_type[prmvg7_67]                   = TE_type; /* Verlenggroentijd VG7 67                                                                                                        */
    PRM_code[prmvg7_68]                   = "vg7_68";                   PRM[prmvg7_68]                   = 50;    PRM_type[prmvg7_68]                   = TE_type; /* Verlenggroentijd VG7 68                                                                                                        */
    PRM_code[prmvg7_81]                   = "vg7_81";                   PRM[prmvg7_81]                   = 150;   PRM_type[prmvg7_81]                   = TE_type; /* Verlenggroentijd VG7 81                                                                                                        */
    PRM_code[prmvg7_82]                   = "vg7_82";                   PRM[prmvg7_82]                   = 150;   PRM_type[prmvg7_82]                   = TE_type; /* Verlenggroentijd VG7 82                                                                                                        */
    PRM_code[prmvg7_84]                   = "vg7_84";                   PRM[prmvg7_84]                   = 150;   PRM_type[prmvg7_84]                   = TE_type; /* Verlenggroentijd VG7 84                                                                                                        */
    PRM_code[prmptp123456iks01]           = "ptp123456iks01";           PRM[prmptp123456iks01]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks02]           = "ptp123456iks02";           PRM[prmptp123456iks02]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks03]           = "ptp123456iks03";           PRM[prmptp123456iks03]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks04]           = "ptp123456iks04";           PRM[prmptp123456iks04]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks05]           = "ptp123456iks05";           PRM[prmptp123456iks05]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks06]           = "ptp123456iks06";           PRM[prmptp123456iks06]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks07]           = "ptp123456iks07";           PRM[prmptp123456iks07]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks08]           = "ptp123456iks08";           PRM[prmptp123456iks08]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks09]           = "ptp123456iks09";           PRM[prmptp123456iks09]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks10]           = "ptp123456iks10";           PRM[prmptp123456iks10]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks11]           = "ptp123456iks11";           PRM[prmptp123456iks11]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks12]           = "ptp123456iks12";           PRM[prmptp123456iks12]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks13]           = "ptp123456iks13";           PRM[prmptp123456iks13]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks14]           = "ptp123456iks14";           PRM[prmptp123456iks14]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks15]           = "ptp123456iks15";           PRM[prmptp123456iks15]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456iks16]           = "ptp123456iks16";           PRM[prmptp123456iks16]           = 2;                                                       /* Instelling inkomende signalen van ptp123456                                                                                    */
    PRM_code[prmptp123456uks01]           = "ptp123456uks01";           PRM[prmptp123456uks01]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks02]           = "ptp123456uks02";           PRM[prmptp123456uks02]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks03]           = "ptp123456uks03";           PRM[prmptp123456uks03]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks04]           = "ptp123456uks04";           PRM[prmptp123456uks04]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks05]           = "ptp123456uks05";           PRM[prmptp123456uks05]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks06]           = "ptp123456uks06";           PRM[prmptp123456uks06]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks07]           = "ptp123456uks07";           PRM[prmptp123456uks07]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks08]           = "ptp123456uks08";           PRM[prmptp123456uks08]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks09]           = "ptp123456uks09";           PRM[prmptp123456uks09]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks10]           = "ptp123456uks10";           PRM[prmptp123456uks10]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks11]           = "ptp123456uks11";           PRM[prmptp123456uks11]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks12]           = "ptp123456uks12";           PRM[prmptp123456uks12]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks13]           = "ptp123456uks13";           PRM[prmptp123456uks13]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks14]           = "ptp123456uks14";           PRM[prmptp123456uks14]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks15]           = "ptp123456uks15";           PRM[prmptp123456uks15]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp123456uks16]           = "ptp123456uks16";           PRM[prmptp123456uks16]           = 2;                                                       /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    PRM_code[prmptp_ptp123456oke]         = "ptp_ptp123456oke";         PRM[prmptp_ptp123456oke]         = 0;                                                       /* PTP oke ptp123456                                                                                                              */
    PRM_code[prmptp_ptp123456err]         = "ptp_ptp123456err";         PRM[prmptp_ptp123456err]         = 0;                                                       /* PTP error ptp123456                                                                                                            */
    PRM_code[prmptp_ptp123456err0]        = "ptp_ptp123456err0";        PRM[prmptp_ptp123456err0]        = 0;                                                       /* PTP error 0 ptp123456                                                                                                          */
    PRM_code[prmptp_ptp123456err1]        = "ptp_ptp123456err1";        PRM[prmptp_ptp123456err1]        = 0;                                                       /* PTP error 1 ptp123456                                                                                                          */
    PRM_code[prmptp_ptp123456err2]        = "ptp_ptp123456err2";        PRM[prmptp_ptp123456err2]        = 0;                                                       /* PTP error 2 ptp123456                                                                                                          */
    PRM_code[prmsrcptp123456]             = "srcptp123456";             PRM[prmsrcptp123456]             = 11;                                                      /* Nummer van source PTP ptp123456                                                                                                */
    PRM_code[prmdestptp123456]            = "destptp123456";            PRM[prmdestptp123456]            = 12;                                                      /* Nummer van destination PTP ptp123456                                                                                           */
    PRM_code[prmtmsgwptp123456]           = "tmsgwptp123456";           PRM[prmtmsgwptp123456]           = 200;                                                     /* Wait timeout PTP ptp123456                                                                                                     */
    PRM_code[prmtmsgsptp123456]           = "tmsgsptp123456";           PRM[prmtmsgsptp123456]           = 10;                                                      /* Send timeout PTP ptp123456                                                                                                     */
    PRM_code[prmtmsgaptp123456]           = "tmsgaptp123456";           PRM[prmtmsgaptp123456]           = 10;                                                      /* Alive timeout PTP ptp123456                                                                                                    */
    PRM_code[prmcmsgptp123456]            = "cmsgptp123456";            PRM[prmcmsgptp123456]            = 3;                                                       /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    PRM_code[prmmkrgd24_3]                = "mkrgd24_3";                PRM[prmmkrgd24_3]                = 3;                                                       /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    PRM_code[prmrgv]                      = "rgv";                      PRM[prmrgv]                      = 2;                                                       /* Type RoBuGrover                                                                                                                */
    PRM_code[prmmin_tcyclus]              = "min_tcyclus";              PRM[prmmin_tcyclus]              = 900;   PRM_type[prmmin_tcyclus]              = TE_type; /* Minimale cyclustijd                                                                                                            */
    PRM_code[prmmax_tcyclus]              = "max_tcyclus";              PRM[prmmax_tcyclus]              = 1500;  PRM_type[prmmax_tcyclus]              = TE_type; /* Maximale cyclustijd                                                                                                            */
    PRM_code[prmtvg_omhoog]               = "tvg_omhoog";               PRM[prmtvg_omhoog]               = 50;    PRM_type[prmtvg_omhoog]               = TE_type; /* Hoeveelheid ophogen TVG                                                                                                        */
    PRM_code[prmtvg_omlaag]               = "tvg_omlaag";               PRM[prmtvg_omlaag]               = 20;    PRM_type[prmtvg_omlaag]               = TE_type; /* Hoeveelheid verlagen TVG                                                                                                       */
    PRM_code[prmtvg_verschil]             = "tvg_verschil";             PRM[prmtvg_verschil]             = 50;    PRM_type[prmtvg_verschil]             = TE_type; /* Parameter verschil                                                                                                             */
    PRM_code[prmtvg_npr_omlaag]           = "tvg_npr_omlaag";           PRM[prmtvg_npr_omlaag]           = 50;    PRM_type[prmtvg_npr_omlaag]           = TE_type; /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    PRM_code[prmmintvg_02]                = "mintvg_02";                PRM[prmmintvg_02]                = 100;   PRM_type[prmmintvg_02]                = TE_type; /* Minimale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmaxtvg_02]                = "maxtvg_02";                PRM[prmmaxtvg_02]                = 500;   PRM_type[prmmaxtvg_02]                = TE_type; /* Maximale verlenggroentijd fase 02                                                                                              */
    PRM_code[prmmintvg_03]                = "mintvg_03";                PRM[prmmintvg_03]                = 100;   PRM_type[prmmintvg_03]                = TE_type; /* Minimale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmaxtvg_03]                = "maxtvg_03";                PRM[prmmaxtvg_03]                = 500;   PRM_type[prmmaxtvg_03]                = TE_type; /* Maximale verlenggroentijd fase 03                                                                                              */
    PRM_code[prmmintvg_05]                = "mintvg_05";                PRM[prmmintvg_05]                = 100;   PRM_type[prmmintvg_05]                = TE_type; /* Minimale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmaxtvg_05]                = "maxtvg_05";                PRM[prmmaxtvg_05]                = 500;   PRM_type[prmmaxtvg_05]                = TE_type; /* Maximale verlenggroentijd fase 05                                                                                              */
    PRM_code[prmmintvg_08]                = "mintvg_08";                PRM[prmmintvg_08]                = 100;   PRM_type[prmmintvg_08]                = TE_type; /* Minimale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmaxtvg_08]                = "maxtvg_08";                PRM[prmmaxtvg_08]                = 500;   PRM_type[prmmaxtvg_08]                = TE_type; /* Maximale verlenggroentijd fase 08                                                                                              */
    PRM_code[prmmintvg_11]                = "mintvg_11";                PRM[prmmintvg_11]                = 100;   PRM_type[prmmintvg_11]                = TE_type; /* Minimale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmaxtvg_11]                = "maxtvg_11";                PRM[prmmaxtvg_11]                = 500;   PRM_type[prmmaxtvg_11]                = TE_type; /* Maximale verlenggroentijd fase 11                                                                                              */
    PRM_code[prmmintvg_22]                = "mintvg_22";                PRM[prmmintvg_22]                = 40;    PRM_type[prmmintvg_22]                = TE_type; /* Minimale verlenggroentijd fase 22                                                                                              */
    PRM_code[prmmaxtvg_22]                = "maxtvg_22";                PRM[prmmaxtvg_22]                = 150;   PRM_type[prmmaxtvg_22]                = TE_type; /* Maximale verlenggroentijd fase 22                                                                                              */
    PRM_code[prmmintvg_28]                = "mintvg_28";                PRM[prmmintvg_28]                = 40;    PRM_type[prmmintvg_28]                = TE_type; /* Minimale verlenggroentijd fase 28                                                                                              */
    PRM_code[prmmaxtvg_28]                = "maxtvg_28";                PRM[prmmaxtvg_28]                = 150;   PRM_type[prmmaxtvg_28]                = TE_type; /* Maximale verlenggroentijd fase 28                                                                                              */
    PRM_code[prmsiexgrperc31]             = "siexgrperc31";             PRM[prmsiexgrperc31]             = 50;                                                      /* Extra groen percentage tov. TFG voor senioreningreep op fase 31                                                                */
    PRM_code[prmsiexgrperc32]             = "siexgrperc32";             PRM[prmsiexgrperc32]             = 50;                                                      /* Extra groen percentage tov. TFG voor senioreningreep op fase 32                                                                */
    PRM_code[prmsiexgrperc33]             = "siexgrperc33";             PRM[prmsiexgrperc33]             = 50;                                                      /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    PRM_code[prmsiexgrperc34]             = "siexgrperc34";             PRM[prmsiexgrperc34]             = 50;                                                      /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    PRM_code[prmmaxtvgvlog]               = "maxtvgvlog";               PRM[prmmaxtvgvlog]               = 5;     PRM_type[prmmaxtvgvlog]               = CT_type; /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    PRM_code[prmmaxtfbvlog]               = "maxtfbvlog";               PRM[prmmaxtfbvlog]               = 90;    PRM_type[prmmaxtfbvlog]               = TS_type; /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    PRM_code[prmmlfpr02]                  = "mlfpr02";                  PRM[prmmlfpr02]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 02                                                                                        */
    PRM_code[prmmlfpr03]                  = "mlfpr03";                  PRM[prmmlfpr03]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 03                                                                                        */
    PRM_code[prmmlfpr05]                  = "mlfpr05";                  PRM[prmmlfpr05]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 05                                                                                        */
    PRM_code[prmmlfpr08]                  = "mlfpr08";                  PRM[prmmlfpr08]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 08                                                                                        */
    PRM_code[prmmlfpr09]                  = "mlfpr09";                  PRM[prmmlfpr09]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 09                                                                                        */
    PRM_code[prmmlfpr11]                  = "mlfpr11";                  PRM[prmmlfpr11]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 11                                                                                        */
    PRM_code[prmmlfpr21]                  = "mlfpr21";                  PRM[prmmlfpr21]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 21                                                                                        */
    PRM_code[prmmlfpr22]                  = "mlfpr22";                  PRM[prmmlfpr22]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 22                                                                                        */
    PRM_code[prmmlfpr24]                  = "mlfpr24";                  PRM[prmmlfpr24]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 24                                                                                        */
    PRM_code[prmmlfpr26]                  = "mlfpr26";                  PRM[prmmlfpr26]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 26                                                                                        */
    PRM_code[prmmlfpr28]                  = "mlfpr28";                  PRM[prmmlfpr28]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 28                                                                                        */
    PRM_code[prmmlfpr31]                  = "mlfpr31";                  PRM[prmmlfpr31]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 31                                                                                        */
    PRM_code[prmmlfpr32]                  = "mlfpr32";                  PRM[prmmlfpr32]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 32                                                                                        */
    PRM_code[prmmlfpr33]                  = "mlfpr33";                  PRM[prmmlfpr33]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 33                                                                                        */
    PRM_code[prmmlfpr34]                  = "mlfpr34";                  PRM[prmmlfpr34]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 34                                                                                        */
    PRM_code[prmmlfpr38]                  = "mlfpr38";                  PRM[prmmlfpr38]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 38                                                                                        */
    PRM_code[prmmlfpr61]                  = "mlfpr61";                  PRM[prmmlfpr61]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 61                                                                                        */
    PRM_code[prmmlfpr62]                  = "mlfpr62";                  PRM[prmmlfpr62]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 62                                                                                        */
    PRM_code[prmmlfpr67]                  = "mlfpr67";                  PRM[prmmlfpr67]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 67                                                                                        */
    PRM_code[prmmlfpr68]                  = "mlfpr68";                  PRM[prmmlfpr68]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 68                                                                                        */
    PRM_code[prmmlfpr81]                  = "mlfpr81";                  PRM[prmmlfpr81]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 81                                                                                        */
    PRM_code[prmmlfpr82]                  = "mlfpr82";                  PRM[prmmlfpr82]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 82                                                                                        */
    PRM_code[prmmlfpr84]                  = "mlfpr84";                  PRM[prmmlfpr84]                  = 3;                                                       /* Maximaal aantal modules vooruit fase 84                                                                                        */
    PRM_code[prmaltg02]                   = "altg02";                   PRM[prmaltg02]                   = 60;    PRM_type[prmaltg02]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    PRM_code[prmaltp02]                   = "altp02";                   PRM[prmaltp02]                   = 60;    PRM_type[prmaltp02]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    PRM_code[prmaltg03]                   = "altg03";                   PRM[prmaltg03]                   = 60;    PRM_type[prmaltg03]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    PRM_code[prmaltp03]                   = "altp03";                   PRM[prmaltp03]                   = 60;    PRM_type[prmaltp03]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    PRM_code[prmaltg05]                   = "altg05";                   PRM[prmaltg05]                   = 60;    PRM_type[prmaltg05]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    PRM_code[prmaltp05]                   = "altp05";                   PRM[prmaltp05]                   = 60;    PRM_type[prmaltp05]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    PRM_code[prmaltg08]                   = "altg08";                   PRM[prmaltg08]                   = 60;    PRM_type[prmaltg08]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    PRM_code[prmaltp08]                   = "altp08";                   PRM[prmaltp08]                   = 60;    PRM_type[prmaltp08]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    PRM_code[prmaltg09]                   = "altg09";                   PRM[prmaltg09]                   = 60;    PRM_type[prmaltg09]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    PRM_code[prmaltp09]                   = "altp09";                   PRM[prmaltp09]                   = 60;    PRM_type[prmaltp09]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    PRM_code[prmaltg11]                   = "altg11";                   PRM[prmaltg11]                   = 60;    PRM_type[prmaltg11]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    PRM_code[prmaltp11]                   = "altp11";                   PRM[prmaltp11]                   = 60;    PRM_type[prmaltp11]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    PRM_code[prmaltg21]                   = "altg21";                   PRM[prmaltg21]                   = 60;    PRM_type[prmaltg21]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    PRM_code[prmaltp21]                   = "altp21";                   PRM[prmaltp21]                   = 60;    PRM_type[prmaltp21]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    PRM_code[prmaltg22]                   = "altg22";                   PRM[prmaltg22]                   = 60;    PRM_type[prmaltg22]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    PRM_code[prmaltp22]                   = "altp22";                   PRM[prmaltp22]                   = 60;    PRM_type[prmaltp22]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    PRM_code[prmaltg24]                   = "altg24";                   PRM[prmaltg24]                   = 60;    PRM_type[prmaltg24]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    PRM_code[prmaltp24]                   = "altp24";                   PRM[prmaltp24]                   = 60;    PRM_type[prmaltp24]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 24                                                                            */
    PRM_code[prmaltg26]                   = "altg26";                   PRM[prmaltg26]                   = 60;    PRM_type[prmaltg26]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    PRM_code[prmaltp26]                   = "altp26";                   PRM[prmaltp26]                   = 60;    PRM_type[prmaltp26]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    PRM_code[prmaltg28]                   = "altg28";                   PRM[prmaltg28]                   = 60;    PRM_type[prmaltg28]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    PRM_code[prmaltp28]                   = "altp28";                   PRM[prmaltp28]                   = 60;    PRM_type[prmaltp28]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    PRM_code[prmaltg31]                   = "altg31";                   PRM[prmaltg31]                   = 60;    PRM_type[prmaltg31]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    PRM_code[prmaltp31]                   = "altp31";                   PRM[prmaltp31]                   = 60;    PRM_type[prmaltp31]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    PRM_code[prmaltg32]                   = "altg32";                   PRM[prmaltg32]                   = 60;    PRM_type[prmaltg32]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    PRM_code[prmaltp32]                   = "altp32";                   PRM[prmaltp32]                   = 60;    PRM_type[prmaltp32]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    PRM_code[prmaltg33]                   = "altg33";                   PRM[prmaltg33]                   = 60;    PRM_type[prmaltg33]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    PRM_code[prmaltp33]                   = "altp33";                   PRM[prmaltp33]                   = 60;    PRM_type[prmaltp33]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    PRM_code[prmaltg34]                   = "altg34";                   PRM[prmaltg34]                   = 60;    PRM_type[prmaltg34]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    PRM_code[prmaltp34]                   = "altp34";                   PRM[prmaltp34]                   = 60;    PRM_type[prmaltp34]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    PRM_code[prmaltg38]                   = "altg38";                   PRM[prmaltg38]                   = 60;    PRM_type[prmaltg38]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    PRM_code[prmaltp38]                   = "altp38";                   PRM[prmaltp38]                   = 60;    PRM_type[prmaltp38]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    PRM_code[prmaltg61]                   = "altg61";                   PRM[prmaltg61]                   = 60;    PRM_type[prmaltg61]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    PRM_code[prmaltp61]                   = "altp61";                   PRM[prmaltp61]                   = 60;    PRM_type[prmaltp61]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    PRM_code[prmaltg62]                   = "altg62";                   PRM[prmaltg62]                   = 60;    PRM_type[prmaltg62]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    PRM_code[prmaltp62]                   = "altp62";                   PRM[prmaltp62]                   = 60;    PRM_type[prmaltp62]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    PRM_code[prmaltg67]                   = "altg67";                   PRM[prmaltg67]                   = 60;    PRM_type[prmaltg67]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    PRM_code[prmaltp67]                   = "altp67";                   PRM[prmaltp67]                   = 60;    PRM_type[prmaltp67]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    PRM_code[prmaltg68]                   = "altg68";                   PRM[prmaltg68]                   = 60;    PRM_type[prmaltg68]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    PRM_code[prmaltp68]                   = "altp68";                   PRM[prmaltp68]                   = 60;    PRM_type[prmaltp68]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    PRM_code[prmaltg81]                   = "altg81";                   PRM[prmaltg81]                   = 60;    PRM_type[prmaltg81]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    PRM_code[prmaltp81]                   = "altp81";                   PRM[prmaltp81]                   = 60;    PRM_type[prmaltp81]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    PRM_code[prmaltg82]                   = "altg82";                   PRM[prmaltg82]                   = 60;    PRM_type[prmaltg82]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    PRM_code[prmaltp82]                   = "altp82";                   PRM[prmaltp82]                   = 60;    PRM_type[prmaltp82]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    PRM_code[prmaltg84]                   = "altg84";                   PRM[prmaltg84]                   = 60;    PRM_type[prmaltg84]                   = TE_type; /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    PRM_code[prmaltp84]                   = "altp84";                   PRM[prmaltp84]                   = 60;    PRM_type[prmaltp84]                   = TE_type; /* Minimale ruimte tbv alternatieve realisatie fase 84                                                                            */
    PRM_code[prmwg02]                     = "wg02";                     PRM[prmwg02]                     = 2;                                                       /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg03]                     = "wg03";                     PRM[prmwg03]                     = 2;                                                       /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg05]                     = "wg05";                     PRM[prmwg05]                     = 2;                                                       /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg08]                     = "wg08";                     PRM[prmwg08]                     = 2;                                                       /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg09]                     = "wg09";                     PRM[prmwg09]                     = 2;                                                       /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg11]                     = "wg11";                     PRM[prmwg11]                     = 2;                                                       /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg21]                     = "wg21";                     PRM[prmwg21]                     = 2;                                                       /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg22]                     = "wg22";                     PRM[prmwg22]                     = 2;                                                       /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg24]                     = "wg24";                     PRM[prmwg24]                     = 2;                                                       /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg26]                     = "wg26";                     PRM[prmwg26]                     = 2;                                                       /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg28]                     = "wg28";                     PRM[prmwg28]                     = 2;                                                       /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg31]                     = "wg31";                     PRM[prmwg31]                     = 2;                                                       /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg32]                     = "wg32";                     PRM[prmwg32]                     = 2;                                                       /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg33]                     = "wg33";                     PRM[prmwg33]                     = 2;                                                       /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg34]                     = "wg34";                     PRM[prmwg34]                     = 2;                                                       /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg38]                     = "wg38";                     PRM[prmwg38]                     = 2;                                                       /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg61]                     = "wg61";                     PRM[prmwg61]                     = 2;                                                       /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg62]                     = "wg62";                     PRM[prmwg62]                     = 2;                                                       /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg67]                     = "wg67";                     PRM[prmwg67]                     = 2;                                                       /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg68]                     = "wg68";                     PRM[prmwg68]                     = 2;                                                       /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg81]                     = "wg81";                     PRM[prmwg81]                     = 2;                                                       /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg82]                     = "wg82";                     PRM[prmwg82]                     = 2;                                                       /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmwg84]                     = "wg84";                     PRM[prmwg84]                     = 2;                                                       /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    PRM_code[prmminwtv]                   = "minwtv";                   PRM[prmminwtv]                   = 2;     PRM_type[prmminwtv]                   = TE_type; /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    PRM_code[prmwtvnhaltmax]              = "wtvnhaltmax";              PRM[prmwtvnhaltmax]              = 21;                                                      /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    PRM_code[prmwtvnhaltmin]              = "wtvnhaltmin";              PRM[prmwtvnhaltmin]              = 5;                                                       /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    PRM_code[prmstarprogdef]              = "starprogdef";              PRM[prmstarprogdef]              = 1;     PRM_type[prmstarprogdef]              = SCH_type; /* Default star programma                                                                                                         */
    PRM_code[prmstarprogDaluren_weekend]  = "starprogDaluren_weekend";  PRM[prmstarprogDaluren_weekend]  = 2;                                                       /* Noodprogramma bij periode Daluren_weekend                                                                                      */
    PRM_code[prmstarprogDaluren_werkdag]  = "starprogDaluren_werkdag";  PRM[prmstarprogDaluren_werkdag]  = 2;                                                       /* Noodprogramma bij periode Daluren_werkdag                                                                                      */
    PRM_code[prmstarprogOerdag_werkdag]   = "starprogOerdag_werkdag";   PRM[prmstarprogOerdag_werkdag]   = 1;                                                       /* Noodprogramma bij periode Oerdag_werkdag                                                                                       */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    PRM_code[prmtestdsivert]              = "testdsivert";              PRM[prmtestdsivert]              = 120;   PRM_type[prmtestdsivert]              = TS_type; /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    PRM_code[prmtestdsilyn]               = "testdsilyn";               PRM[prmtestdsilyn]               = 0;                                           /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    PRM_code[prmtestdsicat]               = "testdsicat";               PRM[prmtestdsicat]               = 10;                                          /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
#endif

/* instellingen categorieën */
/* ------------------------ */
    C_cat[cvchst02karbus]   = CAT_Module;      C_subcat[cvchst02karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst03karbus]   = CAT_Module;      C_subcat[cvchst03karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst05karbus]   = CAT_Module;      C_subcat[cvchst05karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst08karbus]   = CAT_Module;      C_subcat[cvchst08karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst09karbus]   = CAT_Module;      C_subcat[cvchst09karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst11karbus]   = CAT_Module;      C_subcat[cvchst11karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst22fiets]    = CAT_Module;      C_subcat[cvchst22fiets]       = SUBCAT_Plantijden;
    C_cat[cvchst28fiets]    = CAT_Module;      C_subcat[cvchst28fiets]       = SUBCAT_Plantijden;
    C_cat[cvchst61karbus]   = CAT_Module;      C_subcat[cvchst61karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst62karbus]   = CAT_Module;      C_subcat[cvchst62karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst67karbus]   = CAT_Module;      C_subcat[cvchst67karbus]      = SUBCAT_Plantijden;
    C_cat[cvchst68karbus]   = CAT_Module;      C_subcat[cvchst68karbus]      = SUBCAT_Plantijden;
    C_cat[cvc02karbus]      = CAT_Prioriteren; C_subcat[cvc02karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc03karbus]      = CAT_Prioriteren; C_subcat[cvc03karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc05karbus]      = CAT_Prioriteren; C_subcat[cvc05karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc08karbus]      = CAT_Prioriteren; C_subcat[cvc08karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc09karbus]      = CAT_Prioriteren; C_subcat[cvc09karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc11karbus]      = CAT_Prioriteren; C_subcat[cvc11karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc22fiets]       = CAT_Prioriteren; C_subcat[cvc22fiets]          = SUBCAT_OpenbaarVervoer;
    C_cat[cvc28fiets]       = CAT_Prioriteren; C_subcat[cvc28fiets]          = SUBCAT_OpenbaarVervoer;
    C_cat[cvc61karbus]      = CAT_Prioriteren; C_subcat[cvc61karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc62karbus]      = CAT_Prioriteren; C_subcat[cvc62karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc67karbus]      = CAT_Prioriteren; C_subcat[cvc67karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvc68karbus]      = CAT_Prioriteren; C_subcat[cvc68karbus]         = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd02]          = CAT_Prioriteren; C_subcat[cvchd02]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd03]          = CAT_Prioriteren; C_subcat[cvchd03]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd05]          = CAT_Prioriteren; C_subcat[cvchd05]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd08]          = CAT_Prioriteren; C_subcat[cvchd08]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd09]          = CAT_Prioriteren; C_subcat[cvchd09]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd11]          = CAT_Prioriteren; C_subcat[cvchd11]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd61]          = CAT_Prioriteren; C_subcat[cvchd61]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd62]          = CAT_Prioriteren; C_subcat[cvchd62]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd67]          = CAT_Prioriteren; C_subcat[cvchd67]             = SUBCAT_OpenbaarVervoer;
    C_cat[cvchd68]          = CAT_Prioriteren; C_subcat[cvchd68]             = SUBCAT_OpenbaarVervoer;
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
    SCH_cat[schaltghst02]          = CAT_Module;           SCH_subcat[schaltghst02]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst03]          = CAT_Module;           SCH_subcat[schaltghst03]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst05]          = CAT_Module;           SCH_subcat[schaltghst05]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst08]          = CAT_Module;           SCH_subcat[schaltghst08]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst09]          = CAT_Module;           SCH_subcat[schaltghst09]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst11]          = CAT_Module;           SCH_subcat[schaltghst11]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst21]          = CAT_Module;           SCH_subcat[schaltghst21]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst22]          = CAT_Module;           SCH_subcat[schaltghst22]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst24]          = CAT_Module;           SCH_subcat[schaltghst24]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst26]          = CAT_Module;           SCH_subcat[schaltghst26]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst28]          = CAT_Module;           SCH_subcat[schaltghst28]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst31]          = CAT_Module;           SCH_subcat[schaltghst31]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst32]          = CAT_Module;           SCH_subcat[schaltghst32]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst88]          = CAT_Module;           SCH_subcat[schaltghst88]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst84]          = CAT_Module;           SCH_subcat[schaltghst84]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst82]          = CAT_Module;           SCH_subcat[schaltghst82]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst81]          = CAT_Module;           SCH_subcat[schaltghst81]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst68]          = CAT_Module;           SCH_subcat[schaltghst68]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst67]          = CAT_Module;           SCH_subcat[schaltghst67]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst62]          = CAT_Module;           SCH_subcat[schaltghst62]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst61]          = CAT_Module;           SCH_subcat[schaltghst61]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst38]          = CAT_Module;           SCH_subcat[schaltghst38]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst34]          = CAT_Module;           SCH_subcat[schaltghst34]             = SUBCAT_Plantijden;
    SCH_cat[schaltghst33]          = CAT_Module;           SCH_subcat[schaltghst33]             = SUBCAT_Plantijden;
    SCH_cat[schtegenov02]          = CAT_Module;           SCH_subcat[schtegenov02]             = SUBCAT_Plantijden;
    SCH_cat[schafkwgov02]          = CAT_Module;           SCH_subcat[schafkwgov02]             = SUBCAT_Plantijden;
    SCH_cat[schafkvgov02]          = CAT_Module;           SCH_subcat[schafkvgov02]             = SUBCAT_Plantijden;
    SCH_cat[schtegenov08]          = CAT_Module;           SCH_subcat[schtegenov08]             = SUBCAT_Plantijden;
    SCH_cat[schafkwgov08]          = CAT_Module;           SCH_subcat[schafkwgov08]             = SUBCAT_Plantijden;
    SCH_cat[schafkvgov08]          = CAT_Module;           SCH_subcat[schafkvgov08]             = SUBCAT_Plantijden;
    SCH_cat[schinst]               = CAT_Module;           SCH_subcat[schinst]                  = SUBCAT_Plantijden;
    SCH_cat[schslavebep]           = CAT_Module;           SCH_subcat[schslavebep]              = SUBCAT_Plantijden;
    SCH_cat[schvaml]               = CAT_Module;           SCH_subcat[schvaml]                  = SUBCAT_Plantijden;
    SCH_cat[schvar]                = CAT_Module;           SCH_subcat[schvar]                   = SUBCAT_Plantijden;
    SCH_cat[scharh]                = CAT_Module;           SCH_subcat[scharh]                   = SUBCAT_Plantijden;
    SCH_cat[schpervardef]          = CAT_Module;           SCH_subcat[schpervardef]             = SUBCAT_Plantijden;
    SCH_cat[schpervar1]            = CAT_Module;           SCH_subcat[schpervar1]               = SUBCAT_Plantijden;
    SCH_cat[schpervar2]            = CAT_Module;           SCH_subcat[schpervar2]               = SUBCAT_Plantijden;
    SCH_cat[schpervar3]            = CAT_Module;           SCH_subcat[schpervar3]               = SUBCAT_Plantijden;
    SCH_cat[schpervar4]            = CAT_Module;           SCH_subcat[schpervar4]               = SUBCAT_Plantijden;
    SCH_cat[schpervar5]            = CAT_Module;           SCH_subcat[schpervar5]               = SUBCAT_Plantijden;
    SCH_cat[schpervar6]            = CAT_Module;           SCH_subcat[schpervar6]               = SUBCAT_Plantijden;
    SCH_cat[schpervar7]            = CAT_Module;           SCH_subcat[schpervar7]               = SUBCAT_Plantijden;
    SCH_cat[schperarhdef]          = CAT_Module;           SCH_subcat[schperarhdef]             = SUBCAT_Plantijden;
    SCH_cat[schperarh1]            = CAT_Module;           SCH_subcat[schperarh1]               = SUBCAT_Plantijden;
    SCH_cat[schperarh2]            = CAT_Module;           SCH_subcat[schperarh2]               = SUBCAT_Plantijden;
    SCH_cat[schperarh3]            = CAT_Module;           SCH_subcat[schperarh3]               = SUBCAT_Plantijden;
    SCH_cat[schperarh4]            = CAT_Module;           SCH_subcat[schperarh4]               = SUBCAT_Plantijden;
    SCH_cat[schperarh5]            = CAT_Module;           SCH_subcat[schperarh5]               = SUBCAT_Plantijden;
    SCH_cat[schperarh6]            = CAT_Module;           SCH_subcat[schperarh6]               = SUBCAT_Plantijden;
    SCH_cat[schperarh7]            = CAT_Module;           SCH_subcat[schperarh7]               = SUBCAT_Plantijden;
    SCH_cat[schovpriople]          = CAT_Module;           SCH_subcat[schovpriople]             = SUBCAT_Plantijden;
    SCH_cat[schma0261]             = CAT_Basisfuncties;    SCH_subcat[schma0261]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0262]             = CAT_Basisfuncties;    SCH_subcat[schma0262]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0521]             = CAT_Basisfuncties;    SCH_subcat[schma0521]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0522]             = CAT_Basisfuncties;    SCH_subcat[schma0522]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0532]             = CAT_Basisfuncties;    SCH_subcat[schma0532]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma0868]             = CAT_Basisfuncties;    SCH_subcat[schma0868]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma1126]             = CAT_Basisfuncties;    SCH_subcat[schma1126]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma1168]             = CAT_Basisfuncties;    SCH_subcat[schma1168]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma2221]             = CAT_Basisfuncties;    SCH_subcat[schma2221]                = SUBCAT_Meeaanvraag;
    SCH_cat[schma2611]             = CAT_Basisfuncties;    SCH_subcat[schma2611]                = SUBCAT_Meeaanvraag;
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
    SCH_cat[schma3828]             = CAT_Basisfuncties;    SCH_subcat[schma3828]                = SUBCAT_Meeaanvraag;
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
    SCH_cat[schovstipt02karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt02karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt03karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt03karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt05karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt05karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt08karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt08karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt09karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt09karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt11karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt11karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt61karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt61karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt62karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt62karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt67karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt67karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schovstipt68karbus]    = CAT_Prioriteren;      SCH_subcat[schovstipt68karbus]       = SUBCAT_OpenbaarVervoer;
    SCH_cat[schcovuber]            = CAT_Prioriteren;      SCH_subcat[schcovuber]               = SUBCAT_OpenbaarVervoer;
    SCH_cat[schcheckdstype]        = CAT_Prioriteren;      SCH_subcat[schcheckdstype]           = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin02karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin02karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit02karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit02karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin03karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin03karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit03karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit03karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin05karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin05karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit05karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit05karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin08karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin08karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit08karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit08karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin09karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin09karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit09karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit09karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin11karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin11karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit11karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit11karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin22fietsfiets] = CAT_Prioriteren;      SCH_subcat[schprioin22fietsfiets]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit22fietsfiets] = CAT_Prioriteren;      SCH_subcat[schpriouit22fietsfiets]   = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin28fietsfiets] = CAT_Prioriteren;      SCH_subcat[schprioin28fietsfiets]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit28fietsfiets] = CAT_Prioriteren;      SCH_subcat[schpriouit28fietsfiets]   = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin61karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin61karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit61karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit61karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin62karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin62karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit62karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit62karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin67karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin67karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit67karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit67karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schprioin68karbuskar]  = CAT_Prioriteren;      SCH_subcat[schprioin68karbuskar]     = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpriouit68karbuskar] = CAT_Prioriteren;      SCH_subcat[schpriouit68karbuskar]    = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin02kar]          = CAT_Prioriteren;      SCH_subcat[schhdin02kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit02kar]         = CAT_Prioriteren;      SCH_subcat[schhduit02kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene02]      = CAT_Prioriteren;      SCH_subcat[schchecksirene02]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin03kar]          = CAT_Prioriteren;      SCH_subcat[schhdin03kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit03kar]         = CAT_Prioriteren;      SCH_subcat[schhduit03kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene03]      = CAT_Prioriteren;      SCH_subcat[schchecksirene03]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin05kar]          = CAT_Prioriteren;      SCH_subcat[schhdin05kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit05kar]         = CAT_Prioriteren;      SCH_subcat[schhduit05kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene05]      = CAT_Prioriteren;      SCH_subcat[schchecksirene05]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin08kar]          = CAT_Prioriteren;      SCH_subcat[schhdin08kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit08kar]         = CAT_Prioriteren;      SCH_subcat[schhduit08kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene08]      = CAT_Prioriteren;      SCH_subcat[schchecksirene08]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin09kar]          = CAT_Prioriteren;      SCH_subcat[schhdin09kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit09kar]         = CAT_Prioriteren;      SCH_subcat[schhduit09kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene09]      = CAT_Prioriteren;      SCH_subcat[schchecksirene09]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin11kar]          = CAT_Prioriteren;      SCH_subcat[schhdin11kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit11kar]         = CAT_Prioriteren;      SCH_subcat[schhduit11kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene11]      = CAT_Prioriteren;      SCH_subcat[schchecksirene11]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin61kar]          = CAT_Prioriteren;      SCH_subcat[schhdin61kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit61kar]         = CAT_Prioriteren;      SCH_subcat[schhduit61kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene61]      = CAT_Prioriteren;      SCH_subcat[schchecksirene61]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin62kar]          = CAT_Prioriteren;      SCH_subcat[schhdin62kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit62kar]         = CAT_Prioriteren;      SCH_subcat[schhduit62kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene62]      = CAT_Prioriteren;      SCH_subcat[schchecksirene62]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin67kar]          = CAT_Prioriteren;      SCH_subcat[schhdin67kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit67kar]         = CAT_Prioriteren;      SCH_subcat[schhduit67kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene67]      = CAT_Prioriteren;      SCH_subcat[schchecksirene67]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhdin68kar]          = CAT_Prioriteren;      SCH_subcat[schhdin68kar]             = SUBCAT_OpenbaarVervoer;
    SCH_cat[schhduit68kar]         = CAT_Prioriteren;      SCH_subcat[schhduit68kar]            = SUBCAT_OpenbaarVervoer;
    SCH_cat[schchecksirene68]      = CAT_Prioriteren;      SCH_subcat[schchecksirene68]         = SUBCAT_OpenbaarVervoer;
    SCH_cat[schpelrwKOP02]         = CAT_Basisfuncties;    SCH_subcat[schpelrwKOP02]            = SUBCAT_HardeKoppeling;
    SCH_cat[schpelmkKOP02]         = CAT_Basisfuncties;    SCH_subcat[schpelmkKOP02]            = SUBCAT_HardeKoppeling;
    SCH_cat[schpelaKOP02]          = CAT_Basisfuncties;    SCH_subcat[schpelaKOP02]             = SUBCAT_HardeKoppeling;
    SCH_cat[schpkuKOP68_uit68]     = CAT_Basisfuncties;    SCH_subcat[schpkuKOP68_uit68]        = SUBCAT_HardeKoppeling;
    SCH_cat[schrgadd24_3]          = CAT_Basisfuncties;    SCH_subcat[schrgadd24_3]             = SUBCAT_Verlengen;
    SCH_cat[schrgad24_3]           = CAT_Basisfuncties;    SCH_subcat[schrgad24_3]              = SUBCAT_Aanvraag;
    SCH_cat[schrgvd24_3]           = CAT_Basisfuncties;    SCH_subcat[schrgvd24_3]              = SUBCAT_Verlengen;
    SCH_cat[schrgv]                = CAT_Signaalgroep;     SCH_subcat[schrgv]                   = SUBCAT_MaximumGroentijden;
    SCH_cat[schrgv_snel]           = CAT_Signaalgroep;     SCH_subcat[schrgv_snel]              = SUBCAT_MaximumGroentijden;
    SCH_cat[schschoolingreep31]    = CAT_SpecialeIngrepen; SCH_subcat[schschoolingreep31]       = SUBCAT_Verlengen;
    SCH_cat[schschoolingreep32]    = CAT_SpecialeIngrepen; SCH_subcat[schschoolingreep32]       = SUBCAT_Verlengen;
    SCH_cat[schschoolingreep33]    = CAT_SpecialeIngrepen; SCH_subcat[schschoolingreep33]       = SUBCAT_Verlengen;
    SCH_cat[schschoolingreep34]    = CAT_SpecialeIngrepen; SCH_subcat[schschoolingreep34]       = SUBCAT_Verlengen;
    SCH_cat[schsi31]               = CAT_SpecialeIngrepen; SCH_subcat[schsi31]                  = SUBCAT_Verlengen;
    SCH_cat[schsi32]               = CAT_SpecialeIngrepen; SCH_subcat[schsi32]                  = SUBCAT_Verlengen;
    SCH_cat[schsi33]               = CAT_SpecialeIngrepen; SCH_subcat[schsi33]                  = SUBCAT_Verlengen;
    SCH_cat[schsi34]               = CAT_SpecialeIngrepen; SCH_subcat[schsi34]                  = SUBCAT_Verlengen;
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
    SCH_cat[schvg02_4a]            = CAT_Basisfuncties;    SCH_subcat[schvg02_4a]               = SUBCAT_Verlengen;
    SCH_cat[schvg02_4b]            = CAT_Basisfuncties;    SCH_subcat[schvg02_4b]               = SUBCAT_Verlengen;
    SCH_cat[schvg08_4a]            = CAT_Basisfuncties;    SCH_subcat[schvg08_4a]               = SUBCAT_Verlengen;
    SCH_cat[schvg08_4b]            = CAT_Basisfuncties;    SCH_subcat[schvg08_4b]               = SUBCAT_Verlengen;
    SCH_cat[schvg11_4]             = CAT_Basisfuncties;    SCH_subcat[schvg11_4]                = SUBCAT_Verlengen;
    SCH_cat[schaltg02]             = CAT_Module;           SCH_subcat[schaltg02]                = SUBCAT_Plantijden;
    SCH_cat[schaltg03]             = CAT_Module;           SCH_subcat[schaltg03]                = SUBCAT_Plantijden;
    SCH_cat[schaltg05]             = CAT_Module;           SCH_subcat[schaltg05]                = SUBCAT_Plantijden;
    SCH_cat[schaltg08]             = CAT_Module;           SCH_subcat[schaltg08]                = SUBCAT_Plantijden;
    SCH_cat[schaltg09]             = CAT_Module;           SCH_subcat[schaltg09]                = SUBCAT_Plantijden;
    SCH_cat[schaltg11]             = CAT_Module;           SCH_subcat[schaltg11]                = SUBCAT_Plantijden;
    SCH_cat[schaltg21]             = CAT_Module;           SCH_subcat[schaltg21]                = SUBCAT_Plantijden;
    SCH_cat[schaltg22]             = CAT_Module;           SCH_subcat[schaltg22]                = SUBCAT_Plantijden;
    SCH_cat[schaltg24]             = CAT_Module;           SCH_subcat[schaltg24]                = SUBCAT_Plantijden;
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
    SCH_cat[schaltg84]             = CAT_Module;           SCH_subcat[schaltg84]                = SUBCAT_Plantijden;
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
    SCH_cat[schwtv24]              = CAT_Informeren;       SCH_subcat[schwtv24]                 = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schwtvbusbijhd]        = CAT_Informeren;       SCH_subcat[schwtvbusbijhd]           = SUBCAT_Wachttijdvoorspeller;
    SCH_cat[schstar]               = CAT_SpecialeIngrepen; SCH_subcat[schstar]                  = SUBCAT_Plantijden;
    SCH_cat[schisgdebug]           = CAT_Basisfuncties;    SCH_subcat[schisgdebug]              = SUBCAT_Wachtgroen;
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
    T_cat[tleven]                  = CAT_Module;           T_subcat[tleven]                     = SUBCAT_Plantijden;
    T_cat[toffset]                 = CAT_Module;           T_subcat[toffset]                    = SUBCAT_Plantijden;
    T_cat[txmarge]                 = CAT_Module;           T_subcat[txmarge]                    = SUBCAT_Plantijden;
    T_cat[tleven654321]            = CAT_Module;           T_subcat[tleven654321]               = SUBCAT_Plantijden;
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
    T_cat[tnleg2221]               = CAT_Basisfuncties;    T_subcat[tnleg2221]                  = SUBCAT_HardeKoppeling;
    T_cat[tnlegd2221]              = CAT_Basisfuncties;    T_subcat[tnlegd2221]                 = SUBCAT_HardeKoppeling;
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
    T_cat[tprioin02karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin02karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit02karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit02karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin02karbus]         = CAT_Prioriteren;      T_subcat[tprioin02karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit02karbus]        = CAT_Prioriteren;      T_subcat[tpriouit02karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg02karbus]          = CAT_Prioriteren;      T_subcat[tbtovg02karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt02karbus]             = CAT_Prioriteren;      T_subcat[trt02karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb02karbus]             = CAT_Prioriteren;      T_subcat[tgb02karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk02karbus]            = CAT_Prioriteren;      T_subcat[tblk02karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin03karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin03karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit03karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit03karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin03karbus]         = CAT_Prioriteren;      T_subcat[tprioin03karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit03karbus]        = CAT_Prioriteren;      T_subcat[tpriouit03karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg03karbus]          = CAT_Prioriteren;      T_subcat[tbtovg03karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt03karbus]             = CAT_Prioriteren;      T_subcat[trt03karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb03karbus]             = CAT_Prioriteren;      T_subcat[tgb03karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk03karbus]            = CAT_Prioriteren;      T_subcat[tblk03karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin05karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin05karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit05karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit05karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin05karbus]         = CAT_Prioriteren;      T_subcat[tprioin05karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit05karbus]        = CAT_Prioriteren;      T_subcat[tpriouit05karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg05karbus]          = CAT_Prioriteren;      T_subcat[tbtovg05karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt05karbus]             = CAT_Prioriteren;      T_subcat[trt05karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb05karbus]             = CAT_Prioriteren;      T_subcat[tgb05karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk05karbus]            = CAT_Prioriteren;      T_subcat[tblk05karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin08karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin08karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit08karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit08karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin08karbus]         = CAT_Prioriteren;      T_subcat[tprioin08karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit08karbus]        = CAT_Prioriteren;      T_subcat[tpriouit08karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg08karbus]          = CAT_Prioriteren;      T_subcat[tbtovg08karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt08karbus]             = CAT_Prioriteren;      T_subcat[trt08karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb08karbus]             = CAT_Prioriteren;      T_subcat[tgb08karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk08karbus]            = CAT_Prioriteren;      T_subcat[tblk08karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin09karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin09karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit09karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit09karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin09karbus]         = CAT_Prioriteren;      T_subcat[tprioin09karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit09karbus]        = CAT_Prioriteren;      T_subcat[tpriouit09karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg09karbus]          = CAT_Prioriteren;      T_subcat[tbtovg09karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt09karbus]             = CAT_Prioriteren;      T_subcat[trt09karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb09karbus]             = CAT_Prioriteren;      T_subcat[tgb09karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk09karbus]            = CAT_Prioriteren;      T_subcat[tblk09karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin11karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin11karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit11karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit11karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin11karbus]         = CAT_Prioriteren;      T_subcat[tprioin11karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit11karbus]        = CAT_Prioriteren;      T_subcat[tpriouit11karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg11karbus]          = CAT_Prioriteren;      T_subcat[tbtovg11karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt11karbus]             = CAT_Prioriteren;      T_subcat[trt11karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb11karbus]             = CAT_Prioriteren;      T_subcat[tgb11karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk11karbus]            = CAT_Prioriteren;      T_subcat[tblk11karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg22fiets]           = CAT_Prioriteren;      T_subcat[tbtovg22fiets]              = SUBCAT_OpenbaarVervoer;
    T_cat[trt22fiets]              = CAT_Prioriteren;      T_subcat[trt22fiets]                 = SUBCAT_OpenbaarVervoer;
    T_cat[tgb22fiets]              = CAT_Prioriteren;      T_subcat[tgb22fiets]                 = SUBCAT_OpenbaarVervoer;
    T_cat[tblk22fiets]             = CAT_Prioriteren;      T_subcat[tblk22fiets]                = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg28fiets]           = CAT_Prioriteren;      T_subcat[tbtovg28fiets]              = SUBCAT_OpenbaarVervoer;
    T_cat[trt28fiets]              = CAT_Prioriteren;      T_subcat[trt28fiets]                 = SUBCAT_OpenbaarVervoer;
    T_cat[tgb28fiets]              = CAT_Prioriteren;      T_subcat[tgb28fiets]                 = SUBCAT_OpenbaarVervoer;
    T_cat[tblk28fiets]             = CAT_Prioriteren;      T_subcat[tblk28fiets]                = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin61karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin61karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit61karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit61karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin61karbus]         = CAT_Prioriteren;      T_subcat[tprioin61karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit61karbus]        = CAT_Prioriteren;      T_subcat[tpriouit61karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg61karbus]          = CAT_Prioriteren;      T_subcat[tbtovg61karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt61karbus]             = CAT_Prioriteren;      T_subcat[trt61karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb61karbus]             = CAT_Prioriteren;      T_subcat[tgb61karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk61karbus]            = CAT_Prioriteren;      T_subcat[tblk61karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin62karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin62karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit62karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit62karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin62karbus]         = CAT_Prioriteren;      T_subcat[tprioin62karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit62karbus]        = CAT_Prioriteren;      T_subcat[tpriouit62karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg62karbus]          = CAT_Prioriteren;      T_subcat[tbtovg62karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt62karbus]             = CAT_Prioriteren;      T_subcat[trt62karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb62karbus]             = CAT_Prioriteren;      T_subcat[tgb62karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk62karbus]            = CAT_Prioriteren;      T_subcat[tblk62karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin67karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin67karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit67karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit67karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin67karbus]         = CAT_Prioriteren;      T_subcat[tprioin67karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit67karbus]        = CAT_Prioriteren;      T_subcat[tpriouit67karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg67karbus]          = CAT_Prioriteren;      T_subcat[tbtovg67karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt67karbus]             = CAT_Prioriteren;      T_subcat[trt67karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb67karbus]             = CAT_Prioriteren;      T_subcat[tgb67karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk67karbus]            = CAT_Prioriteren;      T_subcat[tblk67karbus]               = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin68karbuskar]      = CAT_Prioriteren;      T_subcat[tprioin68karbuskar]         = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit68karbuskar]     = CAT_Prioriteren;      T_subcat[tpriouit68karbuskar]        = SUBCAT_OpenbaarVervoer;
    T_cat[tprioin68karbus]         = CAT_Prioriteren;      T_subcat[tprioin68karbus]            = SUBCAT_OpenbaarVervoer;
    T_cat[tpriouit68karbus]        = CAT_Prioriteren;      T_subcat[tpriouit68karbus]           = SUBCAT_OpenbaarVervoer;
    T_cat[tbtovg68karbus]          = CAT_Prioriteren;      T_subcat[tbtovg68karbus]             = SUBCAT_OpenbaarVervoer;
    T_cat[trt68karbus]             = CAT_Prioriteren;      T_subcat[trt68karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tgb68karbus]             = CAT_Prioriteren;      T_subcat[tgb68karbus]                = SUBCAT_OpenbaarVervoer;
    T_cat[tblk68karbus]            = CAT_Prioriteren;      T_subcat[tblk68karbus]               = SUBCAT_OpenbaarVervoer;
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
    T_cat[tpelmeetKOP02]           = CAT_Basisfuncties;    T_subcat[tpelmeetKOP02]              = SUBCAT_HardeKoppeling;
    T_cat[tpelmaxhiaatKOP02]       = CAT_Basisfuncties;    T_subcat[tpelmaxhiaatKOP02]          = SUBCAT_HardeKoppeling;
    T_cat[tpelrwKOP02]             = CAT_Basisfuncties;    T_subcat[tpelrwKOP02]                = SUBCAT_HardeKoppeling;
    T_cat[tpelrwmaxKOP02]          = CAT_Basisfuncties;    T_subcat[tpelrwmaxKOP02]             = SUBCAT_HardeKoppeling;
    T_cat[tpelstartrwKOP02]        = CAT_Basisfuncties;    T_subcat[tpelstartrwKOP02]           = SUBCAT_HardeKoppeling;
    T_cat[tpelaKOP02]              = CAT_Basisfuncties;    T_subcat[tpelaKOP02]                 = SUBCAT_HardeKoppeling;
    T_cat[trgad24_3]               = CAT_Basisfuncties;    T_subcat[trgad24_3]                  = SUBCAT_Aanvraag;
    T_cat[trgavd24_3]              = CAT_Basisfuncties;    T_subcat[trgavd24_3]                 = SUBCAT_Aanvraag;
    T_cat[trgrd24_3_d24_2]         = CAT_Basisfuncties;    T_subcat[trgrd24_3_d24_2]            = SUBCAT_Verlengen;
    T_cat[trgvd24_3_d24_2]         = CAT_Basisfuncties;    T_subcat[trgvd24_3_d24_2]            = SUBCAT_Verlengen;
    T_cat[tschoolingreepmaxg31]    = CAT_SpecialeIngrepen; T_subcat[tschoolingreepmaxg31]       = SUBCAT_Verlengen;
    T_cat[tdbsidk31a]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk31a]                 = SUBCAT_Verlengen;
    T_cat[tdbsidk31b]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk31b]                 = SUBCAT_Verlengen;
    T_cat[tschoolingreepmaxg32]    = CAT_SpecialeIngrepen; T_subcat[tschoolingreepmaxg32]       = SUBCAT_Verlengen;
    T_cat[tdbsidk32a]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk32a]                 = SUBCAT_Verlengen;
    T_cat[tdbsidk32b]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk32b]                 = SUBCAT_Verlengen;
    T_cat[tschoolingreepmaxg33]    = CAT_SpecialeIngrepen; T_subcat[tschoolingreepmaxg33]       = SUBCAT_Verlengen;
    T_cat[tdbsidk33a]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk33a]                 = SUBCAT_Verlengen;
    T_cat[tdbsidk33b]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk33b]                 = SUBCAT_Verlengen;
    T_cat[tschoolingreepmaxg34]    = CAT_SpecialeIngrepen; T_subcat[tschoolingreepmaxg34]       = SUBCAT_Verlengen;
    T_cat[tdbsidk34a]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk34a]                 = SUBCAT_Verlengen;
    T_cat[tdbsidk34b]              = CAT_SpecialeIngrepen; T_subcat[tdbsidk34b]                 = SUBCAT_Verlengen;
    T_cat[tsiexgr31]               = CAT_SpecialeIngrepen; T_subcat[tsiexgr31]                  = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk31a]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk31a]             = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk31b]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk31b]             = SUBCAT_Verlengen;
    T_cat[tsiexgr32]               = CAT_SpecialeIngrepen; T_subcat[tsiexgr32]                  = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk32a]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk32a]             = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk32b]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk32b]             = SUBCAT_Verlengen;
    T_cat[tsiexgr33]               = CAT_SpecialeIngrepen; T_subcat[tsiexgr33]                  = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk33a]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk33a]             = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk33b]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk33b]             = SUBCAT_Verlengen;
    T_cat[tsiexgr34]               = CAT_SpecialeIngrepen; T_subcat[tsiexgr34]                  = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk34a]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk34a]             = SUBCAT_Verlengen;
    T_cat[tdbsiexgrdk34b]          = CAT_SpecialeIngrepen; T_subcat[tdbsiexgrdk34b]             = SUBCAT_Verlengen;
    T_cat[tvamax62]                = CAT_SpecialeIngrepen; T_subcat[tvamax62]                   = SUBCAT_File;
    T_cat[tva6209_d62_1a]          = CAT_SpecialeIngrepen; T_subcat[tva6209_d62_1a]             = SUBCAT_File;
    T_cat[tva6211_d62_1a]          = CAT_SpecialeIngrepen; T_subcat[tva6211_d62_1a]             = SUBCAT_File;
    T_cat[tva6226_d62_1a]          = CAT_SpecialeIngrepen; T_subcat[tva6226_d62_1a]             = SUBCAT_File;
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
    T_cat[tvgmax02]                = CAT_Basisfuncties;    T_subcat[tvgmax02]                   = SUBCAT_Verlengen;
    T_cat[tvgvolg02_4a]            = CAT_Basisfuncties;    T_subcat[tvgvolg02_4a]               = SUBCAT_Verlengen;
    T_cat[tvghiaat02_4a]           = CAT_Basisfuncties;    T_subcat[tvghiaat02_4a]              = SUBCAT_Verlengen;
    T_cat[tvgvolg02_4b]            = CAT_Basisfuncties;    T_subcat[tvgvolg02_4b]               = SUBCAT_Verlengen;
    T_cat[tvghiaat02_4b]           = CAT_Basisfuncties;    T_subcat[tvghiaat02_4b]              = SUBCAT_Verlengen;
    T_cat[tvgmax08]                = CAT_Basisfuncties;    T_subcat[tvgmax08]                   = SUBCAT_Verlengen;
    T_cat[tvgvolg08_4a]            = CAT_Basisfuncties;    T_subcat[tvgvolg08_4a]               = SUBCAT_Verlengen;
    T_cat[tvghiaat08_4a]           = CAT_Basisfuncties;    T_subcat[tvghiaat08_4a]              = SUBCAT_Verlengen;
    T_cat[tvgvolg08_4b]            = CAT_Basisfuncties;    T_subcat[tvgvolg08_4b]               = SUBCAT_Verlengen;
    T_cat[tvghiaat08_4b]           = CAT_Basisfuncties;    T_subcat[tvghiaat08_4b]              = SUBCAT_Verlengen;
    T_cat[tvgmax11]                = CAT_Basisfuncties;    T_subcat[tvgmax11]                   = SUBCAT_Verlengen;
    T_cat[tvgvolg11_4]             = CAT_Basisfuncties;    T_subcat[tvgvolg11_4]                = SUBCAT_Verlengen;
    T_cat[tvghiaat11_4]            = CAT_Basisfuncties;    T_subcat[tvghiaat11_4]               = SUBCAT_Verlengen;
    T_cat[twtv24]                  = CAT_Informeren;       T_subcat[twtv24]                     = SUBCAT_Wachttijdvoorspeller;
    T_cat[tvs2205]                 = CAT_Basisfuncties;    T_subcat[tvs2205]                    = SUBCAT_Deelconflicten;
    T_cat[tfo0522]                 = CAT_Basisfuncties;    T_subcat[tfo0522]                    = SUBCAT_Deelconflicten;
    T_cat[tvs2232]                 = CAT_Basisfuncties;    T_subcat[tvs2232]                    = SUBCAT_Deelconflicten;
    T_cat[tfo3222]                 = CAT_Basisfuncties;    T_subcat[tfo3222]                    = SUBCAT_Deelconflicten;
    T_cat[tvs2434]                 = CAT_Basisfuncties;    T_subcat[tvs2434]                    = SUBCAT_Deelconflicten;
    T_cat[tfo3424]                 = CAT_Basisfuncties;    T_subcat[tfo3424]                    = SUBCAT_Deelconflicten;
    T_cat[tvs2838]                 = CAT_Basisfuncties;    T_subcat[tvs2838]                    = SUBCAT_Deelconflicten;
    T_cat[tfo3828]                 = CAT_Basisfuncties;    T_subcat[tfo3828]                    = SUBCAT_Deelconflicten;
    T_cat[tvs3205]                 = CAT_Basisfuncties;    T_subcat[tvs3205]                    = SUBCAT_Deelconflicten;
    T_cat[tfo0532]                 = CAT_Basisfuncties;    T_subcat[tfo0532]                    = SUBCAT_Deelconflicten;
    T_cat[tvs8433]                 = CAT_Basisfuncties;    T_subcat[tvs8433]                    = SUBCAT_Deelconflicten;
    T_cat[tfo3384]                 = CAT_Basisfuncties;    T_subcat[tfo3384]                    = SUBCAT_Deelconflicten;
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
    PRM_cat[prmspringverleng_08_1a]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_1a]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_1b]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_1b]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_2a]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_2a]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_2b]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_2b]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_3a]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_3a]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_3b]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_3b]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_4a]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_4a]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_08_4b]   = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_08_4b]      = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_1]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_1]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_2]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_2]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_09_3]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_09_3]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_1]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_1]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_2]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_2]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_3]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_3]       = SUBCAT_Verlengen;
    PRM_cat[prmspringverleng_11_4]    = CAT_Basisfuncties;    PRM_subcat[prmspringverleng_11_4]       = SUBCAT_Verlengen;
    PRM_cat[prmfb]                    = CAT_SpecialeIngrepen; PRM_subcat[prmfb]                       = SUBCAT_Fasebewaking;
    PRM_cat[prmxx]                    = CAT_TestenLoggen;     PRM_subcat[prmxx]                       = SUBCAT_Loggen;
    PRM_cat[prmyy]                    = CAT_TestenLoggen;     PRM_subcat[prmyy]                       = SUBCAT_Loggen;
    PRM_cat[prmzz]                    = CAT_TestenLoggen;     PRM_subcat[prmzz]                       = SUBCAT_Loggen;
    PRM_cat[prmovmextragroen_02]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_02]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_02]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_02]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_03]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_03]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_03]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_03]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_05]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_05]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_05]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_05]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_08]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_08]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_08]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_08]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_09]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_09]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_09]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_09]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_11]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_11]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_11]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_11]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_61]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_61]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_61]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_61]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_62]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_62]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_62]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_62]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_67]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_67]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_67]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_67]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmextragroen_68]      = CAT_Optimaliseren;    PRM_subcat[prmovmextragroen_68]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovmmindergroen_68]     = CAT_Optimaliseren;    PRM_subcat[prmovmmindergroen_68]        = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmaltb02]                = CAT_Basisfuncties;    PRM_subcat[prmaltb02]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb03]                = CAT_Basisfuncties;    PRM_subcat[prmaltb03]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb05]                = CAT_Basisfuncties;    PRM_subcat[prmaltb05]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb08]                = CAT_Basisfuncties;    PRM_subcat[prmaltb08]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb09]                = CAT_Basisfuncties;    PRM_subcat[prmaltb09]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb11]                = CAT_Basisfuncties;    PRM_subcat[prmaltb11]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb21]                = CAT_Basisfuncties;    PRM_subcat[prmaltb21]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb22]                = CAT_Basisfuncties;    PRM_subcat[prmaltb22]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb24]                = CAT_Basisfuncties;    PRM_subcat[prmaltb24]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb26]                = CAT_Basisfuncties;    PRM_subcat[prmaltb26]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb28]                = CAT_Basisfuncties;    PRM_subcat[prmaltb28]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb31]                = CAT_Basisfuncties;    PRM_subcat[prmaltb31]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb32]                = CAT_Basisfuncties;    PRM_subcat[prmaltb32]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb33]                = CAT_Basisfuncties;    PRM_subcat[prmaltb33]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb34]                = CAT_Basisfuncties;    PRM_subcat[prmaltb34]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb38]                = CAT_Basisfuncties;    PRM_subcat[prmaltb38]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb61]                = CAT_Basisfuncties;    PRM_subcat[prmaltb61]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb62]                = CAT_Basisfuncties;    PRM_subcat[prmaltb62]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb67]                = CAT_Basisfuncties;    PRM_subcat[prmaltb67]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb68]                = CAT_Basisfuncties;    PRM_subcat[prmaltb68]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb81]                = CAT_Basisfuncties;    PRM_subcat[prmaltb81]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb82]                = CAT_Basisfuncties;    PRM_subcat[prmaltb82]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmaltb84]                = CAT_Basisfuncties;    PRM_subcat[prmaltb84]                   = SUBCAT_AlternatieveRealisaties;
    PRM_cat[prmda02_1a]               = CAT_Basisfuncties;    PRM_subcat[prmda02_1a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_1b]               = CAT_Basisfuncties;    PRM_subcat[prmda02_1b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_2a]               = CAT_Basisfuncties;    PRM_subcat[prmda02_2a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_2b]               = CAT_Basisfuncties;    PRM_subcat[prmda02_2b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_3a]               = CAT_Basisfuncties;    PRM_subcat[prmda02_3a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_3b]               = CAT_Basisfuncties;    PRM_subcat[prmda02_3b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_4a]               = CAT_Basisfuncties;    PRM_subcat[prmda02_4a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda02_4b]               = CAT_Basisfuncties;    PRM_subcat[prmda02_4b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda03_1]                = CAT_Basisfuncties;    PRM_subcat[prmda03_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda03_2]                = CAT_Basisfuncties;    PRM_subcat[prmda03_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda05_1]                = CAT_Basisfuncties;    PRM_subcat[prmda05_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda05_2]                = CAT_Basisfuncties;    PRM_subcat[prmda05_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda08_1a]               = CAT_Basisfuncties;    PRM_subcat[prmda08_1a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_1b]               = CAT_Basisfuncties;    PRM_subcat[prmda08_1b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_2a]               = CAT_Basisfuncties;    PRM_subcat[prmda08_2a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_2b]               = CAT_Basisfuncties;    PRM_subcat[prmda08_2b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_3a]               = CAT_Basisfuncties;    PRM_subcat[prmda08_3a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_3b]               = CAT_Basisfuncties;    PRM_subcat[prmda08_3b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_4a]               = CAT_Basisfuncties;    PRM_subcat[prmda08_4a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda08_4b]               = CAT_Basisfuncties;    PRM_subcat[prmda08_4b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda09_1]                = CAT_Basisfuncties;    PRM_subcat[prmda09_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda09_2]                = CAT_Basisfuncties;    PRM_subcat[prmda09_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda09_3]                = CAT_Basisfuncties;    PRM_subcat[prmda09_3]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda11_1]                = CAT_Basisfuncties;    PRM_subcat[prmda11_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda11_2]                = CAT_Basisfuncties;    PRM_subcat[prmda11_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda11_3]                = CAT_Basisfuncties;    PRM_subcat[prmda11_3]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda11_4]                = CAT_Basisfuncties;    PRM_subcat[prmda11_4]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda211]                 = CAT_Basisfuncties;    PRM_subcat[prmda211]                    = SUBCAT_Aanvraag;
    PRM_cat[prmdak21]                 = CAT_Basisfuncties;    PRM_subcat[prmdak21]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda22_1]                = CAT_Basisfuncties;    PRM_subcat[prmda22_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak22]                 = CAT_Basisfuncties;    PRM_subcat[prmdak22]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda24_1]                = CAT_Basisfuncties;    PRM_subcat[prmda24_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda24_2]                = CAT_Basisfuncties;    PRM_subcat[prmda24_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda24_3]                = CAT_Basisfuncties;    PRM_subcat[prmda24_3]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak24]                 = CAT_Basisfuncties;    PRM_subcat[prmdak24]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda261]                 = CAT_Basisfuncties;    PRM_subcat[prmda261]                    = SUBCAT_Aanvraag;
    PRM_cat[prmdak26]                 = CAT_Basisfuncties;    PRM_subcat[prmdak26]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda28_1]                = CAT_Basisfuncties;    PRM_subcat[prmda28_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda28_2]                = CAT_Basisfuncties;    PRM_subcat[prmda28_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak28]                 = CAT_Basisfuncties;    PRM_subcat[prmdak28]                    = SUBCAT_Aanvraag;
    PRM_cat[prmdak31a]                = CAT_Basisfuncties;    PRM_subcat[prmdak31a]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak31b]                = CAT_Basisfuncties;    PRM_subcat[prmdak31b]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak32a]                = CAT_Basisfuncties;    PRM_subcat[prmdak32a]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak32b]                = CAT_Basisfuncties;    PRM_subcat[prmdak32b]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak33a]                = CAT_Basisfuncties;    PRM_subcat[prmdak33a]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak33b]                = CAT_Basisfuncties;    PRM_subcat[prmdak33b]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak34a]                = CAT_Basisfuncties;    PRM_subcat[prmdak34a]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak34b]                = CAT_Basisfuncties;    PRM_subcat[prmdak34b]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak38a]                = CAT_Basisfuncties;    PRM_subcat[prmdak38a]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak38b]                = CAT_Basisfuncties;    PRM_subcat[prmdak38b]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda61_1]                = CAT_Basisfuncties;    PRM_subcat[prmda61_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda61_2]                = CAT_Basisfuncties;    PRM_subcat[prmda61_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda62_1a]               = CAT_Basisfuncties;    PRM_subcat[prmda62_1a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda62_1b]               = CAT_Basisfuncties;    PRM_subcat[prmda62_1b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda62_2a]               = CAT_Basisfuncties;    PRM_subcat[prmda62_2a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda62_2b]               = CAT_Basisfuncties;    PRM_subcat[prmda62_2b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda67_1]                = CAT_Basisfuncties;    PRM_subcat[prmda67_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda67_2]                = CAT_Basisfuncties;    PRM_subcat[prmda67_2]                   = SUBCAT_Aanvraag;
    PRM_cat[prmda68_1a]               = CAT_Basisfuncties;    PRM_subcat[prmda68_1a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda68_1b]               = CAT_Basisfuncties;    PRM_subcat[prmda68_1b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda68_2a]               = CAT_Basisfuncties;    PRM_subcat[prmda68_2a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda68_2b]               = CAT_Basisfuncties;    PRM_subcat[prmda68_2b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda68_9a]               = CAT_Basisfuncties;    PRM_subcat[prmda68_9a]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda68_9b]               = CAT_Basisfuncties;    PRM_subcat[prmda68_9b]                  = SUBCAT_Aanvraag;
    PRM_cat[prmda81_1]                = CAT_Basisfuncties;    PRM_subcat[prmda81_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak81]                 = CAT_Basisfuncties;    PRM_subcat[prmdak81]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda82_1]                = CAT_Basisfuncties;    PRM_subcat[prmda82_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak82]                 = CAT_Basisfuncties;    PRM_subcat[prmdak82]                    = SUBCAT_Aanvraag;
    PRM_cat[prmda84_1]                = CAT_Basisfuncties;    PRM_subcat[prmda84_1]                   = SUBCAT_Aanvraag;
    PRM_cat[prmdak84]                 = CAT_Basisfuncties;    PRM_subcat[prmdak84]                    = SUBCAT_Aanvraag;
    PRM_cat[prmmk02_1a]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_1a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_1b]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_1b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_2a]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_2a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_2b]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_2b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_3a]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_3a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_3b]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_3b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_4a]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_4a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk02_4b]               = CAT_Basisfuncties;    PRM_subcat[prmmk02_4b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk03_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk03_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk03_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk03_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk05_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk05_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk05_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk05_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk08_1a]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_1a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_1b]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_1b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_2a]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_2a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_2b]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_2b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_3a]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_3a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_3b]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_3b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_4a]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_4a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk08_4b]               = CAT_Basisfuncties;    PRM_subcat[prmmk08_4b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk09_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk09_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk09_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk09_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk09_3]                = CAT_Basisfuncties;    PRM_subcat[prmmk09_3]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk11_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk11_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk11_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk11_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk11_3]                = CAT_Basisfuncties;    PRM_subcat[prmmk11_3]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk11_4]                = CAT_Basisfuncties;    PRM_subcat[prmmk11_4]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk211]                 = CAT_Basisfuncties;    PRM_subcat[prmmk211]                    = SUBCAT_Verlengen;
    PRM_cat[prmmk22_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk22_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk24_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk24_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk24_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk24_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk24_3]                = CAT_Basisfuncties;    PRM_subcat[prmmk24_3]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk261]                 = CAT_Basisfuncties;    PRM_subcat[prmmk261]                    = SUBCAT_Verlengen;
    PRM_cat[prmmk28_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk28_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk28_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk28_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk61_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk61_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk61_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk61_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk62_1a]               = CAT_Basisfuncties;    PRM_subcat[prmmk62_1a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk62_1b]               = CAT_Basisfuncties;    PRM_subcat[prmmk62_1b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk62_2a]               = CAT_Basisfuncties;    PRM_subcat[prmmk62_2a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk62_2b]               = CAT_Basisfuncties;    PRM_subcat[prmmk62_2b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk67_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk67_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk67_2]                = CAT_Basisfuncties;    PRM_subcat[prmmk67_2]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk68_1a]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_1a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk68_1b]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_1b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk68_2a]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_2a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk68_2b]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_2b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk68_9a]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_9a]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk68_9b]               = CAT_Basisfuncties;    PRM_subcat[prmmk68_9b]                  = SUBCAT_Verlengen;
    PRM_cat[prmmk81_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk81_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk82_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk82_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmmk84_1]                = CAT_Basisfuncties;    PRM_subcat[prmmk84_1]                   = SUBCAT_Verlengen;
    PRM_cat[prmperc03]                = CAT_Detectie;         PRM_subcat[prmperc03]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc05]                = CAT_Detectie;         PRM_subcat[prmperc05]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc08]                = CAT_Detectie;         PRM_subcat[prmperc08]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc09]                = CAT_Detectie;         PRM_subcat[prmperc09]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc11]                = CAT_Detectie;         PRM_subcat[prmperc11]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc61]                = CAT_Detectie;         PRM_subcat[prmperc61]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc62]                = CAT_Detectie;         PRM_subcat[prmperc62]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc67]                = CAT_Detectie;         PRM_subcat[prmperc67]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmperc68]                = CAT_Detectie;         PRM_subcat[prmperc68]                   = SUBCAT_VervangendeMaatregelen;
    PRM_cat[prmfpercFile68af08]       = CAT_SpecialeIngrepen; PRM_subcat[prmfpercFile68af08]          = SUBCAT_File;
    PRM_cat[prmfpercFile68af11]       = CAT_SpecialeIngrepen; PRM_subcat[prmfpercFile68af11]          = SUBCAT_File;
    PRM_cat[prmaltphst02]             = CAT_Module;           PRM_subcat[prmaltphst02]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst03]             = CAT_Module;           PRM_subcat[prmaltphst03]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst05]             = CAT_Module;           PRM_subcat[prmaltphst05]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst08]             = CAT_Module;           PRM_subcat[prmaltphst08]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst09]             = CAT_Module;           PRM_subcat[prmaltphst09]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst11]             = CAT_Module;           PRM_subcat[prmaltphst11]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst21]             = CAT_Module;           PRM_subcat[prmaltphst21]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst22]             = CAT_Module;           PRM_subcat[prmaltphst22]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst24]             = CAT_Module;           PRM_subcat[prmaltphst24]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst26]             = CAT_Module;           PRM_subcat[prmaltphst26]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst28]             = CAT_Module;           PRM_subcat[prmaltphst28]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst31]             = CAT_Module;           PRM_subcat[prmaltphst31]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst32]             = CAT_Module;           PRM_subcat[prmaltphst32]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst88]             = CAT_Module;           PRM_subcat[prmaltphst88]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst84]             = CAT_Module;           PRM_subcat[prmaltphst84]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst82]             = CAT_Module;           PRM_subcat[prmaltphst82]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst81]             = CAT_Module;           PRM_subcat[prmaltphst81]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst68]             = CAT_Module;           PRM_subcat[prmaltphst68]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst67]             = CAT_Module;           PRM_subcat[prmaltphst67]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst62]             = CAT_Module;           PRM_subcat[prmaltphst62]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst61]             = CAT_Module;           PRM_subcat[prmaltphst61]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst38]             = CAT_Module;           PRM_subcat[prmaltphst38]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst34]             = CAT_Module;           PRM_subcat[prmaltphst34]                = SUBCAT_Plantijden;
    PRM_cat[prmaltphst33]             = CAT_Module;           PRM_subcat[prmaltphst33]                = SUBCAT_Plantijden;
    PRM_cat[prmpriohst02karbus]       = CAT_Module;           PRM_subcat[prmpriohst02karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst03karbus]       = CAT_Module;           PRM_subcat[prmpriohst03karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst05karbus]       = CAT_Module;           PRM_subcat[prmpriohst05karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst08karbus]       = CAT_Module;           PRM_subcat[prmpriohst08karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst09karbus]       = CAT_Module;           PRM_subcat[prmpriohst09karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst11karbus]       = CAT_Module;           PRM_subcat[prmpriohst11karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst22fiets]        = CAT_Module;           PRM_subcat[prmpriohst22fiets]           = SUBCAT_Plantijden;
    PRM_cat[prmpriohst28fiets]        = CAT_Module;           PRM_subcat[prmpriohst28fiets]           = SUBCAT_Plantijden;
    PRM_cat[prmpriohst61karbus]       = CAT_Module;           PRM_subcat[prmpriohst61karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst62karbus]       = CAT_Module;           PRM_subcat[prmpriohst62karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst67karbus]       = CAT_Module;           PRM_subcat[prmpriohst67karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmpriohst68karbus]       = CAT_Module;           PRM_subcat[prmpriohst68karbus]          = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst02karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst02karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst03karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst03karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst05karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst05karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst08karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst08karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst09karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst09karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst11karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst11karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst22fiets]       = CAT_Module;           PRM_subcat[prmnatxdhst22fiets]          = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst28fiets]       = CAT_Module;           PRM_subcat[prmnatxdhst28fiets]          = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst61karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst61karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst62karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst62karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst67karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst67karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmnatxdhst68karbus]      = CAT_Module;           PRM_subcat[prmnatxdhst68karbus]         = SUBCAT_Plantijden;
    PRM_cat[prmtxA1PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxA1PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB1PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxB1PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC1PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxC1PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD1PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxD1PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE1PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxE1PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxA2PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxA2PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB2PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxB2PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC2PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxC2PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD2PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxD2PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE2PL3_28]            = CAT_Signaalplan;      PRM_subcat[prmtxE2PL3_28]               = SUBCAT_Plantijden;
    PRM_cat[prmtxA1PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxA1PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB1PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxB1PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC1PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxC1PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD1PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxD1PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE1PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxE1PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxA2PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxA2PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB2PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxB2PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC2PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxC2PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD2PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxD2PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE2PL3_38]            = CAT_Signaalplan;      PRM_subcat[prmtxE2PL3_38]               = SUBCAT_Plantijden;
    PRM_cat[prmtxA1PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxA1PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB1PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxB1PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC1PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxC1PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD1PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxD1PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE1PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxE1PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxA2PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxA2PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxB2PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxB2PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxC2PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxC2PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxD2PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxD2PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmtxE2PL3_61]            = CAT_Signaalplan;      PRM_subcat[prmtxE2PL3_61]               = SUBCAT_Plantijden;
    PRM_cat[prmrstotxa]               = CAT_Module;           PRM_subcat[prmrstotxa]                  = SUBCAT_Plantijden;
    PRM_cat[prmvolgmasterpl]          = CAT_Module;           PRM_subcat[prmvolgmasterpl]             = SUBCAT_Plantijden;
    PRM_cat[prmplxperdef]             = CAT_Module;           PRM_subcat[prmplxperdef]                = SUBCAT_Plantijden;
    PRM_cat[prmplxper1]               = CAT_Module;           PRM_subcat[prmplxper1]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper2]               = CAT_Module;           PRM_subcat[prmplxper2]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper3]               = CAT_Module;           PRM_subcat[prmplxper3]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper4]               = CAT_Module;           PRM_subcat[prmplxper4]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper5]               = CAT_Module;           PRM_subcat[prmplxper5]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper6]               = CAT_Module;           PRM_subcat[prmplxper6]                  = SUBCAT_Plantijden;
    PRM_cat[prmplxper7]               = CAT_Module;           PRM_subcat[prmplxper7]                  = SUBCAT_Plantijden;
    PRM_cat[prmtypema0261]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0261]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema0262]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0262]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema0521]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0521]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema0522]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0522]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema0532]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0532]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema0868]            = CAT_Basisfuncties;    PRM_subcat[prmtypema0868]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema1126]            = CAT_Basisfuncties;    PRM_subcat[prmtypema1126]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema1168]            = CAT_Basisfuncties;    PRM_subcat[prmtypema1168]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema2221]            = CAT_Basisfuncties;    PRM_subcat[prmtypema2221]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema2611]            = CAT_Basisfuncties;    PRM_subcat[prmtypema2611]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3122]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3122]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3132]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3132]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3222]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3222]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3231]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3231]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3324]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3324]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3334]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3334]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3384]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3384]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3424]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3424]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3433]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3433]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3484]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3484]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema3828]            = CAT_Basisfuncties;    PRM_subcat[prmtypema3828]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmtypema8281]            = CAT_Basisfuncties;    PRM_subcat[prmtypema8281]               = SUBCAT_Meeaanvraag;
    PRM_cat[prmmv02]                  = CAT_Basisfuncties;    PRM_subcat[prmmv02]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv03]                  = CAT_Basisfuncties;    PRM_subcat[prmmv03]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv05]                  = CAT_Basisfuncties;    PRM_subcat[prmmv05]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv08]                  = CAT_Basisfuncties;    PRM_subcat[prmmv08]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv09]                  = CAT_Basisfuncties;    PRM_subcat[prmmv09]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv11]                  = CAT_Basisfuncties;    PRM_subcat[prmmv11]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv21]                  = CAT_Basisfuncties;    PRM_subcat[prmmv21]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv22]                  = CAT_Basisfuncties;    PRM_subcat[prmmv22]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmvverschil22]          = CAT_Basisfuncties;    PRM_subcat[prmmvverschil22]             = SUBCAT_Meeverlengen;
    PRM_cat[prmmv24]                  = CAT_Basisfuncties;    PRM_subcat[prmmv24]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv26]                  = CAT_Basisfuncties;    PRM_subcat[prmmv26]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv28]                  = CAT_Basisfuncties;    PRM_subcat[prmmv28]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv31]                  = CAT_Basisfuncties;    PRM_subcat[prmmv31]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv32]                  = CAT_Basisfuncties;    PRM_subcat[prmmv32]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv33]                  = CAT_Basisfuncties;    PRM_subcat[prmmv33]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv34]                  = CAT_Basisfuncties;    PRM_subcat[prmmv34]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv38]                  = CAT_Basisfuncties;    PRM_subcat[prmmv38]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv61]                  = CAT_Basisfuncties;    PRM_subcat[prmmv61]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv62]                  = CAT_Basisfuncties;    PRM_subcat[prmmv62]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv67]                  = CAT_Basisfuncties;    PRM_subcat[prmmv67]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv68]                  = CAT_Basisfuncties;    PRM_subcat[prmmv68]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv81]                  = CAT_Basisfuncties;    PRM_subcat[prmmv81]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmv82]                  = CAT_Basisfuncties;    PRM_subcat[prmmv82]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmmvverschil82]          = CAT_Basisfuncties;    PRM_subcat[prmmvverschil82]             = SUBCAT_Meeverlengen;
    PRM_cat[prmmv84]                  = CAT_Basisfuncties;    PRM_subcat[prmmv84]                     = SUBCAT_Meeverlengen;
    PRM_cat[prmprml02]                = CAT_Module;           PRM_subcat[prmprml02]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml03]                = CAT_Module;           PRM_subcat[prmprml03]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml05]                = CAT_Module;           PRM_subcat[prmprml05]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml08]                = CAT_Module;           PRM_subcat[prmprml08]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml09]                = CAT_Module;           PRM_subcat[prmprml09]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml11]                = CAT_Module;           PRM_subcat[prmprml11]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml21]                = CAT_Module;           PRM_subcat[prmprml21]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml22]                = CAT_Module;           PRM_subcat[prmprml22]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml24]                = CAT_Module;           PRM_subcat[prmprml24]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml26]                = CAT_Module;           PRM_subcat[prmprml26]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml28]                = CAT_Module;           PRM_subcat[prmprml28]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml31]                = CAT_Module;           PRM_subcat[prmprml31]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml32]                = CAT_Module;           PRM_subcat[prmprml32]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml33]                = CAT_Module;           PRM_subcat[prmprml33]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml34]                = CAT_Module;           PRM_subcat[prmprml34]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml38]                = CAT_Module;           PRM_subcat[prmprml38]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml61]                = CAT_Module;           PRM_subcat[prmprml61]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml62]                = CAT_Module;           PRM_subcat[prmprml62]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml67]                = CAT_Module;           PRM_subcat[prmprml67]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml68]                = CAT_Module;           PRM_subcat[prmprml68]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml81]                = CAT_Module;           PRM_subcat[prmprml81]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml82]                = CAT_Module;           PRM_subcat[prmprml82]                   = SUBCAT_Plantijden;
    PRM_cat[prmprml84]                = CAT_Module;           PRM_subcat[prmprml84]                   = SUBCAT_Plantijden;
    PRM_cat[prmOVtstpgrensvroeg]      = CAT_Prioriteren;      PRM_subcat[prmOVtstpgrensvroeg]         = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmOVtstpgrenslaat]       = CAT_Prioriteren;      PRM_subcat[prmOVtstpgrenslaat]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg02karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg02karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd02karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd02karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat02karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat02karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg03karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg03karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd03karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd03karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat03karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat03karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg05karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg05karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd05karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd05karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat05karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat05karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg08karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg08karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd08karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd08karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat08karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat08karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg09karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg09karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd09karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd09karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat09karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat09karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg11karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg11karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd11karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd11karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat11karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat11karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg61karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg61karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd61karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd61karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat61karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat61karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg62karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg62karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd62karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd62karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat62karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat62karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg67karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg67karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd67karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd67karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat67karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat67karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttevroeg68karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttevroeg68karbus]   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstiptoptijd68karbus] = CAT_Prioriteren;      PRM_subcat[prmovstiptoptijd68karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmovstipttelaat68karbus] = CAT_Prioriteren;      PRM_subcat[prmovstipttelaat68karbus]    = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwta]                  = CAT_Prioriteren;      PRM_subcat[prmmwta]                     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwtfts]                = CAT_Prioriteren;      PRM_subcat[prmmwtfts]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmwtvtg]                = CAT_Prioriteren;      PRM_subcat[prmmwtvtg]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt02]                = CAT_Prioriteren;      PRM_subcat[prmpmgt02]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt02]                = CAT_Prioriteren;      PRM_subcat[prmognt02]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm02]                = CAT_Prioriteren;      PRM_subcat[prmnofm02]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov02]               = CAT_Prioriteren;      PRM_subcat[prmmgcov02]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov02]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov02]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg02]               = CAT_Prioriteren;      PRM_subcat[prmohpmg02]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt03]                = CAT_Prioriteren;      PRM_subcat[prmpmgt03]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt03]                = CAT_Prioriteren;      PRM_subcat[prmognt03]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm03]                = CAT_Prioriteren;      PRM_subcat[prmnofm03]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov03]               = CAT_Prioriteren;      PRM_subcat[prmmgcov03]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov03]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov03]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg03]               = CAT_Prioriteren;      PRM_subcat[prmohpmg03]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt05]                = CAT_Prioriteren;      PRM_subcat[prmpmgt05]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt05]                = CAT_Prioriteren;      PRM_subcat[prmognt05]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm05]                = CAT_Prioriteren;      PRM_subcat[prmnofm05]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov05]               = CAT_Prioriteren;      PRM_subcat[prmmgcov05]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov05]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov05]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg05]               = CAT_Prioriteren;      PRM_subcat[prmohpmg05]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt08]                = CAT_Prioriteren;      PRM_subcat[prmpmgt08]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt08]                = CAT_Prioriteren;      PRM_subcat[prmognt08]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm08]                = CAT_Prioriteren;      PRM_subcat[prmnofm08]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov08]               = CAT_Prioriteren;      PRM_subcat[prmmgcov08]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov08]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov08]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg08]               = CAT_Prioriteren;      PRM_subcat[prmohpmg08]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt09]                = CAT_Prioriteren;      PRM_subcat[prmpmgt09]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt09]                = CAT_Prioriteren;      PRM_subcat[prmognt09]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm09]                = CAT_Prioriteren;      PRM_subcat[prmnofm09]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov09]               = CAT_Prioriteren;      PRM_subcat[prmmgcov09]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov09]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov09]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg09]               = CAT_Prioriteren;      PRM_subcat[prmohpmg09]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt11]                = CAT_Prioriteren;      PRM_subcat[prmpmgt11]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt11]                = CAT_Prioriteren;      PRM_subcat[prmognt11]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm11]                = CAT_Prioriteren;      PRM_subcat[prmnofm11]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov11]               = CAT_Prioriteren;      PRM_subcat[prmmgcov11]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov11]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov11]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg11]               = CAT_Prioriteren;      PRM_subcat[prmohpmg11]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt21]                = CAT_Prioriteren;      PRM_subcat[prmpmgt21]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt21]                = CAT_Prioriteren;      PRM_subcat[prmognt21]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm21]                = CAT_Prioriteren;      PRM_subcat[prmnofm21]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov21]               = CAT_Prioriteren;      PRM_subcat[prmmgcov21]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov21]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov21]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg21]               = CAT_Prioriteren;      PRM_subcat[prmohpmg21]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt22]                = CAT_Prioriteren;      PRM_subcat[prmpmgt22]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt22]                = CAT_Prioriteren;      PRM_subcat[prmognt22]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm22]                = CAT_Prioriteren;      PRM_subcat[prmnofm22]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov22]               = CAT_Prioriteren;      PRM_subcat[prmmgcov22]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov22]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov22]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg22]               = CAT_Prioriteren;      PRM_subcat[prmohpmg22]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt24]                = CAT_Prioriteren;      PRM_subcat[prmpmgt24]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt24]                = CAT_Prioriteren;      PRM_subcat[prmognt24]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm24]                = CAT_Prioriteren;      PRM_subcat[prmnofm24]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov24]               = CAT_Prioriteren;      PRM_subcat[prmmgcov24]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov24]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov24]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg24]               = CAT_Prioriteren;      PRM_subcat[prmohpmg24]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt26]                = CAT_Prioriteren;      PRM_subcat[prmpmgt26]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt26]                = CAT_Prioriteren;      PRM_subcat[prmognt26]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm26]                = CAT_Prioriteren;      PRM_subcat[prmnofm26]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov26]               = CAT_Prioriteren;      PRM_subcat[prmmgcov26]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov26]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov26]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg26]               = CAT_Prioriteren;      PRM_subcat[prmohpmg26]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt28]                = CAT_Prioriteren;      PRM_subcat[prmpmgt28]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt28]                = CAT_Prioriteren;      PRM_subcat[prmognt28]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm28]                = CAT_Prioriteren;      PRM_subcat[prmnofm28]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov28]               = CAT_Prioriteren;      PRM_subcat[prmmgcov28]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov28]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov28]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg28]               = CAT_Prioriteren;      PRM_subcat[prmohpmg28]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt31]                = CAT_Prioriteren;      PRM_subcat[prmpmgt31]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt31]                = CAT_Prioriteren;      PRM_subcat[prmognt31]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt32]                = CAT_Prioriteren;      PRM_subcat[prmpmgt32]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt32]                = CAT_Prioriteren;      PRM_subcat[prmognt32]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt33]                = CAT_Prioriteren;      PRM_subcat[prmpmgt33]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt33]                = CAT_Prioriteren;      PRM_subcat[prmognt33]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt34]                = CAT_Prioriteren;      PRM_subcat[prmpmgt34]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt34]                = CAT_Prioriteren;      PRM_subcat[prmognt34]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt38]                = CAT_Prioriteren;      PRM_subcat[prmpmgt38]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt38]                = CAT_Prioriteren;      PRM_subcat[prmognt38]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt61]                = CAT_Prioriteren;      PRM_subcat[prmpmgt61]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt61]                = CAT_Prioriteren;      PRM_subcat[prmognt61]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm61]                = CAT_Prioriteren;      PRM_subcat[prmnofm61]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov61]               = CAT_Prioriteren;      PRM_subcat[prmmgcov61]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov61]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov61]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg61]               = CAT_Prioriteren;      PRM_subcat[prmohpmg61]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt62]                = CAT_Prioriteren;      PRM_subcat[prmpmgt62]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt62]                = CAT_Prioriteren;      PRM_subcat[prmognt62]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm62]                = CAT_Prioriteren;      PRM_subcat[prmnofm62]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov62]               = CAT_Prioriteren;      PRM_subcat[prmmgcov62]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov62]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov62]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg62]               = CAT_Prioriteren;      PRM_subcat[prmohpmg62]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt67]                = CAT_Prioriteren;      PRM_subcat[prmpmgt67]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt67]                = CAT_Prioriteren;      PRM_subcat[prmognt67]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm67]                = CAT_Prioriteren;      PRM_subcat[prmnofm67]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov67]               = CAT_Prioriteren;      PRM_subcat[prmmgcov67]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov67]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov67]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg67]               = CAT_Prioriteren;      PRM_subcat[prmohpmg67]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt68]                = CAT_Prioriteren;      PRM_subcat[prmpmgt68]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt68]                = CAT_Prioriteren;      PRM_subcat[prmognt68]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm68]                = CAT_Prioriteren;      PRM_subcat[prmnofm68]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov68]               = CAT_Prioriteren;      PRM_subcat[prmmgcov68]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov68]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov68]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg68]               = CAT_Prioriteren;      PRM_subcat[prmohpmg68]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt81]                = CAT_Prioriteren;      PRM_subcat[prmpmgt81]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt81]                = CAT_Prioriteren;      PRM_subcat[prmognt81]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm81]                = CAT_Prioriteren;      PRM_subcat[prmnofm81]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov81]               = CAT_Prioriteren;      PRM_subcat[prmmgcov81]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov81]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov81]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg81]               = CAT_Prioriteren;      PRM_subcat[prmohpmg81]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt82]                = CAT_Prioriteren;      PRM_subcat[prmpmgt82]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt82]                = CAT_Prioriteren;      PRM_subcat[prmognt82]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm82]                = CAT_Prioriteren;      PRM_subcat[prmnofm82]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov82]               = CAT_Prioriteren;      PRM_subcat[prmmgcov82]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov82]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov82]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg82]               = CAT_Prioriteren;      PRM_subcat[prmohpmg82]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgt84]                = CAT_Prioriteren;      PRM_subcat[prmpmgt84]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmognt84]                = CAT_Prioriteren;      PRM_subcat[prmognt84]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmnofm84]                = CAT_Prioriteren;      PRM_subcat[prmnofm84]                   = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmmgcov84]               = CAT_Prioriteren;      PRM_subcat[prmmgcov84]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpmgcov84]              = CAT_Prioriteren;      PRM_subcat[prmpmgcov84]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmohpmg84]               = CAT_Prioriteren;      PRM_subcat[prmohpmg84]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto02karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto02karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg02karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg02karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg02karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg02karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx02karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx02karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb02karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb02karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat02karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat02karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio02karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio02karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto03karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto03karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg03karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg03karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg03karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg03karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx03karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx03karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb03karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb03karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat03karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat03karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio03karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio03karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto05karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto05karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg05karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg05karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg05karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg05karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx05karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx05karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb05karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb05karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat05karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat05karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio05karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio05karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto08karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto08karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg08karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg08karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg08karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg08karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx08karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx08karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb08karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb08karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat08karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat08karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio08karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio08karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto09karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto09karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg09karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg09karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg09karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg09karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx09karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx09karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb09karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb09karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat09karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat09karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio09karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio09karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto11karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto11karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg11karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg11karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg11karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg11karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx11karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx11karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb11karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb11karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat11karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat11karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio11karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio11karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsblok22fietsfiets]   = CAT_Prioriteren;      PRM_subcat[prmftsblok22fietsfiets]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsmaxpercyc22fietsfiets] = CAT_Prioriteren;      PRM_subcat[prmftsmaxpercyc22fietsfiets] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsminwt22fietsfiets]  = CAT_Prioriteren;      PRM_subcat[prmftsminwt22fietsfiets]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto22fiets]            = CAT_Prioriteren;      PRM_subcat[prmrto22fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg22fiets]           = CAT_Prioriteren;      PRM_subcat[prmrtbg22fiets]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg22fiets]            = CAT_Prioriteren;      PRM_subcat[prmrtg22fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx22fiets]            = CAT_Prioriteren;      PRM_subcat[prmomx22fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb22fiets]        = CAT_Prioriteren;      PRM_subcat[prmupinagb22fiets]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio22fiets]           = CAT_Prioriteren;      PRM_subcat[prmprio22fiets]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsblok28fietsfiets]   = CAT_Prioriteren;      PRM_subcat[prmftsblok28fietsfiets]      = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsmaxpercyc28fietsfiets] = CAT_Prioriteren;      PRM_subcat[prmftsmaxpercyc28fietsfiets] = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmftsminwt28fietsfiets]  = CAT_Prioriteren;      PRM_subcat[prmftsminwt28fietsfiets]     = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto28fiets]            = CAT_Prioriteren;      PRM_subcat[prmrto28fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg28fiets]           = CAT_Prioriteren;      PRM_subcat[prmrtbg28fiets]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg28fiets]            = CAT_Prioriteren;      PRM_subcat[prmrtg28fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx28fiets]            = CAT_Prioriteren;      PRM_subcat[prmomx28fiets]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb28fiets]        = CAT_Prioriteren;      PRM_subcat[prmupinagb28fiets]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio28fiets]           = CAT_Prioriteren;      PRM_subcat[prmprio28fiets]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto61karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto61karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg61karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg61karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg61karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg61karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx61karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx61karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb61karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb61karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat61karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat61karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio61karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio61karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto62karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto62karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg62karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg62karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg62karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg62karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx62karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx62karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb62karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb62karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat62karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat62karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio62karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio62karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto67karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto67karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg67karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg67karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg67karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg67karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx67karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx67karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb67karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb67karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat67karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat67karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio67karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio67karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrto68karbus]           = CAT_Prioriteren;      PRM_subcat[prmrto68karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbg68karbus]          = CAT_Prioriteren;      PRM_subcat[prmrtbg68karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtg68karbus]           = CAT_Prioriteren;      PRM_subcat[prmrtg68karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmomx68karbus]           = CAT_Prioriteren;      PRM_subcat[prmomx68karbus]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagb68karbus]       = CAT_Prioriteren;      PRM_subcat[prmupinagb68karbus]          = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmvtgcat68karbus]        = CAT_Prioriteren;      PRM_subcat[prmvtgcat68karbus]           = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmprio68karbus]          = CAT_Prioriteren;      PRM_subcat[prmprio68karbus]             = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd02]              = CAT_Prioriteren;      PRM_subcat[prmpriohd02]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd02]               = CAT_Prioriteren;      PRM_subcat[prmrtohd02]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd02]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd02]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd02]               = CAT_Prioriteren;      PRM_subcat[prmrtghd02]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd02]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd02]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd03]              = CAT_Prioriteren;      PRM_subcat[prmpriohd03]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd03]               = CAT_Prioriteren;      PRM_subcat[prmrtohd03]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd03]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd03]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd03]               = CAT_Prioriteren;      PRM_subcat[prmrtghd03]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd03]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd03]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd05]              = CAT_Prioriteren;      PRM_subcat[prmpriohd05]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd05]               = CAT_Prioriteren;      PRM_subcat[prmrtohd05]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd05]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd05]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd05]               = CAT_Prioriteren;      PRM_subcat[prmrtghd05]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd05]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd05]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd08]              = CAT_Prioriteren;      PRM_subcat[prmpriohd08]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd08]               = CAT_Prioriteren;      PRM_subcat[prmrtohd08]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd08]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd08]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd08]               = CAT_Prioriteren;      PRM_subcat[prmrtghd08]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd08]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd08]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd09]              = CAT_Prioriteren;      PRM_subcat[prmpriohd09]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd09]               = CAT_Prioriteren;      PRM_subcat[prmrtohd09]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd09]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd09]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd09]               = CAT_Prioriteren;      PRM_subcat[prmrtghd09]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd09]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd09]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd11]              = CAT_Prioriteren;      PRM_subcat[prmpriohd11]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd11]               = CAT_Prioriteren;      PRM_subcat[prmrtohd11]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd11]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd11]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd11]               = CAT_Prioriteren;      PRM_subcat[prmrtghd11]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd11]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd11]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd61]              = CAT_Prioriteren;      PRM_subcat[prmpriohd61]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd61]               = CAT_Prioriteren;      PRM_subcat[prmrtohd61]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd61]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd61]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd61]               = CAT_Prioriteren;      PRM_subcat[prmrtghd61]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd61]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd61]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd62]              = CAT_Prioriteren;      PRM_subcat[prmpriohd62]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd62]               = CAT_Prioriteren;      PRM_subcat[prmrtohd62]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd62]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd62]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd62]               = CAT_Prioriteren;      PRM_subcat[prmrtghd62]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd62]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd62]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd67]              = CAT_Prioriteren;      PRM_subcat[prmpriohd67]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd67]               = CAT_Prioriteren;      PRM_subcat[prmrtohd67]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd67]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd67]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd67]               = CAT_Prioriteren;      PRM_subcat[prmrtghd67]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd67]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd67]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpriohd68]              = CAT_Prioriteren;      PRM_subcat[prmpriohd68]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtohd68]               = CAT_Prioriteren;      PRM_subcat[prmrtohd68]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtbghd68]              = CAT_Prioriteren;      PRM_subcat[prmrtbghd68]                 = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmrtghd68]               = CAT_Prioriteren;      PRM_subcat[prmrtghd68]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmupinagbhd68]           = CAT_Prioriteren;      PRM_subcat[prmupinagbhd68]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg02]               = CAT_Prioriteren;      PRM_subcat[prmkarsg02]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg03]               = CAT_Prioriteren;      PRM_subcat[prmkarsg03]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg05]               = CAT_Prioriteren;      PRM_subcat[prmkarsg05]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg08]               = CAT_Prioriteren;      PRM_subcat[prmkarsg08]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg09]               = CAT_Prioriteren;      PRM_subcat[prmkarsg09]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg11]               = CAT_Prioriteren;      PRM_subcat[prmkarsg11]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg61]               = CAT_Prioriteren;      PRM_subcat[prmkarsg61]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg62]               = CAT_Prioriteren;      PRM_subcat[prmkarsg62]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg67]               = CAT_Prioriteren;      PRM_subcat[prmkarsg67]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsg68]               = CAT_Prioriteren;      PRM_subcat[prmkarsg68]                  = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd02]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd02]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd03]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd03]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd05]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd05]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd08]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd08]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd09]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd09]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd11]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd11]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd61]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd61]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd62]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd62]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd67]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd67]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmkarsghd68]             = CAT_Prioriteren;      PRM_subcat[prmkarsghd68]                = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmpelgrensKOP02]         = CAT_Basisfuncties;    PRM_subcat[prmpelgrensKOP02]            = SUBCAT_HardeKoppeling;
    PRM_cat[prmvg1_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg1_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg1_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg2_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg2_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg3_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg3_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg4_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg4_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg5_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg5_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg6_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg6_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_02]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_02]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_03]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_03]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_05]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_05]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_08]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_08]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_09]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_09]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_11]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_11]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_21]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_21]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_22]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_22]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_24]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_24]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_26]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_26]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_28]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_28]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_61]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_61]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_62]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_62]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_67]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_67]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_68]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_68]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_81]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_81]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_82]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_82]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmvg7_84]                = CAT_Basisfuncties;    PRM_subcat[prmvg7_84]                   = SUBCAT_MaximumGroentijden;
    PRM_cat[prmptp123456iks01]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks01]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks02]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks02]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks03]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks03]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks04]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks04]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks05]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks05]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks06]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks06]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks07]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks07]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks08]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks08]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks09]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks09]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks10]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks10]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks11]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks11]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks12]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks12]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks13]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks13]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks14]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks14]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks15]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks15]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456iks16]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456iks16]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks01]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks01]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks02]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks02]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks03]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks03]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks04]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks04]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks05]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks05]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks06]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks06]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks07]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks07]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks08]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks08]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks09]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks09]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks10]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks10]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks11]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks11]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks12]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks12]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks13]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks13]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks14]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks14]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks15]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks15]           = SUBCAT_Loggen;
    PRM_cat[prmptp123456uks16]        = CAT_Basisfuncties;    PRM_subcat[prmptp123456uks16]           = SUBCAT_Loggen;
    PRM_cat[prmptp_ptp123456oke]      = CAT_Basisfuncties;    PRM_subcat[prmptp_ptp123456oke]         = SUBCAT_Loggen;
    PRM_cat[prmptp_ptp123456err]      = CAT_Basisfuncties;    PRM_subcat[prmptp_ptp123456err]         = SUBCAT_Loggen;
    PRM_cat[prmptp_ptp123456err0]     = CAT_Basisfuncties;    PRM_subcat[prmptp_ptp123456err0]        = SUBCAT_Loggen;
    PRM_cat[prmptp_ptp123456err1]     = CAT_Basisfuncties;    PRM_subcat[prmptp_ptp123456err1]        = SUBCAT_Loggen;
    PRM_cat[prmptp_ptp123456err2]     = CAT_Basisfuncties;    PRM_subcat[prmptp_ptp123456err2]        = SUBCAT_Loggen;
    PRM_cat[prmsrcptp123456]          = CAT_Basisfuncties;    PRM_subcat[prmsrcptp123456]             = SUBCAT_Loggen;
    PRM_cat[prmdestptp123456]         = CAT_Basisfuncties;    PRM_subcat[prmdestptp123456]            = SUBCAT_Loggen;
    PRM_cat[prmtmsgwptp123456]        = CAT_Basisfuncties;    PRM_subcat[prmtmsgwptp123456]           = SUBCAT_Loggen;
    PRM_cat[prmtmsgsptp123456]        = CAT_Basisfuncties;    PRM_subcat[prmtmsgsptp123456]           = SUBCAT_Loggen;
    PRM_cat[prmtmsgaptp123456]        = CAT_Basisfuncties;    PRM_subcat[prmtmsgaptp123456]           = SUBCAT_Loggen;
    PRM_cat[prmcmsgptp123456]         = CAT_Basisfuncties;    PRM_subcat[prmcmsgptp123456]            = SUBCAT_Loggen;
    PRM_cat[prmmkrgd24_3]             = CAT_Basisfuncties;    PRM_subcat[prmmkrgd24_3]                = SUBCAT_Verlengen;
    PRM_cat[prmrgv]                   = CAT_Signaalgroep;     PRM_subcat[prmrgv]                      = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmin_tcyclus]           = CAT_Signaalgroep;     PRM_subcat[prmmin_tcyclus]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmax_tcyclus]           = CAT_Signaalgroep;     PRM_subcat[prmmax_tcyclus]              = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_omhoog]            = CAT_Signaalgroep;     PRM_subcat[prmtvg_omhoog]               = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_omlaag]            = CAT_Signaalgroep;     PRM_subcat[prmtvg_omlaag]               = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_verschil]          = CAT_Signaalgroep;     PRM_subcat[prmtvg_verschil]             = SUBCAT_MaximumGroentijden;
    PRM_cat[prmtvg_npr_omlaag]        = CAT_Signaalgroep;     PRM_subcat[prmtvg_npr_omlaag]           = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_02]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_02]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_02]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_02]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_03]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_03]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_03]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_03]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_05]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_05]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_05]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_05]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_08]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_08]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_08]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_08]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_11]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_11]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_11]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_11]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_22]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_22]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_22]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_22]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmintvg_28]             = CAT_Signaalgroep;     PRM_subcat[prmmintvg_28]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmmaxtvg_28]             = CAT_Signaalgroep;     PRM_subcat[prmmaxtvg_28]                = SUBCAT_MaximumGroentijden;
    PRM_cat[prmsiexgrperc31]          = CAT_SpecialeIngrepen; PRM_subcat[prmsiexgrperc31]             = SUBCAT_Verlengen;
    PRM_cat[prmsiexgrperc32]          = CAT_SpecialeIngrepen; PRM_subcat[prmsiexgrperc32]             = SUBCAT_Verlengen;
    PRM_cat[prmsiexgrperc33]          = CAT_SpecialeIngrepen; PRM_subcat[prmsiexgrperc33]             = SUBCAT_Verlengen;
    PRM_cat[prmsiexgrperc34]          = CAT_SpecialeIngrepen; PRM_subcat[prmsiexgrperc34]             = SUBCAT_Verlengen;
    PRM_cat[prmmaxtvgvlog]            = CAT_TestenLoggen;     PRM_subcat[prmmaxtvgvlog]               = SUBCAT_Loggen;
    PRM_cat[prmmaxtfbvlog]            = CAT_TestenLoggen;     PRM_subcat[prmmaxtfbvlog]               = SUBCAT_Loggen;
    PRM_cat[prmmlfpr02]               = CAT_Module;           PRM_subcat[prmmlfpr02]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr03]               = CAT_Module;           PRM_subcat[prmmlfpr03]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr05]               = CAT_Module;           PRM_subcat[prmmlfpr05]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr08]               = CAT_Module;           PRM_subcat[prmmlfpr08]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr09]               = CAT_Module;           PRM_subcat[prmmlfpr09]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr11]               = CAT_Module;           PRM_subcat[prmmlfpr11]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr21]               = CAT_Module;           PRM_subcat[prmmlfpr21]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr22]               = CAT_Module;           PRM_subcat[prmmlfpr22]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr24]               = CAT_Module;           PRM_subcat[prmmlfpr24]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr26]               = CAT_Module;           PRM_subcat[prmmlfpr26]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr28]               = CAT_Module;           PRM_subcat[prmmlfpr28]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr31]               = CAT_Module;           PRM_subcat[prmmlfpr31]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr32]               = CAT_Module;           PRM_subcat[prmmlfpr32]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr33]               = CAT_Module;           PRM_subcat[prmmlfpr33]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr34]               = CAT_Module;           PRM_subcat[prmmlfpr34]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr38]               = CAT_Module;           PRM_subcat[prmmlfpr38]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr61]               = CAT_Module;           PRM_subcat[prmmlfpr61]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr62]               = CAT_Module;           PRM_subcat[prmmlfpr62]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr67]               = CAT_Module;           PRM_subcat[prmmlfpr67]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr68]               = CAT_Module;           PRM_subcat[prmmlfpr68]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr81]               = CAT_Module;           PRM_subcat[prmmlfpr81]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr82]               = CAT_Module;           PRM_subcat[prmmlfpr82]                  = SUBCAT_Plantijden;
    PRM_cat[prmmlfpr84]               = CAT_Module;           PRM_subcat[prmmlfpr84]                  = SUBCAT_Plantijden;
    PRM_cat[prmaltg02]                = CAT_Module;           PRM_subcat[prmaltg02]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp02]                = CAT_Module;           PRM_subcat[prmaltp02]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg03]                = CAT_Module;           PRM_subcat[prmaltg03]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp03]                = CAT_Module;           PRM_subcat[prmaltp03]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg05]                = CAT_Module;           PRM_subcat[prmaltg05]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp05]                = CAT_Module;           PRM_subcat[prmaltp05]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg08]                = CAT_Module;           PRM_subcat[prmaltg08]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp08]                = CAT_Module;           PRM_subcat[prmaltp08]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg09]                = CAT_Module;           PRM_subcat[prmaltg09]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp09]                = CAT_Module;           PRM_subcat[prmaltp09]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg11]                = CAT_Module;           PRM_subcat[prmaltg11]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp11]                = CAT_Module;           PRM_subcat[prmaltp11]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg21]                = CAT_Module;           PRM_subcat[prmaltg21]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp21]                = CAT_Module;           PRM_subcat[prmaltp21]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg22]                = CAT_Module;           PRM_subcat[prmaltg22]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp22]                = CAT_Module;           PRM_subcat[prmaltp22]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg24]                = CAT_Module;           PRM_subcat[prmaltg24]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp24]                = CAT_Module;           PRM_subcat[prmaltp24]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg26]                = CAT_Module;           PRM_subcat[prmaltg26]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp26]                = CAT_Module;           PRM_subcat[prmaltp26]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg28]                = CAT_Module;           PRM_subcat[prmaltg28]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp28]                = CAT_Module;           PRM_subcat[prmaltp28]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg31]                = CAT_Module;           PRM_subcat[prmaltg31]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp31]                = CAT_Module;           PRM_subcat[prmaltp31]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg32]                = CAT_Module;           PRM_subcat[prmaltg32]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp32]                = CAT_Module;           PRM_subcat[prmaltp32]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg33]                = CAT_Module;           PRM_subcat[prmaltg33]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp33]                = CAT_Module;           PRM_subcat[prmaltp33]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg34]                = CAT_Module;           PRM_subcat[prmaltg34]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp34]                = CAT_Module;           PRM_subcat[prmaltp34]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg38]                = CAT_Module;           PRM_subcat[prmaltg38]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp38]                = CAT_Module;           PRM_subcat[prmaltp38]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg61]                = CAT_Module;           PRM_subcat[prmaltg61]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp61]                = CAT_Module;           PRM_subcat[prmaltp61]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg62]                = CAT_Module;           PRM_subcat[prmaltg62]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp62]                = CAT_Module;           PRM_subcat[prmaltp62]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg67]                = CAT_Module;           PRM_subcat[prmaltg67]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp67]                = CAT_Module;           PRM_subcat[prmaltp67]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg68]                = CAT_Module;           PRM_subcat[prmaltg68]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp68]                = CAT_Module;           PRM_subcat[prmaltp68]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg81]                = CAT_Module;           PRM_subcat[prmaltg81]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp81]                = CAT_Module;           PRM_subcat[prmaltp81]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg82]                = CAT_Module;           PRM_subcat[prmaltg82]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp82]                = CAT_Module;           PRM_subcat[prmaltp82]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltg84]                = CAT_Module;           PRM_subcat[prmaltg84]                   = SUBCAT_Plantijden;
    PRM_cat[prmaltp84]                = CAT_Module;           PRM_subcat[prmaltp84]                   = SUBCAT_Plantijden;
    PRM_cat[prmwg02]                  = CAT_Basisfuncties;    PRM_subcat[prmwg02]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg03]                  = CAT_Basisfuncties;    PRM_subcat[prmwg03]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg05]                  = CAT_Basisfuncties;    PRM_subcat[prmwg05]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg08]                  = CAT_Basisfuncties;    PRM_subcat[prmwg08]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg09]                  = CAT_Basisfuncties;    PRM_subcat[prmwg09]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg11]                  = CAT_Basisfuncties;    PRM_subcat[prmwg11]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg21]                  = CAT_Basisfuncties;    PRM_subcat[prmwg21]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg22]                  = CAT_Basisfuncties;    PRM_subcat[prmwg22]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg24]                  = CAT_Basisfuncties;    PRM_subcat[prmwg24]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg26]                  = CAT_Basisfuncties;    PRM_subcat[prmwg26]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg28]                  = CAT_Basisfuncties;    PRM_subcat[prmwg28]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg31]                  = CAT_Basisfuncties;    PRM_subcat[prmwg31]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg32]                  = CAT_Basisfuncties;    PRM_subcat[prmwg32]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg33]                  = CAT_Basisfuncties;    PRM_subcat[prmwg33]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg34]                  = CAT_Basisfuncties;    PRM_subcat[prmwg34]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg38]                  = CAT_Basisfuncties;    PRM_subcat[prmwg38]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg61]                  = CAT_Basisfuncties;    PRM_subcat[prmwg61]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg62]                  = CAT_Basisfuncties;    PRM_subcat[prmwg62]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg67]                  = CAT_Basisfuncties;    PRM_subcat[prmwg67]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg68]                  = CAT_Basisfuncties;    PRM_subcat[prmwg68]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg81]                  = CAT_Basisfuncties;    PRM_subcat[prmwg81]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg82]                  = CAT_Basisfuncties;    PRM_subcat[prmwg82]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmwg84]                  = CAT_Basisfuncties;    PRM_subcat[prmwg84]                     = SUBCAT_Wachtgroen;
    PRM_cat[prmminwtv]                = CAT_Informeren;       PRM_subcat[prmminwtv]                   = SUBCAT_Wachttijdvoorspeller;
    PRM_cat[prmwtvnhaltmax]           = CAT_Informeren;       PRM_subcat[prmwtvnhaltmax]              = SUBCAT_Wachttijdvoorspeller;
    PRM_cat[prmwtvnhaltmin]           = CAT_Informeren;       PRM_subcat[prmwtvnhaltmin]              = SUBCAT_Wachttijdvoorspeller;
    PRM_cat[prmstarprogdef]           = CAT_SpecialeIngrepen; PRM_subcat[prmstarprogdef]              = SUBCAT_Plantijden;
    PRM_cat[prmstarprogDaluren_weekend] = CAT_SpecialeIngrepen; PRM_subcat[prmstarprogDaluren_weekend]  = SUBCAT_Plantijden;
    PRM_cat[prmstarprogDaluren_werkdag] = CAT_SpecialeIngrepen; PRM_subcat[prmstarprogDaluren_werkdag]  = SUBCAT_Plantijden;
    PRM_cat[prmstarprogOerdag_werkdag] = CAT_SpecialeIngrepen; PRM_subcat[prmstarprogOerdag_werkdag]   = SUBCAT_Plantijden;
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    PRM_cat[prmtestdsivert]           = CAT_Prioriteren;      PRM_subcat[prmtestdsivert]              = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmtestdsilyn]            = CAT_Prioriteren;      PRM_subcat[prmtestdsilyn]               = SUBCAT_OpenbaarVervoer;
    PRM_cat[prmtestdsicat]            = CAT_Prioriteren;      PRM_subcat[prmtestdsicat]               = SUBCAT_OpenbaarVervoer;
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
    LOGTYPE[LOGTYPE_FC] = 1023;
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
    MONTYPE[MONTYPE_FC] = 1023;
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
    IS_type[dopt02] = DSI_type;
    IS_type[dopt05] = DSI_type;
    IS_type[dopt08] = DSI_type;
    IS_type[dopt11] = DSI_type;

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

    /* Multivalente uitgangen */
#if !defined NO_VLOG_300
    US_type[usmlpl] = USM_type;
    US_type[ustxtimer] = USM_type;
    US_type[uswtv24] = USM_type;
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

#ifdef SUMO
    /* SUMO KOPPELING */
    /* ============== */
    sprintf_s(SUMODetectors[d02_1a].SumoNamen[0], 32, "%s", "02_1a");
    sprintf_s(SUMODetectors[d02_1b].SumoNamen[0], 32, "%s", "02_1b");
    sprintf_s(SUMODetectors[d02_2a].SumoNamen[0], 32, "%s", "02_2a");
    sprintf_s(SUMODetectors[d02_2b].SumoNamen[0], 32, "%s", "02_2b");
    sprintf_s(SUMODetectors[d02_3a].SumoNamen[0], 32, "%s", "02_3a");
    sprintf_s(SUMODetectors[d02_3b].SumoNamen[0], 32, "%s", "02_3b");
    sprintf_s(SUMODetectors[d02_4a].SumoNamen[0], 32, "%s", "02_4a");
    sprintf_s(SUMODetectors[d02_4b].SumoNamen[0], 32, "%s", "02_4b");
    sprintf_s(SUMODetectors[d03_1].SumoNamen[0], 32, "%s", "03_1");
    sprintf_s(SUMODetectors[d03_2].SumoNamen[0], 32, "%s", "03_2");
    sprintf_s(SUMODetectors[d05_1].SumoNamen[0], 32, "%s", "05_1");
    sprintf_s(SUMODetectors[d05_2].SumoNamen[0], 32, "%s", "05_2");
    sprintf_s(SUMODetectors[d08_1a].SumoNamen[0], 32, "%s", "08_1a");
    sprintf_s(SUMODetectors[d08_1b].SumoNamen[0], 32, "%s", "08_1b");
    sprintf_s(SUMODetectors[d08_2a].SumoNamen[0], 32, "%s", "08_2a");
    sprintf_s(SUMODetectors[d08_2b].SumoNamen[0], 32, "%s", "08_2b");
    sprintf_s(SUMODetectors[d08_3a].SumoNamen[0], 32, "%s", "08_3a");
    sprintf_s(SUMODetectors[d08_3b].SumoNamen[0], 32, "%s", "08_3b");
    sprintf_s(SUMODetectors[d08_4a].SumoNamen[0], 32, "%s", "08_4a");
    sprintf_s(SUMODetectors[d08_4b].SumoNamen[0], 32, "%s", "08_4b");
    sprintf_s(SUMODetectors[d09_1].SumoNamen[0], 32, "%s", "091");
    sprintf_s(SUMODetectors[d09_2].SumoNamen[0], 32, "%s", "092");
    sprintf_s(SUMODetectors[d09_3].SumoNamen[0], 32, "%s", "093");
    sprintf_s(SUMODetectors[d11_1].SumoNamen[0], 32, "%s", "11_1");
    sprintf_s(SUMODetectors[d11_2].SumoNamen[0], 32, "%s", "11_2");
    sprintf_s(SUMODetectors[d11_3].SumoNamen[0], 32, "%s", "11_3");
    sprintf_s(SUMODetectors[d11_4].SumoNamen[0], 32, "%s", "11_4");
    sprintf_s(SUMODetectors[d211].SumoNamen[0], 32, "%s", "211");
    sprintf_s(SUMODetectors[d22_1].SumoNamen[0], 32, "%s", "22_1");
    sprintf_s(SUMODetectors[d24_1].SumoNamen[0], 32, "%s", "24_1");
    sprintf_s(SUMODetectors[d24_2].SumoNamen[0], 32, "%s", "24_2");
    sprintf_s(SUMODetectors[d24_3].SumoNamen[0], 32, "%s", "24_3");
    sprintf_s(SUMODetectors[d261].SumoNamen[0], 32, "%s", "261");
    sprintf_s(SUMODetectors[d28_1].SumoNamen[0], 32, "%s", "28_1");
    sprintf_s(SUMODetectors[d28_2].SumoNamen[0], 32, "%s", "28_2");
    sprintf_s(SUMODetectors[d61_1].SumoNamen[0], 32, "%s", "61_1");
    sprintf_s(SUMODetectors[d61_2].SumoNamen[0], 32, "%s", "61_2");
    sprintf_s(SUMODetectors[d62_1a].SumoNamen[0], 32, "%s", "62_1a");
    sprintf_s(SUMODetectors[d62_1b].SumoNamen[0], 32, "%s", "62_1b");
    sprintf_s(SUMODetectors[d62_2a].SumoNamen[0], 32, "%s", "62_2a");
    sprintf_s(SUMODetectors[d62_2b].SumoNamen[0], 32, "%s", "62_2b");
    sprintf_s(SUMODetectors[d67_1].SumoNamen[0], 32, "%s", "67_1");
    sprintf_s(SUMODetectors[d67_2].SumoNamen[0], 32, "%s", "67_2");
    sprintf_s(SUMODetectors[dopt11].SumoNamen[0], 32, "%s", "004");
    sprintf_s(SUMODetectors[dopt08].SumoNamen[0], 32, "%s", "003");
    sprintf_s(SUMODetectors[dopt05].SumoNamen[0], 32, "%s", "001");
    sprintf_s(SUMODetectors[dopt02].SumoNamen[0], 32, "%s", "002");
    sprintf_s(SUMODetectors[dk82].SumoNamen[0], 32, "%s", "822");
    sprintf_s(SUMODetectors[dk81].SumoNamen[0], 32, "%s", "812");
    sprintf_s(SUMODetectors[dk38b].SumoNamen[0], 32, "%s", "38b");
    sprintf_s(SUMODetectors[dk38a].SumoNamen[0], 32, "%s", "38a");
    sprintf_s(SUMODetectors[dk34b].SumoNamen[0], 32, "%s", "34b");
    sprintf_s(SUMODetectors[dk34a].SumoNamen[0], 32, "%s", "34a");
    sprintf_s(SUMODetectors[dk33b].SumoNamen[0], 32, "%s", "33b");
    sprintf_s(SUMODetectors[dk33a].SumoNamen[0], 32, "%s", "33a");
    sprintf_s(SUMODetectors[dk32b].SumoNamen[0], 32, "%s", "32b");
    sprintf_s(SUMODetectors[dk32a].SumoNamen[0], 32, "%s", "32a");
    sprintf_s(SUMODetectors[dk31b].SumoNamen[0], 32, "%s", "31b");
    sprintf_s(SUMODetectors[dk31a].SumoNamen[0], 32, "%s", "31a");
    sprintf_s(SUMODetectors[dk26].SumoNamen[0], 32, "%s", "262");
    sprintf_s(SUMODetectors[dk21].SumoNamen[0], 32, "%s", "212");
    sprintf_s(SUMODetectors[ddummykaruit68karbus].SumoNamen[0], 32, "%s", "dummykaruit68karbus");
    sprintf_s(SUMODetectors[ddummykaruit67karbus].SumoNamen[0], 32, "%s", "dummykaruit67karbus");
    sprintf_s(SUMODetectors[ddummykaruit62karbus].SumoNamen[0], 32, "%s", "dummykaruit62karbus");
    sprintf_s(SUMODetectors[ddummykaruit61karbus].SumoNamen[0], 32, "%s", "dummykaruit61karbus");
    sprintf_s(SUMODetectors[ddummykaruit11karbus].SumoNamen[0], 32, "%s", "dummykaruit11karbus");
    sprintf_s(SUMODetectors[ddummykaruit09karbus].SumoNamen[0], 32, "%s", "dummykaruit09karbus");
    sprintf_s(SUMODetectors[ddummykaruit08karbus].SumoNamen[0], 32, "%s", "dummykaruit08karbus");
    sprintf_s(SUMODetectors[ddummykaruit05karbus].SumoNamen[0], 32, "%s", "dummykaruit05karbus");
    sprintf_s(SUMODetectors[ddummykaruit03karbus].SumoNamen[0], 32, "%s", "dummykaruit03karbus");
    sprintf_s(SUMODetectors[ddummykaruit02karbus].SumoNamen[0], 32, "%s", "dummykaruit02karbus");
    sprintf_s(SUMODetectors[ddummykarin68karbus].SumoNamen[0], 32, "%s", "dummykarin68karbus");
    sprintf_s(SUMODetectors[ddummykarin67karbus].SumoNamen[0], 32, "%s", "dummykarin67karbus");
    sprintf_s(SUMODetectors[ddummykarin62karbus].SumoNamen[0], 32, "%s", "dummykarin62karbus");
    sprintf_s(SUMODetectors[ddummykarin61karbus].SumoNamen[0], 32, "%s", "dummykarin61karbus");
    sprintf_s(SUMODetectors[ddummykarin11karbus].SumoNamen[0], 32, "%s", "dummykarin11karbus");
    sprintf_s(SUMODetectors[ddummykarin09karbus].SumoNamen[0], 32, "%s", "dummykarin09karbus");
    sprintf_s(SUMODetectors[ddummykarin08karbus].SumoNamen[0], 32, "%s", "dummykarin08karbus");
    sprintf_s(SUMODetectors[ddummykarin05karbus].SumoNamen[0], 32, "%s", "dummykarin05karbus");
    sprintf_s(SUMODetectors[ddummykarin03karbus].SumoNamen[0], 32, "%s", "dummykarin03karbus");
    sprintf_s(SUMODetectors[ddummykarin02karbus].SumoNamen[0], 32, "%s", "dummykarin02karbus");
    sprintf_s(SUMODetectors[ddummyhdkaruit02].SumoNamen[0], 32, "%s", "dummyhdkaruit02");
    sprintf_s(SUMODetectors[ddummyhdkarin02].SumoNamen[0], 32, "%s", "dummyhdkarin02");
    sprintf_s(SUMODetectors[d84_1].SumoNamen[0], 32, "%s", "84_1");
    sprintf_s(SUMODetectors[d82_1].SumoNamen[0], 32, "%s", "821");
    sprintf_s(SUMODetectors[d81_1].SumoNamen[0], 32, "%s", "811");
    sprintf_s(SUMODetectors[d68_9b].SumoNamen[0], 32, "%s", "682");
    sprintf_s(SUMODetectors[d68_9a].SumoNamen[0], 32, "%s", "681");
    sprintf_s(SUMODetectors[d68_2b].SumoNamen[0], 32, "%s", "68_2b");
    sprintf_s(SUMODetectors[d68_2a].SumoNamen[0], 32, "%s", "68_2a");
    sprintf_s(SUMODetectors[d68_1b].SumoNamen[0], 32, "%s", "68_1b");
    sprintf_s(SUMODetectors[d68_1a].SumoNamen[0], 32, "%s", "68_1a");
    for (isumo = 0; isumo < 44; ++isumo)
    {
        SUMOIds[isumo] = NG;
    }
    SUMOIds[11] = fc02;
    SUMOIds[12] = fc02;
    SUMOIds[13] = fc02;
    SUMOIds[14] = fc03;
    SUMOIds[1] = fc05;
    SUMOIds[2] = fc05;
    SUMOIds[3] = fc05;
    SUMOIds[4] = fc05;
    SUMOIds[17] = fc08;
    SUMOIds[18] = fc08;
    SUMOIds[19] = fc08;
    SUMOIds[20] = fc09;
    SUMOIds[23] = fc11;
    SUMOIds[24] = fc11;
    SUMOIds[25] = fc11;
    SUMOIds[26] = fc11;
    SUMOIds[99] = fc21;
    SUMOIds[15] = fc22;
    SUMOIds[5] = fc24;
    SUMOIds[6] = fc24;
    SUMOIds[21] = fc26;
    SUMOIds[22] = fc26;
    SUMOIds[27] = fc28;
    SUMOIds[28] = fc28;
    SUMOIds[36] = fc31;
    SUMOIds[37] = fc31;
    SUMOIds[38] = fc32;
    SUMOIds[39] = fc32;
    SUMOIds[42] = fc33;
    SUMOIds[43] = fc33;
    SUMOIds[40] = fc34;
    SUMOIds[41] = fc34;
    SUMOIds[32] = fc38;
    SUMOIds[33] = fc38;
    SUMOIds[29] = fc61;
    SUMOIds[30] = fc62;
    SUMOIds[31] = fc62;
    SUMOIds[7] = fc67;
    SUMOIds[8] = fc68;
    SUMOIds[9] = fc68;
    SUMOIds[99] = fc81;
    SUMOIds[99] = fc82;
    SUMOIds[0] = fc84;
#endif /* #ifdef SUMO */

    signaalplan_instellingen();

    #include "123456tab.add"
}

void signaalplan_instellingen(void)
{
    /* CYCLUSTIJDEN SIGNAALPLANNEN */
    /* =========================== */
    TX_max[PL1] = 70; /* dag */
    TX_max[PL2] = 97; /* ochtend */
    TX_max[PL3] = 121; /* avond 2x groen 38; inrijden 11 tov 22 mag eerder dan GK conflict; geeft foutmelding */

    /* IN/UITSCHAKELTIJDEN SIGNAALPLANNEN */
    /* ================================== */
    TPL_on[PL1] = 1; TPL_off[PL1] = 17; /* dag */
    TPL_on[PL2] = 1; TPL_off[PL2] = 27; /* ochtend */
    TPL_on[PL3] = 102; TPL_off[PL3] = 1; /* avond 2x groen 38; inrijden 11 tov 22 mag eerder dan GK conflict; geeft foutmelding */

    /* FASECYCLUSTIJDEN VAN DE SIGNAALPLANNEN */
    /* ====================================== */
    /* dag */
    SetPlanTijden(fc02, PL1,   0,   3,   0,  12,   0);
    SetPlanTijden(fc03, PL1,   0,  25,   0,  31,   0);
    SetPlanTijden(fc05, PL1,   0,  41,   0,  47,   0);
    SetPlanTijden(fc08, PL1,   0,   4,   0,  13,   0);
    SetPlanTijden(fc09, PL1,   0,  41,   0,  47,   0);
    SetPlanTijden(fc11, PL1,   0,  59,   0,  65,   0);
    SetPlanTijden(fc21, PL1,   0,  44,   0,  56,   0);
    SetPlanTijden(fc22, PL1,   0,  41,   0,  51,   0);
    SetPlanTijden(fc24, PL1,   0,  60,   0,   3,   0);
    SetPlanTijden(fc26, PL1,   0,  53,   0,  65,   0);
    SetPlanTijden(fc28, PL1,   0,  19,   0,  25,   0);
    SetPlanTijden(fc31, PL1,   0,  39,   0,  52,   0);
    SetPlanTijden(fc32, PL1,   0,  39,   0,  52,   0);
    SetPlanTijden(fc33, PL1,   0,  62,   0,   2,   0);
    SetPlanTijden(fc34, PL1,   0,  62,   0,   2,   0);
    SetPlanTijden(fc38, PL1,   0,  19,   0,  27,   0);
    SetPlanTijden(fc61, PL1,   0,  56,   0,  10,   0);
    SetPlanTijden(fc62, PL1,   0,   6,   0,  10,   0);
    SetPlanTijden(fc67, PL1,   0,  11,   0,  19,   0);
    SetPlanTijden(fc68, PL1,   0,  12,   0,  17,   0);
    SetPlanTijden(fc81, PL1,   0,  22,   0,  38,   0);
    SetPlanTijden(fc82, PL1,   0,  22,   0,  31,   0);
    SetPlanTijden(fc84, PL1,   0,  56,   0,   2,   0);

    /* ochtend */
    SetPlanTijden(fc02, PL2,  95,  97,  19,  24,  24);
    SetPlanTijden(fc03, PL2,   0,  34,   0,  48,   0);
    SetPlanTijden(fc05, PL2,   0,  56,   0,  71,   0);
    SetPlanTijden(fc08, PL2,   0,   4,  15,  19,   0);
    SetPlanTijden(fc09, PL2,   0,  45,   0,  65,   0);
    SetPlanTijden(fc11, PL2,   0,  75,   0,  92,   0);
    SetPlanTijden(fc21, PL2,   0,  52,   0,  80,   0);
    SetPlanTijden(fc22, PL2,   0,  52,   0,  75,   0);
    SetPlanTijden(fc24, PL2,   0,  77,   0,   3,   0);
    SetPlanTijden(fc26, PL2,   0,  73,   0,  93,   0);
    SetPlanTijden(fc28, PL2,   0,  23,   0,  36,   0);
    SetPlanTijden(fc31, PL2,   0,  56,   0,  69,   0);
    SetPlanTijden(fc32, PL2,   0,  56,   0,  69,   0);
    SetPlanTijden(fc33, PL2,   0,  79,   0,   3,   0);
    SetPlanTijden(fc34, PL2,   0,  79,   0,   3,   0);
    SetPlanTijden(fc38, PL2,   0,  25,   0,  33,   0);
    SetPlanTijden(fc61, PL2,   0,  74,   0,  16,   0);
    SetPlanTijden(fc62, PL2,   0,   3,   0,  30,   0);
    SetPlanTijden(fc67, PL2,   0,  12,   0,  28,   0);
    SetPlanTijden(fc68, PL2,   0,  79,   0,  26,   0);
    SetPlanTijden(fc81, PL2,   0,  31,   0,  53,   0);
    SetPlanTijden(fc82, PL2,   0,  31,   0,  46,   0);
    SetPlanTijden(fc84, PL2,   0,  80,   0,   3,   0);

    /* avond 2x groen 38; inrijden 11 tov 22 mag eerder dan GK conflict; geeft foutmelding */
    SetPlanTijden(fc02, PL3, 103, 103,  25,  30,  30);
    SetPlanTijden(fc03, PL3,   0,  40,   0,  55,   0);
    SetPlanTijden(fc05, PL3,   0,  63,   0,  78,   0);
    SetPlanTijden(fc08, PL3,   0, 106,  15,  25,  25);
    SetPlanTijden(fc09, PL3,   0,  51,   0,  69,   0);
    SetPlanTijden(fc11, PL3,   0,  79,   0,  96,   0);
    SetPlanTijden(fc21, PL3,   0,  59,   0,  87,   0);
    SetPlanTijden(fc22, PL3,   0,  59,   0,  82,   0);
    SetPlanTijden(fc24, PL3,   0,  86,   0,   3,   0);
    SetPlanTijden(fc26, PL3,   0,  74,   0,  99,   0);
    SetPlanTijden(fc28, PL3,   0,  29,   0,  42,   0);
    SetPlanTijden(fc31, PL3,   0,  63,   0,  76,   0);
    SetPlanTijden(fc32, PL3,   0,  63,   0,  76,   0);
    SetPlanTijden(fc33, PL3,   0,  86,   0,   3,   0);
    SetPlanTijden(fc34, PL3,   0,  86,   0,   3,   0);
    SetPlanTijden(fc38, PL3,   0,  31,   0,  39,   0);
    SetPlanTijden(fc61, PL3,   0,   4,   0,  22,   0);
    SetPlanTijden(fc62, PL3,   0, 106,   0,  42,   0);
    SetPlanTijden(fc67, PL3,   0,  12,   0,  34,   0);
    SetPlanTijden(fc68, PL3,   0,  86,   0,  32,   0);
    SetPlanTijden(fc81, PL3,   0,  37,   0,  60,   0);
    SetPlanTijden(fc82, PL3,   0,  37,   0,  54,   0);
    SetPlanTijden(fc84, PL3,   0,  87,   0,   3,   0);

}


void star_instellingen(void)
{
    /* STARRE PROGRAMMA INSTELLINGEN */
    /* ============================= */

    /* star01 */
    STAR_ctijd[STAR1] = 97;
    STAR_start1[STAR1][fc02] = 97; STAR_eind1[STAR1][fc02] = 24;
    STAR_start1[STAR1][fc03] = 34; STAR_eind1[STAR1][fc03] = 48;
    STAR_start1[STAR1][fc05] = 56; STAR_eind1[STAR1][fc05] = 71;
    STAR_start1[STAR1][fc08] = 4; STAR_eind1[STAR1][fc08] = 19;
    STAR_start1[STAR1][fc09] = 43; STAR_eind1[STAR1][fc09] = 65;
    STAR_start1[STAR1][fc11] = 75; STAR_eind1[STAR1][fc11] = 92;
    STAR_start1[STAR1][fc21] = 52; STAR_eind1[STAR1][fc21] = 79;
    STAR_start1[STAR1][fc22] = 52; STAR_eind1[STAR1][fc22] = 75;
    STAR_start1[STAR1][fc24] = 95; STAR_eind1[STAR1][fc24] = 3;
    STAR_start1[STAR1][fc26] = 73; STAR_eind1[STAR1][fc26] = 93;
    STAR_start1[STAR1][fc28] = 23; STAR_eind1[STAR1][fc28] = 36;
    STAR_start1[STAR1][fc31] = 56; STAR_eind1[STAR1][fc31] = 70;
    STAR_start1[STAR1][fc32] = 56; STAR_eind1[STAR1][fc32] = 70;
    STAR_start1[STAR1][fc33] = 79; STAR_eind1[STAR1][fc33] = 3;
    STAR_start1[STAR1][fc34] = 79; STAR_eind1[STAR1][fc34] = 3;
    STAR_start1[STAR1][fc38] = 25; STAR_eind1[STAR1][fc38] = 31;
    STAR_start1[STAR1][fc61] = 74; STAR_eind1[STAR1][fc61] = 16;
    STAR_start1[STAR1][fc62] = 3; STAR_eind1[STAR1][fc62] = 30;
    STAR_start1[STAR1][fc67] = 12; STAR_eind1[STAR1][fc67] = 28;
    STAR_start1[STAR1][fc68] = 79; STAR_eind1[STAR1][fc68] = 26;
    STAR_start1[STAR1][fc81] = 31; STAR_eind1[STAR1][fc81] = 53;
    STAR_start1[STAR1][fc82] = 31; STAR_eind1[STAR1][fc82] = 53;
    STAR_start1[STAR1][fc84] = 80; STAR_eind1[STAR1][fc84] = 3;

    /* star02 */
    STAR_ctijd[STAR2] = 60;
    STAR_start1[STAR2][fc02] = 2; STAR_eind1[STAR2][fc02] = 22;
    STAR_start1[STAR2][fc03] = 30; STAR_eind1[STAR2][fc03] = 40;
    STAR_start1[STAR2][fc05] = 45; STAR_eind1[STAR2][fc05] = 54;
    STAR_start1[STAR2][fc08] = 1; STAR_eind1[STAR2][fc08] = 22;
    STAR_start1[STAR2][fc09] = 31; STAR_eind1[STAR2][fc09] = 40;
    STAR_start1[STAR2][fc11] = 47; STAR_eind1[STAR2][fc11] = 55;
    STAR_start1[STAR2][fc21] = 43; STAR_eind1[STAR2][fc21] = 58;
    STAR_start1[STAR2][fc22] = 41; STAR_eind1[STAR2][fc22] = 54;
    STAR_start1[STAR2][fc24] = 57; STAR_eind1[STAR2][fc24] = 15;
    STAR_start1[STAR2][fc26] = 43; STAR_eind1[STAR2][fc26] = 56;
    STAR_start1[STAR2][fc28] = 58; STAR_eind1[STAR2][fc28] = 13;
    STAR_start1[STAR2][fc31] = 45; STAR_eind1[STAR2][fc31] = 51;
    STAR_start1[STAR2][fc32] = 41; STAR_eind1[STAR2][fc32] = 55;
    STAR_start1[STAR2][fc33] = 59; STAR_eind1[STAR2][fc33] = 15;
    STAR_start1[STAR2][fc34] = 56; STAR_eind1[STAR2][fc34] = 12;
    STAR_start1[STAR2][fc38] = 58; STAR_eind1[STAR2][fc38] = 4;
    STAR_start1[STAR2][fc61] = 18; STAR_eind1[STAR2][fc61] = 28;
    STAR_start1[STAR2][fc62] = 1; STAR_eind1[STAR2][fc62] = 27;
    STAR_start1[STAR2][fc67] = 18; STAR_eind1[STAR2][fc67] = 27;
    STAR_start1[STAR2][fc68] = 1; STAR_eind1[STAR2][fc68] = 27;
    STAR_start1[STAR2][fc81] = 30; STAR_eind1[STAR2][fc81] = 36;
    STAR_start1[STAR2][fc82] = 30; STAR_eind1[STAR2][fc82] = 42;
    STAR_start1[STAR2][fc84] = 60; STAR_eind1[STAR2][fc84] = 10;

}

