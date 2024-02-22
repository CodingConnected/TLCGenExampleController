/* Compileerbestand */
/* ---------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456regeling.c
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   10-01-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable)
 *
 ************************************************************************************/

/* Functionaliteiten regeling:
    RIS: nee
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
#endif
