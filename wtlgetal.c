/* WACHTTIJDLANTAARN MET GETAL */
/* =========================== */


/* (C) Copyright 2003-2023 by A.C.M. van Grinsven. All rights reserved.	*/


/* CCOL :  versie 12.0.0   */
/* FILE :  wtlgetal.c      */
/* DATUM:  20-02-2023      */



/* include files */
/* ============= */
   #include "sysdef.c"           /* definitie typen variabelen          */
   #include "cif.inc"            /* declaratie CVN C-interface          */
   #include "fcvar.h"            /* declaratie fasecyclusvariabelen     */
   #include "tmvar.h"            /* declaratie tijdvariabelen           */
   #include "mevar.h"            /* declaratie geheugenvariabelen       */



/* macrodefinities */
/* =============== */
#ifndef WTL_MAX_GETAL
   #define WTL_MAX_GETAL        120    /* maximum aan te sturen getal                     */
#endif
   #define WTL_TIJD_MAX_GETAL    20    /* dooftijd (TE) bij negatieve waarde (PG[]/OS[])  */



/* definitie wachttijdfuncties */
/* =========================== */

/* de functie wachttijd_getal() verzorgt de aansturing van het getal van de wachttijd-
 * lantaarn voor de opgegeven fasecyclus (fc) op basis van de berekende wachttijd
 * (T_wacht_ber). de functie wachttijd_getal() geeft het getal dat moet branden
 * aan de procesbesturing door m.b.v. een uitgangssignaal (CIF_GUS[uswvt]).
 * een wachttijd-lantaarn wordt aangestuurd, indien de opgegeven fasecyclus in
 * rood verkeert en een aanvraag heeft. de wachttijd-lantaarn wordt niet aangestuurd
 * indien de fasecyclus alleen een mee-aanvraag speciaal heeft (BIT5), omdat deze
 * mee-aanvraag kan worden teruggezet.
 * de functie gaat uit van een wachttijdlantaarn met een 3 segmentdisplays met een
 * maximumwaarde van 199.
 * de functie verdeelt de berekende wachttijd evenredig over de nog te tonen getallen.
 * het getoonde getal wijzigt indien de actuele waarde van de wijzigtijd (T_timer[twtv])
 * groter of gelijk is aan de berekende wachttijd gedeeld door het getoonde getal.
 * bij het wijzigen van het getal herstart de wijzigtijd.
 * de functie wachttijd_getal()geeft als return-waarde het getal dat moet worden getoond.
 */

mulv wachttijd_getal(count fc, count uswtv, count twtv, mulv T_wacht_ber, mulv T_getal_start)
{
   /* fc    - fasecyclusnummer                            */
   /* uswtv - uitgangsnummer wachttijdlantaarn            */
   /* twtv  - tijdelementnummer, dooftijd voor getal      */
   /* T_wacht_ber - waarde van de berekende wachttijd     */
   /* T_getal_start - bijvoorbeeld 2 tiendenseconden      */

   mulv aantal_getal;		  /* aantal - getoonde getal   	                */


   RT[twtv]= TRUE;                /* set instructievariabele tijdmeting         */


   /* aantal - huidig getal */
   /* --------------------- */
   aantal_getal= CIF_GUS[uswtv];  /* actueel getoonde getal       	        */
   if (aantal_getal>WTL_MAX_GETAL) {
      aantal_getal= WTL_MAX_GETAL;
   }

   /* aantal - te tonen getal */
   /* ----------------------- */
   if (R[fc] && (A[fc] & (BIT0+BIT3))) /* rood en detectieaanvraag of starre aanvraag    */
   {     
      if (aantal_getal==0)		/* start aansturing wachttijd-lantaarn     */
      {
         if (T_wacht_ber>=T_getal_start) /* 20 tienden seconden */

            aantal_getal= (T_wacht_ber/10);
         }
         else if (T_wacht_ber<0)  /* negatieve waarde - b.v. PG[ ] staat op */
         {
            aantal_getal= WTL_MAX_GETAL;
         }
      }
      else                              /* tijdens aansturing */
      {
         if (T_wacht_ber>=0) 
         {
            if (T_timer[twtv]>=((T_wacht_ber+T_timer[twtv])/aantal_getal))
            {
               aantal_getal--; 
/*             RT[twtv]= TRUE;  */
            }
            else
            {
               RT[twtv]= FALSE; 
            }
         }
         else {      /* negatieve waarde - b.v. PG[ ] staat op */
            if (T_timer[twtv]>=WTL_TIJD_MAX_GETAL)
            {
               aantal_getal--; 
 /*            RT[twtv]= TRUE;   */
            }
            else
            {
               RT[twtv]= FALSE; 
            }
         }
      }
   }
   
   /* beveiliging bereik */
   /* ------------------ */
   if (aantal_getal<0)  aantal_getal= 0;
   if (aantal_getal>WTL_MAX_GETAL)  aantal_getal= WTL_MAX_GETAL;

   /* beveiliging groensturing */
   /* ------------------------ */
   if (G[fc])  aantal_getal= 0;
   else if (R[fc] && A[fc] && !aantal_getal && CIF_GUS[uswtv])  aantal_getal= 1;
   
   /* uitsturing wachttijdvoorspeller */
   /* ------------------------------- */
   CIF_GUS[uswtv]= aantal_getal;


   return (mulv) aantal_getal;

}



