/* DEFINITIE VARIABELEN - PARAMETER-PARSER */
/* ======================================= */


/* (C) Copyright 1989-2023 by A.C.M. van Grinsven. All rights reserved.	*/


/* CCOL :  versie 12.0.0   */
/* FILE :  prsvar.c	   */
/* DATUM:  20-02-2023      */

/* DATUM:  30-10-2020      */
/* DATUM:  18-10-2020 - aanpassingen voor opvragen tijden van de detectie en fasecycli */
/* DATUM:  30-04-2020      */
/* DATUM:  11-04-2020 - instellen SWICO schakelaars in de testomgeving van CCOL */
/* DATUM:  28-03-2020 - RIS_PRM[] parameters voor RIS log protocol */
/* DATUM:  20-11-2019 - DIRIS verhoogt van 3 naar 7 */
/* DATUM:  17-04-2019 - RIS-displayparameters zijn toegevoegd en PRM maximum is verhoogd van 32000 naar 32767 */
/* DATUM:  14-12-2017 - Intergroentijden */



/* include file */
/* ============ */
   #include "sysdef.c"		/* definitie typen variabelen		            */
   #include "prsvar.h"		/* declaratie parametervariabelen	            */
   #include "cif.inc"	        /* declaratie C-interface CIF_PARM1[] - CIF_PARM4[] */


/* definieer macro's */
/* ================= */
   #if !TMMAX
      #define TMMAX  0
   #endif
   #if !CTMAX
      #define CTMAX  0
   #endif

   #if !SCHMAX
      #define SCHMAX  0
   #endif
   #if !PRMMAX
      #define PRMMAX  0
   #endif
   #if !DSMAX
      #define DSMAX  0
   #endif

#if !LOGTYPEMAX
   #define LOGTYPEMAX   0
   #define LOGPRMMAX    0
#endif

#if !MONTYPEMAX
   #define MONTYPEMAX   0
   #define MONPRMMAX    0
#endif

#if !RIS_PRMMAX
   #define RIS_PRMMAX   0
#endif



/* macro's t.b.v. status regelelementen - zie ook control.c */
/* ======================================================== */
   #define DP_STATUS   110      /* status detectie			*/
   #define IS_STATUS   120      /* status ingangselement		*/
   #define FC_STATUS   130	/* status fasecyclus			*/
   #define KF_STATUS   140	/* status fasecyclus			*/
   #define US_STATUS   150      /* status uitgangselement		*/
   #define HE_STATUS   160	/* status hulpelement			*/
   #define TM_STATUS   170	/* status tijdelement			*/
   #define CT_STATUS   180	/* status tellerelement			*/
   #define ME_STATUS   190	/* status geheugenelement 		*/
   #define ML_STATUS   300	/* status module ML			*/
   #define MLA_STATUS  310	/* status module MLA			*/
   #define MLB_STATUS  320	/* status module MLB			*/
   #define MLC_STATUS  330	/* status module MLC			*/
   #define MLD_STATUS  340	/* status module MLD			*/
#if DSMAX
   #define DS_STATUS   400      /* status detectie			*/
#endif
#if PLMAX
   #define PL_STATUS   500      /* status signaalplan			*/
#endif
#if PLTXSMAX
   #define PLTXS_STATUS 510     /* status signaalplan - synchronisatie  */
#endif
#if LWMAX
   #define LW_STATUS   600      /* status langstwachtende		*/
#endif


/* macro's t.b.v. offset in CIF_PARM1[]-buffer */
/* =========================================== */
#ifndef NO_TIGMAX
   #define TIG_OFFSET   0
#else
   #define TO_OFFSET   0
#endif
#ifndef CCOLPARM4
   #define TDB_OFFSET  FCMAX*FCMAX
#else
   #define TDB_OFFSET  0
#endif
   #define TDHA_OFFSET	TDB_OFFSET+DPMAX
   #define TDH_OFFSET	TDB_OFFSET+DPMAX
   #define TBG_OFFSET	TDH_OFFSET+DPMAX
   #define TOG_OFFSET	TBG_OFFSET+DPMAX
