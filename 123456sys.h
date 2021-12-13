/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   11.0
    TLCGEN:   0.10.4.0
   CCOLGEN:   0.10.4.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    13-12-2021   Cyril       Nieuwe versie TLCGen (0.10.4.0) beta 13122021
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.0.0 20211213"
#define TVGAMAX /* gebruik van TVGA_max[] */
#define RIS_GEEN_INDEXERING

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
    #define ussegm1            (FCMAX +   0) /* Aansturing segmenten display                        */
    #define ussegm2            (FCMAX +   1) /* Aansturing segmenten display                        */
    #define ussegm3            (FCMAX +   2) /* Aansturing segmenten display                        */
    #define ussegm4            (FCMAX +   3) /* Aansturing segmenten display                        */
    #define ussegm5            (FCMAX +   4) /* Aansturing segmenten display                        */
    #define ussegm6            (FCMAX +   5) /* Aansturing segmenten display                        */
    #define ussegm7            (FCMAX +   6) /* Aansturing segmenten display                        */
    #define usML1              (FCMAX +   7) /* Verklikken actief zijn ML1                          */
    #define usML2              (FCMAX +   8) /* Verklikken actief zijn ML2                          */
    #define usML3              (FCMAX +   9) /* Verklikken actief zijn ML3                          */
    #define usML4              (FCMAX +  10) /* Verklikken actief zijn ML4                          */
    #define usML5              (FCMAX +  11) /* Verklikken actief zijn ML5                          */
    #define usfileFile68af     (FCMAX +  12) /* File ingreep File68af actief                        */
    #define usplact            (FCMAX +  13) /* Signaalplan regelen actief                          */
    #define uskpact            (FCMAX +  14) /* Koppeling signaalplan regelen actief                */
    #define usmlact            (FCMAX +  15) /* Module regelen actief                               */
    #define usmlpl             (FCMAX +  16) /* ML tijdens VA of PL tijdens halfstar bedrijf        */
    #define ustxtimer          (FCMAX +  17) /* TX_timer tijdens halfstar bedrijf                   */
    #define usklok             (FCMAX +  18) /* Programma door klok bepaald                         */
    #define ushand             (FCMAX +  19) /* Aansturing handmatig aangepast                      */
    #define usplPL1            (FCMAX +  20) /* Plan PL1 actief                                     */
    #define usplPL2            (FCMAX +  21) /* Plan PL2 actief                                     */
    #define usplPL3            (FCMAX +  22) /* Plan PL3 actief                                     */
    #define usovtevroeg02bus   (FCMAX +  23) /* Voorste OV voertuig bij 02 te vroeg Bus             */
    #define usovoptijd02bus    (FCMAX +  24) /* Voorste OV voertuig bij 02 op tijd Bus              */
    #define usovtelaat02bus    (FCMAX +  25) /* Voorste OV voertuig bij 02 te laat Bus              */
    #define usovtevroeg03bus   (FCMAX +  26) /* Voorste OV voertuig bij 03 te vroeg Bus             */
    #define usovoptijd03bus    (FCMAX +  27) /* Voorste OV voertuig bij 03 op tijd Bus              */
    #define usovtelaat03bus    (FCMAX +  28) /* Voorste OV voertuig bij 03 te laat Bus              */
    #define usovtevroeg05bus   (FCMAX +  29) /* Voorste OV voertuig bij 05 te vroeg Bus             */
    #define usovoptijd05bus    (FCMAX +  30) /* Voorste OV voertuig bij 05 op tijd Bus              */
    #define usovtelaat05bus    (FCMAX +  31) /* Voorste OV voertuig bij 05 te laat Bus              */
    #define usovtevroeg08bus   (FCMAX +  32) /* Voorste OV voertuig bij 08 te vroeg Bus             */
    #define usovoptijd08bus    (FCMAX +  33) /* Voorste OV voertuig bij 08 op tijd Bus              */
    #define usovtelaat08bus    (FCMAX +  34) /* Voorste OV voertuig bij 08 te laat Bus              */
    #define usovtevroeg09bus   (FCMAX +  35) /* Voorste OV voertuig bij 09 te vroeg Bus             */
    #define usovoptijd09bus    (FCMAX +  36) /* Voorste OV voertuig bij 09 op tijd Bus              */
    #define usovtelaat09bus    (FCMAX +  37) /* Voorste OV voertuig bij 09 te laat Bus              */
    #define usovtevroeg11bus   (FCMAX +  38) /* Voorste OV voertuig bij 11 te vroeg Bus             */
    #define usovoptijd11bus    (FCMAX +  39) /* Voorste OV voertuig bij 11 op tijd Bus              */
    #define usovtelaat11bus    (FCMAX +  40) /* Voorste OV voertuig bij 11 te laat Bus              */
    #define usovtevroeg61bus   (FCMAX +  41) /* Voorste OV voertuig bij 61 te vroeg Bus             */
    #define usovoptijd61bus    (FCMAX +  42) /* Voorste OV voertuig bij 61 op tijd Bus              */
    #define usovtelaat61bus    (FCMAX +  43) /* Voorste OV voertuig bij 61 te laat Bus              */
    #define usovtevroeg62bus   (FCMAX +  44) /* Voorste OV voertuig bij 62 te vroeg Bus             */
    #define usovoptijd62bus    (FCMAX +  45) /* Voorste OV voertuig bij 62 op tijd Bus              */
    #define usovtelaat62bus    (FCMAX +  46) /* Voorste OV voertuig bij 62 te laat Bus              */
    #define usovtevroeg67bus   (FCMAX +  47) /* Voorste OV voertuig bij 67 te vroeg Bus             */
    #define usovoptijd67bus    (FCMAX +  48) /* Voorste OV voertuig bij 67 op tijd Bus              */
    #define usovtelaat67bus    (FCMAX +  49) /* Voorste OV voertuig bij 67 te laat Bus              */
    #define usovtevroeg68bus   (FCMAX +  50) /* Voorste OV voertuig bij 68 te vroeg Bus             */
    #define usovoptijd68bus    (FCMAX +  51) /* Voorste OV voertuig bij 68 op tijd Bus              */
    #define usovtelaat68bus    (FCMAX +  52) /* Voorste OV voertuig bij 68 te laat Bus              */
    #define usmaxwt            (FCMAX +  53) /* Verklikken maximale wachttijd overschreden          */
    #define uskarmelding       (FCMAX +  54) /* Verklikken ontvangst melding KAR                    */
    #define uskarog            (FCMAX +  55) /* Verklikken ondergedrag KAR                          */
    #define usovinm02bus       (FCMAX +  56) /* Verklikken inmelding OV fase 02                     */
    #define usovinm02risov     (FCMAX +  57) /* Verklikken inmelding OV fase 02                     */
    #define usovinm02risvrw    (FCMAX +  58) /* Verklikken inmelding OV fase 02                     */
    #define usovinm03bus       (FCMAX +  59) /* Verklikken inmelding OV fase 03                     */
    #define usovinm03risov     (FCMAX +  60) /* Verklikken inmelding OV fase 03                     */
    #define usovinm03risvrw    (FCMAX +  61) /* Verklikken inmelding OV fase 03                     */
    #define usovinm05bus       (FCMAX +  62) /* Verklikken inmelding OV fase 05                     */
    #define usovinm05risov     (FCMAX +  63) /* Verklikken inmelding OV fase 05                     */
    #define usovinm05risvrw    (FCMAX +  64) /* Verklikken inmelding OV fase 05                     */
    #define usovinm08bus       (FCMAX +  65) /* Verklikken inmelding OV fase 08                     */
    #define usovinm08risov     (FCMAX +  66) /* Verklikken inmelding OV fase 08                     */
    #define usovinm08risvrw    (FCMAX +  67) /* Verklikken inmelding OV fase 08                     */
    #define usovinm09bus       (FCMAX +  68) /* Verklikken inmelding OV fase 09                     */
    #define usovinm09risov     (FCMAX +  69) /* Verklikken inmelding OV fase 09                     */
    #define usovinm09risvrw    (FCMAX +  70) /* Verklikken inmelding OV fase 09                     */
    #define usovinm11bus       (FCMAX +  71) /* Verklikken inmelding OV fase 11                     */
    #define usovinm11risov     (FCMAX +  72) /* Verklikken inmelding OV fase 11                     */
    #define usovinm11risvrw    (FCMAX +  73) /* Verklikken inmelding OV fase 11                     */
    #define usovinm22fiets     (FCMAX +  74) /* Verklikken inmelding OV fase 22                     */
    #define usovinm31fietsprio (FCMAX +  75) /* Verklikken inmelding OV fase 31                     */
    #define usovinm32fietsprio (FCMAX +  76) /* Verklikken inmelding OV fase 32                     */
    #define usovinm61bus       (FCMAX +  77) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risov     (FCMAX +  78) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risvrw    (FCMAX +  79) /* Verklikken inmelding OV fase 61                     */
    #define usovinm62bus       (FCMAX +  80) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risov     (FCMAX +  81) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risvrw    (FCMAX +  82) /* Verklikken inmelding OV fase 62                     */
    #define usovinm67bus       (FCMAX +  83) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risov     (FCMAX +  84) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risvrw    (FCMAX +  85) /* Verklikken inmelding OV fase 67                     */
    #define usovinm68bus       (FCMAX +  86) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risov     (FCMAX +  87) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risvrw    (FCMAX +  88) /* Verklikken inmelding OV fase 68                     */
    #define ushdinm02          (FCMAX +  89) /* Verklikken inmelding HD fase 02                     */
    #define ushdinm03          (FCMAX +  90) /* Verklikken inmelding HD fase 03                     */
    #define ushdinm05          (FCMAX +  91) /* Verklikken inmelding HD fase 05                     */
    #define ushdinm08          (FCMAX +  92) /* Verklikken inmelding HD fase 08                     */
    #define ushdinm09          (FCMAX +  93) /* Verklikken inmelding HD fase 09                     */
    #define ushdinm11          (FCMAX +  94) /* Verklikken inmelding HD fase 11                     */
    #define ushdinm61          (FCMAX +  95) /* Verklikken inmelding HD fase 61                     */
    #define ushdinm62          (FCMAX +  96) /* Verklikken inmelding HD fase 62                     */
    #define ushdinm67          (FCMAX +  97) /* Verklikken inmelding HD fase 67                     */
    #define ushdinm68          (FCMAX +  98) /* Verklikken inmelding HD fase 68                     */
    #define usperdef           (FCMAX +  99) /* Default periode actief                              */
    #define usper1             (FCMAX + 100) /* Periode Dag periode actief                          */
    #define usper2             (FCMAX + 101) /* Periode Ochtendspits actief                         */
    #define usper3             (FCMAX + 102) /* Periode Avondspits actief                           */
    #define usper4             (FCMAX + 103) /* Periode Koopavond actief                            */
    #define usper5             (FCMAX + 104) /* Periode Weekend actief                              */
    #define usper6             (FCMAX + 105) /* Periode Reserve actief                              */
    #define usrgv              (FCMAX + 106) /* Verklikken actief zijn RoBuGrover                   */
    #define uswtk21            (FCMAX + 107) /* Aansturing waitsignaal detector k21                 */
    #define uswtk22            (FCMAX + 108) /* Aansturing waitsignaal detector k22                 */
    #define uswtk24            (FCMAX + 109) /* Aansturing waitsignaal detector k24                 */
    #define uswtk26            (FCMAX + 110) /* Aansturing waitsignaal detector k26                 */
    #define uswtk28            (FCMAX + 111) /* Aansturing waitsignaal detector k28                 */
    #define uswtk31a           (FCMAX + 112) /* Aansturing waitsignaal detector k31a                */
    #define uswtk31b           (FCMAX + 113) /* Aansturing waitsignaal detector k31b                */
    #define uswtk32a           (FCMAX + 114) /* Aansturing waitsignaal detector k32a                */
    #define uswtk32b           (FCMAX + 115) /* Aansturing waitsignaal detector k32b                */
    #define uswtk33a           (FCMAX + 116) /* Aansturing waitsignaal detector k33a                */
    #define uswtk33b           (FCMAX + 117) /* Aansturing waitsignaal detector k33b                */
    #define uswtk34a           (FCMAX + 118) /* Aansturing waitsignaal detector k34a                */
    #define uswtk34b           (FCMAX + 119) /* Aansturing waitsignaal detector k34b                */
    #define uswtk38a           (FCMAX + 120) /* Aansturing waitsignaal detector k38a                */
    #define uswtk38b           (FCMAX + 121) /* Aansturing waitsignaal detector k38b                */
    #define uswtk81            (FCMAX + 122) /* Aansturing waitsignaal detector k81                 */
    #define uswtk82            (FCMAX + 123) /* Aansturing waitsignaal detector k82                 */
    #define uswtk84            (FCMAX + 124) /* Aansturing waitsignaal detector k84                 */
    #define usstarprogwissel   (FCMAX + 125) /* Verklikken actief zijn wisselen naar star programma */
    #define usstarstar01       (FCMAX + 126) /* Star programma star01 actief                        */
    #define USMAX1             (FCMAX + 127)

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
    #define isfix              (DPMAX +  0) /* Fixatie regeling                                            */
    #define isstar             (DPMAX +  1) /* Star programma inschakelen zoals ingesteld via PRM starprog */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define isris021car        (DPMAX +  2)
    #define isris021bus        (DPMAX +  3)
    #define isris021special    (DPMAX +  4)
    #define isris021heavytruck (DPMAX +  5)
    #define isris022car        (DPMAX +  6)
    #define isris022bus        (DPMAX +  7)
    #define isris022special    (DPMAX +  8)
    #define isris022heavytruck (DPMAX +  9)
    #define isris031car        (DPMAX + 10)
    #define isris031bus        (DPMAX + 11)
    #define isris031special    (DPMAX + 12)
    #define isris031heavytruck (DPMAX + 13)
    #define isris051car        (DPMAX + 14)
    #define isris051bus        (DPMAX + 15)
    #define isris051special    (DPMAX + 16)
    #define isris051heavytruck (DPMAX + 17)
    #define isris081car        (DPMAX + 18)
    #define isris081bus        (DPMAX + 19)
    #define isris081special    (DPMAX + 20)
    #define isris081heavytruck (DPMAX + 21)
    #define isris082car        (DPMAX + 22)
    #define isris082bus        (DPMAX + 23)
    #define isris082special    (DPMAX + 24)
    #define isris082heavytruck (DPMAX + 25)
    #define isris091car        (DPMAX + 26)
    #define isris091bus        (DPMAX + 27)
    #define isris091special    (DPMAX + 28)
    #define isris091heavytruck (DPMAX + 29)
    #define isris111car        (DPMAX + 30)
    #define isris111bus        (DPMAX + 31)
    #define isris111special    (DPMAX + 32)
    #define isris111heavytruck (DPMAX + 33)
    #define isris211cyclist    (DPMAX + 34)
    #define isris221cyclist    (DPMAX + 35)
    #define isris241cyclist    (DPMAX + 36)
    #define isris261cyclist    (DPMAX + 37)
    #define isris281cyclist    (DPMAX + 38)
    #define isris311pedestrian (DPMAX + 39)
    #define isris312pedestrian (DPMAX + 40)
    #define isris321pedestrian (DPMAX + 41)
    #define isris322pedestrian (DPMAX + 42)
    #define isris331pedestrian (DPMAX + 43)
    #define isris332pedestrian (DPMAX + 44)
    #define isris341pedestrian (DPMAX + 45)
    #define isris342pedestrian (DPMAX + 46)
    #define isris381pedestrian (DPMAX + 47)
    #define isris382pedestrian (DPMAX + 48)
    #define isris611car        (DPMAX + 49)
    #define isris611bus        (DPMAX + 50)
    #define isris611special    (DPMAX + 51)
    #define isris611heavytruck (DPMAX + 52)
    #define isris621car        (DPMAX + 53)
    #define isris621bus        (DPMAX + 54)
    #define isris621special    (DPMAX + 55)
    #define isris621heavytruck (DPMAX + 56)
    #define isris622car        (DPMAX + 57)
    #define isris622bus        (DPMAX + 58)
    #define isris622special    (DPMAX + 59)
    #define isris622heavytruck (DPMAX + 60)
    #define isris671car        (DPMAX + 61)
    #define isris671bus        (DPMAX + 62)
    #define isris671special    (DPMAX + 63)
    #define isris671heavytruck (DPMAX + 64)
    #define isris681car        (DPMAX + 65)
    #define isris681bus        (DPMAX + 66)
    #define isris681special    (DPMAX + 67)
    #define isris681heavytruck (DPMAX + 68)
    #define isris682car        (DPMAX + 69)
    #define isris682bus        (DPMAX + 70)
    #define isris682special    (DPMAX + 71)
    #define isris682heavytruck (DPMAX + 72)
    #define isris811cyclist    (DPMAX + 73)
    #define isris821cyclist    (DPMAX + 74)
    #define isris841cyclist    (DPMAX + 75)
    #define ISMAX1             (DPMAX + 76)
