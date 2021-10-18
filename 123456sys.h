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
 * 1.9.0    18-10-2021   Cyril       Filelussen en fc82 fc81 toegeovoegd
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.9.0 20211018"
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
    #define fc84  20
    #define fc82  21
    #define fc81  22
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
    #define uswtk84        (FCMAX + 88) /* Aansturing waitsignaal detector k84        */
    #define uswtk82        (FCMAX + 89) /* Aansturing waitsignaal detector k82        */
    #define uswtk81        (FCMAX + 90) /* Aansturing waitsignaal detector k81        */
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
    #define d84_1             64
    #define dk84              65
    #define d82_1             66
    #define dk82              67
    #define d81_1             68
    #define dk81              69
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
    #define hnla22_1            44 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a            45 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a            46 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a            47 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a            48 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1            49 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus           50 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus           51 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus           52 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus           53 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus           54 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus           55 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus           56 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus           57 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus           58 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus           59 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus          60 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus        61 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus       62 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar     63 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar    64 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03bus          65 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus        66 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus       67 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar     68 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar    69 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05bus          70 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus        71 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus       72 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar     73 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar    74 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08bus          75 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus        76 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus       77 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar     78 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar    79 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09bus          80 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus        81 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus       82 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar     83 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar    84 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11bus          85 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus        86 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus       87 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar     88 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar    89 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio61bus          90 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus        91 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus       92 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar     93 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar    94 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62bus          95 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus        96 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus       97 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar     98 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar    99 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67bus         100 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus       101 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus      102 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar    103 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar   104 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68bus         105 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus       106 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus      107 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar    108 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar   109 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02              110 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02            111 /* HD inmelding 02                                                    */
    #define hhduit02           112 /* HD uitmelding 02                                                   */
    #define hhdin02kar         113 /* HD inmelding 02                                                    */
    #define hhduit02kar        114 /* HD uitmelding 02                                                   */
    #define hhd03              115 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03            116 /* HD inmelding 03                                                    */
    #define hhduit03           117 /* HD uitmelding 03                                                   */
    #define hhdin03kar         118 /* HD inmelding 03                                                    */
    #define hhduit03kar        119 /* HD uitmelding 03                                                   */
    #define hhd05              120 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05            121 /* HD inmelding 05                                                    */
    #define hhduit05           122 /* HD uitmelding 05                                                   */
    #define hhdin05kar         123 /* HD inmelding 05                                                    */
    #define hhduit05kar        124 /* HD uitmelding 05                                                   */
    #define hhd08              125 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08            126 /* HD inmelding 08                                                    */
    #define hhduit08           127 /* HD uitmelding 08                                                   */
    #define hhdin08kar         128 /* HD inmelding 08                                                    */
    #define hhduit08kar        129 /* HD uitmelding 08                                                   */
    #define hhd09              130 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09            131 /* HD inmelding 09                                                    */
    #define hhduit09           132 /* HD uitmelding 09                                                   */
    #define hhdin09kar         133 /* HD inmelding 09                                                    */
    #define hhduit09kar        134 /* HD uitmelding 09                                                   */
    #define hhd11              135 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11            136 /* HD inmelding 11                                                    */
    #define hhduit11           137 /* HD uitmelding 11                                                   */
    #define hhdin11kar         138 /* HD inmelding 11                                                    */
    #define hhduit11kar        139 /* HD uitmelding 11                                                   */
    #define hhd61              140 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61            141 /* HD inmelding 61                                                    */
    #define hhduit61           142 /* HD uitmelding 61                                                   */
    #define hhdin61kar         143 /* HD inmelding 61                                                    */
    #define hhduit61kar        144 /* HD uitmelding 61                                                   */
    #define hhd62              145 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62            146 /* HD inmelding 62                                                    */
    #define hhduit62           147 /* HD uitmelding 62                                                   */
    #define hhdin62kar         148 /* HD inmelding 62                                                    */
    #define hhduit62kar        149 /* HD uitmelding 62                                                   */
    #define hhd67              150 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67            151 /* HD inmelding 67                                                    */
    #define hhduit67           152 /* HD uitmelding 67                                                   */
    #define hhdin67kar         153 /* HD inmelding 67                                                    */
    #define hhduit67kar        154 /* HD uitmelding 67                                                   */
    #define hhd68              155 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68            156 /* HD inmelding 68                                                    */
    #define hhduit68           157 /* HD uitmelding 68                                                   */
    #define hhdin68kar         158 /* HD inmelding 68                                                    */
    #define hhduit68kar        159 /* HD uitmelding 68                                                   */
    #define hrgvd24_3_d24_2    160 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact            161 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02          162 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03          163 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05          164 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08          165 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09          166 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11          167 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22          168 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28          169 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68          170 /* Bijhouden primaire realisatie fase 68                              */
    #define hnleg0262          171
    #define hnleg0868          172
    #define hnleg2221          173
    #define hnlsg3132          174
    #define hnlsg3231          175
    #define hnlsg3334          176
    #define hnlsg3433          177
    #define hnleg8281          178
    #define hinl32             179 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32             180 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31             181 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31             182 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34             183 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34             184 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33             185 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33             186 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62             187 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68             188 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21             189 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81             190 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1             191

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
    #define mrealtijd84     41 /* Realisatie tijd fase 84                                      */
    #define mrealtijd82     42 /* Realisatie tijd fase 82                                      */
    #define mrealtijd81     43 /* Realisatie tijd fase 81                                      */
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
    #define mrealtijdmin84  64 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmin82  65 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin81  66 /* Realisatie minimum tijd fase 81                              */
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
    #define mrealtijdmax84  87 /* Realisatie maximum tijd fase 84                              */
    #define mrealtijdmax82  88 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax81  89 /* Realisatie maximum tijd fase 81                              */
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
    #define mar84          110 /* Alternatieve ruimte fase 84                                  */
    #define mar82          111 /* Alternatieve ruimte fase 82                                  */
    #define mar81          112 /* Alternatieve ruimte fase 81                                  */
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
    #define tkm84                      131 /* Kop maximum voor detector 84                                                             */
    #define tkm82                      132 /* Kop maximum voor detector 82                                                             */
    #define tkm81                      133 /* Kop maximum voor detector 81                                                             */
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
    #define thdvd84_1                  171 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84                 172 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tdstvert82                 173 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    #define tdstvert81                 174 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
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
    #define tnlfg0262                  186 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnleg0262                  187 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlfg0868                  188 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnleg0868                  189 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlfg2221                  190 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 191 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  192 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 193 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132                 194 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 195 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 196 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 197 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  198 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 199 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  200 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 201 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                202 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     203 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus                204 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   205 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   206 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  207 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                208 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   209 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   210 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  211 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                212 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   213 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   214 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  215 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                216 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   217 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   218 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  219 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                220 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   221 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   222 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  223 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                224 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   225 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   226 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  227 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg61bus                228 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   229 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   230 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  231 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                232 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   233 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   234 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  235 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                236 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   237 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   238 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  239 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            240 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                241 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   242 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   243 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  244 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    245 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    246 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 247 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 248 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                249 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    250 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    251 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 252 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 253 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                254 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    255 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    256 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 257 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 258 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                259 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    260 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    261 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 262 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 263 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                264 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    265 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    266 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 267 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 268 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                269 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    270 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    271 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 272 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 273 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                274 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    275 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    276 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 277 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 278 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                279 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    280 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    281 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 282 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 283 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                284 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    285 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    286 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 287 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 288 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                289 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    290 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    291 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 292 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 293 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                294 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define trgad24_3                  295 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 296 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            297 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            298 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   299 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   300 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   301 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   302 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   303 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   304 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    305 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    306 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    307 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    308 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   309 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   310 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   311 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   312 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   313 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   314 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1                    315 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2                    316 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3                    317 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1                    318 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    319 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    320 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    321 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    322 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    323 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    324 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   325 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   326 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   327 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   328 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tuitgestca02               329 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               330 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               331 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               332 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               333 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               334 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               335 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               336 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               337 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               338 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               339 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               340 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               341 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               342 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               343 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               344 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               345 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               346 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               347 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               348 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca84               349 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tuitgestca82               350 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca81               351 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tvgmax02                   352 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               353 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              354 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               355 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              356 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   357 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               358 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              359 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               360 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              361 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   362 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                363 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               364 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    365 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    366 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    367 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202                    368 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    369 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr2122                    370 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    371 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   372 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   373 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   374 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   375 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    376 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    377 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    378 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     379

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
    #define schtimings84              40
    #define schtimings82              41
    #define schtimings81              42
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
    #define schma2221                 54 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma3122                 55 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                 56 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                 57 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                 58 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                 59 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                 60 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                 61 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                 62 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                 63 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                 64 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                 65 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                   66 /* Meeverlengen fase 02                                           */
    #define schmv03                   67 /* Meeverlengen fase 03                                           */
    #define schmv05                   68 /* Meeverlengen fase 05                                           */
    #define schmv08                   69 /* Meeverlengen fase 08                                           */
    #define schmv09                   70 /* Meeverlengen fase 09                                           */
    #define schmv11                   71 /* Meeverlengen fase 11                                           */
    #define schmv21                   72 /* Meeverlengen fase 21                                           */
    #define schmv22                   73 /* Meeverlengen fase 22                                           */
    #define schmv24                   74 /* Meeverlengen fase 24                                           */
    #define schmv26                   75 /* Meeverlengen fase 26                                           */
    #define schmv28                   76 /* Meeverlengen fase 28                                           */
    #define schmv31                   77 /* Meeverlengen fase 31                                           */
    #define schmv32                   78 /* Meeverlengen fase 32                                           */
    #define schmv33                   79 /* Meeverlengen fase 33                                           */
    #define schmv34                   80 /* Meeverlengen fase 34                                           */
    #define schmv38                   81 /* Meeverlengen fase 38                                           */
    #define schmv61                   82 /* Meeverlengen fase 61                                           */
    #define schmv62                   83 /* Meeverlengen fase 62                                           */
    #define schmv67                   84 /* Meeverlengen fase 67                                           */
    #define schmv68                   85 /* Meeverlengen fase 68                                           */
    #define schmv84                   86 /* Meeverlengen fase 84                                           */
    #define schmv82                   87 /* Meeverlengen fase 82                                           */
    #define schmv81                   88 /* Meeverlengen fase 81                                           */
    #define schmlprm                  89 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus           90 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus           91 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus           92 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus           93 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus           94 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus           95 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus           96 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus           97 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus           98 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus           99 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schcovuber               100 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    #define schcheckdstype           101 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar        102 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar       103 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus          104 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar        105 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar       106 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus          107 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar        108 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar       109 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus          110 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar        111 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar       112 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus          113 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar        114 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar       115 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus          116 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar        117 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar       118 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus          119 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin61buskar        120 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61buskar       121 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61bus          122 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin62buskar        123 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62buskar       124 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62bus          125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin67buskar        126 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67buskar       127 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67bus          128 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin68buskar        129 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68buskar       130 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68bus          131 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schupinagbhd02           132 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar             133 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar            134 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02         135 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schupinagbhd03           136 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar             137 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar            138 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03         139 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schupinagbhd05           140 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar             141 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar            142 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05         143 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schupinagbhd08           144 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar             145 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar            146 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08         147 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schupinagbhd09           148 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar             149 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar            150 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09         151 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schupinagbhd11           152 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar             153 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar            154 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11         155 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schupinagbhd61           156 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar             157 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar            158 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61         159 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schupinagbhd62           160 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar             161 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar            162 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62         163 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schupinagbhd67           164 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar             165 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar            166 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67         167 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schupinagbhd68           168 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar             169 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar            170 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68         171 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schrisgeencheckopsg      172 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    #define schrgadd24_3             173 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv                   174 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel              175 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schca02                  176 /* Cyclische aanvraag fase 02                                     */
    #define schca03                  177 /* Cyclische aanvraag fase 03                                     */
    #define schca05                  178 /* Cyclische aanvraag fase 05                                     */
    #define schca08                  179 /* Cyclische aanvraag fase 08                                     */
    #define schca09                  180 /* Cyclische aanvraag fase 09                                     */
    #define schca11                  181 /* Cyclische aanvraag fase 11                                     */
    #define schca21                  182 /* Cyclische aanvraag fase 21                                     */
    #define schca22                  183 /* Cyclische aanvraag fase 22                                     */
    #define schca24                  184 /* Cyclische aanvraag fase 24                                     */
    #define schca26                  185 /* Cyclische aanvraag fase 26                                     */
    #define schca28                  186 /* Cyclische aanvraag fase 28                                     */
    #define schca31                  187 /* Cyclische aanvraag fase 31                                     */
    #define schca32                  188 /* Cyclische aanvraag fase 32                                     */
    #define schca33                  189 /* Cyclische aanvraag fase 33                                     */
    #define schca34                  190 /* Cyclische aanvraag fase 34                                     */
    #define schca38                  191 /* Cyclische aanvraag fase 38                                     */
    #define schca61                  192 /* Cyclische aanvraag fase 61                                     */
    #define schca62                  193 /* Cyclische aanvraag fase 62                                     */
    #define schca67                  194 /* Cyclische aanvraag fase 67                                     */
    #define schca68                  195 /* Cyclische aanvraag fase 68                                     */
    #define schca84                  196 /* Cyclische aanvraag fase 84                                     */
    #define schca82                  197 /* Cyclische aanvraag fase 82                                     */
    #define schca81                  198 /* Cyclische aanvraag fase 81                                     */
    #define schvg02_4a               199 /* Veiligheidsgroen detector 02_4a fase 02                        */
    #define schvg02_4b               200 /* Veiligheidsgroen detector 02_4b fase 02                        */
    #define schvg08_4a               201 /* Veiligheidsgroen detector 08_4a fase 08                        */
    #define schvg08_4b               202 /* Veiligheidsgroen detector 08_4b fase 08                        */
    #define schvg11_4                203 /* Veiligheidsgroen detector 11_4 fase 11                         */
    #define schaltg02                204 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                205 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                206 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                207 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                208 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                209 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                210 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232              211 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg2434              212 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg26                213 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                214 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                215 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384              216 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg38                217 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                218 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                219 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                220 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                221 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg82                222 /* Alternatieve realisatie toestaan fase 82                       */
    #define schaltg81                223 /* Alternatieve realisatie toestaan fase 81                       */
    #define schwg02                  224 /* Wachtstand groen fase 02                                       */
    #define schwg03                  225 /* Wachtstand groen fase 03                                       */
    #define schwg05                  226 /* Wachtstand groen fase 05                                       */
    #define schwg08                  227 /* Wachtstand groen fase 08                                       */
    #define schwg09                  228 /* Wachtstand groen fase 09                                       */
    #define schwg11                  229 /* Wachtstand groen fase 11                                       */
    #define schwg21                  230 /* Wachtstand groen fase 21                                       */
    #define schwg22                  231 /* Wachtstand groen fase 22                                       */
    #define schwg24                  232 /* Wachtstand groen fase 24                                       */
    #define schwg26                  233 /* Wachtstand groen fase 26                                       */
    #define schwg28                  234 /* Wachtstand groen fase 28                                       */
    #define schwg31                  235 /* Wachtstand groen fase 31                                       */
    #define schwg32                  236 /* Wachtstand groen fase 32                                       */
    #define schwg33                  237 /* Wachtstand groen fase 33                                       */
    #define schwg34                  238 /* Wachtstand groen fase 34                                       */
    #define schwg38                  239 /* Wachtstand groen fase 38                                       */
    #define schwg61                  240 /* Wachtstand groen fase 61                                       */
    #define schwg62                  241 /* Wachtstand groen fase 62                                       */
    #define schwg67                  242 /* Wachtstand groen fase 67                                       */
    #define schwg68                  243 /* Wachtstand groen fase 68                                       */
    #define schwg84                  244 /* Wachtstand groen fase 84                                       */
    #define schwg82                  245 /* Wachtstand groen fase 82                                       */
    #define schwg81                  246 /* Wachtstand groen fase 81                                       */
    #define schgs2232                247 /* Schakelbare gelijkstart tussen fase 32 en 22                   */
    #define schgs2434                248 /* Schakelbare gelijkstart tussen fase 34 en 24                   */
    #define schgs3384                249 /* Schakelbare gelijkstart tussen fase 84 en 33                   */
    #define schlos32_1               250 /* Toestaan los realiseren fase 32                                */
    #define schlos32_2               251 /* Toestaan los realiseren fase 32                                */
    #define schlos31_1               252 /* Toestaan los realiseren fase 31                                */
    #define schlos31_2               253 /* Toestaan los realiseren fase 31                                */
    #define schlos34_1               254 /* Toestaan los realiseren fase 34                                */
    #define schlos34_2               255 /* Toestaan los realiseren fase 34                                */
    #define schlos33_1               256 /* Toestaan los realiseren fase 33                                */
    #define schlos33_2               257 /* Toestaan los realiseren fase 33                                */
    #define schgsbeidedkb            258
    #define SCHMAX1                  259