#ifndef NO_DDFLUTTER
   #define TFL_OFFSET	TOG_OFFSET+DPMAX
   #define CFL_OFFSET	TFL_OFFSET+DPMAX
   #define TRG_OFFSET	CFL_OFFSET+DPMAX
#else
   #define TRG_OFFSET	TOG_OFFSET+DPMAX
#endif
   #define TGG_OFFSET	TRG_OFFSET+FCMAX
   #define TGL_OFFSET	TGG_OFFSET+FCMAX
   #define TFG_OFFSET	TGL_OFFSET+FCMAX
   #define TVGA_OFFSET	TFG_OFFSET+FCMAX
   #define TVG_OFFSET	TFG_OFFSET+FCMAX
#ifndef NO_TMGLMAX
   #define TMGL_OFFSET	TVG_OFFSET+FCMAX
   #define T_OFFSET	TMGL_OFFSET+FCMAX
#else
   #define T_OFFSET	TVG_OFFSET+FCMAX
#endif
   #define C_OFFSET	T_OFFSET+TMMAX
   #define SCH_OFFSET	C_OFFSET+CTMAX
   #define PRM_OFFSET	SCH_OFFSET+SCHMAX
   #define TDSOG_OFFSET	PRM_OFFSET+PRMMAX

#if PLMAX
   #define TX_OFFSET     TDSOG_OFFSET+DSMAX
   #define TPLON_OFFSET  TX_OFFSET+PLMAX
   #define TPLOFF_OFFSET TPLON_OFFSET+PLMAX
   #define TXA_OFFSET    TPLOFF_OFFSET+PLMAX
   #define TXB_OFFSET    TXA_OFFSET+PLMAX*FCMAX
   #define TXC_OFFSET    TXB_OFFSET+PLMAX*FCMAX
   #define TXD_OFFSET    TXC_OFFSET+PLMAX*FCMAX
   #define TXE_OFFSET    TXD_OFFSET+PLMAX*FCMAX
#endif


 #if PLMAX
   #define LOGTYPE_OFFSET  TXE_OFFSET+PLMAX*FCMAX
   #define LOGPRM_OFFSET   LOGTYPE_OFFSET+LOGTYPEMAX
 #else
   #define LOGTYPE_OFFSET  TDSOG_OFFSET+DSMAX
   #define LOGPRM_OFFSET   LOGTYPE_OFFSET+LOGTYPEMAX
 #endif

 #if MONTYPEMAX
   #define MONTYPE_OFFSET  LOGPRM_OFFSET+LOGPRMMAX
   #define MONIS_OFFSET    MONTYPE_OFFSET+MONTYPEMAX
   #define MONUS_OFFSET    MONIS_OFFSET+ISMAX
   #define MONDS_OFFSET    MONUS_OFFSET+USMAX
   #define MONPRM_OFFSET   MONDS_OFFSET+DSMAX
 #else
   #define MONPRM_OFFSET   LOGPRM_OFFSET+LOGPRMMAX  
 #endif

 #if RIS_PRMMAX
   #define RIS_PRM_OFFSET  MONPRM_OFFSET+MONPRMMAX
 #endif


