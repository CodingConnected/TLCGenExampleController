/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   11.0
    TLCGEN:   0.10.5.0
   CCOLGEN:   0.10.5.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    22-01-2022   Cyril       Nieuwe versie TLCGen (0.10.5.0)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "1.0.0 20220122"
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
    #define usovinm28fiets     (FCMAX +  75) /* Verklikken inmelding OV fase 28                     */
    #define usovinm31fietsprio (FCMAX +  76) /* Verklikken inmelding OV fase 31                     */
    #define usovinm32fietsprio (FCMAX +  77) /* Verklikken inmelding OV fase 32                     */
    #define usovinm61bus       (FCMAX +  78) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risov     (FCMAX +  79) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risvrw    (FCMAX +  80) /* Verklikken inmelding OV fase 61                     */
    #define usovinm62bus       (FCMAX +  81) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risov     (FCMAX +  82) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risvrw    (FCMAX +  83) /* Verklikken inmelding OV fase 62                     */
    #define usovinm67bus       (FCMAX +  84) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risov     (FCMAX +  85) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risvrw    (FCMAX +  86) /* Verklikken inmelding OV fase 67                     */
    #define usovinm68bus       (FCMAX +  87) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risov     (FCMAX +  88) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risvrw    (FCMAX +  89) /* Verklikken inmelding OV fase 68                     */
    #define ushdinm02          (FCMAX +  90) /* Verklikken inmelding HD fase 02                     */
    #define ushdinm03          (FCMAX +  91) /* Verklikken inmelding HD fase 03                     */
    #define ushdinm05          (FCMAX +  92) /* Verklikken inmelding HD fase 05                     */
    #define ushdinm08          (FCMAX +  93) /* Verklikken inmelding HD fase 08                     */
    #define ushdinm09          (FCMAX +  94) /* Verklikken inmelding HD fase 09                     */
    #define ushdinm11          (FCMAX +  95) /* Verklikken inmelding HD fase 11                     */
    #define ushdinm61          (FCMAX +  96) /* Verklikken inmelding HD fase 61                     */
    #define ushdinm62          (FCMAX +  97) /* Verklikken inmelding HD fase 62                     */
    #define ushdinm67          (FCMAX +  98) /* Verklikken inmelding HD fase 67                     */
    #define ushdinm68          (FCMAX +  99) /* Verklikken inmelding HD fase 68                     */
    #define usperdef           (FCMAX + 100) /* Default periode actief                              */
    #define usperoFietsprio1   (FCMAX + 101) /* Periode actief                                      */
    #define usperoFietsprio2   (FCMAX + 102) /* Periode actief                                      */
    #define usperoFietsprio3   (FCMAX + 103) /* Periode actief                                      */
    #define usper1             (FCMAX + 104) /* Periode Dag periode actief                          */
    #define usper2             (FCMAX + 105) /* Periode Ochtendspits actief                         */
    #define usper3             (FCMAX + 106) /* Periode Avondspits actief                           */
    #define usper4             (FCMAX + 107) /* Periode Koopavond actief                            */
    #define usper5             (FCMAX + 108) /* Periode Weekend actief                              */
    #define usper6             (FCMAX + 109) /* Periode Reserve actief                              */
    #define usrgv              (FCMAX + 110) /* Verklikken actief zijn RoBuGrover                   */
    #define uswtk21            (FCMAX + 111) /* Aansturing waitsignaal detector k21                 */
    #define uswtk22            (FCMAX + 112) /* Aansturing waitsignaal detector k22                 */
    #define uswtk24            (FCMAX + 113) /* Aansturing waitsignaal detector k24                 */
    #define uswtk26            (FCMAX + 114) /* Aansturing waitsignaal detector k26                 */
    #define uswtk28            (FCMAX + 115) /* Aansturing waitsignaal detector k28                 */
    #define uswtk31a           (FCMAX + 116) /* Aansturing waitsignaal detector k31a                */
    #define uswtk31b           (FCMAX + 117) /* Aansturing waitsignaal detector k31b                */
    #define uswtk32a           (FCMAX + 118) /* Aansturing waitsignaal detector k32a                */
    #define uswtk32b           (FCMAX + 119) /* Aansturing waitsignaal detector k32b                */
    #define uswtk33a           (FCMAX + 120) /* Aansturing waitsignaal detector k33a                */
    #define uswtk33b           (FCMAX + 121) /* Aansturing waitsignaal detector k33b                */
    #define uswtk34a           (FCMAX + 122) /* Aansturing waitsignaal detector k34a                */
    #define uswtk34b           (FCMAX + 123) /* Aansturing waitsignaal detector k34b                */
    #define uswtk38a           (FCMAX + 124) /* Aansturing waitsignaal detector k38a                */
    #define uswtk38b           (FCMAX + 125) /* Aansturing waitsignaal detector k38b                */
    #define uswtk81            (FCMAX + 126) /* Aansturing waitsignaal detector k81                 */
    #define uswtk82            (FCMAX + 127) /* Aansturing waitsignaal detector k82                 */
    #define uswtk84            (FCMAX + 128) /* Aansturing waitsignaal detector k84                 */
    #define usstarprogwissel   (FCMAX + 129) /* Verklikken actief zijn wisselen naar star programma */
    #define usstarstar01       (FCMAX + 130) /* Star programma star01 actief                        */
    #define USMAX1             (FCMAX + 131)

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
    #define ddummyhdkarinA    90
    #define ddummyhdkaruitA   91
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
    #define isris031car        (DPMAX +  6)
    #define isris031bus        (DPMAX +  7)
    #define isris031special    (DPMAX +  8)
    #define isris031heavytruck (DPMAX +  9)
    #define isris051car        (DPMAX + 10)
    #define isris051bus        (DPMAX + 11)
    #define isris051special    (DPMAX + 12)
    #define isris051heavytruck (DPMAX + 13)
    #define isris841cyclist    (DPMAX + 14)
    #define isris821cyclist    (DPMAX + 15)
    #define isris811cyclist    (DPMAX + 16)
    #define isris681car        (DPMAX + 17)
    #define isris681bus        (DPMAX + 18)
    #define isris681special    (DPMAX + 19)
    #define isris681heavytruck (DPMAX + 20)
    #define isris682car        (DPMAX + 21)
    #define isris682bus        (DPMAX + 22)
    #define isris682special    (DPMAX + 23)
    #define isris682heavytruck (DPMAX + 24)
    #define isris671car        (DPMAX + 25)
    #define isris671bus        (DPMAX + 26)
    #define isris671special    (DPMAX + 27)
    #define isris671heavytruck (DPMAX + 28)
    #define isris621car        (DPMAX + 29)
    #define isris621bus        (DPMAX + 30)
    #define isris621special    (DPMAX + 31)
    #define isris621heavytruck (DPMAX + 32)
    #define isris622car        (DPMAX + 33)
    #define isris622bus        (DPMAX + 34)
    #define isris622special    (DPMAX + 35)
    #define isris622heavytruck (DPMAX + 36)
    #define isris611car        (DPMAX + 37)
    #define isris611bus        (DPMAX + 38)
    #define isris611special    (DPMAX + 39)
    #define isris611heavytruck (DPMAX + 40)
    #define isris381pedestrian (DPMAX + 41)
    #define isris382pedestrian (DPMAX + 42)
    #define isris341pedestrian (DPMAX + 43)
    #define isris342pedestrian (DPMAX + 44)
    #define isris331pedestrian (DPMAX + 45)
    #define isris332pedestrian (DPMAX + 46)
    #define isris321pedestrian (DPMAX + 47)
    #define isris322pedestrian (DPMAX + 48)
    #define isris311pedestrian (DPMAX + 49)
    #define isris312pedestrian (DPMAX + 50)
    #define isris281cyclist    (DPMAX + 51)
    #define isris261cyclist    (DPMAX + 52)
    #define isris241cyclist    (DPMAX + 53)
    #define isris221cyclist    (DPMAX + 54)
    #define isris211cyclist    (DPMAX + 55)
    #define isris111car        (DPMAX + 56)
    #define isris111bus        (DPMAX + 57)
    #define isris111special    (DPMAX + 58)
    #define isris111heavytruck (DPMAX + 59)
    #define isris091car        (DPMAX + 60)
    #define isris091bus        (DPMAX + 61)
    #define isris091special    (DPMAX + 62)
    #define isris091heavytruck (DPMAX + 63)
    #define isris081car        (DPMAX + 64)
    #define isris081bus        (DPMAX + 65)
    #define isris081special    (DPMAX + 66)
    #define isris081heavytruck (DPMAX + 67)
    #define isris082car        (DPMAX + 68)
    #define isris082bus        (DPMAX + 69)
    #define isris082special    (DPMAX + 70)
    #define isris082heavytruck (DPMAX + 71)
    #define ISMAX1             (DPMAX + 72)
#else
    #define ISMAX1             (DPMAX +  2)
#endif

