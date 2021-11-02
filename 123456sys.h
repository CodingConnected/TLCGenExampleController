/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
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
 * 1.10.0   18-10-2021   Cyril       Interne koppeling geoptimaliseerd
 * 1.11.0   21-10-2021   Cyril       Nieuwe versie TLCGen (21102021 beta)
 * 1.12.0   02-11-2021   Cyril       Nieuwe versie TLCGen (01112021 beta)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.12.0 20211102"
#define TVGAMAX /* gebruik van TVGA_max[] */

/* fasecycli */
/* --------- */
    #define fc02   0
    #define fc03   1
    #define fc05   2
    #define fc08   3
    #define fc09   4
    #define fc11   5
    #define fc21   6
    #define fc22   7
    #define fc24   8
    #define fc26   9
    #define fc28  10
    #define fc31  11
    #define fc32  12
    #define fc33  13
    #define fc34  14
    #define fc38  15
    #define fc61  16
    #define fc62  17
    #define fc67  18
    #define fc68  19
    #define fc81  20
    #define fc82  21
    #define fc84  22
    #define FCMAX1 23 /* aantal fasecycli */

/* overige uitgangen */
/* ----------------- */
    #define ussegm1        (FCMAX +  0) /* Aansturing segmenten display               */
    #define ussegm2        (FCMAX +  1) /* Aansturing segmenten display               */
    #define ussegm3        (FCMAX +  2) /* Aansturing segmenten display               */
    #define ussegm4        (FCMAX +  3) /* Aansturing segmenten display               */
    #define ussegm5        (FCMAX +  4) /* Aansturing segmenten display               */
    #define ussegm6        (FCMAX +  5) /* Aansturing segmenten display               */
    #define ussegm7        (FCMAX +  6) /* Aansturing segmenten display               */
    #define usML1          (FCMAX +  7) /* Verklikken actief zijn ML1                 */
    #define usML2          (FCMAX +  8) /* Verklikken actief zijn ML2                 */
    #define usML3          (FCMAX +  9) /* Verklikken actief zijn ML3                 */
    #define usML4          (FCMAX + 10) /* Verklikken actief zijn ML4                 */
    #define usfileFile68af (FCMAX + 11) /* File ingreep File68af actief               */
    #define usovtevroeg02  (FCMAX + 12) /* Voorste OV voertuig bij 02 te vroeg        */
    #define usovoptijd02   (FCMAX + 13) /* Voorste OV voertuig bij 02 op tijd         */
    #define usovtelaat02   (FCMAX + 14) /* Voorste OV voertuig bij 02 te laat         */
    #define usovtevroeg03  (FCMAX + 15) /* Voorste OV voertuig bij 03 te vroeg        */
    #define usovoptijd03   (FCMAX + 16) /* Voorste OV voertuig bij 03 op tijd         */
    #define usovtelaat03   (FCMAX + 17) /* Voorste OV voertuig bij 03 te laat         */
    #define usovtevroeg05  (FCMAX + 18) /* Voorste OV voertuig bij 05 te vroeg        */
    #define usovoptijd05   (FCMAX + 19) /* Voorste OV voertuig bij 05 op tijd         */
    #define usovtelaat05   (FCMAX + 20) /* Voorste OV voertuig bij 05 te laat         */
    #define usovtevroeg08  (FCMAX + 21) /* Voorste OV voertuig bij 08 te vroeg        */
    #define usovoptijd08   (FCMAX + 22) /* Voorste OV voertuig bij 08 op tijd         */
    #define usovtelaat08   (FCMAX + 23) /* Voorste OV voertuig bij 08 te laat         */
    #define usovtevroeg09  (FCMAX + 24) /* Voorste OV voertuig bij 09 te vroeg        */
    #define usovoptijd09   (FCMAX + 25) /* Voorste OV voertuig bij 09 op tijd         */
    #define usovtelaat09   (FCMAX + 26) /* Voorste OV voertuig bij 09 te laat         */
    #define usovtevroeg11  (FCMAX + 27) /* Voorste OV voertuig bij 11 te vroeg        */
    #define usovoptijd11   (FCMAX + 28) /* Voorste OV voertuig bij 11 op tijd         */
    #define usovtelaat11   (FCMAX + 29) /* Voorste OV voertuig bij 11 te laat         */
    #define usovtevroeg61  (FCMAX + 30) /* Voorste OV voertuig bij 61 te vroeg        */
    #define usovoptijd61   (FCMAX + 31) /* Voorste OV voertuig bij 61 op tijd         */
    #define usovtelaat61   (FCMAX + 32) /* Voorste OV voertuig bij 61 te laat         */
    #define usovtevroeg62  (FCMAX + 33) /* Voorste OV voertuig bij 62 te vroeg        */
    #define usovoptijd62   (FCMAX + 34) /* Voorste OV voertuig bij 62 op tijd         */
    #define usovtelaat62   (FCMAX + 35) /* Voorste OV voertuig bij 62 te laat         */
    #define usovtevroeg67  (FCMAX + 36) /* Voorste OV voertuig bij 67 te vroeg        */
    #define usovoptijd67   (FCMAX + 37) /* Voorste OV voertuig bij 67 op tijd         */
    #define usovtelaat67   (FCMAX + 38) /* Voorste OV voertuig bij 67 te laat         */
    #define usovtevroeg68  (FCMAX + 39) /* Voorste OV voertuig bij 68 te vroeg        */
    #define usovoptijd68   (FCMAX + 40) /* Voorste OV voertuig bij 68 op tijd         */
    #define usovtelaat68   (FCMAX + 41) /* Voorste OV voertuig bij 68 te laat         */
    #define usmaxwt        (FCMAX + 42) /* Verklikken maximale wachttijd overschreden */
    #define uskarmelding   (FCMAX + 43) /* Verklikken ontvangst melding KAR           */
    #define uskarog        (FCMAX + 44) /* Verklikken ondergedrag KAR                 */
    #define usovinm02      (FCMAX + 45) /* Verklikken inmelding OV fase 02            */
    #define usovinm03      (FCMAX + 46) /* Verklikken inmelding OV fase 03            */
    #define usovinm05      (FCMAX + 47) /* Verklikken inmelding OV fase 05            */
    #define usovinm08      (FCMAX + 48) /* Verklikken inmelding OV fase 08            */
    #define usovinm09      (FCMAX + 49) /* Verklikken inmelding OV fase 09            */
    #define usovinm11      (FCMAX + 50) /* Verklikken inmelding OV fase 11            */
    #define usovinm61      (FCMAX + 51) /* Verklikken inmelding OV fase 61            */
    #define usovinm62      (FCMAX + 52) /* Verklikken inmelding OV fase 62            */
    #define usovinm67      (FCMAX + 53) /* Verklikken inmelding OV fase 67            */
    #define usovinm68      (FCMAX + 54) /* Verklikken inmelding OV fase 68            */
    #define ushdinm02      (FCMAX + 55) /* Verklikken inmelding HD fase 02            */
    #define ushdinm03      (FCMAX + 56) /* Verklikken inmelding HD fase 03            */
    #define ushdinm05      (FCMAX + 57) /* Verklikken inmelding HD fase 05            */
    #define ushdinm08      (FCMAX + 58) /* Verklikken inmelding HD fase 08            */
    #define ushdinm09      (FCMAX + 59) /* Verklikken inmelding HD fase 09            */
    #define ushdinm11      (FCMAX + 60) /* Verklikken inmelding HD fase 11            */
    #define ushdinm61      (FCMAX + 61) /* Verklikken inmelding HD fase 61            */
    #define ushdinm62      (FCMAX + 62) /* Verklikken inmelding HD fase 62            */
    #define ushdinm67      (FCMAX + 63) /* Verklikken inmelding HD fase 67            */
    #define ushdinm68      (FCMAX + 64) /* Verklikken inmelding HD fase 68            */
    #define usperdef       (FCMAX + 65) /* Default periode actief                     */
    #define usper1         (FCMAX + 66) /* Periode Dag periode actief                 */
    #define usper2         (FCMAX + 67) /* Periode Ochtendspits actief                */
    #define usper3         (FCMAX + 68) /* Periode Avondspits actief                  */
    #define usper4         (FCMAX + 69) /* Periode Koopavond actief                   */
    #define usper5         (FCMAX + 70) /* Periode Weekend actief                     */
    #define usper6         (FCMAX + 71) /* Periode Reserve actief                     */
    #define usrgv          (FCMAX + 72) /* Verklikken actief zijn RoBuGrover          */
    #define uswtk21        (FCMAX + 73) /* Aansturing waitsignaal detector k21        */
    #define uswtk22        (FCMAX + 74) /* Aansturing waitsignaal detector k22        */
    #define uswtk24        (FCMAX + 75) /* Aansturing waitsignaal detector k24        */
    #define uswtk26        (FCMAX + 76) /* Aansturing waitsignaal detector k26        */
    #define uswtk28        (FCMAX + 77) /* Aansturing waitsignaal detector k28        */
    #define uswtk31a       (FCMAX + 78) /* Aansturing waitsignaal detector k31a       */
    #define uswtk31b       (FCMAX + 79) /* Aansturing waitsignaal detector k31b       */
    #define uswtk32a       (FCMAX + 80) /* Aansturing waitsignaal detector k32a       */
    #define uswtk32b       (FCMAX + 81) /* Aansturing waitsignaal detector k32b       */
    #define uswtk33a       (FCMAX + 82) /* Aansturing waitsignaal detector k33a       */
    #define uswtk33b       (FCMAX + 83) /* Aansturing waitsignaal detector k33b       */
    #define uswtk34a       (FCMAX + 84) /* Aansturing waitsignaal detector k34a       */
    #define uswtk34b       (FCMAX + 85) /* Aansturing waitsignaal detector k34b       */
    #define uswtk38a       (FCMAX + 86) /* Aansturing waitsignaal detector k38a       */
    #define uswtk38b       (FCMAX + 87) /* Aansturing waitsignaal detector k38b       */
    #define uswtk81        (FCMAX + 88) /* Aansturing waitsignaal detector k81        */
    #define uswtk82        (FCMAX + 89) /* Aansturing waitsignaal detector k82        */
    #define uswtk84        (FCMAX + 90) /* Aansturing waitsignaal detector k84        */
    #define USMAX1         (FCMAX + 91)

