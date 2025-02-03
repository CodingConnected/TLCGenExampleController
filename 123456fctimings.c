/* DEFINITIE FCTMING FUNCTIES */
/* -------------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456fctimings.c
      CCOL:   12.0
    TLCGEN:   12.4.0.10
   CCOLGEN:   12.4.0.10
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie      Datum        Ontwerper   Commentaar
 * 12.4.0.10   14-01-2025   TLCGen      Release versie TLCGen 12.4.0.10
 *
 ************************************************************************************/

/* DEFINITIE EVENTSTATE */
/* ==================== */

#ifdef EVENTSTATE_MACRODEFINITIES_CIF_INC

/* Macrodefinities status EVENTSTATE (Nederlands) */
/* ---------------------------------------------- */
#define CIF_TIMING_ONBEKEND           0    /* Unknown(0)                             */
#define CIF_TIMING_GEDOOFD            1    /* Dark(1)                                */
#define CIF_TIMING_ROOD_KNIPPEREN     2    /* stop - Then - Proceed(2)               */
#define CIF_TIMING_ROOD               3    /* stop - And - Remain(3)                 */
#define CIF_TIMING_GROEN_OVERGANG     4    /* pre - Movement(4) - not used in NL     */
#define CIF_TIMING_GROEN_DEELCONFLICT 5    /* permissive - Movement - Allowed(5)     */
#define CIF_TIMING_GROEN              6    /* protected - Movement - Allowed(6)      */
#define CIF_TIMING_GEEL_DEELCONFLICT  7    /* permissive - clearance(7)              */
#define CIF_TIMING_GEEL               8    /* protected - clearance(8)               */
#define CIF_TIMING_GEEL_KNIPPEREN     9    /* caution - Conflicting - Traffic(9)     */
#define CIF_TIMING_GROEN_KNIPPEREN_DEELCONFLICT 10    /* permissive - Movement - PreClearance - not in J2735 */
#define CIF_TIMING_GROEN_KNIPPEREN              11    /* protected -  Movement - PreClearance - not in J2735 */

#endif

/* De functie kr52_Eventstate_Definition() definieert de eventstate voor de fasecycli.
 * De functie kr52_Eventstate_Definition() wordt aangeroepn door de functie control_parameters().
 */
void Timings_Eventstate_Definition(void)
{
    register count i;

    /* Zet defaultwaarde */
    /* ----------------- */
    for (i = 0; i < FCMAX; i++)
    {
        CCOL_FC_EVENTSTATE[i][CIF_ROOD]= CIF_TIMING_ONBEKEND;       /* Rood   */
        CCOL_FC_EVENTSTATE[i][CIF_GROEN]= CIF_TIMING_ONBEKEND;      /* Groen  */
        CCOL_FC_EVENTSTATE[i][CIF_GEEL]= CIF_TIMING_ONBEKEND;       /* Geel   */
    }

/* Fase 02 */
    CCOL_FC_EVENTSTATE[fc02][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc02][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc02][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 03 */
    CCOL_FC_EVENTSTATE[fc03][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc03][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc03][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 05 */
    CCOL_FC_EVENTSTATE[fc05][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc05][CIF_GROEN]= CIF_TIMING_GROEN_DEELCONFLICT;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc05][CIF_GEEL]= CIF_TIMING_GEEL_DEELCONFLICT;       /* Geel   */

/* Fase 08 */
    CCOL_FC_EVENTSTATE[fc08][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc08][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc08][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 09 */
    CCOL_FC_EVENTSTATE[fc09][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc09][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc09][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 11 */
    CCOL_FC_EVENTSTATE[fc11][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc11][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc11][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 21 */
    CCOL_FC_EVENTSTATE[fc21][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc21][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc21][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 22 */
    CCOL_FC_EVENTSTATE[fc22][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc22][CIF_GROEN]= CIF_TIMING_GROEN_DEELCONFLICT;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc22][CIF_GEEL]= CIF_TIMING_GEEL_DEELCONFLICT;       /* Geel   */

/* Fase 24 */
    CCOL_FC_EVENTSTATE[fc24][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc24][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc24][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 26 */
    CCOL_FC_EVENTSTATE[fc26][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc26][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc26][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 28 */
    CCOL_FC_EVENTSTATE[fc28][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc28][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc28][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 31 */
    CCOL_FC_EVENTSTATE[fc31][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc31][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc31][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 32 */
    CCOL_FC_EVENTSTATE[fc32][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc32][CIF_GROEN]= CIF_TIMING_GROEN_DEELCONFLICT;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc32][CIF_GEEL]= CIF_TIMING_GEEL_DEELCONFLICT;       /* Geel   */

/* Fase 33 */
    CCOL_FC_EVENTSTATE[fc33][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc33][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc33][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 34 */
    CCOL_FC_EVENTSTATE[fc34][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc34][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc34][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 38 */
    CCOL_FC_EVENTSTATE[fc38][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc38][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc38][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 61 */
    CCOL_FC_EVENTSTATE[fc61][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc61][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc61][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 62 */
    CCOL_FC_EVENTSTATE[fc62][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc62][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc62][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 67 */
    CCOL_FC_EVENTSTATE[fc67][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc67][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc67][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 68 */
    CCOL_FC_EVENTSTATE[fc68][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc68][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc68][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 81 */
    CCOL_FC_EVENTSTATE[fc81][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc81][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc81][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 82 */
    CCOL_FC_EVENTSTATE[fc82][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc82][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc82][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

/* Fase 84 */
    CCOL_FC_EVENTSTATE[fc84][CIF_ROOD]= CIF_TIMING_ROOD;       /* Rood   */
    CCOL_FC_EVENTSTATE[fc84][CIF_GROEN]= CIF_TIMING_GROEN;      /* Groen  */
    CCOL_FC_EVENTSTATE[fc84][CIF_GEEL]= CIF_TIMING_GEEL;       /* Geel   */

}