#else
    #define ISMAX1             (DPMAX +  2)
#endif

/* hulp elementen */
/* -------------- */
    #define hopdrempelen02         0 /* Opdrempelen toepassen voor fase 02                                 */
    #define hgeendynhiaat02        1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 02          */
    #define hverleng_02_1a         2 /* Instructie verlengen op detector 02_1a ongeacht dynamische hiaat   */
    #define hverleng_02_1b         3 /* Instructie verlengen op detector 02_1b ongeacht dynamische hiaat   */
    #define hverleng_02_2a         4 /* Instructie verlengen op detector 02_2a ongeacht dynamische hiaat   */
    #define hverleng_02_2b         5 /* Instructie verlengen op detector 02_2b ongeacht dynamische hiaat   */
    #define hverleng_02_3a         6 /* Instructie verlengen op detector 02_3a ongeacht dynamische hiaat   */
    #define hverleng_02_3b         7 /* Instructie verlengen op detector 02_3b ongeacht dynamische hiaat   */
    #define hverleng_02_4a         8 /* Instructie verlengen op detector 02_4a ongeacht dynamische hiaat   */
    #define hverleng_02_4b         9 /* Instructie verlengen op detector 02_4b ongeacht dynamische hiaat   */
    #define hopdrempelen08        10 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08       11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a        12 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b        13 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a        14 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b        15 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a        16 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b        17 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a        18 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b        19 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09        20 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09       21 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1         22 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2         23 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3         24 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11        25 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11       26 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1         27 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2         28 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3         29 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4         30 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a              31 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b              32 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a              33 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b              34 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a              35 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b              36 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a              37 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b              38 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af         39 /* File File68af actief                                               */
    #define hfile68_9a            40 /* File 68_9a actief                                                  */
    #define hfile68_9b            41 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af    42 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af    43 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hplhd                 44 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                45 /* Halfstar actief                                                    */
    #define hkpact                46 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                47 /* Module regelen actief                                              */
    #define hpervar               48 /* Periode VA regelen                                                 */
    #define hperarh               49 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh          50 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                51 /* Bijhouden actief zijn levensignaal                                 */
    #define hxpl2232              52 /* Tegenhouden richtingen tbv gelijkstart 22 32                       */
    #define hxpl2434              53 /* Tegenhouden richtingen tbv gelijkstart 24 34                       */
    #define hxpl3384              54 /* Tegenhouden richtingen tbv gelijkstart 33 84                       */
    #define hnla11_1              55 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1              56 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a              57 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a              58 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a              59 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a              60 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1              61 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus             62 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus             63 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus             64 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus             65 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus             66 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus             67 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus             68 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus             69 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus             70 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus             71 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus            72 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus          73 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus         74 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar       75 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar      76 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov          77 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov        78 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov       79 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris     80 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris    81 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw         82 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw       83 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw      84 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris    85 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris   86 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus            87 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus          88 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus         89 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar       90 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar      91 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov          92 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov        93 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov       94 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris     95 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris    96 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw         97 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw       98 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw      99 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris   100 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris  101 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus           102 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus         103 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus        104 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar      105 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar     106 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov         107 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov       108 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov      109 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris    110 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris   111 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw        112 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw      113 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw     114 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris   115 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris  116 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus           117 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus         118 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus        119 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar      120 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar     121 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov         122 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov       123 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov      124 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris    125 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris   126 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw        127 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw      128 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw     129 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris   130 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris  131 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus           132 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus         133 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus        134 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar      135 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar     136 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov         137 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov       138 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov      139 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris    140 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris   141 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw        142 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw      143 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw     144 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris   145 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris  146 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus           147 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus         148 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus        149 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar      150 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar     151 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov         152 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov       153 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov      154 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris    155 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris   156 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw        157 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw      158 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw     159 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris   160 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris  161 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets         162 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets       163 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets      164 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets  165 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets 166 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio31fietsprio     167 /* Bijhouden actief zijn prioriteit fase 31                           */
    #define hprioin31fietsprio   168 /* Prioriteit inmelding fase 31 Fiets                                 */
    #define hpriouit31fietsprio  169 /* Prioriteit uitmelding 31 Fiets                                     */
    #define hprio32fietsprio     170 /* Bijhouden actief zijn prioriteit fase 32                           */
    #define hprioin32fietsprio   171 /* Prioriteit inmelding fase 32 Fiets                                 */
    #define hpriouit32fietsprio  172 /* Prioriteit uitmelding 32 Fiets                                     */
    #define hprio61bus           173 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus         174 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus        175 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar      176 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar     177 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov         178 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov       179 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov      180 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris    181 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris   182 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw        183 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw      184 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw     185 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris   186 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris  187 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus           188 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus         189 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus        190 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar      191 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar     192 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov         193 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov       194 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov      195 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris    196 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris   197 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw        198 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw      199 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw     200 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris   201 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris  202 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus           203 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus         204 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus        205 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar      206 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar     207 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov         208 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov       209 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov      210 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris    211 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris   212 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw        213 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw      214 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw     215 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris   216 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris  217 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus           218 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus         219 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus        220 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar      221 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar     222 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov         223 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov       224 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov      225 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris    226 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris   227 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw        228 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw      229 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw     230 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris   231 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris  232 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                233 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              234 /* HD inmelding 02                                                    */
    #define hhduit02             235 /* HD uitmelding 02                                                   */
    #define hhdin02kar           236 /* HD inmelding 02                                                    */
    #define hhduit02kar          237 /* HD uitmelding 02                                                   */
    #define hhdin02ris           238 /* HD inmelding 02                                                    */
    #define hhduit02ris          239 /* HD uitmelding 02                                                   */
    #define hhd03                240 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              241 /* HD inmelding 03                                                    */
    #define hhduit03             242 /* HD uitmelding 03                                                   */
    #define hhdin03kar           243 /* HD inmelding 03                                                    */
    #define hhduit03kar          244 /* HD uitmelding 03                                                   */
    #define hhdin03ris           245 /* HD inmelding 03                                                    */
    #define hhduit03ris          246 /* HD uitmelding 03                                                   */
    #define hhd05                247 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              248 /* HD inmelding 05                                                    */
    #define hhduit05             249 /* HD uitmelding 05                                                   */
    #define hhdin05kar           250 /* HD inmelding 05                                                    */
    #define hhduit05kar          251 /* HD uitmelding 05                                                   */
    #define hhdin05ris           252 /* HD inmelding 05                                                    */
    #define hhduit05ris          253 /* HD uitmelding 05                                                   */
    #define hhd08                254 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              255 /* HD inmelding 08                                                    */
    #define hhduit08             256 /* HD uitmelding 08                                                   */
    #define hhdin08kar           257 /* HD inmelding 08                                                    */
    #define hhduit08kar          258 /* HD uitmelding 08                                                   */
    #define hhdin08ris           259 /* HD inmelding 08                                                    */
    #define hhduit08ris          260 /* HD uitmelding 08                                                   */
    #define hhd09                261 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              262 /* HD inmelding 09                                                    */
    #define hhduit09             263 /* HD uitmelding 09                                                   */
    #define hhdin09kar           264 /* HD inmelding 09                                                    */
    #define hhduit09kar          265 /* HD uitmelding 09                                                   */
    #define hhdin09ris           266 /* HD inmelding 09                                                    */
    #define hhduit09ris          267 /* HD uitmelding 09                                                   */
    #define hhd11                268 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              269 /* HD inmelding 11                                                    */
    #define hhduit11             270 /* HD uitmelding 11                                                   */
    #define hhdin11kar           271 /* HD inmelding 11                                                    */
    #define hhduit11kar          272 /* HD uitmelding 11                                                   */
    #define hhdin11ris           273 /* HD inmelding 11                                                    */
    #define hhduit11ris          274 /* HD uitmelding 11                                                   */
    #define hhd61                275 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              276 /* HD inmelding 61                                                    */
    #define hhduit61             277 /* HD uitmelding 61                                                   */
    #define hhdin61kar           278 /* HD inmelding 61                                                    */
    #define hhduit61kar          279 /* HD uitmelding 61                                                   */
    #define hhdin61ris           280 /* HD inmelding 61                                                    */
    #define hhduit61ris          281 /* HD uitmelding 61                                                   */
    #define hhd62                282 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              283 /* HD inmelding 62                                                    */
    #define hhduit62             284 /* HD uitmelding 62                                                   */
    #define hhdin62kar           285 /* HD inmelding 62                                                    */
    #define hhduit62kar          286 /* HD uitmelding 62                                                   */
    #define hhdin62ris           287 /* HD inmelding 62                                                    */
    #define hhduit62ris          288 /* HD uitmelding 62                                                   */
    #define hhd67                289 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              290 /* HD inmelding 67                                                    */
    #define hhduit67             291 /* HD uitmelding 67                                                   */
    #define hhdin67kar           292 /* HD inmelding 67                                                    */
    #define hhduit67kar          293 /* HD uitmelding 67                                                   */
    #define hhdin67ris           294 /* HD inmelding 67                                                    */
    #define hhduit67ris          295 /* HD uitmelding 67                                                   */
    #define hhd68                296 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              297 /* HD inmelding 68                                                    */
    #define hhduit68             298 /* HD uitmelding 68                                                   */
    #define hhdin68kar           299 /* HD inmelding 68                                                    */
    #define hhduit68kar          300 /* HD uitmelding 68                                                   */
    #define hhdin68ris           301 /* HD inmelding 68                                                    */
    #define hhduit68ris          302 /* HD uitmelding 68                                                   */
    #define hrgvd24_3_d24_2      303 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              304 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            305 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            306 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            307 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            308 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09            309 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11            310 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            311 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            312 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68            313 /* Bijhouden primaire realisatie fase 68                              */
    #define hnleg0262            314
    #define hnleg0868            315
    #define hnleg1168            316
    #define hnleg2221            317
    #define hnlsg3132            318
    #define hnlsg3231            319
    #define hnlsg3334            320
    #define hnlsg3433            321
    #define hnleg8281            322
    #define hinl32               323 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32               324 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31               325 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31               326 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34               327 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34               328 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33               329 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33               330 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62               331 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68               332 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21               333 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81               334 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1               335

