/* WACHTTIJDLANTAARN MET GETAL */
/* =========================== */


/* (C) Copyright 2003-2023 by A.C.M. van Grinsven. All rights reserved.	*/


/* CCOL :  versie 12.0.0   */
/* FILE :  wtlgetal.h      */
/* DATUM:  20-02-2023      */



#ifndef __WTLGETAL_H
#define __WTLGETAL_H


/* include files */
/* ============= */
   #include "sysdef.c"		/* definitie typen variabelen		*/



/* declaratie functies */
/* =================== */
   mulv wachttijd_getal(count fc, count uswtv, count twtv, mulv T_wacht_ber, mulv T_getal_start);
   mulv wachttijd_getal_mm(count fc, count mmwtv, count twtv, mulv T_wacht_ber, mulv T_getal_start);


#endif   /* __WTLGETAL_H */
