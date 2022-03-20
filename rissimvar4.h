/* DECLARATIE VARIABELEN EN FUNCTIES VAN DE RIS SIMULATIE */
/* ====================================================== */


/* (C) Copyright 2018-2021 by A.C.M. van Grinsven. All rights reserved. */


/* CCOL :  versie 11.0     */
/* FILE :  rissimvar4.h    */
/* DATUM:  22-12-2021      */

/* DATUM:  22-12-2021 - PrioRequest-Cancellation (SRM) versturen na verlaten van een voedende lane met dezelfde SignalGroup in PrioRequest-Object (SRM). */
/* DATUM:  17-12-2021 - RIF_PRIOREQUEST_PB[].id gewijzigd. The id is created from the StationID (ris_itsstation_ID) and the RequestID (ris_request_ID), seperated with an underscore. */
/* DATUM:  15-12-2021 - heading toegevoegd als argument ris_simulation_put_itsstation_pb_xx functies. */
/* DATUM:  30-10-2020      */
/* DATUM:  25-10-2020 - RIS_ITSSTATION_ID_MAX verhoogd naar 100000000 */
/* DATUM:  30-04-2020      */



#ifndef __RISSIMVAR_H
#define __RISSIMVAR_H


/* include files */
/* ============= */
   #include "risvar.h"     /* declaratie ris controller     */



/* declaratie ris simulatie variabelen */
/* =================================== */

/* maximum aantal rijstroken  */
/* -------------------------- */
   #define RIS_LANE_MAX    255

/* update tijden */
/* ------------- */
   #define RIS_ITSSTATION_MAX_UPDATE    1000    /* maximum update time voor een ItsStation-object in milliseconden  ( 1 seconde ) */
   #define RIS_PRIOREQUEST_MAX_UPDATE  10000    /* maximum update time voor een PrioRequest-object in milliseconden (10 seconden) */

   extern const rif_timestamp RIS_ITSSTATION_UPDATE_MAX;    /* maximum update tijd voor een ItsStation-object (CAM)   */
   extern const rif_timestamp RIS_PRIOREQUEST_UPDATE_MAX;   /* maximum update tijd voor een PrioRequest-object (SRM)  */


/* ID-ranges */
/* --------- */
   #define RIS_ITSSTATION_ID_START       500  /* start waarde voor een ItsStation ID    */
   #define RIS_ITSSTATION_ID_MAX   100000000  /* maximum waarde voor een ItsStation ID  */

   #define RIS_REQUEST_ID_START            1  /* start waarde voor een Request ID       */
   #define RIS_REQUEST_ID_MAX            255  /* maximum waarde voor een Request ID     */


/* structuur met kenmerken van een StationType */
/* ------------------------------------------- */
   struct Ris_Sim_StationType {
      rif_float length;          /* lengte               */
      rif_float width;           /* breedte              */
      rif_float acceleration;    /* optrekversnelling    */
      rif_float deceleration;    /* afremvertraging      */
   };


/* structuur met simulatieparameters voor te genereren ItsStations */
/* --------------------------------------------------------------- */
    struct Ris_Sim_Parameters_ItsStation {
       rif_string sim_intersection;          /* codering van het kruispunt       */
       rif_int sim_lane_id;                  /* uniek lane id                    */
       rif_int sim_signalgroup;              /* index signaalgroep               */
       enum Rif_StationType sim_stationtype; /* StationTtype                     */
       rif_int sim_line_nr;                  /* LineNr                           */
       rif_int sim_priorequest;              /* PrioRequest                      */
       rif_int sim_flow;                     /* intensiteit                      */
       rif_float sim_heading;                /* voertuig heading in graden       */
       rif_float sim_speed;                  /* voertuigsnelheid in m/s          */
       rif_float sim_d_speed;                /* spreiding voertuigsnelheid       */
       rif_float sim_distance;               /* afstand in tot stopstreep  (m)   */
       rif_float sim_d_distance;             /* spreiding afstand                */
       rif_float sim_offset;                 /* afstand na stopstreep in (m)     */
    };


/* structuur met simulatieparameters voor gekoppelde richtingen */
/* ------------------------------------------------------------ */
   struct Ris_Sim_Parameters_lane2lane {
      rif_string sim_fc1_intersection;       /* Intersection ID, niet ingevuld ("") betekent geen map match */
      rif_int    sim_fc1_lane_id;            /* rijstrook ID van de voedende signaalgroep                   */
      rif_int    sim_fc1_signalgroup;        /* index van de voedende signaalgroep                          */
      rif_string sim_fc2_intersection;       /* Intersection ID, niet ingevuld ("") betekent geen map match */
      rif_int    sim_fc2_lane_id;            /* rijstrook ID van de gekoppelde signaalgroep                 */
      rif_int    sim_fc2_signalgroup;        /* index van de gekoppelde signaalgroep                        */
      rif_float  sim_fc2_distance;           /* distance van de gekoppelde signaalgroep                     */
      rif_float  sim_fc2_offset;             /* offset van de gekoppelde signaalgroep, -1.0 indien onbekend */
   };


/* buffer met kenmerken van de StationTypes */
/* ---------------------------------------- */
   #define RIS_MAX_STATIONTYPE  (RIF_STATIONTYPE_ROADSIDEUNIT+1)

   extern struct Ris_Sim_StationType RIS_STATIONTYPE[]; 

   extern rif_int RIS_STATIONTYPE_MAX;    /* maximum aantal verschillende StationTypes */


