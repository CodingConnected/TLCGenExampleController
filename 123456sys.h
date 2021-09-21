/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   11.0
    TLCGEN:   0.9.10.0
   CCOLGEN:   0.9.10.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    06-07-2021   Cyril       basisversie
 * 1.1.0    27-07-2021   Peter       TISG-matrix toegevoegd
 * 1.4.0    19-08-2021   Cyril       TLCGen0.9.10.0; fc21+fc67 toegeveogd
 * 1.5.0    14-09-2021   Peter       Kleine aanpassingen m.b.t. TISG-matrix
 * 1.6.0    20-09-2021   Cyril       Nieuwe versie TLCGen (20092021 beta); handmatig Real_los + F11
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.6.0 20210920"
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
    #define FCMAX1 21 /* aantal fasecycli */

/* overige uitgangen */
/* ----------------- */
    #define ussegm1       (FCMAX +  0) /* Aansturing segmenten display               */
    #define ussegm2       (FCMAX +  1) /* Aansturing segmenten display               */
    #define ussegm3       (FCMAX +  2) /* Aansturing segmenten display               */
    #define ussegm4       (FCMAX +  3) /* Aansturing segmenten display               */
    #define ussegm5       (FCMAX +  4) /* Aansturing segmenten display               */
    #define ussegm6       (FCMAX +  5) /* Aansturing segmenten display               */
    #define ussegm7       (FCMAX +  6) /* Aansturing segmenten display               */
    #define usML1         (FCMAX +  7) /* Verklikken actief zijn ML1                 */
    #define usML2         (FCMAX +  8) /* Verklikken actief zijn ML2                 */
    #define usML3         (FCMAX +  9) /* Verklikken actief zijn ML3                 */
    #define usML4         (FCMAX + 10) /* Verklikken actief zijn ML4                 */
    #define usovtevroeg02 (FCMAX + 11) /* Voorste OV voertuig bij 02 te vroeg        */
    #define usovoptijd02  (FCMAX + 12) /* Voorste OV voertuig bij 02 op tijd         */
    #define usovtelaat02  (FCMAX + 13) /* Voorste OV voertuig bij 02 te laat         */
    #define usovtevroeg03 (FCMAX + 14) /* Voorste OV voertuig bij 03 te vroeg        */
    #define usovoptijd03  (FCMAX + 15) /* Voorste OV voertuig bij 03 op tijd         */
    #define usovtelaat03  (FCMAX + 16) /* Voorste OV voertuig bij 03 te laat         */
    #define usovtevroeg05 (FCMAX + 17) /* Voorste OV voertuig bij 05 te vroeg        */
    #define usovoptijd05  (FCMAX + 18) /* Voorste OV voertuig bij 05 op tijd         */
    #define usovtelaat05  (FCMAX + 19) /* Voorste OV voertuig bij 05 te laat         */
    #define usovtevroeg08 (FCMAX + 20) /* Voorste OV voertuig bij 08 te vroeg        */
    #define usovoptijd08  (FCMAX + 21) /* Voorste OV voertuig bij 08 op tijd         */
    #define usovtelaat08  (FCMAX + 22) /* Voorste OV voertuig bij 08 te laat         */
    #define usovtevroeg09 (FCMAX + 23) /* Voorste OV voertuig bij 09 te vroeg        */
    #define usovoptijd09  (FCMAX + 24) /* Voorste OV voertuig bij 09 op tijd         */
    #define usovtelaat09  (FCMAX + 25) /* Voorste OV voertuig bij 09 te laat         */
    #define usovtevroeg11 (FCMAX + 26) /* Voorste OV voertuig bij 11 te vroeg        */
    #define usovoptijd11  (FCMAX + 27) /* Voorste OV voertuig bij 11 op tijd         */
    #define usovtelaat11  (FCMAX + 28) /* Voorste OV voertuig bij 11 te laat         */
    #define usovtevroeg61 (FCMAX + 29) /* Voorste OV voertuig bij 61 te vroeg        */
    #define usovoptijd61  (FCMAX + 30) /* Voorste OV voertuig bij 61 op tijd         */
    #define usovtelaat61  (FCMAX + 31) /* Voorste OV voertuig bij 61 te laat         */
    #define usovtevroeg62 (FCMAX + 32) /* Voorste OV voertuig bij 62 te vroeg        */
    #define usovoptijd62  (FCMAX + 33) /* Voorste OV voertuig bij 62 op tijd         */
    #define usovtelaat62  (FCMAX + 34) /* Voorste OV voertuig bij 62 te laat         */
    #define usovtevroeg67 (FCMAX + 35) /* Voorste OV voertuig bij 67 te vroeg        */
    #define usovoptijd67  (FCMAX + 36) /* Voorste OV voertuig bij 67 op tijd         */
    #define usovtelaat67  (FCMAX + 37) /* Voorste OV voertuig bij 67 te laat         */
    #define usovtevroeg68 (FCMAX + 38) /* Voorste OV voertuig bij 68 te vroeg        */
    #define usovoptijd68  (FCMAX + 39) /* Voorste OV voertuig bij 68 op tijd         */
    #define usovtelaat68  (FCMAX + 40) /* Voorste OV voertuig bij 68 te laat         */
    #define usmaxwt       (FCMAX + 41) /* Verklikken maximale wachttijd overschreden */
    #define uskarmelding  (FCMAX + 42) /* Verklikken ontvangst melding KAR           */
    #define uskarog       (FCMAX + 43) /* Verklikken ondergedrag KAR                 */
    #define usovinm02     (FCMAX + 44) /* Verklikken inmelding OV fase 02            */
    #define usovinm03     (FCMAX + 45) /* Verklikken inmelding OV fase 03            */
    #define usovinm05     (FCMAX + 46) /* Verklikken inmelding OV fase 05            */
    #define usovinm08     (FCMAX + 47) /* Verklikken inmelding OV fase 08            */
    #define usovinm09     (FCMAX + 48) /* Verklikken inmelding OV fase 09            */
    #define usovinm11     (FCMAX + 49) /* Verklikken inmelding OV fase 11            */
    #define usovinm61     (FCMAX + 50) /* Verklikken inmelding OV fase 61            */
    #define usovinm62     (FCMAX + 51) /* Verklikken inmelding OV fase 62            */
    #define usovinm67     (FCMAX + 52) /* Verklikken inmelding OV fase 67            */
    #define usovinm68     (FCMAX + 53) /* Verklikken inmelding OV fase 68            */
    #define ushdinm02     (FCMAX + 54) /* Verklikken inmelding HD fase 02            */
    #define ushdinm03     (FCMAX + 55) /* Verklikken inmelding HD fase 03            */
    #define ushdinm05     (FCMAX + 56) /* Verklikken inmelding HD fase 05            */
    #define ushdinm08     (FCMAX + 57) /* Verklikken inmelding HD fase 08            */
    #define ushdinm09     (FCMAX + 58) /* Verklikken inmelding HD fase 09            */
    #define ushdinm11     (FCMAX + 59) /* Verklikken inmelding HD fase 11            */
    #define ushdinm61     (FCMAX + 60) /* Verklikken inmelding HD fase 61            */
    #define ushdinm62     (FCMAX + 61) /* Verklikken inmelding HD fase 62            */
    #define ushdinm67     (FCMAX + 62) /* Verklikken inmelding HD fase 67            */
    #define ushdinm68     (FCMAX + 63) /* Verklikken inmelding HD fase 68            */
    #define usperdef      (FCMAX + 64) /* Default periode actief                     */
    #define usper1        (FCMAX + 65) /* Periode Dag periode actief                 */
    #define usper2        (FCMAX + 66) /* Periode Ochtendspits actief                */
    #define usper3        (FCMAX + 67) /* Periode Avondspits actief                  */
    #define usper4        (FCMAX + 68) /* Periode Koopavond actief                   */
    #define usper5        (FCMAX + 69) /* Periode Weekend actief                     */
    #define usper6        (FCMAX + 70) /* Periode Reserve actief                     */
    #define usrgv         (FCMAX + 71) /* Verklikken actief zijn RoBuGrover          */
    #define uswtk21       (FCMAX + 72) /* Aansturing waitsignaal detector k21        */
    #define uswtk22       (FCMAX + 73) /* Aansturing waitsignaal detector k22        */
    #define uswtk24       (FCMAX + 74) /* Aansturing waitsignaal detector k24        */
    #define uswtk26       (FCMAX + 75) /* Aansturing waitsignaal detector k26        */
    #define uswtk28       (FCMAX + 76) /* Aansturing waitsignaal detector k28        */
    #define uswtk31a      (FCMAX + 77) /* Aansturing waitsignaal detector k31a       */
    #define uswtk31b      (FCMAX + 78) /* Aansturing waitsignaal detector k31b       */
    #define uswtk32a      (FCMAX + 79) /* Aansturing waitsignaal detector k32a       */
    #define uswtk32b      (FCMAX + 80) /* Aansturing waitsignaal detector k32b       */
    #define uswtk33a      (FCMAX + 81) /* Aansturing waitsignaal detector k33a       */
    #define uswtk33b      (FCMAX + 82) /* Aansturing waitsignaal detector k33b       */
    #define uswtk34a      (FCMAX + 83) /* Aansturing waitsignaal detector k34a       */
    #define uswtk34b      (FCMAX + 84) /* Aansturing waitsignaal detector k34b       */
    #define uswtk38a      (FCMAX + 85) /* Aansturing waitsignaal detector k38a       */
    #define uswtk38b      (FCMAX + 86) /* Aansturing waitsignaal detector k38b       */
    #define uswtk84       (FCMAX + 87) /* Aansturing waitsignaal detector k84        */
    #define USMAX1        (FCMAX + 88)

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
    #define d84_1             62
    #define dk84              63
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define ddummykarin02bus  64
    #define ddummykarin03bus  65
    #define ddummykarin05bus  66
    #define ddummykarin08bus  67
    #define ddummykarin09bus  68
    #define ddummykarin11bus  69
    #define ddummykarin61bus  70
    #define ddummykarin62bus  71
    #define ddummykarin67bus  72
    #define ddummykarin68bus  73
    #define ddummykaruit02bus 74
    #define ddummykaruit03bus 75
    #define ddummykaruit05bus 76
    #define ddummykaruit08bus 77
    #define ddummykaruit09bus 78
    #define ddummykaruit11bus 79
    #define ddummykaruit61bus 80
    #define ddummykaruit62bus 81
    #define ddummykaruit67bus 82
    #define ddummykaruit68bus 83
    #define ddummyhdkarin02   84
    #define ddummyhdkaruit02  85
    #define ddummyhdkarin03   86
    #define ddummyhdkaruit03  87
    #define ddummyhdkarin05   88
    #define ddummyhdkaruit05  89
    #define ddummyhdkarin08   90
    #define ddummyhdkaruit08  91
    #define ddummyhdkarin09   92
    #define ddummyhdkaruit09  93
    #define ddummyhdkarin11   94
    #define ddummyhdkaruit11  95
    #define ddummyhdkarin61   96
    #define ddummyhdkaruit61  97
    #define ddummyhdkarin62   98
    #define ddummyhdkaruit62  99
    #define ddummyhdkarin67   100
    #define ddummyhdkaruit67  101
    #define ddummyhdkarin68   102
    #define ddummyhdkaruit68  103
    #define DPMAX1            104 /* aantal detectoren testomgeving */