/* parameters */
/* ---------- */
    #define prmTDHstd02_1a           0 /* Onthouden oorspronkelijke TDH voor detector 02_1a                                                                              */
    #define prmspringverleng_02_1a   1 /* Dyn. hiaattij instelling voor det. 02_1a (via bitsturing)                                                                      */
    #define prmTDHstd02_1b           2 /* Onthouden oorspronkelijke TDH voor detector 02_1b                                                                              */
    #define prmspringverleng_02_1b   3 /* Dyn. hiaattij instelling voor det. 02_1b (via bitsturing)                                                                      */
    #define prmTDHstd02_2a           4 /* Onthouden oorspronkelijke TDH voor detector 02_2a                                                                              */
    #define prmspringverleng_02_2a   5 /* Dyn. hiaattij instelling voor det. 02_2a (via bitsturing)                                                                      */
    #define prmTDHstd02_2b           6 /* Onthouden oorspronkelijke TDH voor detector 02_2b                                                                              */
    #define prmspringverleng_02_2b   7 /* Dyn. hiaattij instelling voor det. 02_2b (via bitsturing)                                                                      */
    #define prmTDHstd02_3a           8 /* Onthouden oorspronkelijke TDH voor detector 02_3a                                                                              */
    #define prmspringverleng_02_3a   9 /* Dyn. hiaattij instelling voor det. 02_3a (via bitsturing)                                                                      */
    #define prmTDHstd02_3b          10 /* Onthouden oorspronkelijke TDH voor detector 02_3b                                                                              */
    #define prmspringverleng_02_3b  11 /* Dyn. hiaattij instelling voor det. 02_3b (via bitsturing)                                                                      */
    #define prmTDHstd02_4a          12 /* Onthouden oorspronkelijke TDH voor detector 02_4a                                                                              */
    #define prmspringverleng_02_4a  13 /* Dyn. hiaattij instelling voor det. 02_4a (via bitsturing)                                                                      */
    #define prmTDHstd02_4b          14 /* Onthouden oorspronkelijke TDH voor detector 02_4b                                                                              */
    #define prmspringverleng_02_4b  15 /* Dyn. hiaattij instelling voor det. 02_4b (via bitsturing)                                                                      */
    #define prmTDHstd08_1a          16 /* Onthouden oorspronkelijke TDH voor detector 08_1a                                                                              */
    #define prmspringverleng_08_1a  17 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmTDHstd08_1b          18 /* Onthouden oorspronkelijke TDH voor detector 08_1b                                                                              */
    #define prmspringverleng_08_1b  19 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmTDHstd08_2a          20 /* Onthouden oorspronkelijke TDH voor detector 08_2a                                                                              */
    #define prmspringverleng_08_2a  21 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmTDHstd08_2b          22 /* Onthouden oorspronkelijke TDH voor detector 08_2b                                                                              */
    #define prmspringverleng_08_2b  23 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmTDHstd08_3a          24 /* Onthouden oorspronkelijke TDH voor detector 08_3a                                                                              */
    #define prmspringverleng_08_3a  25 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmTDHstd08_3b          26 /* Onthouden oorspronkelijke TDH voor detector 08_3b                                                                              */
    #define prmspringverleng_08_3b  27 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmTDHstd08_4a          28 /* Onthouden oorspronkelijke TDH voor detector 08_4a                                                                              */
    #define prmspringverleng_08_4a  29 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmTDHstd08_4b          30 /* Onthouden oorspronkelijke TDH voor detector 08_4b                                                                              */
    #define prmspringverleng_08_4b  31 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmTDHstd09_1           32 /* Onthouden oorspronkelijke TDH voor detector 09_1                                                                               */
    #define prmspringverleng_09_1   33 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmTDHstd09_2           34 /* Onthouden oorspronkelijke TDH voor detector 09_2                                                                               */
    #define prmspringverleng_09_2   35 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmTDHstd09_3           36 /* Onthouden oorspronkelijke TDH voor detector 09_3                                                                               */
    #define prmspringverleng_09_3   37 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmTDHstd11_1           38 /* Onthouden oorspronkelijke TDH voor detector 11_1                                                                               */
    #define prmspringverleng_11_1   39 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmTDHstd11_2           40 /* Onthouden oorspronkelijke TDH voor detector 11_2                                                                               */
    #define prmspringverleng_11_2   41 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmTDHstd11_3           42 /* Onthouden oorspronkelijke TDH voor detector 11_3                                                                               */
    #define prmspringverleng_11_3   43 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmTDHstd11_4           44 /* Onthouden oorspronkelijke TDH voor detector 11_4                                                                               */
    #define prmspringverleng_11_4   45 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmttxconfidence15      46
    #define prmlatencyminendsg      47
    #define prmfb                   48 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                   49 /* Versiebeheer xx                                                                                                                */
    #define prmyy                   50 /* Versiebeheer yy                                                                                                                */
    #define prmzz                   51 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02     52
    #define prmovmmindergroen_02    53
    #define prmovmextragroen_03     54
    #define prmovmmindergroen_03    55
    #define prmovmextragroen_05     56
    #define prmovmmindergroen_05    57
    #define prmovmextragroen_08     58
    #define prmovmmindergroen_08    59
    #define prmovmextragroen_09     60
    #define prmovmmindergroen_09    61
    #define prmovmextragroen_11     62
    #define prmovmmindergroen_11    63
    #define prmovmextragroen_61     64
    #define prmovmmindergroen_61    65
    #define prmovmextragroen_62     66
    #define prmovmmindergroen_62    67
    #define prmovmextragroen_67     68
    #define prmovmmindergroen_67    69
    #define prmovmextragroen_68     70
    #define prmovmmindergroen_68    71
    #define prmaltb02               72 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03               73 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05               74 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08               75 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09               76 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11               77 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21               78 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22               79 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24               80 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26               81 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28               82 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31               83 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32               84 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33               85 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34               86 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38               87 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61               88 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62               89 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67               90 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68               91 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb84               92 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmaltb82               93 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb81               94 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmda02_1a              95 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b              96 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a              97 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b              98 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a              99 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b             100 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a             101 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b             102 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1              103 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2              104 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1              105 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2              106 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a             107 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b             108 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a             109 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b             110 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a             111 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b             112 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a             113 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b             114 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1              115 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2              116 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3              117 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1              118 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2              119 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3              120 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4              121 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211               122 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21               123 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1              124 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22               125 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1              126 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2              127 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3              128 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24               129 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261               130 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26               131 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1              132 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2              133 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28               134 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a              135 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b              136 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a              137 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b              138 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a              139 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b              140 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a              141 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b              142 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a              143 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b              144 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1              145 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2              146 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a             147 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b             148 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a             149 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b             150 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1              151 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2              152 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a             153 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b             154 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a             155 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b             156 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a             157 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b             158 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda84_1              159 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84               160 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmda82_1              161 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82               162 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda81_1              163 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81               164 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmmk02_1a             165 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b             166 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a             167 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b             168 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a             169 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b             170 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a             171 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b             172 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1              173 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2              174 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1              175 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2              176 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a             177 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b             178 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a             179 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b             180 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a             181 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b             182 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a             183 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b             184 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1              185 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2              186 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3              187 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1              188 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2              189 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3              190 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4              191 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211               192 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1              193 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1              194 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2              195 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3              196 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261               197 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1              198 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2              199 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1              200 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2              201 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a             202 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b             203 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a             204 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b             205 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1              206 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2              207 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a             208 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b             209 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a             210 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b             211 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a             212 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b             213 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk84_1              214 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmmk82_1              215 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk81_1              216 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmperc02              217 /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    #define prmperc03              218 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05              219 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08              220 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09              221 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11              222 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61              223 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62              224 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67              225 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68              226 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08     227 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11     228 /* Doseerpercentage 11                                                                                                            */
    #define prmtypema0261          229 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262          230 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521          231 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522          232 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532          233 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868          234 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126          235 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema2221          236 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122          237 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132          238 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222          239 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231          240 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324          241 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334          242 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384          243 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424          244 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433          245 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484          246 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828          247 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281          248 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                249 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                250 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                251 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                252 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                253 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                254 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                255 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                256 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                257 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                258 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                259 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                260 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                261 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                262 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                263 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                264 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                265 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                266 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                267 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                268 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                269 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                270 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                271 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02              272 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03              273 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05              274 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08              275 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09              276 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11              277 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21              278 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22              279 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24              280 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26              281 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28              282 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31              283 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32              284 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33              285 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34              286 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38              287 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61              288 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62              289 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67              290 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68              291 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84              292 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82              293 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81              294 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262             295 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868             296 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl2221             297 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132             298 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231             299 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334             300 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433             301 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281             302 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg    303 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat     304 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus 305 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus  306 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus  307 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus 308 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus  309 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus  310 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus 311 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus  312 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus  313 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus 314 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus  315 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus  316 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus 317 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus  318 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus  319 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus 320 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus  321 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus  322 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus 323 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus  324 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus  325 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus 326 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus  327 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus  328 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus 329 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus  330 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus  331 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus 332 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus  333 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus  334 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                335 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts              336 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg              337 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02              338 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02              339 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02              340 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02             341 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02            342 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02             343 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03              344 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03              345 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03              346 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03             347 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03            348 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03             349 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05              350 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05              351 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05              352 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05             353 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05            354 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05             355 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08              356 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08              357 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08              358 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08             359 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08            360 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08             361 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09              362 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09              363 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09              364 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09             365 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09            366 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09             367 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11              368 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11              369 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11              370 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11             371 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11            372 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11             373 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21              374 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21              375 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21              376 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21             377 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21            378 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21             379 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22              380 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22              381 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22              382 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22             383 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22            384 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22             385 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24              386 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24              387 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24              388 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24             389 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24            390 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24             391 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26              392 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26              393 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26              394 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26             395 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26            396 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26             397 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28              398 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28              399 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28              400 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28             401 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28            402 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28             403 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31              404 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31              405 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32              406 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32              407 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33              408 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33              409 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34              410 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34              411 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38              412 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38              413 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61              414 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61              415 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61              416 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61             417 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61            418 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61             419 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62              420 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62              421 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62              422 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62             423 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62            424 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62             425 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67              426 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67              427 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67              428 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67             429 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67            430 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67             431 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68              432 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68              433 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68              434 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68             435 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68            436 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68             437 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt82              438 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82              439 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82              440 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82             441 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82            442 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82             443 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84              444 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84              445 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84              446 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84             447 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84            448 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84             449 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmpmgt81              450 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81              451 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81              452 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81             453 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81            454 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81             455 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmrto02bus            456 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus           457 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus            458 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus            459 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02bus           460 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03bus            461 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus           462 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus            463 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus            464 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03bus           465 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05bus            466 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus           467 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus            468 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus            469 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05bus           470 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08bus            471 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus           472 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus            473 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus            474 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08bus           475 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09bus            476 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus           477 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus            478 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus            479 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09bus           480 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11bus            481 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus           482 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus            483 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus            484 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11bus           485 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto61bus            486 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus           487 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus            488 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus            489 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61bus           490 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62bus            491 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus           492 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus            493 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus            494 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62bus           495 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67bus            496 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus           497 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus            498 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus            499 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67bus           500 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68bus            501 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus           502 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus            503 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus            504 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68bus           505 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02            506 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02             507 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02            508 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02             509 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmpriohd03            510 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03             511 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03            512 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03             513 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmpriohd05            514 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05             515 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05            516 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05             517 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmpriohd08            518 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08             519 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08            520 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08             521 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmpriohd09            522 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09             523 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09            524 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09             525 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmpriohd11            526 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11             527 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11            528 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11             529 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmpriohd61            530 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61             531 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61            532 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61             533 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmpriohd62            534 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62             535 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62            536 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62             537 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmpriohd67            538 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67             539 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67            540 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67             541 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmpriohd68            542 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68             543 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68            544 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68             545 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmkarsg02             546 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03             547 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05             548 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08             549 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09             550 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11             551 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61             552 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62             553 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67             554 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68             555 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02           556 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03           557 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05           558 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08           559 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09           560 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11           561 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61           562 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62           563 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67           564 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68           565 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1               566 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1               567 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1               568 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2               569 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2               570 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2               571 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3               572 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3               573 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3               574 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4               575 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4               576 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4               577 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5               578 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5               579 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5               580 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6               581 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6               582 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6               583 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg1_02              584 /* Maximale groentijd MG1 02                                                                                                      */
    #define prmmg1_03              585 /* Maximale groentijd MG1 03                                                                                                      */
    #define prmmg1_05              586 /* Maximale groentijd MG1 05                                                                                                      */
    #define prmmg1_08              587 /* Maximale groentijd MG1 08                                                                                                      */
    #define prmmg1_09              588 /* Maximale groentijd MG1 09                                                                                                      */
    #define prmmg1_11              589 /* Maximale groentijd MG1 11                                                                                                      */
    #define prmmg1_21              590 /* Maximale groentijd MG1 21                                                                                                      */
    #define prmmg1_22              591 /* Maximale groentijd MG1 22                                                                                                      */
    #define prmmg1_24              592 /* Maximale groentijd MG1 24                                                                                                      */
    #define prmmg1_26              593 /* Maximale groentijd MG1 26                                                                                                      */
    #define prmmg1_28              594 /* Maximale groentijd MG1 28                                                                                                      */
    #define prmmg1_61              595 /* Maximale groentijd MG1 61                                                                                                      */
    #define prmmg1_62              596 /* Maximale groentijd MG1 62                                                                                                      */
    #define prmmg1_67              597 /* Maximale groentijd MG1 67                                                                                                      */
    #define prmmg1_68              598 /* Maximale groentijd MG1 68                                                                                                      */
    #define prmmg1_81              599 /* Maximale groentijd MG1 81                                                                                                      */
    #define prmmg1_82              600 /* Maximale groentijd MG1 82                                                                                                      */
    #define prmmg1_84              601 /* Maximale groentijd MG1 84                                                                                                      */
    #define prmmg2_02              602 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03              603 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05              604 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08              605 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09              606 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11              607 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21              608 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22              609 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24              610 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26              611 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28              612 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61              613 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62              614 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67              615 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68              616 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81              617 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82              618 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84              619 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02              620 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03              621 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05              622 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08              623 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09              624 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11              625 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21              626 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22              627 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24              628 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26              629 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28              630 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61              631 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62              632 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67              633 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68              634 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81              635 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82              636 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84              637 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02              638 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03              639 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05              640 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08              641 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09              642 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11              643 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21              644 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22              645 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24              646 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26              647 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28              648 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61              649 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62              650 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67              651 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68              652 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81              653 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82              654 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84              655 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02              656 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03              657 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05              658 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08              659 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09              660 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11              661 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21              662 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22              663 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24              664 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26              665 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28              666 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61              667 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62              668 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67              669 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68              670 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81              671 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82              672 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84              673 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02              674 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03              675 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05              676 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08              677 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09              678 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11              679 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21              680 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22              681 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24              682 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26              683 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28              684 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61              685 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62              686 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67              687 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68              688 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81              689 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82              690 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84              691 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02              692 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03              693 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05              694 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08              695 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09              696 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11              697 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21              698 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22              699 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24              700 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26              701 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28              702 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61              703 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62              704 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67              705 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68              706 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81              707 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82              708 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84              709 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02     710 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03     711 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05     712 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08     713 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09     714 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11     715 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21     716 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22     717 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24     718 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26     719 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28     720 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31     721 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32     722 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33     723 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34     724 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38     725 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61     726 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62     727 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67     728 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68     729 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81     730 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid84     731 /* Approach id voor fase 84                                                                                                       */
    #define prmrisapproachid82     732 /* Approach id voor fase 82                                                                                                       */
    #define prmrislaneid02_1       733 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2       734 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1       735 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1       736 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1       737 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2       738 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1       739 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1       740 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1       741 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1       742 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1       743 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1       744 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1       745 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1       746 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2       747 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1       748 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2       749 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1       750 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2       751 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1       752 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2       753 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1       754 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2       755 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1       756 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1       757 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2       758 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1       759 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1       760 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2       761 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1       762 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid84_1       763 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrislaneid82_1       764 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrisastart02mveh1    765 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2    766 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1    767 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1    768 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1    769 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2    770 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1    771 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1    772 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1     773 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1     774 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1     775 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1     776 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1     777 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1     778 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2     779 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart81fts1     780 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart84fts1     781 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisastart82fts1     782 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart68mveh2    783 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh1    784 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart67mveh1    785 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart62mveh2    786 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh1    787 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart61mveh1    788 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart38vtg2     789 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg1     790 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart34vtg2     791 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg1     792 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart33vtg2     793 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg1     794 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart32vtg2     795 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg1     796 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend02mveh1      797 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2      798 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1      799 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1      800 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1      801 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2      802 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1      803 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1      804 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1       805 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1       806 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend24fts1       807 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend26fts1       808 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend28fts1       809 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend31vtg1       810 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg2       811 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend81fts1       812 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    #define prmrisaend84fts1       813 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend82fts1       814 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    #define prmrisaend68mveh2      815 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend68mveh1      816 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend67mveh1      817 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend62mveh2      818 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh1      819 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend61mveh1      820 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend38vtg2       821 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg1       822 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend34vtg2       823 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg1       824 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend33vtg2       825 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg1       826 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend32vtg2       827 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg1       828 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisvstart02mveh1    829 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2    830 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1    831 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1    832 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1    833 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2    834 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1    835 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1    836 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1     837 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1     838 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart24fts1     839 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvstart26fts1     840 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart28fts1     841 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart31vtg1     842 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg2     843 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart81fts1     844 /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    #define prmrisvstart84fts1     845 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvstart82fts1     846 /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    #define prmrisvstart68mveh2    847 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart68mveh1    848 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart67mveh1    849 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart62mveh2    850 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh1    851 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart61mveh1    852 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart38vtg2     853 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg1     854 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart34vtg2     855 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg1     856 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart33vtg2     857 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg1     858 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart32vtg2     859 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg1     860 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvend02mveh1      861 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2      862 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1      863 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1      864 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1      865 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2      866 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1      867 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1      868 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1       869 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1       870 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1       871 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1       872 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1       873 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1       874 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2       875 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend81fts1       876 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend84fts1       877 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmrisvend82fts1       878 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend68mveh2      879 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh1      880 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend67mveh1      881 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend62mveh2      882 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh1      883 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend61mveh1      884 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend38vtg2       885 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg1       886 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend34vtg2       887 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg1       888 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend33vtg2       889 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg1       890 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend32vtg2       891 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg1       892 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmmkrgd24_3           893 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                 894 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus         895 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus         896 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog          897 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag          898 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil        899 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag      900 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02           901 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02           902 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03           903 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03           904 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05           905 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05           906 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08           907 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08           908 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09           909 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09           910 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11           911 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11           912 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22           913 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22           914 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28           915 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28           916 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68           917 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68           918 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog          919 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog          920 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02             921 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03             922 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05             923 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08             924 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09             925 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11             926 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21             927 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22             928 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24             929 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26             930 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28             931 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31             932 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32             933 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33             934 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34             935 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38             936 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61             937 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62             938 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67             939 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68             940 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr82             941 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84             942 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmmlfpr81             943 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmaltg02              944 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02              945 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03              946 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03              947 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05              948 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05              949 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08              950 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08              951 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09              952 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09              953 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11              954 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11              955 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21              956 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21              957 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22              958 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232            959 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24              960 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434            961 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26              962 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26              963 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28              964 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28              965 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31              966 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31              967 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32              968 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33              969 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384            970 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34              971 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38              972 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38              973 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61              974 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61              975 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62              976 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62              977 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67              978 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67              979 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68              980 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68              981 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg82              982 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82              983 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84              984 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltg81              985 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81              986 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    #define prmtestdsivert         987 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn          988 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat          989 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                990
#else
    #define PRMMAX1                987
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
/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