/* geheugen elementen */
/* ------------------ */
    #define mperiod           0 /* Onthouden actieve periode                                    */
    #define mmk02             1 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 02 */
    #define mmk03             2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    #define mmk05             3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    #define mmk08             4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    #define mmk09             5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    #define mmk11             6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    #define mmk61             7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    #define mmk62             8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    #define mmk67             9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    #define mmk68            10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    #define mleven           11 /* Bijhouden actief zijn levensignaal                           */
    #define mklok            12 /* Halfstar of VA obv klokperioden                              */
    #define mhand            13 /* Halstar of VA handmatig bepaald                              */
    #define mstp02bus        14 /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    #define mstp03bus        15 /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    #define mstp05bus        16 /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    #define mstp08bus        17 /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    #define mstp09bus        18 /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    #define mstp11bus        19 /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    #define mstp61bus        20 /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    #define mstp62bus        21 /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    #define mstp67bus        22 /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    #define mstp68bus        23 /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    #define mstarprog        24 /* Onthouden actief star programma                              */
    #define mstarprogwens    25 /* Onthouden gewenst star programma                             */
    #define mstarprogwissel  26 /* Onthouden actief zijn wisselen naar star programma           */
    #define mrealtijd02      27 /* Realisatie tijd fase 02                                      */
    #define mrealtijd03      28 /* Realisatie tijd fase 03                                      */
    #define mrealtijd05      29 /* Realisatie tijd fase 05                                      */
    #define mrealtijd08      30 /* Realisatie tijd fase 08                                      */
    #define mrealtijd09      31 /* Realisatie tijd fase 09                                      */
    #define mrealtijd11      32 /* Realisatie tijd fase 11                                      */
    #define mrealtijd21      33 /* Realisatie tijd fase 21                                      */
    #define mrealtijd22      34 /* Realisatie tijd fase 22                                      */
    #define mrealtijd24      35 /* Realisatie tijd fase 24                                      */
    #define mrealtijd26      36 /* Realisatie tijd fase 26                                      */
    #define mrealtijd28      37 /* Realisatie tijd fase 28                                      */
    #define mrealtijd31      38 /* Realisatie tijd fase 31                                      */
    #define mrealtijd32      39 /* Realisatie tijd fase 32                                      */
    #define mrealtijd33      40 /* Realisatie tijd fase 33                                      */
    #define mrealtijd34      41 /* Realisatie tijd fase 34                                      */
    #define mrealtijd38      42 /* Realisatie tijd fase 38                                      */
    #define mrealtijd61      43 /* Realisatie tijd fase 61                                      */
    #define mrealtijd62      44 /* Realisatie tijd fase 62                                      */
    #define mrealtijd67      45 /* Realisatie tijd fase 67                                      */
    #define mrealtijd68      46 /* Realisatie tijd fase 68                                      */
    #define mrealtijd81      47 /* Realisatie tijd fase 81                                      */
    #define mrealtijd82      48 /* Realisatie tijd fase 82                                      */
    #define mrealtijd84      49 /* Realisatie tijd fase 84                                      */
    #define mrealtijdmin02   50 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03   51 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05   52 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08   53 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09   54 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11   55 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21   56 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22   57 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24   58 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26   59 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28   60 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31   61 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32   62 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33   63 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34   64 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38   65 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61   66 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62   67 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67   68 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68   69 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin81   70 /* Realisatie minimum tijd fase 81                              */
    #define mrealtijdmin82   71 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin84   72 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02   73 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03   74 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05   75 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08   76 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09   77 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11   78 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21   79 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22   80 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24   81 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26   82 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28   83 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31   84 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32   85 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33   86 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34   87 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38   88 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61   89 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62   90 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67   91 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68   92 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax81   93 /* Realisatie maximum tijd fase 81                              */
    #define mrealtijdmax82   94 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax84   95 /* Realisatie maximum tijd fase 84                              */
    #define mar02            96 /* Alternatieve ruimte fase 02                                  */
    #define mar03            97 /* Alternatieve ruimte fase 03                                  */
    #define mar05            98 /* Alternatieve ruimte fase 05                                  */
    #define mar08            99 /* Alternatieve ruimte fase 08                                  */
    #define mar09           100 /* Alternatieve ruimte fase 09                                  */
    #define mar11           101 /* Alternatieve ruimte fase 11                                  */
    #define mar21           102 /* Alternatieve ruimte fase 21                                  */
    #define mar22           103 /* Alternatieve ruimte fase 22                                  */
    #define mar24           104 /* Alternatieve ruimte fase 24                                  */
    #define mar26           105 /* Alternatieve ruimte fase 26                                  */
    #define mar28           106 /* Alternatieve ruimte fase 28                                  */
    #define mar31           107 /* Alternatieve ruimte fase 31                                  */
    #define mar32           108 /* Alternatieve ruimte fase 32                                  */
    #define mar33           109 /* Alternatieve ruimte fase 33                                  */
    #define mar34           110 /* Alternatieve ruimte fase 34                                  */
    #define mar38           111 /* Alternatieve ruimte fase 38                                  */
    #define mar61           112 /* Alternatieve ruimte fase 61                                  */
    #define mar62           113 /* Alternatieve ruimte fase 62                                  */
    #define mar67           114 /* Alternatieve ruimte fase 67                                  */
    #define mar68           115 /* Alternatieve ruimte fase 68                                  */
    #define mar81           116 /* Alternatieve ruimte fase 81                                  */
    #define mar82           117 /* Alternatieve ruimte fase 82                                  */
    #define mar84           118 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1          119

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
    #define tleven                     188 /* Frequentie verstuurd levenssignaal                                                       */
    #define tnlfg0262                  189 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnleg0262                  190 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlfg0868                  191 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnleg0868                  192 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlfg1168                  193 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 194 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  195 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 196 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  197 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 198 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  199 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 200 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132                 201 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 202 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 203 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 204 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  205 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 206 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  207 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 208 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                209 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     210 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus                211 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   212 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   213 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  214 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risovris          215 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            216 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              217 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 218 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 219 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                220 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrwris         221 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           222 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             223 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                224 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                225 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               226 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                227 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   228 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   229 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  230 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          231 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            232 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              233 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 234 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 235 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                236 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         237 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           238 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             239 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                240 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                241 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               242 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                243 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   244 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   245 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  246 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          247 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            248 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              249 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 250 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 251 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                252 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         253 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           254 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             255 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                256 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                257 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               258 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                259 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   260 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   261 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  262 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          263 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            264 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              265 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 266 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 267 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                268 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         269 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           270 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             271 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                272 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                273 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               274 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                275 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   276 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   277 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  278 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          279 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            280 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              281 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 282 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 283 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                284 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         285 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           286 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             287 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                288 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                289 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               290 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                291 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   292 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   293 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  294 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          295 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            296 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              297 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 298 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 299 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                300 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         301 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           302 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             303 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                304 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                305 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               306 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin22fietsfiets        307 /* Anti jutter tijd inmelden 22 Fiets                                                       */
    #define tpriouit22fiets            308 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              309 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 310 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 311 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                312 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tbtovg31fietsprio          313 /* Timer bezettijd prioriteit gehinderde rijtijd fase 31                                    */
    #define trt31fietsprio             314 /* Actuele rijtijd prio fase 31                                                             */
    #define tgb31fietsprio             315 /* Groenbewaking prioriteit fase 31                                                         */
    #define tblk31fietsprio            316 /* Blokkeertijd na prioriteitsingreep fase 31                                               */
    #define tbtovg32fietsprio          317 /* Timer bezettijd prioriteit gehinderde rijtijd fase 32                                    */
    #define trt32fietsprio             318 /* Actuele rijtijd prio fase 32                                                             */
    #define tgb32fietsprio             319 /* Groenbewaking prioriteit fase 32                                                         */
    #define tblk32fietsprio            320 /* Blokkeertijd na prioriteitsingreep fase 32                                               */
    #define tbtovg61bus                321 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   322 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   323 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  324 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          325 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            326 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              327 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 328 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 329 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                330 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         331 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           332 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             333 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                334 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                335 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               336 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                337 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   338 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   339 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  340 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          341 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            342 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              343 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 344 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 345 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                346 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         347 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           348 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             349 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                350 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                351 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               352 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                353 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   354 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   355 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  356 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          357 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            358 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              359 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 360 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 361 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                362 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         363 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           364 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             365 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                366 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                367 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               368 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            369 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                370 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   371 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   372 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  373 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          374 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            375 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              376 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 377 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 378 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                379 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         380 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           381 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             382 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                383 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                384 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               385 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    386 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    387 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 388 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 389 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                390 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    391 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    392 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 393 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 394 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                395 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    396 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    397 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 398 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 399 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                400 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    401 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    402 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 403 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 404 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                405 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    406 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    407 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 408 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 409 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                410 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    411 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    412 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 413 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 414 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                415 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    416 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    417 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 418 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 419 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                420 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    421 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    422 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 423 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 424 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                425 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    426 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    427 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 428 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 429 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                430 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    431 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    432 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 433 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 434 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                435 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                436
    #define tris02risvrw               437
    #define tris03risov                438
    #define tris03risvrw               439
    #define tris05risov                440
    #define tris05risvrw               441
    #define tris08risov                442
    #define tris08risvrw               443
    #define tris09risov                444
    #define tris09risvrw               445
    #define tris11risov                446
    #define tris11risvrw               447
    #define tris61risov                448
    #define tris61risvrw               449
    #define tris62risov                450
    #define tris62risvrw               451
    #define tris67risov                452
    #define tris67risvrw               453
    #define tris68risov                454
    #define tris68risvrw               455
    #define trgad24_3                  456 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 457 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            458 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            459 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   460 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   461 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   462 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   463 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   464 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   465 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    466 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    467 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    468 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    469 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   470 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   471 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   472 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   473 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   474 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   475 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1                    476 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2                    477 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3                    478 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1                    479 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    480 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    481 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    482 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    483 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    484 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    485 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   486 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   487 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   488 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   489 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tuitgestca02               490 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               491 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               492 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               493 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               494 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               495 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               496 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               497 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               498 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               499 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               500 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               501 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               502 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               503 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               504 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               505 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               506 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               507 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               508 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               509 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               510 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               511 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               512 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   513 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               514 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              515 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               516 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              517 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   518 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               519 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              520 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               521 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              522 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   523 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                524 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               525 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    526 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    527 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    528 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202                    529 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    530 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    531 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    532 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    533 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   534 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   535 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   536 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   537 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    538 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    539 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    540 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     541

/* teller elementen */
/* ---------------- */
    #define cvchst02bus          0 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus         */
    #define cvchst02risov        1 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus         */
    #define cvchst02risvrw       2 /* OV inmeldingen fase 02 tijdens halfstar regelen Vrachtwagen */
    #define cvchst03bus          3 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus         */
    #define cvchst03risov        4 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus         */
    #define cvchst03risvrw       5 /* OV inmeldingen fase 03 tijdens halfstar regelen Vrachtwagen */
    #define cvchst05bus          6 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus         */
    #define cvchst05risov        7 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus         */
    #define cvchst05risvrw       8 /* OV inmeldingen fase 05 tijdens halfstar regelen Vrachtwagen */
    #define cvchst08bus          9 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus         */
    #define cvchst08risov       10 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus         */
    #define cvchst08risvrw      11 /* OV inmeldingen fase 08 tijdens halfstar regelen Vrachtwagen */
    #define cvchst09bus         12 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus         */
    #define cvchst09risov       13 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus         */
    #define cvchst09risvrw      14 /* OV inmeldingen fase 09 tijdens halfstar regelen Vrachtwagen */
    #define cvchst11bus         15 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst11risov       16 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst11risvrw      17 /* OV inmeldingen fase 11 tijdens halfstar regelen Vrachtwagen */
    #define cvchst22fiets       18 /* OV inmeldingen fase 22 tijdens halfstar regelen Fiets       */
    #define cvchst31fietsprio   19 /* OV inmeldingen fase 31 tijdens halfstar regelen Fiets       */
    #define cvchst32fietsprio   20 /* OV inmeldingen fase 32 tijdens halfstar regelen Fiets       */
    #define cvchst61bus         21 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risov       22 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risvrw      23 /* OV inmeldingen fase 61 tijdens halfstar regelen Vrachtwagen */
    #define cvchst62bus         24 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risov       25 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risvrw      26 /* OV inmeldingen fase 62 tijdens halfstar regelen Vrachtwagen */
    #define cvchst67bus         27 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risov       28 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risvrw      29 /* OV inmeldingen fase 67 tijdens halfstar regelen Vrachtwagen */
    #define cvchst68bus         30 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risov       31 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risvrw      32 /* OV inmeldingen fase 68 tijdens halfstar regelen Vrachtwagen */
    #define cvc02bus            33 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          34 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         35 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc03bus            36 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          37 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         38 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc05bus            39 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          40 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         41 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc08bus            42 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          43 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         44 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc09bus            45 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          46 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         47 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc11bus            48 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          49 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         50 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cftscyc22fietsfiets 51 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cvc22fiets          52 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cvc31fietsprio      53 /* Bijhouden prio inmeldingen fase 31 type Fiets               */
    #define cvc32fietsprio      54 /* Bijhouden prio inmeldingen fase 32 type Fiets               */
    #define cvc61bus            55 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          56 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         57 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc62bus            58 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          59 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         60 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc67bus            61 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          62 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         63 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc68bus            64 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          65 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         66 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvchd02             67 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             68 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             69 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             70 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             71 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             72 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             73 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             74 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             75 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             76 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              77