/* declaratie parameterbuffer */
/* ========================== */
   static mulv dummy;   /* dummy */

   const struct parmstruct PARMSTRUC[]={

#ifndef AUTOMAAT  /* voor het kunnen instellen van de SWICO schakelaars in de testomgeving van CCOL */
    {"SWC",   1, IS_code, ISMAX, 0, 0, 0, CIF_IS_SWICO, 0,
	   0,   2, &IS_deftype, 0},
#endif

#if RIS_DIPRMMAX
    {"DIRIS", 1, RIS_DIPRM_code, RIS_DIPRMMAX, 0, 0, RIS_DIPRM_PARM, RIS_DIPRM,  0,
	   0,   32767, &RIS_DIPRM_type, 0},
#endif

#if TELPUNTMAX
    {"TEL", 1, TELPUNT_code, TELPUNTMAX, 0,0,TELD_PARM, TELD,   0,
	   0,   1, &TELD_type, 0},
#endif
#ifndef NO_DELTA_DISPLAY
    {"DID", 1, D_code,  DPMAX, 0,0,DID_PARM, DID,   0,
	   0,   1, &DID_type, 0},
#if ISEMAX
    {"DIIS",1,IS_code,  ISMAX, 0,0,DIIS_PARM,DIIS,  0,
	   0,   1, &DIIS_type, 0},
#endif
#if DSMAX
    {"DIDS",1, DS_code, DSMAX, 0,0,DIDS_PARM,DIDS,  0,
	   0,   1, &DIDS_type,0},
#endif
    {"DIG", 1, FC_code, FCMAX, 0,0,DIG_PARM, DIG,   0,
	   0,  15, &DIG_type, 0},
#if USEMAX
    {"DIUS",1, US_code, USMAX, 0,0,DIUS_PARM,DIUS,  0,
	   0,   1, &DIUS_type, 0},
#endif
#if HEMAX
    {"DIH", 1, H_code, HEMAX,  0,0,DIH_PARM, DIH,  0,
	   0,   1, &DIH_type, 0},
#endif
#if TMMAX
    {"DIT", 1, T_code, TMMAX,  0,0,DIT_PARM, DIT,  0,
	   0,   1, &DIT_type, 0},
#endif
#if CTMAX
    {"DIC", 1, C_code, CTMAX,  0,0,DIC_PARM, DIC,  0,
	   0,   1, &DIC_type, 0},
#endif
#endif
    {"DP",  1, D_code,  DPMAX, 0,0,DP_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"DPE", 1, D_code,  DPMAX, 0,0,DP_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"DPM", 1, D_code,  DPMAX, 0,0,DP_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
  #if ISEMAX
    {"IS", 1, IS_code,  ISMAX, 0,0,IS_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
  #endif
    {"FC",  1, FC_code, FCMAX, 0,0,FC_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"FCE", 1, FC_code, FCMAX, 0,0,FC_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"FCA", 1, FC_code, FCMAX, 0,0,FC_STATUS+2,  &dummy,  0,  0,  0, &dummy,  0},
    {"FCB", 1, FC_code, FCMAX, 0,0,FC_STATUS+3,  &dummy,  0,  0,  0, &dummy,  0},
    {"FCM", 1, FC_code, FCMAX, 0,0,FC_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
    {"KF",  1, FC_code, FCMAX, 0,0,KF_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"KFE", 1, FC_code, FCMAX, 0,0,KF_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"KFM", 1, FC_code, FCMAX, 0,0,KF_STATUS+2,  &dummy,  0,  0,  0, &dummy,  0},
    {"CK",  1, FC_code, FCMAX, 0,0,KF_STATUS+3,  &dummy,  0,  0,  0, &dummy,  0},
    {"CKE", 1, FC_code, FCMAX, 0,0,KF_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
    {"CKM", 1, FC_code, FCMAX, 0,0,KF_STATUS+5,  &dummy,  0,  0,  0, &dummy,  0},

  #if USEMAX
    {"US",  1, US_code, USMAX, 0,0,US_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if HEMAX
    {"HE",  1, H_code,  HEMAX, 0,0,HE_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if TMMAX
    {"TM",  1, T_code,  TMMAX, 0,0,TM_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"TME", 1, T_code,  TMMAX, 0,0,TM_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"TMM", 1, T_code,  TMMAX, 0,0,TM_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if CTMAX
    {"CT",  1, C_code,  CTMAX, 0,0,CT_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"CTE", 1, C_code,  CTMAX, 0,0,CT_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"CTM", 1, C_code,  CTMAX, 0,0,CT_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MEMAX
    {"ME",  1, MM_code, MEMAX, 0,0,ME_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MLMAX
    {"ML",  0, FC_code, MLMAX, 0,0,ML_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"MLFC",1, FC_code, FCMAX, 0,0,ML_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MLAMAX
    {"MLA",  0,FC_code, MLAMAX,0,0,MLA_STATUS,   &dummy,  0,  0,  0, &dummy,  0},
    {"MLAFC",1,FC_code, FCMAX, 0,0,MLA_STATUS+1, &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MLBMAX
    {"MLB",  0,FC_code, MLBMAX,0,0,MLB_STATUS,   &dummy,  0,  0,  0, &dummy,  0},
    {"MLBFC",1,FC_code, FCMAX ,0,0,MLB_STATUS+1, &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MLCMAX
    {"MLC",  0,FC_code, MLCMAX,0,0,MLC_STATUS,   &dummy,  0,  0,  0, &dummy,  0},
    {"MLCFC",1,FC_code, FCMAX, 0,0,MLC_STATUS+1, &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if MLDMAX
    {"MLD",  0,FC_code, MLDMAX,0,0,MLD_STATUS,   &dummy,  0,  0,  0, &dummy,  0},
    {"MLDFC",1,FC_code, FCMAX, 0,0,MLD_STATUS+1, &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if DSMAX
    {"DS",  1, DS_code, DSMAX, 0,0,DS_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"DSE", 1, DS_code, DSMAX, 0,0,DS_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"DSM", 1, DS_code, DSMAX, 0,0,DS_STATUS+4,  &dummy,  0,  0,  0, &dummy,  0},
  #endif
  #if PLMAX
    {"PL",  0, PL_code, PLMAX, 0,0,PL_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
    {"PLFC",1, FC_code, FCMAX, 0,0,PL_STATUS+1,  &dummy,  0,  0,  0, &dummy,  0},
    {"PLTX",1, FC_code, FCMAX, 0,0,PL_STATUS+2,  &dummy,  0,  0,  0, &dummy,  0},
   #if PLTXSMAX
    {"PLTXS",0,PL_code,PLTXSMAX, 0,0,PLTXS_STATUS,&dummy, 0,  0,  0, &dummy,  0},
   #endif
  #endif
  #if LWMAX
    {"LWFC",1, FC_code, FCMAX, 0,0,LW_STATUS,    &dummy,  0,  0,  0, &dummy,  0},
  #endif

#ifndef NO_TIGMAX

#ifndef CCOLPARM4
    {"TIG",  2, FC_code, FCMAX, FC_code,FCMAX,1, CIF_PARM1, TIG_OFFSET,/* PARM1 */
	   0,  255, &TIG_type,  0},
#else
    {"TIG",  2, FC_code, FCMAX, FC_code,FCMAX,4, CIF_PARM4, TIG_OFFSET,/* PARM4 */
	   0,  255, &TIG_type,  0},
#endif

#else  /* NO_TIGMAX */

#ifndef CCOLPARM4
    {"TO",  2, FC_code, FCMAX, FC_code,FCMAX,1, CIF_PARM1, TO_OFFSET,/* PARM1 */
	   0,  255, &TO_type,  0},
#else
    {"TO",  2, FC_code, FCMAX, FC_code,FCMAX,4, CIF_PARM4, TO_OFFSET,/* PARM4 */
	   0,  255, &TO_type,  0},
#endif

#endif  /* NO_TIGMAX */

    {"TDB", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TDB_OFFSET,
	   0, 999, &TDB_type, 0},
#if defined (TDHAMAX) & !defined (NO_TDHAMAX)
    {"TDHA",1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TDHA_OFFSET,
	   0, 999, &TDHA_type, 0},
    {"TDH", 1, D_code,  DPMAX, 0,0,0, M_TDH_max, 0,
	   0, 999, &TDH_type, 0},
#else
    {"TDH", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TDH_OFFSET,
	   0, 999, &TDH_type, 0},
#endif
    {"TBG", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TBG_OFFSET,
	   0, 9999, &TBG_type, 0},
    {"TOG", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TOG_OFFSET,
	   0,32000, &TOG_type, 0},
#ifndef NO_DDFLUTTER
    {"TFL", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, TFL_OFFSET,
	   0,32000, &TFL_type, 0},
    {"CFL", 1, D_code,  DPMAX, 0,0,1, CIF_PARM1, CFL_OFFSET,
	   0,32000, &CFL_type, 0},
#endif
    {"TRG", 1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TRG_OFFSET,
	   0,  999, &TRG_type, 0},
    {"TGG", 1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TGG_OFFSET,
	   0,  999, &TGG_type, 0},
    {"TGL", 1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TGL_OFFSET,
	   0,   99, &TGL_type, 0},
    {"TFG", 1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TFG_OFFSET,
	   0,  999, &TFG_type, 0},
#if defined (TVGAMAX) & !defined (NO_TVGAMAX)
    {"TVGA",1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TVGA_OFFSET,
	   0,  999, TVGA_type, 1},
    {"TVG", 1, FC_code, FCMAX, 0,0,0, M_TVG_max, 0,
	   0,  999, TVG_type,  1},
#else
    {"TVG", 1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TVG_OFFSET,
	   0,  999, TVG_type,  1},
#endif
#ifndef NO_TMGLMAX
    {"TMGL",1, FC_code, FCMAX, 0,0,1, CIF_PARM1, TMGL_OFFSET,
	   0,   99, &TMGL_type, 0},
#endif
    {"TFB", 0, FC_code, FCMAX, 0,0,0, &TFB_max, 0,
	   0,  999, &TFB_type, 0},
    {"CFB", 0, FC_code, FCMAX, 0,0,0, &CFB_max, 0,
	   0,   99, &CFB_type, 0},
    {"CFBC",0, FC_code, FCMAX, 0,0,0, &CFB_counter, 0,
	   0,   99, &CFB_type, 0},
  #if TMMAX
    {"T",   1, T_code,  TMMAX, 0,0,1, CIF_PARM1, T_OFFSET,
	   0, 9999, T_type,    1},
  #endif
  #if CTMAX
    {"C",   1, C_code,  CTMAX, 0,0,1, CIF_PARM1, C_OFFSET,
	   0,32000, C_type,    1},
  #endif
  #if SCHMAX
    {"SCH", 1, SCH_code,SCHMAX,0,0,1, CIF_PARM1, SCH_OFFSET,
	   0,    1, &SCH_type, 0},
  #endif
  #if PRMMAX
    {"PRM", 1, PRM_code,PRMMAX,0,0,1, CIF_PARM1, PRM_OFFSET,
	   0,32767, PRM_type,  1},
  #endif
  #if DSMAX
    {"TDSOG",1, DS_code,  DSMAX,0,0, 1, CIF_PARM1, TDSOG_OFFSET,
	   0,32000, &TDSOG_type, 0},
  #endif

#if PLMAX
    {"TXAPL", 1, FC_code,FCMAX,0,0,0, TXA_PL, 0, 0, 32000, &TX_PL_type,  0},
    {"TXBPL", 1, FC_code,FCMAX,0,0,0, TXB_PL, 0, 0, 32000, &TX_PL_type,  0},
    {"TXCPL", 1, FC_code,FCMAX,0,0,0, TXC_PL, 0, 0, 32000, &TX_PL_type,  0},
    {"TXDPL", 1, FC_code,FCMAX,0,0,0, TXD_PL, 0, 0, 32000, &TX_PL_type,  0},
    {"TXEPL", 1, FC_code,FCMAX,0,0,0, TXE_PL, 0, 0, 32000, &TX_PL_type,  0},

    {"TX",    1, PL_code,PLMAX,0,0,1, CIF_PARM1,TX_OFFSET,0,32000,&TX_type,0},
    {"TPLON", 1, PL_code,PLMAX,0,0,1, CIF_PARM1,TPLON_OFFSET,1,32000,&TPL_type,0},
    {"TPLOFF",1, PL_code,PLMAX,0,0,1, CIF_PARM1,TPLOFF_OFFSET,1,32000,&TPL_type,0},

    {"TXA", 2, PL_code,PLMAX,FC_code,FCMAX,1,CIF_PARM1,TXA_OFFSET,0,32000,
	&TXA_type,0},
    {"TXB", 2, PL_code,PLMAX,FC_code,FCMAX,1,CIF_PARM1,TXB_OFFSET,0,32000,
	&TXB_type,0},
    {"TXC", 2, PL_code,PLMAX,FC_code,FCMAX,1,CIF_PARM1,TXC_OFFSET,0,32000,
	&TXC_type,0},
    {"TXD", 2, PL_code,PLMAX,FC_code,FCMAX,1,CIF_PARM1,TXD_OFFSET,0,32000,
	&TXD_type,0},
    {"TXE", 2, PL_code,PLMAX,FC_code,FCMAX,1,CIF_PARM1,TXE_OFFSET,0,32000,
	&TXE_type,0},
#endif

#if TRIGMAX
    {"TRIG", 2, FC_code,FCMAX,FC_code,FCMAX,0, M_TRIG_max,0,0,32000,
	&TRIG_type,0},
#endif


#if LOGTYPEMAX /* NO_VLOG */
 #ifndef NO_VLOG_300
    {"LOGTYPE", 1, LOGTYPE_code, LOGTYPEMAX, 0,0, 1, CIF_PARM1, LOGTYPE_OFFSET,
	  0, 9999, &LOG_type, 0},
 #else
    {"LOGTYPE", 1, LOGTYPE_code, LOGTYPEMAX, 0,0, 1, CIF_PARM1, LOGTYPE_OFFSET,
	  0,  15, &LOG_type, 0},
 #endif/* NO_VLOG_300 */
    {"LOGPRM", 1, LOGPRM_code, LOGPRMMAX, 0,0, 1, CIF_PARM1, LOGPRM_OFFSET,
	  0, 9999,  LOGPRM_type, 1},
#endif

#if MONTYPEMAX /* NO_VLOG */
#ifndef NO_VLOG_300
    {"MONTYPE", 1, MONTYPE_code, MONTYPEMAX, 0,0, 1, CIF_PARM1, MONTYPE_OFFSET,
	  0, 9999, &MON_type, 0},
    {"MONDP", 1, D_code,  DPMAX, 0,0, 1, CIF_PARM1,  MONIS_OFFSET,
	  0, 9999, &MON_type, 0},
 #if (ISMAX-DPMAX)
    {"MONIS", 1, IS_code+DPMAX, ISMAX-DPMAX, 0,0, 1, CIF_PARM1, MONIS_OFFSET+DPMAX,
	  0, 9999, &MON_type, 0},
 #endif
    {"MONFC", 1, FC_code,  FCMAX, 0,0, 1, CIF_PARM1,  MONUS_OFFSET,
	  0, 9999, &MON_type, 0},
 #if (USMAX-FCMAX)
    {"MONUS", 1, US_code+FCMAX, USMAX-FCMAX, 0,0,1, CIF_PARM1, MONUS_OFFSET+FCMAX,
	  0, 9999, &MON_type, 0},
 #endif
 #if DSMAX
    {"MONDS", 1, DS_code,  DSMAX, 0,0,1, CIF_PARM1, MONDS_OFFSET,
	  0, 9999, &MON_type, 0},
 #endif
#else
    {"MONTYPE", 1, MONTYPE_code, MONTYPEMAX, 0,0, 1, CIF_PARM1, MONTYPE_OFFSET,
	  0,  15, &MON_type, 0},
    {"MONDP", 1, D_code,  DPMAX, 0,0, 1, CIF_PARM1,  MONIS_OFFSET,
	  0,  1, &MON_type, 0},
 #if (ISMAX-DPMAX)
    {"MONIS", 1, IS_code+DPMAX, ISMAX-DPMAX, 0,0, 1, CIF_PARM1, MONIS_OFFSET+DPMAX,
	  0,  3, &MON_type, 0},
 #endif
    {"MONFC", 1, FC_code,  FCMAX, 0,0, 1, CIF_PARM1,  MONUS_OFFSET,
	  0,  15, &MON_type, 0},
 #if (USMAX-FCMAX)
    {"MONUS", 1, US_code+FCMAX, USMAX-FCMAX, 0,0,1, CIF_PARM1, MONUS_OFFSET+FCMAX,
	  0,  3, &MON_type, 0},
 #endif
 #if DSMAX
    {"MONDS", 1, DS_code,  DSMAX, 0,0,1, CIF_PARM1, MONDS_OFFSET,
	  0,  1, &MON_type, 0},
 #endif
#endif /* NO_VLOG_300 */
    {"MONPRM", 1, MONPRM_code, MONPRMMAX, 0,0, 1, CIF_PARM1, MONPRM_OFFSET,
	  0,  9999, MONPRM_type, 1},
#endif

#if RIS_PRMMAX
    {"RISPRM", 1, RIS_PRM_code, RIS_PRMMAX, 0,0, 1, CIF_PARM1, RIS_PRM_OFFSET,
	  0,   32767,  &RIS_PRM_type, 0},
#endif

/* minimum garantie tijden t.b.v. bewaking garantietijden */

#ifndef NO_TIGMAX

#ifdef TIG_OFFSET_START
    {"TIGMIN", 2,FC_code,FCMAX,FC_code,FCMAX,0, M_TIG_min, 0,0, 255, &TIG_min_type,  0},
#endif

#else /* NO_TIGMAX */

#ifdef TO_OFFSET_START
    {"TOMIN", 2,FC_code,FCMAX,FC_code,FCMAX,0, M_TO_min, 0,0, 255, &TO_min_type,  0},
#endif

#endif /* NO_TIGMAX */


#ifdef TRG_OFFSET_START
    {"TRGMIN",1,FC_code,FCMAX,      0,    0,0, TRG_min,  0,0, 999, &TRG_min_type, 0},
#endif
#ifdef TGG_OFFSET_START
    {"TGGMIN",1,FC_code,FCMAX,      0,    0,0, TGG_min,  0,0, 999, &TGG_min_type, 0},
#endif
#ifdef TGL_OFFSET_START
    {"TGLMIN",1,FC_code,FCMAX,      0,    0,0, TGL_min,  0,0,  99, &TGL_min_type, 0},
#endif

#ifdef TO_MAX_TIG_MAX
    {"TOTIG", 2, FC_code,FCMAX,FC_code,FCMAX,0, *TIG_max, 0,0, 255, &TIG_type,  0},
#endif 

};



/* definitie aantal commando's in de structuur */
/* =========================================== */
   #define PCMDMAX  sizeof(PARMSTRUC)/sizeof(PARMSTRUC[0])
   const count PCMD_MAX= PCMDMAX;



/* definitie vlaggen parameters */
/* ============================ */
#ifndef NO_AUTOINIT
   mulv PDUMP= 0;		/* dumpvlag parameters			*/
   mulv PARMBUF= 0;		/* wijzigvlag parameterbuffer		*/
   mulv RO_level= RO_type;	/* readonly niveau		      	*/
#else
   mulv PDUMP;
   mulv PARMBUF;
   mulv RO_level;
#endif



#ifdef CCOLSRC

   #include "prsfunc.c"

#endif



/* undefine offset macro's */
/* ======================= */
#ifndef NO_TIGMAX
   #undef TIG_OFFSET
#else
   #undef TO_OFFSET
#endif  /* NO_TIGMAX */

   #undef TDB_OFFSET
   #undef TDHA_OFFSET
   #undef TDH_OFFSET
   #undef TBG_OFFSET
   #undef TOG_OFFSET
   #undef TRG_OFFSET
   #undef TGG_OFFSET
   #undef TGL_OFFSET
   #undef TFG_OFFSET
   #undef TVGA_OFFSET
   #undef TVG_OFFSET
#ifndef NO_TMGLMAX
   #undef TMGL_OFFSET
#endif
   #undef T_OFFSET
   #undef C_OFFSET
   #undef SCH_OFFSET
   #undef PRM_OFFSET
   #undef TDSOG_OFFSET

#if PLMAX
   #undef TX_OFFSET
   #undef PLON_OFFSET
   #undef PLOFF_OFFSET
   #undef TXA_OFFSET
   #undef TXB_OFFSET
   #undef TXC_OFFSET
   #undef TXD_OFFSET
   #undef TXE_OFFSET
#endif

#if MONTYPEMAX
   #undef MONTYPE_OFFSET
   #undef MONIS_OFFSET
   #undef MONUS_OFFSET
   #undef MONDS_OFFSET
#endif

#if RIS_PRMMAX
   #undef RIS_PRM_OFFSET
#endif
