/* GEBRUIK VAN INTERGROENTIJDEN NAAST ONTRUIMINSTIJDEN */
/* =================================================== */

/* 2026 by Ton van Grinsven (VGS) en Daniel Schreinemacher (DTV) */

/* CCOL :  versie: diversen   */
/* FILE :  kffunc_to_tig.c    */
/* DATUM:  21-05-2026         */



/* Toelichting
 * ===========
 * In CCOL-regelapplicaties die werken met ontruimingstijden is de wens om ook applicatiefuncties te kunnen gebruiken
 * die kijken naar intergroentijden. Dit voorkomt het maken van dubbele programmacode (NO_TIGMAX).
 * Daniel Schreinemacher (DTV) heeft hiervoor een oplossing bedacht. De oplossing is om naast de ontruimingstijden in
 * het regelprogramma ook intergroentijden mee te laten lopen.
 * Deze oplossing is nader uitgewerkt en geprogrammeerd voor gebruik in CCOL-regelapplicaties, die nog werken met
 * ontruimingstijden. De programmacode is zo opgezet dat de oplossing ook kan worden gebruikt in oudere CCOL versies,
 * waarin intergroentijden nog niet werden ondersteund. In de programmacode wordt ook rekening gehouden met het gebruik
 * van de geeltijd en geeltijd verlenging.
 */



#if !defined (CCOL_V) || (CCOL_V < 95) || defined (NO_TIGMAX)

/* macrodefinitie */
/* ============== */
   #define TO_MAX_TIG_MAX        /* TO_MAX_TIG_MAX wordt gebruikt in prsvar.c */


/* include file */
/* ============ */
   #include "cif.inc"            /* declaratie CVN C-Interface variabelen     */


/* definitie conflictvariabelen voor intergroen */
/* ============================================ */
  #if !defined (CCOL_V) || (CCOL_V < 95) 
    mulv ** const KF_pointer = TO_pointer;    /* pointertabel - conflicten    */
  #else
/*  mulv ** const KF_pointer = KF_pointer; */ /* pointertabel - conflicten    */
  #endif
    mulv ** const TIG = TO;            /* intergroentijd - logische waarde    */
    mulv TIG_timer[FCMAX];             /* intergroentijd - actuele waarde     */
    mulv TIG_max[FCMAX][FCMAX];        /* maximum waarde intergroentijd       */
/*  mulv TIG_defmax= NK;  */           /* default voor maximum waarde         */
                                       /* NK (-1) - geen conflict             */
    mulv TIG_type= TE_type + RO_type;  /* intergroentijd in tienden seconden  */
                                       /* en read-only (gebruik in prsvar.c)  */

    void conflicts_calculate_tig(void); /* functie voor het berekenen van de  */
                                        /* intergroentijden                   */

#endif /* !defined (CCOL_V) || (CCOL_V < 95) || defined (NO_TIGMAX) */



#if !defined (CCOL_V) || (CCOL_V < 95) || defined (NO_TIGMAX)

/* Berekening van intergroentijden - Conversie TGL + TO naar TIG */
/* ============================================================= */

/* conflicts_calculate_tig() berekent op basis van de waarden van de geeltijden (TGL_max[]) en ontruimingstijden (TO_max[][] en TO_timer[])
 * de waarden voor de intergroentijden (TIG_max[][] en TIG_timer[]), zodat in regelapplicaties met ontruimingstijden ook naar intergroentijden
 * kan worden gekeken. 
 * bij de eerste aanroep van de functie conflicts_calculate_tig() worden de initiele waarden voor TIG_timer[] en TIG_max[][] berekend.
 * TIG_timer[] wordt bij ieder functie aanroep voor alle fasecycli opnieuw berekend en TIG_max[][] wordt alleen opnieuw berekend als er een
 * parameterwijziging heeft plaatsgevonden.
 *
 * kffunc_to_tig.c dient als includefile in de regelapplicatiie worden opgenomen, direct voor het statement #include "prsvar.c". 
 * conflicts_calculate_tig(void) dient in de regelapplicatie te worden aangeroepen vanuit de applicatiefuntie system_application().
 */

void conflicts_calculate_tig(void)
{
   register count i, j, n;
   static mulv init = FALSE;    /* initialisatie vlag */

  
   /* bereken de initiele waarden voor TIG_max[][] */
   /* -------------------------------------------- */
   if (!init) {      /* test inititialisatie vlag */

      /* bereken default waarden voor TIG_max[][] (TO_max[][]) */
      /* ----------------------------------------------------- */ 
      for (i=0; i<FC_MAX; i++) {
         for (j=0; j<FC_MAX; j++) {
            TIG_max[i][j] = TO_max[i][j];
         }
      }      
      
      /* bereken waarden TIG_max[][] voor de conflicten (TGL_max[] + TO_max[][]) */
      /* ----------------------------------------------------------------------- */      
      for (n=0; n<KFC_MAX[i]; n++) {
         j = KF_pointer[i][n];
         if (TGL_max[i] >= 0 ) {  /* gebruik geeltijd? */
            TIG_max[i][j] = TGL_max[i] + TO_max[i][j];
         }
      }

      /* set initialisatie vlag */
      /* ---------------------- */
      init = TRUE;
   }

   /* bereken de actuele waarden voor TIG_timer[] en TIG_max[][] */
   /* ---------------------------------------------------------- */
   for (i=0; i<FC_MAX; i++) {

      /* bereken TIG_timer[] op basis van het gebruik van de geeltijd en geeltijd verlenging */
      /* ----------------------------------------------------------------------------------- */
      if (TGL_max[i] < 0) {   /* gebruik geeltijd? */ 

         /* geen gebruik geeltijd */
         /* --------------------- */
         TIG_timer[i] = TO_timer[i];
      }
      else if (TGL_timer[i] <= TGL_max[i]) {    /* geeltijd verlenging actief? */

         /* gebruik geeltijd en geen geeltijd verlenging actief */
         /* --------------------------------------------------- */
         TIG_timer[i] = TGL_timer[i] + TO_timer[i];
      }
      else {

         /* gebruik geeltijd en geeltijd verlenging actief */
         /* ---------------------------------------------- */
         TIG_timer[i] = TGL_max[i] + TO_timer[i];     /* bij geeltijd verlenging wordt TGL_timer[] groter dan TGL_max[] */
                                                      /* bij geeltijd verlenging wordt TIG_timer[] gehalteerd           */
      }

      /* opnieuw berekenen waarden TIG_max[][] voor de conflicten bij een parameter wijziging */
      /* ------------------------------------------------------------------------------------ */      
      if ( (CIF_PARM1WIJZPB != CIF_GEEN_PARMWIJZ) || (CIF_PARM1WIJZAP != CIF_GEEN_PARMWIJZ) ) {    /* test parameter wijziging? */

         for (n=0; n<KFC_MAX[i]; n++) {
            j = KF_pointer[i][n];
            if (TGL_max[i] >= 0 ) {   /* gebruik geeltijd? */

               /* gebruik van de geeltijd */
               /* ----------------------- */
               TIG_max[i][j] = TGL_max[i] + TO_max[i][j];
            }
            else{

               /* geen gebruik van de geeltijd */
               /* ---------------------------- */
               TIG_max[i][j] = TO_max[i][j];
            }
         }
      }
   }
}

#endif /* !defined (CCOL_V) || (CCOL_V < 95) || defined (NO_TIGMAX) */

