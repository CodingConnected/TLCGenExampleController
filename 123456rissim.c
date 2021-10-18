/* APPLICATIE RIS SIMULATIEPROGRAMMA */
/* --------------------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456rissim.c
      CCOL:   11.0
    TLCGEN:   0.10.2.0
   CCOLGEN:   0.10.2.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    06-07-2021   Cyril       basisversie
 * 1.1.0    27-07-2021   Peter       TISG-matrix toegevoegd
 * 1.4.0    19-08-2021   Cyril       TLCGen0.9.10.0; fc21+fc67 toegeveogd
 * 1.5.0    14-09-2021   Peter       Kleine aanpassingen m.b.t. TISG-matrix
 * 1.6.0    20-09-2021   Cyril       Nieuwe versie TLCGen (20092021 beta); handmatig Real_los + F11
 * 1.9.0    18-10-2021   Cyril       Filelussen en fc82 fc81 toegevoegd
 * 1.9.1    18-10-2021   Cyril       TAB.C: GK's tussen voedende richtingen als de nalopen met elkaar conflicteren en REG.C EXTRA_FUNC.H EXTRAFUN.C: testfaciliteiten voor interne koppelingen
 *
 ************************************************************************************/

/* INCLUDE FILES */
/* ============= */
#include <stdio.h>

#include "123456sys.h"
#include "cif.inc"            /* declaratie CIF_IS[]           */
#include "isvar.h"            /* declaratie IS[]               */
#include "rissimvar.c"        /* ris-simulatie variabelen      */
#include "xyprintf.h"         /* declaratie xyprintf-functie   */
#include "prmvar.h"           /* declaratie PRM[]              */

#if !defined AUTOMAAT && !defined AUTOMAAT_TEST
    extern boolv display;
#endif

/* RIS-FI - ObjectID<Intersection, LaneID en ObjectID<SIgnalGroupID> */
/* ================================================================= */
/* The ID of the intersection can be retrieved from the ITF controlData section, 
 * element “name” in “controlledIntersection” (SYSTEM_ITF).
 * The LaneNr is a unique number within the intersection (LaneID).
 * The (TLC) ID of the signal group can be retrieved from the ITF controlData section, 
 * element “name” in “sg” (FC_code[]).
 */
/*RIS SIMULATIE PARAMETERS */
/*======================== */

void ris_simulation_parameters(void)
{
    #ifdef RISSIMULATIE
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid21_1], fc21, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid22_1], fc22, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid24_1], fc24, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid26_1], fc26, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid28_1], fc28, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid31_1], fc31, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid31_2], fc31, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid32_1], fc32, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid32_2], fc32, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid33_1], fc33, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid33_2], fc33, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid34_1], fc34, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid34_2], fc34, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid38_1], fc38, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid38_2], fc38, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 0, 5, 10, 15, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_BUS, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_SPECIALVEHICLES, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 0, 50, 10, 300, 10, 1);
    ris_simulation_itsstation_parameters(SYSTEM_ITF, PRM[prmrislaneid84_1], fc84, RIF_STATIONTYPE_CYCLIST, 0, 1, 0, 15, 10, 100, 10, 1);
    #endif /* RISSIMULATIE */

    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], "02-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], "02-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], "02-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_1], "02-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], "02-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], "02-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], "02-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid02_2], "02-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], "03-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], "03-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], "03-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid03_1], "03-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], "05-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], "05-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], "05-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid05_1], "05-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], "08-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], "08-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], "08-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_1], "08-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], "08-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], "08-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], "08-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid08_2], "08-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], "09-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], "09-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], "09-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid09_1], "09-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], "11-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], "11-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], "11-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid11_1], "11-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid21_1], "21-1", 2, 100);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid22_1], "22-1", 2, 100);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid24_1], "24-1", 2, 100);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid26_1], "26-1", 2, 100);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid28_1], "28-1", 2, 100);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid31_1], "31-1", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid31_2], "31-2", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid32_1], "32-1", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid32_2], "32-2", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid33_1], "33-1", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid33_2], "33-2", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid34_1], "34-1", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid34_2], "34-2", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid38_1], "38-1", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid38_2], "38-2", 1, 50);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], "61-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], "61-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], "61-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid61_1], "61-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], "62-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], "62-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], "62-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_1], "62-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], "62-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], "62-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], "62-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid62_2], "62-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], "67-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], "67-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], "67-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid67_1], "67-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], "68-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], "68-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], "68-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_1], "68-1", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], "68-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], "68-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], "68-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid68_2], "68-2", 6, 300);
    ris_display_lane_parameters(SYSTEM_ITF, PRM[prmrislaneid84_1], "84-1", 2, 100);
}

