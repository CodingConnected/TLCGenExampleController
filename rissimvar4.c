/* DEFINITIE VARIABELEN VAN DE RIS SIMULATIE */
/* ========================================= */


/* (C) Copyright 2018-2021 by A.C.M. van Grinsven. All rights reserved. */


/* CCOL :  versie 11.0     */
/* FILE :  rissimvar4.c    */
/* DATUM:  22-12-2021      */

/* DATUM:  22-12-2021 - PrioRequest-Cancellation (SRM) versturen na verlaten van een voedende lane met dezelfde SignalGroup in PrioRequest-Object (SRM). */
/* DATUM:  17-12-2021 - RIF_PRIOREQUEST_PB[].id gewijzigd. The id is created from the StationID (ris_itsstation_ID) and the RequestID (ris_request_ID), seperated with an underscore. */
/* DATUM:  15-12-2021 - heading toegevoegd als argument ris_simulation_put_itsstation_pb_xx functies. */
/* DATUM:  30-04-2020      */



#ifndef __RISSIMVAR_C
#define __RISSIMVAR_C


/* include files */
/* ============= */
   #include "rissimvar4.h"  /* declaratie ris simulatie */   



/* definitie ris simulatie variabelen */
/* ================================== */

/* update tijden */
/* ------------- */
   const rif_timestamp RIS_ITSSTATION_UPDATE_MAX = RIS_ITSSTATION_MAX_UPDATE;   /* maximum update tijd voor een ItsStation-object (CAM)   */
   const rif_timestamp RIS_PRIOREQUEST_UPDATE_MAX = RIS_PRIOREQUEST_MAX_UPDATE; /* maximum update tijd voor een PrioRequest-object (SRM)  */


/* buffer met kenmerken van de StationTypes */
/* ---------------------------------------- */
   struct Ris_Sim_StationType RIS_STATIONTYPE[RIS_MAX_STATIONTYPE] = {

      /* length, width, acceleration, deceleration */ 
      /* ----------------------------------------- */
            4.5,   2.0,          2.0,         2.0,       /* RIF_STATIONTYPE_UNKNOWN         =  0 */
            0.5,   0.5,          1.5,         1.5,       /* RIF_STATIONTYPE_PEDESTRIAN      =  1 */
            2.0,   0.7,          1.5,         1.5,       /* RIF_STATIONTYPE_CYCLIST         =  2 */
            2.0,   0.8,          1.5,         1.5,       /* RIF_STATIONTYPE_MOPED           =  3 */
            2.0,   1.0,          2.0,         2.0,       /* RIF_STATIONTYPE_MOTORCYCLE      =  4 */
            4.5,   2.0,          2.0,         2.0,       /* RIF_STATIONTYPE_PASSENGERCAR    =  5 */
           12.0,   2.5,          1.3,         1.3,       /* RIF_STATIONTYPE_BUS             =  6 */
            9.0,   2.3,          1.0,         1.3,       /* RIF_STATIONTYPE_LIGHTTRUCK      =  7 */
           16.0,   2.5,          1.0,         1.3,       /* RIF_STATIONTYPE_HEAVYTRUCK      =  8 */
           18.0,   2.5,          1.0,         1.3,       /* RIF_STATIONTYPE_TRAILER         =  9 */
           10.0,   2.0,          1.5,         1.5,       /* RIF_STATIONTYPE_SPECIALVEHICLES = 10 */
           29.5,   2.4,          1.0,         1.5,       /* RIF_STATIONTYPE_TRAM            = 11 */
            6.0,   2.0,          2.0,         2.0,       /* <gereserveerd>                  = 12 */
            6.0,   2.0,          2.0,         2.0,       /* <gereserveerd>                  = 13 */
            6.0,   2.0,          2.0,         2.0,       /* <gereserveerd>                  = 14 */
           10.0,   2.0,          2.0,         2.0        /* RIF_STATIONTYPE_ROADSIDEUNIT    = 15 */
   };

   rif_int RIS_STATIONTYPE_MAX = RIS_MAX_STATIONTYPE;    /* maximum aantal StationTypes   */


/* buffer met simulatieparameters voor te genereren ItsStations */
/* ------------------------------------------------------------ */
   struct Ris_Sim_Parameters_ItsStation RIS_PRM_ITSSTATION[RIS_MAX_PRM_ITSSTATION]; 

   rif_int RIS_PRM_ITSSTATION_NUMBER= 0;                    /* aantal objecten in RIS_PRM_ITSSTATION         */
   rif_int RIS_PRM_ITSSTATION_MAX= RIS_MAX_PRM_ITSSTATION;  /* maximum aantal objecten in RIS_PRM_ITSSTATION */