#else
    #define DPMAX1            64 /* aantal detectoren automaat omgeving */
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
    #define hopdrempelen02     0 /* Opdrempelen toepassen voor fase 02                                 */
    #define hgeendynhiaat02    1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 02          */
    #define hverleng_02_1a     2 /* Instructie verlengen op detector 02_1a ongeacht dynamische hiaat   */
    #define hverleng_02_1b     3 /* Instructie verlengen op detector 02_1b ongeacht dynamische hiaat   */
    #define hverleng_02_2a     4 /* Instructie verlengen op detector 02_2a ongeacht dynamische hiaat   */
    #define hverleng_02_2b     5 /* Instructie verlengen op detector 02_2b ongeacht dynamische hiaat   */
    #define hverleng_02_3a     6 /* Instructie verlengen op detector 02_3a ongeacht dynamische hiaat   */
    #define hverleng_02_3b     7 /* Instructie verlengen op detector 02_3b ongeacht dynamische hiaat   */
    #define hverleng_02_4a     8 /* Instructie verlengen op detector 02_4a ongeacht dynamische hiaat   */
    #define hverleng_02_4b     9 /* Instructie verlengen op detector 02_4b ongeacht dynamische hiaat   */
    #define hopdrempelen08    10 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08   11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a    12 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b    13 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a    14 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b    15 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a    16 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b    17 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a    18 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b    19 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09    20 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09   21 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1     22 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2     23 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3     24 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11    25 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11   26 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1     27 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2     28 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3     29 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4     30 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a          31 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b          32 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a          33 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b          34 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a          35 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b          36 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a          37 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b          38 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hnla22_1          39 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a          40 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a          41 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a          42 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a          43 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hstp02bus         44 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus         45 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus         46 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus         47 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus         48 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus         49 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus         50 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus         51 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus         52 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus         53 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus        54 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus      55 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus     56 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar   57 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar  58 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03bus        59 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus      60 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus     61 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar   62 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar  63 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05bus        64 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus      65 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus     66 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar   67 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar  68 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08bus        69 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus      70 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus     71 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar   72 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar  73 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09bus        74 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus      75 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus     76 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar   77 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar  78 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11bus        79 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus      80 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus     81 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar   82 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar  83 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio61bus        84 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus      85 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus     86 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar   87 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar  88 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62bus        89 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus      90 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus     91 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar   92 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar  93 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67bus        94 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus      95 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus     96 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar   97 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar  98 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68bus        99 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus     100 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus    101 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar  102 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar 103 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02            104 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02          105 /* HD inmelding 02                                                    */
    #define hhduit02         106 /* HD uitmelding 02                                                   */
    #define hhdin02kar       107 /* HD inmelding 02                                                    */
    #define hhduit02kar      108 /* HD uitmelding 02                                                   */
    #define hhd03            109 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03          110 /* HD inmelding 03                                                    */
    #define hhduit03         111 /* HD uitmelding 03                                                   */
    #define hhdin03kar       112 /* HD inmelding 03                                                    */
    #define hhduit03kar      113 /* HD uitmelding 03                                                   */
    #define hhd05            114 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05          115 /* HD inmelding 05                                                    */
    #define hhduit05         116 /* HD uitmelding 05                                                   */
    #define hhdin05kar       117 /* HD inmelding 05                                                    */
    #define hhduit05kar      118 /* HD uitmelding 05                                                   */
    #define hhd08            119 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08          120 /* HD inmelding 08                                                    */
    #define hhduit08         121 /* HD uitmelding 08                                                   */
    #define hhdin08kar       122 /* HD inmelding 08                                                    */
    #define hhduit08kar      123 /* HD uitmelding 08                                                   */
    #define hhd09            124 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09          125 /* HD inmelding 09                                                    */
    #define hhduit09         126 /* HD uitmelding 09                                                   */
    #define hhdin09kar       127 /* HD inmelding 09                                                    */
    #define hhduit09kar      128 /* HD uitmelding 09                                                   */
    #define hhd11            129 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11          130 /* HD inmelding 11                                                    */
    #define hhduit11         131 /* HD uitmelding 11                                                   */
    #define hhdin11kar       132 /* HD inmelding 11                                                    */
    #define hhduit11kar      133 /* HD uitmelding 11                                                   */
    #define hhd61            134 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61          135 /* HD inmelding 61                                                    */
    #define hhduit61         136 /* HD uitmelding 61                                                   */
    #define hhdin61kar       137 /* HD inmelding 61                                                    */
    #define hhduit61kar      138 /* HD uitmelding 61                                                   */
    #define hhd62            139 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62          140 /* HD inmelding 62                                                    */
    #define hhduit62         141 /* HD uitmelding 62                                                   */
    #define hhdin62kar       142 /* HD inmelding 62                                                    */
    #define hhduit62kar      143 /* HD uitmelding 62                                                   */
    #define hhd67            144 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67          145 /* HD inmelding 67                                                    */
    #define hhduit67         146 /* HD uitmelding 67                                                   */
    #define hhdin67kar       147 /* HD inmelding 67                                                    */
    #define hhduit67kar      148 /* HD uitmelding 67                                                   */
    #define hhd68            149 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68          150 /* HD inmelding 68                                                    */
    #define hhduit68         151 /* HD uitmelding 68                                                   */
    #define hhdin68kar       152 /* HD inmelding 68                                                    */
    #define hhduit68kar      153 /* HD uitmelding 68                                                   */
    #define hrgvd24_3_d24_2  154 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact          155 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02        156 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03        157 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05        158 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08        159 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09        160 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11        161 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22        162 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28        163 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68        164 /* Bijhouden primaire realisatie fase 68                              */
    #define hnleg0262        165
    #define hnleg0868        166
    #define hnleg2221        167
    #define hnlsg3132        168
    #define hnlsg3231        169
    #define hnlsg3334        170
    #define hnlsg3433        171
    #define hinl32           172 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32           173 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31           174 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31           175 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34           176 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34           177 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33           178 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33           179 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62           180 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68           181 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21           182 /* Onthouden toestaan los realiseren fase 21                          */
    #define HEMAX1           183

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
    #define mrealtijdmin02  42 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03  43 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05  44 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08  45 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09  46 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11  47 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21  48 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22  49 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24  50 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26  51 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28  52 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31  53 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32  54 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33  55 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34  56 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38  57 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61  58 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62  59 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67  60 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68  61 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin84  62 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02  63 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03  64 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05  65 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08  66 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09  67 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11  68 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21  69 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22  70 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24  71 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26  72 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28  73 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31  74 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32  75 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33  76 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34  77 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38  78 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61  79 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62  80 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67  81 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68  82 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax84  83 /* Realisatie maximum tijd fase 84                              */
    #define mar02           84 /* Alternatieve ruimte fase 02                                  */
    #define mar03           85 /* Alternatieve ruimte fase 03                                  */
    #define mar05           86 /* Alternatieve ruimte fase 05                                  */
    #define mar08           87 /* Alternatieve ruimte fase 08                                  */
    #define mar09           88 /* Alternatieve ruimte fase 09                                  */
    #define mar11           89 /* Alternatieve ruimte fase 11                                  */
    #define mar21           90 /* Alternatieve ruimte fase 21                                  */
    #define mar22           91 /* Alternatieve ruimte fase 22                                  */
    #define mar24           92 /* Alternatieve ruimte fase 24                                  */
    #define mar26           93 /* Alternatieve ruimte fase 26                                  */
    #define mar28           94 /* Alternatieve ruimte fase 28                                  */
    #define mar31           95 /* Alternatieve ruimte fase 31                                  */
    #define mar32           96 /* Alternatieve ruimte fase 32                                  */
    #define mar33           97 /* Alternatieve ruimte fase 33                                  */
    #define mar34           98 /* Alternatieve ruimte fase 34                                  */
    #define mar38           99 /* Alternatieve ruimte fase 38                                  */
    #define mar61          100 /* Alternatieve ruimte fase 61                                  */
    #define mar62          101 /* Alternatieve ruimte fase 62                                  */
    #define mar67          102 /* Alternatieve ruimte fase 67                                  */
    #define mar68          103 /* Alternatieve ruimte fase 68                                  */
    #define mar84          104 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1         105