/* De functie wachttijd_leds_mm() werkt in principe hetzelfde als de functie wachttijd_leds(),
 * het aantal nog brandende leds wordt nu naar een geheugenelement geschreven i.p.v. naar een uitgangssignaal.
 * de functie wachttijd_getal()geeft als return-waarde het getal dat moet worden getoond.
 */

mulv wachttijd_getal_mm(count fc, count mmwtv, count twtv, mulv T_wacht_ber, mulv T_getal_start)
{
   /* fc    - fasecyclusnummer                            */
   /* mmwtv - uitgangsnummer wachttijdlantaarn            */
   /* twtv  - tijdelementnummer, dooftijd voor getal      */
   /* T_wacht_ber - waarde van de berekende wachttijd     */
   /* T_led_start - bijvoorbeeld 2 tiendenseconden        */

   mulv aantal_getal;		 /* aantal - getoonde getal 	               */


   RT[twtv]= TRUE;               /* set instructievariabele tijdmeting         */

   /* aantal - huidig getal */
   /* --------------------- */
   aantal_getal= MM[mmwtv];      /* actueel getoonde getal        	       */
   if (aantal_getal>WTL_MAX_GETAL) {
      aantal_getal= WTL_MAX_GETAL;
   }

   /* aantal - te tonen getal */
   /* ----------------------- */
   if (R[fc] && (A[fc] & (BIT0+BIT3))) /* rood en detectieaanvraag of starre aanvraag    */
   {     
      if (aantal_getal==0)		/* start aansturing wachttijd-lantaarn     */
      {
         if (T_wacht_ber>=T_getal_start) /* 20 tienden seconden */
         {
             aantal_getal= (T_wacht_ber/10);
         }
         else if (T_wacht_ber<0)  /* negatieve waarde - b.v. PG[ ] staat op */
         {
            aantal_getal= WTL_MAX_GETAL;
         }
      }
      else                              /* tijdens aansturing */
      {
         if (T_wacht_ber>=0) 
         {
            if (T_timer[twtv]>=((T_wacht_ber+T_timer[twtv])/aantal_getal))
            {
               aantal_getal--; 
/*             RT[twtv]= TRUE;  */
            }
            else
            {
               RT[twtv]= FALSE; 
            }
         }
         else {      /* negatieve waarde - b.v. PG[ ] staat op */
            if (T_timer[twtv]>=WTL_TIJD_MAX_GETAL)
            {
               aantal_getal--; 
 /*            RT[twtv]= TRUE;   */
            }
            else
            {
               RT[twtv]= FALSE; 
            }
         }
      }
   }
   
   /* beveiliging bereik */
   /* ------------------ */
   if (aantal_getal<0)  aantal_getal= 0;
   if (aantal_getal>WTL_MAX_GETAL)  aantal_getal= WTL_MAX_GETAL;

   /* beveiliging groensturing */
   /* ------------------------ */
   if (G[fc])  aantal_getal= 0;
   else if (R[fc] && A[fc] && !aantal_getal && MM[mmwtv])  aantal_getal= 1;
   
   /* uitsturing wachttijdvoorspeller */
   /* ------------------------------- */
   MM[mmwtv]= aantal_getal;


   return (mulv) aantal_getal;

}