/* detectie */
/* -------- */
    #define d02_1a             0
    #define d02_1b             1
    #define d02_2a             2
    #define d02_2b             3
    #define d02_3a             4
    #define d02_3b             5
    #define d02_4a             6
    #define d02_4b             7
    #define d03_1              8
    #define d03_2              9
    #define d05_1             10
    #define d05_2             11
    #define d08_1a            12
    #define d08_1b            13
    #define d08_2a            14
    #define d08_2b            15
    #define d08_3a            16
    #define d08_3b            17
    #define d08_4a            18
    #define d08_4b            19
    #define d09_1             20
    #define d09_2             21
    #define d09_3             22
    #define d11_1             23
    #define d11_2             24
    #define d11_3             25
    #define d11_4             26
    #define d211              27
    #define dk21              28
    #define d22_1             29
    #define dk22              30
    #define d24_1             31
    #define d24_2             32
    #define d24_3             33
    #define dk24              34
    #define d261              35
    #define dk26              36
    #define d28_1             37
    #define d28_2             38
    #define dk28              39
    #define dk31a             40
    #define dk31b             41
    #define dk32a             42
    #define dk32b             43
    #define dk33a             44
    #define dk33b             45
    #define dk34a             46
    #define dk34b             47
    #define dk38a             48
    #define dk38b             49
    #define d61_1             50
    #define d61_2             51
    #define d62_1a            52
    #define d62_1b            53
    #define d62_2a            54
    #define d62_2b            55
    #define d67_1             56
    #define d67_2             57
    #define d68_1a            58
    #define d68_1b            59
    #define d68_2a            60
    #define d68_2b            61
    #define d68_9a            62
    #define d68_9b            63
    #define d81_1             64
    #define dk81              65
    #define d82_1             66
    #define dk82              67
    #define d84_1             68
    #define dk84              69
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define ddummykarin02bus  70
    #define ddummykarin03bus  71
    #define ddummykarin05bus  72
    #define ddummykarin08bus  73
    #define ddummykarin09bus  74
    #define ddummykarin11bus  75
    #define ddummykarin61bus  76
    #define ddummykarin62bus  77
    #define ddummykarin67bus  78
    #define ddummykarin68bus  79
    #define ddummykaruit02bus 80
    #define ddummykaruit03bus 81
    #define ddummykaruit05bus 82
    #define ddummykaruit08bus 83
    #define ddummykaruit09bus 84
    #define ddummykaruit11bus 85
    #define ddummykaruit61bus 86
    #define ddummykaruit62bus 87
    #define ddummykaruit67bus 88
    #define ddummykaruit68bus 89
    #define ddummyhdkarin02   90
    #define ddummyhdkaruit02  91
    #define ddummyhdkarin03   92
    #define ddummyhdkaruit03  93
    #define ddummyhdkarin05   94
    #define ddummyhdkaruit05  95
    #define ddummyhdkarin08   96
    #define ddummyhdkaruit08  97
    #define ddummyhdkarin09   98
    #define ddummyhdkaruit09  99
    #define ddummyhdkarin11   100
    #define ddummyhdkaruit11  101
    #define ddummyhdkarin61   102
    #define ddummyhdkaruit61  103
    #define ddummyhdkarin62   104
    #define ddummyhdkaruit62  105
    #define ddummyhdkarin67   106
    #define ddummyhdkaruit67  107
    #define ddummyhdkarin68   108
    #define ddummyhdkaruit68  109
    #define DPMAX1            110 /* aantal detectoren testomgeving */
#else
    #define DPMAX1            70 /* aantal detectoren automaat omgeving */
#endif

/* overige ingangen */
/* ---------------- */
    #define isfix              (DPMAX +  0) /* Fixatie regeling */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    #define isris021car        (DPMAX +  1)
    #define isris021bus        (DPMAX +  2)
    #define isris021special    (DPMAX +  3)
    #define isris021heavytruck (DPMAX +  4)
    #define isris022car        (DPMAX +  5)
    #define isris022bus        (DPMAX +  6)
    #define isris022special    (DPMAX +  7)
    #define isris022heavytruck (DPMAX +  8)
    #define isris031car        (DPMAX +  9)
    #define isris031bus        (DPMAX + 10)
    #define isris031special    (DPMAX + 11)
    #define isris031heavytruck (DPMAX + 12)
    #define isris051car        (DPMAX + 13)
    #define isris051bus        (DPMAX + 14)
    #define isris051special    (DPMAX + 15)
    #define isris051heavytruck (DPMAX + 16)
    #define isris081car        (DPMAX + 17)
    #define isris081bus        (DPMAX + 18)
    #define isris081special    (DPMAX + 19)
    #define isris081heavytruck (DPMAX + 20)
    #define isris082car        (DPMAX + 21)
    #define isris082bus        (DPMAX + 22)
    #define isris082special    (DPMAX + 23)
    #define isris082heavytruck (DPMAX + 24)
    #define isris091car        (DPMAX + 25)
    #define isris091bus        (DPMAX + 26)
    #define isris091special    (DPMAX + 27)
    #define isris091heavytruck (DPMAX + 28)
    #define isris111car        (DPMAX + 29)
    #define isris111bus        (DPMAX + 30)
    #define isris111special    (DPMAX + 31)
    #define isris111heavytruck (DPMAX + 32)
    #define isris211cyclist    (DPMAX + 33)
    #define isris221cyclist    (DPMAX + 34)
    #define isris241cyclist    (DPMAX + 35)
    #define isris261cyclist    (DPMAX + 36)
    #define isris281cyclist    (DPMAX + 37)
    #define isris311pedestrian (DPMAX + 38)
    #define isris312pedestrian (DPMAX + 39)
    #define isris321pedestrian (DPMAX + 40)
    #define isris322pedestrian (DPMAX + 41)
    #define isris331pedestrian (DPMAX + 42)
    #define isris332pedestrian (DPMAX + 43)
    #define isris341pedestrian (DPMAX + 44)
    #define isris342pedestrian (DPMAX + 45)
    #define isris381pedestrian (DPMAX + 46)
    #define isris382pedestrian (DPMAX + 47)
    #define isris611car        (DPMAX + 48)
    #define isris611bus        (DPMAX + 49)
    #define isris611special    (DPMAX + 50)
    #define isris611heavytruck (DPMAX + 51)
    #define isris621car        (DPMAX + 52)
    #define isris621bus        (DPMAX + 53)
    #define isris621special    (DPMAX + 54)
    #define isris621heavytruck (DPMAX + 55)
    #define isris622car        (DPMAX + 56)
    #define isris622bus        (DPMAX + 57)
    #define isris622special    (DPMAX + 58)
    #define isris622heavytruck (DPMAX + 59)
    #define isris671car        (DPMAX + 60)
    #define isris671bus        (DPMAX + 61)
    #define isris671special    (DPMAX + 62)
    #define isris671heavytruck (DPMAX + 63)
    #define isris681car        (DPMAX + 64)
    #define isris681bus        (DPMAX + 65)
    #define isris681special    (DPMAX + 66)
    #define isris681heavytruck (DPMAX + 67)
    #define isris682car        (DPMAX + 68)
    #define isris682bus        (DPMAX + 69)
    #define isris682special    (DPMAX + 70)
    #define isris682heavytruck (DPMAX + 71)
    #define isris841cyclist    (DPMAX + 72)
    #define ISMAX1             (DPMAX + 73)
#else
    #define ISMAX1             (DPMAX +  1)
#endif

