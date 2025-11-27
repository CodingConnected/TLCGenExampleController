/* POINT TO POINT PROTOCOL - APPLICATIE KOPPELSIGNALEN */
/* =================================================== */


/* (C) Copyright 1998-2020 by A.C.M. van Grinsven. All rights reserved.	*/


/* CCOL :  versie 11.0	*/
/* FILE :  ptpwin.c     */
/* DATUM:  30-04-2020   */



/* include files */
/* ============= */
   #include "ptpvar.c"		/* definitie PTP-structuur		*/
   #include "ptpksvar.c"	/* definitie structuur koppelsignalen	*/
   #include "ptpkps.h"		/* definitie data bewerkingen 		*/

   #include "ccolks.h"          /* koppelsignalen                       */


/* struct ptpstruct   PTPxx; */ /* definitie in regelapplicatie		*/
/* struct ptpksstruct PTPKSx;*/ /* definitie in regelapplicatie		*/


/* macrodefinities - gebruik CCOLKS-buffer */
/* --------------------------------------- */
  #define PTP_PORT  0   /* plaats - poortnummer                */
  #define PTP_INIT  1   /* plaats - initialisatie vlag         */
  #define PTP_SRC   2   /* plaats - source                     */  
  #define PTP_DEST  3   /* plaats - destination                */
  #define PTP_HDR   4   /* lengte van de header - start data   */



/* DEFINITIE APPLICATIE KOPPELSIGNALEN */
/* =================================== */

void ptp_application_ks(struct ptpstruct *PTP, struct ptpksstruct *PTPKS)
{
   s_int16 i;


   if (PTP->PORTNR%2) {
      for (i=0; i<PTPKS->UKS_MAX; i++)  
         set_ks((s_int16) (PTP->PORTNR),(s_int16) (i+PTP_HDR), PTPKS->UKS[i] );

      if ( PTP->SRC==get_ks( (s_int16) (PTP->PORTNR-1), (s_int16) (PTP_DEST)) ) { /* check source-destination */
         PTPKS->OKE= TRUE;
         for (i=0; i<PTPKS->IKS_MAX; i++) 
            PTPKS->IKS[i]= get_ks( (s_int16) (PTP->PORTNR-1), (s_int16) (i+PTP_HDR));
      }
      else {
         PTPKS->OKE= FALSE;
         for (i=0; i<PTPKS->IKS_MAX; i++) 
            PTPKS->IKS[i]= FALSE;
      }
   }
   else {
      for (i=0; i<PTPKS->UKS_MAX; i++)  
         set_ks((s_int16) (PTP->PORTNR), (s_int16) (i+PTP_HDR), PTPKS->UKS[i] );
      if ( PTP->SRC==get_ks( (s_int16) (PTP->PORTNR+1), (s_int16) (PTP_DEST)) ) {   /* check source-destination */
         PTPKS->OKE= TRUE;   
         for (i=0; i<PTPKS->IKS_MAX; i++) 
            PTPKS->IKS[i]= get_ks( (s_int16) (PTP->PORTNR+1), (s_int16) (i+PTP_HDR));
      }
      else {
         PTPKS->OKE= FALSE;
         for (i=0; i<PTPKS->IKS_MAX; i++) 
            PTPKS->IKS[i]= FALSE;
      }
   }
}



/* PTP INIT */
/* ======== */

void ptp_init(struct ptpstruct *PTP)
{
   /* set poortnummer en initvlag */
   /* ---------------------------- */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_PORT), (s_int16) (PTP->PORTNR));   /* set port nr */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_INIT), (s_int16) (TRUE));          /* set init    */
}



/* PTP CONTROL */
/* =========== */

void ptp_control(struct ptpstruct *PTP)
{

   /* set source and destination */
   /* -------------------------- */
   if ( get_ks( (s_int16) (PTP->PORTNR), (s_int16) (PTP_INIT)) ) {       /* check init-vlag   */
      set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_SRC), PTP->SRC);    /* set source        */
      set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_DEST), PTP->DEST);  /* set destination   */
   }

   /* reset systeem vlaggen */
   /* --------------------- */
   PTP->DATAMSG_IN= FALSE;	   /* reset datamsg vlag		  */
#ifndef NO_CCOL800
// PTP->COMERROR= FALSE;           /* reset storing bits		  */
#else
// PTP->ERROR= FALSE;	           /* reset storing bits		  */
#endif

}



/* PTP RESET */
/* ========= */

void ptp_application_reset(struct ptpstruct *PTP, struct ptpksstruct *PTPKS)
{  
   s_int16 i;

   /* reset header */
   /* ------------ */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_PORT), (s_int16) (FALSE));      /* reset port nr */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_INIT), (s_int16) (FALSE));      /* reset init    */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_SRC),  (s_int16) (FALSE));      /* reset src     */
   set_ks((s_int16) (PTP->PORTNR), (s_int16) (PTP_DEST), (s_int16) (FALSE));      /* reset dest    */


   /* reset data */
   /* ---------- */
   for (i=0; i<PTPKS->UKS_MAX; i++)  {
      set_ks((s_int16) (PTP->PORTNR),(s_int16) (i+PTP_HDR), (s_int16) (FALSE) );
   }   
}

