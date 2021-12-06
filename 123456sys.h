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
 * 1.0.0    14-11-2021   Cyril       Nieuwe versie TLCGen (0.10.4.0)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.0.0 20211114"
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
    #define schfileFile68af           43 /* File ingreep File68af toepassen                                       */
    #define schfiledoserenFile68af    44 /* Toepassen doseerpercentages voor fileingreep File68af                 */
    #define schfileFile68afparstrook  45 /* Parallele file meldingen per strook file ingreep File68af             */
    #define schbmfix                  46 /* Bijkomen tijdens fixatie mogelijk                                     */
    #define schaltghst02              47 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen      */
    #define schaltghst03              48 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen      */
    #define schaltghst05              49 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen      */
    #define schaltghst08              50 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen      */
    #define schaltghst09              51 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen      */
    #define schaltghst11              52 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen      */
    #define schaltghst21              53 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen      */
    #define schaltghst2232            54 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen */
    #define schaltghst2434            55 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen */
    #define schaltghst81              56 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen      */
    #define schaltghst88              57 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen      */
    #define schaltghst3384            58 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst68              59 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen      */
    #define schaltghst82              60 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen      */
    #define schaltghst67              61 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen      */
    #define schaltghst62              62 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen      */
    #define schaltghst61              63 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen      */
    #define schaltghst38              64 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen      */
    #define schaltghst31              65 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen      */
    #define schaltghst28              66 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen      */
    #define schaltghst26              67 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen      */
    #define schinstprm                68 /* Eenmalig kopieren signaalplan parameters naar signaalplannen          */
    #define schinst                   69 /* Eenmalig instellen signaalplannen na wijziging                        */
    #define schvaml                   70 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)          */
    #define schvar                    71 /* VA regelen aan of uit                                                 */
    #define scharh                    72 /* Toestaan alternatieven voor hoofdrichtingen                           */
    #define schvarstreng              73 /* VA regelen aan of uit voor gehele streng                              */
    #define schpervardef              74 /* VA regelen periode default                                            */
    #define schpervar1                75 /* VA regelen periode dag                                                */
    #define schpervar2                76 /* VA regelen periode ochtend                                            */
    #define schpervar3                77 /* VA regelen periode avond                                              */
    #define schpervar4                78 /* VA regelen periode koopavond                                          */
    #define schpervar5                79 /* VA regelen periode weekend                                            */
    #define schpervar6                80 /* VA regelen periode reserve                                            */
    #define schperarhdef              81 /* Alternatieven voor hoofdrichtingen periode default                    */
    #define schperarh1                82 /* Alternatieven voor hoofdrichtingen periode dag                        */
    #define schperarh2                83 /* Alternatieven voor hoofdrichtingen periode ochtend                    */
    #define schperarh3                84 /* Alternatieven voor hoofdrichtingen periode avond                      */
    #define schperarh4                85 /* Alternatieven voor hoofdrichtingen periode koopavond                  */
    #define schperarh5                86 /* Alternatieven voor hoofdrichtingen periode weekend                    */
    #define schperarh6                87 /* Alternatieven voor hoofdrichtingen periode reserve                    */
    #define schovpriople              88 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                */
    #define schma0261                 89 /* Meeaanvraag van 02 naar 61 actief                                     */
    #define schma0262                 90 /* Meeaanvraag van 02 naar 62 actief                                     */
    #define schma0521                 91 /* Meeaanvraag van 05 naar 21 actief                                     */
    #define schma0522                 92 /* Meeaanvraag van 05 naar 22 actief                                     */
    #define schma0532                 93 /* Meeaanvraag van 05 naar 32 actief                                     */
    #define schma0868                 94 /* Meeaanvraag van 08 naar 68 actief                                     */
    #define schma1126                 95 /* Meeaanvraag van 11 naar 26 actief                                     */
    #define schma1168                 96 /* Meeaanvraag van 11 naar 68 actief                                     */
    #define schma2221                 97 /* Meeaanvraag van 22 naar 21 actief                                     */
    #define schma3122                 98 /* Meeaanvraag van 31 naar 22 actief                                     */
    #define schma3132                 99 /* Meeaanvraag van 31 naar 32 actief                                     */
    #define schma3222                100 /* Meeaanvraag van 32 naar 22 actief                                     */
    #define schma3231                101 /* Meeaanvraag van 32 naar 31 actief                                     */
    #define schma3324                102 /* Meeaanvraag van 33 naar 24 actief                                     */
    #define schma3334                103 /* Meeaanvraag van 33 naar 34 actief                                     */
    #define schma3384                104 /* Meeaanvraag van 33 naar 84 actief                                     */
    #define schma3424                105 /* Meeaanvraag van 34 naar 24 actief                                     */
    #define schma3433                106 /* Meeaanvraag van 34 naar 33 actief                                     */
    #define schma3484                107 /* Meeaanvraag van 34 naar 84 actief                                     */
    #define schma8281                108 /* Meeaanvraag van 82 naar 81 actief                                     */
    #define schmv02                  109 /* Meeverlengen fase 02                                                  */
    #define schmv03                  110 /* Meeverlengen fase 03                                                  */
    #define schmv05                  111 /* Meeverlengen fase 05                                                  */
    #define schmv08                  112 /* Meeverlengen fase 08                                                  */
    #define schmv09                  113 /* Meeverlengen fase 09                                                  */
    #define schmv11                  114 /* Meeverlengen fase 11                                                  */
    #define schmv21                  115 /* Meeverlengen fase 21                                                  */
    #define schmv22                  116 /* Meeverlengen fase 22                                                  */
    #define schmv24                  117 /* Meeverlengen fase 24                                                  */
    #define schmv26                  118 /* Meeverlengen fase 26                                                  */
    #define schmv28                  119 /* Meeverlengen fase 28                                                  */
    #define schmv31                  120 /* Meeverlengen fase 31                                                  */
    #define schmv32                  121 /* Meeverlengen fase 32                                                  */
    #define schmv33                  122 /* Meeverlengen fase 33                                                  */
    #define schmv34                  123 /* Meeverlengen fase 34                                                  */
    #define schmv38                  124 /* Meeverlengen fase 38                                                  */
    #define schmv61                  125 /* Meeverlengen fase 61                                                  */
    #define schmv62                  126 /* Meeverlengen fase 62                                                  */
    #define schmv67                  127 /* Meeverlengen fase 67                                                  */
    #define schmv68                  128 /* Meeverlengen fase 68                                                  */
    #define schmv81                  129 /* Meeverlengen fase 81                                                  */
    #define schmv82                  130 /* Meeverlengen fase 82                                                  */
    #define schmv84                  131 /* Meeverlengen fase 84                                                  */
    #define schmlprm                 132 /* Toepassen parametriseerbare modulestructuur                           */
    #define schovstipt02bus          133 /* Geconditioneerde prioteit voor OV bij 02 Bus                          */
    #define schovstipt03bus          134 /* Geconditioneerde prioteit voor OV bij 03 Bus                          */
    #define schovstipt05bus          135 /* Geconditioneerde prioteit voor OV bij 05 Bus                          */
    #define schovstipt08bus          136 /* Geconditioneerde prioteit voor OV bij 08 Bus                          */
    #define schovstipt09bus          137 /* Geconditioneerde prioteit voor OV bij 09 Bus                          */
    #define schovstipt11bus          138 /* Geconditioneerde prioteit voor OV bij 11 Bus                          */
    #define schovstipt61bus          139 /* Geconditioneerde prioteit voor OV bij 61 Bus                          */
    #define schovstipt62bus          140 /* Geconditioneerde prioteit voor OV bij 62 Bus                          */
    #define schovstipt67bus          141 /* Geconditioneerde prioteit voor OV bij 67 Bus                          */
    #define schovstipt68bus          142 /* Geconditioneerde prioteit voor OV bij 68 Bus                          */
    #define schcovuber               143 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                        */
    #define schcheckdstype           144 /* Check type DSI bericht bij VECOM                                      */
    #define schprioin02buskar        145 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02buskar       146 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02bus          147 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risovris      148 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02risovris     149 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02risov        150 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risvrwris     151 /* Inmelden 02 via Vrachtwagen toestaan                                  */
    #define schpriouit02risvrwris    152 /* Uitmelden 02 via Vrachtwagen toestaan                                 */
    #define schupinagb02risvrw       153 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin03buskar        154 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03buskar       155 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03bus          156 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risovris      157 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03risovris     158 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03risov        159 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risvrwris     160 /* Inmelden 03 via Vrachtwagen toestaan                                  */
    #define schpriouit03risvrwris    161 /* Uitmelden 03 via Vrachtwagen toestaan                                 */
    #define schupinagb03risvrw       162 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin05buskar        163 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05buskar       164 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05bus          165 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risovris      166 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05risovris     167 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05risov        168 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risvrwris     169 /* Inmelden 05 via Vrachtwagen toestaan                                  */
    #define schpriouit05risvrwris    170 /* Uitmelden 05 via Vrachtwagen toestaan                                 */
    #define schupinagb05risvrw       171 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin08buskar        172 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08buskar       173 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08bus          174 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risovris      175 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08risovris     176 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08risov        177 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risvrwris     178 /* Inmelden 08 via Vrachtwagen toestaan                                  */
    #define schpriouit08risvrwris    179 /* Uitmelden 08 via Vrachtwagen toestaan                                 */
    #define schupinagb08risvrw       180 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin09buskar        181 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09buskar       182 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09bus          183 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risovris      184 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09risovris     185 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09risov        186 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risvrwris     187 /* Inmelden 09 via Vrachtwagen toestaan                                  */
    #define schpriouit09risvrwris    188 /* Uitmelden 09 via Vrachtwagen toestaan                                 */
    #define schupinagb09risvrw       189 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin11buskar        190 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11buskar       191 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11bus          192 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risovris      193 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11risovris     194 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11risov        195 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risvrwris     196 /* Inmelden 11 via Vrachtwagen toestaan                                  */
    #define schpriouit11risvrwris    197 /* Uitmelden 11 via Vrachtwagen toestaan                                 */
    #define schupinagb11risvrw       198 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin22fietsfiets    199 /* Inmelden 22 via Fiets toestaan                                        */
    #define schpriouit22fietsfiets   200 /* Uitmelden 22 via Fiets toestaan                                       */
    #define schupinagb22fiets        201 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22         */
    #define schupinagb31fietsprio    202 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 31         */
    #define schupinagb32fietsprio    203 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 32         */
    #define schprioin61buskar        204 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61buskar       205 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61bus          206 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risovris      207 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61risovris     208 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61risov        209 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risvrwris     210 /* Inmelden 61 via Vrachtwagen toestaan                                  */
    #define schpriouit61risvrwris    211 /* Uitmelden 61 via Vrachtwagen toestaan                                 */
    #define schupinagb61risvrw       212 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin62buskar        213 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62buskar       214 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62bus          215 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risovris      216 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62risovris     217 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62risov        218 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risvrwris     219 /* Inmelden 62 via Vrachtwagen toestaan                                  */
    #define schpriouit62risvrwris    220 /* Uitmelden 62 via Vrachtwagen toestaan                                 */
    #define schupinagb62risvrw       221 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin67buskar        222 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67buskar       223 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67bus          224 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risovris      225 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67risovris     226 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67risov        227 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risvrwris     228 /* Inmelden 67 via Vrachtwagen toestaan                                  */
    #define schpriouit67risvrwris    229 /* Uitmelden 67 via Vrachtwagen toestaan                                 */
    #define schupinagb67risvrw       230 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin68buskar        231 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68buskar       232 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68bus          233 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risovris      234 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68risovris     235 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68risov        236 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risvrwris     237 /* Inmelden 68 via Vrachtwagen toestaan                                  */
    #define schpriouit68risvrwris    238 /* Uitmelden 68 via Vrachtwagen toestaan                                 */
    #define schupinagb68risvrw       239 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schupinagbhd02           240 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02         */
    #define schhdin02kar             241 /* Inmelden 02 via KAR HD toestaan                                       */
    #define schhduit02kar            242 /* Uitmelden 02 via KAR HD toestaan                                      */
    #define schchecksirene02         243 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                */
    #define schhdin02ris             244 /* Inmelden 02 via RIS HD toestaan                                       */
    #define schhduit02ris            245 /* Uitmelden 02 via RIS HD toestaan                                      */
    #define schupinagbhd03           246 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03         */
    #define schhdin03kar             247 /* Inmelden 03 via KAR HD toestaan                                       */
    #define schhduit03kar            248 /* Uitmelden 03 via KAR HD toestaan                                      */
    #define schchecksirene03         249 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                */
    #define schhdin03ris             250 /* Inmelden 03 via RIS HD toestaan                                       */
    #define schhduit03ris            251 /* Uitmelden 03 via RIS HD toestaan                                      */
    #define schupinagbhd05           252 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05         */
    #define schhdin05kar             253 /* Inmelden 05 via KAR HD toestaan                                       */
    #define schhduit05kar            254 /* Uitmelden 05 via KAR HD toestaan                                      */
    #define schchecksirene05         255 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                */
    #define schhdin05ris             256 /* Inmelden 05 via RIS HD toestaan                                       */
    #define schhduit05ris            257 /* Uitmelden 05 via RIS HD toestaan                                      */
    #define schupinagbhd08           258 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08         */
    #define schhdin08kar             259 /* Inmelden 08 via KAR HD toestaan                                       */
    #define schhduit08kar            260 /* Uitmelden 08 via KAR HD toestaan                                      */
    #define schchecksirene08         261 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                */
    #define schhdin08ris             262 /* Inmelden 08 via RIS HD toestaan                                       */
    #define schhduit08ris            263 /* Uitmelden 08 via RIS HD toestaan                                      */
    #define schupinagbhd09           264 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09         */
    #define schhdin09kar             265 /* Inmelden 09 via KAR HD toestaan                                       */
    #define schhduit09kar            266 /* Uitmelden 09 via KAR HD toestaan                                      */
    #define schchecksirene09         267 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                */
    #define schhdin09ris             268 /* Inmelden 09 via RIS HD toestaan                                       */
    #define schhduit09ris            269 /* Uitmelden 09 via RIS HD toestaan                                      */
    #define schupinagbhd11           270 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11         */
    #define schhdin11kar             271 /* Inmelden 11 via KAR HD toestaan                                       */
    #define schhduit11kar            272 /* Uitmelden 11 via KAR HD toestaan                                      */
    #define schchecksirene11         273 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                */
    #define schhdin11ris             274 /* Inmelden 11 via RIS HD toestaan                                       */
    #define schhduit11ris            275 /* Uitmelden 11 via RIS HD toestaan                                      */
    #define schupinagbhd61           276 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61         */
    #define schhdin61kar             277 /* Inmelden 61 via KAR HD toestaan                                       */
    #define schhduit61kar            278 /* Uitmelden 61 via KAR HD toestaan                                      */
    #define schchecksirene61         279 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                */
    #define schhdin61ris             280 /* Inmelden 61 via RIS HD toestaan                                       */
    #define schhduit61ris            281 /* Uitmelden 61 via RIS HD toestaan                                      */
    #define schupinagbhd62           282 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62         */
    #define schhdin62kar             283 /* Inmelden 62 via KAR HD toestaan                                       */
    #define schhduit62kar            284 /* Uitmelden 62 via KAR HD toestaan                                      */
    #define schchecksirene62         285 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                */
    #define schhdin62ris             286 /* Inmelden 62 via RIS HD toestaan                                       */
    #define schhduit62ris            287 /* Uitmelden 62 via RIS HD toestaan                                      */
    #define schupinagbhd67           288 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67         */
    #define schhdin67kar             289 /* Inmelden 67 via KAR HD toestaan                                       */
    #define schhduit67kar            290 /* Uitmelden 67 via KAR HD toestaan                                      */
    #define schchecksirene67         291 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                */
    #define schhdin67ris             292 /* Inmelden 67 via RIS HD toestaan                                       */
    #define schhduit67ris            293 /* Uitmelden 67 via RIS HD toestaan                                      */
    #define schupinagbhd68           294 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68         */
    #define schhdin68kar             295 /* Inmelden 68 via KAR HD toestaan                                       */
    #define schhduit68kar            296 /* Uitmelden 68 via KAR HD toestaan                                      */
    #define schchecksirene68         297 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                */
    #define schhdin68ris             298 /* Inmelden 68 via RIS HD toestaan                                       */
    #define schhduit68ris            299 /* Uitmelden 68 via RIS HD toestaan                                      */
    #define schrisgeencheckopsg      300 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen           */
    #define schrisaanvraag           301 /* Globaal in of uitschakelen aanvragen via RIS                          */
    #define schrisverlengen          302 /* Globaal in of uitschakelen verlengen via RIS                          */
    #define schrgadd24_3             303 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2            */
    #define schrgv                   304 /* RoBuGrover aan of uit                                                 */
    #define schrgv_snel              305 /* RoBuGrover versneld ophogen of verlagen                               */
    #define schca02                  306 /* Cyclische aanvraag fase 02                                            */
    #define schca03                  307 /* Cyclische aanvraag fase 03                                            */
    #define schca05                  308 /* Cyclische aanvraag fase 05                                            */
    #define schca08                  309 /* Cyclische aanvraag fase 08                                            */
    #define schca09                  310 /* Cyclische aanvraag fase 09                                            */
    #define schca11                  311 /* Cyclische aanvraag fase 11                                            */
    #define schca21                  312 /* Cyclische aanvraag fase 21                                            */
    #define schca22                  313 /* Cyclische aanvraag fase 22                                            */
    #define schca24                  314 /* Cyclische aanvraag fase 24                                            */
    #define schca26                  315 /* Cyclische aanvraag fase 26                                            */
    #define schca28                  316 /* Cyclische aanvraag fase 28                                            */
    #define schca31                  317 /* Cyclische aanvraag fase 31                                            */
    #define schca32                  318 /* Cyclische aanvraag fase 32                                            */
    #define schca33                  319 /* Cyclische aanvraag fase 33                                            */
    #define schca34                  320 /* Cyclische aanvraag fase 34                                            */
    #define schca38                  321 /* Cyclische aanvraag fase 38                                            */
    #define schca61                  322 /* Cyclische aanvraag fase 61                                            */
    #define schca62                  323 /* Cyclische aanvraag fase 62                                            */
    #define schca67                  324 /* Cyclische aanvraag fase 67                                            */
    #define schca68                  325 /* Cyclische aanvraag fase 68                                            */
    #define schca81                  326 /* Cyclische aanvraag fase 81                                            */
    #define schca82                  327 /* Cyclische aanvraag fase 82                                            */
    #define schca84                  328 /* Cyclische aanvraag fase 84                                            */
    #define schvg02_4a               329 /* Veiligheidsgroen detector 02_4a fase 02                               */
    #define schvg02_4b               330 /* Veiligheidsgroen detector 02_4b fase 02                               */
    #define schvg08_4a               331 /* Veiligheidsgroen detector 08_4a fase 08                               */
    #define schvg08_4b               332 /* Veiligheidsgroen detector 08_4b fase 08                               */
    #define schvg11_4                333 /* Veiligheidsgroen detector 11_4 fase 11                                */
    #define schaltg02                334 /* Alternatieve realisatie toestaan fase 02                              */
    #define schaltg03                335 /* Alternatieve realisatie toestaan fase 03                              */
    #define schaltg05                336 /* Alternatieve realisatie toestaan fase 05                              */
    #define schaltg08                337 /* Alternatieve realisatie toestaan fase 08                              */
    #define schaltg09                338 /* Alternatieve realisatie toestaan fase 09                              */
    #define schaltg11                339 /* Alternatieve realisatie toestaan fase 11                              */
    #define schaltg21                340 /* Alternatieve realisatie toestaan fase 21                              */
    #define schaltg2232              341 /* Alternatieve realisatie toestaan fasen 22, 32                         */
    #define schaltg2434              342 /* Alternatieve realisatie toestaan fasen 24, 34                         */
    #define schaltg26                343 /* Alternatieve realisatie toestaan fase 26                              */
    #define schaltg28                344 /* Alternatieve realisatie toestaan fase 28                              */
    #define schaltg31                345 /* Alternatieve realisatie toestaan fase 31                              */
    #define schaltg3384              346 /* Alternatieve realisatie toestaan fasen 33, 84                         */
    #define schaltg38                347 /* Alternatieve realisatie toestaan fase 38                              */
    #define schaltg61                348 /* Alternatieve realisatie toestaan fase 61                              */
    #define schaltg62                349 /* Alternatieve realisatie toestaan fase 62                              */
    #define schaltg67                350 /* Alternatieve realisatie toestaan fase 67                              */
    #define schaltg68                351 /* Alternatieve realisatie toestaan fase 68                              */
    #define schaltg81                352 /* Alternatieve realisatie toestaan fase 81                              */
    #define schaltg82                353 /* Alternatieve realisatie toestaan fase 82                              */
    #define schwg02                  354 /* Wachtstand groen fase 02                                              */
    #define schwg03                  355 /* Wachtstand groen fase 03                                              */
    #define schwg05                  356 /* Wachtstand groen fase 05                                              */
    #define schwg08                  357 /* Wachtstand groen fase 08                                              */
    #define schwg09                  358 /* Wachtstand groen fase 09                                              */
    #define schwg11                  359 /* Wachtstand groen fase 11                                              */
    #define schwg21                  360 /* Wachtstand groen fase 21                                              */
    #define schwg22                  361 /* Wachtstand groen fase 22                                              */
    #define schwg24                  362 /* Wachtstand groen fase 24                                              */
    #define schwg26                  363 /* Wachtstand groen fase 26                                              */
    #define schwg28                  364 /* Wachtstand groen fase 28                                              */
    #define schwg31                  365 /* Wachtstand groen fase 31                                              */
    #define schwg32                  366 /* Wachtstand groen fase 32                                              */
    #define schwg33                  367 /* Wachtstand groen fase 33                                              */
    #define schwg34                  368 /* Wachtstand groen fase 34                                              */
    #define schwg38                  369 /* Wachtstand groen fase 38                                              */
    #define schwg61                  370 /* Wachtstand groen fase 61                                              */
    #define schwg62                  371 /* Wachtstand groen fase 62                                              */
    #define schwg67                  372 /* Wachtstand groen fase 67                                              */
    #define schwg68                  373 /* Wachtstand groen fase 68                                              */
    #define schwg81                  374 /* Wachtstand groen fase 81                                              */
    #define schwg82                  375 /* Wachtstand groen fase 82                                              */
    #define schwg84                  376 /* Wachtstand groen fase 84                                              */
    #define schstar                  377 /* Inschakelen star programma                                            */
    #define schgs2232                378 /* Schakelbare gelijkstart tussen fase 32 en 22                          */
    #define schgs2434                379 /* Schakelbare gelijkstart tussen fase 34 en 24                          */
    #define schgs3384                380 /* Schakelbare gelijkstart tussen fase 84 en 33                          */
    #define schlos32_1               381 /* Toestaan los realiseren fase 32                                       */
    #define schlos32_2               382 /* Toestaan los realiseren fase 32                                       */
    #define schlos31_1               383 /* Toestaan los realiseren fase 31                                       */
    #define schlos31_2               384 /* Toestaan los realiseren fase 31                                       */
    #define schlos34_1               385 /* Toestaan los realiseren fase 34                                       */
    #define schlos34_2               386 /* Toestaan los realiseren fase 34                                       */
    #define schlos33_1               387 /* Toestaan los realiseren fase 33                                       */
    #define schlos33_2               388 /* Toestaan los realiseren fase 33                                       */
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
    #define prmttxconfidence15            23
    #define prmlatencyminendsg            24
    #define prmfb                         25 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                         26 /* Versiebeheer xx                                                                                                                */
    #define prmyy                         27 /* Versiebeheer yy                                                                                                                */
    #define prmzz                         28 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02           29
    #define prmovmmindergroen_02          30
    #define prmovmextragroen_03           31
    #define prmovmmindergroen_03          32
    #define prmovmextragroen_05           33
    #define prmovmmindergroen_05          34
    #define prmovmextragroen_08           35
    #define prmovmmindergroen_08          36
    #define prmovmextragroen_09           37
    #define prmovmmindergroen_09          38
    #define prmovmextragroen_11           39
    #define prmovmmindergroen_11          40
    #define prmovmextragroen_61           41
    #define prmovmmindergroen_61          42
    #define prmovmextragroen_62           43
    #define prmovmmindergroen_62          44
    #define prmovmextragroen_67           45
    #define prmovmmindergroen_67          46
    #define prmovmextragroen_68           47
    #define prmovmmindergroen_68          48
    #define prmaltb02                     49 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03                     50 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05                     51 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08                     52 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09                     53 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11                     54 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21                     55 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22                     56 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24                     57 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26                     58 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28                     59 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31                     60 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32                     61 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33                     62 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34                     63 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38                     64 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61                     65 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62                     66 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67                     67 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68                     68 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81                     69 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82                     70 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84                     71 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a                    72 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b                    73 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a                    74 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b                    75 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a                    76 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b                    77 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a                    78 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b                    79 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1                     80 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2                     81 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1                     82 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2                     83 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a                    84 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b                    85 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a                    86 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b                    87 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a                    88 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b                    89 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a                    90 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b                    91 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1                     92 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2                     93 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3                     94 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1                     95 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2                     96 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3                     97 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4                     98 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                      99 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21                     100 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1                    101 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22                     102 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1                    103 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2                    104 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3                    105 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24                     106 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261                     107 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26                     108 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1                    109 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2                    110 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28                     111 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a                    112 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b                    113 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a                    114 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b                    115 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a                    116 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b                    117 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a                    118 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b                    119 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a                    120 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b                    121 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1                    122 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2                    123 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a                   124 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b                   125 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a                   126 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b                   127 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1                    128 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2                    129 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a                   130 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b                   131 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a                   132 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b                   133 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a                   134 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b                   135 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1                    136 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81                     137 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1                    138 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82                     139 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1                    140 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84                     141 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a                   142 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b                   143 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a                   144 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b                   145 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a                   146 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b                   147 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a                   148 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b                   149 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1                    150 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2                    151 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1                    152 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2                    153 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a                   154 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b                   155 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a                   156 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b                   157 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a                   158 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b                   159 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a                   160 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b                   161 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1                    162 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2                    163 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3                    164 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1                    165 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2                    166 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3                    167 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4                    168 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211                     169 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1                    170 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1                    171 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2                    172 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3                    173 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261                     174 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1                    175 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2                    176 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1                    177 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2                    178 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a                   179 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b                   180 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a                   181 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b                   182 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1                    183 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2                    184 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a                   185 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b                   186 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a                   187 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b                   188 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a                   189 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b                   190 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1                    191 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1                    192 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1                    193 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc02                    194 /* Percentage groentijd fase 02 bij defect kop en lange lus                                                                       */
    #define prmperc03                    195 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05                    196 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08                    197 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09                    198 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11                    199 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61                    200 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62                    201 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67                    202 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68                    203 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08           204 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11           205 /* Doseerpercentage 11                                                                                                            */
    #define prmaltphst02                 206 /* Alternatieve ruimte fase 02 tijdens halfstar regelen                                                                           */
    #define prmaltphst03                 207 /* Alternatieve ruimte fase 03 tijdens halfstar regelen                                                                           */
    #define prmaltphst05                 208 /* Alternatieve ruimte fase 05 tijdens halfstar regelen                                                                           */
    #define prmaltphst08                 209 /* Alternatieve ruimte fase 08 tijdens halfstar regelen                                                                           */
    #define prmaltphst09                 210 /* Alternatieve ruimte fase 09 tijdens halfstar regelen                                                                           */
    #define prmaltphst11                 211 /* Alternatieve ruimte fase 11 tijdens halfstar regelen                                                                           */
    #define prmaltphst21                 212 /* Alternatieve ruimte fase 21 tijdens halfstar regelen                                                                           */
    #define prmaltphst2232               213 /* Alternatieve ruimte fasen 22, 32 tijdens halfstar regelen                                                                      */
    #define prmaltphst2434               214 /* Alternatieve ruimte fasen 24, 34 tijdens halfstar regelen                                                                      */
    #define prmaltphst81                 215 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 216 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst3384               217 /* Alternatieve ruimte fasen 33, 84 tijdens halfstar regelen                                                                      */
    #define prmaltphst68                 218 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst82                 219 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 220 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 221 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 222 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst38                 223 /* Alternatieve ruimte fase 38 tijdens halfstar regelen                                                                           */
    #define prmaltphst31                 224 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmaltphst28                 225 /* Alternatieve ruimte fase 28 tijdens halfstar regelen                                                                           */
    #define prmaltphst26                 226 /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    #define prmpriohst02bus              227 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risov            228 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risvrw           229 /* Prioriteit fase 02 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst03bus              230 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risov            231 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risvrw           232 /* Prioriteit fase 03 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst05bus              233 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risov            234 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risvrw           235 /* Prioriteit fase 05 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst08bus              236 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risov            237 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risvrw           238 /* Prioriteit fase 08 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst09bus              239 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risov            240 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risvrw           241 /* Prioriteit fase 09 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst11bus              242 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risov            243 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risvrw           244 /* Prioriteit fase 11 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst22fiets            245 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst31fietsprio        246 /* Prioriteit fase 31 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst32fietsprio        247 /* Prioriteit fase 32 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61bus              248 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            249 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           250 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62bus              251 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            252 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           253 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67bus              254 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            255 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           256 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68bus              257 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            258 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           259 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmnatxdhst02bus             260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst31fietsprio       279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 31                                                                */
    #define prmnatxdhst32fietsprio       280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 32                                                                */
    #define prmnatxdhst61bus             281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          283 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             284 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           285 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          286 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             287 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           288 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          289 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             290 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           291 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          292 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                293 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                294 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                295 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                296 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                297 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                298 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                299 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                300 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                301 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                302 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                303 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                304 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                305 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                306 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                307 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                308 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                309 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                310 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                311 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                312 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                313 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                314 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                315 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                316 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                317 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                318 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                319 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                320 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                321 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                322 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                323 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                324 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                325 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                326 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                327 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                328 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                329 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                330 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                331 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                332 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                333 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                334 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                335 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                336 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                337 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                338 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                339 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                340 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                341 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                342 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                343 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                344 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                345 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                346 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                347 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                348 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                349 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                350 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                351 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                352 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                353 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                354 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                355 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                356 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                357 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                358 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                359 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                360 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                361 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                362 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                363 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                364 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                365 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                366 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                367 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                368 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                369 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                370 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                371 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                372 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                373 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                374 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                375 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                376 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                377 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                378 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                379 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                380 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                381 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                382 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                383 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                384 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                385 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                386 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                387 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                388 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                389 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                390 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                391 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                392 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                393 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                394 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                395 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                396 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                397 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                398 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                399 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                400 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                401 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                402 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                403 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                404 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                405 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                406 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                407 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                408 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                409 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                410 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                411 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                412 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                413 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                414 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                415 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                416 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                417 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                418 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                419 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                420 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                421 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                422 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                423 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                424 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                425 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                426 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                427 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                428 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                429 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                430 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                431 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                432 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                433 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                434 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                435 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                436 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                437 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                438 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                439 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                440 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                441 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                442 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                443 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                444 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                445 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                446 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                447 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                448 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                449 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                450 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                451 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                452 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                453 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                454 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                455 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                456 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                457 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                458 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                459 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                460 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                461 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                462 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                463 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                464 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                465 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                466 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                467 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                468 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                469 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                470 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                471 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                472 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                473 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                474 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                475 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                476 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                477 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                478 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                479 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                480 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                481 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                482 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                483 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                484 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                485 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                486 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                487 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                488 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                489 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                490 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                491 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                492 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                493 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                494 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                495 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                496 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                497 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                498 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                499 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                500 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                501 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                502 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                503 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                504 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                505 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                506 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                507 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                508 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                509 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                510 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                511 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                512 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                513 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                514 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                515 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                516 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                517 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                518 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                519 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                520 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                521 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                522 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                523 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                524 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                525 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                526 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                527 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                528 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                529 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                530 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                531 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                532 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                533 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                534 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                535 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                536 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                537 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                538 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                539 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                540 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                541 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                542 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                543 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                544 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                545 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                546 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                547 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                548 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                549 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                550 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                551 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                552 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                553 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                554 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                555 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                556 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                557 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                558 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                559 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                560 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                561 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                562 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                563 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                564 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                565 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                566 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                567 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                568 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                569 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                570 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                571 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                572 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                573 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                574 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                575 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                576 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                577 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                578 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                579 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                580 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                581 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                582 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                583 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                584 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                585 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                586 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                587 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                588 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                589 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                590 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                591 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                592 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                593 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                594 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                595 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                596 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                597 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                598 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                599 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                600 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                601 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                602 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                603 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                604 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                605 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                606 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                607 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                608 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                609 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                610 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                611 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                612 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                613 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                614 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                615 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                616 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                617 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                618 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                619 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                620 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                621 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                622 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                623 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                624 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                625 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                626 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                627 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                628 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                629 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                630 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                631 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                632 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                633 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                634 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                635 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                636 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                637 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                638 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                639 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                640 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                641 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                642 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                643 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                644 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                645 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                646 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                647 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                648 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                649 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                650 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                651 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                652 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                653 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                654 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                655 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                656 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                657 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                658 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                659 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                660 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                661 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                662 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                663 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                664 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                665 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                666 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                667 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                668 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                669 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                670 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                671 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                672 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                673 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                674 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                675 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                676 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                677 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                678 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                679 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                680 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                681 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                682 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                683 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                684 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                685 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                686 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                687 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                688 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                689 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                690 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                691 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                692 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                693 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                694 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                695 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                696 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                697 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                698 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                699 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                700 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                701 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                702 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                703 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                704 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                705 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                706 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                707 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                708 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                709 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                710 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                711 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                712 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                713 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                714 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                715 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                716 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                717 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                718 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                719 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                720 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                721 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                722 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                723 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                724 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                725 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                726 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                727 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                728 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                729 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                730 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                731 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                732 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                733 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                734 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                735 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                736 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                737 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                738 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                739 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                740 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                741 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                742 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                743 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                744 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                745 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                746 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                747 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                748 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                749 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                750 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                751 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                752 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                753 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                754 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                755 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                756 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                757 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                758 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                759 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                760 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                761 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                762 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                763 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                764 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                765 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                766 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                767 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                768 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                769 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                770 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                771 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                772 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                773 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                774 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                775 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                776 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                777 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                778 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                779 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                780 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                781 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                782 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                783 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                784 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                785 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                786 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                787 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                788 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                789 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                790 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                791 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                792 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                793 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                794 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                795 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                796 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                797 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                798 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                799 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                800 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                801 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                802 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                803 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                804 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                805 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                806 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                807 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                808 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                809 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                810 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                811 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                812 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                813 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                814 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                815 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                816 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                817 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                818 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                819 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                820 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                821 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                822 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                823 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                824 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                825 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                826 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                827 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                828 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                829 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                830 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                831 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                832 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                833 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                834 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                835 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                836 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                837 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                838 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                839 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                840 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                841 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                842 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                843 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                844 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                845 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                846 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                847 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                848 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                849 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                850 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                851 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                852 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                853 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                854 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                855 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                856 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                857 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                858 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                859 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                860 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                861 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                862 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                863 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                864 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                865 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                866 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                867 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                868 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                869 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                870 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                871 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                872 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                873 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                874 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                875 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                876 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                877 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                878 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                879 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                880 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                881 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                882 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                883 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                884 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                885 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                886 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                887 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                888 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                889 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                890 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                891 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                892 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                893 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                894 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                895 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                896 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                897 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                898 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                899 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                900 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                901 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                902 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                903 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                904 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                905 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                906 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                907 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                908 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                909 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                910 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                911 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                912 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                913 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                914 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                915 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                916 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                917 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                918 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                919 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                920 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                921 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                922 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                923 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                924 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                925 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                926 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                927 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                928 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                929 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                930 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                931 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                932 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                933 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                934 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                935 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                936 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                937 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                938 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                939 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                940 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                941 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                942 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                943 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                944 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                945 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                946 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                947 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                948 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                949 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                950 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                951 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                952 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                953 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                954 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                955 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                956 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                957 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                958 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                959 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                960 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                961 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                962 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                963 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                964 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                965 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                966 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                967 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                968 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                969 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                970 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                971 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                972 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                973 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                974 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                975 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                976 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                977 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                978 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                979 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                980 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                981 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                982 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   983 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 984 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   985 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   986 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   987 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   988 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   989 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   990 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                991 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                992 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                993 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                994 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                995 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                996 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                997 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                998 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                999 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122               1000 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132               1001 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222               1002 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231               1003 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324               1004 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334               1005 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384               1006 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424               1007 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433               1008 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484               1009 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               1010 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1011 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                     1012 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                     1013 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     1014 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     1015 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     1016 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     1017 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     1018 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     1019 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                     1020 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     1021 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     1022 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     1023 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     1024 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     1025 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     1026 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     1027 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1028 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1029 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1030 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1031 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1032 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1033 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1034 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1035 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03                   1036 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05                   1037 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08                   1038 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09                   1039 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11                   1040 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21                   1041 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22                   1042 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24                   1043 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26                   1044 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28                   1045 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31                   1046 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32                   1047 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33                   1048 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34                   1049 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38                   1050 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61                   1051 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62                   1052 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67                   1053 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68                   1054 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81                   1055 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82                   1056 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84                   1057 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262                  1058 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868                  1059 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168                  1060 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221                  1061 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132                  1062 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231                  1063 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334                  1064 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433                  1065 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281                  1066 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg         1067 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1068 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus      1069 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus       1070 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus       1071 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus      1072 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1073 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1074 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1075 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1076 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1077 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1078 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1079 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1080 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1081 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1082 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1083 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1084 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1085 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1086 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1087 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1088 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1089 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1090 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1091 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1092 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1093 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1094 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1095 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1096 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1097 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1098 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1099 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1100 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1101 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1102 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1103 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1104 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1105 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1106 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1107 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1108 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1109 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1110 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1111 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1112 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1113 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1114 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1115 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1116 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1117 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1118 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1119 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1120 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1121 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1122 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1123 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1124 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1125 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1126 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1127 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1128 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1129 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1130 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1131 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1132 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1133 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1134 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1135 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1136 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1137 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1138 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1139 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1140 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1141 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1142 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1143 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1144 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1145 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1146 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1147 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1148 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1149 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1150 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1151 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1152 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1153 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1154 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1155 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1156 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1157 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1158 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1159 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1160 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1161 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1162 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1163 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1164 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1165 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1166 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1167 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1168 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1169 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1170 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1171 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1172 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1173 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1174 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1175 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1176 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1177 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1178 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1179 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1180 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1181 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1182 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1183 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1184 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1185 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1186 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1187 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1188 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1189 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1190 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1191 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1192 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1193 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1194 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1195 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1196 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1197 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1198 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1199 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1200 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1201 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1202 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1203 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1204 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1205 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1206 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1207 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1208 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1209 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1210 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1211 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1212 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1213 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1214 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1215 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1216 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1217 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1218 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1219 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                 1220 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                1221 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                 1222 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                 1223 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus              1224 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                1225 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1226 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1227 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1228 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1229 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1230 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1231
    #define prmrisend02risov            1232
    #define prmriseta02risov            1233
    #define prmrisrole02risov           1234
    #define prmrissubrole02risov        1235
    #define prmrisstationtype02risov    1236
    #define prmrisapproachid02risov     1237
    #define prmrislaneid02risov_1       1238
    #define prmrislaneid02risov_2       1239
    #define prmrto02risvrw              1240 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1241 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1242 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1243 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1244 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1245
    #define prmrisend02risvrw           1246
    #define prmriseta02risvrw           1247
    #define prmrisrole02risvrw          1248
    #define prmrissubrole02risvrw       1249
    #define prmrisstationtype02risvrw   1250
    #define prmrisapproachid02risvrw    1251
    #define prmrislaneid02risvrw_1      1252
    #define prmrislaneid02risvrw_2      1253
    #define prmrto03bus                 1254 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1255 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1256 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1257 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1258 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1259 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1260 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1261 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1262 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1263 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1264 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1265
    #define prmrisend03risov            1266
    #define prmriseta03risov            1267
    #define prmrisrole03risov           1268
    #define prmrissubrole03risov        1269
    #define prmrisstationtype03risov    1270
    #define prmrisapproachid03risov     1271
    #define prmrislaneid03risov_1       1272
    #define prmrto03risvrw              1273 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1274 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1275 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1276 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1277 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1278
    #define prmrisend03risvrw           1279
    #define prmriseta03risvrw           1280
    #define prmrisrole03risvrw          1281
    #define prmrissubrole03risvrw       1282
    #define prmrisstationtype03risvrw   1283
    #define prmrisapproachid03risvrw    1284
    #define prmrislaneid03risvrw_1      1285
    #define prmrto05bus                 1286 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1287 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1288 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1289 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1290 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1291 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1292 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1293 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1294 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1295 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1296 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1297
    #define prmrisend05risov            1298
    #define prmriseta05risov            1299
    #define prmrisrole05risov           1300
    #define prmrissubrole05risov        1301
    #define prmrisstationtype05risov    1302
    #define prmrisapproachid05risov     1303
    #define prmrislaneid05risov_1       1304
    #define prmrto05risvrw              1305 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw             1306 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw              1307 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw              1308 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw             1309 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw         1310
    #define prmrisend05risvrw           1311
    #define prmriseta05risvrw           1312
    #define prmrisrole05risvrw          1313
    #define prmrissubrole05risvrw       1314
    #define prmrisstationtype05risvrw   1315
    #define prmrisapproachid05risvrw    1316
    #define prmrislaneid05risvrw_1      1317
    #define prmrto08bus                 1318 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1319 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1320 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1321 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1322 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1323 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1324 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1325 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1326 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1327 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1328 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1329
    #define prmrisend08risov            1330
    #define prmriseta08risov            1331
    #define prmrisrole08risov           1332
    #define prmrissubrole08risov        1333
    #define prmrisstationtype08risov    1334
    #define prmrisapproachid08risov     1335
    #define prmrislaneid08risov_1       1336
    #define prmrislaneid08risov_2       1337
    #define prmrto08risvrw              1338 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1339 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1340 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1341 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1342 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1343
    #define prmrisend08risvrw           1344
    #define prmriseta08risvrw           1345
    #define prmrisrole08risvrw          1346
    #define prmrissubrole08risvrw       1347
    #define prmrisstationtype08risvrw   1348
    #define prmrisapproachid08risvrw    1349
    #define prmrislaneid08risvrw_1      1350
    #define prmrislaneid08risvrw_2      1351
    #define prmrto09bus                 1352 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1353 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1354 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1355 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1356 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1357 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1358 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1359 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1360 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1361 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1362 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1363
    #define prmrisend09risov            1364
    #define prmriseta09risov            1365
    #define prmrisrole09risov           1366
    #define prmrissubrole09risov        1367
    #define prmrisstationtype09risov    1368
    #define prmrisapproachid09risov     1369
    #define prmrislaneid09risov_1       1370
    #define prmrto09risvrw              1371 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw             1372 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw              1373 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw              1374 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw             1375 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw         1376
    #define prmrisend09risvrw           1377
    #define prmriseta09risvrw           1378
    #define prmrisrole09risvrw          1379
    #define prmrissubrole09risvrw       1380
    #define prmrisstationtype09risvrw   1381
    #define prmrisapproachid09risvrw    1382
    #define prmrislaneid09risvrw_1      1383
    #define prmrto11bus                 1384 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                1385 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                 1386 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                 1387 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus              1388 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                1389 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov               1390 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov              1391 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov               1392 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov               1393 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov              1394 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov          1395
    #define prmrisend11risov            1396
    #define prmriseta11risov            1397
    #define prmrisrole11risov           1398
    #define prmrissubrole11risov        1399
    #define prmrisstationtype11risov    1400
    #define prmrisapproachid11risov     1401
    #define prmrislaneid11risov_1       1402
    #define prmrto11risvrw              1403 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw             1404 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw              1405 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw              1406 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw             1407 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw         1408
    #define prmrisend11risvrw           1409
    #define prmriseta11risvrw           1410
    #define prmrisrole11risvrw          1411
    #define prmrissubrole11risvrw       1412
    #define prmrisstationtype11risvrw   1413
    #define prmrisapproachid11risvrw    1414
    #define prmrislaneid11risvrw_1      1415
    #define prmftsblok22fietsfiets      1416 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1417 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1418 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1419 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1420 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1421 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1422 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1423 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrto31fietsprio           1424 /* Ongehinderde rijtijd prioriteit fase 31                                                                                        */
    #define prmrtbg31fietsprio          1425 /* Beperkt gehinderde rijtijd prioriteit fase 31                                                                                  */
    #define prmrtg31fietsprio           1426 /* Gehinderde rijtijd prioriteit fase 31                                                                                          */
    #define prmomx31fietsprio           1427 /* Ondermaximum OV fase 31                                                                                                        */
    #define prmprio31fietsprio          1428 /* Prioriteitsinstelling OV fase 31                                                                                               */
    #define prmrto32fietsprio           1429 /* Ongehinderde rijtijd prioriteit fase 32                                                                                        */
    #define prmrtbg32fietsprio          1430 /* Beperkt gehinderde rijtijd prioriteit fase 32                                                                                  */
    #define prmrtg32fietsprio           1431 /* Gehinderde rijtijd prioriteit fase 32                                                                                          */
    #define prmomx32fietsprio           1432 /* Ondermaximum OV fase 32                                                                                                        */
    #define prmprio32fietsprio          1433 /* Prioriteitsinstelling OV fase 32                                                                                               */
    #define prmrto61bus                 1434 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1435 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1436 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1437 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1438 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1439 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1440 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1441 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1442 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1443 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1444 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1445
    #define prmrisend61risov            1446
    #define prmriseta61risov            1447
    #define prmrisrole61risov           1448
    #define prmrissubrole61risov        1449
    #define prmrisstationtype61risov    1450
    #define prmrisapproachid61risov     1451
    #define prmrislaneid61risov_1       1452
    #define prmrto61risvrw              1453 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1454 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1455 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1456 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1457 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1458
    #define prmrisend61risvrw           1459
    #define prmriseta61risvrw           1460
    #define prmrisrole61risvrw          1461
    #define prmrissubrole61risvrw       1462
    #define prmrisstationtype61risvrw   1463
    #define prmrisapproachid61risvrw    1464
    #define prmrislaneid61risvrw_1      1465
    #define prmrto62bus                 1466 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1467 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1468 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1469 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1470 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1471 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1472 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1473 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1474 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1475 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1476 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1477
    #define prmrisend62risov            1478
    #define prmriseta62risov            1479
    #define prmrisrole62risov           1480
    #define prmrissubrole62risov        1481
    #define prmrisstationtype62risov    1482
    #define prmrisapproachid62risov     1483
    #define prmrislaneid62risov_1       1484
    #define prmrislaneid62risov_2       1485
    #define prmrto62risvrw              1486 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1487 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1488 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1489 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1490 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1491
    #define prmrisend62risvrw           1492
    #define prmriseta62risvrw           1493
    #define prmrisrole62risvrw          1494
    #define prmrissubrole62risvrw       1495
    #define prmrisstationtype62risvrw   1496
    #define prmrisapproachid62risvrw    1497
    #define prmrislaneid62risvrw_1      1498
    #define prmrislaneid62risvrw_2      1499
    #define prmrto67bus                 1500 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1501 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1502 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1503 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1504 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1505 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1506 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1507 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1508 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1509 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1510 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1511
    #define prmrisend67risov            1512
    #define prmriseta67risov            1513
    #define prmrisrole67risov           1514
    #define prmrissubrole67risov        1515
    #define prmrisstationtype67risov    1516
    #define prmrisapproachid67risov     1517
    #define prmrislaneid67risov_1       1518
    #define prmrto67risvrw              1519 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1520 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1521 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1522 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1523 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1524
    #define prmrisend67risvrw           1525
    #define prmriseta67risvrw           1526
    #define prmrisrole67risvrw          1527
    #define prmrissubrole67risvrw       1528
    #define prmrisstationtype67risvrw   1529
    #define prmrisapproachid67risvrw    1530
    #define prmrislaneid67risvrw_1      1531
    #define prmrto68bus                 1532 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1533 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1534 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1535 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1536 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1537 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1538 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1539 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1540 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1541 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1542 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1543
    #define prmrisend68risov            1544
    #define prmriseta68risov            1545
    #define prmrisrole68risov           1546
    #define prmrissubrole68risov        1547
    #define prmrisstationtype68risov    1548
    #define prmrisapproachid68risov     1549
    #define prmrislaneid68risov_1       1550
    #define prmrislaneid68risov_2       1551
    #define prmrto68risvrw              1552 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1553 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1554 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1555 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1556 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1557
    #define prmrisend68risvrw           1558
    #define prmriseta68risvrw           1559
    #define prmrisrole68risvrw          1560
    #define prmrissubrole68risvrw       1561
    #define prmrisstationtype68risvrw   1562
    #define prmrisapproachid68risvrw    1563
    #define prmrislaneid68risvrw_1      1564
    #define prmrislaneid68risvrw_2      1565
    #define prmpriohd02                 1566 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1567 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1568 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1569 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1570
    #define prmrisend02hd               1571
    #define prmriseta02hd               1572
    #define prmrisrole02hd              1573
    #define prmrissubrole02hd           1574
    #define prmrisstationtype02hd       1575
    #define prmrisapproachid02hd        1576
    #define prmrislaneid02hd_1          1577
    #define prmrislaneid02hd_2          1578
    #define prmpriohd03                 1579 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1580 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1581 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1582 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd             1583
    #define prmrisend03hd               1584
    #define prmriseta03hd               1585
    #define prmrisrole03hd              1586
    #define prmrissubrole03hd           1587
    #define prmrisstationtype03hd       1588
    #define prmrisapproachid03hd        1589
    #define prmrislaneid03hd_1          1590
    #define prmpriohd05                 1591 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1592 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1593 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1594 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd             1595
    #define prmrisend05hd               1596
    #define prmriseta05hd               1597
    #define prmrisrole05hd              1598
    #define prmrissubrole05hd           1599
    #define prmrisstationtype05hd       1600
    #define prmrisapproachid05hd        1601
    #define prmrislaneid05hd_1          1602
    #define prmpriohd08                 1603 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1604 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1605 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1606 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd             1607
    #define prmrisend08hd               1608
    #define prmriseta08hd               1609
    #define prmrisrole08hd              1610
    #define prmrissubrole08hd           1611
    #define prmrisstationtype08hd       1612
    #define prmrisapproachid08hd        1613
    #define prmrislaneid08hd_1          1614
    #define prmrislaneid08hd_2          1615
    #define prmpriohd09                 1616 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1617 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1618 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1619 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd             1620
    #define prmrisend09hd               1621
    #define prmriseta09hd               1622
    #define prmrisrole09hd              1623
    #define prmrissubrole09hd           1624
    #define prmrisstationtype09hd       1625
    #define prmrisapproachid09hd        1626
    #define prmrislaneid09hd_1          1627
    #define prmpriohd11                 1628 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1629 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1630 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1631 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd             1632
    #define prmrisend11hd               1633
    #define prmriseta11hd               1634
    #define prmrisrole11hd              1635
    #define prmrissubrole11hd           1636
    #define prmrisstationtype11hd       1637
    #define prmrisapproachid11hd        1638
    #define prmrislaneid11hd_1          1639
    #define prmpriohd61                 1640 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1641 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1642 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1643 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd             1644
    #define prmrisend61hd               1645
    #define prmriseta61hd               1646
    #define prmrisrole61hd              1647
    #define prmrissubrole61hd           1648
    #define prmrisstationtype61hd       1649
    #define prmrisapproachid61hd        1650
    #define prmrislaneid61hd_1          1651
    #define prmpriohd62                 1652 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1653 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1654 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1655 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd             1656
    #define prmrisend62hd               1657
    #define prmriseta62hd               1658
    #define prmrisrole62hd              1659
    #define prmrissubrole62hd           1660
    #define prmrisstationtype62hd       1661
    #define prmrisapproachid62hd        1662
    #define prmrislaneid62hd_1          1663
    #define prmrislaneid62hd_2          1664
    #define prmpriohd67                 1665 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1666 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1667 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1668 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd             1669
    #define prmrisend67hd               1670
    #define prmriseta67hd               1671
    #define prmrisrole67hd              1672
    #define prmrissubrole67hd           1673
    #define prmrisstationtype67hd       1674
    #define prmrisapproachid67hd        1675
    #define prmrislaneid67hd_1          1676
    #define prmpriohd68                 1677 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1678 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1679 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1680 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd             1681
    #define prmrisend68hd               1682
    #define prmriseta68hd               1683
    #define prmrisrole68hd              1684
    #define prmrissubrole68hd           1685
    #define prmrisstationtype68hd       1686
    #define prmrisapproachid68hd        1687
    #define prmrislaneid68hd_1          1688
    #define prmrislaneid68hd_2          1689
    #define prmkarsg02                  1690 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1691 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1692 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1693 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1694 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1695 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1696 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1697 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1698 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1699 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1700 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1701 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1702 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1703 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1704 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1705 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1706 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1707 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1708 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1709 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                    1710 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1                    1711 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1                    1712 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2                    1713 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2                    1714 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2                    1715 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3                    1716 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3                    1717 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3                    1718 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4                    1719 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4                    1720 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4                    1721 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5                    1722 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5                    1723 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5                    1724 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6                    1725 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6                    1726 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6                    1727 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg2_02                   1728 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03                   1729 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05                   1730 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08                   1731 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09                   1732 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11                   1733 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21                   1734 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22                   1735 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24                   1736 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26                   1737 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28                   1738 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61                   1739 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62                   1740 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67                   1741 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68                   1742 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81                   1743 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82                   1744 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84                   1745 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02                   1746 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03                   1747 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05                   1748 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08                   1749 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09                   1750 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11                   1751 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21                   1752 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22                   1753 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24                   1754 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26                   1755 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28                   1756 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61                   1757 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62                   1758 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67                   1759 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68                   1760 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81                   1761 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82                   1762 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84                   1763 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02                   1764 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03                   1765 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05                   1766 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08                   1767 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09                   1768 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11                   1769 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21                   1770 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22                   1771 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24                   1772 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26                   1773 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28                   1774 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61                   1775 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62                   1776 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67                   1777 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68                   1778 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81                   1779 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82                   1780 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84                   1781 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02                   1782 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03                   1783 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05                   1784 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08                   1785 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09                   1786 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11                   1787 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21                   1788 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22                   1789 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24                   1790 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26                   1791 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28                   1792 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61                   1793 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62                   1794 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67                   1795 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68                   1796 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81                   1797 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82                   1798 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84                   1799 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02                   1800 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03                   1801 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05                   1802 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08                   1803 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09                   1804 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11                   1805 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21                   1806 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22                   1807 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24                   1808 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26                   1809 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28                   1810 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61                   1811 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62                   1812 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67                   1813 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68                   1814 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81                   1815 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82                   1816 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84                   1817 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02                   1818 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03                   1819 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05                   1820 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08                   1821 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09                   1822 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11                   1823 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21                   1824 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22                   1825 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24                   1826 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26                   1827 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28                   1828 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61                   1829 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62                   1830 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67                   1831 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68                   1832 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81                   1833 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82                   1834 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84                   1835 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02          1836 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1837 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1838 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1839 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1840 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1841 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1842 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1843 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1844 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1845 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1846 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1847 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1848 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1849 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1850 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1851 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1852 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1853 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1854 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1855 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1856 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1857 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1858 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1859 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1860 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1861 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1862 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1863 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1864 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1865 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1866 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1867 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1            1868 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1            1869 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1            1870 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1            1871 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1            1872 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1873 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1874 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1875 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1876 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1877 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1878 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1879 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1880 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1881 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1882 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1883 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1884 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1885 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1886 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1887 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1888 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1889 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1890 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1891 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2         1892 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1         1893 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1         1894 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1         1895 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2         1896 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1         1897 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1         1898 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1          1899 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1          1900 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1          1901 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1          1902 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1          1903 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1          1904 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2          1905 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart32vtg1          1906 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg2          1907 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart33vtg1          1908 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg2          1909 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart34vtg1          1910 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg2          1911 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart38vtg1          1912 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg2          1913 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart61mveh1         1914 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart62mveh1         1915 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh2         1916 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart67mveh1         1917 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart68mveh1         1918 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh2         1919 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart81fts1          1920 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart82fts1          1921 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart84fts1          1922 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend02mveh1           1923 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2           1924 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1           1925 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1           1926 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1           1927 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2           1928 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1           1929 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1           1930 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1            1931 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1            1932 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend24fts1            1933 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend26fts1            1934 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend28fts1            1935 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend31vtg1            1936 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg2            1937 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend32vtg1            1938 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg2            1939 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend33vtg1            1940 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg2            1941 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend34vtg1            1942 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg2            1943 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend38vtg1            1944 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg2            1945 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend61mveh1           1946 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend62mveh1           1947 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh2           1948 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend67mveh1           1949 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend68mveh1           1950 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend68mveh2           1951 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend81fts1            1952 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    #define prmrisaend82fts1            1953 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    #define prmrisaend84fts1            1954 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisvstart02mveh1         1955 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2         1956 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1         1957 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1         1958 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1         1959 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2         1960 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1         1961 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1         1962 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1          1963 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1          1964 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart24fts1          1965 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvstart26fts1          1966 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart28fts1          1967 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart31vtg1          1968 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg2          1969 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart32vtg1          1970 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg2          1971 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart33vtg1          1972 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg2          1973 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart34vtg1          1974 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg2          1975 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart38vtg1          1976 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg2          1977 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart61mveh1         1978 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart62mveh1         1979 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh2         1980 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart67mveh1         1981 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart68mveh1         1982 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart68mveh2         1983 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart81fts1          1984 /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    #define prmrisvstart82fts1          1985 /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    #define prmrisvstart84fts1          1986 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvend02mveh1           1987 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2           1988 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1           1989 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1           1990 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1           1991 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2           1992 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1           1993 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1           1994 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1            1995 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1            1996 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1            1997 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1            1998 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1            1999 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1            2000 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2            2001 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend32vtg1            2002 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg2            2003 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend33vtg1            2004 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg2            2005 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend34vtg1            2006 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg2            2007 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend38vtg1            2008 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg2            2009 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend61mveh1           2010 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend62mveh1           2011 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh2           2012 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend67mveh1           2013 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend68mveh1           2014 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh2           2015 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend81fts1            2016 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend82fts1            2017 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend84fts1            2018 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmmkrgd24_3                2019 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2020 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2021 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2022 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2023 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2024 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2025 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2026 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2027 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2028 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2029 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2030 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2031 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2032 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2033 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2034 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09                2035 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09                2036 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11                2037 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2038 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2039 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2040 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2041 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2042 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                2043 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                2044 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog               2045 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               2046 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  2047 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  2048 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  2049 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  2050 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  2051 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  2052 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  2053 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  2054 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  2055 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  2056 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  2057 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  2058 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  2059 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  2060 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  2061 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  2062 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  2063 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  2064 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  2065 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  2066 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  2067 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  2068 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  2069 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   2070 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   2071 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   2072 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   2073 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   2074 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   2075 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   2076 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   2077 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   2078 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   2079 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   2080 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   2081 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   2082 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   2083 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   2084 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 2085 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   2086 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434                 2087 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26                   2088 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   2089 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   2090 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   2091 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   2092 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   2093 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   2094 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   2095 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 2096 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   2097 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38                   2098 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   2099 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   2100 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   2101 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   2102 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   2103 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   2104 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   2105 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   2106 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   2107 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   2108 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   2109 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   2110 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   2111 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   2112 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmstarprogdef              2113 /* Default star programma                                                                                                         */
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