/* hulp elementen */
/* -------------- */
    #define hopdrempelen02       0 /* Opdrempelen toepassen voor fase 02                                 */
    #define hgeendynhiaat02      1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 02          */
    #define hverleng_02_1a       2 /* Instructie verlengen op detector 02_1a ongeacht dynamische hiaat   */
    #define hverleng_02_1b       3 /* Instructie verlengen op detector 02_1b ongeacht dynamische hiaat   */
    #define hverleng_02_2a       4 /* Instructie verlengen op detector 02_2a ongeacht dynamische hiaat   */
    #define hverleng_02_2b       5 /* Instructie verlengen op detector 02_2b ongeacht dynamische hiaat   */
    #define hverleng_02_3a       6 /* Instructie verlengen op detector 02_3a ongeacht dynamische hiaat   */
    #define hverleng_02_3b       7 /* Instructie verlengen op detector 02_3b ongeacht dynamische hiaat   */
    #define hverleng_02_4a       8 /* Instructie verlengen op detector 02_4a ongeacht dynamische hiaat   */
    #define hverleng_02_4b       9 /* Instructie verlengen op detector 02_4b ongeacht dynamische hiaat   */
    #define hopdrempelen08      10 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08     11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a      12 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b      13 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a      14 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b      15 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a      16 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b      17 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a      18 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b      19 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09      20 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09     21 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1       22 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2       23 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3       24 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11      25 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11     26 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1       27 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2       28 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3       29 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4       30 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a            31 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b            32 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a            33 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b            34 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a            35 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b            36 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a            37 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b            38 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af       39 /* File File68af actief                                               */
    #define hfile68_9a          40 /* File 68_9a actief                                                  */
    #define hfile68_9b          41 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af  42 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af  43 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hnla11_1            44 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1            45 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a            46 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a            47 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a            48 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a            49 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1            50 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus           51 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus           52 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus           53 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus           54 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus           55 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus           56 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus           57 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus           58 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus           59 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus           60 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus          61 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus        62 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus       63 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar     64 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar    65 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03bus          66 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus        67 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus       68 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar     69 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar    70 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05bus          71 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus        72 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus       73 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar     74 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar    75 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08bus          76 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus        77 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus       78 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar     79 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar    80 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09bus          81 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus        82 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus       83 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar     84 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar    85 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11bus          86 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus        87 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus       88 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar     89 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar    90 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio61bus          91 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus        92 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus       93 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar     94 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar    95 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62bus          96 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus        97 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus       98 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar     99 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar   100 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67bus         101 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus       102 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus      103 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar    104 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar   105 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68bus         106 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus       107 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus      108 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar    109 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar   110 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02              111 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02            112 /* HD inmelding 02                                                    */
    #define hhduit02           113 /* HD uitmelding 02                                                   */
    #define hhdin02kar         114 /* HD inmelding 02                                                    */
    #define hhduit02kar        115 /* HD uitmelding 02                                                   */
    #define hhd03              116 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03            117 /* HD inmelding 03                                                    */
    #define hhduit03           118 /* HD uitmelding 03                                                   */
    #define hhdin03kar         119 /* HD inmelding 03                                                    */
    #define hhduit03kar        120 /* HD uitmelding 03                                                   */
    #define hhd05              121 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05            122 /* HD inmelding 05                                                    */
    #define hhduit05           123 /* HD uitmelding 05                                                   */
    #define hhdin05kar         124 /* HD inmelding 05                                                    */
    #define hhduit05kar        125 /* HD uitmelding 05                                                   */
    #define hhd08              126 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08            127 /* HD inmelding 08                                                    */
    #define hhduit08           128 /* HD uitmelding 08                                                   */
    #define hhdin08kar         129 /* HD inmelding 08                                                    */
    #define hhduit08kar        130 /* HD uitmelding 08                                                   */
    #define hhd09              131 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09            132 /* HD inmelding 09                                                    */
    #define hhduit09           133 /* HD uitmelding 09                                                   */
    #define hhdin09kar         134 /* HD inmelding 09                                                    */
    #define hhduit09kar        135 /* HD uitmelding 09                                                   */
    #define hhd11              136 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11            137 /* HD inmelding 11                                                    */
    #define hhduit11           138 /* HD uitmelding 11                                                   */
    #define hhdin11kar         139 /* HD inmelding 11                                                    */
    #define hhduit11kar        140 /* HD uitmelding 11                                                   */
    #define hhd61              141 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61            142 /* HD inmelding 61                                                    */
    #define hhduit61           143 /* HD uitmelding 61                                                   */
    #define hhdin61kar         144 /* HD inmelding 61                                                    */
    #define hhduit61kar        145 /* HD uitmelding 61                                                   */
    #define hhd62              146 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62            147 /* HD inmelding 62                                                    */
    #define hhduit62           148 /* HD uitmelding 62                                                   */
    #define hhdin62kar         149 /* HD inmelding 62                                                    */
    #define hhduit62kar        150 /* HD uitmelding 62                                                   */
    #define hhd67              151 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67            152 /* HD inmelding 67                                                    */
    #define hhduit67           153 /* HD uitmelding 67                                                   */
    #define hhdin67kar         154 /* HD inmelding 67                                                    */
    #define hhduit67kar        155 /* HD uitmelding 67                                                   */
    #define hhd68              156 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68            157 /* HD inmelding 68                                                    */
    #define hhduit68           158 /* HD uitmelding 68                                                   */
    #define hhdin68kar         159 /* HD inmelding 68                                                    */
    #define hhduit68kar        160 /* HD uitmelding 68                                                   */
    #define hrgvd24_3_d24_2    161 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact            162 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02          163 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03          164 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05          165 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08          166 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09          167 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11          168 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22          169 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28          170 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68          171 /* Bijhouden primaire realisatie fase 68                              */
    #define hnleg0262          172
    #define hnleg0868          173
    #define hnleg1168          174
    #define hnleg2221          175
    #define hnlsg3132          176
    #define hnlsg3231          177
    #define hnlsg3334          178
    #define hnlsg3433          179
    #define hnleg8281          180
    #define hinl32             181 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32             182 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31             183 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31             184 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34             185 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34             186 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33             187 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33             188 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62             189 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68             190 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21             191 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81             192 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1             193

/* geheugen elementen */
/* ------------------ */
    #define mperiod          0 /* Onthouden actieve periode                                    */
    #define mmk02            1 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 02 */
    #define mmk03            2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    #define mmk05            3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    #define mmk08            4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    #define mmk09            5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    #define mmk11            6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    #define mmk61            7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    #define mmk62            8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    #define mmk67            9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    #define mmk68           10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    #define mstp02bus       11 /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    #define mstp03bus       12 /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    #define mstp05bus       13 /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    #define mstp08bus       14 /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    #define mstp09bus       15 /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    #define mstp11bus       16 /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    #define mstp61bus       17 /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    #define mstp62bus       18 /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    #define mstp67bus       19 /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    #define mstp68bus       20 /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    #define mrealtijd02     21 /* Realisatie tijd fase 02                                      */
    #define mrealtijd03     22 /* Realisatie tijd fase 03                                      */
    #define mrealtijd05     23 /* Realisatie tijd fase 05                                      */
    #define mrealtijd08     24 /* Realisatie tijd fase 08                                      */
    #define mrealtijd09     25 /* Realisatie tijd fase 09                                      */
    #define mrealtijd11     26 /* Realisatie tijd fase 11                                      */
    #define mrealtijd21     27 /* Realisatie tijd fase 21                                      */
    #define mrealtijd22     28 /* Realisatie tijd fase 22                                      */
    #define mrealtijd24     29 /* Realisatie tijd fase 24                                      */
    #define mrealtijd26     30 /* Realisatie tijd fase 26                                      */
    #define mrealtijd28     31 /* Realisatie tijd fase 28                                      */
    #define mrealtijd31     32 /* Realisatie tijd fase 31                                      */
    #define mrealtijd32     33 /* Realisatie tijd fase 32                                      */
    #define mrealtijd33     34 /* Realisatie tijd fase 33                                      */
    #define mrealtijd34     35 /* Realisatie tijd fase 34                                      */
    #define mrealtijd38     36 /* Realisatie tijd fase 38                                      */
    #define mrealtijd61     37 /* Realisatie tijd fase 61                                      */
    #define mrealtijd62     38 /* Realisatie tijd fase 62                                      */
    #define mrealtijd67     39 /* Realisatie tijd fase 67                                      */
    #define mrealtijd68     40 /* Realisatie tijd fase 68                                      */
    #define mrealtijd81     41 /* Realisatie tijd fase 81                                      */
    #define mrealtijd82     42 /* Realisatie tijd fase 82                                      */
    #define mrealtijd84     43 /* Realisatie tijd fase 84                                      */
    #define mrealtijdmin02  44 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03  45 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05  46 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08  47 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09  48 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11  49 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21  50 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22  51 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24  52 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26  53 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28  54 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31  55 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32  56 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33  57 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34  58 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38  59 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61  60 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62  61 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67  62 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68  63 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin81  64 /* Realisatie minimum tijd fase 81                              */
    #define mrealtijdmin82  65 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin84  66 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02  67 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03  68 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05  69 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08  70 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09  71 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11  72 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21  73 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22  74 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24  75 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26  76 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28  77 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31  78 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32  79 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33  80 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34  81 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38  82 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61  83 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62  84 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67  85 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68  86 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax81  87 /* Realisatie maximum tijd fase 81                              */
    #define mrealtijdmax82  88 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax84  89 /* Realisatie maximum tijd fase 84                              */
    #define mar02           90 /* Alternatieve ruimte fase 02                                  */
    #define mar03           91 /* Alternatieve ruimte fase 03                                  */
    #define mar05           92 /* Alternatieve ruimte fase 05                                  */
    #define mar08           93 /* Alternatieve ruimte fase 08                                  */
    #define mar09           94 /* Alternatieve ruimte fase 09                                  */
    #define mar11           95 /* Alternatieve ruimte fase 11                                  */
    #define mar21           96 /* Alternatieve ruimte fase 21                                  */
    #define mar22           97 /* Alternatieve ruimte fase 22                                  */
    #define mar24           98 /* Alternatieve ruimte fase 24                                  */
    #define mar26           99 /* Alternatieve ruimte fase 26                                  */
    #define mar28          100 /* Alternatieve ruimte fase 28                                  */
    #define mar31          101 /* Alternatieve ruimte fase 31                                  */
    #define mar32          102 /* Alternatieve ruimte fase 32                                  */
    #define mar33          103 /* Alternatieve ruimte fase 33                                  */
    #define mar34          104 /* Alternatieve ruimte fase 34                                  */
    #define mar38          105 /* Alternatieve ruimte fase 38                                  */
    #define mar61          106 /* Alternatieve ruimte fase 61                                  */
    #define mar62          107 /* Alternatieve ruimte fase 62                                  */
    #define mar67          108 /* Alternatieve ruimte fase 67                                  */
    #define mar68          109 /* Alternatieve ruimte fase 68                                  */
    #define mar81          110 /* Alternatieve ruimte fase 81                                  */
    #define mar82          111 /* Alternatieve ruimte fase 82                                  */
    #define mar84          112 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1         113