/* hulp elementen */
/* -------------- */
    #define hopdrempelen11            0 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11           1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1             2 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2             3 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3             4 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4             5 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hopdrempelen09            6 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09           7 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1             8 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2             9 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3            10 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen08           11 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08          12 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a           13 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b           14 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a           15 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b           16 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a           17 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b           18 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a           19 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b           20 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hmadk31a                 21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b                 22 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a                 23 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b                 24 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a                 25 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b                 26 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a                 27 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b                 28 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af            29 /* File File68af actief                                               */
    #define hfile68_9a               30 /* File 68_9a actief                                                  */
    #define hfile68_9b               31 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af       32 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af       33 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hplhd                    34 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                   35 /* Halfstar actief                                                    */
    #define hkpact                   36 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                   37 /* Module regelen actief                                              */
    #define hpervar                  38 /* Periode VA regelen                                                 */
    #define hperarh                  39 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh             40 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                   41 /* Bijhouden actief zijn levensignaal                                 */
    #define hxpl2232                 42 /* Tegenhouden richtingen tbv gelijkstart 22 32                       */
    #define hxpl2434                 43 /* Tegenhouden richtingen tbv gelijkstart 24 34                       */
    #define hxpl3384                 44 /* Tegenhouden richtingen tbv gelijkstart 33 84                       */
    #define hnla11_1                 45 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 46 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 47 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 48 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 49 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 50 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 51 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus                52 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus                53 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                54 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                55 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                56 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                57 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                58 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                59 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                60 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                61 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus               62 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus             63 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus            64 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar          65 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar         66 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             67 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           68 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov          69 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris        70 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris       71 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw            72 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          73 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         74 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       75 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      76 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus               77 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             78 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            79 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          80 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         81 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             82 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           83 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          84 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        85 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       86 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            87 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          88 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         89 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       90 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      91 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus               92 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus             93 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus            94 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar          95 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar         96 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov             97 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov           98 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov          99 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris       100 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris      101 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw           102 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw         103 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw        104 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris      105 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris     106 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus              107 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus            108 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus           109 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar         110 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        111 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            112 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          113 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         114 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       115 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      116 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           117 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         118 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        119 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      120 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     121 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              122 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            123 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           124 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         125 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        126 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            127 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          128 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         129 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       130 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      131 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           132 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         133 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        134 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      135 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     136 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              137 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            138 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           139 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         140 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        141 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            142 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          143 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         144 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       145 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      146 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           147 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         148 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        149 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      150 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     151 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            152 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          153 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         154 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets     155 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    156 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            157 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          158 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         159 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 160 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    161 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio31fietsprio        162 /* Bijhouden actief zijn prioriteit fase 31                           */
    #define hprioin31fietsprio      163 /* Prioriteit inmelding fase 31 Fiets                                 */
    #define hpriouit31fietsprio     164 /* Prioriteit uitmelding 31 Fiets                                     */
    #define hprio32fietsprio        165 /* Bijhouden actief zijn prioriteit fase 32                           */
    #define hprioin32fietsprio      166 /* Prioriteit inmelding fase 32 Fiets                                 */
    #define hpriouit32fietsprio     167 /* Prioriteit uitmelding 32 Fiets                                     */
    #define hprio61bus              168 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus            169 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus           170 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar         171 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar        172 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov            173 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov          174 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov         175 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris       176 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris      177 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw           178 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw         179 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw        180 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris      181 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris     182 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus              183 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus            184 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus           185 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar         186 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar        187 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov            188 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov          189 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov         190 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris       191 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris      192 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw           193 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw         194 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw        195 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris      196 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris     197 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus              198 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus            199 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus           200 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar         201 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar        202 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov            203 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov          204 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov         205 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris       206 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris      207 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw           208 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw         209 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw        210 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris      211 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris     212 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus              213 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus            214 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus           215 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar         216 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar        217 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov            218 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov          219 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov         220 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris       221 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris      222 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw           223 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw         224 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw        225 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris      226 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris     227 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                   228 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                 229 /* HD inmelding 02                                                    */
    #define hhduit02                230 /* HD uitmelding 02                                                   */
    #define hhdin02kar              231 /* HD inmelding 02                                                    */
    #define hhduit02kar             232 /* HD uitmelding 02                                                   */
    #define hhdin02ris              233 /* HD inmelding 02                                                    */
    #define hhduit02ris             234 /* HD uitmelding 02                                                   */
    #define hhd03                   235 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                 236 /* HD inmelding 03                                                    */
    #define hhduit03                237 /* HD uitmelding 03                                                   */
    #define hhdin03kar              238 /* HD inmelding 03                                                    */
    #define hhduit03kar             239 /* HD uitmelding 03                                                   */
    #define hhdin03ris              240 /* HD inmelding 03                                                    */
    #define hhduit03ris             241 /* HD uitmelding 03                                                   */
    #define hhd05                   242 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                 243 /* HD inmelding 05                                                    */
    #define hhduit05                244 /* HD uitmelding 05                                                   */
    #define hhdin05kar              245 /* HD inmelding 05                                                    */
    #define hhduit05kar             246 /* HD uitmelding 05                                                   */
    #define hhdin05ris              247 /* HD inmelding 05                                                    */
    #define hhduit05ris             248 /* HD uitmelding 05                                                   */
    #define hhd08                   249 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                 250 /* HD inmelding 08                                                    */
    #define hhduit08                251 /* HD uitmelding 08                                                   */
    #define hhdin08kar              252 /* HD inmelding 08                                                    */
    #define hhduit08kar             253 /* HD uitmelding 08                                                   */
    #define hhdin08ris              254 /* HD inmelding 08                                                    */
    #define hhduit08ris             255 /* HD uitmelding 08                                                   */
    #define hhd09                   256 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                 257 /* HD inmelding 09                                                    */
    #define hhduit09                258 /* HD uitmelding 09                                                   */
    #define hhdin09kar              259 /* HD inmelding 09                                                    */
    #define hhduit09kar             260 /* HD uitmelding 09                                                   */
    #define hhdin09ris              261 /* HD inmelding 09                                                    */
    #define hhduit09ris             262 /* HD uitmelding 09                                                   */
    #define hhd11                   263 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                 264 /* HD inmelding 11                                                    */
    #define hhduit11                265 /* HD uitmelding 11                                                   */
    #define hhdin11kar              266 /* HD inmelding 11                                                    */
    #define hhduit11kar             267 /* HD uitmelding 11                                                   */
    #define hhdin11ris              268 /* HD inmelding 11                                                    */
    #define hhduit11ris             269 /* HD uitmelding 11                                                   */
    #define hhd61                   270 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                 271 /* HD inmelding 61                                                    */
    #define hhduit61                272 /* HD uitmelding 61                                                   */
    #define hhdin61kar              273 /* HD inmelding 61                                                    */
    #define hhduit61kar             274 /* HD uitmelding 61                                                   */
    #define hhdin61ris              275 /* HD inmelding 61                                                    */
    #define hhduit61ris             276 /* HD uitmelding 61                                                   */
    #define hhd62                   277 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                 278 /* HD inmelding 62                                                    */
    #define hhduit62                279 /* HD uitmelding 62                                                   */
    #define hhdin62kar              280 /* HD inmelding 62                                                    */
    #define hhduit62kar             281 /* HD uitmelding 62                                                   */
    #define hhdin62ris              282 /* HD inmelding 62                                                    */
    #define hhduit62ris             283 /* HD uitmelding 62                                                   */
    #define hhd67                   284 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                 285 /* HD inmelding 67                                                    */
    #define hhduit67                286 /* HD uitmelding 67                                                   */
    #define hhdin67kar              287 /* HD inmelding 67                                                    */
    #define hhduit67kar             288 /* HD uitmelding 67                                                   */
    #define hhdin67ris              289 /* HD inmelding 67                                                    */
    #define hhduit67ris             290 /* HD uitmelding 67                                                   */
    #define hhd68                   291 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                 292 /* HD inmelding 68                                                    */
    #define hhduit68                293 /* HD uitmelding 68                                                   */
    #define hhdin68kar              294 /* HD inmelding 68                                                    */
    #define hhduit68kar             295 /* HD uitmelding 68                                                   */
    #define hhdin68ris              296 /* HD inmelding 68                                                    */
    #define hhduit68ris             297 /* HD uitmelding 68                                                   */
    #define hperiodFietsprio1       298 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       299 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3       300 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2         301 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 302 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               303 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               304 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               305 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               306 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09               307 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11               308 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               309 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               310 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68               311 /* Bijhouden primaire realisatie fase 68                              */
    #define hschoolingreepdk33a     312 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     313 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     314 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     315 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr33               316 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               317 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262               318
    #define hnleg0868               319
    #define hnleg1168               320
    #define hnleg2221               321
    #define hnlsg3132               322
    #define hnlsg3231               323
    #define hnlsg3334               324
    #define hnlsg3433               325
    #define hnleg8281               326
    #define hinl32                  327 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  328 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  329 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  330 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  331 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  332 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  333 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  334 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  335 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  336 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  337 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  338 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  339

/* geheugen elementen */
/* ------------------ */
    #define mperiod           0 /* Onthouden actieve periode                                    */
    #define mmk03             1 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    #define mmk05             2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    #define mmk08             3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    #define mmk09             4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    #define mmk11             5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    #define mmk61             6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    #define mmk62             7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    #define mmk67             8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    #define mmk68             9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    #define mleven           10 /* Bijhouden actief zijn levensignaal                           */
    #define mklok            11 /* Halfstar of VA obv klokperioden                              */
    #define mhand            12 /* Halstar of VA handmatig bepaald                              */
    #define mstp02bus        13 /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    #define mstp03bus        14 /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    #define mstp05bus        15 /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    #define mstp08bus        16 /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    #define mstp09bus        17 /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    #define mstp11bus        18 /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    #define mstp61bus        19 /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    #define mstp62bus        20 /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    #define mstp67bus        21 /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    #define mstp68bus        22 /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    #define mstarprog        23 /* Onthouden actief star programma                              */
    #define mstarprogwens    24 /* Onthouden gewenst star programma                             */
    #define mstarprogwissel  25 /* Onthouden actief zijn wisselen naar star programma           */
    #define mrealtijd02      26 /* Realisatie tijd fase 02                                      */
    #define mrealtijd03      27 /* Realisatie tijd fase 03                                      */
    #define mrealtijd05      28 /* Realisatie tijd fase 05                                      */
    #define mrealtijd08      29 /* Realisatie tijd fase 08                                      */
    #define mrealtijd09      30 /* Realisatie tijd fase 09                                      */
    #define mrealtijd11      31 /* Realisatie tijd fase 11                                      */
    #define mrealtijd21      32 /* Realisatie tijd fase 21                                      */
    #define mrealtijd22      33 /* Realisatie tijd fase 22                                      */
    #define mrealtijd24      34 /* Realisatie tijd fase 24                                      */
    #define mrealtijd26      35 /* Realisatie tijd fase 26                                      */
    #define mrealtijd28      36 /* Realisatie tijd fase 28                                      */
    #define mrealtijd31      37 /* Realisatie tijd fase 31                                      */
    #define mrealtijd32      38 /* Realisatie tijd fase 32                                      */
    #define mrealtijd33      39 /* Realisatie tijd fase 33                                      */
    #define mrealtijd34      40 /* Realisatie tijd fase 34                                      */
    #define mrealtijd38      41 /* Realisatie tijd fase 38                                      */
    #define mrealtijd61      42 /* Realisatie tijd fase 61                                      */
    #define mrealtijd62      43 /* Realisatie tijd fase 62                                      */
    #define mrealtijd67      44 /* Realisatie tijd fase 67                                      */
    #define mrealtijd68      45 /* Realisatie tijd fase 68                                      */
    #define mrealtijd81      46 /* Realisatie tijd fase 81                                      */
    #define mrealtijd82      47 /* Realisatie tijd fase 82                                      */
    #define mrealtijd84      48 /* Realisatie tijd fase 84                                      */
    #define mrealtijdmin02   49 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03   50 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05   51 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08   52 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09   53 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11   54 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21   55 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22   56 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24   57 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26   58 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28   59 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31   60 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32   61 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33   62 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34   63 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38   64 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61   65 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62   66 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67   67 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68   68 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin81   69 /* Realisatie minimum tijd fase 81                              */
    #define mrealtijdmin82   70 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin84   71 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02   72 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03   73 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05   74 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08   75 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09   76 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11   77 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21   78 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22   79 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24   80 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26   81 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28   82 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31   83 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32   84 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33   85 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34   86 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38   87 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61   88 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62   89 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67   90 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68   91 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax81   92 /* Realisatie maximum tijd fase 81                              */
    #define mrealtijdmax82   93 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax84   94 /* Realisatie maximum tijd fase 84                              */
    #define mar02            95 /* Alternatieve ruimte fase 02                                  */
    #define mar03            96 /* Alternatieve ruimte fase 03                                  */
    #define mar05            97 /* Alternatieve ruimte fase 05                                  */
    #define mar08            98 /* Alternatieve ruimte fase 08                                  */
    #define mar09            99 /* Alternatieve ruimte fase 09                                  */
    #define mar11           100 /* Alternatieve ruimte fase 11                                  */
    #define mar21           101 /* Alternatieve ruimte fase 21                                  */
    #define mar22           102 /* Alternatieve ruimte fase 22                                  */
    #define mar24           103 /* Alternatieve ruimte fase 24                                  */
    #define mar26           104 /* Alternatieve ruimte fase 26                                  */
    #define mar28           105 /* Alternatieve ruimte fase 28                                  */
    #define mar31           106 /* Alternatieve ruimte fase 31                                  */
    #define mar32           107 /* Alternatieve ruimte fase 32                                  */
    #define mar33           108 /* Alternatieve ruimte fase 33                                  */
    #define mar34           109 /* Alternatieve ruimte fase 34                                  */
    #define mar38           110 /* Alternatieve ruimte fase 38                                  */
    #define mar61           111 /* Alternatieve ruimte fase 61                                  */
    #define mar62           112 /* Alternatieve ruimte fase 62                                  */
    #define mar67           113 /* Alternatieve ruimte fase 67                                  */
    #define mar68           114 /* Alternatieve ruimte fase 68                                  */
    #define mar81           115 /* Alternatieve ruimte fase 81                                  */
    #define mar82           116 /* Alternatieve ruimte fase 82                                  */
    #define mar84           117 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1          118