/* RIS SIMULATIE APPLICATIE */
/* ======================== */

#define SIS(is)  (IS[is] && !IS_old[is])
void ris_simulation_application(void)
{
    #if (!defined AUTOMAAT_TEST)
    char buffer[128];
    if (SIS(isris021car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris021bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc02,PRM[prmrisapproachid02],buffer,123,11);
    }
    if (SIS(isris021special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid02],"NG",123,15);
    }
    if (SIS(isris021heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_1], fc02, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc02,PRM[prmrisapproachid02],buffer,123,11);
    }
    if (SIS(isris022car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris022bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc02,PRM[prmrisapproachid02],buffer,123,11);
    }
    if (SIS(isris022special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid02],"NG",123,15);
    }
    if (SIS(isris022heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid02_2], fc02, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc02,PRM[prmrisapproachid02],buffer,123,11);
    }
    if (SIS(isris031car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris031bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc03,PRM[prmrisapproachid03],buffer,123,11);
    }
    if (SIS(isris031special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid03],"NG",123,15);
    }
    if (SIS(isris031heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid03_1], fc03, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc03,PRM[prmrisapproachid03],buffer,123,11);
    }
    if (SIS(isris051car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris051bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc05,PRM[prmrisapproachid05],buffer,123,11);
    }
    if (SIS(isris051special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid05],"NG",123,15);
    }
    if (SIS(isris051heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid05_1], fc05, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc05,PRM[prmrisapproachid05],buffer,123,11);
    }
    if (SIS(isris081car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris081bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc08,PRM[prmrisapproachid08],buffer,123,11);
    }
    if (SIS(isris081special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid08],"NG",123,15);
    }
    if (SIS(isris081heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_1], fc08, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc08,PRM[prmrisapproachid08],buffer,123,11);
    }
    if (SIS(isris082car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris082bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc08,PRM[prmrisapproachid08],buffer,123,11);
    }
    if (SIS(isris082special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid08],"NG",123,15);
    }
    if (SIS(isris082heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid08_2], fc08, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc08,PRM[prmrisapproachid08],buffer,123,11);
    }
    if (SIS(isris091car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris091bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc09,PRM[prmrisapproachid09],buffer,123,11);
    }
    if (SIS(isris091special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid09],"NG",123,15);
    }
    if (SIS(isris091heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid09_1], fc09, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc09,PRM[prmrisapproachid09],buffer,123,11);
    }
    if (SIS(isris111car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris111bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc11,PRM[prmrisapproachid11],buffer,123,11);
    }
    if (SIS(isris111special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid11],"NG",123,15);
    }
    if (SIS(isris111heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid11_1], fc11, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc11,PRM[prmrisapproachid11],buffer,123,11);
    }
    if (SIS(isris211cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid21_1], fc21, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);
    if (SIS(isris221cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid22_1], fc22, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);
    if (SIS(isris241cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid24_1], fc24, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);
    if (SIS(isris261cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid26_1], fc26, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);
    if (SIS(isris281cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid28_1], fc28, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);
    if (SIS(isris311pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid31_1], fc31, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris312pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid31_2], fc31, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris321pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid32_1], fc32, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris322pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid32_2], fc32, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris331pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid33_1], fc33, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris332pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid33_2], fc33, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris341pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid34_1], fc34, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris342pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid34_2], fc34, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris381pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid38_1], fc38, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris382pedestrian)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid38_2], fc38, RIF_STATIONTYPE_PEDESTRIAN, 0, 1, 5, 15, 1);
    if (SIS(isris611car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris611bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc61,PRM[prmrisapproachid61],buffer,123,11);
    }
    if (SIS(isris611special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid61],"NG",123,15);
    }
    if (SIS(isris611heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid61_1], fc61, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc61,PRM[prmrisapproachid61],buffer,123,11);
    }
    if (SIS(isris621car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris621bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc62,PRM[prmrisapproachid62],buffer,123,11);
    }
    if (SIS(isris621special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid62],"NG",123,15);
    }
    if (SIS(isris621heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_1], fc62, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc62,PRM[prmrisapproachid62],buffer,123,11);
    }
    if (SIS(isris622car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris622bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc62,PRM[prmrisapproachid62],buffer,123,11);
    }
    if (SIS(isris622special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid62],"NG",123,15);
    }
    if (SIS(isris622heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid62_2], fc62, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc62,PRM[prmrisapproachid62],buffer,123,11);
    }
    if (SIS(isris671car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris671bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc67,PRM[prmrisapproachid67],buffer,123,11);
    }
    if (SIS(isris671special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid67],"NG",123,15);
    }
    if (SIS(isris671heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid67_1], fc67, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc67,PRM[prmrisapproachid67],buffer,123,11);
    }
    if (SIS(isris681car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris681bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc68,PRM[prmrisapproachid68],buffer,123,11);
    }
    if (SIS(isris681special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid68],"NG",123,15);
    }
    if (SIS(isris681heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_1], fc68, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc68,PRM[prmrisapproachid68],buffer,123,11);
    }
    if (SIS(isris682car)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_PASSENGERCAR, 0, 0, 50, 300, 1);
    if (SIS(isris682bus)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_BUS, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_PUBLICTRANSPORT,RIF_VEHICLESUBROLE_BUS,25,fc68,PRM[prmrisapproachid68],buffer,123,11);
    }
    if (SIS(isris682special)) {
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_SPECIALVEHICLES, -1, 1, 50, 300, 1,RIF_VEHICLEROLE_EMERGENCY,RIF_VEHICLESUBROLE_EMERGENCY,25,NG,PRM[prmrisapproachid68],"NG",123,15);
    }
    if (SIS(isris682heavytruck)) {
        sprintf(buffer, "");
        ris_simulation_put_itsstation_pb_ex(SYSTEM_ITF, PRM[prmrislaneid68_2], fc68, RIF_STATIONTYPE_HEAVYTRUCK, 0, 1, 50, 300, 1,RIF_VEHICLEROLE_COMMERCIAL,RIF_VEHICLESUBROLE_EXPRESSTRANSIT,25,fc68,PRM[prmrisapproachid68],buffer,123,11);
    }
    if (SIS(isris841cyclist)) ris_simulation_put_itsstation_pb(SYSTEM_ITF, PRM[prmrislaneid84_1], fc84, RIF_STATIONTYPE_CYCLIST, 0, 1, 15, 100, 1);

    /* Display ris_lanes met ItsStations */
    /* --------------------------------- */
    if (display) {
        xyprintf(32, 16, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid02_1]]);
        xyprintf(32, 17, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid02_2]]);
        xyprintf(32, 18, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid03_1]]);
        xyprintf(32, 19, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid05_1]]);
        xyprintf(32, 20, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid08_1]]);
        xyprintf(32, 21, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid08_2]]);
        xyprintf(32, 22, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid09_1]]);
        xyprintf(32, 23, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid11_1]]);
        xyprintf(32, 24, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid21_1]]);
        xyprintf(32, 25, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid22_1]]);
        xyprintf(32, 26, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid24_1]]);
        xyprintf(32, 27, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid26_1]]);
        xyprintf(32, 28, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid28_1]]);
        xyprintf(32, 29, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid31_1]]);
        xyprintf(32, 30, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid31_2]]);
        xyprintf(32, 31, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid32_1]]);
        xyprintf(32, 32, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid32_2]]);
        xyprintf(32, 33, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid33_1]]);
        xyprintf(32, 34, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid33_2]]);
        xyprintf(32, 35, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid34_1]]);
        xyprintf(32, 36, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid34_2]]);
        xyprintf(32, 37, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid38_1]]);
        xyprintf(32, 38, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid38_2]]);
        xyprintf(32, 39, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid61_1]]);
        xyprintf(32, 40, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid62_1]]);
        xyprintf(32, 41, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid62_2]]);
        xyprintf(32, 42, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid67_1]]);
        xyprintf(32, 43, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid68_1]]);
        xyprintf(32, 44, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid68_2]]);
        xyprintf(32, 45, "%s", RIS_DISPLAY_LANE_STRING[PRM[prmrislaneid84_1]]);
    }

    /* Display aantal ItsStations en PrioRequests */
    /* ------------------------------------------ */  
    if (display) {
        xyprintf(32, 47, "ItsStation  =% -3d ItsStation - Ex =% -3d", RIS_ITSSTATION_AP_NUMBER,  RIS_ITSSTATION_EX_AP_NUMBER);
        xyprintf(32, 48, "PrioRequest =% -3d PrioRequest_Ex  =% -3d", RIS_PRIOREQUEST_AP_NUMBER, RIS_PRIOREQUEST_EX_AP_NUMBER);
    }
    #endif
}