/* tijd elementen */
/* -------------- */
    #define t02_1a_1                     0 /* Dynamische hiaattijden moment 1 voor detector 02_1a                                      */
    #define t02_1a_2                     1 /* Dynamische hiaattijden moment 2 voor detector 02_1a                                      */
    #define ttdh_02_1a_1                 2 /* Dynamische hiaattijden TDH 1 voor detector 02_1a                                         */
    #define ttdh_02_1a_2                 3 /* Dynamische hiaattijden TDH 2 voor detector 02_1a                                         */
    #define tmax_02_1a                   4 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1a                               */
    #define t02_1b_1                     5 /* Dynamische hiaattijden moment 1 voor detector 02_1b                                      */
    #define t02_1b_2                     6 /* Dynamische hiaattijden moment 2 voor detector 02_1b                                      */
    #define ttdh_02_1b_1                 7 /* Dynamische hiaattijden TDH 1 voor detector 02_1b                                         */
    #define ttdh_02_1b_2                 8 /* Dynamische hiaattijden TDH 2 voor detector 02_1b                                         */
    #define tmax_02_1b                   9 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1b                               */
    #define t02_2a_1                    10 /* Dynamische hiaattijden moment 1 voor detector 02_2a                                      */
    #define t02_2a_2                    11 /* Dynamische hiaattijden moment 2 voor detector 02_2a                                      */
    #define ttdh_02_2a_1                12 /* Dynamische hiaattijden TDH 1 voor detector 02_2a                                         */
    #define ttdh_02_2a_2                13 /* Dynamische hiaattijden TDH 2 voor detector 02_2a                                         */
    #define tmax_02_2a                  14 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2a                               */
    #define t02_2b_1                    15 /* Dynamische hiaattijden moment 1 voor detector 02_2b                                      */
    #define t02_2b_2                    16 /* Dynamische hiaattijden moment 2 voor detector 02_2b                                      */
    #define ttdh_02_2b_1                17 /* Dynamische hiaattijden TDH 1 voor detector 02_2b                                         */
    #define ttdh_02_2b_2                18 /* Dynamische hiaattijden TDH 2 voor detector 02_2b                                         */
    #define tmax_02_2b                  19 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2b                               */
    #define t02_3a_1                    20 /* Dynamische hiaattijden moment 1 voor detector 02_3a                                      */
    #define t02_3a_2                    21 /* Dynamische hiaattijden moment 2 voor detector 02_3a                                      */
    #define ttdh_02_3a_1                22 /* Dynamische hiaattijden TDH 1 voor detector 02_3a                                         */
    #define ttdh_02_3a_2                23 /* Dynamische hiaattijden TDH 2 voor detector 02_3a                                         */
    #define tmax_02_3a                  24 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3a                               */
    #define t02_3b_1                    25 /* Dynamische hiaattijden moment 1 voor detector 02_3b                                      */
    #define t02_3b_2                    26 /* Dynamische hiaattijden moment 2 voor detector 02_3b                                      */
    #define ttdh_02_3b_1                27 /* Dynamische hiaattijden TDH 1 voor detector 02_3b                                         */
    #define ttdh_02_3b_2                28 /* Dynamische hiaattijden TDH 2 voor detector 02_3b                                         */
    #define tmax_02_3b                  29 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3b                               */
    #define t02_4a_1                    30 /* Dynamische hiaattijden moment 1 voor detector 02_4a                                      */
    #define t02_4a_2                    31 /* Dynamische hiaattijden moment 2 voor detector 02_4a                                      */
    #define ttdh_02_4a_1                32 /* Dynamische hiaattijden TDH 1 voor detector 02_4a                                         */
    #define ttdh_02_4a_2                33 /* Dynamische hiaattijden TDH 2 voor detector 02_4a                                         */
    #define tmax_02_4a                  34 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4a                               */
    #define t02_4b_1                    35 /* Dynamische hiaattijden moment 1 voor detector 02_4b                                      */
    #define t02_4b_2                    36 /* Dynamische hiaattijden moment 2 voor detector 02_4b                                      */
    #define ttdh_02_4b_1                37 /* Dynamische hiaattijden TDH 1 voor detector 02_4b                                         */
    #define ttdh_02_4b_2                38 /* Dynamische hiaattijden TDH 2 voor detector 02_4b                                         */
    #define tmax_02_4b                  39 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4b                               */
    #define t08_1a_1                    40 /* Dynamische hiaattijden moment 1 voor detector 08_1a                                      */
    #define t08_1a_2                    41 /* Dynamische hiaattijden moment 2 voor detector 08_1a                                      */
    #define ttdh_08_1a_1                42 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                                         */
    #define ttdh_08_1a_2                43 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                                         */
    #define tmax_08_1a                  44 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a                               */
    #define t08_1b_1                    45 /* Dynamische hiaattijden moment 1 voor detector 08_1b                                      */
    #define t08_1b_2                    46 /* Dynamische hiaattijden moment 2 voor detector 08_1b                                      */
    #define ttdh_08_1b_1                47 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                                         */
    #define ttdh_08_1b_2                48 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                                         */
    #define tmax_08_1b                  49 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b                               */
    #define t08_2a_1                    50 /* Dynamische hiaattijden moment 1 voor detector 08_2a                                      */
    #define t08_2a_2                    51 /* Dynamische hiaattijden moment 2 voor detector 08_2a                                      */
    #define ttdh_08_2a_1                52 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                                         */
    #define ttdh_08_2a_2                53 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                                         */
    #define tmax_08_2a                  54 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a                               */
    #define t08_2b_1                    55 /* Dynamische hiaattijden moment 1 voor detector 08_2b                                      */
    #define t08_2b_2                    56 /* Dynamische hiaattijden moment 2 voor detector 08_2b                                      */
    #define ttdh_08_2b_1                57 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                                         */
    #define ttdh_08_2b_2                58 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                                         */
    #define tmax_08_2b                  59 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b                               */
    #define t08_3a_1                    60 /* Dynamische hiaattijden moment 1 voor detector 08_3a                                      */
    #define t08_3a_2                    61 /* Dynamische hiaattijden moment 2 voor detector 08_3a                                      */
    #define ttdh_08_3a_1                62 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                                         */
    #define ttdh_08_3a_2                63 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                                         */
    #define tmax_08_3a                  64 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a                               */
    #define t08_3b_1                    65 /* Dynamische hiaattijden moment 1 voor detector 08_3b                                      */
    #define t08_3b_2                    66 /* Dynamische hiaattijden moment 2 voor detector 08_3b                                      */
    #define ttdh_08_3b_1                67 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                                         */
    #define ttdh_08_3b_2                68 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                                         */
    #define tmax_08_3b                  69 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b                               */
    #define t08_4a_1                    70 /* Dynamische hiaattijden moment 1 voor detector 08_4a                                      */
    #define t08_4a_2                    71 /* Dynamische hiaattijden moment 2 voor detector 08_4a                                      */
    #define ttdh_08_4a_1                72 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                                         */
    #define ttdh_08_4a_2                73 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                                         */
    #define tmax_08_4a                  74 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a                               */
    #define t08_4b_1                    75 /* Dynamische hiaattijden moment 1 voor detector 08_4b                                      */
    #define t08_4b_2                    76 /* Dynamische hiaattijden moment 2 voor detector 08_4b                                      */
    #define ttdh_08_4b_1                77 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                                         */
    #define ttdh_08_4b_2                78 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                                         */
    #define tmax_08_4b                  79 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b                               */
    #define t09_1_1                     80 /* Dynamische hiaattijden moment 1 voor detector 09_1                                       */
    #define t09_1_2                     81 /* Dynamische hiaattijden moment 2 voor detector 09_1                                       */
    #define ttdh_09_1_1                 82 /* Dynamische hiaattijden TDH 1 voor detector 09_1                                          */
    #define ttdh_09_1_2                 83 /* Dynamische hiaattijden TDH 2 voor detector 09_1                                          */
    #define tmax_09_1                   84 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    #define t09_2_1                     85 /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    #define t09_2_2                     86 /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    #define ttdh_09_2_1                 87 /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    #define ttdh_09_2_2                 88 /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    #define tmax_09_2                   89 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    #define t09_3_1                     90 /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    #define t09_3_2                     91 /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    #define ttdh_09_3_1                 92 /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    #define ttdh_09_3_2                 93 /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    #define tmax_09_3                   94 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
    #define t11_1_1                     95 /* Dynamische hiaattijden moment 1 voor detector 11_1                                       */
    #define t11_1_2                     96 /* Dynamische hiaattijden moment 2 voor detector 11_1                                       */
    #define ttdh_11_1_1                 97 /* Dynamische hiaattijden TDH 1 voor detector 11_1                                          */
    #define ttdh_11_1_2                 98 /* Dynamische hiaattijden TDH 2 voor detector 11_1                                          */
    #define tmax_11_1                   99 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                                */
    #define t11_2_1                    100 /* Dynamische hiaattijden moment 1 voor detector 11_2                                       */
    #define t11_2_2                    101 /* Dynamische hiaattijden moment 2 voor detector 11_2                                       */
    #define ttdh_11_2_1                102 /* Dynamische hiaattijden TDH 1 voor detector 11_2                                          */
    #define ttdh_11_2_2                103 /* Dynamische hiaattijden TDH 2 voor detector 11_2                                          */
    #define tmax_11_2                  104 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                                */
    #define t11_3_1                    105 /* Dynamische hiaattijden moment 1 voor detector 11_3                                       */
    #define t11_3_2                    106 /* Dynamische hiaattijden moment 2 voor detector 11_3                                       */
    #define ttdh_11_3_1                107 /* Dynamische hiaattijden TDH 1 voor detector 11_3                                          */
    #define ttdh_11_3_2                108 /* Dynamische hiaattijden TDH 2 voor detector 11_3                                          */
    #define tmax_11_3                  109 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                                */
    #define t11_4_1                    110 /* Dynamische hiaattijden moment 1 voor detector 11_4                                       */
    #define t11_4_2                    111 /* Dynamische hiaattijden moment 2 voor detector 11_4                                       */
    #define ttdh_11_4_1                112 /* Dynamische hiaattijden TDH 1 voor detector 11_4                                          */
    #define ttdh_11_4_2                113 /* Dynamische hiaattijden TDH 2 voor detector 11_4                                          */
    #define tmax_11_4                  114 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                                */
    #define tav28_2                    115 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                                  */
    #define tkm02                      116 /* Kop maximum voor detector 02                                                             */
    #define tkm03                      117 /* Kop maximum voor detector 03                                                             */
    #define tkm05                      118 /* Kop maximum voor detector 05                                                             */
    #define tkm08                      119 /* Kop maximum voor detector 08                                                             */
    #define tkm09                      120 /* Kop maximum voor detector 09                                                             */
    #define tkm11                      121 /* Kop maximum voor detector 11                                                             */
    #define tkm21                      122 /* Kop maximum voor detector 21                                                             */
    #define tkm22                      123 /* Kop maximum voor detector 22                                                             */
    #define tkm24                      124 /* Kop maximum voor detector 24                                                             */
    #define tkm26                      125 /* Kop maximum voor detector 26                                                             */
    #define tkm28                      126 /* Kop maximum voor detector 28                                                             */
    #define tkm61                      127 /* Kop maximum voor detector 61                                                             */
    #define tkm62                      128 /* Kop maximum voor detector 62                                                             */
    #define tkm67                      129 /* Kop maximum voor detector 67                                                             */
    #define tkm68                      130 /* Kop maximum voor detector 68                                                             */
    #define tkm81                      131 /* Kop maximum voor detector 81                                                             */
    #define tkm82                      132 /* Kop maximum voor detector 82                                                             */
    #define tkm84                      133 /* Kop maximum voor detector 84                                                             */
    #define thdvd02_1a                 134 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a                               */
    #define thdvd02_1b                 135 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b                               */
    #define tdstvert02                 136 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                      */
    #define thdvd03_1                  137 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    #define tdstvert03                 138 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    #define thdvd05_1                  139 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    #define tdstvert05                 140 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    #define thdvd08_1a                 141 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    #define thdvd08_1b                 142 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    #define tdstvert08                 143 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    #define thdvd09_1                  144 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    #define tdstvert09                 145 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    #define thdvd11_1                  146 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    #define tdstvert11                 147 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    #define tdstvert21                 148 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    #define thdvd22_1                  149 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    #define tdstvert22                 150 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    #define thdvd24_1                  151 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    #define tdstvert24                 152 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    #define tdstvert26                 153 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    #define thdvd28_1                  154 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    #define tdstvert28                 155 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    #define tdstvert31                 156 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    #define tdstvert32                 157 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    #define tdstvert33                 158 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    #define tdstvert34                 159 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    #define tdstvert38                 160 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    #define thdvd61_1                  161 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    #define tdstvert61                 162 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    #define thdvd62_1a                 163 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    #define thdvd62_1b                 164 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    #define tdstvert62                 165 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    #define thdvd67_1                  166 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    #define tdstvert67                 167 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    #define thdvd68_1a                 168 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    #define thdvd68_1b                 169 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    #define tdstvert68                 170 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    #define tdstvert81                 171 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    #define tdstvert82                 172 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    #define thdvd84_1                  173 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84                 174 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tafvFile68af               175 /* Afval vertraging file File68af                                                           */
    #define tafv68_9a                  176 /* Afval vertraging file 68_9a                                                              */
    #define tbz68_9a                   177 /* Bezettijd file detector 68_9a                                                            */
    #define trij68_9a                  178 /* Rijtijd file detector 68_9a                                                              */
    #define tafv68_9b                  179 /* Afval vertraging file 68_9b                                                              */
    #define tbz68_9b                   180 /* Bezettijd file detector 68_9b                                                            */
    #define trij68_9b                  181 /* Rijtijd file detector 68_9b                                                              */
    #define tafkmingroen08fileFile68af 182 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                    */
    #define tafkmingroen11fileFile68af 183 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                    */
    #define tminrood08fileFile68af     184 /* Minimale roodtijd bij fase 08 voor file ingreep                                          */
    #define tminrood11fileFile68af     185 /* Minimale roodtijd bij fase 11 voor file ingreep                                          */
    #define tmaxgroen08fileFile68af    186 /* Maximale groentijd bij fase 08 voor file ingreep                                         */
    #define tmaxgroen11fileFile68af    187 /* Maximale groentijd bij fase 11 voor file ingreep                                         */
    #define tnlfg0262                  188 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnleg0262                  189 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlfg0868                  190 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnleg0868                  191 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlfg1168                  192 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 193 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  194 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 195 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  196 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 197 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  198 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 199 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132                 200 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 201 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 202 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 203 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  204 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 205 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  206 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 207 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                208 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     209 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus                210 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   211 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   212 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  213 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                214 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   215 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   216 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  217 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                218 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   219 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   220 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  221 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                222 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   223 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   224 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  225 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                226 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   227 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   228 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  229 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                230 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   231 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   232 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  233 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg61bus                234 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   235 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   236 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  237 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                238 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   239 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   240 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  241 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                242 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   243 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   244 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  245 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            246 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                247 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   248 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   249 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  250 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    251 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    252 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 253 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 254 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                255 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    256 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    257 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 258 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 259 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                260 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    261 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    262 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 263 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 264 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                265 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    266 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    267 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 268 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 269 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                270 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    271 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    272 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 273 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 274 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                275 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    276 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    277 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 278 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 279 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                280 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    281 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    282 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 283 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 284 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                285 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    286 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    287 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 288 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 289 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                290 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    291 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    292 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 293 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 294 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                295 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    296 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    297 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 298 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 299 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                300 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define trgad24_3                  301 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 302 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            303 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            304 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   305 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   306 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   307 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   308 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   309 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   310 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    311 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    312 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    313 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    314 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   315 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   316 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   317 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   318 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   319 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   320 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1                    321 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2                    322 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3                    323 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1                    324 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    325 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    326 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    327 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    328 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    329 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    330 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   331 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   332 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   333 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   334 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tuitgestca02               335 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               336 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               337 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               338 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               339 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               340 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               341 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               342 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               343 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               344 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               345 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               346 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               347 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               348 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               349 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               350 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               351 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               352 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               353 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               354 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               355 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               356 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               357 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   358 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               359 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              360 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               361 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              362 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   363 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               364 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              365 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               366 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              367 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   368 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                369 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               370 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    371 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    372 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    373 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202                    374 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    375 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    376 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    377 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    378 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   379 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   380 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   381 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   382 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    383 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    384 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    385 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     386