/* buffer met simulatieparameters voor te genereren ItsStation-objecten */
/* -------------------------------------------------------------------- */
   #define RIS_MAX_PRM_ITSSTATION  (FCMAX*RIF_MAXLANES*20)

   extern struct Ris_Sim_Parameters_ItsStation RIS_PRM_ITSSTATION[]; 

   extern rif_int RIS_PRM_ITSSTATION_NUMBER;      /* aantal voertuigen in RIS_PRM_ITSSTATION object  */
   extern rif_int RIS_PRM_ITSSTATION_MAX;         /* maximum aantal voertuigen in RIS_PRM_ITSSTATION */


 /* buffer met simulatieparameters voor gekoppelde signaalgroepen/richtingen */
 /* ------------------------------------------------------------------------ */
   #define RIS_LANE_ID_MAX    255   /* maximum waarde voor een lane ID  */

   extern struct Ris_Sim_Parameters_lane2lane RIS_PRM_ITSSTATION_LANE2LANE[]; 



/* Display Lanes en ItsStations */
/* ============================ */

/* macrodefinities */
/* --------------- */
   #define RIS_DISPLAY_MAXSTRING         120    /* maximale stringlengte         */
   #define RIS_DISPLAY_MAXSTATIONTYPE     16    /* maximum aantal StationTypes   */


/* structuur met displayparameters van een rijstrook (lane) */
/* -------------------------------------------------------- */
   struct Ris_Display_Parameters_Lane {
      rif_string intersection;      /* Intersection ID, niet ingevuld ("") betekent geen map match */
      rif_int    lane_id;           /* uniek lane ID                 */
      rif_int    signalgroup;       /* index van de signaalgroep     */
      rif_string lane_code;         /* lane codering                 */
      rif_float  segmentLength;     /* segmentlengte van de lane     */
      rif_float  displayLength;     /* displaylengte van de lane     */

      rif_int    first_itsstation;  /* plaats in de string van de eerste itsstation - wordt berekend  */
   };


/* buffer met displayparameters van de rijstroken */
/* ---------------------------------------------- */
   extern struct Ris_Display_Parameters_Lane  RIS_PRM_DISPLAY_LANE[];

   extern rif_int RIS_PRM_DISPLAY_LANE_MAX;  /* aantal te displayen lanes */


/* definieer een string voor iedere rijstrook (lane) */
/* ------------------------------------------------- */
   extern char RIS_DISPLAY_LANE_STRING[][RIS_DISPLAY_MAXSTRING+1];


/* defineer de index van de parameters van de lane-ID */
/* -------------------------------------------------- */
   extern rif_int RIS_DISPLAY_LANE_ID_INDEX[];


/* definieer voor ieder StationType een (uniek) karakter */
/* ----------------------------------------------------- */
   extern const char RIS_DISPLAY_STATIONTYPE_CHAR[];

   extern rif_int RIS_DISPLAY_LANE_STRING_MAX; /* maximum display string lengte */



/* declaratie rissim functies */
/* ========================== */
   void ris_default_simulation(void);
   void ris_simulation_itsstation_parameters(rif_string intersection, rif_int lane_id, rif_int fc, enum Rif_StationType stationtype, rif_int line_nr, rif_int priorequest, rif_int flow, rif_float heading, rif_float speed, rif_float d_speed, rif_float distance, rif_float d_distance, rif_float offset);
   void ris_simulation_lane2lane_parameters( rif_string fc1_intersection, rif_int fc1_lane_id, rif_int fc1,
                                             rif_string fc2_intersection, rif_int fc2_lane_id, rif_int fc2, rif_float fc2_distance, rif_float fc2_offset);  
   void ris_simulation_put_itsstation_pb(rif_string intersection, rif_int lane_id, rif_int fc, enum Rif_StationType stationType, rif_int line_nr, rif_int priorequest, rif_float heading, rif_float speed, rif_float distance, rif_float offset);

   void ris_simulation_put_itsstation_pb_ex(rif_string intersection, rif_int lane_id, rif_int fc, enum Rif_StationType stationType, rif_int line_nr, rif_int priorequest, rif_float heading, rif_float speed, rif_float distance, rif_float offset, enum Rif_VehicleRole role, enum Rif_VehicleSubRole subrole, rif_int eta, rif_int signalgroup_id, rif_int approach_id, rif_string routename, rif_int punctuality, rif_int importance); /* @@@@ */
   void ris_simulation_put_itsstation_pb_ex2(rif_string intersection, rif_int lane_id, rif_int fc, enum Rif_StationType stationType, rif_int line_nr, rif_int priorequest, rif_float heading, rif_float speed, rif_float distance, rif_float offset, enum Rif_VehicleRole role, enum Rif_VehicleSubRole subrole, rif_int eta, rif_int signalgroup_id, rif_int approach_id, rif_string routename, rif_int punctuality, rif_int importance, rif_string intersection2, rif_int eta2, rif_int signalgroup_id2, rif_int approach_id2);

   void ris_simulation_generator(void);
   void ris_simulation_itsstation(void);
   void ris_simulation_priorequest(void);
   void ris_simulation(rif_int init); 

   /* ris display functies */
   /* -------------------- */
   void ris_display_lane_parameters(rif_string intersection, rif_int lane_id, rif_string lane_code, rif_float segment_length, rif_float display_length);
   void ris_display_lanes_itsstations(void);

   /* ris applicatie functies */
   /* ----------------------- */
   void ris_simulation_parameters(void);
   void ris_simulation_application(void);


#endif /* ifndef __RISSIMVAR_H */