/* tijd elementen */
/* -------------- */
    #define t11_1_1                      0 /* Dynamische hiaattijden moment 1 voor detector 11_1                                       */
    #define t11_1_2                      1 /* Dynamische hiaattijden moment 2 voor detector 11_1                                       */
    #define ttdh_11_1_1                  2 /* Dynamische hiaattijden TDH 1 voor detector 11_1                                          */
    #define ttdh_11_1_2                  3 /* Dynamische hiaattijden TDH 2 voor detector 11_1                                          */
    #define tmax_11_1                    4 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                                */
    #define t11_2_1                      5 /* Dynamische hiaattijden moment 1 voor detector 11_2                                       */
    #define t11_2_2                      6 /* Dynamische hiaattijden moment 2 voor detector 11_2                                       */
    #define ttdh_11_2_1                  7 /* Dynamische hiaattijden TDH 1 voor detector 11_2                                          */
    #define ttdh_11_2_2                  8 /* Dynamische hiaattijden TDH 2 voor detector 11_2                                          */
    #define tmax_11_2                    9 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                                */
    #define t11_3_1                     10 /* Dynamische hiaattijden moment 1 voor detector 11_3                                       */
    #define t11_3_2                     11 /* Dynamische hiaattijden moment 2 voor detector 11_3                                       */
    #define ttdh_11_3_1                 12 /* Dynamische hiaattijden TDH 1 voor detector 11_3                                          */
    #define ttdh_11_3_2                 13 /* Dynamische hiaattijden TDH 2 voor detector 11_3                                          */
    #define tmax_11_3                   14 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                                */
    #define t11_4_1                     15 /* Dynamische hiaattijden moment 1 voor detector 11_4                                       */
    #define t11_4_2                     16 /* Dynamische hiaattijden moment 2 voor detector 11_4                                       */
    #define ttdh_11_4_1                 17 /* Dynamische hiaattijden TDH 1 voor detector 11_4                                          */
    #define ttdh_11_4_2                 18 /* Dynamische hiaattijden TDH 2 voor detector 11_4                                          */
    #define tmax_11_4                   19 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                                */
    #define t09_1_1                     20 /* Dynamische hiaattijden moment 1 voor detector 09_1                                       */
    #define t09_1_2                     21 /* Dynamische hiaattijden moment 2 voor detector 09_1                                       */
    #define ttdh_09_1_1                 22 /* Dynamische hiaattijden TDH 1 voor detector 09_1                                          */
    #define ttdh_09_1_2                 23 /* Dynamische hiaattijden TDH 2 voor detector 09_1                                          */
    #define tmax_09_1                   24 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    #define t09_2_1                     25 /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    #define t09_2_2                     26 /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    #define ttdh_09_2_1                 27 /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    #define ttdh_09_2_2                 28 /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    #define tmax_09_2                   29 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    #define t09_3_1                     30 /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    #define t09_3_2                     31 /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    #define ttdh_09_3_1                 32 /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    #define ttdh_09_3_2                 33 /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    #define tmax_09_3                   34 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
    #define t08_1a_1                    35 /* Dynamische hiaattijden moment 1 voor detector 08_1a                                      */
    #define t08_1a_2                    36 /* Dynamische hiaattijden moment 2 voor detector 08_1a                                      */
    #define ttdh_08_1a_1                37 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                                         */
    #define ttdh_08_1a_2                38 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                                         */
    #define tmax_08_1a                  39 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a                               */
    #define t08_1b_1                    40 /* Dynamische hiaattijden moment 1 voor detector 08_1b                                      */
    #define t08_1b_2                    41 /* Dynamische hiaattijden moment 2 voor detector 08_1b                                      */
    #define ttdh_08_1b_1                42 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                                         */
    #define ttdh_08_1b_2                43 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                                         */
    #define tmax_08_1b                  44 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b                               */
    #define t08_2a_1                    45 /* Dynamische hiaattijden moment 1 voor detector 08_2a                                      */
    #define t08_2a_2                    46 /* Dynamische hiaattijden moment 2 voor detector 08_2a                                      */
    #define ttdh_08_2a_1                47 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                                         */
    #define ttdh_08_2a_2                48 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                                         */
    #define tmax_08_2a                  49 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a                               */
    #define t08_2b_1                    50 /* Dynamische hiaattijden moment 1 voor detector 08_2b                                      */
    #define t08_2b_2                    51 /* Dynamische hiaattijden moment 2 voor detector 08_2b                                      */
    #define ttdh_08_2b_1                52 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                                         */
    #define ttdh_08_2b_2                53 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                                         */
    #define tmax_08_2b                  54 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b                               */
    #define t08_3a_1                    55 /* Dynamische hiaattijden moment 1 voor detector 08_3a                                      */
    #define t08_3a_2                    56 /* Dynamische hiaattijden moment 2 voor detector 08_3a                                      */
    #define ttdh_08_3a_1                57 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                                         */
    #define ttdh_08_3a_2                58 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                                         */
    #define tmax_08_3a                  59 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a                               */
    #define t08_3b_1                    60 /* Dynamische hiaattijden moment 1 voor detector 08_3b                                      */
    #define t08_3b_2                    61 /* Dynamische hiaattijden moment 2 voor detector 08_3b                                      */
    #define ttdh_08_3b_1                62 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                                         */
    #define ttdh_08_3b_2                63 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                                         */
    #define tmax_08_3b                  64 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b                               */
    #define t08_4a_1                    65 /* Dynamische hiaattijden moment 1 voor detector 08_4a                                      */
    #define t08_4a_2                    66 /* Dynamische hiaattijden moment 2 voor detector 08_4a                                      */
    #define ttdh_08_4a_1                67 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                                         */
    #define ttdh_08_4a_2                68 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                                         */
    #define tmax_08_4a                  69 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a                               */
    #define t08_4b_1                    70 /* Dynamische hiaattijden moment 1 voor detector 08_4b                                      */
    #define t08_4b_2                    71 /* Dynamische hiaattijden moment 2 voor detector 08_4b                                      */
    #define ttdh_08_4b_1                72 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                                         */
    #define ttdh_08_4b_2                73 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                                         */
    #define tmax_08_4b                  74 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b                               */
    #define tav28_2                     75 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                                  */
    #define tkm02                       76 /* Kop maximum voor detector 02                                                             */
    #define tkm03                       77 /* Kop maximum voor detector 03                                                             */
    #define tkm05                       78 /* Kop maximum voor detector 05                                                             */
    #define tkm08                       79 /* Kop maximum voor detector 08                                                             */
    #define tkm09                       80 /* Kop maximum voor detector 09                                                             */
    #define tkm11                       81 /* Kop maximum voor detector 11                                                             */
    #define tkm21                       82 /* Kop maximum voor detector 21                                                             */
    #define tkm22                       83 /* Kop maximum voor detector 22                                                             */
    #define tkm24                       84 /* Kop maximum voor detector 24                                                             */
    #define tkm26                       85 /* Kop maximum voor detector 26                                                             */
    #define tkm28                       86 /* Kop maximum voor detector 28                                                             */
    #define tkm61                       87 /* Kop maximum voor detector 61                                                             */
    #define tkm62                       88 /* Kop maximum voor detector 62                                                             */
    #define tkm67                       89 /* Kop maximum voor detector 67                                                             */
    #define tkm68                       90 /* Kop maximum voor detector 68                                                             */
    #define tkm81                       91 /* Kop maximum voor detector 81                                                             */
    #define tkm82                       92 /* Kop maximum voor detector 82                                                             */
    #define tkm84                       93 /* Kop maximum voor detector 84                                                             */
    #define thdvd03_1                   94 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    #define tdstvert03                  95 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    #define thdvd05_1                   96 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    #define tdstvert05                  97 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    #define thdvd08_1a                  98 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    #define thdvd08_1b                  99 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    #define tdstvert08                 100 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    #define thdvd09_1                  101 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    #define tdstvert09                 102 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    #define thdvd11_1                  103 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    #define tdstvert11                 104 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    #define tdstvert21                 105 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    #define thdvd22_1                  106 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    #define tdstvert22                 107 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    #define thdvd24_1                  108 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    #define tdstvert24                 109 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    #define tdstvert26                 110 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    #define thdvd28_1                  111 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    #define tdstvert28                 112 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    #define tdstvert31                 113 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    #define tdstvert32                 114 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    #define tdstvert33                 115 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    #define tdstvert34                 116 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    #define tdstvert38                 117 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    #define thdvd61_1                  118 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    #define tdstvert61                 119 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    #define thdvd62_1a                 120 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    #define thdvd62_1b                 121 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    #define tdstvert62                 122 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    #define thdvd67_1                  123 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    #define tdstvert67                 124 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    #define thdvd68_1a                 125 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    #define thdvd68_1b                 126 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    #define tdstvert68                 127 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    #define tdstvert81                 128 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    #define tdstvert82                 129 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    #define thdvd84_1                  130 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84                 131 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tafvFile68af               132 /* Afval vertraging file File68af                                                           */
    #define tafv68_9a                  133 /* Afval vertraging file 68_9a                                                              */
    #define tbz68_9a                   134 /* Bezettijd file detector 68_9a                                                            */
    #define trij68_9a                  135 /* Rijtijd file detector 68_9a                                                              */
    #define tafv68_9b                  136 /* Afval vertraging file 68_9b                                                              */
    #define tbz68_9b                   137 /* Bezettijd file detector 68_9b                                                            */
    #define trij68_9b                  138 /* Rijtijd file detector 68_9b                                                              */
    #define tafkmingroen08fileFile68af 139 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                    */
    #define tafkmingroen11fileFile68af 140 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                    */
    #define tminrood08fileFile68af     141 /* Minimale roodtijd bij fase 08 voor file ingreep                                          */
    #define tminrood11fileFile68af     142 /* Minimale roodtijd bij fase 11 voor file ingreep                                          */
    #define tmaxgroen08fileFile68af    143 /* Maximale groentijd bij fase 08 voor file ingreep                                         */
    #define tmaxgroen11fileFile68af    144 /* Maximale groentijd bij fase 11 voor file ingreep                                         */
    #define tleven                     145 /* Frequentie verstuurd levenssignaal                                                       */
    #define tnlfg0262                  146 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnleg0262                  147 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlfg0868                  148 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnleg0868                  149 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlfg1168                  150 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 151 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  152 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 153 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  154 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 155 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  156 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 157 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132                 158 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 159 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 160 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 161 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  162 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 163 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  164 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 165 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                166 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     167 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus                168 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   169 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   170 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  171 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risovris          172 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            173 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              174 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 175 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 176 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                177 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrwris         178 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           179 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             180 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                181 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                182 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               183 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                184 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   185 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   186 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  187 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          188 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            189 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              190 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 191 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 192 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                193 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         194 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           195 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             196 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                197 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                198 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               199 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                200 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   201 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   202 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  203 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          204 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            205 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              206 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 207 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 208 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                209 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         210 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           211 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             212 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                213 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                214 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               215 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                216 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   217 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   218 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  219 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          220 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            221 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              222 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 223 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 224 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                225 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         226 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           227 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             228 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                229 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                230 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               231 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                232 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   233 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   234 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  235 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          236 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            237 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              238 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 239 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 240 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                241 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         242 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           243 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             244 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                245 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                246 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               247 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                248 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   249 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   250 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  251 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          252 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            253 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              254 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 255 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 256 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                257 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         258 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           259 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             260 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                261 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                262 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               263 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            264 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              265 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 266 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 267 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                268 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tpriouit28fiets            269 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              270 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 271 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 272 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                273 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg31fietsprio          274 /* Timer bezettijd prioriteit gehinderde rijtijd fase 31                                    */
    #define trt31fietsprio             275 /* Actuele rijtijd prio fase 31                                                             */
    #define tgb31fietsprio             276 /* Groenbewaking prioriteit fase 31                                                         */
    #define tblk31fietsprio            277 /* Blokkeertijd na prioriteitsingreep fase 31                                               */
    #define tbtovg32fietsprio          278 /* Timer bezettijd prioriteit gehinderde rijtijd fase 32                                    */
    #define trt32fietsprio             279 /* Actuele rijtijd prio fase 32                                                             */
    #define tgb32fietsprio             280 /* Groenbewaking prioriteit fase 32                                                         */
    #define tblk32fietsprio            281 /* Blokkeertijd na prioriteitsingreep fase 32                                               */
    #define tbtovg61bus                282 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   283 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   284 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  285 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          286 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            287 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              288 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 289 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 290 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                291 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         292 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           293 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             294 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                295 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                296 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               297 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                298 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   299 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   300 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  301 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          302 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            303 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              304 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 305 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 306 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                307 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         308 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           309 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             310 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                311 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                312 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               313 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                314 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   315 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   316 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  317 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          318 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            319 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              320 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 321 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 322 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                323 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         324 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           325 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             326 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                327 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                328 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               329 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            330 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                331 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   332 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   333 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  334 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          335 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            336 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              337 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 338 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 339 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                340 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         341 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           342 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             343 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                344 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                345 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               346 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    347 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    348 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 349 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 350 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                351 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    352 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    353 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 354 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 355 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                356 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    357 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    358 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 359 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 360 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                361 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    362 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    363 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 364 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 365 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                366 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    367 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    368 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 369 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 370 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                371 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    372 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    373 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 374 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 375 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                376 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    377 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    378 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 379 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 380 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                381 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    382 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    383 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 384 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 385 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                386 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    387 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    388 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 389 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 390 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                391 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    392 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    393 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 394 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 395 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                396 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                397
    #define tris02risvrw               398
    #define tris03risov                399
    #define tris03risvrw               400
    #define tris05risov                401
    #define tris05risvrw               402
    #define tris08risov                403
    #define tris08risvrw               404
    #define tris09risov                405
    #define tris09risvrw               406
    #define tris11risov                407
    #define tris11risvrw               408
    #define tris61risov                409
    #define tris61risvrw               410
    #define tris62risov                411
    #define tris62risvrw               412
    #define tris67risov                413
    #define tris67risvrw               414
    #define tris68risov                415
    #define tris68risvrw               416
    #define trgad24_3                  417 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 418 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            419 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            420 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   421 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   422 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   423 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   424 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   425 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   426 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    427 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    428 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    429 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    430 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   431 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   432 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   433 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   434 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   435 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   436 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1                    437 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2                    438 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3                    439 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1                    440 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    441 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    442 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    443 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    444 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    445 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    446 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   447 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   448 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   449 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   450 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tschoolingreepmaxg33       451 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 452 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 453 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       454 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 455 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 456 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr33                  457 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             458 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             459 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  460 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             461 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             462 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tuitgestca03               463 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               464 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               465 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               466 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               467 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               468 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               469 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               470 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               471 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               472 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               473 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               474 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               475 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               476 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               477 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               478 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               479 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               480 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               481 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               482 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               483 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               484 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   485 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               486 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              487 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               488 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              489 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   490 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               491 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              492 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               493 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              494 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   495 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                496 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               497 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    498 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    499 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    500 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202                    501 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    502 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    503 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    504 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    505 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   506 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   507 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   508 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   509 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    510 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    511 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    512 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     513

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
    #define cvchst28fiets       19 /* OV inmeldingen fase 28 tijdens halfstar regelen Fiets       */
    #define cvchst31fietsprio   20 /* OV inmeldingen fase 31 tijdens halfstar regelen Fiets       */
    #define cvchst32fietsprio   21 /* OV inmeldingen fase 32 tijdens halfstar regelen Fiets       */
    #define cvchst61bus         22 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risov       23 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risvrw      24 /* OV inmeldingen fase 61 tijdens halfstar regelen Vrachtwagen */
    #define cvchst62bus         25 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risov       26 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risvrw      27 /* OV inmeldingen fase 62 tijdens halfstar regelen Vrachtwagen */
    #define cvchst67bus         28 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risov       29 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risvrw      30 /* OV inmeldingen fase 67 tijdens halfstar regelen Vrachtwagen */
    #define cvchst68bus         31 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risov       32 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risvrw      33 /* OV inmeldingen fase 68 tijdens halfstar regelen Vrachtwagen */
    #define cvc02bus            34 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          35 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         36 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc03bus            37 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          38 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         39 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc05bus            40 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          41 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         42 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc08bus            43 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          44 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         45 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc09bus            46 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          47 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         48 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc11bus            49 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          50 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         51 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cftscyc22fietsfiets 52 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cvc22fiets          53 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cftscyc28fietsfiets 54 /* Bijhouden realisaties tbv peloton prio voor fase 28         */
    #define cftsvtg28fietsfiets 55 /* Bijhouden aantal fietsers tbv peloton prio voor fase 28     */
    #define cvc28fiets          56 /* Bijhouden prio inmeldingen fase 28 type Fiets               */
    #define cvc31fietsprio      57 /* Bijhouden prio inmeldingen fase 31 type Fiets               */
    #define cvc32fietsprio      58 /* Bijhouden prio inmeldingen fase 32 type Fiets               */
    #define cvc61bus            59 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          60 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         61 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc62bus            62 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          63 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         64 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc67bus            65 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          66 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         67 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc68bus            68 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          69 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         70 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvchd02             71 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             72 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             73 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             74 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             75 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             76 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             77 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             78 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             79 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             80 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              81