/* teller elementen */
/* ---------------- */
    #define cvc02bus  0 /* Bijhouden prio inmeldingen fase 02 type Bus */
    #define cvc03bus  1 /* Bijhouden prio inmeldingen fase 03 type Bus */
    #define cvc05bus  2 /* Bijhouden prio inmeldingen fase 05 type Bus */
    #define cvc08bus  3 /* Bijhouden prio inmeldingen fase 08 type Bus */
    #define cvc09bus  4 /* Bijhouden prio inmeldingen fase 09 type Bus */
    #define cvc11bus  5 /* Bijhouden prio inmeldingen fase 11 type Bus */
    #define cvc61bus  6 /* Bijhouden prio inmeldingen fase 61 type Bus */
    #define cvc62bus  7 /* Bijhouden prio inmeldingen fase 62 type Bus */
    #define cvc67bus  8 /* Bijhouden prio inmeldingen fase 67 type Bus */
    #define cvc68bus  9 /* Bijhouden prio inmeldingen fase 68 type Bus */
    #define cvchd02  10 /* Bijhouden prio inmeldingen fase 02          */
    #define cvchd03  11 /* Bijhouden prio inmeldingen fase 03          */
    #define cvchd05  12 /* Bijhouden prio inmeldingen fase 05          */
    #define cvchd08  13 /* Bijhouden prio inmeldingen fase 08          */
    #define cvchd09  14 /* Bijhouden prio inmeldingen fase 09          */
    #define cvchd11  15 /* Bijhouden prio inmeldingen fase 11          */
    #define cvchd61  16 /* Bijhouden prio inmeldingen fase 61          */
    #define cvchd62  17 /* Bijhouden prio inmeldingen fase 62          */
    #define cvchd67  18 /* Bijhouden prio inmeldingen fase 67          */
    #define cvchd68  19 /* Bijhouden prio inmeldingen fase 68          */
    #define CTMAX1   20