/* buffer met simulatieparameters voor gekoppelde richtingen */
/* --------------------------------------------------------- */
   struct Ris_Sim_Parameters_lane2lane RIS_PRM_ITSSTATION_LANE2LANE[RIS_LANE_ID_MAX]; 



/* Display Lanes en ItsStations */
/* ============================ */   

/* buffer met displayparameters van de rijstroken */
/* ---------------------------------------------- */
   struct Ris_Display_Parameters_Lane  RIS_PRM_DISPLAY_LANE[RIS_LANE_MAX];
   
   rif_int RIS_PRM_DISPLAY_LANE_MAX = 0;  /* aantal te displayen lanes */
   
     
/* definieer de index van de parameters van de lane-ID */
/* --------------------------------------------------- */
   rif_int RIS_DISPLAY_LANE_ID_INDEX[RIS_LANE_ID_MAX];


/* definieer een string voor iedere rijstrook (lane) */
/* ------------------------------------------------- */
   char RIS_DISPLAY_LANE_STRING[RIS_LANE_ID_MAX][RIS_DISPLAY_MAXSTRING+1];
   
   rif_int RIS_DISPLAY_LANE_STRING_MAX = RIS_DISPLAY_MAXSTRING; /* maximum lengte display string */


/* definieer voor ieder StationType een (uniek) karakter */
/* ----------------------------------------------------- */
#ifdef RIS_DISPLAY_ITSSTATION_ENGELS

   const char RIS_DISPLAY_STATIONTYPE_CHAR[RIS_DISPLAY_MAXSTATIONTYPE]=
   {
       '?',  /* RIF_STATIONTYPE_UNKNOWN         =  0 */
       'p',  /* RIF_STATIONTYPE_PEDESTRIAN      =  1 */
       'c',  /* RIF_STATIONTYPE_CYCLIST         =  2 */
       'm',  /* RIF_STATIONTYPE_MOPED           =  3 */
       'M',  /* RIF_STATIONTYPE_MOTORCYCLE      =  4 */
       'C',  /* RIF_STATIONTYPE_PASSENGERCAR    =  5 */
       'B',  /* RIF_STATIONTYPE_BUS             =  6 */
       'L',  /* RIF_STATIONTYPE_LIGHTTRUCK      =  7 */
       'H',  /* RIF_STATIONTYPE_HEAVYTRUCK      =  8 */
       'E',  /* RIF_STATIONTYPE_TRAILER         =  9 */
       'S',  /* RIF_STATIONTYPE_SPECIALVEHICLES = 10 */
       'T',  /* RIF_STATIONTYPE_TRAM            = 11 */
       '1',  /* undefined 1                     = 12 */
       '2',  /* undefined 2                     = 13 */
       '3',  /* undefined 3                     = 14 */
       'R',  /* RIF_STATIONTYPE_ROADSIDEUNIT    = 15 */
   };

#else

   const char RIS_DISPLAY_STATIONTYPE_CHAR[RIS_DISPLAY_MAXSTATIONTYPE]=
   {
       '?',  /* RIF_STATIONTYPE_UNKNOWN         =  0 */
       'v',  /* RIF_STATIONTYPE_PEDESTRIAN      =  1 */
       'f',  /* RIF_STATIONTYPE_CYCLIST         =  2 */
       'b',  /* RIF_STATIONTYPE_MOPED           =  3 */
       'M',  /* RIF_STATIONTYPE_MOTORCYCLE      =  4 */
       'A',  /* RIF_STATIONTYPE_PASSENGERCAR    =  5 */
       'B',  /* RIF_STATIONTYPE_BUS             =  6 */
       'L',  /* RIF_STATIONTYPE_LIGHTTRUCK      =  7 */
       'Z',  /* RIF_STATIONTYPE_HEAVYTRUCK      =  8 */
       'E',  /* RIF_STATIONTYPE_TRAILER         =  9 */
       'S',  /* RIF_STATIONTYPE_SPECIALVEHICLES = 10 */
       'T',  /* RIF_STATIONTYPE_TRAM            = 11 */
       '1',  /* niet gedefinieerd 1             = 12 */
       '2',  /* niet gedefinieerd 2             = 13 */
       '3',  /* niet gedefinieerd 3             = 14 */
       'R',  /* RIF_STATIONTYPE_ROADSIDEUNIT    = 15 */
   };

#endif /* RIS_DISPLAY_ITSSTATION_ENGELS */

   
#endif /* ifndef __RISSIMVAR_C */