/* schakelaars */
/* ----------- */
    #define schdynhiaat02              0 /* Toepassen dynamsich hiaat bij fase 02                                 */
    #define schopdrempelen02           1 /* Opdrempelen toepassen voor fase 02                                    */
    #define schedkop_02                2 /* Start timers dynamische hiaat fase 02 op einde detectie koplus        */
    #define schdynhiaat08              3 /* Toepassen dynamsich hiaat bij fase 08                                 */
    #define schopdrempelen08           4 /* Opdrempelen toepassen voor fase 08                                    */
    #define schedkop_08                5 /* Start timers dynamische hiaat fase 08 op einde detectie koplus        */
    #define schdynhiaat09              6 /* Toepassen dynamsich hiaat bij fase 09                                 */
    #define schopdrempelen09           7 /* Opdrempelen toepassen voor fase 09                                    */
    #define schedkop_09                8 /* Start timers dynamische hiaat fase 09 op einde detectie koplus        */
    #define schdynhiaat11              9 /* Toepassen dynamsich hiaat bij fase 11                                 */
    #define schopdrempelen11          10 /* Opdrempelen toepassen voor fase 11                                    */
    #define schedkop_11               11 /* Start timers dynamische hiaat fase 11 op einde detectie koplus        */
    #define schfileFile68af           12 /* File ingreep File68af toepassen                                       */
    #define schfiledoserenFile68af    13 /* Toepassen doseerpercentages voor fileingreep File68af                 */
    #define schfileFile68afparstrook  14 /* Parallele file meldingen per strook file ingreep File68af             */
    #define schbmfix                  15 /* Bijkomen tijdens fixatie mogelijk                                     */
    #define schaltghst02              16 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen      */
    #define schaltghst03              17 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen      */
    #define schaltghst05              18 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen      */
    #define schaltghst08              19 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen      */
    #define schaltghst09              20 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen      */
    #define schaltghst11              21 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen      */
    #define schaltghst21              22 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen      */
    #define schaltghst2232            23 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen */
    #define schaltghst2434            24 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen */
    #define schaltghst81              25 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen      */
    #define schaltghst88              26 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen      */
    #define schaltghst3384            27 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst68              28 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen      */
    #define schaltghst82              29 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen      */
    #define schaltghst67              30 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen      */
    #define schaltghst62              31 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen      */
    #define schaltghst61              32 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen      */
    #define schaltghst38              33 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen      */
    #define schaltghst31              34 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen      */
    #define schaltghst28              35 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen      */
    #define schaltghst26              36 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen      */
    #define schinstprm                37 /* Eenmalig kopieren signaalplan parameters naar signaalplannen          */
    #define schinst                   38 /* Eenmalig instellen signaalplannen na wijziging                        */
    #define schvaml                   39 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)          */
    #define schvar                    40 /* VA regelen aan of uit                                                 */
    #define scharh                    41 /* Toestaan alternatieven voor hoofdrichtingen                           */
    #define schvarstreng              42 /* VA regelen aan of uit voor gehele streng                              */
    #define schpervardef              43 /* VA regelen periode default                                            */
    #define schpervar1                44 /* VA regelen periode dag                                                */
    #define schpervar2                45 /* VA regelen periode ochtend                                            */
    #define schpervar3                46 /* VA regelen periode avond                                              */
    #define schpervar4                47 /* VA regelen periode koopavond                                          */
    #define schpervar5                48 /* VA regelen periode weekend                                            */
    #define schpervar6                49 /* VA regelen periode reserve                                            */
    #define schperarhdef              50 /* Alternatieven voor hoofdrichtingen periode default                    */
    #define schperarh1                51 /* Alternatieven voor hoofdrichtingen periode dag                        */
    #define schperarh2                52 /* Alternatieven voor hoofdrichtingen periode ochtend                    */
    #define schperarh3                53 /* Alternatieven voor hoofdrichtingen periode avond                      */
    #define schperarh4                54 /* Alternatieven voor hoofdrichtingen periode koopavond                  */
    #define schperarh5                55 /* Alternatieven voor hoofdrichtingen periode weekend                    */
    #define schperarh6                56 /* Alternatieven voor hoofdrichtingen periode reserve                    */
    #define schovpriople              57 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                */
    #define schma0261                 58 /* Meeaanvraag van 02 naar 61 actief                                     */
    #define schma0262                 59 /* Meeaanvraag van 02 naar 62 actief                                     */
    #define schma0521                 60 /* Meeaanvraag van 05 naar 21 actief                                     */
    #define schma0522                 61 /* Meeaanvraag van 05 naar 22 actief                                     */
    #define schma0532                 62 /* Meeaanvraag van 05 naar 32 actief                                     */
    #define schma0868                 63 /* Meeaanvraag van 08 naar 68 actief                                     */
    #define schma1126                 64 /* Meeaanvraag van 11 naar 26 actief                                     */
    #define schma1168                 65 /* Meeaanvraag van 11 naar 68 actief                                     */
    #define schma2221                 66 /* Meeaanvraag van 22 naar 21 actief                                     */
    #define schma3122                 67 /* Meeaanvraag van 31 naar 22 actief                                     */
    #define schma3132                 68 /* Meeaanvraag van 31 naar 32 actief                                     */
    #define schma3222                 69 /* Meeaanvraag van 32 naar 22 actief                                     */
    #define schma3231                 70 /* Meeaanvraag van 32 naar 31 actief                                     */
    #define schma3324                 71 /* Meeaanvraag van 33 naar 24 actief                                     */
    #define schma3334                 72 /* Meeaanvraag van 33 naar 34 actief                                     */
    #define schma3384                 73 /* Meeaanvraag van 33 naar 84 actief                                     */
    #define schma3424                 74 /* Meeaanvraag van 34 naar 24 actief                                     */
    #define schma3433                 75 /* Meeaanvraag van 34 naar 33 actief                                     */
    #define schma3484                 76 /* Meeaanvraag van 34 naar 84 actief                                     */
    #define schma8281                 77 /* Meeaanvraag van 82 naar 81 actief                                     */
    #define schmv02                   78 /* Meeverlengen fase 02                                                  */
    #define schmv03                   79 /* Meeverlengen fase 03                                                  */
    #define schmv05                   80 /* Meeverlengen fase 05                                                  */
    #define schmv08                   81 /* Meeverlengen fase 08                                                  */
    #define schmv09                   82 /* Meeverlengen fase 09                                                  */
    #define schmv11                   83 /* Meeverlengen fase 11                                                  */
    #define schmv21                   84 /* Meeverlengen fase 21                                                  */
    #define schmv22                   85 /* Meeverlengen fase 22                                                  */
    #define schmv24                   86 /* Meeverlengen fase 24                                                  */
    #define schmv26                   87 /* Meeverlengen fase 26                                                  */
    #define schmv28                   88 /* Meeverlengen fase 28                                                  */
    #define schmv31                   89 /* Meeverlengen fase 31                                                  */
    #define schmv32                   90 /* Meeverlengen fase 32                                                  */
    #define schmv33                   91 /* Meeverlengen fase 33                                                  */
    #define schmv34                   92 /* Meeverlengen fase 34                                                  */
    #define schmv38                   93 /* Meeverlengen fase 38                                                  */
    #define schmv61                   94 /* Meeverlengen fase 61                                                  */
    #define schmv62                   95 /* Meeverlengen fase 62                                                  */
    #define schmv67                   96 /* Meeverlengen fase 67                                                  */
    #define schmv68                   97 /* Meeverlengen fase 68                                                  */
    #define schmv81                   98 /* Meeverlengen fase 81                                                  */
    #define schmv82                   99 /* Meeverlengen fase 82                                                  */
    #define schmv84                  100 /* Meeverlengen fase 84                                                  */
    #define schmlprm                 101 /* Toepassen parametriseerbare modulestructuur                           */
    #define schovstipt02bus          102 /* Geconditioneerde prioteit voor OV bij 02 Bus                          */
    #define schovstipt03bus          103 /* Geconditioneerde prioteit voor OV bij 03 Bus                          */
    #define schovstipt05bus          104 /* Geconditioneerde prioteit voor OV bij 05 Bus                          */
    #define schovstipt08bus          105 /* Geconditioneerde prioteit voor OV bij 08 Bus                          */
    #define schovstipt09bus          106 /* Geconditioneerde prioteit voor OV bij 09 Bus                          */
    #define schovstipt11bus          107 /* Geconditioneerde prioteit voor OV bij 11 Bus                          */
    #define schovstipt61bus          108 /* Geconditioneerde prioteit voor OV bij 61 Bus                          */
    #define schovstipt62bus          109 /* Geconditioneerde prioteit voor OV bij 62 Bus                          */
    #define schovstipt67bus          110 /* Geconditioneerde prioteit voor OV bij 67 Bus                          */
    #define schovstipt68bus          111 /* Geconditioneerde prioteit voor OV bij 68 Bus                          */
    #define schcovuber               112 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                        */
    #define schcheckdstype           113 /* Check type DSI bericht bij VECOM                                      */
    #define schprioin02buskar        114 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02buskar       115 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02bus          116 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risovris      117 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02risovris     118 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02risov        119 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risvrwris     120 /* Inmelden 02 via Vrachtwagen toestaan                                  */
    #define schpriouit02risvrwris    121 /* Uitmelden 02 via Vrachtwagen toestaan                                 */
    #define schupinagb02risvrw       122 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin03buskar        123 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03buskar       124 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03bus          125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risovris      126 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03risovris     127 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03risov        128 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risvrwris     129 /* Inmelden 03 via Vrachtwagen toestaan                                  */
    #define schpriouit03risvrwris    130 /* Uitmelden 03 via Vrachtwagen toestaan                                 */
    #define schupinagb03risvrw       131 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin05buskar        132 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05buskar       133 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05bus          134 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risovris      135 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05risovris     136 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05risov        137 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risvrwris     138 /* Inmelden 05 via Vrachtwagen toestaan                                  */
    #define schpriouit05risvrwris    139 /* Uitmelden 05 via Vrachtwagen toestaan                                 */
    #define schupinagb05risvrw       140 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin08buskar        141 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08buskar       142 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08bus          143 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risovris      144 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08risovris     145 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08risov        146 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risvrwris     147 /* Inmelden 08 via Vrachtwagen toestaan                                  */
    #define schpriouit08risvrwris    148 /* Uitmelden 08 via Vrachtwagen toestaan                                 */
    #define schupinagb08risvrw       149 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin09buskar        150 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09buskar       151 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09bus          152 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risovris      153 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09risovris     154 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09risov        155 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risvrwris     156 /* Inmelden 09 via Vrachtwagen toestaan                                  */
    #define schpriouit09risvrwris    157 /* Uitmelden 09 via Vrachtwagen toestaan                                 */
    #define schupinagb09risvrw       158 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin11buskar        159 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11buskar       160 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11bus          161 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risovris      162 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11risovris     163 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11risov        164 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risvrwris     165 /* Inmelden 11 via Vrachtwagen toestaan                                  */
    #define schpriouit11risvrwris    166 /* Uitmelden 11 via Vrachtwagen toestaan                                 */
    #define schupinagb11risvrw       167 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin22fietsfiets    168 /* Inmelden 22 via Fiets toestaan                                        */
    #define schpriouit22fietsfiets   169 /* Uitmelden 22 via Fiets toestaan                                       */
    #define schupinagb22fiets        170 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22         */
    #define schupinagb31fietsprio    171 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 31         */
    #define schupinagb32fietsprio    172 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 32         */
    #define schprioin61buskar        173 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61buskar       174 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61bus          175 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risovris      176 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61risovris     177 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61risov        178 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risvrwris     179 /* Inmelden 61 via Vrachtwagen toestaan                                  */
    #define schpriouit61risvrwris    180 /* Uitmelden 61 via Vrachtwagen toestaan                                 */
    #define schupinagb61risvrw       181 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin62buskar        182 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62buskar       183 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62bus          184 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risovris      185 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62risovris     186 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62risov        187 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risvrwris     188 /* Inmelden 62 via Vrachtwagen toestaan                                  */
    #define schpriouit62risvrwris    189 /* Uitmelden 62 via Vrachtwagen toestaan                                 */
    #define schupinagb62risvrw       190 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin67buskar        191 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67buskar       192 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67bus          193 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risovris      194 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67risovris     195 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67risov        196 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risvrwris     197 /* Inmelden 67 via Vrachtwagen toestaan                                  */
    #define schpriouit67risvrwris    198 /* Uitmelden 67 via Vrachtwagen toestaan                                 */
    #define schupinagb67risvrw       199 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin68buskar        200 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68buskar       201 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68bus          202 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risovris      203 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68risovris     204 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68risov        205 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risvrwris     206 /* Inmelden 68 via Vrachtwagen toestaan                                  */
    #define schpriouit68risvrwris    207 /* Uitmelden 68 via Vrachtwagen toestaan                                 */
    #define schupinagb68risvrw       208 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schupinagbhd02           209 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02         */
    #define schhdin02kar             210 /* Inmelden 02 via KAR HD toestaan                                       */
    #define schhduit02kar            211 /* Uitmelden 02 via KAR HD toestaan                                      */
    #define schchecksirene02         212 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                */
    #define schhdin02ris             213 /* Inmelden 02 via RIS HD toestaan                                       */
    #define schhduit02ris            214 /* Uitmelden 02 via RIS HD toestaan                                      */
    #define schupinagbhd03           215 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03         */
    #define schhdin03kar             216 /* Inmelden 03 via KAR HD toestaan                                       */
    #define schhduit03kar            217 /* Uitmelden 03 via KAR HD toestaan                                      */
    #define schchecksirene03         218 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                */
    #define schhdin03ris             219 /* Inmelden 03 via RIS HD toestaan                                       */
    #define schhduit03ris            220 /* Uitmelden 03 via RIS HD toestaan                                      */
    #define schupinagbhd05           221 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05         */
    #define schhdin05kar             222 /* Inmelden 05 via KAR HD toestaan                                       */
    #define schhduit05kar            223 /* Uitmelden 05 via KAR HD toestaan                                      */
    #define schchecksirene05         224 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                */
    #define schhdin05ris             225 /* Inmelden 05 via RIS HD toestaan                                       */
    #define schhduit05ris            226 /* Uitmelden 05 via RIS HD toestaan                                      */
    #define schupinagbhd08           227 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08         */
    #define schhdin08kar             228 /* Inmelden 08 via KAR HD toestaan                                       */
    #define schhduit08kar            229 /* Uitmelden 08 via KAR HD toestaan                                      */
    #define schchecksirene08         230 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                */
    #define schhdin08ris             231 /* Inmelden 08 via RIS HD toestaan                                       */
    #define schhduit08ris            232 /* Uitmelden 08 via RIS HD toestaan                                      */
    #define schupinagbhd09           233 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09         */
    #define schhdin09kar             234 /* Inmelden 09 via KAR HD toestaan                                       */
    #define schhduit09kar            235 /* Uitmelden 09 via KAR HD toestaan                                      */
    #define schchecksirene09         236 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                */
    #define schhdin09ris             237 /* Inmelden 09 via RIS HD toestaan                                       */
    #define schhduit09ris            238 /* Uitmelden 09 via RIS HD toestaan                                      */
    #define schupinagbhd11           239 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11         */
    #define schhdin11kar             240 /* Inmelden 11 via KAR HD toestaan                                       */
    #define schhduit11kar            241 /* Uitmelden 11 via KAR HD toestaan                                      */
    #define schchecksirene11         242 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                */
    #define schhdin11ris             243 /* Inmelden 11 via RIS HD toestaan                                       */
    #define schhduit11ris            244 /* Uitmelden 11 via RIS HD toestaan                                      */
    #define schupinagbhd61           245 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61         */
    #define schhdin61kar             246 /* Inmelden 61 via KAR HD toestaan                                       */
    #define schhduit61kar            247 /* Uitmelden 61 via KAR HD toestaan                                      */
    #define schchecksirene61         248 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                */
    #define schhdin61ris             249 /* Inmelden 61 via RIS HD toestaan                                       */
    #define schhduit61ris            250 /* Uitmelden 61 via RIS HD toestaan                                      */
    #define schupinagbhd62           251 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62         */
    #define schhdin62kar             252 /* Inmelden 62 via KAR HD toestaan                                       */
    #define schhduit62kar            253 /* Uitmelden 62 via KAR HD toestaan                                      */
    #define schchecksirene62         254 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                */
    #define schhdin62ris             255 /* Inmelden 62 via RIS HD toestaan                                       */
    #define schhduit62ris            256 /* Uitmelden 62 via RIS HD toestaan                                      */
    #define schupinagbhd67           257 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67         */
    #define schhdin67kar             258 /* Inmelden 67 via KAR HD toestaan                                       */
    #define schhduit67kar            259 /* Uitmelden 67 via KAR HD toestaan                                      */
    #define schchecksirene67         260 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                */
    #define schhdin67ris             261 /* Inmelden 67 via RIS HD toestaan                                       */
    #define schhduit67ris            262 /* Uitmelden 67 via RIS HD toestaan                                      */
    #define schupinagbhd68           263 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68         */
    #define schhdin68kar             264 /* Inmelden 68 via KAR HD toestaan                                       */
    #define schhduit68kar            265 /* Uitmelden 68 via KAR HD toestaan                                      */
    #define schchecksirene68         266 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                */
    #define schhdin68ris             267 /* Inmelden 68 via RIS HD toestaan                                       */
    #define schhduit68ris            268 /* Uitmelden 68 via RIS HD toestaan                                      */
    #define schrisgeencheckopsg      269 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen           */
    #define schrisaanvraag           270 /* Globaal in of uitschakelen aanvragen via RIS                          */
    #define schrisverlengen          271 /* Globaal in of uitschakelen verlengen via RIS                          */
    #define schrgadd24_3             272 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2            */
    #define schrgv                   273 /* RoBuGrover aan of uit                                                 */
    #define schrgv_snel              274 /* RoBuGrover versneld ophogen of verlagen                               */
    #define schca02                  275 /* Cyclische aanvraag fase 02                                            */
    #define schca03                  276 /* Cyclische aanvraag fase 03                                            */
    #define schca05                  277 /* Cyclische aanvraag fase 05                                            */
    #define schca08                  278 /* Cyclische aanvraag fase 08                                            */
    #define schca09                  279 /* Cyclische aanvraag fase 09                                            */
    #define schca11                  280 /* Cyclische aanvraag fase 11                                            */
    #define schca21                  281 /* Cyclische aanvraag fase 21                                            */
    #define schca22                  282 /* Cyclische aanvraag fase 22                                            */
    #define schca24                  283 /* Cyclische aanvraag fase 24                                            */
    #define schca26                  284 /* Cyclische aanvraag fase 26                                            */
    #define schca28                  285 /* Cyclische aanvraag fase 28                                            */
    #define schca31                  286 /* Cyclische aanvraag fase 31                                            */
    #define schca32                  287 /* Cyclische aanvraag fase 32                                            */
    #define schca33                  288 /* Cyclische aanvraag fase 33                                            */
    #define schca34                  289 /* Cyclische aanvraag fase 34                                            */
    #define schca38                  290 /* Cyclische aanvraag fase 38                                            */
    #define schca61                  291 /* Cyclische aanvraag fase 61                                            */
    #define schca62                  292 /* Cyclische aanvraag fase 62                                            */
    #define schca67                  293 /* Cyclische aanvraag fase 67                                            */
    #define schca68                  294 /* Cyclische aanvraag fase 68                                            */
    #define schca81                  295 /* Cyclische aanvraag fase 81                                            */
    #define schca82                  296 /* Cyclische aanvraag fase 82                                            */
    #define schca84                  297 /* Cyclische aanvraag fase 84                                            */
    #define schvg02_4a               298 /* Veiligheidsgroen detector 02_4a fase 02                               */
    #define schvg02_4b               299 /* Veiligheidsgroen detector 02_4b fase 02                               */
    #define schvg08_4a               300 /* Veiligheidsgroen detector 08_4a fase 08                               */
    #define schvg08_4b               301 /* Veiligheidsgroen detector 08_4b fase 08                               */
    #define schvg11_4                302 /* Veiligheidsgroen detector 11_4 fase 11                                */
    #define schaltg02                303 /* Alternatieve realisatie toestaan fase 02                              */
    #define schaltg03                304 /* Alternatieve realisatie toestaan fase 03                              */
    #define schaltg05                305 /* Alternatieve realisatie toestaan fase 05                              */
    #define schaltg08                306 /* Alternatieve realisatie toestaan fase 08                              */
    #define schaltg09                307 /* Alternatieve realisatie toestaan fase 09                              */
    #define schaltg11                308 /* Alternatieve realisatie toestaan fase 11                              */
    #define schaltg21                309 /* Alternatieve realisatie toestaan fase 21                              */
    #define schaltg2232              310 /* Alternatieve realisatie toestaan fasen 22, 32                         */
    #define schaltg2434              311 /* Alternatieve realisatie toestaan fasen 24, 34                         */
    #define schaltg26                312 /* Alternatieve realisatie toestaan fase 26                              */
    #define schaltg28                313 /* Alternatieve realisatie toestaan fase 28                              */
    #define schaltg31                314 /* Alternatieve realisatie toestaan fase 31                              */
    #define schaltg3384              315 /* Alternatieve realisatie toestaan fasen 33, 84                         */
    #define schaltg38                316 /* Alternatieve realisatie toestaan fase 38                              */
    #define schaltg61                317 /* Alternatieve realisatie toestaan fase 61                              */
    #define schaltg62                318 /* Alternatieve realisatie toestaan fase 62                              */
    #define schaltg67                319 /* Alternatieve realisatie toestaan fase 67                              */
    #define schaltg68                320 /* Alternatieve realisatie toestaan fase 68                              */
    #define schaltg81                321 /* Alternatieve realisatie toestaan fase 81                              */
    #define schaltg82                322 /* Alternatieve realisatie toestaan fase 82                              */
    #define schwg02                  323 /* Wachtstand groen fase 02                                              */
    #define schwg03                  324 /* Wachtstand groen fase 03                                              */
    #define schwg05                  325 /* Wachtstand groen fase 05                                              */
    #define schwg08                  326 /* Wachtstand groen fase 08                                              */
    #define schwg09                  327 /* Wachtstand groen fase 09                                              */
    #define schwg11                  328 /* Wachtstand groen fase 11                                              */
    #define schwg21                  329 /* Wachtstand groen fase 21                                              */
    #define schwg22                  330 /* Wachtstand groen fase 22                                              */
    #define schwg24                  331 /* Wachtstand groen fase 24                                              */
    #define schwg26                  332 /* Wachtstand groen fase 26                                              */
    #define schwg28                  333 /* Wachtstand groen fase 28                                              */
    #define schwg31                  334 /* Wachtstand groen fase 31                                              */
    #define schwg32                  335 /* Wachtstand groen fase 32                                              */
    #define schwg33                  336 /* Wachtstand groen fase 33                                              */
    #define schwg34                  337 /* Wachtstand groen fase 34                                              */
    #define schwg38                  338 /* Wachtstand groen fase 38                                              */
    #define schwg61                  339 /* Wachtstand groen fase 61                                              */
    #define schwg62                  340 /* Wachtstand groen fase 62                                              */
    #define schwg67                  341 /* Wachtstand groen fase 67                                              */
    #define schwg68                  342 /* Wachtstand groen fase 68                                              */
    #define schwg81                  343 /* Wachtstand groen fase 81                                              */
    #define schwg82                  344 /* Wachtstand groen fase 82                                              */
    #define schwg84                  345 /* Wachtstand groen fase 84                                              */
    #define schstar                  346 /* Inschakelen star programma                                            */
    #define schgs2232                347 /* Schakelbare gelijkstart tussen fase 32 en 22                          */
    #define schgs2434                348 /* Schakelbare gelijkstart tussen fase 34 en 24                          */
    #define schgs3384                349 /* Schakelbare gelijkstart tussen fase 84 en 33                          */
    #define schlos32_1               350 /* Toestaan los realiseren fase 32                                       */
    #define schlos32_2               351 /* Toestaan los realiseren fase 32                                       */
    #define schlos31_1               352 /* Toestaan los realiseren fase 31                                       */
    #define schlos31_2               353 /* Toestaan los realiseren fase 31                                       */
    #define schlos34_1               354 /* Toestaan los realiseren fase 34                                       */
    #define schlos34_2               355 /* Toestaan los realiseren fase 34                                       */
    #define schlos33_1               356 /* Toestaan los realiseren fase 33                                       */
    #define schlos33_2               357 /* Toestaan los realiseren fase 33                                       */
    #define schconfidence15fix       358
    #define schtxconfidence15ar      359
    #define schspatconfidence1       360
    #define schspatconfidence3       361
    #define schspatconfidence6       362
    #define schspatconfidence9       363
    #define schspatconfidence12      364
    #define schspatconfidence15      365
    #define schtimings02             366
    #define schtimings03             367
    #define schtimings05             368
    #define schtimings08             369
    #define schtimings09             370
    #define schtimings11             371
    #define schtimings21             372
    #define schtimings22             373
    #define schtimings24             374
    #define schtimings26             375
    #define schtimings28             376
    #define schtimings31             377
    #define schtimings32             378
    #define schtimings33             379
    #define schtimings34             380
    #define schtimings38             381
    #define schtimings61             382
    #define schtimings62             383
    #define schtimings67             384
    #define schtimings68             385
    #define schtimings81             386
    #define schtimings82             387
    #define schtimings84             388
    #define schgsbeidedkb            389
    #define SCHMAX1                  390

