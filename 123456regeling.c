/* Compileerbestand */
/* ---------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456regeling.c
      CCOL:   12.0
    TLCGEN:   12.4.0.5
   CCOLGEN:   12.4.0.5
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.4   12-03-2024   TLCGen      Release versie TLCGen
 *
 ************************************************************************************/

/* Functionaliteiten regeling:
    RIS: ja
    PTP: nee
    Intergroen: ja
*/

#ifndef AUTOMAAT
    #pragma region CCOL library dependencies
        #pragma comment(lib, "ccolreg.lib")
        #pragma comment(lib, "ccolsim.lib")
        #pragma comment(lib, "lwmlfunc.lib")
        #pragma comment(lib, "stdfunc.lib")
        #pragma comment(lib, "ccolvlog.lib")
        #pragma comment(lib, "dsifunc.lib")
        #pragma comment(lib, "ccolmain.lib")
        #pragma comment(lib, "risfunc.lib")
        #pragma comment(lib, "rissimfunc.lib")
        #pragma comment(lib, "comctl32.lib")
        #pragma comment(lib, "htmlhelp.lib")
        /* Voor Visual 2017 en hoger: haal onderstaande regel uit het commentaar */
        /* #pragma comment(lib, "legacy_stdio_definitions.lib") */
    #pragma endregion
#endif

#ifndef CCOLTIG     /* Intergroentijden worden toegepast */
    #define CCOLTIG
#endif

#include "123456sys.h"
#include "123456reg.c"
#include "123456prio.c"
#include "123456tab.c"
#ifndef AUTOMAAT
    #include "123456dpl.c"
    #include "123456sim.c"
    #include "123456rissim.c"
#endif