/* schakelaars */
/* ----------- */
    #define schdynhiaat11               0 /* Toepassen dynamsich hiaat bij fase 11                                 */
    #define schopdrempelen11            1 /* Opdrempelen toepassen voor fase 11                                    */
    #define schedkop_11                 2 /* Start timers dynamische hiaat fase 11 op einde detectie koplus        */
    #define schdynhiaat09               3 /* Toepassen dynamsich hiaat bij fase 09                                 */
    #define schopdrempelen09            4 /* Opdrempelen toepassen voor fase 09                                    */
    #define schedkop_09                 5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus        */
    #define schdynhiaat08               6 /* Toepassen dynamsich hiaat bij fase 08                                 */
    #define schopdrempelen08            7 /* Opdrempelen toepassen voor fase 08                                    */
    #define schedkop_08                 8 /* Start timers dynamische hiaat fase 08 op einde detectie koplus        */
    #define schfileFile68af             9 /* File ingreep File68af toepassen                                       */
    #define schfiledoserenFile68af     10 /* Toepassen doseerpercentages voor fileingreep File68af                 */
    #define schfileFile68afparstrook   11 /* Parallele file meldingen per strook file ingreep File68af             */
    #define schbmfix                   12 /* Bijkomen tijdens fixatie mogelijk                                     */
    #define schaltghst02               13 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen      */
    #define schaltghst03               14 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen      */
    #define schaltghst05               15 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen      */
    #define schaltghst08               16 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen      */
    #define schaltghst09               17 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen      */
    #define schaltghst11               18 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen      */
    #define schaltghst21               19 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen      */
    #define schaltghst2232             20 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen */
    #define schaltghst2434             21 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen */
    #define schaltghst81               22 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen      */
    #define schaltghst88               23 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen      */
    #define schaltghst3384             24 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst68               25 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen      */
    #define schaltghst82               26 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen      */
    #define schaltghst67               27 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen      */
    #define schaltghst62               28 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen      */
    #define schaltghst61               29 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen      */
    #define schaltghst38               30 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen      */
    #define schaltghst31               31 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen      */
    #define schaltghst28               32 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen      */
    #define schaltghst26               33 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen      */
    #define schinstprm                 34 /* Eenmalig kopieren signaalplan parameters naar signaalplannen          */
    #define schinst                    35 /* Eenmalig instellen signaalplannen na wijziging                        */
    #define schvaml                    36 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)          */
    #define schvar                     37 /* VA regelen aan of uit                                                 */
    #define scharh                     38 /* Toestaan alternatieven voor hoofdrichtingen                           */
    #define schvarstreng               39 /* VA regelen aan of uit voor gehele streng                              */
    #define schpervardef               40 /* VA regelen periode default                                            */
    #define schpervar1                 41 /* VA regelen periode dag                                                */
    #define schpervar2                 42 /* VA regelen periode ochtend                                            */
    #define schpervar3                 43 /* VA regelen periode avond                                              */
    #define schpervar4                 44 /* VA regelen periode koopavond                                          */
    #define schpervar5                 45 /* VA regelen periode weekend                                            */
    #define schpervar6                 46 /* VA regelen periode reserve                                            */
    #define schperarhdef               47 /* Alternatieven voor hoofdrichtingen periode default                    */
    #define schperarh1                 48 /* Alternatieven voor hoofdrichtingen periode dag                        */
    #define schperarh2                 49 /* Alternatieven voor hoofdrichtingen periode ochtend                    */
    #define schperarh3                 50 /* Alternatieven voor hoofdrichtingen periode avond                      */
    #define schperarh4                 51 /* Alternatieven voor hoofdrichtingen periode koopavond                  */
    #define schperarh5                 52 /* Alternatieven voor hoofdrichtingen periode weekend                    */
    #define schperarh6                 53 /* Alternatieven voor hoofdrichtingen periode reserve                    */
    #define schovpriople               54 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                */
    #define schma0261                  55 /* Meeaanvraag van 02 naar 61 actief                                     */
    #define schma0262                  56 /* Meeaanvraag van 02 naar 62 actief                                     */
    #define schma0521                  57 /* Meeaanvraag van 05 naar 21 actief                                     */
    #define schma0522                  58 /* Meeaanvraag van 05 naar 22 actief                                     */
    #define schma0532                  59 /* Meeaanvraag van 05 naar 32 actief                                     */
    #define schma0868                  60 /* Meeaanvraag van 08 naar 68 actief                                     */
    #define schma1126                  61 /* Meeaanvraag van 11 naar 26 actief                                     */
    #define schma1168                  62 /* Meeaanvraag van 11 naar 68 actief                                     */
    #define schma2221                  63 /* Meeaanvraag van 22 naar 21 actief                                     */
    #define schma3122                  64 /* Meeaanvraag van 31 naar 22 actief                                     */
    #define schma3132                  65 /* Meeaanvraag van 31 naar 32 actief                                     */
    #define schma3222                  66 /* Meeaanvraag van 32 naar 22 actief                                     */
    #define schma3231                  67 /* Meeaanvraag van 32 naar 31 actief                                     */
    #define schma3324                  68 /* Meeaanvraag van 33 naar 24 actief                                     */
    #define schma3334                  69 /* Meeaanvraag van 33 naar 34 actief                                     */
    #define schma3384                  70 /* Meeaanvraag van 33 naar 84 actief                                     */
    #define schma3424                  71 /* Meeaanvraag van 34 naar 24 actief                                     */
    #define schma3433                  72 /* Meeaanvraag van 34 naar 33 actief                                     */
    #define schma3484                  73 /* Meeaanvraag van 34 naar 84 actief                                     */
    #define schma8281                  74 /* Meeaanvraag van 82 naar 81 actief                                     */
    #define schmv02                    75 /* Meeverlengen fase 02                                                  */
    #define schmv03                    76 /* Meeverlengen fase 03                                                  */
    #define schmv05                    77 /* Meeverlengen fase 05                                                  */
    #define schmv08                    78 /* Meeverlengen fase 08                                                  */
    #define schmv09                    79 /* Meeverlengen fase 09                                                  */
    #define schmv11                    80 /* Meeverlengen fase 11                                                  */
    #define schmv21                    81 /* Meeverlengen fase 21                                                  */
    #define schmv22                    82 /* Meeverlengen fase 22                                                  */
    #define schmv24                    83 /* Meeverlengen fase 24                                                  */
    #define schmv26                    84 /* Meeverlengen fase 26                                                  */
    #define schmv28                    85 /* Meeverlengen fase 28                                                  */
    #define schmv31                    86 /* Meeverlengen fase 31                                                  */
    #define schmv32                    87 /* Meeverlengen fase 32                                                  */
    #define schmv33                    88 /* Meeverlengen fase 33                                                  */
    #define schmv34                    89 /* Meeverlengen fase 34                                                  */
    #define schmv38                    90 /* Meeverlengen fase 38                                                  */
    #define schmv61                    91 /* Meeverlengen fase 61                                                  */
    #define schmv62                    92 /* Meeverlengen fase 62                                                  */
    #define schmv67                    93 /* Meeverlengen fase 67                                                  */
    #define schmv68                    94 /* Meeverlengen fase 68                                                  */
    #define schmv81                    95 /* Meeverlengen fase 81                                                  */
    #define schmv82                    96 /* Meeverlengen fase 82                                                  */
    #define schmv84                    97 /* Meeverlengen fase 84                                                  */
    #define schmlprm                   98 /* Toepassen parametriseerbare modulestructuur                           */
    #define schovstipt02bus            99 /* Geconditioneerde prioteit voor OV bij 02 Bus                          */
    #define schovstipt03bus           100 /* Geconditioneerde prioteit voor OV bij 03 Bus                          */
    #define schovstipt05bus           101 /* Geconditioneerde prioteit voor OV bij 05 Bus                          */
    #define schovstipt08bus           102 /* Geconditioneerde prioteit voor OV bij 08 Bus                          */
    #define schovstipt09bus           103 /* Geconditioneerde prioteit voor OV bij 09 Bus                          */
    #define schovstipt11bus           104 /* Geconditioneerde prioteit voor OV bij 11 Bus                          */
    #define schovstipt61bus           105 /* Geconditioneerde prioteit voor OV bij 61 Bus                          */
    #define schovstipt62bus           106 /* Geconditioneerde prioteit voor OV bij 62 Bus                          */
    #define schovstipt67bus           107 /* Geconditioneerde prioteit voor OV bij 67 Bus                          */
    #define schovstipt68bus           108 /* Geconditioneerde prioteit voor OV bij 68 Bus                          */
    #define schcovuber                109 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                        */
    #define schcheckdstype            110 /* Check type DSI bericht bij VECOM                                      */
    #define schprioin02buskar         111 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02buskar        112 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02bus           113 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risovris       114 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02risovris      115 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02risov         116 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risvrwris      117 /* Inmelden 02 via Vrachtwagen toestaan                                  */
    #define schpriouit02risvrwris     118 /* Uitmelden 02 via Vrachtwagen toestaan                                 */
    #define schupinagb02risvrw        119 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin03buskar         120 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03buskar        121 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03bus           122 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risovris       123 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03risovris      124 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03risov         125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risvrwris      126 /* Inmelden 03 via Vrachtwagen toestaan                                  */
    #define schpriouit03risvrwris     127 /* Uitmelden 03 via Vrachtwagen toestaan                                 */
    #define schupinagb03risvrw        128 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin05buskar         129 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05buskar        130 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05bus           131 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risovris       132 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05risovris      133 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05risov         134 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risvrwris      135 /* Inmelden 05 via Vrachtwagen toestaan                                  */
    #define schpriouit05risvrwris     136 /* Uitmelden 05 via Vrachtwagen toestaan                                 */
    #define schupinagb05risvrw        137 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin08buskar         138 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08buskar        139 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08bus           140 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risovris       141 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08risovris      142 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08risov         143 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risvrwris      144 /* Inmelden 08 via Vrachtwagen toestaan                                  */
    #define schpriouit08risvrwris     145 /* Uitmelden 08 via Vrachtwagen toestaan                                 */
    #define schupinagb08risvrw        146 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin09buskar         147 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09buskar        148 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09bus           149 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risovris       150 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09risovris      151 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09risov         152 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risvrwris      153 /* Inmelden 09 via Vrachtwagen toestaan                                  */
    #define schpriouit09risvrwris     154 /* Uitmelden 09 via Vrachtwagen toestaan                                 */
    #define schupinagb09risvrw        155 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin11buskar         156 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11buskar        157 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11bus           158 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risovris       159 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11risovris      160 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11risov         161 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risvrwris      162 /* Inmelden 11 via Vrachtwagen toestaan                                  */
    #define schpriouit11risvrwris     163 /* Uitmelden 11 via Vrachtwagen toestaan                                 */
    #define schupinagb11risvrw        164 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin22fietsfiets     165 /* Inmelden 22 via Fiets toestaan                                        */
    #define schpriouit22fietsfiets    166 /* Uitmelden 22 via Fiets toestaan                                       */
    #define schupinagb22fiets         167 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22         */
    #define schprioin28fietsfiets28_2 168 /* Inmelden 28 via Fiets toestaan                                        */
    #define schpriouit28fietsfiets    169 /* Uitmelden 28 via Fiets toestaan                                       */
    #define schupinagb28fiets         170 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28         */
    #define schupinagb31fietsprio     171 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 31         */
    #define schupinagb32fietsprio     172 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 32         */
    #define schprioin61buskar         173 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61buskar        174 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61bus           175 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risovris       176 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61risovris      177 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61risov         178 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risvrwris      179 /* Inmelden 61 via Vrachtwagen toestaan                                  */
    #define schpriouit61risvrwris     180 /* Uitmelden 61 via Vrachtwagen toestaan                                 */
    #define schupinagb61risvrw        181 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin62buskar         182 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62buskar        183 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62bus           184 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risovris       185 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62risovris      186 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62risov         187 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risvrwris      188 /* Inmelden 62 via Vrachtwagen toestaan                                  */
    #define schpriouit62risvrwris     189 /* Uitmelden 62 via Vrachtwagen toestaan                                 */
    #define schupinagb62risvrw        190 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin67buskar         191 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67buskar        192 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67bus           193 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risovris       194 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67risovris      195 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67risov         196 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risvrwris      197 /* Inmelden 67 via Vrachtwagen toestaan                                  */
    #define schpriouit67risvrwris     198 /* Uitmelden 67 via Vrachtwagen toestaan                                 */
    #define schupinagb67risvrw        199 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin68buskar         200 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68buskar        201 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68bus           202 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risovris       203 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68risovris      204 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68risov         205 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risvrwris      206 /* Inmelden 68 via Vrachtwagen toestaan                                  */
    #define schpriouit68risvrwris     207 /* Uitmelden 68 via Vrachtwagen toestaan                                 */
    #define schupinagb68risvrw        208 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schupinagbhd02            209 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02         */
    #define schhdin02kar              210 /* Inmelden 02 via KAR HD toestaan                                       */
    #define schhduit02kar             211 /* Uitmelden 02 via KAR HD toestaan                                      */
    #define schchecksirene02          212 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                */
    #define schhdin02ris              213 /* Inmelden 02 via RIS HD toestaan                                       */
    #define schhduit02ris             214 /* Uitmelden 02 via RIS HD toestaan                                      */
    #define schupinagbhd03            215 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03         */
    #define schhdin03kar              216 /* Inmelden 03 via KAR HD toestaan                                       */
    #define schhduit03kar             217 /* Uitmelden 03 via KAR HD toestaan                                      */
    #define schchecksirene03          218 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                */
    #define schhdin03ris              219 /* Inmelden 03 via RIS HD toestaan                                       */
    #define schhduit03ris             220 /* Uitmelden 03 via RIS HD toestaan                                      */
    #define schupinagbhd05            221 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05         */
    #define schhdin05kar              222 /* Inmelden 05 via KAR HD toestaan                                       */
    #define schhduit05kar             223 /* Uitmelden 05 via KAR HD toestaan                                      */
    #define schchecksirene05          224 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                */
    #define schhdin05ris              225 /* Inmelden 05 via RIS HD toestaan                                       */
    #define schhduit05ris             226 /* Uitmelden 05 via RIS HD toestaan                                      */
    #define schupinagbhd08            227 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08         */
    #define schhdin08kar              228 /* Inmelden 08 via KAR HD toestaan                                       */
    #define schhduit08kar             229 /* Uitmelden 08 via KAR HD toestaan                                      */
    #define schchecksirene08          230 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                */
    #define schhdin08ris              231 /* Inmelden 08 via RIS HD toestaan                                       */
    #define schhduit08ris             232 /* Uitmelden 08 via RIS HD toestaan                                      */
    #define schupinagbhd09            233 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09         */
    #define schhdin09kar              234 /* Inmelden 09 via KAR HD toestaan                                       */
    #define schhduit09kar             235 /* Uitmelden 09 via KAR HD toestaan                                      */
    #define schchecksirene09          236 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                */
    #define schhdin09ris              237 /* Inmelden 09 via RIS HD toestaan                                       */
    #define schhduit09ris             238 /* Uitmelden 09 via RIS HD toestaan                                      */
    #define schupinagbhd11            239 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11         */
    #define schhdin11kar              240 /* Inmelden 11 via KAR HD toestaan                                       */
    #define schhduit11kar             241 /* Uitmelden 11 via KAR HD toestaan                                      */
    #define schchecksirene11          242 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                */
    #define schhdin11ris              243 /* Inmelden 11 via RIS HD toestaan                                       */
    #define schhduit11ris             244 /* Uitmelden 11 via RIS HD toestaan                                      */
    #define schupinagbhd61            245 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61         */
    #define schhdin61kar              246 /* Inmelden 61 via KAR HD toestaan                                       */
    #define schhduit61kar             247 /* Uitmelden 61 via KAR HD toestaan                                      */
    #define schchecksirene61          248 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                */
    #define schhdin61ris              249 /* Inmelden 61 via RIS HD toestaan                                       */
    #define schhduit61ris             250 /* Uitmelden 61 via RIS HD toestaan                                      */
    #define schupinagbhd62            251 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62         */
    #define schhdin62kar              252 /* Inmelden 62 via KAR HD toestaan                                       */
    #define schhduit62kar             253 /* Uitmelden 62 via KAR HD toestaan                                      */
    #define schchecksirene62          254 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                */
    #define schhdin62ris              255 /* Inmelden 62 via RIS HD toestaan                                       */
    #define schhduit62ris             256 /* Uitmelden 62 via RIS HD toestaan                                      */
    #define schupinagbhd67            257 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67         */
    #define schhdin67kar              258 /* Inmelden 67 via KAR HD toestaan                                       */
    #define schhduit67kar             259 /* Uitmelden 67 via KAR HD toestaan                                      */
    #define schchecksirene67          260 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                */
    #define schhdin67ris              261 /* Inmelden 67 via RIS HD toestaan                                       */
    #define schhduit67ris             262 /* Uitmelden 67 via RIS HD toestaan                                      */
    #define schupinagbhd68            263 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68         */
    #define schhdin68kar              264 /* Inmelden 68 via KAR HD toestaan                                       */
    #define schhduit68kar             265 /* Uitmelden 68 via KAR HD toestaan                                      */
    #define schchecksirene68          266 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                */
    #define schhdin68ris              267 /* Inmelden 68 via RIS HD toestaan                                       */
    #define schhduit68ris             268 /* Uitmelden 68 via RIS HD toestaan                                      */
    #define schrisgeencheckopsg       269 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen           */
    #define schrisaanvraag            270 /* Globaal in of uitschakelen aanvragen via RIS                          */
    #define schrisverlengen           271 /* Globaal in of uitschakelen verlengen via RIS                          */
    #define schrgadd24_3              272 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2            */
    #define schrgv                    273 /* RoBuGrover aan of uit                                                 */
    #define schrgv_snel               274 /* RoBuGrover versneld ophogen of verlagen                               */
    #define schschoolingreep33        275 /* Schoolingreep aan of uit voor fase 33                                 */
    #define schschoolingreep34        276 /* Schoolingreep aan of uit voor fase 34                                 */
    #define schsi33                   277 /* Senioreningreep aan of uit voor fase 33                               */
    #define schsi34                   278 /* Senioreningreep aan of uit voor fase 34                               */
    #define schca02                   279 /* Cyclische aanvraag fase 02                                            */
    #define schca03                   280 /* Cyclische aanvraag fase 03                                            */
    #define schca05                   281 /* Cyclische aanvraag fase 05                                            */
    #define schca08                   282 /* Cyclische aanvraag fase 08                                            */
    #define schca09                   283 /* Cyclische aanvraag fase 09                                            */
    #define schca11                   284 /* Cyclische aanvraag fase 11                                            */
    #define schca21                   285 /* Cyclische aanvraag fase 21                                            */
    #define schca22                   286 /* Cyclische aanvraag fase 22                                            */
    #define schca24                   287 /* Cyclische aanvraag fase 24                                            */
    #define schca26                   288 /* Cyclische aanvraag fase 26                                            */
    #define schca28                   289 /* Cyclische aanvraag fase 28                                            */
    #define schca31                   290 /* Cyclische aanvraag fase 31                                            */
    #define schca32                   291 /* Cyclische aanvraag fase 32                                            */
    #define schca33                   292 /* Cyclische aanvraag fase 33                                            */
    #define schca34                   293 /* Cyclische aanvraag fase 34                                            */
    #define schca38                   294 /* Cyclische aanvraag fase 38                                            */
    #define schca61                   295 /* Cyclische aanvraag fase 61                                            */
    #define schca62                   296 /* Cyclische aanvraag fase 62                                            */
    #define schca67                   297 /* Cyclische aanvraag fase 67                                            */
    #define schca68                   298 /* Cyclische aanvraag fase 68                                            */
    #define schca81                   299 /* Cyclische aanvraag fase 81                                            */
    #define schca82                   300 /* Cyclische aanvraag fase 82                                            */
    #define schca84                   301 /* Cyclische aanvraag fase 84                                            */
    #define schvg02_4a                302 /* Veiligheidsgroen detector 02_4a fase 02                               */
    #define schvg02_4b                303 /* Veiligheidsgroen detector 02_4b fase 02                               */
    #define schvg08_4a                304 /* Veiligheidsgroen detector 08_4a fase 08                               */
    #define schvg08_4b                305 /* Veiligheidsgroen detector 08_4b fase 08                               */
    #define schvg11_4                 306 /* Veiligheidsgroen detector 11_4 fase 11                                */
    #define schaltg02                 307 /* Alternatieve realisatie toestaan fase 02                              */
    #define schaltg03                 308 /* Alternatieve realisatie toestaan fase 03                              */
    #define schaltg05                 309 /* Alternatieve realisatie toestaan fase 05                              */
    #define schaltg08                 310 /* Alternatieve realisatie toestaan fase 08                              */
    #define schaltg09                 311 /* Alternatieve realisatie toestaan fase 09                              */
    #define schaltg11                 312 /* Alternatieve realisatie toestaan fase 11                              */
    #define schaltg21                 313 /* Alternatieve realisatie toestaan fase 21                              */
    #define schaltg2232               314 /* Alternatieve realisatie toestaan fasen 22, 32                         */
    #define schaltg2434               315 /* Alternatieve realisatie toestaan fasen 24, 34                         */
    #define schaltg26                 316 /* Alternatieve realisatie toestaan fase 26                              */
    #define schaltg28                 317 /* Alternatieve realisatie toestaan fase 28                              */
    #define schaltg31                 318 /* Alternatieve realisatie toestaan fase 31                              */
    #define schaltg3384               319 /* Alternatieve realisatie toestaan fasen 33, 84                         */
    #define schaltg38                 320 /* Alternatieve realisatie toestaan fase 38                              */
    #define schaltg61                 321 /* Alternatieve realisatie toestaan fase 61                              */
    #define schaltg62                 322 /* Alternatieve realisatie toestaan fase 62                              */
    #define schaltg67                 323 /* Alternatieve realisatie toestaan fase 67                              */
    #define schaltg68                 324 /* Alternatieve realisatie toestaan fase 68                              */
    #define schaltg81                 325 /* Alternatieve realisatie toestaan fase 81                              */
    #define schaltg82                 326 /* Alternatieve realisatie toestaan fase 82                              */
    #define schwg02                   327 /* Wachtstand groen fase 02                                              */
    #define schwg03                   328 /* Wachtstand groen fase 03                                              */
    #define schwg05                   329 /* Wachtstand groen fase 05                                              */
    #define schwg08                   330 /* Wachtstand groen fase 08                                              */
    #define schwg09                   331 /* Wachtstand groen fase 09                                              */
    #define schwg11                   332 /* Wachtstand groen fase 11                                              */
    #define schwg21                   333 /* Wachtstand groen fase 21                                              */
    #define schwg22                   334 /* Wachtstand groen fase 22                                              */
    #define schwg24                   335 /* Wachtstand groen fase 24                                              */
    #define schwg26                   336 /* Wachtstand groen fase 26                                              */
    #define schwg28                   337 /* Wachtstand groen fase 28                                              */
    #define schwg31                   338 /* Wachtstand groen fase 31                                              */
    #define schwg32                   339 /* Wachtstand groen fase 32                                              */
    #define schwg33                   340 /* Wachtstand groen fase 33                                              */
    #define schwg34                   341 /* Wachtstand groen fase 34                                              */
    #define schwg38                   342 /* Wachtstand groen fase 38                                              */
    #define schwg61                   343 /* Wachtstand groen fase 61                                              */
    #define schwg62                   344 /* Wachtstand groen fase 62                                              */
    #define schwg67                   345 /* Wachtstand groen fase 67                                              */
    #define schwg68                   346 /* Wachtstand groen fase 68                                              */
    #define schwg81                   347 /* Wachtstand groen fase 81                                              */
    #define schwg82                   348 /* Wachtstand groen fase 82                                              */
    #define schwg84                   349 /* Wachtstand groen fase 84                                              */
    #define schstar                   350 /* Inschakelen star programma                                            */
    #define schgs2232                 351 /* Schakelbare gelijkstart tussen fase 32 en 22                          */
    #define schgs2434                 352 /* Schakelbare gelijkstart tussen fase 34 en 24                          */
    #define schgs3384                 353 /* Schakelbare gelijkstart tussen fase 84 en 33                          */
    #define schlos32_1                354 /* Toestaan los realiseren fase 32                                       */
    #define schlos32_2                355 /* Toestaan los realiseren fase 32                                       */
    #define schlos31_1                356 /* Toestaan los realiseren fase 31                                       */
    #define schlos31_2                357 /* Toestaan los realiseren fase 31                                       */
    #define schlos34_1                358 /* Toestaan los realiseren fase 34                                       */
    #define schlos34_2                359 /* Toestaan los realiseren fase 34                                       */
    #define schlos33_1                360 /* Toestaan los realiseren fase 33                                       */
    #define schlos33_2                361 /* Toestaan los realiseren fase 33                                       */
    #define schconfidence15fix        362
    #define schtxconfidence15ar       363
    #define schspatconfidence1        364
    #define schspatconfidence3        365
    #define schspatconfidence6        366
    #define schspatconfidence9        367
    #define schspatconfidence12       368
    #define schspatconfidence15       369
    #define schtimings02              370
    #define schtimings03              371
    #define schtimings05              372
    #define schtimings08              373
    #define schtimings09              374
    #define schtimings11              375
    #define schtimings21              376
    #define schtimings22              377
    #define schtimings24              378
    #define schtimings26              379
    #define schtimings28              380
    #define schtimings31              381
    #define schtimings32              382
    #define schtimings33              383
    #define schtimings34              384
    #define schtimings38              385
    #define schtimings61              386
    #define schtimings62              387
    #define schtimings67              388
    #define schtimings68              389
    #define schtimings81              390
    #define schtimings82              391
    #define schtimings84              392
    #define schsneld02_1a             393 /* Aanvraag snel voor detector 02_1a aan of uit                          */
    #define schsneld03_1              394 /* Aanvraag snel voor detector 03_1 aan of uit                           */
    #define schsneld05_1              395 /* Aanvraag snel voor detector 05_1 aan of uit                           */
    #define schsneld08_1a             396 /* Aanvraag snel voor detector 08_1a aan of uit                          */
    #define schsneld09_1              397 /* Aanvraag snel voor detector 09_1 aan of uit                           */
    #define schsneld11_1              398 /* Aanvraag snel voor detector 11_1 aan of uit                           */
    #define schsneld211               399 /* Aanvraag snel voor detector 211 aan of uit                            */
    #define schsneld22_1              400 /* Aanvraag snel voor detector 22_1 aan of uit                           */
    #define schsneld24_1              401 /* Aanvraag snel voor detector 24_1 aan of uit                           */
    #define schsneld261               402 /* Aanvraag snel voor detector 261 aan of uit                            */
    #define schsneld28_1              403 /* Aanvraag snel voor detector 28_1 aan of uit                           */
    #define schsneld61_1              404 /* Aanvraag snel voor detector 61_1 aan of uit                           */
    #define schsneld62_1a             405 /* Aanvraag snel voor detector 62_1a aan of uit                          */
    #define schsneld67_1              406 /* Aanvraag snel voor detector 67_1 aan of uit                           */
    #define schsneld68_1a             407 /* Aanvraag snel voor detector 68_1a aan of uit                          */
    #define schsneld81_1              408 /* Aanvraag snel voor detector 81_1 aan of uit                           */
    #define schsneld82_1              409 /* Aanvraag snel voor detector 82_1 aan of uit                           */
    #define schsneld84_1              410 /* Aanvraag snel voor detector 84_1 aan of uit                           */
    #define schgsbeidedkb             411
    #define SCHMAX1                   412