/* parameters */
/* ---------- */
    #define prmspringverleng_02_1a         0 /* Dyn. hiaattij instelling voor det. 02_1a (via bitsturing)                                                                      */
    #define prmspringverleng_02_1b         1 /* Dyn. hiaattij instelling voor det. 02_1b (via bitsturing)                                                                      */
    #define prmspringverleng_02_2a         2 /* Dyn. hiaattij instelling voor det. 02_2a (via bitsturing)                                                                      */
    #define prmspringverleng_02_2b         3 /* Dyn. hiaattij instelling voor det. 02_2b (via bitsturing)                                                                      */
    #define prmspringverleng_02_3a         4 /* Dyn. hiaattij instelling voor det. 02_3a (via bitsturing)                                                                      */
    #define prmspringverleng_02_3b         5 /* Dyn. hiaattij instelling voor det. 02_3b (via bitsturing)                                                                      */
    #define prmspringverleng_02_4a         6 /* Dyn. hiaattij instelling voor det. 02_4a (via bitsturing)                                                                      */
    #define prmspringverleng_02_4b         7 /* Dyn. hiaattij instelling voor det. 02_4b (via bitsturing)                                                                      */
    #define prmspringverleng_08_1a         8 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b         9 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a        10 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b        11 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a        12 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b        13 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a        14 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b        15 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmspringverleng_09_1         16 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2         17 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3         18 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_1         19 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2         20 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3         21 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4         22 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmfb                         23 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                         24 /* Versiebeheer xx                                                                                                                */
    #define prmyy                         25 /* Versiebeheer yy                                                                                                                */
    #define prmzz                         26 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02           27
    #define prmovmmindergroen_02          28
    #define prmovmextragroen_03           29
    #define prmovmmindergroen_03          30
    #define prmovmextragroen_05           31
    #define prmovmmindergroen_05          32
    #define prmovmextragroen_08           33
    #define prmovmmindergroen_08          34
    #define prmovmextragroen_09           35
    #define prmovmmindergroen_09          36
    #define prmovmextragroen_11           37
    #define prmovmmindergroen_11          38
    #define prmovmextragroen_61           39
    #define prmovmmindergroen_61          40
    #define prmovmextragroen_62           41
    #define prmovmmindergroen_62          42
    #define prmovmextragroen_67           43
    #define prmovmmindergroen_67          44
    #define prmovmextragroen_68           45
    #define prmovmmindergroen_68          46
    #define prmaltb02                     47 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03                     48 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05                     49 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08                     50 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09                     51 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11                     52 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21                     53 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22                     54 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24                     55 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26                     56 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28                     57 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31                     58 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32                     59 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33                     60 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34                     61 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38                     62 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61                     63 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62                     64 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67                     65 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68                     66 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81                     67 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82                     68 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84                     69 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a                    70 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b                    71 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a                    72 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b                    73 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a                    74 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b                    75 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a                    76 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b                    77 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1                     78 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2                     79 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1                     80 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2                     81 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a                    82 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b                    83 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a                    84 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b                    85 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a                    86 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b                    87 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a                    88 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b                    89 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1                     90 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2                     91 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3                     92 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1                     93 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2                     94 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3                     95 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4                     96 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                      97 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21                      98 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1                     99 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22                     100 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1                    101 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2                    102 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3                    103 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24                     104 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261                     105 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26                     106 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1                    107 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2                    108 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28                     109 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a                    110 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b                    111 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a                    112 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b                    113 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a                    114 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b                    115 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a                    116 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b                    117 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a                    118 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b                    119 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1                    120 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2                    121 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a                   122 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b                   123 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a                   124 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b                   125 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1                    126 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2                    127 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a                   128 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b                   129 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a                   130 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b                   131 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a                   132 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b                   133 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1                    134 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81                     135 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1                    136 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82                     137 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1                    138 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84                     139 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a                   140 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b                   141 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a                   142 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b                   143 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a                   144 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b                   145 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a                   146 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b                   147 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1                    148 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2                    149 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1                    150 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2                    151 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a                   152 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b                   153 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a                   154 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b                   155 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a                   156 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b                   157 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a                   158 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b                   159 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1                    160 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2                    161 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3                    162 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1                    163 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2                    164 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3                    165 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4                    166 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211                     167 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1                    168 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1                    169 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2                    170 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3                    171 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261                     172 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1                    173 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2                    174 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1                    175 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2                    176 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a                   177 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b                   178 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a                   179 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b                   180 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1                    181 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2                    182 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a                   183 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b                   184 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a                   185 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b                   186 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a                   187 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b                   188 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1                    189 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1                    190 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1                    191 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc02                    192 /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    #define prmperc03                    193 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05                    194 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08                    195 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09                    196 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11                    197 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61                    198 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62                    199 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67                    200 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68                    201 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08           202 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11           203 /* Doseerpercentage 11                                                                                                            */
    #define prmaltphst02                 204 /* Alternatieve ruimte fase 02 tijdens halfstar regelen                                                                           */
    #define prmaltphst03                 205 /* Alternatieve ruimte fase 03 tijdens halfstar regelen                                                                           */
    #define prmaltphst05                 206 /* Alternatieve ruimte fase 05 tijdens halfstar regelen                                                                           */
    #define prmaltphst08                 207 /* Alternatieve ruimte fase 08 tijdens halfstar regelen                                                                           */
    #define prmaltphst09                 208 /* Alternatieve ruimte fase 09 tijdens halfstar regelen                                                                           */
    #define prmaltphst11                 209 /* Alternatieve ruimte fase 11 tijdens halfstar regelen                                                                           */
    #define prmaltphst21                 210 /* Alternatieve ruimte fase 21 tijdens halfstar regelen                                                                           */
    #define prmaltphst2232               211 /* Alternatieve ruimte fasen 22, 32 tijdens halfstar regelen                                                                      */
    #define prmaltphst2434               212 /* Alternatieve ruimte fasen 24, 34 tijdens halfstar regelen                                                                      */
    #define prmaltphst81                 213 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 214 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst3384               215 /* Alternatieve ruimte fasen 33, 84 tijdens halfstar regelen                                                                      */
    #define prmaltphst68                 216 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst82                 217 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 218 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 219 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 220 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst38                 221 /* Alternatieve ruimte fase 38 tijdens halfstar regelen                                                                           */
    #define prmaltphst31                 222 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmaltphst28                 223 /* Alternatieve ruimte fase 28 tijdens halfstar regelen                                                                           */
    #define prmaltphst26                 224 /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    #define prmpriohst02bus              225 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risov            226 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risvrw           227 /* Prioriteit fase 02 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst03bus              228 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risov            229 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risvrw           230 /* Prioriteit fase 03 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst05bus              231 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risov            232 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risvrw           233 /* Prioriteit fase 05 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst08bus              234 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risov            235 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risvrw           236 /* Prioriteit fase 08 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst09bus              237 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risov            238 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risvrw           239 /* Prioriteit fase 09 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst11bus              240 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risov            241 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risvrw           242 /* Prioriteit fase 11 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst22fiets            243 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst31fietsprio        244 /* Prioriteit fase 31 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst32fietsprio        245 /* Prioriteit fase 32 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61bus              246 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            247 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           248 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62bus              249 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            250 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           251 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67bus              252 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            253 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           254 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68bus              255 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            256 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           257 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmnatxdhst02bus             258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst31fietsprio       277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 31                                                                */
    #define prmnatxdhst32fietsprio       278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 32                                                                */
    #define prmnatxdhst61bus             279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           283 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          284 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             285 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           286 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          287 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             288 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           289 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          290 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                291 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                292 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                293 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                294 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                295 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                296 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                297 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                298 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                299 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                300 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                301 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                302 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                303 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                304 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                305 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                306 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                307 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                308 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                309 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                310 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                311 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                312 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                313 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                314 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                315 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                316 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                317 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                318 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                319 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                320 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                321 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                322 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                323 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                324 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                325 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                326 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                327 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                328 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                329 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                330 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                331 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                332 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                333 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                334 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                335 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                336 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                337 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                338 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                339 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                340 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                341 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                342 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                343 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                344 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                345 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                346 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                347 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                348 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                349 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                350 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                351 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                352 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                353 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                354 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                355 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                356 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                357 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                358 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                359 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                360 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                361 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                362 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                363 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                364 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                365 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                366 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                367 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                368 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                369 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                370 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                371 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                372 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                373 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                374 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                375 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                376 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                377 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                378 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                379 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                380 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                381 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                382 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                383 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                384 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                385 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                386 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                387 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                388 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                389 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                390 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                391 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                392 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                393 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                394 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                395 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                396 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                397 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                398 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                399 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                400 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                401 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                402 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                403 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                404 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                405 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                406 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                407 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                408 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                409 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                410 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                411 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                412 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                413 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                414 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                415 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                416 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                417 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                418 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                419 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                420 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                421 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                422 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                423 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                424 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                425 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                426 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                427 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                428 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                429 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                430 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                431 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                432 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                433 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                434 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                435 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                436 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                437 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                438 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                439 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                440 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                441 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                442 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                443 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                444 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                445 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                446 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                447 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                448 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                449 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                450 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                451 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                452 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                453 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                454 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                455 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                456 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                457 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                458 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                459 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                460 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                461 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                462 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                463 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                464 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                465 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                466 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                467 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                468 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                469 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                470 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                471 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                472 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                473 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                474 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                475 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                476 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                477 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                478 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                479 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                480 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                481 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                482 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                483 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                484 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                485 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                486 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                487 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                488 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                489 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                490 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                491 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                492 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                493 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                494 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                495 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                496 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                497 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                498 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                499 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                500 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                501 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                502 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                503 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                504 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                505 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                506 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                507 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                508 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                509 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                510 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                511 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                512 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                513 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                514 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                515 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                516 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                517 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                518 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                519 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                520 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                521 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                522 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                523 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                524 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                525 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                526 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                527 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                528 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                529 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                530 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                531 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                532 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                533 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                534 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                535 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                536 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                537 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                538 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                539 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                540 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                541 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                542 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                543 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                544 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                545 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                546 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                547 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                548 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                549 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                550 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                551 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                552 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                553 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                554 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                555 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                556 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                557 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                558 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                559 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                560 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                561 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                562 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                563 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                564 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                565 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                566 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                567 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                568 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                569 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                570 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                571 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                572 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                573 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                574 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                575 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                576 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                577 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                578 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                579 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                580 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                581 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                582 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                583 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                584 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                585 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                586 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                587 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                588 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                589 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                590 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                591 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                592 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                593 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                594 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                595 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                596 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                597 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                598 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                599 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                600 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                601 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                602 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                603 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                604 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                605 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                606 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                607 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                608 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                609 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                610 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                611 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                612 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                613 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                614 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                615 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                616 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                617 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                618 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                619 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                620 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                621 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                622 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                623 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                624 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                625 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                626 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                627 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                628 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                629 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                630 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                631 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                632 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                633 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                634 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                635 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                636 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                637 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                638 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                639 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                640 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                641 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                642 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                643 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                644 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                645 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                646 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                647 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                648 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                649 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                650 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                651 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                652 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                653 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                654 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                655 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                656 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                657 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                658 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                659 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                660 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                661 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                662 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                663 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                664 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                665 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                666 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                667 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                668 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                669 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                670 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                671 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                672 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                673 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                674 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                675 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                676 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                677 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                678 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                679 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                680 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                681 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                682 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                683 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                684 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                685 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                686 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                687 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                688 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                689 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                690 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                691 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                692 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                693 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                694 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                695 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                696 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                697 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                698 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                699 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                700 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                701 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                702 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                703 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                704 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                705 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                706 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                707 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                708 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                709 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                710 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                711 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                712 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                713 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                714 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                715 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                716 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                717 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                718 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                719 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                720 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                721 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                722 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                723 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                724 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                725 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                726 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                727 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                728 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                729 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                730 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                731 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                732 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                733 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                734 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                735 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                736 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                737 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                738 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                739 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                740 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                741 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                742 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                743 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                744 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                745 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                746 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                747 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                748 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                749 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                750 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                751 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                752 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                753 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                754 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                755 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                756 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                757 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                758 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                759 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                760 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                761 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                762 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                763 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                764 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                765 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                766 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                767 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                768 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                769 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                770 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                771 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                772 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                773 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                774 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                775 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                776 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                777 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                778 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                779 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                780 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                781 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                782 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                783 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                784 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                785 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                786 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                787 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                788 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                789 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                790 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                791 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                792 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                793 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                794 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                795 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                796 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                797 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                798 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                799 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                800 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                801 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                802 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                803 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                804 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                805 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                806 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                807 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                808 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                809 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                810 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                811 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                812 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                813 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                814 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                815 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                816 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                817 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                818 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                819 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                820 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                821 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                822 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                823 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                824 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                825 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                826 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                827 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                828 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                829 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                830 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                831 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                832 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                833 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                834 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                835 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                836 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                837 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                838 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                839 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                840 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                841 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                842 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                843 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                844 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                845 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                846 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                847 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                848 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                849 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                850 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                851 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                852 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                853 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                854 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                855 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                856 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                857 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                858 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                859 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                860 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                861 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                862 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                863 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                864 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                865 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                866 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                867 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                868 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                869 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                870 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                871 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                872 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                873 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                874 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                875 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                876 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                877 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                878 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                879 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                880 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                881 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                882 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                883 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                884 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                885 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                886 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                887 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                888 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                889 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                890 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                891 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                892 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                893 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                894 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                895 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                896 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                897 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                898 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                899 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                900 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                901 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                902 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                903 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                904 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                905 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                906 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                907 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                908 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                909 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                910 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                911 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                912 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                913 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                914 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                915 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                916 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                917 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                918 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                919 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                920 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                921 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                922 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                923 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                924 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                925 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                926 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                927 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                928 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                929 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                930 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                931 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                932 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                933 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                934 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                935 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                936 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                937 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                938 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                939 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                940 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                941 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                942 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                943 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                944 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                945 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                946 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                947 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                948 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                949 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                950 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                951 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                952 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                953 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                954 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                955 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                956 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                957 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                958 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                959 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                960 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                961 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                962 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                963 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                964 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                965 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                966 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                967 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                968 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                969 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                970 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                971 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                972 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                973 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                974 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                975 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                976 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                977 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                978 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                979 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                980 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   981 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 982 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   983 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   984 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   985 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   986 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   987 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   988 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                989 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                990 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                991 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                992 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                993 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                994 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                995 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                996 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                997 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122                998 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                999 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222               1000 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231               1001 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324               1002 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334               1003 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384               1004 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424               1005 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433               1006 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484               1007 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               1008 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1009 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                     1010 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                     1011 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     1012 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     1013 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     1014 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     1015 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     1016 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     1017 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                     1018 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     1019 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     1020 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     1021 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     1022 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     1023 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     1024 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     1025 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1026 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1027 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1028 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1029 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1030 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1031 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1032 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1033 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03                   1034 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05                   1035 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08                   1036 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09                   1037 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11                   1038 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21                   1039 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22                   1040 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24                   1041 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26                   1042 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28                   1043 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31                   1044 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32                   1045 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33                   1046 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34                   1047 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38                   1048 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61                   1049 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62                   1050 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67                   1051 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68                   1052 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81                   1053 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82                   1054 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84                   1055 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262                  1056 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868                  1057 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168                  1058 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221                  1059 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132                  1060 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231                  1061 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334                  1062 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433                  1063 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281                  1064 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg         1065 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1066 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus      1067 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus       1068 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus       1069 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus      1070 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1071 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1072 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1073 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1074 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1075 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1076 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1077 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1078 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1079 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1080 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1081 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1082 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1083 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1084 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1085 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1086 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1087 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1088 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1089 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1090 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1091 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1092 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1093 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1094 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1095 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1096 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1097 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1098 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1099 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1100 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1101 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1102 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1103 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1104 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1105 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1106 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1107 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1108 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1109 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1110 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1111 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1112 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1113 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1114 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1115 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1116 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1117 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1118 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1119 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1120 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1121 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1122 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1123 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1124 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1125 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1126 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1127 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1128 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1129 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1130 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1131 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1132 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1133 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1134 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1135 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1136 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1137 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1138 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1139 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1140 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1141 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1142 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1143 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1144 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1145 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1146 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1147 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1148 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1149 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1150 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1151 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1152 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1153 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1154 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1155 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1156 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1157 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1158 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1159 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1160 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1161 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1162 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1163 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1164 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1165 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1166 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1167 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1168 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1169 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1170 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1171 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1172 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1173 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1174 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1175 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1176 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1177 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1178 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1179 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1180 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1181 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1182 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1183 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1184 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1185 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1186 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1187 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1188 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1189 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1190 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1191 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1192 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1193 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1194 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1195 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1196 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1197 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1198 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1199 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1200 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1201 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1202 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1203 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1204 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1205 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1206 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1207 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1208 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1209 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1210 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1211 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1212 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1213 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1214 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1215 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1216 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1217 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                 1218 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                1219 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                 1220 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                 1221 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus              1222 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                1223 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1224 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1225 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1226 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1227 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1228 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1229
    #define prmrisend02risov            1230
    #define prmriseta02risov            1231
    #define prmrisrole02risov           1232
    #define prmrissubrole02risov        1233
    #define prmrisstationtype02risov    1234
    #define prmrisapproachid02risov     1235
    #define prmrislaneid02risov_1       1236
    #define prmrislaneid02risov_2       1237
    #define prmrto02risvrw              1238 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1239 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1240 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1241 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1242 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1243
    #define prmrisend02risvrw           1244
    #define prmriseta02risvrw           1245
    #define prmrisrole02risvrw          1246
    #define prmrissubrole02risvrw       1247
    #define prmrisstationtype02risvrw   1248
    #define prmrisapproachid02risvrw    1249
    #define prmrislaneid02risvrw_1      1250
    #define prmrislaneid02risvrw_2      1251
    #define prmrto03bus                 1252 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1253 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1254 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1255 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1256 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1257 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1258 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1259 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1260 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1261 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1262 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1263
    #define prmrisend03risov            1264
    #define prmriseta03risov            1265
    #define prmrisrole03risov           1266
    #define prmrissubrole03risov        1267
    #define prmrisstationtype03risov    1268
    #define prmrisapproachid03risov     1269
    #define prmrislaneid03risov_1       1270
    #define prmrto03risvrw              1271 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1272 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1273 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1274 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1275 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1276
    #define prmrisend03risvrw           1277
    #define prmriseta03risvrw           1278
    #define prmrisrole03risvrw          1279
    #define prmrissubrole03risvrw       1280
    #define prmrisstationtype03risvrw   1281
    #define prmrisapproachid03risvrw    1282
    #define prmrislaneid03risvrw_1      1283
    #define prmrto05bus                 1284 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1285 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1286 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1287 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1288 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1289 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1290 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1291 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1292 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1293 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1294 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1295
    #define prmrisend05risov            1296
    #define prmriseta05risov            1297
    #define prmrisrole05risov           1298
    #define prmrissubrole05risov        1299
    #define prmrisstationtype05risov    1300
    #define prmrisapproachid05risov     1301
    #define prmrislaneid05risov_1       1302
    #define prmrto05risvrw              1303 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw             1304 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw              1305 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw              1306 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw             1307 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw         1308
    #define prmrisend05risvrw           1309
    #define prmriseta05risvrw           1310
    #define prmrisrole05risvrw          1311
    #define prmrissubrole05risvrw       1312
    #define prmrisstationtype05risvrw   1313
    #define prmrisapproachid05risvrw    1314
    #define prmrislaneid05risvrw_1      1315
    #define prmrto08bus                 1316 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1317 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1318 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1319 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1320 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1321 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1322 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1323 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1324 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1325 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1326 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1327
    #define prmrisend08risov            1328
    #define prmriseta08risov            1329
    #define prmrisrole08risov           1330
    #define prmrissubrole08risov        1331
    #define prmrisstationtype08risov    1332
    #define prmrisapproachid08risov     1333
    #define prmrislaneid08risov_1       1334
    #define prmrislaneid08risov_2       1335
    #define prmrto08risvrw              1336 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1337 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1338 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1339 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1340 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1341
    #define prmrisend08risvrw           1342
    #define prmriseta08risvrw           1343
    #define prmrisrole08risvrw          1344
    #define prmrissubrole08risvrw       1345
    #define prmrisstationtype08risvrw   1346
    #define prmrisapproachid08risvrw    1347
    #define prmrislaneid08risvrw_1      1348
    #define prmrislaneid08risvrw_2      1349
    #define prmrto09bus                 1350 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1351 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1352 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1353 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1354 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1355 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1356 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1357 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1358 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1359 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1360 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1361
    #define prmrisend09risov            1362
    #define prmriseta09risov            1363
    #define prmrisrole09risov           1364
    #define prmrissubrole09risov        1365
    #define prmrisstationtype09risov    1366
    #define prmrisapproachid09risov     1367
    #define prmrislaneid09risov_1       1368
    #define prmrto09risvrw              1369 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw             1370 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw              1371 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw              1372 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw             1373 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw         1374
    #define prmrisend09risvrw           1375
    #define prmriseta09risvrw           1376
    #define prmrisrole09risvrw          1377
    #define prmrissubrole09risvrw       1378
    #define prmrisstationtype09risvrw   1379
    #define prmrisapproachid09risvrw    1380
    #define prmrislaneid09risvrw_1      1381
    #define prmrto11bus                 1382 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                1383 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                 1384 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                 1385 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus              1386 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                1387 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov               1388 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov              1389 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov               1390 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov               1391 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov              1392 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov          1393
    #define prmrisend11risov            1394
    #define prmriseta11risov            1395
    #define prmrisrole11risov           1396
    #define prmrissubrole11risov        1397
    #define prmrisstationtype11risov    1398
    #define prmrisapproachid11risov     1399
    #define prmrislaneid11risov_1       1400
    #define prmrto11risvrw              1401 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw             1402 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw              1403 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw              1404 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw             1405 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw         1406
    #define prmrisend11risvrw           1407
    #define prmriseta11risvrw           1408
    #define prmrisrole11risvrw          1409
    #define prmrissubrole11risvrw       1410
    #define prmrisstationtype11risvrw   1411
    #define prmrisapproachid11risvrw    1412
    #define prmrislaneid11risvrw_1      1413
    #define prmftsblok22fietsfiets      1414 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1415 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1416 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1417 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1418 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1419 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1420 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1421 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrto31fietsprio           1422 /* Ongehinderde rijtijd prioriteit fase 31                                                                                        */
    #define prmrtbg31fietsprio          1423 /* Beperkt gehinderde rijtijd prioriteit fase 31                                                                                  */
    #define prmrtg31fietsprio           1424 /* Gehinderde rijtijd prioriteit fase 31                                                                                          */
    #define prmomx31fietsprio           1425 /* Ondermaximum OV fase 31                                                                                                        */
    #define prmprio31fietsprio          1426 /* Prioriteitsinstelling OV fase 31                                                                                               */
    #define prmrto32fietsprio           1427 /* Ongehinderde rijtijd prioriteit fase 32                                                                                        */
    #define prmrtbg32fietsprio          1428 /* Beperkt gehinderde rijtijd prioriteit fase 32                                                                                  */
    #define prmrtg32fietsprio           1429 /* Gehinderde rijtijd prioriteit fase 32                                                                                          */
    #define prmomx32fietsprio           1430 /* Ondermaximum OV fase 32                                                                                                        */
    #define prmprio32fietsprio          1431 /* Prioriteitsinstelling OV fase 32                                                                                               */
    #define prmrto61bus                 1432 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1433 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1434 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1435 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1436 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1437 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1438 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1439 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1440 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1441 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1442 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1443
    #define prmrisend61risov            1444
    #define prmriseta61risov            1445
    #define prmrisrole61risov           1446
    #define prmrissubrole61risov        1447
    #define prmrisstationtype61risov    1448
    #define prmrisapproachid61risov     1449
    #define prmrislaneid61risov_1       1450
    #define prmrto61risvrw              1451 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1452 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1453 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1454 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1455 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1456
    #define prmrisend61risvrw           1457
    #define prmriseta61risvrw           1458
    #define prmrisrole61risvrw          1459
    #define prmrissubrole61risvrw       1460
    #define prmrisstationtype61risvrw   1461
    #define prmrisapproachid61risvrw    1462
    #define prmrislaneid61risvrw_1      1463
    #define prmrto62bus                 1464 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1465 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1466 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1467 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1468 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1469 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1470 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1471 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1472 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1473 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1474 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1475
    #define prmrisend62risov            1476
    #define prmriseta62risov            1477
    #define prmrisrole62risov           1478
    #define prmrissubrole62risov        1479
    #define prmrisstationtype62risov    1480
    #define prmrisapproachid62risov     1481
    #define prmrislaneid62risov_1       1482
    #define prmrislaneid62risov_2       1483
    #define prmrto62risvrw              1484 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1485 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1486 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1487 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1488 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1489
    #define prmrisend62risvrw           1490
    #define prmriseta62risvrw           1491
    #define prmrisrole62risvrw          1492
    #define prmrissubrole62risvrw       1493
    #define prmrisstationtype62risvrw   1494
    #define prmrisapproachid62risvrw    1495
    #define prmrislaneid62risvrw_1      1496
    #define prmrislaneid62risvrw_2      1497
    #define prmrto67bus                 1498 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1499 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1500 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1501 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1502 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1503 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1504 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1505 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1506 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1507 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1508 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1509
    #define prmrisend67risov            1510
    #define prmriseta67risov            1511
    #define prmrisrole67risov           1512
    #define prmrissubrole67risov        1513
    #define prmrisstationtype67risov    1514
    #define prmrisapproachid67risov     1515
    #define prmrislaneid67risov_1       1516
    #define prmrto67risvrw              1517 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1518 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1519 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1520 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1521 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1522
    #define prmrisend67risvrw           1523
    #define prmriseta67risvrw           1524
    #define prmrisrole67risvrw          1525
    #define prmrissubrole67risvrw       1526
    #define prmrisstationtype67risvrw   1527
    #define prmrisapproachid67risvrw    1528
    #define prmrislaneid67risvrw_1      1529
    #define prmrto68bus                 1530 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1531 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1532 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1533 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1534 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1535 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1536 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1537 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1538 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1539 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1540 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1541
    #define prmrisend68risov            1542
    #define prmriseta68risov            1543
    #define prmrisrole68risov           1544
    #define prmrissubrole68risov        1545
    #define prmrisstationtype68risov    1546
    #define prmrisapproachid68risov     1547
    #define prmrislaneid68risov_1       1548
    #define prmrislaneid68risov_2       1549
    #define prmrto68risvrw              1550 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1551 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1552 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1553 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1554 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1555
    #define prmrisend68risvrw           1556
    #define prmriseta68risvrw           1557
    #define prmrisrole68risvrw          1558
    #define prmrissubrole68risvrw       1559
    #define prmrisstationtype68risvrw   1560
    #define prmrisapproachid68risvrw    1561
    #define prmrislaneid68risvrw_1      1562
    #define prmrislaneid68risvrw_2      1563
    #define prmpriohd02                 1564 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1565 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1566 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1567 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1568
    #define prmrisend02hd               1569
    #define prmriseta02hd               1570
    #define prmrisrole02hd              1571
    #define prmrissubrole02hd           1572
    #define prmrisstationtype02hd       1573
    #define prmrisapproachid02hd        1574
    #define prmrislaneid02hd_1          1575
    #define prmrislaneid02hd_2          1576
    #define prmpriohd03                 1577 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1578 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1579 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1580 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd             1581
    #define prmrisend03hd               1582
    #define prmriseta03hd               1583
    #define prmrisrole03hd              1584
    #define prmrissubrole03hd           1585
    #define prmrisstationtype03hd       1586
    #define prmrisapproachid03hd        1587
    #define prmrislaneid03hd_1          1588
    #define prmpriohd05                 1589 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1590 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1591 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1592 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd             1593
    #define prmrisend05hd               1594
    #define prmriseta05hd               1595
    #define prmrisrole05hd              1596
    #define prmrissubrole05hd           1597
    #define prmrisstationtype05hd       1598
    #define prmrisapproachid05hd        1599
    #define prmrislaneid05hd_1          1600
    #define prmpriohd08                 1601 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1602 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1603 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1604 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd             1605
    #define prmrisend08hd               1606
    #define prmriseta08hd               1607
    #define prmrisrole08hd              1608
    #define prmrissubrole08hd           1609
    #define prmrisstationtype08hd       1610
    #define prmrisapproachid08hd        1611
    #define prmrislaneid08hd_1          1612
    #define prmrislaneid08hd_2          1613
    #define prmpriohd09                 1614 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1615 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1616 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1617 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd             1618
    #define prmrisend09hd               1619
    #define prmriseta09hd               1620
    #define prmrisrole09hd              1621
    #define prmrissubrole09hd           1622
    #define prmrisstationtype09hd       1623
    #define prmrisapproachid09hd        1624
    #define prmrislaneid09hd_1          1625
    #define prmpriohd11                 1626 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1627 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1628 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1629 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd             1630
    #define prmrisend11hd               1631
    #define prmriseta11hd               1632
    #define prmrisrole11hd              1633
    #define prmrissubrole11hd           1634
    #define prmrisstationtype11hd       1635
    #define prmrisapproachid11hd        1636
    #define prmrislaneid11hd_1          1637
    #define prmpriohd61                 1638 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1639 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1640 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1641 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd             1642
    #define prmrisend61hd               1643
    #define prmriseta61hd               1644
    #define prmrisrole61hd              1645
    #define prmrissubrole61hd           1646
    #define prmrisstationtype61hd       1647
    #define prmrisapproachid61hd        1648
    #define prmrislaneid61hd_1          1649
    #define prmpriohd62                 1650 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1651 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1652 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1653 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd             1654
    #define prmrisend62hd               1655
    #define prmriseta62hd               1656
    #define prmrisrole62hd              1657
    #define prmrissubrole62hd           1658
    #define prmrisstationtype62hd       1659
    #define prmrisapproachid62hd        1660
    #define prmrislaneid62hd_1          1661
    #define prmrislaneid62hd_2          1662
    #define prmpriohd67                 1663 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1664 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1665 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1666 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd             1667
    #define prmrisend67hd               1668
    #define prmriseta67hd               1669
    #define prmrisrole67hd              1670
    #define prmrissubrole67hd           1671
    #define prmrisstationtype67hd       1672
    #define prmrisapproachid67hd        1673
    #define prmrislaneid67hd_1          1674
    #define prmpriohd68                 1675 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1676 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1677 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1678 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd             1679
    #define prmrisend68hd               1680
    #define prmriseta68hd               1681
    #define prmrisrole68hd              1682
    #define prmrissubrole68hd           1683
    #define prmrisstationtype68hd       1684
    #define prmrisapproachid68hd        1685
    #define prmrislaneid68hd_1          1686
    #define prmrislaneid68hd_2          1687
    #define prmkarsg02                  1688 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1689 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1690 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1691 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1692 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1693 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1694 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1695 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1696 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1697 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1698 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1699 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1700 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1701 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1702 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1703 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1704 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1705 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1706 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1707 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                    1708 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1                    1709 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1                    1710 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2                    1711 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2                    1712 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2                    1713 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3                    1714 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3                    1715 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3                    1716 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4                    1717 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4                    1718 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4                    1719 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5                    1720 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5                    1721 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5                    1722 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6                    1723 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6                    1724 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6                    1725 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg2_02                   1726 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03                   1727 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05                   1728 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08                   1729 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09                   1730 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11                   1731 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21                   1732 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22                   1733 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24                   1734 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26                   1735 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28                   1736 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61                   1737 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62                   1738 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67                   1739 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68                   1740 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81                   1741 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82                   1742 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84                   1743 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02                   1744 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03                   1745 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05                   1746 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08                   1747 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09                   1748 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11                   1749 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21                   1750 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22                   1751 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24                   1752 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26                   1753 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28                   1754 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61                   1755 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62                   1756 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67                   1757 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68                   1758 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81                   1759 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82                   1760 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84                   1761 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02                   1762 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03                   1763 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05                   1764 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08                   1765 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09                   1766 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11                   1767 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21                   1768 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22                   1769 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24                   1770 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26                   1771 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28                   1772 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61                   1773 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62                   1774 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67                   1775 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68                   1776 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81                   1777 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82                   1778 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84                   1779 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02                   1780 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03                   1781 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05                   1782 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08                   1783 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09                   1784 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11                   1785 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21                   1786 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22                   1787 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24                   1788 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26                   1789 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28                   1790 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61                   1791 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62                   1792 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67                   1793 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68                   1794 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81                   1795 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82                   1796 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84                   1797 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02                   1798 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03                   1799 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05                   1800 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08                   1801 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09                   1802 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11                   1803 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21                   1804 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22                   1805 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24                   1806 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26                   1807 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28                   1808 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61                   1809 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62                   1810 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67                   1811 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68                   1812 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81                   1813 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82                   1814 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84                   1815 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02                   1816 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03                   1817 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05                   1818 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08                   1819 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09                   1820 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11                   1821 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21                   1822 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22                   1823 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24                   1824 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26                   1825 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28                   1826 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61                   1827 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62                   1828 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67                   1829 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68                   1830 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81                   1831 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82                   1832 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84                   1833 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02          1834 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1835 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1836 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1837 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1838 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1839 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1840 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1841 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1842 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1843 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1844 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1845 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1846 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1847 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1848 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1849 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1850 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1851 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1852 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1853 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1854 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1855 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1856 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1857 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1858 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1859 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1860 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1861 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1862 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1863 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1864 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1865 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1            1866 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1            1867 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1            1868 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1            1869 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1            1870 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1871 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1872 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1873 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1874 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1875 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1876 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1877 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1878 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1879 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1880 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1881 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1882 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1883 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1884 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1885 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1886 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1887 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1888 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1889 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2         1890 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1         1891 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1         1892 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1         1893 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2         1894 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1         1895 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1         1896 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1          1897 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1          1898 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1          1899 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1          1900 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1          1901 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1          1902 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2          1903 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart32vtg1          1904 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg2          1905 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart33vtg1          1906 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg2          1907 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart34vtg1          1908 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg2          1909 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart38vtg1          1910 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg2          1911 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart61mveh1         1912 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart62mveh1         1913 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh2         1914 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart67mveh1         1915 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart68mveh1         1916 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh2         1917 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart81fts1          1918 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart82fts1          1919 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart84fts1          1920 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend02mveh1           1921 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2           1922 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1           1923 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1           1924 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1           1925 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2           1926 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1           1927 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1           1928 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1            1929 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1            1930 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend24fts1            1931 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend26fts1            1932 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend28fts1            1933 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend31vtg1            1934 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg2            1935 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend32vtg1            1936 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg2            1937 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend33vtg1            1938 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg2            1939 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend34vtg1            1940 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg2            1941 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend38vtg1            1942 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg2            1943 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend61mveh1           1944 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend62mveh1           1945 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh2           1946 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend67mveh1           1947 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend68mveh1           1948 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend68mveh2           1949 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend81fts1            1950 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    #define prmrisaend82fts1            1951 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    #define prmrisaend84fts1            1952 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisvstart02mveh1         1953 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2         1954 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1         1955 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1         1956 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1         1957 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2         1958 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1         1959 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1         1960 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1          1961 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1          1962 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart24fts1          1963 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvstart26fts1          1964 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart28fts1          1965 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart31vtg1          1966 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg2          1967 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart32vtg1          1968 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg2          1969 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart33vtg1          1970 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg2          1971 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart34vtg1          1972 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg2          1973 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart38vtg1          1974 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg2          1975 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart61mveh1         1976 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart62mveh1         1977 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh2         1978 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart67mveh1         1979 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart68mveh1         1980 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart68mveh2         1981 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart81fts1          1982 /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    #define prmrisvstart82fts1          1983 /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    #define prmrisvstart84fts1          1984 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvend02mveh1           1985 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2           1986 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1           1987 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1           1988 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1           1989 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2           1990 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1           1991 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1           1992 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1            1993 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1            1994 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1            1995 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1            1996 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1            1997 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1            1998 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2            1999 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend32vtg1            2000 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg2            2001 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend33vtg1            2002 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg2            2003 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend34vtg1            2004 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg2            2005 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend38vtg1            2006 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg2            2007 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend61mveh1           2008 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend62mveh1           2009 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh2           2010 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend67mveh1           2011 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend68mveh1           2012 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh2           2013 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend81fts1            2014 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend82fts1            2015 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend84fts1            2016 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmmkrgd24_3                2017 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2018 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2019 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2020 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2021 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2022 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2023 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2024 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2025 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2026 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2027 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2028 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2029 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2030 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2031 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2032 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09                2033 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09                2034 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11                2035 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2036 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2037 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2038 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2039 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2040 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                2041 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                2042 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog               2043 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               2044 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  2045 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  2046 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  2047 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  2048 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  2049 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  2050 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  2051 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  2052 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  2053 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  2054 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  2055 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  2056 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  2057 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  2058 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  2059 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  2060 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  2061 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  2062 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  2063 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  2064 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  2065 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  2066 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  2067 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   2068 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   2069 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   2070 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   2071 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   2072 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   2073 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   2074 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   2075 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   2076 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   2077 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   2078 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   2079 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   2080 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   2081 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   2082 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 2083 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   2084 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434                 2085 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26                   2086 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   2087 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   2088 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   2089 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   2090 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   2091 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   2092 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   2093 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 2094 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   2095 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38                   2096 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   2097 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   2098 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   2099 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   2100 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   2101 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   2102 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   2103 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   2104 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   2105 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   2106 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   2107 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   2108 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   2109 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   2110 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmstarprogdef              2111 /* Default star programma                                                                                                         */
    #define prmttxconfidence15          2112
    #define prmlatencyminendsg          2113
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              2114 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               2115 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               2116 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     2117
#else
    #define PRMMAX1                     2114
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02bus 0
    #define prioFC02risov 1
    #define prioFC02risvrw 2
    #define prioFC03bus 3
    #define prioFC03risov 4
    #define prioFC03risvrw 5
    #define prioFC05bus 6
    #define prioFC05risov 7
    #define prioFC05risvrw 8
    #define prioFC08bus 9
    #define prioFC08risov 10
    #define prioFC08risvrw 11
    #define prioFC09bus 12
    #define prioFC09risov 13
    #define prioFC09risvrw 14
    #define prioFC11bus 15
    #define prioFC11risov 16
    #define prioFC11risvrw 17
    #define prioFC22fiets 18
    #define prioFC31fietsprio 19
    #define prioFC32fietsprio 20
    #define prioFC61bus 21
    #define prioFC61risov 22
    #define prioFC61risvrw 23
    #define prioFC62bus 24
    #define prioFC62risov 25
    #define prioFC62risvrw 26
    #define prioFC67bus 27
    #define prioFC67risov 28
    #define prioFC67risvrw 29
    #define prioFC68bus 30
    #define prioFC68risov 31
    #define prioFC68risvrw 32
    #define hdFC02 33
    #define hdFC03 34
    #define hdFC05 35
    #define hdFC08 36
    #define hdFC09 37
    #define hdFC11 38
    #define hdFC61 39
    #define hdFC62 40
    #define hdFC67 41
    #define hdFC68 42
    #define prioFCMAX 43

/* modulen */
/* ------- */
    #define MLMAX1 5 /* aantal modulen */

/* signaalplannen */
/* -------------- */
    #define PLMAX1 3 /* aantal signaalplannen */

/* starre programma's */
/* ------------------ */
    #define STAR1 0 /* programma star01 */
    #define STARMAX 1 /* aantal starre programmas */

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