/* schakelaars */
/* ----------- */
    #define schdynhiaat02              0 /* Toepassen dynamsich hiaat bij fase 02                          */
    #define schopdrempelen02           1 /* Opdrempelen toepassen voor fase 02                             */
    #define schedkop_02                2 /* Start timers dynamische hiaat fase 02 op einde detectie koplus */
    #define schdynhiaat08              3 /* Toepassen dynamsich hiaat bij fase 08                          */
    #define schopdrempelen08           4 /* Opdrempelen toepassen voor fase 08                             */
    #define schedkop_08                5 /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    #define schdynhiaat09              6 /* Toepassen dynamsich hiaat bij fase 09                          */
    #define schopdrempelen09           7 /* Opdrempelen toepassen voor fase 09                             */
    #define schedkop_09                8 /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    #define schdynhiaat11              9 /* Toepassen dynamsich hiaat bij fase 11                          */
    #define schopdrempelen11          10 /* Opdrempelen toepassen voor fase 11                             */
    #define schedkop_11               11 /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    #define schconfidence15fix        12
    #define schtxconfidence15ar       13
    #define schspatconfidence1        14
    #define schspatconfidence3        15
    #define schspatconfidence6        16
    #define schspatconfidence9        17
    #define schspatconfidence12       18
    #define schspatconfidence15       19
    #define schtimings02              20
    #define schtimings03              21
    #define schtimings05              22
    #define schtimings08              23
    #define schtimings09              24
    #define schtimings11              25
    #define schtimings21              26
    #define schtimings22              27
    #define schtimings24              28
    #define schtimings26              29
    #define schtimings28              30
    #define schtimings31              31
    #define schtimings32              32
    #define schtimings33              33
    #define schtimings34              34
    #define schtimings38              35
    #define schtimings61              36
    #define schtimings62              37
    #define schtimings67              38
    #define schtimings68              39
    #define schtimings81              40
    #define schtimings82              41
    #define schtimings84              42
    #define schfileFile68af           43 /* File ingreep File68af toepassen                                */
    #define schfiledoserenFile68af    44 /* Toepassen doseerpercentages voor fileingreep File68af          */
    #define schfileFile68afparstrook  45 /* Parallele file meldingen per strook file ingreep File68af      */
    #define schbmfix                  46 /* Bijkomen tijdens fixatie mogelijk                              */
    #define schma0261                 47 /* Meeaanvraag van 02 naar 61 actief                              */
    #define schma0262                 48 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521                 49 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522                 50 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532                 51 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868                 52 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126                 53 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma1168                 54 /* Meeaanvraag van 11 naar 68 actief                              */
    #define schma2221                 55 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma3122                 56 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                 57 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                 58 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                 59 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                 60 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                 61 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                 62 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                 63 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                 64 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                 65 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                 66 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                   67 /* Meeverlengen fase 02                                           */
    #define schmv03                   68 /* Meeverlengen fase 03                                           */
    #define schmv05                   69 /* Meeverlengen fase 05                                           */
    #define schmv08                   70 /* Meeverlengen fase 08                                           */
    #define schmv09                   71 /* Meeverlengen fase 09                                           */
    #define schmv11                   72 /* Meeverlengen fase 11                                           */
    #define schmv21                   73 /* Meeverlengen fase 21                                           */
    #define schmv22                   74 /* Meeverlengen fase 22                                           */
    #define schmv24                   75 /* Meeverlengen fase 24                                           */
    #define schmv26                   76 /* Meeverlengen fase 26                                           */
    #define schmv28                   77 /* Meeverlengen fase 28                                           */
    #define schmv31                   78 /* Meeverlengen fase 31                                           */
    #define schmv32                   79 /* Meeverlengen fase 32                                           */
    #define schmv33                   80 /* Meeverlengen fase 33                                           */
    #define schmv34                   81 /* Meeverlengen fase 34                                           */
    #define schmv38                   82 /* Meeverlengen fase 38                                           */
    #define schmv61                   83 /* Meeverlengen fase 61                                           */
    #define schmv62                   84 /* Meeverlengen fase 62                                           */
    #define schmv67                   85 /* Meeverlengen fase 67                                           */
    #define schmv68                   86 /* Meeverlengen fase 68                                           */
    #define schmv81                   87 /* Meeverlengen fase 81                                           */
    #define schmv82                   88 /* Meeverlengen fase 82                                           */
    #define schmv84                   89 /* Meeverlengen fase 84                                           */
    #define schmlprm                  90 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus           91 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus           92 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus           93 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus           94 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus           95 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus           96 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus           97 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus           98 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus           99 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus          100 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schcovuber               101 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    #define schcheckdstype           102 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar        103 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar       104 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus          105 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar        106 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar       107 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus          108 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar        109 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar       110 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus          111 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar        112 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar       113 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus          114 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar        115 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar       116 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus          117 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar        118 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar       119 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus          120 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin61buskar        121 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61buskar       122 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61bus          123 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin62buskar        124 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62buskar       125 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62bus          126 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin67buskar        127 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67buskar       128 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67bus          129 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin68buskar        130 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68buskar       131 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68bus          132 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schupinagbhd02           133 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar             134 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar            135 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02         136 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schupinagbhd03           137 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar             138 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar            139 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03         140 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schupinagbhd05           141 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar             142 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar            143 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05         144 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schupinagbhd08           145 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar             146 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar            147 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08         148 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schupinagbhd09           149 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar             150 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar            151 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09         152 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schupinagbhd11           153 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar             154 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar            155 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11         156 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schupinagbhd61           157 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar             158 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar            159 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61         160 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schupinagbhd62           161 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar             162 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar            163 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62         164 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schupinagbhd67           165 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar             166 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar            167 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67         168 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schupinagbhd68           169 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar             170 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar            171 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68         172 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schrisgeencheckopsg      173 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    #define schrisaanvraag           174 /* Globaal in of uitschakelen aanvragen via RIS                   */
    #define schrisverlengen          175 /* Globaal in of uitschakelen verlengen via RIS                   */
    #define schrgadd24_3             176 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv                   177 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel              178 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schca02                  179 /* Cyclische aanvraag fase 02                                     */
    #define schca03                  180 /* Cyclische aanvraag fase 03                                     */
    #define schca05                  181 /* Cyclische aanvraag fase 05                                     */
    #define schca08                  182 /* Cyclische aanvraag fase 08                                     */
    #define schca09                  183 /* Cyclische aanvraag fase 09                                     */
    #define schca11                  184 /* Cyclische aanvraag fase 11                                     */
    #define schca21                  185 /* Cyclische aanvraag fase 21                                     */
    #define schca22                  186 /* Cyclische aanvraag fase 22                                     */
    #define schca24                  187 /* Cyclische aanvraag fase 24                                     */
    #define schca26                  188 /* Cyclische aanvraag fase 26                                     */
    #define schca28                  189 /* Cyclische aanvraag fase 28                                     */
    #define schca31                  190 /* Cyclische aanvraag fase 31                                     */
    #define schca32                  191 /* Cyclische aanvraag fase 32                                     */
    #define schca33                  192 /* Cyclische aanvraag fase 33                                     */
    #define schca34                  193 /* Cyclische aanvraag fase 34                                     */
    #define schca38                  194 /* Cyclische aanvraag fase 38                                     */
    #define schca61                  195 /* Cyclische aanvraag fase 61                                     */
    #define schca62                  196 /* Cyclische aanvraag fase 62                                     */
    #define schca67                  197 /* Cyclische aanvraag fase 67                                     */
    #define schca68                  198 /* Cyclische aanvraag fase 68                                     */
    #define schca81                  199 /* Cyclische aanvraag fase 81                                     */
    #define schca82                  200 /* Cyclische aanvraag fase 82                                     */
    #define schca84                  201 /* Cyclische aanvraag fase 84                                     */
    #define schvg02_4a               202 /* Veiligheidsgroen detector 02_4a fase 02                        */
    #define schvg02_4b               203 /* Veiligheidsgroen detector 02_4b fase 02                        */
    #define schvg08_4a               204 /* Veiligheidsgroen detector 08_4a fase 08                        */
    #define schvg08_4b               205 /* Veiligheidsgroen detector 08_4b fase 08                        */
    #define schvg11_4                206 /* Veiligheidsgroen detector 11_4 fase 11                         */
    #define schaltg02                207 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                208 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                209 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                210 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                211 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                212 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                213 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232              214 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg2434              215 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg26                216 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                217 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                218 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384              219 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg38                220 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                221 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                222 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                223 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                224 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg81                225 /* Alternatieve realisatie toestaan fase 81                       */
    #define schaltg82                226 /* Alternatieve realisatie toestaan fase 82                       */
    #define schwg02                  227 /* Wachtstand groen fase 02                                       */
    #define schwg03                  228 /* Wachtstand groen fase 03                                       */
    #define schwg05                  229 /* Wachtstand groen fase 05                                       */
    #define schwg08                  230 /* Wachtstand groen fase 08                                       */
    #define schwg09                  231 /* Wachtstand groen fase 09                                       */
    #define schwg11                  232 /* Wachtstand groen fase 11                                       */
    #define schwg21                  233 /* Wachtstand groen fase 21                                       */
    #define schwg22                  234 /* Wachtstand groen fase 22                                       */
    #define schwg24                  235 /* Wachtstand groen fase 24                                       */
    #define schwg26                  236 /* Wachtstand groen fase 26                                       */
    #define schwg28                  237 /* Wachtstand groen fase 28                                       */
    #define schwg31                  238 /* Wachtstand groen fase 31                                       */
    #define schwg32                  239 /* Wachtstand groen fase 32                                       */
    #define schwg33                  240 /* Wachtstand groen fase 33                                       */
    #define schwg34                  241 /* Wachtstand groen fase 34                                       */
    #define schwg38                  242 /* Wachtstand groen fase 38                                       */
    #define schwg61                  243 /* Wachtstand groen fase 61                                       */
    #define schwg62                  244 /* Wachtstand groen fase 62                                       */
    #define schwg67                  245 /* Wachtstand groen fase 67                                       */
    #define schwg68                  246 /* Wachtstand groen fase 68                                       */
    #define schwg81                  247 /* Wachtstand groen fase 81                                       */
    #define schwg82                  248 /* Wachtstand groen fase 82                                       */
    #define schwg84                  249 /* Wachtstand groen fase 84                                       */
    #define schgs2232                250 /* Schakelbare gelijkstart tussen fase 32 en 22                   */
    #define schgs2434                251 /* Schakelbare gelijkstart tussen fase 34 en 24                   */
    #define schgs3384                252 /* Schakelbare gelijkstart tussen fase 84 en 33                   */
    #define schlos32_1               253 /* Toestaan los realiseren fase 32                                */
    #define schlos32_2               254 /* Toestaan los realiseren fase 32                                */
    #define schlos31_1               255 /* Toestaan los realiseren fase 31                                */
    #define schlos31_2               256 /* Toestaan los realiseren fase 31                                */
    #define schlos34_1               257 /* Toestaan los realiseren fase 34                                */
    #define schlos34_2               258 /* Toestaan los realiseren fase 34                                */
    #define schlos33_1               259 /* Toestaan los realiseren fase 33                                */
    #define schlos33_2               260 /* Toestaan los realiseren fase 33                                */
    #define schgsbeidedkb            261
    #define SCHMAX1                  262