/* parameters */
/* ---------- */
    #define prmspringverleng_11_1          0 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2          1 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3          2 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4          3 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmspringverleng_09_1          4 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2          5 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3          6 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_08_1a         7 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b         8 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a         9 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b        10 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a        11 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b        12 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a        13 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b        14 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmfb                         15 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                         16 /* Versiebeheer xx                                                                                                                */
    #define prmyy                         17 /* Versiebeheer yy                                                                                                                */
    #define prmzz                         18 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02           19
    #define prmovmmindergroen_02          20
    #define prmovmextragroen_03           21
    #define prmovmmindergroen_03          22
    #define prmovmextragroen_05           23
    #define prmovmmindergroen_05          24
    #define prmovmextragroen_08           25
    #define prmovmmindergroen_08          26
    #define prmovmextragroen_09           27
    #define prmovmmindergroen_09          28
    #define prmovmextragroen_11           29
    #define prmovmmindergroen_11          30
    #define prmovmextragroen_61           31
    #define prmovmmindergroen_61          32
    #define prmovmextragroen_62           33
    #define prmovmmindergroen_62          34
    #define prmovmextragroen_67           35
    #define prmovmmindergroen_67          36
    #define prmovmextragroen_68           37
    #define prmovmmindergroen_68          38
    #define prmaltb02                     39 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03                     40 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05                     41 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08                     42 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09                     43 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11                     44 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21                     45 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22                     46 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24                     47 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26                     48 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28                     49 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31                     50 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32                     51 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33                     52 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34                     53 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38                     54 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61                     55 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62                     56 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67                     57 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68                     58 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81                     59 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82                     60 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84                     61 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a                    62 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b                    63 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a                    64 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b                    65 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a                    66 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b                    67 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a                    68 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b                    69 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1                     70 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2                     71 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1                     72 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2                     73 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a                    74 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b                    75 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a                    76 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b                    77 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a                    78 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b                    79 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a                    80 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b                    81 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1                     82 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2                     83 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3                     84 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1                     85 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2                     86 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3                     87 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4                     88 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                      89 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21                      90 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1                     91 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22                      92 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1                     93 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2                     94 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3                     95 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24                      96 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261                      97 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26                      98 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1                     99 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2                    100 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28                     101 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a                    102 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b                    103 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a                    104 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b                    105 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a                    106 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b                    107 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a                    108 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b                    109 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a                    110 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b                    111 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1                    112 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2                    113 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a                   114 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b                   115 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a                   116 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b                   117 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1                    118 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2                    119 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a                   120 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b                   121 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a                   122 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b                   123 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a                   124 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b                   125 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1                    126 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81                     127 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1                    128 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82                     129 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1                    130 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84                     131 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a                   132 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b                   133 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a                   134 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b                   135 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a                   136 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b                   137 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a                   138 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b                   139 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1                    140 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2                    141 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1                    142 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2                    143 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a                   144 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b                   145 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a                   146 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b                   147 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a                   148 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b                   149 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a                   150 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b                   151 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1                    152 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2                    153 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3                    154 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1                    155 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2                    156 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3                    157 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4                    158 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211                     159 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1                    160 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1                    161 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2                    162 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3                    163 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261                     164 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1                    165 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2                    166 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1                    167 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2                    168 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a                   169 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b                   170 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a                   171 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b                   172 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1                    173 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2                    174 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a                   175 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b                   176 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a                   177 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b                   178 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a                   179 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b                   180 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1                    181 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1                    182 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1                    183 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc03                    184 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05                    185 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08                    186 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09                    187 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11                    188 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61                    189 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62                    190 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67                    191 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68                    192 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08           193 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11           194 /* Doseerpercentage 11                                                                                                            */
    #define prmaltphst02                 195 /* Alternatieve ruimte fase 02 tijdens halfstar regelen                                                                           */
    #define prmaltphst03                 196 /* Alternatieve ruimte fase 03 tijdens halfstar regelen                                                                           */
    #define prmaltphst05                 197 /* Alternatieve ruimte fase 05 tijdens halfstar regelen                                                                           */
    #define prmaltphst08                 198 /* Alternatieve ruimte fase 08 tijdens halfstar regelen                                                                           */
    #define prmaltphst09                 199 /* Alternatieve ruimte fase 09 tijdens halfstar regelen                                                                           */
    #define prmaltphst11                 200 /* Alternatieve ruimte fase 11 tijdens halfstar regelen                                                                           */
    #define prmaltphst21                 201 /* Alternatieve ruimte fase 21 tijdens halfstar regelen                                                                           */
    #define prmaltphst2232               202 /* Alternatieve ruimte fasen 22, 32 tijdens halfstar regelen                                                                      */
    #define prmaltphst2434               203 /* Alternatieve ruimte fasen 24, 34 tijdens halfstar regelen                                                                      */
    #define prmaltphst81                 204 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 205 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst3384               206 /* Alternatieve ruimte fasen 33, 84 tijdens halfstar regelen                                                                      */
    #define prmaltphst68                 207 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst82                 208 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 209 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 210 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 211 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst38                 212 /* Alternatieve ruimte fase 38 tijdens halfstar regelen                                                                           */
    #define prmaltphst31                 213 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmaltphst28                 214 /* Alternatieve ruimte fase 28 tijdens halfstar regelen                                                                           */
    #define prmaltphst26                 215 /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    #define prmpriohst02bus              216 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risov            217 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risvrw           218 /* Prioriteit fase 02 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst03bus              219 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risov            220 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risvrw           221 /* Prioriteit fase 03 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst05bus              222 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risov            223 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risvrw           224 /* Prioriteit fase 05 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst08bus              225 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risov            226 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risvrw           227 /* Prioriteit fase 08 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst09bus              228 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risov            229 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risvrw           230 /* Prioriteit fase 09 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst11bus              231 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risov            232 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risvrw           233 /* Prioriteit fase 11 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst22fiets            234 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst28fiets            235 /* Prioriteit fase 28 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst31fietsprio        236 /* Prioriteit fase 31 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst32fietsprio        237 /* Prioriteit fase 32 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61bus              238 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            239 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           240 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62bus              241 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            242 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           243 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67bus              244 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            245 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           246 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68bus              247 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            248 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           249 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmnatxdhst02bus             250 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           251 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          252 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             253 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           254 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          255 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             256 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           257 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst31fietsprio       270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 31                                                                */
    #define prmnatxdhst32fietsprio       271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 32                                                                */
    #define prmnatxdhst61bus             272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          283 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                284 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                285 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                286 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                287 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                288 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                289 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                290 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                291 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                292 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                293 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                294 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                295 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                296 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                297 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                298 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                299 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                300 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                301 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                302 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                303 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_84                304 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                305 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                306 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                307 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                308 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                309 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                310 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                311 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                312 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                313 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL1_82                314 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                315 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                316 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                317 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                318 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                319 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                320 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                321 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                322 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                323 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_81                324 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                325 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                326 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                327 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                328 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                329 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                330 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                331 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                332 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                333 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_68                334 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                335 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                336 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                337 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                338 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                339 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                340 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                341 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                342 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                343 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_67                344 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                345 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                346 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                347 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                348 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                349 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                350 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                351 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                352 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                353 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_62                354 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                355 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                356 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                357 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                358 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                359 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                360 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                361 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                362 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                363 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_61                364 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                365 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                366 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                367 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                368 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                369 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                370 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                371 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                372 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                373 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_38                374 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                375 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                376 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                377 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                378 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                379 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                380 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                381 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                382 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                383 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_34                384 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                385 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                386 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                387 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                388 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                389 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                390 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                391 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                392 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                393 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_33                394 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                395 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                396 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                397 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                398 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                399 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                400 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                401 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                402 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                403 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_32                404 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                405 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                406 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                407 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                408 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                409 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                410 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                411 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                412 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                413 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_31                414 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                415 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                416 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                417 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                418 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                419 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                420 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                421 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                422 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                423 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_28                424 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                425 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                426 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                427 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                428 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                429 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                430 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                431 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                432 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                433 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_26                434 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                435 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                436 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                437 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                438 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                439 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                440 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                441 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                442 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                443 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_24                444 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                445 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                446 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                447 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                448 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                449 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                450 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                451 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                452 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                453 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_22                454 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                455 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                456 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                457 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                458 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                459 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                460 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                461 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                462 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                463 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_21                464 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                465 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                466 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                467 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                468 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                469 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                470 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                471 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                472 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                473 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_11                474 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                475 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                476 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                477 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                478 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                479 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                480 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                481 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                482 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                483 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_09                484 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                485 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                486 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                487 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                488 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                489 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                490 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                491 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                492 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                493 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_08                494 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                495 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                496 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                497 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                498 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                499 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                500 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                501 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                502 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                503 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_05                504 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                505 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                506 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                507 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                508 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                509 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                510 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                511 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                512 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                513 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_02                514 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                515 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                516 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                517 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                518 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                519 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                520 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                521 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                522 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                523 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                524 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                525 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                526 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                527 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                528 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                529 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                530 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                531 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                532 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                533 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_84                534 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                535 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                536 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                537 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                538 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                539 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                540 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                541 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                542 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                543 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_82                544 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                545 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                546 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                547 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                548 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                549 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                550 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                551 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                552 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                553 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_81                554 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                555 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                556 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                557 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                558 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                559 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                560 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                561 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                562 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                563 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_68                564 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                565 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                566 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                567 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                568 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                569 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                570 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                571 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                572 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                573 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_67                574 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                575 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                576 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                577 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                578 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                579 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                580 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                581 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                582 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                583 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_62                584 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                585 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                586 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                587 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                588 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                589 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                590 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                591 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                592 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                593 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_61                594 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                595 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                596 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                597 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                598 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                599 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                600 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                601 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                602 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                603 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_38                604 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                605 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                606 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                607 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                608 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                609 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                610 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                611 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                612 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                613 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_34                614 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                615 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                616 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                617 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                618 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                619 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                620 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                621 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                622 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                623 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_33                624 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                625 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                626 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                627 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                628 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                629 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                630 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                631 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                632 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                633 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_32                634 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                635 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                636 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                637 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                638 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                639 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                640 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                641 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                642 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                643 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_31                644 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                645 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                646 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                647 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                648 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                649 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                650 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                651 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                652 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                653 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_28                654 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                655 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                656 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                657 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                658 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                659 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                660 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                661 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                662 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                663 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_26                664 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                665 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                666 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                667 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                668 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                669 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                670 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                671 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                672 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                673 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_24                674 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                675 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                676 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                677 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                678 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                679 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                680 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                681 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                682 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                683 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_22                684 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                685 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                686 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                687 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                688 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                689 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                690 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                691 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                692 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                693 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_21                694 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                695 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                696 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                697 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                698 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                699 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                700 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                701 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                702 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                703 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_11                704 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                705 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                706 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                707 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                708 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                709 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                710 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                711 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                712 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                713 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_09                714 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                715 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                716 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                717 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                718 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                719 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                720 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                721 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                722 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                723 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_08                724 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                725 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                726 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                727 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                728 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                729 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                730 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                731 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                732 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                733 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_05                734 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                735 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                736 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                737 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                738 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                739 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                740 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                741 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                742 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                743 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_02                744 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                745 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                746 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                747 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                748 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                749 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                750 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                751 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                752 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                753 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                754 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                755 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                756 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                757 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                758 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                759 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                760 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                761 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                762 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                763 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_84                764 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                765 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                766 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                767 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                768 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                769 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                770 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                771 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                772 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                773 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_82                774 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                775 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                776 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                777 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                778 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                779 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                780 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                781 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                782 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                783 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_81                784 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                785 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                786 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                787 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                788 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                789 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                790 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                791 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                792 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                793 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_68                794 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                795 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                796 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                797 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                798 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                799 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                800 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                801 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                802 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                803 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_67                804 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                805 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                806 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                807 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                808 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                809 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                810 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                811 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                812 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                813 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_62                814 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                815 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                816 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                817 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                818 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                819 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                820 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                821 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                822 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                823 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_61                824 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                825 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                826 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                827 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                828 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                829 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                830 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                831 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                832 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                833 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_38                834 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                835 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                836 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                837 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                838 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                839 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                840 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                841 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                842 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                843 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_34                844 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                845 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                846 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                847 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                848 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                849 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                850 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                851 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                852 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                853 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_33                854 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                855 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                856 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                857 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                858 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                859 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                860 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                861 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                862 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                863 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_32                864 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                865 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                866 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                867 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                868 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                869 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                870 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                871 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                872 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                873 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_31                874 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                875 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                876 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                877 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                878 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                879 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                880 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                881 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                882 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                883 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_28                884 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                885 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                886 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                887 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                888 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                889 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                890 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                891 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                892 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                893 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_26                894 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                895 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                896 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                897 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                898 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                899 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                900 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                901 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                902 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                903 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_24                904 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                905 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                906 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                907 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                908 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                909 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                910 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                911 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                912 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                913 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_22                914 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                915 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                916 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                917 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                918 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                919 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                920 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                921 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                922 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                923 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_21                924 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                925 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                926 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                927 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                928 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                929 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                930 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                931 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                932 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                933 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_11                934 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                935 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                936 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                937 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                938 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                939 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                940 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                941 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                942 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                943 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_09                944 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                945 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                946 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                947 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                948 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                949 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                950 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                951 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                952 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                953 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_08                954 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                955 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                956 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                957 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                958 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                959 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                960 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                961 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                962 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                963 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_05                964 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                965 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                966 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                967 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                968 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                969 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                970 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                971 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                972 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                973 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmrstotxa                   974 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 975 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   976 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   977 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   978 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   979 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   980 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   981 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                982 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                983 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                984 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                985 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                986 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                987 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                988 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                989 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                990 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122                991 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                992 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                993 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                994 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                995 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                996 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                997 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                998 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                999 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484               1000 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               1001 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1002 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv03                     1003 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     1004 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     1005 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     1006 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     1007 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     1008 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     1009 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                     1010 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     1011 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     1012 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     1013 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     1014 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     1015 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     1016 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     1017 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1018 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1019 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1020 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1021 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1022 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1023 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1024 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1025 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03                   1026 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05                   1027 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08                   1028 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09                   1029 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11                   1030 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21                   1031 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22                   1032 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24                   1033 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26                   1034 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28                   1035 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31                   1036 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32                   1037 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33                   1038 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34                   1039 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38                   1040 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61                   1041 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62                   1042 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67                   1043 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68                   1044 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81                   1045 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82                   1046 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84                   1047 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262                  1048 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868                  1049 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168                  1050 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221                  1051 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132                  1052 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231                  1053 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334                  1054 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433                  1055 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281                  1056 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg         1057 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1058 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus      1059 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus       1060 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus       1061 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus      1062 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1063 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1064 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1065 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1066 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1067 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1068 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1069 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1070 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1071 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1072 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1073 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1074 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1075 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1076 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1077 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1078 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1079 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1080 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1081 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1082 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1083 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1084 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1085 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1086 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1087 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1088 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1089 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1090 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1091 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1092 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1093 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1094 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1095 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1096 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1097 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1098 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1099 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1100 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1101 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1102 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1103 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1104 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1105 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1106 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1107 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1108 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1109 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1110 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1111 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1112 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1113 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1114 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1115 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1116 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1117 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1118 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1119 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1120 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1121 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1122 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1123 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1124 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1125 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1126 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1127 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1128 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1129 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1130 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1131 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1132 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1133 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1134 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1135 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1136 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1137 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1138 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1139 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1140 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1141 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1142 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1143 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1144 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1145 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1146 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1147 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1148 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1149 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1150 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1151 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1152 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1153 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1154 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1155 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1156 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1157 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1158 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1159 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1160 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1161 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1162 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1163 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1164 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1165 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1166 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1167 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1168 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1169 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1170 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1171 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1172 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1173 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1174 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1175 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1176 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1177 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1178 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1179 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1180 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1181 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1182 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1183 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1184 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1185 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1186 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1187 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1188 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1189 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1190 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1191 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1192 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1193 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1194 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1195 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1196 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1197 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1198 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1199 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1200 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1201 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1202 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1203 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1204 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1205 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1206 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1207 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1208 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1209 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                 1210 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                1211 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                 1212 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                 1213 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus              1214 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                1215 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1216 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1217 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1218 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1219 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1220 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1221
    #define prmrisend02risov            1222
    #define prmriseta02risov            1223
    #define prmrisrole02risov           1224
    #define prmrissubrole02risov        1225
    #define prmrisstationtype02risov    1226
    #define prmrisapproachid02risov     1227
    #define prmrislaneid02risov_1       1228
    #define prmrto02risvrw              1229 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1230 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1231 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1232 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1233 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1234
    #define prmrisend02risvrw           1235
    #define prmriseta02risvrw           1236
    #define prmrisrole02risvrw          1237
    #define prmrissubrole02risvrw       1238
    #define prmrisstationtype02risvrw   1239
    #define prmrisapproachid02risvrw    1240
    #define prmrislaneid02risvrw_1      1241
    #define prmrto03bus                 1242 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1243 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1244 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1245 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1246 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1247 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1248 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1249 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1250 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1251 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1252 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1253
    #define prmrisend03risov            1254
    #define prmriseta03risov            1255
    #define prmrisrole03risov           1256
    #define prmrissubrole03risov        1257
    #define prmrisstationtype03risov    1258
    #define prmrisapproachid03risov     1259
    #define prmrislaneid03risov_1       1260
    #define prmrto03risvrw              1261 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1262 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1263 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1264 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1265 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1266
    #define prmrisend03risvrw           1267
    #define prmriseta03risvrw           1268
    #define prmrisrole03risvrw          1269
    #define prmrissubrole03risvrw       1270
    #define prmrisstationtype03risvrw   1271
    #define prmrisapproachid03risvrw    1272
    #define prmrislaneid03risvrw_1      1273
    #define prmrto05bus                 1274 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1275 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1276 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1277 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1278 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1279 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1280 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1281 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1282 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1283 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1284 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1285
    #define prmrisend05risov            1286
    #define prmriseta05risov            1287
    #define prmrisrole05risov           1288
    #define prmrissubrole05risov        1289
    #define prmrisstationtype05risov    1290
    #define prmrisapproachid05risov     1291
    #define prmrislaneid05risov_1       1292
    #define prmrto05risvrw              1293 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw             1294 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw              1295 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw              1296 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw             1297 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw         1298
    #define prmrisend05risvrw           1299
    #define prmriseta05risvrw           1300
    #define prmrisrole05risvrw          1301
    #define prmrissubrole05risvrw       1302
    #define prmrisstationtype05risvrw   1303
    #define prmrisapproachid05risvrw    1304
    #define prmrislaneid05risvrw_1      1305
    #define prmrto08bus                 1306 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1307 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1308 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1309 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1310 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1311 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1312 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1313 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1314 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1315 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1316 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1317
    #define prmrisend08risov            1318
    #define prmriseta08risov            1319
    #define prmrisrole08risov           1320
    #define prmrissubrole08risov        1321
    #define prmrisstationtype08risov    1322
    #define prmrisapproachid08risov     1323
    #define prmrislaneid08risov_1       1324
    #define prmrislaneid08risov_2       1325
    #define prmrto08risvrw              1326 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1327 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1328 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1329 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1330 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1331
    #define prmrisend08risvrw           1332
    #define prmriseta08risvrw           1333
    #define prmrisrole08risvrw          1334
    #define prmrissubrole08risvrw       1335
    #define prmrisstationtype08risvrw   1336
    #define prmrisapproachid08risvrw    1337
    #define prmrislaneid08risvrw_1      1338
    #define prmrislaneid08risvrw_2      1339
    #define prmrto09bus                 1340 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1341 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1342 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1343 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1344 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1345 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1346 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1347 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1348 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1349 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1350 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1351
    #define prmrisend09risov            1352
    #define prmriseta09risov            1353
    #define prmrisrole09risov           1354
    #define prmrissubrole09risov        1355
    #define prmrisstationtype09risov    1356
    #define prmrisapproachid09risov     1357
    #define prmrislaneid09risov_1       1358
    #define prmrto09risvrw              1359 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw             1360 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw              1361 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw              1362 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw             1363 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw         1364
    #define prmrisend09risvrw           1365
    #define prmriseta09risvrw           1366
    #define prmrisrole09risvrw          1367
    #define prmrissubrole09risvrw       1368
    #define prmrisstationtype09risvrw   1369
    #define prmrisapproachid09risvrw    1370
    #define prmrislaneid09risvrw_1      1371
    #define prmrto11bus                 1372 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                1373 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                 1374 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                 1375 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus              1376 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                1377 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov               1378 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov              1379 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov               1380 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov               1381 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov              1382 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov          1383
    #define prmrisend11risov            1384
    #define prmriseta11risov            1385
    #define prmrisrole11risov           1386
    #define prmrissubrole11risov        1387
    #define prmrisstationtype11risov    1388
    #define prmrisapproachid11risov     1389
    #define prmrislaneid11risov_1       1390
    #define prmrto11risvrw              1391 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw             1392 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw              1393 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw              1394 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw             1395 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw         1396
    #define prmrisend11risvrw           1397
    #define prmriseta11risvrw           1398
    #define prmrisrole11risvrw          1399
    #define prmrissubrole11risvrw       1400
    #define prmrisstationtype11risvrw   1401
    #define prmrisapproachid11risvrw    1402
    #define prmrislaneid11risvrw_1      1403
    #define prmftsblok22fietsfiets      1404 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1405 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1406 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1407 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1408 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1409 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1410 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1411 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets      1412 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 1413 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets    1414 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets     1415 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets               1416 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              1417 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               1418 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               1419 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmprio28fiets              1420 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto31fietsprio           1421 /* Ongehinderde rijtijd prioriteit fase 31                                                                                        */
    #define prmrtbg31fietsprio          1422 /* Beperkt gehinderde rijtijd prioriteit fase 31                                                                                  */
    #define prmrtg31fietsprio           1423 /* Gehinderde rijtijd prioriteit fase 31                                                                                          */
    #define prmomx31fietsprio           1424 /* Ondermaximum OV fase 31                                                                                                        */
    #define prmprio31fietsprio          1425 /* Prioriteitsinstelling OV fase 31                                                                                               */
    #define prmrto32fietsprio           1426 /* Ongehinderde rijtijd prioriteit fase 32                                                                                        */
    #define prmrtbg32fietsprio          1427 /* Beperkt gehinderde rijtijd prioriteit fase 32                                                                                  */
    #define prmrtg32fietsprio           1428 /* Gehinderde rijtijd prioriteit fase 32                                                                                          */
    #define prmomx32fietsprio           1429 /* Ondermaximum OV fase 32                                                                                                        */
    #define prmprio32fietsprio          1430 /* Prioriteitsinstelling OV fase 32                                                                                               */
    #define prmrto61bus                 1431 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1432 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1433 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1434 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1435 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1436 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1437 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1438 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1439 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1440 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1441 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1442
    #define prmrisend61risov            1443
    #define prmriseta61risov            1444
    #define prmrisrole61risov           1445
    #define prmrissubrole61risov        1446
    #define prmrisstationtype61risov    1447
    #define prmrisapproachid61risov     1448
    #define prmrislaneid61risov_1       1449
    #define prmrto61risvrw              1450 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1451 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1452 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1453 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1454 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1455
    #define prmrisend61risvrw           1456
    #define prmriseta61risvrw           1457
    #define prmrisrole61risvrw          1458
    #define prmrissubrole61risvrw       1459
    #define prmrisstationtype61risvrw   1460
    #define prmrisapproachid61risvrw    1461
    #define prmrislaneid61risvrw_1      1462
    #define prmrto62bus                 1463 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1464 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1465 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1466 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1467 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1468 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1469 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1470 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1471 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1472 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1473 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1474
    #define prmrisend62risov            1475
    #define prmriseta62risov            1476
    #define prmrisrole62risov           1477
    #define prmrissubrole62risov        1478
    #define prmrisstationtype62risov    1479
    #define prmrisapproachid62risov     1480
    #define prmrislaneid62risov_1       1481
    #define prmrislaneid62risov_2       1482
    #define prmrto62risvrw              1483 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1484 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1485 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1486 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1487 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1488
    #define prmrisend62risvrw           1489
    #define prmriseta62risvrw           1490
    #define prmrisrole62risvrw          1491
    #define prmrissubrole62risvrw       1492
    #define prmrisstationtype62risvrw   1493
    #define prmrisapproachid62risvrw    1494
    #define prmrislaneid62risvrw_1      1495
    #define prmrislaneid62risvrw_2      1496
    #define prmrto67bus                 1497 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1498 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1499 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1500 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1501 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1502 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1503 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1504 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1505 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1506 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1507 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1508
    #define prmrisend67risov            1509
    #define prmriseta67risov            1510
    #define prmrisrole67risov           1511
    #define prmrissubrole67risov        1512
    #define prmrisstationtype67risov    1513
    #define prmrisapproachid67risov     1514
    #define prmrislaneid67risov_1       1515
    #define prmrto67risvrw              1516 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1517 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1518 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1519 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1520 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1521
    #define prmrisend67risvrw           1522
    #define prmriseta67risvrw           1523
    #define prmrisrole67risvrw          1524
    #define prmrissubrole67risvrw       1525
    #define prmrisstationtype67risvrw   1526
    #define prmrisapproachid67risvrw    1527
    #define prmrislaneid67risvrw_1      1528
    #define prmrto68bus                 1529 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1530 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1531 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1532 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1533 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1534 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1535 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1536 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1537 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1538 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1539 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1540
    #define prmrisend68risov            1541
    #define prmriseta68risov            1542
    #define prmrisrole68risov           1543
    #define prmrissubrole68risov        1544
    #define prmrisstationtype68risov    1545
    #define prmrisapproachid68risov     1546
    #define prmrislaneid68risov_1       1547
    #define prmrislaneid68risov_2       1548
    #define prmrto68risvrw              1549 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1550 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1551 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1552 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1553 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1554
    #define prmrisend68risvrw           1555
    #define prmriseta68risvrw           1556
    #define prmrisrole68risvrw          1557
    #define prmrissubrole68risvrw       1558
    #define prmrisstationtype68risvrw   1559
    #define prmrisapproachid68risvrw    1560
    #define prmrislaneid68risvrw_1      1561
    #define prmrislaneid68risvrw_2      1562
    #define prmpriohd02                 1563 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1564 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1565 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1566 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1567
    #define prmrisend02hd               1568
    #define prmriseta02hd               1569
    #define prmrisrole02hd              1570
    #define prmrissubrole02hd           1571
    #define prmrisstationtype02hd       1572
    #define prmrisapproachid02hd        1573
    #define prmrislaneid02hd_1          1574
    #define prmpriohd03                 1575 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1576 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1577 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1578 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd             1579
    #define prmrisend03hd               1580
    #define prmriseta03hd               1581
    #define prmrisrole03hd              1582
    #define prmrissubrole03hd           1583
    #define prmrisstationtype03hd       1584
    #define prmrisapproachid03hd        1585
    #define prmrislaneid03hd_1          1586
    #define prmpriohd05                 1587 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1588 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1589 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1590 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd             1591
    #define prmrisend05hd               1592
    #define prmriseta05hd               1593
    #define prmrisrole05hd              1594
    #define prmrissubrole05hd           1595
    #define prmrisstationtype05hd       1596
    #define prmrisapproachid05hd        1597
    #define prmrislaneid05hd_1          1598
    #define prmpriohd08                 1599 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1600 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1601 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1602 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd             1603
    #define prmrisend08hd               1604
    #define prmriseta08hd               1605
    #define prmrisrole08hd              1606
    #define prmrissubrole08hd           1607
    #define prmrisstationtype08hd       1608
    #define prmrisapproachid08hd        1609
    #define prmrislaneid08hd_1          1610
    #define prmrislaneid08hd_2          1611
    #define prmpriohd09                 1612 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1613 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1614 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1615 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd             1616
    #define prmrisend09hd               1617
    #define prmriseta09hd               1618
    #define prmrisrole09hd              1619
    #define prmrissubrole09hd           1620
    #define prmrisstationtype09hd       1621
    #define prmrisapproachid09hd        1622
    #define prmrislaneid09hd_1          1623
    #define prmpriohd11                 1624 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1625 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1626 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1627 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd             1628
    #define prmrisend11hd               1629
    #define prmriseta11hd               1630
    #define prmrisrole11hd              1631
    #define prmrissubrole11hd           1632
    #define prmrisstationtype11hd       1633
    #define prmrisapproachid11hd        1634
    #define prmrislaneid11hd_1          1635
    #define prmpriohd61                 1636 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1637 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1638 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1639 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd             1640
    #define prmrisend61hd               1641
    #define prmriseta61hd               1642
    #define prmrisrole61hd              1643
    #define prmrissubrole61hd           1644
    #define prmrisstationtype61hd       1645
    #define prmrisapproachid61hd        1646
    #define prmrislaneid61hd_1          1647
    #define prmpriohd62                 1648 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1649 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1650 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1651 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd             1652
    #define prmrisend62hd               1653
    #define prmriseta62hd               1654
    #define prmrisrole62hd              1655
    #define prmrissubrole62hd           1656
    #define prmrisstationtype62hd       1657
    #define prmrisapproachid62hd        1658
    #define prmrislaneid62hd_1          1659
    #define prmrislaneid62hd_2          1660
    #define prmpriohd67                 1661 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1662 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1663 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1664 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd             1665
    #define prmrisend67hd               1666
    #define prmriseta67hd               1667
    #define prmrisrole67hd              1668
    #define prmrissubrole67hd           1669
    #define prmrisstationtype67hd       1670
    #define prmrisapproachid67hd        1671
    #define prmrislaneid67hd_1          1672
    #define prmpriohd68                 1673 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1674 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1675 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1676 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd             1677
    #define prmrisend68hd               1678
    #define prmriseta68hd               1679
    #define prmrisrole68hd              1680
    #define prmrissubrole68hd           1681
    #define prmrisstationtype68hd       1682
    #define prmrisapproachid68hd        1683
    #define prmrislaneid68hd_1          1684
    #define prmrislaneid68hd_2          1685
    #define prmkarsg02                  1686 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1687 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1688 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1689 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1690 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1691 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1692 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1693 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1694 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1695 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1696 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1697 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1698 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1699 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1700 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1701 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1702 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1703 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1704 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1705 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                    1706 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1                    1707 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1                    1708 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2                    1709 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2                    1710 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2                    1711 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3                    1712 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3                    1713 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3                    1714 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4                    1715 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4                    1716 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4                    1717 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5                    1718 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5                    1719 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5                    1720 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6                    1721 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6                    1722 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6                    1723 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1724 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1725 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1726 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1727 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1728 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1729 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3          1730 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3          1731 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3          1732 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmmg2_02                   1733 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03                   1734 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05                   1735 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08                   1736 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09                   1737 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11                   1738 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21                   1739 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22                   1740 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24                   1741 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26                   1742 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28                   1743 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61                   1744 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62                   1745 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67                   1746 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68                   1747 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81                   1748 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82                   1749 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84                   1750 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02                   1751 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03                   1752 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05                   1753 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08                   1754 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09                   1755 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11                   1756 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21                   1757 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22                   1758 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24                   1759 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26                   1760 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28                   1761 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61                   1762 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62                   1763 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67                   1764 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68                   1765 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81                   1766 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82                   1767 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84                   1768 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02                   1769 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03                   1770 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05                   1771 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08                   1772 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09                   1773 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11                   1774 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21                   1775 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22                   1776 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24                   1777 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26                   1778 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28                   1779 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61                   1780 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62                   1781 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67                   1782 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68                   1783 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81                   1784 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82                   1785 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84                   1786 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02                   1787 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03                   1788 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05                   1789 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08                   1790 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09                   1791 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11                   1792 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21                   1793 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22                   1794 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24                   1795 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26                   1796 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28                   1797 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61                   1798 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62                   1799 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67                   1800 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68                   1801 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81                   1802 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82                   1803 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84                   1804 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02                   1805 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03                   1806 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05                   1807 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08                   1808 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09                   1809 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11                   1810 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21                   1811 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22                   1812 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24                   1813 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26                   1814 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28                   1815 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61                   1816 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62                   1817 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67                   1818 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68                   1819 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81                   1820 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82                   1821 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84                   1822 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02                   1823 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03                   1824 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05                   1825 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08                   1826 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09                   1827 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11                   1828 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21                   1829 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22                   1830 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24                   1831 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26                   1832 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28                   1833 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61                   1834 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62                   1835 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67                   1836 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68                   1837 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81                   1838 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82                   1839 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84                   1840 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02          1841 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1842 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1843 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid84          1844 /* Approach id voor fase 84                                                                                                       */
    #define prmrisapproachid82          1845 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid81          1846 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid68          1847 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid67          1848 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid62          1849 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid61          1850 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid38          1851 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid34          1852 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid33          1853 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid32          1854 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid31          1855 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid28          1856 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid26          1857 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid24          1858 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid22          1859 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid21          1860 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid11          1861 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid09          1862 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid08          1863 /* Approach id voor fase 08                                                                                                       */
    #define prmrislaneid02_1            1864 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1865 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1866 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid84_1            1867 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrislaneid82_1            1868 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid81_1            1869 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid68_1            1870 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1871 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid67_1            1872 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid62_1            1873 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1874 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid61_1            1875 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid38_1            1876 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1877 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid34_1            1878 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1879 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid33_1            1880 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1881 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid32_1            1882 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1883 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid31_1            1884 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1885 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid28_1            1886 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid26_1            1887 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid24_1            1888 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid22_1            1889 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid21_1            1890 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid11_1            1891 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid09_1            1892 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid08_1            1893 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1894 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrisastart03mveh1         1895 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1         1896 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1         1897 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2         1898 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1         1899 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1         1900 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1          1901 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1          1902 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1          1903 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1          1904 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1          1905 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1          1906 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2          1907 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart32vtg1          1908 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg2          1909 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart33vtg1          1910 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg2          1911 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart34vtg1          1912 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg2          1913 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart38vtg1          1914 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg2          1915 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart61mveh1         1916 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart62mveh1         1917 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh2         1918 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart67mveh1         1919 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart68mveh1         1920 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh2         1921 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart81fts1          1922 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart82fts1          1923 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart84fts1          1924 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
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
    #define prmrisvend03mveh1           1985 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1           1986 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1           1987 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2           1988 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1           1989 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1           1990 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1            1991 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1            1992 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1            1993 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1            1994 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1            1995 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1            1996 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2            1997 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend32vtg1            1998 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg2            1999 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend33vtg1            2000 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg2            2001 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend34vtg1            2002 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg2            2003 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend38vtg1            2004 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg2            2005 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend61mveh1           2006 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend62mveh1           2007 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh2           2008 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend67mveh1           2009 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend68mveh1           2010 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh2           2011 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend81fts1            2012 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend82fts1            2013 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend84fts1            2014 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmmkrgd24_3                2015 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2016 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2017 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2018 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2019 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2020 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2021 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2022 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2023 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2024 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2025 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2026 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2027 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2028 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2029 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2030 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09                2031 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09                2032 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11                2033 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2034 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2035 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2036 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2037 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2038 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                2039 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                2040 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmsiexgrperc33             2041 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             2042 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
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
    #define prioFC28fiets 19
    #define prioFC31fietsprio 20
    #define prioFC32fietsprio 21
    #define prioFC61bus 22
    #define prioFC61risov 23
    #define prioFC61risvrw 24
    #define prioFC62bus 25
    #define prioFC62risov 26
    #define prioFC62risvrw 27
    #define prioFC67bus 28
    #define prioFC67risov 29
    #define prioFC67risvrw 30
    #define prioFC68bus 31
    #define prioFC68risov 32
    #define prioFC68risvrw 33
    #define hdFC02 34
    #define hdFC03 35
    #define hdFC05 36
    #define hdFC08 37
    #define hdFC09 38
    #define hdFC11 39
    #define hdFC61 40
    #define hdFC62 41
    #define hdFC67 42
    #define hdFC68 43
    #define prioFCMAX 44

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