/* tijd elementen */
/* -------------- */
    #define t02_1a_1          0 /* Dynamische hiaattijden moment 1 voor detector 02_1a                                      */
    #define t02_1a_2          1 /* Dynamische hiaattijden moment 2 voor detector 02_1a                                      */
    #define ttdh_02_1a_1      2 /* Dynamische hiaattijden TDH 1 voor detector 02_1a                                         */
    #define ttdh_02_1a_2      3 /* Dynamische hiaattijden TDH 2 voor detector 02_1a                                         */
    #define tmax_02_1a        4 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1a                               */
    #define t02_1b_1          5 /* Dynamische hiaattijden moment 1 voor detector 02_1b                                      */
    #define t02_1b_2          6 /* Dynamische hiaattijden moment 2 voor detector 02_1b                                      */
    #define ttdh_02_1b_1      7 /* Dynamische hiaattijden TDH 1 voor detector 02_1b                                         */
    #define ttdh_02_1b_2      8 /* Dynamische hiaattijden TDH 2 voor detector 02_1b                                         */
    #define tmax_02_1b        9 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_1b                               */
    #define t02_2a_1         10 /* Dynamische hiaattijden moment 1 voor detector 02_2a                                      */
    #define t02_2a_2         11 /* Dynamische hiaattijden moment 2 voor detector 02_2a                                      */
    #define ttdh_02_2a_1     12 /* Dynamische hiaattijden TDH 1 voor detector 02_2a                                         */
    #define ttdh_02_2a_2     13 /* Dynamische hiaattijden TDH 2 voor detector 02_2a                                         */
    #define tmax_02_2a       14 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2a                               */
    #define t02_2b_1         15 /* Dynamische hiaattijden moment 1 voor detector 02_2b                                      */
    #define t02_2b_2         16 /* Dynamische hiaattijden moment 2 voor detector 02_2b                                      */
    #define ttdh_02_2b_1     17 /* Dynamische hiaattijden TDH 1 voor detector 02_2b                                         */
    #define ttdh_02_2b_2     18 /* Dynamische hiaattijden TDH 2 voor detector 02_2b                                         */
    #define tmax_02_2b       19 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_2b                               */
    #define t02_3a_1         20 /* Dynamische hiaattijden moment 1 voor detector 02_3a                                      */
    #define t02_3a_2         21 /* Dynamische hiaattijden moment 2 voor detector 02_3a                                      */
    #define ttdh_02_3a_1     22 /* Dynamische hiaattijden TDH 1 voor detector 02_3a                                         */
    #define ttdh_02_3a_2     23 /* Dynamische hiaattijden TDH 2 voor detector 02_3a                                         */
    #define tmax_02_3a       24 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3a                               */
    #define t02_3b_1         25 /* Dynamische hiaattijden moment 1 voor detector 02_3b                                      */
    #define t02_3b_2         26 /* Dynamische hiaattijden moment 2 voor detector 02_3b                                      */
    #define ttdh_02_3b_1     27 /* Dynamische hiaattijden TDH 1 voor detector 02_3b                                         */
    #define ttdh_02_3b_2     28 /* Dynamische hiaattijden TDH 2 voor detector 02_3b                                         */
    #define tmax_02_3b       29 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_3b                               */
    #define t02_4a_1         30 /* Dynamische hiaattijden moment 1 voor detector 02_4a                                      */
    #define t02_4a_2         31 /* Dynamische hiaattijden moment 2 voor detector 02_4a                                      */
    #define ttdh_02_4a_1     32 /* Dynamische hiaattijden TDH 1 voor detector 02_4a                                         */
    #define ttdh_02_4a_2     33 /* Dynamische hiaattijden TDH 2 voor detector 02_4a                                         */
    #define tmax_02_4a       34 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4a                               */
    #define t02_4b_1         35 /* Dynamische hiaattijden moment 1 voor detector 02_4b                                      */
    #define t02_4b_2         36 /* Dynamische hiaattijden moment 2 voor detector 02_4b                                      */
    #define ttdh_02_4b_1     37 /* Dynamische hiaattijden TDH 1 voor detector 02_4b                                         */
    #define ttdh_02_4b_2     38 /* Dynamische hiaattijden TDH 2 voor detector 02_4b                                         */
    #define tmax_02_4b       39 /* Dynamische hiaattijden maximale tijd 2 voor detector 02_4b                               */
    #define t08_1a_1         40 /* Dynamische hiaattijden moment 1 voor detector 08_1a                                      */
    #define t08_1a_2         41 /* Dynamische hiaattijden moment 2 voor detector 08_1a                                      */
    #define ttdh_08_1a_1     42 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                                         */
    #define ttdh_08_1a_2     43 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                                         */
    #define tmax_08_1a       44 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a                               */
    #define t08_1b_1         45 /* Dynamische hiaattijden moment 1 voor detector 08_1b                                      */
    #define t08_1b_2         46 /* Dynamische hiaattijden moment 2 voor detector 08_1b                                      */
    #define ttdh_08_1b_1     47 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                                         */
    #define ttdh_08_1b_2     48 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                                         */
    #define tmax_08_1b       49 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b                               */
    #define t08_2a_1         50 /* Dynamische hiaattijden moment 1 voor detector 08_2a                                      */
    #define t08_2a_2         51 /* Dynamische hiaattijden moment 2 voor detector 08_2a                                      */
    #define ttdh_08_2a_1     52 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                                         */
    #define ttdh_08_2a_2     53 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                                         */
    #define tmax_08_2a       54 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a                               */
    #define t08_2b_1         55 /* Dynamische hiaattijden moment 1 voor detector 08_2b                                      */
    #define t08_2b_2         56 /* Dynamische hiaattijden moment 2 voor detector 08_2b                                      */
    #define ttdh_08_2b_1     57 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                                         */
    #define ttdh_08_2b_2     58 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                                         */
    #define tmax_08_2b       59 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b                               */
    #define t08_3a_1         60 /* Dynamische hiaattijden moment 1 voor detector 08_3a                                      */
    #define t08_3a_2         61 /* Dynamische hiaattijden moment 2 voor detector 08_3a                                      */
    #define ttdh_08_3a_1     62 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                                         */
    #define ttdh_08_3a_2     63 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                                         */
    #define tmax_08_3a       64 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a                               */
    #define t08_3b_1         65 /* Dynamische hiaattijden moment 1 voor detector 08_3b                                      */
    #define t08_3b_2         66 /* Dynamische hiaattijden moment 2 voor detector 08_3b                                      */
    #define ttdh_08_3b_1     67 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                                         */
    #define ttdh_08_3b_2     68 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                                         */
    #define tmax_08_3b       69 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b                               */
    #define t08_4a_1         70 /* Dynamische hiaattijden moment 1 voor detector 08_4a                                      */
    #define t08_4a_2         71 /* Dynamische hiaattijden moment 2 voor detector 08_4a                                      */
    #define ttdh_08_4a_1     72 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                                         */
    #define ttdh_08_4a_2     73 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                                         */
    #define tmax_08_4a       74 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a                               */
    #define t08_4b_1         75 /* Dynamische hiaattijden moment 1 voor detector 08_4b                                      */
    #define t08_4b_2         76 /* Dynamische hiaattijden moment 2 voor detector 08_4b                                      */
    #define ttdh_08_4b_1     77 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                                         */
    #define ttdh_08_4b_2     78 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                                         */
    #define tmax_08_4b       79 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b                               */
    #define t09_1_1          80 /* Dynamische hiaattijden moment 1 voor detector 09_1                                       */
    #define t09_1_2          81 /* Dynamische hiaattijden moment 2 voor detector 09_1                                       */
    #define ttdh_09_1_1      82 /* Dynamische hiaattijden TDH 1 voor detector 09_1                                          */
    #define ttdh_09_1_2      83 /* Dynamische hiaattijden TDH 2 voor detector 09_1                                          */
    #define tmax_09_1        84 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    #define t09_2_1          85 /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    #define t09_2_2          86 /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    #define ttdh_09_2_1      87 /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    #define ttdh_09_2_2      88 /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    #define tmax_09_2        89 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    #define t09_3_1          90 /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    #define t09_3_2          91 /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    #define ttdh_09_3_1      92 /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    #define ttdh_09_3_2      93 /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    #define tmax_09_3        94 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
    #define t11_1_1          95 /* Dynamische hiaattijden moment 1 voor detector 11_1                                       */
    #define t11_1_2          96 /* Dynamische hiaattijden moment 2 voor detector 11_1                                       */
    #define ttdh_11_1_1      97 /* Dynamische hiaattijden TDH 1 voor detector 11_1                                          */
    #define ttdh_11_1_2      98 /* Dynamische hiaattijden TDH 2 voor detector 11_1                                          */
    #define tmax_11_1        99 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                                */
    #define t11_2_1         100 /* Dynamische hiaattijden moment 1 voor detector 11_2                                       */
    #define t11_2_2         101 /* Dynamische hiaattijden moment 2 voor detector 11_2                                       */
    #define ttdh_11_2_1     102 /* Dynamische hiaattijden TDH 1 voor detector 11_2                                          */
    #define ttdh_11_2_2     103 /* Dynamische hiaattijden TDH 2 voor detector 11_2                                          */
    #define tmax_11_2       104 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                                */
    #define t11_3_1         105 /* Dynamische hiaattijden moment 1 voor detector 11_3                                       */
    #define t11_3_2         106 /* Dynamische hiaattijden moment 2 voor detector 11_3                                       */
    #define ttdh_11_3_1     107 /* Dynamische hiaattijden TDH 1 voor detector 11_3                                          */
    #define ttdh_11_3_2     108 /* Dynamische hiaattijden TDH 2 voor detector 11_3                                          */
    #define tmax_11_3       109 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                                */
    #define t11_4_1         110 /* Dynamische hiaattijden moment 1 voor detector 11_4                                       */
    #define t11_4_2         111 /* Dynamische hiaattijden moment 2 voor detector 11_4                                       */
    #define ttdh_11_4_1     112 /* Dynamische hiaattijden TDH 1 voor detector 11_4                                          */
    #define ttdh_11_4_2     113 /* Dynamische hiaattijden TDH 2 voor detector 11_4                                          */
    #define tmax_11_4       114 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                                */
    #define tav28_2         115 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                                  */
    #define tkm02           116 /* Kop maximum voor detector 02                                                             */
    #define tkm03           117 /* Kop maximum voor detector 03                                                             */
    #define tkm05           118 /* Kop maximum voor detector 05                                                             */
    #define tkm08           119 /* Kop maximum voor detector 08                                                             */
    #define tkm09           120 /* Kop maximum voor detector 09                                                             */
    #define tkm11           121 /* Kop maximum voor detector 11                                                             */
    #define tkm21           122 /* Kop maximum voor detector 21                                                             */
    #define tkm22           123 /* Kop maximum voor detector 22                                                             */
    #define tkm24           124 /* Kop maximum voor detector 24                                                             */
    #define tkm26           125 /* Kop maximum voor detector 26                                                             */
    #define tkm28           126 /* Kop maximum voor detector 28                                                             */
    #define tkm61           127 /* Kop maximum voor detector 61                                                             */
    #define tkm62           128 /* Kop maximum voor detector 62                                                             */
    #define tkm67           129 /* Kop maximum voor detector 67                                                             */
    #define tkm68           130 /* Kop maximum voor detector 68                                                             */
    #define tkm84           131 /* Kop maximum voor detector 84                                                             */
    #define thdvd02_1a      132 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a                               */
    #define thdvd02_1b      133 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b                               */
    #define tdstvert02      134 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                      */
    #define thdvd03_1       135 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    #define tdstvert03      136 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    #define thdvd05_1       137 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    #define tdstvert05      138 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    #define thdvd08_1a      139 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    #define thdvd08_1b      140 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    #define tdstvert08      141 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    #define thdvd09_1       142 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    #define tdstvert09      143 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    #define thdvd11_1       144 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    #define tdstvert11      145 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    #define tdstvert21      146 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    #define thdvd22_1       147 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    #define tdstvert22      148 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    #define thdvd24_1       149 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    #define tdstvert24      150 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    #define tdstvert26      151 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    #define thdvd28_1       152 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    #define tdstvert28      153 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    #define tdstvert31      154 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    #define tdstvert32      155 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    #define tdstvert33      156 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    #define tdstvert34      157 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    #define tdstvert38      158 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    #define thdvd61_1       159 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    #define tdstvert61      160 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    #define thdvd62_1a      161 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    #define thdvd62_1b      162 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    #define tdstvert62      163 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    #define thdvd67_1       164 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    #define tdstvert67      165 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    #define thdvd68_1a      166 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    #define thdvd68_1b      167 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    #define tdstvert68      168 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    #define thdvd84_1       169 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84      170 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tnlfg0262       171 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnleg0262       172 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlfg0868       173 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnleg0868       174 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlfg2221       175 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221      176 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221       177 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221      178 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132      179 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231      180 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334      181 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433      182 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tkarmelding     183 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog          184 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus     185 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus        186 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus        187 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus       188 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus     189 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus        190 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus        191 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus       192 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus     193 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus        194 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus        195 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus       196 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus     197 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus        198 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus        199 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus       200 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus     201 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus        202 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus        203 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus       204 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus     205 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus        206 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus        207 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus       208 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg61bus     209 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus        210 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus        211 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus       212 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus     213 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus        214 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus        215 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus       216 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus     217 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus        218 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus        219 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus       220 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar 221 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus     222 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus        223 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus        224 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus       225 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02         226 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02         227 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd      228 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar      229 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar     230 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03         231 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03         232 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd      233 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar      234 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar     235 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05         236 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05         237 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd      238 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar      239 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar     240 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08         241 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08         242 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd      243 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar      244 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar     245 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09         246 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09         247 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd      248 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar      249 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar     250 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11         251 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11         252 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd      253 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar      254 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar     255 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61         256 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61         257 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd      258 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar      259 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar     260 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62         261 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62         262 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd      263 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar      264 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar     265 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67         266 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67         267 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd      268 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar      269 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar     270 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68         271 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68         272 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd      273 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar      274 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar     275 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define trgad24_3       276 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3      277 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2 278 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2 279 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a        280 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b        281 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a        282 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b        283 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a        284 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b        285 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1         286 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2         287 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1         288 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2         289 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a        290 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b        291 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a        292 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b        293 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a        294 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b        295 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1         296 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2         297 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3         298 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1         299 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2         300 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3         301 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1         302 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1         303 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1         304 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1         305 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a        306 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b        307 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a        308 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b        309 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tuitgestca02    310 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03    311 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05    312 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08    313 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09    314 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11    315 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21    316 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22    317 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24    318 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26    319 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28    320 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31    321 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32    322 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33    323 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34    324 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38    325 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61    326 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62    327 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67    328 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68    329 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca84    330 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02        331 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a    332 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a   333 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b    334 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b   335 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08        336 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a    337 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a   338 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b    339 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b   340 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11        341 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4     342 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4    343 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205         344 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205         345 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611         346 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202         347 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808         348 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr2122         349 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tinl3231        350 /* Inloop tijd fase 32                                                                      */
    #define tinl3132        351 /* Inloop tijd fase 31                                                                      */
    #define tinl3433        352 /* Inloop tijd fase 34                                                                      */
    #define tinl3334        353 /* Inloop tijd fase 33                                                                      */
    #define tfo0522         354 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532         355 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126         356 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1          357

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
    #define schdynhiaat02         0 /* Toepassen dynamsich hiaat bij fase 02                          */
    #define schopdrempelen02      1 /* Opdrempelen toepassen voor fase 02                             */
    #define schedkop_02           2 /* Start timers dynamische hiaat fase 02 op einde detectie koplus */
    #define schdynhiaat08         3 /* Toepassen dynamsich hiaat bij fase 08                          */
    #define schopdrempelen08      4 /* Opdrempelen toepassen voor fase 08                             */
    #define schedkop_08           5 /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    #define schdynhiaat09         6 /* Toepassen dynamsich hiaat bij fase 09                          */
    #define schopdrempelen09      7 /* Opdrempelen toepassen voor fase 09                             */
    #define schedkop_09           8 /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    #define schdynhiaat11         9 /* Toepassen dynamsich hiaat bij fase 11                          */
    #define schopdrempelen11     10 /* Opdrempelen toepassen voor fase 11                             */
    #define schedkop_11          11 /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    #define schconfidence15fix   12
    #define schtxconfidence15ar  13
    #define schspatconfidence1   14
    #define schspatconfidence3   15
    #define schspatconfidence6   16
    #define schspatconfidence9   17
    #define schspatconfidence12  18
    #define schspatconfidence15  19
    #define schtimings02         20
    #define schtimings03         21
    #define schtimings05         22
    #define schtimings08         23
    #define schtimings09         24
    #define schtimings11         25
    #define schtimings21         26
    #define schtimings22         27
    #define schtimings24         28
    #define schtimings26         29
    #define schtimings28         30
    #define schtimings31         31
    #define schtimings32         32
    #define schtimings33         33
    #define schtimings34         34
    #define schtimings38         35
    #define schtimings61         36
    #define schtimings62         37
    #define schtimings67         38
    #define schtimings68         39
    #define schtimings84         40
    #define schbmfix             41 /* Bijkomen tijdens fixatie mogelijk                              */
    #define schma0261            42 /* Meeaanvraag van 02 naar 61 actief                              */
    #define schma0262            43 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521            44 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522            45 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532            46 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868            47 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126            48 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma2221            49 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma3122            50 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132            51 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222            52 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231            53 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324            54 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334            55 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384            56 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424            57 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433            58 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484            59 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schmv02              60 /* Meeverlengen fase 02                                           */
    #define schmv03              61 /* Meeverlengen fase 03                                           */
    #define schmv05              62 /* Meeverlengen fase 05                                           */
    #define schmv08              63 /* Meeverlengen fase 08                                           */
    #define schmv09              64 /* Meeverlengen fase 09                                           */
    #define schmv11              65 /* Meeverlengen fase 11                                           */
    #define schmv21              66 /* Meeverlengen fase 21                                           */
    #define schmv22              67 /* Meeverlengen fase 22                                           */
    #define schmv24              68 /* Meeverlengen fase 24                                           */
    #define schmv26              69 /* Meeverlengen fase 26                                           */
    #define schmv28              70 /* Meeverlengen fase 28                                           */
    #define schmv31              71 /* Meeverlengen fase 31                                           */
    #define schmv32              72 /* Meeverlengen fase 32                                           */
    #define schmv33              73 /* Meeverlengen fase 33                                           */
    #define schmv34              74 /* Meeverlengen fase 34                                           */
    #define schmv38              75 /* Meeverlengen fase 38                                           */
    #define schmv61              76 /* Meeverlengen fase 61                                           */
    #define schmv62              77 /* Meeverlengen fase 62                                           */
    #define schmv67              78 /* Meeverlengen fase 67                                           */
    #define schmv68              79 /* Meeverlengen fase 68                                           */
    #define schmv84              80 /* Meeverlengen fase 84                                           */
    #define schmlprm             81 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus      82 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus      83 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus      84 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus      85 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus      86 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus      87 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus      88 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus      89 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus      90 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus      91 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schcovuber           92 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    #define schcheckdstype       93 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar    94 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar   95 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus      96 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar    97 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar   98 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus      99 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar   100 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar  101 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus     102 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar   103 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar  104 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus     105 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar   106 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar  107 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus     108 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar   109 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar  110 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus     111 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin61buskar   112 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61buskar  113 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61bus     114 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin62buskar   115 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62buskar  116 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62bus     117 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin67buskar   118 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67buskar  119 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67bus     120 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin68buskar   121 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68buskar  122 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68bus     123 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schupinagbhd02      124 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar        125 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar       126 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02    127 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schupinagbhd03      128 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar        129 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar       130 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03    131 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schupinagbhd05      132 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar        133 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar       134 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05    135 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schupinagbhd08      136 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar        137 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar       138 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08    139 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schupinagbhd09      140 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar        141 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar       142 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09    143 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schupinagbhd11      144 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar        145 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar       146 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11    147 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schupinagbhd61      148 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar        149 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar       150 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61    151 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schupinagbhd62      152 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar        153 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar       154 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62    155 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schupinagbhd67      156 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar        157 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar       158 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67    159 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schupinagbhd68      160 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar        161 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar       162 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68    163 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schrisgeencheckopsg 164 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    #define schrgadd24_3        165 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv              166 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel         167 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schca02             168 /* Cyclische aanvraag fase 02                                     */
    #define schca03             169 /* Cyclische aanvraag fase 03                                     */
    #define schca05             170 /* Cyclische aanvraag fase 05                                     */
    #define schca08             171 /* Cyclische aanvraag fase 08                                     */
    #define schca09             172 /* Cyclische aanvraag fase 09                                     */
    #define schca11             173 /* Cyclische aanvraag fase 11                                     */
    #define schca21             174 /* Cyclische aanvraag fase 21                                     */
    #define schca22             175 /* Cyclische aanvraag fase 22                                     */
    #define schca24             176 /* Cyclische aanvraag fase 24                                     */
    #define schca26             177 /* Cyclische aanvraag fase 26                                     */
    #define schca28             178 /* Cyclische aanvraag fase 28                                     */
    #define schca31             179 /* Cyclische aanvraag fase 31                                     */
    #define schca32             180 /* Cyclische aanvraag fase 32                                     */
    #define schca33             181 /* Cyclische aanvraag fase 33                                     */
    #define schca34             182 /* Cyclische aanvraag fase 34                                     */
    #define schca38             183 /* Cyclische aanvraag fase 38                                     */
    #define schca61             184 /* Cyclische aanvraag fase 61                                     */
    #define schca62             185 /* Cyclische aanvraag fase 62                                     */
    #define schca67             186 /* Cyclische aanvraag fase 67                                     */
    #define schca68             187 /* Cyclische aanvraag fase 68                                     */
    #define schca84             188 /* Cyclische aanvraag fase 84                                     */
    #define schvg02_4a          189 /* Veiligheidsgroen detector 02_4a fase 02                        */
    #define schvg02_4b          190 /* Veiligheidsgroen detector 02_4b fase 02                        */
    #define schvg08_4a          191 /* Veiligheidsgroen detector 08_4a fase 08                        */
    #define schvg08_4b          192 /* Veiligheidsgroen detector 08_4b fase 08                        */
    #define schvg11_4           193 /* Veiligheidsgroen detector 11_4 fase 11                         */
    #define schaltg02           194 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03           195 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05           196 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08           197 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09           198 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11           199 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21           200 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232         201 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg2434         202 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg26           203 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28           204 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31           205 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384         206 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg38           207 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61           208 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62           209 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67           210 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68           211 /* Alternatieve realisatie toestaan fase 68                       */
    #define schwg02             212 /* Wachtstand groen fase 02                                       */
    #define schwg03             213 /* Wachtstand groen fase 03                                       */
    #define schwg05             214 /* Wachtstand groen fase 05                                       */
    #define schwg08             215 /* Wachtstand groen fase 08                                       */
    #define schwg09             216 /* Wachtstand groen fase 09                                       */
    #define schwg11             217 /* Wachtstand groen fase 11                                       */
    #define schwg21             218 /* Wachtstand groen fase 21                                       */
    #define schwg22             219 /* Wachtstand groen fase 22                                       */
    #define schwg24             220 /* Wachtstand groen fase 24                                       */
    #define schwg26             221 /* Wachtstand groen fase 26                                       */
    #define schwg28             222 /* Wachtstand groen fase 28                                       */
    #define schwg31             223 /* Wachtstand groen fase 31                                       */
    #define schwg32             224 /* Wachtstand groen fase 32                                       */
    #define schwg33             225 /* Wachtstand groen fase 33                                       */
    #define schwg34             226 /* Wachtstand groen fase 34                                       */
    #define schwg38             227 /* Wachtstand groen fase 38                                       */
    #define schwg61             228 /* Wachtstand groen fase 61                                       */
    #define schwg62             229 /* Wachtstand groen fase 62                                       */
    #define schwg67             230 /* Wachtstand groen fase 67                                       */
    #define schwg68             231 /* Wachtstand groen fase 68                                       */
    #define schwg84             232 /* Wachtstand groen fase 84                                       */
    #define schgs2232           233 /* Schakelbare gelijkstart tussen fase 32 en 22                   */
    #define schgs2434           234 /* Schakelbare gelijkstart tussen fase 34 en 24                   */
    #define schgs3384           235 /* Schakelbare gelijkstart tussen fase 84 en 33                   */
    #define schlos32_1          236 /* Toestaan los realiseren fase 32                                */
    #define schlos32_2          237 /* Toestaan los realiseren fase 32                                */
    #define schlos31_1          238 /* Toestaan los realiseren fase 31                                */
    #define schlos31_2          239 /* Toestaan los realiseren fase 31                                */
    #define schlos34_1          240 /* Toestaan los realiseren fase 34                                */
    #define schlos34_2          241 /* Toestaan los realiseren fase 34                                */
    #define schlos33_1          242 /* Toestaan los realiseren fase 33                                */
    #define schlos33_2          243 /* Toestaan los realiseren fase 33                                */
    #define schgsbeidedkb       244
    #define SCHMAX1             245

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
    #define prmda02_1a              93 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b              94 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a              95 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b              96 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a              97 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b              98 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a              99 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b             100 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1              101 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2              102 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1              103 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2              104 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a             105 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b             106 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a             107 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b             108 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a             109 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b             110 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a             111 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b             112 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1              113 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2              114 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3              115 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1              116 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2              117 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3              118 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4              119 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211               120 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21               121 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1              122 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22               123 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1              124 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2              125 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3              126 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24               127 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261               128 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26               129 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1              130 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2              131 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28               132 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a              133 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b              134 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a              135 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b              136 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a              137 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b              138 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a              139 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b              140 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a              141 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b              142 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1              143 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2              144 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a             145 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b             146 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a             147 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b             148 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1              149 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2              150 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a             151 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b             152 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a             153 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b             154 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda84_1              155 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84               156 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a             157 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b             158 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a             159 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b             160 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a             161 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b             162 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a             163 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b             164 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1              165 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2              166 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1              167 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2              168 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a             169 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b             170 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a             171 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b             172 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a             173 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b             174 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a             175 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b             176 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1              177 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2              178 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3              179 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1              180 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2              181 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3              182 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4              183 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211               184 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1              185 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1              186 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2              187 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3              188 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261               189 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1              190 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2              191 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1              192 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2              193 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a             194 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b             195 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a             196 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b             197 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1              198 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2              199 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a             200 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b             201 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a             202 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b             203 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk84_1              204 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc02              205 /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    #define prmperc03              206 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05              207 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08              208 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09              209 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11              210 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61              211 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62              212 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67              213 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68              214 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmtypema0261          215 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262          216 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521          217 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522          218 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532          219 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868          220 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126          221 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema2221          222 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122          223 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132          224 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222          225 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231          226 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324          227 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334          228 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384          229 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424          230 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433          231 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484          232 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828          233 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmmv02                234 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                235 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                236 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                237 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                238 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                239 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                240 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                241 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                242 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                243 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                244 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                245 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                246 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                247 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                248 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                249 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                250 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                251 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                252 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                253 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                254 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02              255 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03              256 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05              257 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08              258 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09              259 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11              260 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21              261 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22              262 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24              263 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26              264 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28              265 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31              266 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32              267 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33              268 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34              269 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38              270 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61              271 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62              272 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67              273 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68              274 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84              275 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262             276 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868             277 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl2221             278 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132             279 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231             280 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334             281 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433             282 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmOVtstpgrensvroeg    283 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat     284 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus 285 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus  286 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus  287 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus 288 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus  289 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus  290 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus 291 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus  292 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus  293 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus 294 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus  295 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus  296 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus 297 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus  298 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus  299 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus 300 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus  301 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus  302 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus 303 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus  304 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus  305 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus 306 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus  307 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus  308 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus 309 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus  310 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus  311 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus 312 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus  313 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus  314 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                315 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts              316 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg              317 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02              318 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02              319 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02              320 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02             321 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02            322 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02             323 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03              324 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03              325 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03              326 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03             327 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03            328 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03             329 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05              330 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05              331 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05              332 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05             333 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05            334 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05             335 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08              336 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08              337 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08              338 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08             339 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08            340 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08             341 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09              342 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09              343 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09              344 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09             345 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09            346 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09             347 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11              348 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11              349 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11              350 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11             351 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11            352 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11             353 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21              354 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21              355 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21              356 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21             357 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21            358 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21             359 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22              360 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22              361 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22              362 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22             363 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22            364 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22             365 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24              366 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24              367 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24              368 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24             369 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24            370 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24             371 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26              372 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26              373 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26              374 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26             375 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26            376 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26             377 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28              378 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28              379 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28              380 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28             381 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28            382 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28             383 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31              384 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31              385 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32              386 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32              387 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33              388 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33              389 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34              390 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34              391 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38              392 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38              393 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61              394 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61              395 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61              396 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61             397 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61            398 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61             399 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62              400 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62              401 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62              402 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62             403 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62            404 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62             405 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67              406 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67              407 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67              408 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67             409 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67            410 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67             411 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68              412 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68              413 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68              414 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68             415 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68            416 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68             417 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt84              418 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84              419 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84              420 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84             421 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84            422 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84             423 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus            424 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus           425 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus            426 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus            427 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02bus           428 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03bus            429 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus           430 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus            431 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus            432 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03bus           433 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05bus            434 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus           435 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus            436 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus            437 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05bus           438 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08bus            439 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus           440 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus            441 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus            442 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08bus           443 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09bus            444 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus           445 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus            446 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus            447 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09bus           448 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11bus            449 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus           450 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus            451 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus            452 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11bus           453 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto61bus            454 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus           455 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus            456 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus            457 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61bus           458 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62bus            459 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus           460 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus            461 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus            462 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62bus           463 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67bus            464 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus           465 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus            466 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus            467 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67bus           468 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68bus            469 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus           470 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus            471 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus            472 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68bus           473 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02            474 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02             475 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02            476 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02             477 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmpriohd03            478 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03             479 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03            480 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03             481 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmpriohd05            482 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05             483 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05            484 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05             485 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmpriohd08            486 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08             487 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08            488 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08             489 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmpriohd09            490 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09             491 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09            492 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09             493 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmpriohd11            494 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11             495 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11            496 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11             497 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmpriohd61            498 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61             499 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61            500 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61             501 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmpriohd62            502 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62             503 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62            504 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62             505 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmpriohd67            506 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67             507 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67            508 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67             509 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmpriohd68            510 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68             511 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68            512 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68             513 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmkarsg02             514 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03             515 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05             516 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08             517 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09             518 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11             519 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61             520 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62             521 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67             522 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68             523 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02           524 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03           525 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05           526 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08           527 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09           528 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11           529 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61           530 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62           531 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67           532 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68           533 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1               534 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1               535 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1               536 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2               537 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2               538 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2               539 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3               540 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3               541 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3               542 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4               543 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4               544 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4               545 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5               546 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5               547 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5               548 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6               549 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6               550 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6               551 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg1_02              552 /* Maximale groentijd MG1 02                                                                                                      */
    #define prmmg1_03              553 /* Maximale groentijd MG1 03                                                                                                      */
    #define prmmg1_05              554 /* Maximale groentijd MG1 05                                                                                                      */
    #define prmmg1_08              555 /* Maximale groentijd MG1 08                                                                                                      */
    #define prmmg1_09              556 /* Maximale groentijd MG1 09                                                                                                      */
    #define prmmg1_11              557 /* Maximale groentijd MG1 11                                                                                                      */
    #define prmmg1_21              558 /* Maximale groentijd MG1 21                                                                                                      */
    #define prmmg1_22              559 /* Maximale groentijd MG1 22                                                                                                      */
    #define prmmg1_24              560 /* Maximale groentijd MG1 24                                                                                                      */
    #define prmmg1_26              561 /* Maximale groentijd MG1 26                                                                                                      */
    #define prmmg1_28              562 /* Maximale groentijd MG1 28                                                                                                      */
    #define prmmg1_61              563 /* Maximale groentijd MG1 61                                                                                                      */
    #define prmmg1_62              564 /* Maximale groentijd MG1 62                                                                                                      */
    #define prmmg1_67              565 /* Maximale groentijd MG1 67                                                                                                      */
    #define prmmg1_68              566 /* Maximale groentijd MG1 68                                                                                                      */
    #define prmmg1_84              567 /* Maximale groentijd MG1 84                                                                                                      */
    #define prmmg2_02              568 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03              569 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05              570 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08              571 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09              572 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11              573 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21              574 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22              575 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24              576 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26              577 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28              578 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61              579 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62              580 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67              581 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68              582 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_84              583 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02              584 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03              585 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05              586 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08              587 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09              588 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11              589 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21              590 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22              591 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24              592 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26              593 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28              594 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61              595 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62              596 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67              597 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68              598 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_84              599 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02              600 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03              601 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05              602 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08              603 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09              604 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11              605 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21              606 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22              607 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24              608 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26              609 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28              610 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61              611 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62              612 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67              613 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68              614 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_84              615 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02              616 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03              617 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05              618 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08              619 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09              620 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11              621 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21              622 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22              623 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24              624 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26              625 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28              626 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61              627 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62              628 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67              629 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68              630 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_84              631 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02              632 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03              633 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05              634 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08              635 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09              636 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11              637 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21              638 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22              639 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24              640 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26              641 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28              642 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61              643 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62              644 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67              645 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68              646 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_84              647 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02              648 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03              649 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05              650 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08              651 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09              652 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11              653 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21              654 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22              655 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24              656 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26              657 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28              658 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61              659 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62              660 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67              661 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68              662 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_84              663 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02     664 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03     665 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05     666 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08     667 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09     668 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11     669 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21     670 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22     671 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24     672 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26     673 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28     674 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31     675 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32     676 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33     677 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34     678 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38     679 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61     680 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62     681 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67     682 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68     683 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid84     684 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1       685 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2       686 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1       687 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1       688 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1       689 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2       690 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1       691 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1       692 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1       693 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1       694 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1       695 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1       696 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1       697 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1       698 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2       699 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1       700 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2       701 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1       702 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2       703 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1       704 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2       705 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1       706 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2       707 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1       708 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1       709 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2       710 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1       711 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1       712 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2       713 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid84_1       714 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1    715 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2    716 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1    717 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1    718 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1    719 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2    720 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1    721 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1    722 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1     723 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1     724 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart84fts1     725 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisastart68mveh2    726 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh1    727 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart67mveh1    728 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart62mveh2    729 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh1    730 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart61mveh1    731 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart38vtg2     732 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg1     733 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart34vtg2     734 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg1     735 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart33vtg2     736 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg1     737 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart32vtg2     738 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg1     739 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart31vtg2     740 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg1     741 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart28fts1     742 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart26fts1     743 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart24fts1     744 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend02mveh1      745 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2      746 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1      747 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1      748 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1      749 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2      750 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1      751 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1      752 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1       753 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1       754 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend84fts1       755 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend68mveh2      756 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend68mveh1      757 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend67mveh1      758 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend62mveh2      759 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh1      760 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend61mveh1      761 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend38vtg2       762 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg1       763 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend34vtg2       764 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg1       765 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend33vtg2       766 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg1       767 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend32vtg2       768 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg1       769 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend31vtg2       770 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg1       771 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend28fts1       772 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend26fts1       773 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend24fts1       774 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisvstart02mveh1    775 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2    776 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1    777 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1    778 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1    779 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2    780 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1    781 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1    782 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1     783 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1     784 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart84fts1     785 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvstart68mveh2    786 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart68mveh1    787 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart67mveh1    788 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart62mveh2    789 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh1    790 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart61mveh1    791 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart38vtg2     792 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg1     793 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart34vtg2     794 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg1     795 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart33vtg2     796 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg1     797 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart32vtg2     798 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg1     799 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart31vtg2     800 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg1     801 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart28fts1     802 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart26fts1     803 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart24fts1     804 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvend02mveh1      805 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2      806 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1      807 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1      808 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1      809 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2      810 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1      811 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1      812 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1       813 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1       814 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend84fts1       815 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmrisvend68mveh2      816 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh1      817 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend67mveh1      818 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend62mveh2      819 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh1      820 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend61mveh1      821 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend38vtg2       822 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg1       823 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend34vtg2       824 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg1       825 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend33vtg2       826 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg1       827 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend32vtg2       828 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg1       829 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend31vtg2       830 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg1       831 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend28fts1       832 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend26fts1       833 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend24fts1       834 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmmkrgd24_3           835 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                 836 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus         837 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus         838 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog          839 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag          840 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil        841 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag      842 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02           843 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02           844 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03           845 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03           846 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05           847 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05           848 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08           849 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08           850 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09           851 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09           852 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11           853 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11           854 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22           855 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22           856 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28           857 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28           858 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68           859 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68           860 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog          861 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog          862 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02             863 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03             864 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05             865 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08             866 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09             867 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11             868 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21             869 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22             870 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24             871 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26             872 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28             873 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31             874 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32             875 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33             876 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34             877 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38             878 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61             879 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62             880 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67             881 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68             882 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr84             883 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02              884 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02              885 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03              886 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03              887 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05              888 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05              889 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08              890 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08              891 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09              892 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09              893 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11              894 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11              895 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21              896 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21              897 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22              898 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232            899 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24              900 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434            901 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26              902 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26              903 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28              904 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28              905 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31              906 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31              907 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32              908 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33              909 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384            910 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34              911 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38              912 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38              913 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61              914 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61              915 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62              916 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62              917 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67              918 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67              919 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68              920 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68              921 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg84              922 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM
    #define prmtestdsivert         923 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilijn         924 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat          925 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                926
#else
    #define PRMMAX1                923
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