/* parameters */
/* ---------- */
    #define prmspringverleng_02_1a   0 /* Dyn. hiaattij instelling voor det. 02_1a (via bitsturing)                                                                      */
    #define prmspringverleng_02_1b   1 /* Dyn. hiaattij instelling voor det. 02_1b (via bitsturing)                                                                      */
    #define prmspringverleng_02_2a   2 /* Dyn. hiaattij instelling voor det. 02_2a (via bitsturing)                                                                      */
    #define prmspringverleng_02_2b   3 /* Dyn. hiaattij instelling voor det. 02_2b (via bitsturing)                                                                      */
    #define prmspringverleng_02_3a   4 /* Dyn. hiaattij instelling voor det. 02_3a (via bitsturing)                                                                      */
    #define prmspringverleng_02_3b   5 /* Dyn. hiaattij instelling voor det. 02_3b (via bitsturing)                                                                      */
    #define prmspringverleng_02_4a   6 /* Dyn. hiaattij instelling voor det. 02_4a (via bitsturing)                                                                      */
    #define prmspringverleng_02_4b   7 /* Dyn. hiaattij instelling voor det. 02_4b (via bitsturing)                                                                      */
    #define prmspringverleng_08_1a   8 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b   9 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a  10 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b  11 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a  12 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b  13 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a  14 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b  15 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmspringverleng_09_1   16 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2   17 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3   18 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_1   19 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2   20 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3   21 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4   22 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmttxconfidence15      23
    #define prmlatencyminendsg      24
    #define prmfb                   25 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                   26 /* Versiebeheer xx                                                                                                                */
    #define prmyy                   27 /* Versiebeheer yy                                                                                                                */
    #define prmzz                   28 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02     29
    #define prmovmmindergroen_02    30
    #define prmovmextragroen_03     31
    #define prmovmmindergroen_03    32
    #define prmovmextragroen_05     33
    #define prmovmmindergroen_05    34
    #define prmovmextragroen_08     35
    #define prmovmmindergroen_08    36
    #define prmovmextragroen_09     37
    #define prmovmmindergroen_09    38
    #define prmovmextragroen_11     39
    #define prmovmmindergroen_11    40
    #define prmovmextragroen_61     41
    #define prmovmmindergroen_61    42
    #define prmovmextragroen_62     43
    #define prmovmmindergroen_62    44
    #define prmovmextragroen_67     45
    #define prmovmmindergroen_67    46
    #define prmovmextragroen_68     47
    #define prmovmmindergroen_68    48
    #define prmaltb02               49 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03               50 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05               51 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08               52 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09               53 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11               54 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21               55 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22               56 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24               57 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26               58 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28               59 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31               60 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32               61 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33               62 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34               63 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38               64 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61               65 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62               66 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67               67 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68               68 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81               69 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82               70 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84               71 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a              72 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b              73 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a              74 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b              75 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a              76 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b              77 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a              78 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b              79 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1               80 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2               81 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1               82 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2               83 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a              84 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b              85 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a              86 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b              87 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a              88 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b              89 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a              90 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b              91 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1               92 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2               93 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3               94 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1               95 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2               96 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3               97 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4               98 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                99 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21               100 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1              101 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22               102 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1              103 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2              104 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3              105 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24               106 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261               107 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26               108 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1              109 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2              110 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28               111 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a              112 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b              113 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a              114 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b              115 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a              116 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b              117 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a              118 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b              119 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a              120 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b              121 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1              122 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2              123 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a             124 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b             125 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a             126 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b             127 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1              128 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2              129 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a             130 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b             131 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a             132 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b             133 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a             134 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b             135 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1              136 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81               137 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1              138 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82               139 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1              140 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84               141 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a             142 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b             143 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a             144 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b             145 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a             146 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b             147 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a             148 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b             149 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1              150 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2              151 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1              152 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2              153 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a             154 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b             155 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a             156 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b             157 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a             158 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b             159 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a             160 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b             161 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1              162 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2              163 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3              164 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1              165 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2              166 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3              167 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4              168 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211               169 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1              170 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1              171 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2              172 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3              173 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261               174 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1              175 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2              176 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1              177 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2              178 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a             179 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b             180 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a             181 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b             182 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1              183 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2              184 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a             185 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b             186 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a             187 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b             188 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a             189 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b             190 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1              191 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1              192 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1              193 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc02              194 /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    #define prmperc03              195 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05              196 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08              197 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09              198 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11              199 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61              200 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62              201 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67              202 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68              203 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08     204 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11     205 /* Doseerpercentage 11                                                                                                            */
    #define prmtypema0261          206 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262          207 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521          208 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522          209 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532          210 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868          211 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126          212 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168          213 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221          214 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122          215 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132          216 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222          217 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231          218 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324          219 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334          220 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384          221 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424          222 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433          223 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484          224 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828          225 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281          226 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                227 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                228 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                229 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                230 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                231 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                232 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                233 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                234 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                235 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                236 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                237 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                238 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                239 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                240 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                241 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                242 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                243 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                244 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                245 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                246 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                247 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                248 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                249 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02              250 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03              251 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05              252 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08              253 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09              254 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11              255 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21              256 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22              257 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24              258 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26              259 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28              260 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31              261 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32              262 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33              263 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34              264 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38              265 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61              266 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62              267 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67              268 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68              269 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81              270 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82              271 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84              272 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262             273 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868             274 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168             275 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221             276 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132             277 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231             278 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334             279 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433             280 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281             281 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg    282 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat     283 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus 284 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus  285 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus  286 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus 287 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus  288 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus  289 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus 290 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus  291 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus  292 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus 293 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus  294 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus  295 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus 296 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus  297 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus  298 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus 299 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus  300 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus  301 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus 302 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus  303 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus  304 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus 305 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus  306 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus  307 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus 308 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus  309 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus  310 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus 311 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus  312 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus  313 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                314 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts              315 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg              316 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02              317 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02              318 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02              319 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02             320 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02            321 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02             322 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03              323 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03              324 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03              325 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03             326 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03            327 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03             328 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05              329 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05              330 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05              331 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05             332 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05            333 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05             334 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08              335 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08              336 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08              337 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08             338 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08            339 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08             340 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09              341 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09              342 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09              343 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09             344 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09            345 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09             346 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11              347 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11              348 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11              349 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11             350 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11            351 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11             352 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21              353 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21              354 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21              355 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21             356 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21            357 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21             358 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22              359 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22              360 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22              361 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22             362 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22            363 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22             364 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24              365 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24              366 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24              367 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24             368 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24            369 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24             370 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26              371 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26              372 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26              373 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26             374 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26            375 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26             376 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28              377 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28              378 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28              379 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28             380 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28            381 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28             382 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31              383 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31              384 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32              385 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32              386 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33              387 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33              388 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34              389 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34              390 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38              391 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38              392 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61              393 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61              394 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61              395 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61             396 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61            397 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61             398 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62              399 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62              400 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62              401 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62             402 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62            403 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62             404 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67              405 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67              406 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67              407 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67             408 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67            409 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67             410 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68              411 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68              412 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68              413 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68             414 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68            415 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68             416 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81              417 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81              418 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81              419 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81             420 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81            421 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81             422 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82              423 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82              424 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82              425 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82             426 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82            427 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82             428 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84              429 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84              430 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84              431 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84             432 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84            433 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84             434 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus            435 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus           436 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus            437 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus            438 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus         439 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus           440 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03bus            441 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus           442 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus            443 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus            444 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus         445 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus           446 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05bus            447 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus           448 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus            449 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus            450 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus         451 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus           452 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08bus            453 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus           454 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus            455 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus            456 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus         457 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus           458 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09bus            459 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus           460 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus            461 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus            462 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus         463 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus           464 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11bus            465 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus           466 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus            467 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus            468 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus         469 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus           470 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto61bus            471 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus           472 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus            473 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus            474 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus         475 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus           476 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62bus            477 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus           478 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus            479 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus            480 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus         481 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus           482 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67bus            483 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus           484 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus            485 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus            486 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus         487 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus           488 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68bus            489 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus           490 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus            491 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus            492 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus         493 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus           494 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02            495 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02             496 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02            497 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02             498 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmpriohd03            499 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03             500 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03            501 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03             502 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmpriohd05            503 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05             504 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05            505 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05             506 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmpriohd08            507 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08             508 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08            509 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08             510 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmpriohd09            511 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09             512 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09            513 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09             514 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmpriohd11            515 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11             516 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11            517 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11             518 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmpriohd61            519 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61             520 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61            521 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61             522 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmpriohd62            523 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62             524 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62            525 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62             526 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmpriohd67            527 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67             528 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67            529 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67             530 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmpriohd68            531 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68             532 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68            533 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68             534 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmkarsg02             535 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03             536 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05             537 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08             538 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09             539 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11             540 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61             541 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62             542 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67             543 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68             544 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02           545 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03           546 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05           547 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08           548 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09           549 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11           550 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61           551 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62           552 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67           553 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68           554 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1               555 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1               556 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1               557 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2               558 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2               559 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2               560 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3               561 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3               562 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3               563 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4               564 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4               565 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4               566 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5               567 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5               568 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5               569 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6               570 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6               571 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6               572 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg2_02              573 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03              574 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05              575 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08              576 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09              577 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11              578 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21              579 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22              580 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24              581 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26              582 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28              583 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61              584 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62              585 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67              586 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68              587 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81              588 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82              589 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84              590 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02              591 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03              592 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05              593 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08              594 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09              595 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11              596 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21              597 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22              598 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24              599 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26              600 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28              601 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61              602 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62              603 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67              604 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68              605 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81              606 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82              607 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84              608 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02              609 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03              610 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05              611 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08              612 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09              613 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11              614 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21              615 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22              616 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24              617 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26              618 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28              619 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61              620 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62              621 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67              622 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68              623 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81              624 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82              625 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84              626 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02              627 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03              628 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05              629 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08              630 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09              631 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11              632 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21              633 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22              634 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24              635 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26              636 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28              637 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61              638 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62              639 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67              640 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68              641 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81              642 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82              643 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84              644 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02              645 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03              646 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05              647 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08              648 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09              649 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11              650 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21              651 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22              652 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24              653 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26              654 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28              655 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61              656 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62              657 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67              658 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68              659 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81              660 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82              661 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84              662 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02              663 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03              664 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05              665 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08              666 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09              667 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11              668 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21              669 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22              670 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24              671 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26              672 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28              673 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61              674 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62              675 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67              676 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68              677 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81              678 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82              679 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84              680 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02     681 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03     682 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05     683 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08     684 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09     685 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11     686 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21     687 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22     688 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24     689 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26     690 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28     691 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31     692 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32     693 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33     694 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34     695 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38     696 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61     697 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62     698 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67     699 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68     700 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81     701 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82     702 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84     703 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1       704 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2       705 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1       706 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1       707 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1       708 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2       709 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1       710 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1       711 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1       712 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1       713 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1       714 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1       715 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1       716 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1       717 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2       718 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1       719 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2       720 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1       721 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2       722 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1       723 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2       724 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1       725 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2       726 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1       727 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1       728 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2       729 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1       730 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1       731 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2       732 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1       733 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1       734 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1       735 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1    736 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2    737 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1    738 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1    739 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1    740 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2    741 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1    742 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1    743 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1     744 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1     745 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1     746 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1     747 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1     748 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1     749 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2     750 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart32vtg1     751 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg2     752 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart33vtg1     753 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg2     754 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart34vtg1     755 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg2     756 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart38vtg1     757 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg2     758 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart61mveh1    759 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart62mveh1    760 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh2    761 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart67mveh1    762 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart68mveh1    763 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart84fts1     764 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisastart82fts1     765 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart81fts1     766 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart68mveh2    767 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend02mveh1      768 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2      769 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1      770 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1      771 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1      772 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2      773 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1      774 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1      775 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1       776 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1       777 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend24fts1       778 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend26fts1       779 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend28fts1       780 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend31vtg1       781 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg2       782 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend32vtg1       783 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg2       784 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend33vtg1       785 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg2       786 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend34vtg1       787 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg2       788 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend38vtg1       789 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg2       790 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend61mveh1      791 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend62mveh1      792 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh2      793 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend67mveh1      794 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend68mveh1      795 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend84fts1       796 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend82fts1       797 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    #define prmrisaend81fts1       798 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    #define prmrisaend68mveh2      799 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisvstart02mveh1    800 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2    801 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1    802 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1    803 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1    804 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2    805 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1    806 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1    807 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1     808 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1     809 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart24fts1     810 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvstart26fts1     811 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart28fts1     812 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart31vtg1     813 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg2     814 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart32vtg1     815 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg2     816 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart33vtg1     817 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg2     818 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart34vtg1     819 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg2     820 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart38vtg1     821 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg2     822 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart61mveh1    823 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart62mveh1    824 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh2    825 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart67mveh1    826 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart68mveh1    827 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart84fts1     828 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvstart82fts1     829 /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    #define prmrisvstart81fts1     830 /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    #define prmrisvstart68mveh2    831 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvend02mveh1      832 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2      833 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1      834 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1      835 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1      836 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2      837 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1      838 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1      839 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1       840 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1       841 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1       842 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1       843 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1       844 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1       845 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2       846 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend32vtg1       847 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg2       848 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend33vtg1       849 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg2       850 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend34vtg1       851 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg2       852 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend38vtg1       853 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg2       854 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend61mveh1      855 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend62mveh1      856 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh2      857 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend67mveh1      858 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend68mveh1      859 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend84fts1       860 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmrisvend82fts1       861 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend81fts1       862 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend68mveh2      863 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmmkrgd24_3           864 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                 865 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus         866 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus         867 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog          868 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag          869 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil        870 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag      871 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02           872 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02           873 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03           874 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03           875 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05           876 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05           877 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08           878 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08           879 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09           880 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09           881 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11           882 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11           883 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22           884 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22           885 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28           886 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28           887 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68           888 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68           889 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog          890 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog          891 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02             892 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03             893 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05             894 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08             895 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09             896 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11             897 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21             898 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22             899 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24             900 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26             901 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28             902 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31             903 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32             904 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33             905 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34             906 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38             907 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61             908 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62             909 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67             910 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68             911 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81             912 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82             913 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84             914 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02              915 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02              916 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03              917 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03              918 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05              919 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05              920 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08              921 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08              922 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09              923 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09              924 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11              925 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11              926 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21              927 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21              928 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22              929 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232            930 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24              931 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434            932 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26              933 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26              934 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28              935 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28              936 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31              937 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31              938 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32              939 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33              940 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384            941 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34              942 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38              943 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38              944 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61              945 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61              946 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62              947 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62              948 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67              949 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67              950 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68              951 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68              952 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81              953 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81              954 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82              955 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82              956 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84              957 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    #define prmtestdsivert         958 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn          959 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat          960 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                961
#else
    #define PRMMAX1                958
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02bus 0
    #define prioFC03bus 1
    #define prioFC05bus 2
    #define prioFC08bus 3
    #define prioFC09bus 4
    #define prioFC11bus 5
    #define prioFC61bus 6
    #define prioFC62bus 7
    #define prioFC67bus 8
    #define prioFC68bus 9
    #define hdFC02 10
    #define hdFC03 11
    #define hdFC05 12
    #define hdFC08 13
    #define hdFC09 14
    #define hdFC11 15
    #define hdFC61 16
    #define hdFC62 17
    #define hdFC67 18
    #define hdFC68 19
    #define prioFCMAX 20

/* modulen */
/* ------- */
    #define MLMAX1 4 /* aantal modulen */

/* Aantal perioden voor max groen */
/* ------- */
    #define MPERIODMAX 7 /* aantal groenperioden */

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    #define TESTOMGEVING
#endif
/* Systeem naam in het topologiebestand */
/* ------------------------------------ */
#define SYSTEM_ITF "123456"

/* Definitie lane id in het topologiebestand */
/* ----------------------------------------- */
#define ris_conflict_gebied    0 /* connection tussen alle ingress lanes en egress lanes */
#define TDHAMAX /* gebruik van TDHA_max[] */
/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

